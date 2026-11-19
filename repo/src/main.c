#define _GNU_SOURCE
// Host entry point: init SDL, load the game's modules, run the recompiled exe.
#if defined(__linux__) && !defined(__EMSCRIPTEN__)
#include <sched.h>
#include <unistd.h>
#endif
#include "host.h"
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <math.h>
#include <signal.h>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

extern char g_save_dir[512];
extern char g_cmdline_extra[512];
int g_fs_dirty;

uint32_t host_ticks(void) { return SDL_GetTicks(); }
uint64_t host_time_ns(void) {
    static uint64_t f;
    if (!f) f = SDL_GetPerformanceFrequency();
    uint64_t c = SDL_GetPerformanceCounter();
    return (uint64_t)((double)c * (1e9 / (double)f));
}
void host_yield(void) {
#ifndef __EMSCRIPTEN__
    SDL_Delay(1);
#endif
}
void host_sleep(uint32_t ms) {
#ifndef __EMSCRIPTEN__
    if (ms > 200) ms = 200;
    if (ms) SDL_Delay(ms);
#else
    (void)ms;
#endif
}

void host_shutdown(void) {
    static int done;
    if (done) return;
    done = 1;
    host_log("shutdown: guest heap used %u KB, peak %u KB\n", heap_used_bytes() >> 10, heap_peak_bytes() >> 10);
    gfx_shutdown();
    audio_shutdown();
    SDL_Quit();
}

void host_sync_fs(void) {
#ifdef __EMSCRIPTEN__
    if (!g_fs_dirty) return;
    g_fs_dirty = 0;
    EM_ASM(FS.syncfs(false, function (err) { if (err) console.log('save sync failed', err); }););
#endif
}

void host_exit_game(int code) {
    host_sync_fs();
#ifdef __EMSCRIPTEN__
    emscripten_cancel_main_loop();
    EM_ASM(if (Module.onGameExit) Module.onGameExit(););
    emscripten_force_exit(code);
#endif
    host_shutdown();
    exit(code);
}

#ifdef __ANDROID__
static int g_target_fps = 60; // Default 60 FPS cap on mobile to save battery and thermals
#else
static int g_target_fps = 0; // 0 = vsync/uncapped, 30, 60, 90, 120
#endif
static uint64_t g_last_frame_counter = 0;

// one iteration of the game's main loop, timed
static int tact_once(void) {
    if (g_target_fps > 0) {
        uint64_t freq = SDL_GetPerformanceFrequency();
        uint64_t target_ticks = freq / (uint64_t)g_target_fps;
        if (g_last_frame_counter != 0) {
            uint64_t elapsed = SDL_GetPerformanceCounter() - g_last_frame_counter;
            if (elapsed < target_ticks) {
                uint64_t remaining = target_ticks - elapsed;
                uint32_t delay_ms = (uint32_t)((remaining * 1000) / freq);
                if (delay_ms > 1) {
                    SDL_Delay(delay_ms - 1);
                }
                while (SDL_GetPerformanceCounter() - g_last_frame_counter < target_ticks) {
#if defined(__aarch64__) || defined(__arm__)
                    __asm__ volatile("yield");
#elif defined(__x86_64__) || defined(__i386__)
                    __builtin_ia32_pause();
#else
                    SDL_Delay(0);
#endif
                }
            }
        }
        g_last_frame_counter = SDL_GetPerformanceCounter();
    }
    uint64_t t0 = SDL_GetPerformanceCounter();
    int r = port_frame_once();
    static double acc, worst; static uint32_t n;
    double ms = (double)(SDL_GetPerformanceCounter() - t0) * 1000.0 / SDL_GetPerformanceFrequency();
    acc += ms; if (ms > worst) worst = ms;
#ifdef __EMSCRIPTEN__
    EM_ASM({ Module.tacts = (Module.tacts || 0) + 1; Module.lastTactMs = $0; }, ms);
#endif
    n++;
    if (n == 1 || n == 10 || n == 60 || n % 300 == 0) {
        host_log("perf: frame %u, avg %.2f ms, worst %.1f ms, guest heap %u KB (peak %u KB)\n",
                 host_frame_count(), acc / n, worst, heap_used_bytes() >> 10, heap_peak_bytes() >> 10);
        if (n % 300 == 0) { acc = worst = 0; n = 0; }
    }
    return r;
}

