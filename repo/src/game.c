// Land of the Dead glue: the frame loop, the engine's helper threads.
//
// LOTD.exe's MainLoop (0x1090ce70) builds a loop object on its stack at [ebp-0x6c] and does
//     while (*GIsRunning && !*GIsRequestingExit) FrameLoop::Tick(&loop);     // 0x1090117c, __thiscall
// The recompiler hook replaces the loop head (0x1090cec5) and resumes at 0x1090cee4, after the loop
// (recomp_config.json "lotd" section). GIsRunning and GIsRequestingExit are Core.dll data the exe imports.
#include "host.h"
#include <stdio.h>
#include <string.h>

#define IMP_GISRUNNING          0x10959b18u     // LOTD.exe IAT slot -> Core!GIsRunning
#define IMP_GISREQUESTINGEXIT   0x10959b1cu     // LOTD.exe IAT slot -> Core!GIsRequestingExit
#define FRAME_TICK              0x1090117cu
#define LOOP_OBJ_OFS            0x6cu

// Core.dll's file streaming thread (FFileStream, music): 0x5520f0 loops over the streams and reads the next chunk
// of each one that asks for it, until FFileStream::Destroyed is set. Its work is done here instead, each frame and
// whenever the game sleeps or waits.
#define CORE_STREAM_THREAD      0x005520f0u
#define FS_STREAMS              0x005f7d08u     // FStream* (0x28 bytes each)
#define FS_MAXSTREAMS           0x005f7d10u
#define FS_DESTROYED            0x005f7d14u
#define G_FILESTREAM            0x005b2158u
#define FS_READ                 0x004e1afau     // FFileStream::Read(this, int stream, int bytes)
#define FS_DESTROY              0x004e34dbu     // FFileStream::Destroy(this, int stream)

static uint32_t loop_obj;
static int stream_thread;

int game_thread_kind(uint32_t start) {
    if (start == CORE_STREAM_THREAD) { stream_thread = 1; return 1; }
    return 0;
}

void game_background_tick(void) {
    static int busy;
    if (!stream_thread || busy) return;
    busy = 1;
    uint32_t gfs = R32(G_FILESTREAM), n = R32(FS_MAXSTREAMS);
    if (R32(FS_DESTROYED) == 1) {
        for (uint32_t i = 0; i < n; i++)
            if (R32(R32(FS_STREAMS) + i * 0x28 + 4)) guest_call_this(FS_DESTROY, gfs, 1, i);
        W32(FS_DESTROYED, 2);
        stream_thread = 0;
    } else if (!R32(FS_DESTROYED)) {
        for (uint32_t i = 0; i < n; i++) {
            for (int k = 0; k < 64; k++) {
                uint32_t s = R32(FS_STREAMS) + i * 0x28;
                if (!R32(s + 0x18) || !R32(s + 0x14)) break;
                guest_call_this(FS_READ, gfs, 2, i, R32(s + 0x10));
                s = R32(FS_STREAMS) + i * 0x28;
                W32(s + 0x14, R32(s + 0x14) - 1);
                W32(s, R32(s) + R32(s + 0x10));
            }
        }
    }
    busy = 0;
}

static int running(void) {
    return R32(R32(IMP_GISRUNNING)) && !R32(R32(IMP_GISREQUESTINGEXIT));
}

// one iteration of the game's main loop; nonzero when the game wants to quit
static uint32_t frames;
uint32_t host_frame_count(void) { return frames; }
int port_frame_once(void) {
    if (!running()) return 1;
    frames++;
    seh_reset_loop_count();
    game_background_tick();
    guest_call_this(FRAME_TICK, loop_obj, 0);
    if (g_unwind) {
        host_log("WARNING: exception escaped FRAME_TICK (unwinding to %08x), recovering safely\n", g_unwind_target);
        guest_unwind_done();
    }
    return !running();
}

static uint32_t lotd_find_fname_idx(const char *name) {
    if (!name || !name[0]) return 0;
    static struct { char name[32]; uint32_t idx; } s_cache[32];
    static int s_cache_count = 0;
    for (int i = 0; i < s_cache_count; i++) {
        if (!strcmp(s_cache[i].name, name)) return s_cache[i].idx;
    }

    uint32_t names_ptr = R32(0x69a758u);
    if (!names_ptr || names_ptr >= GUEST_SIZE - 65536) return 0;
    for (uint32_t i = 1; i < 45000; i++) {
        uint32_t e = R32(names_ptr + i * 4);
        if (!e || e >= GUEST_SIZE - 64) continue;
        uint16_t *w = (uint16_t *)(G + e + 0xc);
        int match = 1;
        for (int k = 0; name[k]; k++) {
            if ((char)w[k] != name[k]) { match = 0; break; }
        }
        if (match && w[strlen(name)] == 0) {
            if (s_cache_count < 32) {
                snprintf(s_cache[s_cache_count].name, sizeof(s_cache[s_cache_count].name), "%s", name);
                s_cache[s_cache_count].idx = i;
                s_cache_count++;
            }
            return i;
        }
    }
    return 0;
}