#ifdef __EMSCRIPTEN__
static double last_frame_ms;
static int loop_running;
static void em_frame(void) {
    last_frame_ms = emscripten_get_now();
    if (tact_once()) {
        host_log("game requested exit\n");
        host_exit_game(0);
        return;
    }
    static uint32_t last_sync;
    uint32_t now = SDL_GetTicks();
    if (now - last_sync > 2000) { last_sync = now; host_sync_fs(); }
}
// A background tab gets no animation frames. Online, a host that stops would freeze every other player, so the page
// calls this from a worker timer (web/shell.html) and it runs a frame whenever the animation frames have stopped.
EMSCRIPTEN_KEEPALIVE void port_background_tick(void) {
    if (loop_running && emscripten_get_now() - last_frame_ms > 100) em_frame();
}
#endif

// recompiler hook target: replaces the game's main loop (src/game.c, recomp_config.json)
void game_loop_begin(void);
void host_frame_loop(void) {
    game_loop_begin();
    host_log("entering main loop\n");
#ifdef __EMSCRIPTEN__
    loop_running = 1;
    emscripten_set_main_loop(em_frame, 0, 1);
#else
    while (!tact_once()) {}
    host_log("game requested exit\n");
    host_exit_game(0);
#endif
}

static int file_exists(const char *p) { struct stat st; return stat(p, &st) == 0; }

// PORT_WATCHDOG=<seconds> (native): dump where the guest is after that long, then exit. For hangs.
#ifndef __EMSCRIPTEN__
static int watchdog(void *arg) {
    int secs = (int)(intptr_t)arg;
    for (int i = 0; i < 3; i++) {
        SDL_Delay((uint32_t)secs * 1000 / 3);
        void host_recent_dump(void);
        host_log("watchdog sample %d (frame %u):\n", i, host_frame_count());
        host_recent_dump();
        host_backtrace();
    }
    void host_call_stats(void);
    host_call_stats();
    host_log("watchdog: exiting\n");
    exit(3);
    return 0;
}

static int android_watchdog(void *arg) {
    (void)arg;
    uint32_t last_fr = 0;
    int stuck = 0;
    while (1) {
        SDL_Delay(3000);
        uint32_t fr = host_frame_count();
        if (fr == last_fr) {
            stuck++;
            if (stuck >= 10 && (stuck % 5 == 0)) {
                host_log("WATCHDOG: no frame progress (frame %u, sample %d)\n", fr, stuck);
                void host_recent_dump(void);
                host_recent_dump();
                host_backtrace();
            }
        } else {
            last_fr = fr;
            stuck = 0;
        }
    }
    return 0;
}
#endif

extern int g_target_res_w, g_target_res_h;
extern int g_target_fov;

static void patch_ini_file(const char *path, int target_w, int target_h, int target_fov) {
    if (!path || !path[0]) return;
    FILE *f = fopen(path, "rb");
    if (!f) return;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0 || sz > 2 * 1024 * 1024) { fclose(f); return; }
    char *buf = malloc((size_t)sz + 4096);
    if (!buf) { fclose(f); return; }
    size_t rd = fread(buf, 1, (size_t)sz, f);
    buf[rd] = '\0';
    fclose(f);

    int modified = 0;
    const size_t new_cap = (size_t)sz + 16384;
    char *new_buf = malloc(new_cap);
    if (!new_buf) { free(buf); return; }
    size_t new_len = 0;
    new_buf[0] = '\0';

#define INI_APPEND(s) do { \
    const char *_s = (s); \
    size_t _slen = strlen(_s); \
    if (new_len + _slen < new_cap) { \
        memcpy(new_buf + new_len, _s, _slen); \
        new_len += _slen; \
        new_buf[new_len] = '\0'; \
    } \
} while (0)

    char *saveptr = NULL;
    char *line = strtok_r(buf, "\r\n", &saveptr);
    int in_winclient = 0, has_winclient = 0;
    int in_pcontroller = 0;
    int in_input = 0, has_input = 0;
    int wrote_vx = 0, wrote_vy = 0, wrote_fx = 0, wrote_fy = 0, wrote_mx = 0, wrote_my = 0;
    int wrote_def_fov = 0, wrote_des_fov = 0;
    int wrote_f1 = 0, wrote_f2 = 0, wrote_f3 = 0, wrote_f4 = 0;
    int wrote_f7 = 0, wrote_f8 = 0, wrote_f9 = 0;
    int wrote_f10 = 0, wrote_f11 = 0, wrote_f12 = 0;
    int wrote_tilde = 0;
    int wrote_space = 0, wrote_enter = 0;
    int wrote_np1 = 0, wrote_np2 = 0, wrote_np3 = 0, wrote_np4 = 0;
    int wrote_np5 = 0, wrote_np6 = 0, wrote_np7 = 0, wrote_np8 = 0;

    while (line) {
        if (line[0] == '[') {
            if (in_winclient) {
                char s[128];
                if (!wrote_vx && target_w > 0) { snprintf(s, sizeof(s), "WindowedViewportX=%d\r\n", target_w); INI_APPEND(s); modified = 1; }
                if (!wrote_vy && target_h > 0) { snprintf(s, sizeof(s), "WindowedViewportY=%d\r\n", target_h); INI_APPEND(s); modified = 1; }
                if (!wrote_fx && target_w > 0) { snprintf(s, sizeof(s), "FullscreenViewportX=%d\r\n", target_w); INI_APPEND(s); modified = 1; }
                if (!wrote_fy && target_h > 0) { snprintf(s, sizeof(s), "FullscreenViewportY=%d\r\n", target_h); INI_APPEND(s); modified = 1; }
                if (!wrote_mx && target_w > 0) { snprintf(s, sizeof(s), "MenuViewportX=%d\r\n", target_w); INI_APPEND(s); modified = 1; }
                if (!wrote_my && target_h > 0) { snprintf(s, sizeof(s), "MenuViewportY=%d\r\n", target_h); INI_APPEND(s); modified = 1; }
                in_winclient = 0;
            }
            if (in_pcontroller) {
                char s[128];
                if (!wrote_def_fov && target_fov > 0) { snprintf(s, sizeof(s), "DefaultFOV=%d\r\n", target_fov); INI_APPEND(s); modified = 1; }
                if (!wrote_des_fov && target_fov > 0) { snprintf(s, sizeof(s), "DesiredFOV=%d.000000\r\n", target_fov); INI_APPEND(s); modified = 1; }
                in_pcontroller = 0;
            }
            if (in_input) {
                if (!wrote_f1) { INI_APPEND("F1=god\r\n"); modified = 1; }
                if (!wrote_f2) { INI_APPEND("F2=loaded\r\n"); modified = 1; }
                if (!wrote_f3) { INI_APPEND("F3=allammo\r\n"); modified = 1; }
                if (!wrote_f4) { INI_APPEND("F4=killall zombiebase\r\n"); modified = 1; }
                if (!wrote_f7) { INI_APPEND("F7=ghost\r\n"); modified = 1; }
                if (!wrote_f8) { INI_APPEND("F8=walk\r\n"); modified = 1; }
                if (!wrote_f9) { INI_APPEND("F9=shot\r\n"); modified = 1; }
                if (!wrote_f10) { INI_APPEND("F10=slomo 1.8\r\n"); modified = 1; }
                if (!wrote_f11) { INI_APPEND("F11=slomo 0.4\r\n"); modified = 1; }
                if (!wrote_f12) { INI_APPEND("F12=slomo 1.0\r\n"); modified = 1; }
                if (!wrote_tilde) { INI_APPEND("Tilde=type\r\n"); modified = 1; }
                if (!wrote_np1) { INI_APPEND("NumPad1=open CH01\r\n"); modified = 1; }
                if (!wrote_np2) { INI_APPEND("NumPad2=open CH02\r\n"); modified = 1; }
                if (!wrote_np3) { INI_APPEND("NumPad3=open CH03\r\n"); modified = 1; }
                if (!wrote_np4) { INI_APPEND("NumPad4=open CH04\r\n"); modified = 1; }
                if (!wrote_np5) { INI_APPEND("NumPad5=open CH05\r\n"); modified = 1; }
                if (!wrote_np6) { INI_APPEND("NumPad6=open CH06\r\n"); modified = 1; }
                if (!wrote_np7) { INI_APPEND("NumPad7=open CH07\r\n"); modified = 1; }
                if (!wrote_np8) { INI_APPEND("NumPad8=open CH08\r\n"); modified = 1; }
                if (!wrote_space) { INI_APPEND("Space=Jump\r\n"); modified = 1; }
                if (!wrote_enter) { INI_APPEND("Enter=Fire\r\n"); modified = 1; }
                in_input = 0;
            }

            if (strcasestr(line, "WinDrv.WindowsClient")) {
                in_winclient = 1;
                has_winclient = 1;
            } else if (strcasestr(line, "Engine.PlayerController") || strcasestr(line, "DOTZPlayerController")) {
                in_pcontroller = 1;
            } else if (strcasestr(line, "Engine.Input")) {
                in_input = 1;
                has_input = 1;
            }
            INI_APPEND(line);
            INI_APPEND("\r\n");
        } else if (in_input) {
            if (strncasecmp(line, "F1=", 3) == 0) {
                INI_APPEND("F1=god\r\n");
                if (strcmp(line, "F1=god") != 0) modified = 1;
                wrote_f1 = 1;
            } else if (strncasecmp(line, "F2=", 3) == 0) {
                INI_APPEND("F2=loaded\r\n");
                if (strcmp(line, "F2=loaded") != 0) modified = 1;
                wrote_f2 = 1;
            } else if (strncasecmp(line, "F3=", 3) == 0) {
                INI_APPEND("F3=allammo\r\n");
                if (strcmp(line, "F3=allammo") != 0) modified = 1;
                wrote_f3 = 1;
            } else if (strncasecmp(line, "F4=", 3) == 0) {
                INI_APPEND("F4=killall zombiebase\r\n");
                if (strcmp(line, "F4=killall zombiebase") != 0) modified = 1;
                wrote_f4 = 1;
            } else if (strncasecmp(line, "F7=", 3) == 0) {
                INI_APPEND("F7=ghost\r\n");
                if (strcmp(line, "F7=ghost") != 0) modified = 1;
                wrote_f7 = 1;
            } else if (strncasecmp(line, "F8=", 3) == 0) {
                INI_APPEND("F8=walk\r\n");
                if (strcmp(line, "F8=walk") != 0) modified = 1;
                wrote_f8 = 1;
            } else if (strncasecmp(line, "F9=", 3) == 0) {
                INI_APPEND("F9=shot\r\n");
                if (strcmp(line, "F9=shot") != 0) modified = 1;
                wrote_f9 = 1;
            } else if (strncasecmp(line, "F10=", 4) == 0) {
                INI_APPEND("F10=slomo 1.8\r\n");
                if (strcmp(line, "F10=slomo 1.8") != 0) modified = 1;
                wrote_f10 = 1;
            } else if (strncasecmp(line, "F11=", 4) == 0) {
                INI_APPEND("F11=slomo 0.4\r\n");
                if (strcmp(line, "F11=slomo 0.4") != 0) modified = 1;
                wrote_f11 = 1;
            } else if (strncasecmp(line, "F12=", 4) == 0) {
                INI_APPEND("F12=slomo 1.0\r\n");
                if (strcmp(line, "F12=slomo 1.0") != 0) modified = 1;
                wrote_f12 = 1;
            } else if (strncasecmp(line, "Tilde=", 6) == 0) {
                INI_APPEND("Tilde=type\r\n");
                if (strcmp(line, "Tilde=type") != 0) modified = 1;
                wrote_tilde = 1;
            } else if (strncasecmp(line, "Space=", 6) == 0) {
                INI_APPEND("Space=Jump\r\n");
                if (strcmp(line, "Space=Jump") != 0) modified = 1;
                wrote_space = 1;
            } else if (strncasecmp(line, "Enter=", 6) == 0) {
                INI_APPEND("Enter=Fire\r\n");
                if (strcmp(line, "Enter=Fire") != 0) modified = 1;
                wrote_enter = 1;
            } else if (strncasecmp(line, "NumPad1=", 8) == 0) {
                INI_APPEND("NumPad1=open CH01\r\n");
                if (strcmp(line, "NumPad1=open CH01") != 0) modified = 1;
                wrote_np1 = 1;
            } else if (strncasecmp(line, "NumPad2=", 8) == 0) {
                INI_APPEND("NumPad2=open CH02\r\n");
                if (strcmp(line, "NumPad2=open CH02") != 0) modified = 1;
                wrote_np2 = 1;
            } else if (strncasecmp(line, "NumPad3=", 8) == 0) {
                INI_APPEND("NumPad3=open CH03\r\n");
                if (strcmp(line, "NumPad3=open CH03") != 0) modified = 1;
                wrote_np3 = 1;
            } else if (strncasecmp(line, "NumPad4=", 8) == 0) {
                INI_APPEND("NumPad4=open CH04\r\n");
                if (strcmp(line, "NumPad4=open CH04") != 0) modified = 1;
                wrote_np4 = 1;
            } else if (strncasecmp(line, "NumPad5=", 8) == 0) {
                INI_APPEND("NumPad5=open CH05\r\n");
                if (strcmp(line, "NumPad5=open CH05") != 0) modified = 1;
                wrote_np5 = 1;
            } else if (strncasecmp(line, "NumPad6=", 8) == 0) {
                INI_APPEND("NumPad6=open CH06\r\n");
                if (strcmp(line, "NumPad6=open CH06") != 0) modified = 1;
                wrote_np6 = 1;
            } else if (strncasecmp(line, "NumPad7=", 8) == 0) {
                INI_APPEND("NumPad7=open CH07\r\n");
                if (strcmp(line, "NumPad7=open CH07") != 0) modified = 1;
                wrote_np7 = 1;
            } else if (strncasecmp(line, "NumPad8=", 8) == 0) {
                INI_APPEND("NumPad8=open CH08\r\n");
                if (strcmp(line, "NumPad8=open CH08") != 0) modified = 1;
                wrote_np8 = 1;
            } else {
                INI_APPEND(line);
                INI_APPEND("\r\n");
            }
        } else if (in_winclient && target_w > 0 && target_h > 0) {
            char s[128];
            if (strncasecmp(line, "WindowedViewportX=", 18) == 0) {
                snprintf(s, sizeof(s), "WindowedViewportX=%d\r\n", target_w);
                if (strcmp(line, s) != 0) modified = 1;
                INI_APPEND(s);
                wrote_vx = 1;
            } else if (strncasecmp(line, "WindowedViewportY=", 18) == 0) {
                snprintf(s, sizeof(s), "WindowedViewportY=%d\r\n", target_h);
                if (strcmp(line, s) != 0) modified = 1;
                INI_APPEND(s);
                wrote_vy = 1;
            } else if (strncasecmp(line, "FullscreenViewportX=", 20) == 0) {
                snprintf(s, sizeof(s), "FullscreenViewportX=%d\r\n", target_w);
                if (strcmp(line, s) != 0) modified = 1;
                INI_APPEND(s);
                wrote_fx = 1;
            } else if (strncasecmp(line, "FullscreenViewportY=", 20) == 0) {
                snprintf(s, sizeof(s), "FullscreenViewportY=%d\r\n", target_h);
                if (strcmp(line, s) != 0) modified = 1;
                INI_APPEND(s);
                wrote_fy = 1;
            } else if (strncasecmp(line, "MenuViewportX=", 14) == 0) {
                snprintf(s, sizeof(s), "MenuViewportX=%d\r\n", target_w);
                if (strcmp(line, s) != 0) modified = 1;
                INI_APPEND(s);
                wrote_mx = 1;
            } else if (strncasecmp(line, "MenuViewportY=", 14) == 0) {
                snprintf(s, sizeof(s), "MenuViewportY=%d\r\n", target_h);
                if (strcmp(line, s) != 0) modified = 1;
                INI_APPEND(s);
                wrote_my = 1;
            } else {
                INI_APPEND(line);
                INI_APPEND("\r\n");
            }
        } else if (target_fov > 0 && strncasecmp(line, "DefaultFOV=", 11) == 0) {
            char s[128];
            snprintf(s, sizeof(s), "DefaultFOV=%d\r\n", target_fov);
            if (strcmp(line, s) != 0) modified = 1;
            INI_APPEND(s);
            wrote_def_fov = 1;
        } else if (strcasestr(path, "lotd.ini") && strncasecmp(line, "CurrentMasterServer=", 20) == 0) {
            INI_APPEND("CurrentMasterServer=0\r\n");
            if (strcmp(line, "CurrentMasterServer=0") != 0) modified = 1;
        } else if (strcasestr(path, "lotd.ini") && (strncasecmp(line, "MasterServerAddress[0]=", 23) == 0 ||
                                                    strncasecmp(line, "MasterServerAddress[1]=", 23) == 0 ||
                                                    strncasecmp(line, "MasterServerAddress[2]=", 23) == 0)) {
            char idx = line[20];
            char s[64];
            snprintf(s, sizeof(s), "MasterServerAddress[%c]=master.openspy.net\r\n", idx);
            INI_APPEND(s);
            if (strcmp(line, s) != 0) modified = 1;
        } else if (strcasestr(path, "lotd.ini") && (strncasecmp(line, "MasterServerPort[0]=", 20) == 0 ||
                                                    strncasecmp(line, "MasterServerPort[1]=", 20) == 0 ||
                                                    strncasecmp(line, "MasterServerPort[2]=", 20) == 0)) {
            char idx = line[17];
            char s[64];
            snprintf(s, sizeof(s), "MasterServerPort[%c]=4343\r\n", idx);
            INI_APPEND(s);
            if (strcmp(line, s) != 0) modified = 1;
        } else if (strcasestr(path, "lotd.ini") && strncasecmp(line, "DoLANBroadcast=", 15) == 0) {
            INI_APPEND("DoLANBroadcast=True\r\n");
            if (strcmp(line, "DoLANBroadcast=True") != 0) modified = 1;
        } else if (strcasestr(path, "lotd.ini") && strncasecmp(line, "InitialConnectTimeout=", 22) == 0) {
            INI_APPEND("InitialConnectTimeout=10.000000\r\n");
            if (strcmp(line, "InitialConnectTimeout=10.000000") != 0) modified = 1;
        } else if (strcasestr(path, "lotd.ini") && strncasecmp(line, "ConnectionTimeout=", 18) == 0) {
            INI_APPEND("ConnectionTimeout=15.000000\r\n");
            if (strcmp(line, "ConnectionTimeout=15.000000") != 0) modified = 1;
        } else if (target_fov > 0 && strncasecmp(line, "DesiredFOV=", 11) == 0) {
            char s[128];
            snprintf(s, sizeof(s), "DesiredFOV=%d.000000\r\n", target_fov);
            if (strcmp(line, s) != 0) modified = 1;
            INI_APPEND(s);
            wrote_des_fov = 1;
        } else if (target_fov > 0 && strncasecmp(line, "FovAngleDegrees=", 16) == 0) {
            char s[128];
            snprintf(s, sizeof(s), "FovAngleDegrees=%d.000000\r\n", target_fov);
            if (strcmp(line, s) != 0) modified = 1;
            INI_APPEND(s);
        } else {
            INI_APPEND(line);
            INI_APPEND("\r\n");
        }
        line = strtok_r(NULL, "\r\n", &saveptr);
    }

    if (in_winclient && target_w > 0 && target_h > 0) {
        char s[128];
        if (!wrote_vx) { snprintf(s, sizeof(s), "WindowedViewportX=%d\r\n", target_w); INI_APPEND(s); modified = 1; }
        if (!wrote_vy) { snprintf(s, sizeof(s), "WindowedViewportY=%d\r\n", target_h); INI_APPEND(s); modified = 1; }
        if (!wrote_fx) { snprintf(s, sizeof(s), "FullscreenViewportX=%d\r\n", target_w); INI_APPEND(s); modified = 1; }
        if (!wrote_fy) { snprintf(s, sizeof(s), "FullscreenViewportY=%d\r\n", target_h); INI_APPEND(s); modified = 1; }
        if (!wrote_mx) { snprintf(s, sizeof(s), "MenuViewportX=%d\r\n", target_w); INI_APPEND(s); modified = 1; }
        if (!wrote_my) { snprintf(s, sizeof(s), "MenuViewportY=%d\r\n", target_h); INI_APPEND(s); modified = 1; }
    } else if (!has_winclient && target_w > 0 && target_h > 0 && strcasestr(path, "lotd.ini")) {
        char s[512];
        snprintf(s, sizeof(s), "\r\n[WinDrv.WindowsClient]\r\nWindowedViewportX=%d\r\nWindowedViewportY=%d\r\nFullscreenViewportX=%d\r\nFullscreenViewportY=%d\r\nMenuViewportX=%d\r\nMenuViewportY=%d\r\n",
                 target_w, target_h, target_w, target_h, target_w, target_h);
        INI_APPEND(s);
        modified = 1;
    }

    if (in_pcontroller && target_fov > 0) {
        char s[128];
        if (!wrote_def_fov) { snprintf(s, sizeof(s), "DefaultFOV=%d\r\n", target_fov); INI_APPEND(s); modified = 1; }
        if (!wrote_des_fov) { snprintf(s, sizeof(s), "DesiredFOV=%d.000000\r\n", target_fov); INI_APPEND(s); modified = 1; }
    }

    if (in_input) {
        if (!wrote_f1) { INI_APPEND("F1=god\r\n"); modified = 1; }
        if (!wrote_f2) { INI_APPEND("F2=loaded\r\n"); modified = 1; }
        if (!wrote_f3) { INI_APPEND("F3=allammo\r\n"); modified = 1; }
        if (!wrote_f4) { INI_APPEND("F4=killall zombiebase\r\n"); modified = 1; }
        if (!wrote_f7) { INI_APPEND("F7=ghost\r\n"); modified = 1; }
        if (!wrote_f8) { INI_APPEND("F8=walk\r\n"); modified = 1; }
        if (!wrote_f9) { INI_APPEND("F9=shot\r\n"); modified = 1; }
        if (!wrote_f10) { INI_APPEND("F10=slomo 1.8\r\n"); modified = 1; }
        if (!wrote_f11) { INI_APPEND("F11=slomo 0.4\r\n"); modified = 1; }
        if (!wrote_f12) { INI_APPEND("F12=slomo 1.0\r\n"); modified = 1; }
        if (!wrote_tilde) { INI_APPEND("Tilde=type\r\n"); modified = 1; }
    } else if (!has_input && (strcasestr(path, "user.ini") || strcasestr(path, "defuser.ini"))) {
        INI_APPEND("\r\n[Engine.Input]\r\nF1=god\r\nF2=loaded\r\nF3=allammo\r\nF4=killall zombiebase\r\nF7=ghost\r\nF8=walk\r\nF9=shot\r\nF10=slomo 1.8\r\nF11=slomo 0.4\r\nF12=slomo 1.0\r\nTilde=type\r\n");
        modified = 1;
    }