uint32_t lotd_find_anim_fallback(uint32_t mesh_inst, uint32_t requested_seq_idx) {
    if (!mesh_inst || mesh_inst >= GUEST_SIZE - 64) return 0;
    uint32_t names_ptr = R32(0x69a758u);
    if (!names_ptr || names_ptr >= GUEST_SIZE - 65536) return 0;

    char req[64] = {0};
    uint32_t entry = R32(names_ptr + (requested_seq_idx & 0xffff) * 4);
    if (entry && entry < GUEST_SIZE - 64) {
        uint16_t *wstr = (uint16_t *)(G + entry + 0xc);
        for (int i = 0; i < 60 && wstr[i]; i++) req[i] = (char)wstr[i];
    }

    uint32_t vtable = R32(mesh_inst);
    if (!vtable || vtable >= GUEST_SIZE - 256) return 0;
    uint32_t get_anim_fn = R32(vtable + 0xb4u);
    if (!get_anim_fn) return 0;

    const char *candidates[8] = {0};
    int num_candidates = 0;

    int is_kungfu = (strstr(req, "Kung") != NULL);
    int is_fire = (strstr(req, "Fire") || strstr(req, "Primary") || strstr(req, "Attack") || strstr(req, "Punch"));
    int is_alt = (strstr(req, "Alt") || strstr(req, "Secondary"));
    int is_hit = (strstr(req, "Hit") != NULL);
    int is_idle = (strstr(req, "Idle") || strstr(req, "Stand") || strstr(req, "Crouch"));
    int is_select = (strstr(req, "Select") || strstr(req, "DeSelect"));

    if (is_kungfu) {
        if (is_alt) {
            candidates[num_candidates++] = "KungFuAltFire";
            candidates[num_candidates++] = "MixdownMeleeKungFuSecondary";
            candidates[num_candidates++] = "FistsAltFire";
            candidates[num_candidates++] = "MixdownMeleeFistsSecondary";
        } else if (is_fire) {
            candidates[num_candidates++] = "KungFuFire";
            candidates[num_candidates++] = "MixdownMeleeKungFuPrimary";
            candidates[num_candidates++] = "FistsFire";
            candidates[num_candidates++] = "MixdownMeleeFistsPrimary";
        } else if (is_hit) {
            candidates[num_candidates++] = "KungFuHit";
            candidates[num_candidates++] = "FistsHit";
        } else if (is_idle) {
            candidates[num_candidates++] = "KungFuStandIdle";
            candidates[num_candidates++] = "KungFuCrouchIdle";
            candidates[num_candidates++] = "FistsStandIdle";
            candidates[num_candidates++] = "StandIdle";
            candidates[num_candidates++] = "Idle";
        }
    } else if (strstr(req, "Fist")) {
        if (is_alt) {
            candidates[num_candidates++] = "FistsAltFire";
            candidates[num_candidates++] = "MixdownMeleeFistsSecondary";
        } else if (is_fire) {
            candidates[num_candidates++] = "FistsFire";
            candidates[num_candidates++] = "MixdownMeleeFistsPrimary";
        } else if (is_hit) {
            candidates[num_candidates++] = "FistsHit";
        } else if (is_idle) {
            candidates[num_candidates++] = "FistsStandIdle";
            candidates[num_candidates++] = "FistsCrouchIdle";
            candidates[num_candidates++] = "StandIdle";
            candidates[num_candidates++] = "Idle";
        }
    } else if (is_alt) {
        candidates[num_candidates++] = "Secondary";
        candidates[num_candidates++] = "MixdownMeleeKungFuSecondary";
        candidates[num_candidates++] = "MixdownMeleeFistsSecondary";
        candidates[num_candidates++] = "KungFuAltFire";
        candidates[num_candidates++] = "FistsAltFire";
    } else if (is_fire) {
        candidates[num_candidates++] = "Primary";
        candidates[num_candidates++] = "Fire";
        candidates[num_candidates++] = "MixdownMeleeKungFuPrimary";
        candidates[num_candidates++] = "MixdownMeleeFistsPrimary";
        candidates[num_candidates++] = "KungFuFire";
        candidates[num_candidates++] = "FistsFire";
    } else if (is_select) {
        candidates[num_candidates++] = "Select";
        candidates[num_candidates++] = "Idle";
        candidates[num_candidates++] = "StandIdle";
    } else if (is_idle) {
        candidates[num_candidates++] = "StandIdle";
        candidates[num_candidates++] = "Idle";
        candidates[num_candidates++] = "CrouchIdle";
    }

    if (num_candidates == 0) {
        candidates[num_candidates++] = "StandIdle";
        candidates[num_candidates++] = "Idle";
    }

    for (int c = 0; c < num_candidates; c++) {
        uint32_t c_idx = lotd_find_fname_idx(candidates[c]);
        if (!c_idx) continue;
        uint32_t res = guest_call_this(get_anim_fn, mesh_inst, 1, c_idx);
        if (g_unwind) {
            guest_unwind_done();
            continue;
        }
        if (res) {
            host_log("LOTD: Anim fallback for '%s' -> '%s' (fname %u) = %08x\n", req, candidates[c], c_idx, res);
            return res;
        }
    }
    return 0;
}

// recompiler hook (main.c: host_frame_loop calls this first)
void game_loop_begin(void) {
    loop_obj = R.ebp - LOOP_OBJ_OFS;
    host_log("main loop: loop object %08x\n", loop_obj);
}
void port_after_loop(void) {}