#undef INI_APPEND

    if (modified) {
        FILE *out = fopen(path, "wb");
        if (out) {
            fwrite(new_buf, 1, new_len, out);
            fclose(out);
            host_log("successfully patched %s (res=%dx%d, fov=%d)\n", path, target_w, target_h, target_fov);
        }
    }
    free(buf);
    free(new_buf);
}

static void auto_tune_lotd_ini(int target_w, int target_h) {
    int effective_fov = g_target_fov;
    if (effective_fov < 60 || effective_fov > 130) {
        if (target_w > 0 && target_h > 0) {
            float aspect = (float)target_w / (float)target_h;
            // 2 * atan(0.75 * aspect) keeps vertical FOV = 73.74 deg (True Hor+, identical to uncropped classic 4:3)
            effective_fov = (int)(2.0f * atanf(0.75f * aspect) * 180.0f / 3.1415926535f + 0.5f);
        } else {
            effective_fov = 106;
        }
    }
    if (effective_fov < 80) effective_fov = 80;
    if (effective_fov > 125) effective_fov = 125;

    host_log("auto_tune_ini: target %dx%d, Hor+ FOV %d\n", target_w, target_h, effective_fov);

    const char *dirs[2] = { g_save_dir, g_game_dir };
    const char *files[] = {
        "System/LOTD.ini", "system/lotd.ini",
        "System/User.ini", "system/user.ini",
        "System/DefUser.ini", "system/defuser.ini",
        "System/Default.ini", "system/default.ini"
    };

    char p[1024];
    for (int d = 0; d < 2; d++) {
        if (!dirs[d] || !dirs[d][0]) continue;
        for (size_t f = 0; f < sizeof(files)/sizeof(files[0]); f++) {
            snprintf(p, sizeof(p), "%s/%s", dirs[d], files[f]);
            patch_ini_file(p, target_w, target_h, effective_fov);
        }
    }
}

#if defined(__linux__) && !defined(__EMSCRIPTEN__)
static void pin_main_thread_to_fast_cores(void) {
    int num_cores = (int)sysconf(_SC_NPROCESSORS_CONF);
    if (num_cores <= 1) return;

    unsigned long max_freq = 0;
    unsigned long freqs[64] = {0};
    int count = num_cores > 64 ? 64 : num_cores;

    for (int i = 0; i < count; i++) {
        char path[128];
        snprintf(path, sizeof(path), "/sys/devices/system/cpu/cpu%d/cpufreq/cpuinfo_max_freq", i);
        FILE *f = fopen(path, "r");
        if (f) {
            unsigned long q = 0;
            if (fscanf(f, "%lu", &q) == 1) {
                freqs[i] = q;
                if (q > max_freq) max_freq = q;
            }
            fclose(f);
        }
    }

    cpu_set_t cpuset;
    CPU_ZERO(&cpuset);
    int pinned = 0;

    if (max_freq > 0) {
        unsigned long threshold = (max_freq * 85) / 100;
        for (int i = 0; i < count; i++) {
            if (freqs[i] >= threshold) {
                CPU_SET(i, &cpuset);
                pinned++;
            }
        }
    }

    if (pinned == 0 && count >= 4) {
        for (int i = count / 2; i < count; i++) {
            CPU_SET(i, &cpuset);
            pinned++;
        }
    }

    if (pinned > 0) {
        if (sched_setaffinity(0, sizeof(cpuset), &cpuset) == 0) {
            host_log("affinity: pinned main thread to %d performance core(s)\n", pinned);
        }
    }
}
#endif

// Arguments (native): [game dir] [save dir] [-- extra game command line]. The web page passes the same through
// callMain. PORT_ARGS adds to the game's command line too (e.g. PORT_ARGS="CH01 -log").
int main(int argc, char **argv) {
#if !defined(_WIN32)
    signal(SIGPIPE, SIG_IGN);
#endif
#if defined(__linux__) && !defined(__EMSCRIPTEN__)
    pin_main_thread_to_fast_cores();
#endif
    char *pos[4] = {0};
    int npos = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--")) {
            for (int k = i + 1; k < argc; k++) {
                size_t l = strlen(g_cmdline_extra);
                snprintf(g_cmdline_extra + l, sizeof g_cmdline_extra - l, "%s%s", l ? " " : "", argv[k]);
            }
            break;
        }
        if (npos < 4) pos[npos++] = argv[i];
    }
    if (getenv("PORT_ARGS")) {
        size_t l = strlen(g_cmdline_extra);
        snprintf(g_cmdline_extra + l, sizeof g_cmdline_extra - l, "%s%s", l ? " " : "", getenv("PORT_ARGS"));
    }
#ifdef __EMSCRIPTEN__
    snprintf(g_game_dir, sizeof g_game_dir, "/game");
    snprintf(g_save_dir, sizeof g_save_dir, "/save");
#else
    const char *cands[] = {
        pos[0],
        getenv(GAME_DIR_ENV),
#ifdef __ANDROID__
        "/storage/emulated/0/LandOfTheDead",
        "/storage/emulated/0/Land Of The Dead",
        "/sdcard/LandOfTheDead",
        "/sdcard/Land Of The Dead",
        "/storage/emulated/0/Download/LandOfTheDead",
        "/storage/emulated/0/Download/Land Of The Dead",
        "/sdcard/Download/LandOfTheDead",
        "/sdcard/Download/Land Of The Dead",
        "/storage/emulated/0/Android/data/org.libsdl.app/files/LandOfTheDead",
        "/storage/emulated/0/Android/data/org.libsdl.app/files/game",
        "/storage/emulated/0/Android/data/org.libsdl.app/files",
        "/sdcard/Android/data/org.libsdl.app/files/LandOfTheDead",
        "/sdcard/Android/data/org.libsdl.app/files/game",
        "/sdcard/Android/data/org.libsdl.app/files",
#endif
        ".", "..", "../game", "../../game"
    };

    const char *subexes[] = {
        "System/LOTD.exe", "system/lotd.exe", "System/lotd.exe", "system/LOTD.exe",
        "System/LotD.exe", "System/DOTD.exe", "system/dotd.exe"
    };

    for (size_t i = 0; i < sizeof cands / sizeof *cands; i++) {
        if (!cands[i]) continue;
        for (size_t j = 0; j < sizeof subexes / sizeof *subexes; j++) {
            char p[1024];
            snprintf(p, sizeof p, "%s/%s", cands[i], subexes[j]);
            if (file_exists(p)) {
                snprintf(g_game_dir, sizeof g_game_dir, "%s", cands[i]);
                host_log("found game at: %s (via %s)\n", g_game_dir, p);
                break;
            }
        }
        if (g_game_dir[0]) break;
    }
    if (pos[1]) {
        snprintf(g_save_dir, sizeof g_save_dir, "%s", pos[1]);
    }
#ifdef __ANDROID__
    else if (g_game_dir[0]) {
        snprintf(g_save_dir, sizeof g_save_dir, "%s/save", g_game_dir);
    }
#endif
#endif
    host_log("game dir: '%s', save dir: '%s', command line: '%s'\n", g_game_dir, g_save_dir, g_cmdline_extra);
    extern int g_target_res_w, g_target_res_h;
    int tw = (g_target_res_w > 0) ? g_target_res_w : 1280;
    int th = (g_target_res_h > 0) ? g_target_res_h : 720;
    auto_tune_lotd_ini(tw, th);
    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER | SDL_INIT_JOYSTICK) != 0) {
        host_log("SDL_Init failed: %s\n", SDL_GetError());
        return 1;
    }
    char sysdir[1024];
    snprintf(sysdir, sizeof sysdir, "%s/" GAME_SYSDIR, g_game_dir);
    if (!runtime_init(sysdir)) {
        // Fallback: try lowercase 'system'
        snprintf(sysdir, sizeof sysdir, "%s/system", g_game_dir);
        if (!runtime_init(sysdir)) {
            host_log("Cannot load the game from %s.\n", sysdir);
#ifdef __ANDROID__
            char err_msg[2048];
            snprintf(err_msg, sizeof err_msg,
                "Could not load game files from:\n%s\n\n"
                "Checked path: '%s'\n\n"
                "Troubleshooting:\n"
                "1. Enable 'All files access' in Android Settings -> Apps -> Land of the Dead -> Permissions.\n"
                "2. Or copy the game folder into:\n"
                "/Internal Storage/Android/data/org.libsdl.app/files/LandOfTheDead/\n",
                sysdir, g_game_dir[0] ? g_game_dir : "(no matching folder found)");
            SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Land of the Dead", err_msg, NULL);
#endif
            return 1;
        }
    }
#ifndef __EMSCRIPTEN__
    if (getenv("PORT_WATCHDOG")) SDL_CreateThread(watchdog, "watchdog", (void *)(intptr_t)atoi(getenv("PORT_WATCHDOG")));
#ifdef __ANDROID__
    SDL_CreateThread(android_watchdog, "android_watchdog", NULL);
#endif
#endif
    uint32_t runtime_exe_entry(void);
    uint32_t entry = runtime_exe_entry();
    host_log("Executing runtime_run_entry(0x%08x)...\n", entry);
    runtime_run_entry(entry);
    host_log("runtime_run_entry finished.\n");
    host_shutdown();
    return 0;
}

void host_set_target_fps(int fps) {
    g_target_fps = fps;
    host_log("main: target FPS set to %d\n", g_target_fps);
}

int host_get_target_fps(void) {
    return g_target_fps;
}

#ifdef __ANDROID__
#include <jni.h>
JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetTargetFPS(JNIEnv *env, jclass cls, jint fps) {
    (void)env; (void)cls;
    host_set_target_fps((int)fps);
}
#endif
