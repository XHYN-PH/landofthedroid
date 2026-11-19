// USER32 shims: windows, message queue, input translation (SDL2).
//
// UE2's Window.dll keeps a C++ object per window and finds it from WM_NCCREATE's CREATESTRUCT, so windows are real
// objects here: CreateWindowEx sends WM_NCCREATE/WM_CREATE to the class's window procedure, Get/SetWindowLong work,
// SendMessage calls the procedure directly. There is one SDL window; it shows the game viewport (the window
// Direct3D renders to, d3d8.c: user32_set_viewport) and all input goes to that window.
//
// The mouse: while the game hides the cursor and captures it (in play) SDL's relative mode (pointer lock in the
// browser) drives a virtual cursor that GetCursorPos/SetCursorPos and DirectInput see; otherwise the cursor maps
// from SDL window coordinates to the viewport.
#include "host.h"
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include <pthread.h>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif
#ifdef __ANDROID__
#include <jni.h>
#endif

void audio_set_muffle(float m);

uint32_t g_hwnd;                    // the viewport window: input goes here
uint32_t g_lotd_viewport = 0;       // UWindowsViewport pointer for direct command exec
uint32_t g_lotd_viewport_window = 0;// WWindowsViewportWindow pointer
int g_win_w = 640, g_win_h = 480;   // its client size (the game's resolution)
SDL_Window *g_window;
static int cursor_count = 0;

void gfx_map_mouse(int wx, int wy, int *gx, int *gy);     // d3d8.c
void gfx_window_created(SDL_Window *w);

// ---------------------------------------------------------------- windows and classes
#define MAXWIN 256
#define MAXCLS 64
#define NEXTRA 16
typedef struct {
    uint32_t hwnd, proc, style, exstyle, parent, id, userdata, menu, instance;
    int x, y, w, h, visible, used, is_dialog;
    uint32_t extra[NEXTRA];
    char cls[64], text[128];
    struct { char name[32]; uint32_t v; } props[8];
} Win;
static Win wins[MAXWIN];
static struct { char name[64]; uint32_t proc, extra, atom, wide; } classes[MAXCLS];
static int nclasses;
int g_menu_active = 1;
float g_mouse_sensitivity_scale = 1.0f;
#define HWND_BASE 0x00010010u

Win *user32_win(uint32_t hwnd) {
    if (hwnd < HWND_BASE) return NULL;
    uint32_t i = (hwnd - HWND_BASE) / 4;
    if (i >= MAXWIN || !wins[i].used) return NULL;
    return &wins[i];
}
static void wstr(uint32_t a, char *out, int cap) {
    int k = 0;
    if (a && a < 0x10000) { snprintf(out, cap, "#%u", a); return; }   // atom
    for (uint32_t i = 0; a && k + 1 < cap; i++) { uint32_t c = R16(a + 2 * i); if (!c) break; out[k++] = c < 128 ? (char)c : '?'; }
    out[k] = 0;
}
static void astr(uint32_t a, char *out, int cap) {
    if (a && a < 0x10000) { snprintf(out, cap, "#%u", a); return; }
    snprintf(out, cap, "%s", a ? GSTR(a) : "");
}
static uint32_t put_w(uint32_t a, uint32_t cap, const char *s) {
    uint32_t k = 0;
    while (s[k] && k + 1 < cap) { W16(a + 2 * k, (uint8_t)s[k]); k++; }
    if (cap) W16(a + 2 * k, 0);
    return k;
}

static int find_class(const char *name) {
    for (int i = 0; i < nclasses; i++) if (!strcasecmp(classes[i].name, name)) return i;
    return -1;
}
static void register_class(int wide) {
    uint32_t wc = ARG(0);
    if (nclasses >= MAXCLS) SRET(0, 1);
    char name[64];
    if (wide) wstr(R32(wc + 40), name, sizeof name); else astr(R32(wc + 40), name, sizeof name);
    int i = find_class(name);
    if (i < 0) i = nclasses++;
    snprintf(classes[i].name, 64, "%s", name);
    classes[i].proc = R32(wc + 8);
    classes[i].extra = R32(wc + 16);
    classes[i].atom = 0xC100 + i;
    classes[i].wide = wide;
    host_log("RegisterClassEx%c '%s' wndproc=%08x\n", wide ? 'W' : 'A', name, classes[i].proc);
    SRET(classes[i].atom, 1);
}
static void u_RegisterClassExA(void) { register_class(0); }
static void u_RegisterClassExW(void) { register_class(1); }
static void u_DefWindowProc(void);
// System classes (BUTTON, EDIT, the common controls) exist on demand: Window.dll subclasses them, asking for their
// window procedure first. Theirs is DefWindowProc.
static void get_class_info(int wide) {
    char name[64];
    if (wide) wstr(ARG(1), name, sizeof name); else astr(ARG(1), name, sizeof name);
    int i = find_class(name);
    if (i < 0) {
        if (nclasses >= MAXCLS) SRET(0, 3);
        i = nclasses++;
        snprintf(classes[i].name, 64, "%s", name);
        classes[i].proc = host_thunk(u_DefWindowProc, "DefWindowProc (system class)");
        classes[i].atom = 0xC100 + i;
        classes[i].wide = wide;
    }
    uint32_t wc = ARG(2);
    memset(G + wc + 4, 0, 44);
    W32(wc + 8, classes[i].proc);
    W32(wc + 40, ARG(1));
    SRET(classes[i].atom, 3);
}
static void u_GetClassInfoExA(void) { get_class_info(0); }
static void u_GetClassInfoExW(void) { get_class_info(1); }

static uint32_t send(uint32_t hwnd, uint32_t msg, uint32_t wp, uint32_t lp) {
    Win *w = user32_win(hwnd);
    if (!w || !w->proc) return 0;
    return guest_call(w->proc, 4, hwnd, msg, wp, lp);
}

static uint32_t create_window(uint32_t exstyle, const char *cls, const char *title, uint32_t style, int x, int y,
                              int cw, int ch, uint32_t parent, uint32_t menu, uint32_t inst, uint32_t param, uint32_t proc,
                              int is_dialog) {
    int slot = -1;
    for (int i = 0; i < MAXWIN; i++) if (!wins[i].used) { slot = i; break; }
    if (slot < 0) host_fatal("too many windows");
    Win *w = &wins[slot];
    memset(w, 0, sizeof *w);
    w->used = 1; w->hwnd = HWND_BASE + slot * 4;
    w->exstyle = exstyle; w->style = style; w->parent = parent; w->menu = menu; w->instance = inst;
    w->is_dialog = is_dialog;
    if ((int32_t)x == (int32_t)0x80000000) x = 0;
    if ((int32_t)y == (int32_t)0x80000000) y = 0;
    if (cw <= 0 || (int32_t)cw == (int32_t)0x80000000) cw = 640;
    if (ch <= 0 || (int32_t)ch == (int32_t)0x80000000) ch = 480;
    extern int g_target_res_w, g_target_res_h;
    if (strcmp(cls, "LOTDUnrealWWindowsViewportWindow") == 0) {
        if (g_target_res_w > 0 && g_target_res_h > 0) {
            cw = g_target_res_w;
            ch = g_target_res_h;
            host_log("create_window: enforcing target resolution %dx%d for %s\n", cw, ch, cls);
        }
        if (param) {
            g_lotd_viewport_window = param;
            g_lotd_viewport = R32(param + 0x3c);
            host_log("create_window: LOTD Viewport window param=%08x, UWindowsViewport=%08x\n", param, g_lotd_viewport);
        }
    }
    w->x = x; w->y = y; w->w = cw; w->h = ch;
    w->visible = (style & 0x10000000u) != 0;
    snprintf(w->cls, sizeof w->cls, "%s", cls);
    snprintf(w->text, sizeof w->text, "%s", title);
    if (!proc) { int c = find_class(cls); if (c >= 0) proc = classes[c].proc; }
    w->proc = proc;
    if (style & 0x40000000u) w->id = menu;      // WS_CHILD: hMenu is the control id
    host_log("CreateWindow '%s' '%s' %dx%d style=%08x proc=%08x -> %08x\n", cls, title, cw, ch, style, proc, w->hwnd);
    if (!proc) return w->hwnd;
    if (is_dialog) return w->hwnd;
    // CREATESTRUCTW on the guest stack below the caller's frame
    uint32_t cs = R.esp - 0x100;
    W32(cs + 0, param); W32(cs + 4, inst); W32(cs + 8, menu); W32(cs + 12, parent);
    W32(cs + 16, ch); W32(cs + 20, cw); W32(cs + 24, y); W32(cs + 28, x);
    W32(cs + 32, style); W32(cs + 36, 0); W32(cs + 40, 0); W32(cs + 44, exstyle);
    uint32_t save = R.esp;
    R.esp = cs - 16;
    uint32_t hwnd = w->hwnd;
    if (!send(hwnd, 0x81, 0, cs)) { R.esp = save; host_log("  WM_NCCREATE refused\n"); w->used = 0; return 0; }
    if (g_unwind) { R.esp = save; return 0; }
    if ((int32_t)send(hwnd, 0x01, 0, cs) == -1) { R.esp = save; w->used = 0; return 0; }
    if (g_unwind) { R.esp = save; return 0; }
    send(hwnd, 0x05, 0, ((uint32_t)ch << 16) | (uint32_t)cw);    // WM_SIZE
    R.esp = save;
    return hwnd;
}
static void u_CreateWindowExW(void) {
    char cls[64], title[128];
    wstr(ARG(1), cls, sizeof cls); wstr(ARG(2), title, sizeof title);
    uint32_t h = create_window(ARG(0), cls, title, ARG(3), (int32_t)ARG(4), (int32_t)ARG(5), (int32_t)ARG(6), (int32_t)ARG(7),
                               ARG(8), ARG(9), ARG(10), ARG(11), 0, 0);
    if (g_unwind) return;
    SRET(h, 12);
}
static void u_CreateWindowExA(void) {
    char cls[64], title[128];
    astr(ARG(1), cls, sizeof cls); astr(ARG(2), title, sizeof title);
    uint32_t h = create_window(ARG(0), cls, title, ARG(3), (int32_t)ARG(4), (int32_t)ARG(5), (int32_t)ARG(6), (int32_t)ARG(7),
                               ARG(8), ARG(9), ARG(10), ARG(11), 0, 0);
    if (g_unwind) return;
    SRET(h, 12);
}
// Dialogs (the splash screen, the log window's dialogs): a window that gets WM_INITDIALOG; no controls are made.
static uint32_t create_dialog(uint32_t inst, uint32_t parent, uint32_t proc, uint32_t param) {
    uint32_t h = create_window(0, "#32770", "", 0x10000000u, 0, 0, 320, 240, parent, 0, inst, param, proc, 1);
    Win *w = user32_win(h);
    if (w && proc) guest_call(proc, 4, h, 0x110, 0, param);    // WM_INITDIALOG
    return h;
}
static void u_CreateDialogParam(void) { uint32_t h = create_dialog(ARG(0), ARG(2), ARG(3), ARG(4)); if (g_unwind) return; SRET(h, 5); }
static void u_CreateDialogIndirectParamA(void) { uint32_t h = create_dialog(ARG(0), ARG(2), ARG(3), ARG(4)); if (g_unwind) return; SRET(h, 5); }
static void u_DialogBoxParam(void) {
    host_log("DialogBoxParam template=%08x proc=%08x (auto-OK)\n", ARG(1), ARG(3));
    SRET(1, 5);
}
static void u_EndDialog(void) { SRET(1, 2); }
static void u_DestroyWindow(void) {
    Win *w = user32_win(ARG(0));
    if (w) {
        uint32_t h = w->hwnd;
        send(h, 0x02, 0, 0);       // WM_DESTROY
        if (g_unwind) return;
        send(h, 0x82, 0, 0);       // WM_NCDESTROY
        if (g_unwind) return;
        w = user32_win(h);
        if (w) w->used = 0;
        if (h == g_hwnd) g_hwnd = 0;
    }
    SRET(1, 1);
}
static void u_IsWindow(void) { SRET(user32_win(ARG(0)) != NULL, 1); }
static void u_IsWindowVisible(void) { Win *w = user32_win(ARG(0)); SRET(w && w->visible, 1); }
static void u_IsWindowEnabled(void) { SRET(1, 1); }
static void u_ShowWindow(void) {
    Win *w = user32_win(ARG(0));
    int was = w && w->visible;
    if (w) w->visible = ARG(1) != 0;
    SRET(was, 2);
}
static void u_UpdateWindow(void) { SRET(1, 1); }
static void u_GetParent(void) { Win *w = user32_win(ARG(0)); SRET(w ? w->parent : 0, 1); }
static void u_SetParent(void) { Win *w = user32_win(ARG(0)); uint32_t o = w ? w->parent : 0; if (w) w->parent = ARG(1); SRET(o, 2); }
static void u_GetWindow(void) { SRET(0, 2); }
static void u_GetDlgItem(void) { SRET(0, 2); }
static void u_GetDlgCtrlID(void) { Win *w = user32_win(ARG(0)); SRET(w ? w->id : 0, 1); }
static void u_EnumChildWindows(void) { SRET(1, 3); }
// EnumThreadWindows(thread, proc, lparam): every top-level window, until the callback returns FALSE
static void u_EnumThreadWindows(void) {
    uint32_t proc = ARG(1), lp = ARG(2);
    for (int i = 0; i < MAXWIN; i++) {
        if (!wins[i].used || (wins[i].style & 0x40000000u)) continue;
        uint32_t r = guest_call(proc, 2, wins[i].hwnd, lp);
        if (g_unwind) return;
        if (!r) break;
    }
    SRET(1, 3);
}
static void u_FindWindowEx(void) { SRET(0, 4); }
static void u_GetDesktopWindow(void) { SRET(0x00010004u, 0); }
static void u_GetActiveWindow(void) { SRET(g_hwnd, 0); }
static void u_ret_hwnd0(void) { SRET(g_hwnd, 0); }
static void u_ret_hwnd1(void) { SRET(g_hwnd, 1); }
static void u_GetWindowThreadProcessId(void) { if (ARG(1)) W32(ARG(1), 0x1000); SRET(0x1004, 2); }

static uint32_t *win_long(Win *w, int32_t idx) {
    switch (idx) {
    case -4: return &w->proc;
    case -16: return &w->style;
    case -20: return &w->exstyle;
    case -21: return &w->userdata;
    case -12: return &w->id;
    case -6: return &w->instance;
    case -8: return &w->parent;
    }
    if (idx >= 0 && idx / 4 < NEXTRA) return &w->extra[idx / 4];
    return NULL;
}
static void u_GetWindowLong(void) {
    Win *w = user32_win(ARG(0));
    uint32_t *p = w ? win_long(w, (int32_t)ARG(1)) : NULL;
    SRET(p ? *p : 0, 2);
}
static void u_SetWindowLong(void) {
    Win *w = user32_win(ARG(0));
    uint32_t *p = w ? win_long(w, (int32_t)ARG(1)) : NULL;
    uint32_t old = p ? *p : 0;
    if (p) *p = ARG(2);
    if (w && (int32_t)ARG(1) == -16) w->visible = (ARG(2) & 0x10000000u) != 0;
    SRET(old, 3);
}
static void prop_name(uint32_t a, int wide, char *out) {
    if (a < 0x10000) snprintf(out, 32, "#%u", a);
    else if (wide) wstr(a, out, 32);
    else snprintf(out, 32, "%s", GSTR(a));
}
static void set_prop(int wide) {
    Win *w = user32_win(ARG(0));
    char n[32]; prop_name(ARG(1), wide, n);
    if (!w) SRET(0, 3);
    for (int i = 0; i < 8; i++) if (!w->props[i].name[0] || !strcmp(w->props[i].name, n)) {
        snprintf(w->props[i].name, 32, "%s", n); w->props[i].v = ARG(2); SRET(1, 3);
    }
    SRET(0, 3);
}
static void get_prop(int wide, int remove) {
    Win *w = user32_win(ARG(0));
    char n[32]; prop_name(ARG(1), wide, n);
    if (w) for (int i = 0; i < 8; i++) if (!strcmp(w->props[i].name, n)) {
        uint32_t v = w->props[i].v;
        if (remove) w->props[i].name[0] = 0;
        SRET(v, 2);
    }
    SRET(0, 2);
}
static void u_SetPropA(void) { set_prop(0); }
static void u_SetPropW(void) { set_prop(1); }
static void u_GetPropA(void) { get_prop(0, 0); }
static void u_GetPropW(void) { get_prop(1, 0); }
static void u_RemovePropA(void) { get_prop(0, 1); }
static void u_RemovePropW(void) { get_prop(1, 1); }

static void u_GetWindowTextA(void) { Win *w = user32_win(ARG(0)); uint32_t n = ARG(2); if (n) { snprintf(GSTR(ARG(1)), n, "%s", w ? w->text : ""); } SRET(n ? strlen(GSTR(ARG(1))) : 0, 3); }
static void u_GetWindowTextW(void) { Win *w = user32_win(ARG(0)); SRET(put_w(ARG(1), ARG(2), w ? w->text : ""), 3); }

// geometry: windows have no borders, so client and window rectangles are the same size
static void put_rect(uint32_t r, int x0, int y0, int x1, int y1) { W32(r, x0); W32(r + 4, y0); W32(r + 8, x1); W32(r + 12, y1); }
static void u_GetClientRect(void) {
    Win *w = user32_win(ARG(0));
    if (!w) { put_rect(ARG(1), 0, 0, g_win_w, g_win_h); SRET(1, 2); }
    put_rect(ARG(1), 0, 0, w->w, w->h);
    SRET(1, 2);
}
static void u_GetWindowRect(void) {
    Win *w = user32_win(ARG(0));
    if (!w) { put_rect(ARG(1), 0, 0, g_win_w, g_win_h); SRET(1, 2); }
    put_rect(ARG(1), w->x, w->y, w->x + w->w, w->y + w->h);
    SRET(1, 2);
}
static void resize(Win *w, int x, int y, int cw, int ch, int move, int size) {
    if (move) { w->x = x; w->y = y; }
    if (size && cw > 0 && ch > 0 && (cw != w->w || ch != w->h)) {
        w->w = cw; w->h = ch;
        send(w->hwnd, 0x05, 0, ((uint32_t)ch << 16) | (uint32_t)cw);
    }
}
static void u_SetWindowPos(void) {
    Win *w = user32_win(ARG(0));
    uint32_t fl = ARG(6);
    if (w) {
        resize(w, (int32_t)ARG(2), (int32_t)ARG(3), (int32_t)ARG(4), (int32_t)ARG(5), !(fl & 2), !(fl & 1));
        if (g_unwind) return;
        if (fl & 0x40) w->visible = 1;
        if (fl & 0x80) w->visible = 0;
    }
    SRET(1, 7);
}
static void u_MoveWindow(void) {
    Win *w = user32_win(ARG(0));
    if (w) { resize(w, (int32_t)ARG(1), (int32_t)ARG(2), (int32_t)ARG(3), (int32_t)ARG(4), 1, 1); if (g_unwind) return; }
    SRET(1, 6);
}
static void u_AdjustWindowRect(void) { SRET(1, 3); }
static void u_ClientToScreen(void) {
    Win *w = user32_win(ARG(0));
    if (w) { W32(ARG(1), R32(ARG(1)) + w->x); W32(ARG(1) + 4, R32(ARG(1) + 4) + w->y); }
    SRET(1, 2);
}
static void u_ScreenToClient(void) {
    Win *w = user32_win(ARG(0));
    if (w) { W32(ARG(1), R32(ARG(1)) - w->x); W32(ARG(1) + 4, R32(ARG(1) + 4) - w->y); }
    SRET(1, 2);
}
static void u_MapWindowPoints(void) { SRET(0, 4); }
static void u_IsIconic(void) { SRET(0, 1); }
static void u_IsZoomed(void) { SRET(0, 1); }
static void u_GetSystemMetrics(void) {
    int32_t i = (int32_t)ARG(0), v = 0;
    switch (i) {
    case 0: case 16: v = 1024; break; case 1: case 17: v = 768; break; case 4: v = 19; break;
    case 5: case 6: v = 1; break; case 7: case 8: v = 3; break; case 32: case 33: v = 4; break;
    case 11: case 12: case 13: case 14: v = 32; break; case 19: v = 1; break; case 43: v = 3; break;
    case 76: case 77: v = 0; break; case 78: v = 1024; break; case 79: v = 768; break; case 80: v = 1; break;
    }
    SRET(v, 1);
}
static void u_SystemParametersInfo(void) { if (ARG(2) && ARG(0) != 0x2f) W32(ARG(2), 0); SRET(1, 4); }

// ---------------------------------------------------------------- the viewport (called by d3d8.c)
void user32_set_viewport(uint32_t hwnd, int w, int h) {
    if (hwnd) g_hwnd = hwnd;
    if (w > 0 && h > 0) { g_win_w = w; g_win_h = h; }
    if (!g_window) {
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
        SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
        SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
        SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
        int sw = g_win_w, sh = g_win_h;
#ifdef __EMSCRIPTEN__
        g_window = SDL_CreateWindow(GAME_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, sw, sh, SDL_WINDOW_OPENGL);
#else
        g_window = SDL_CreateWindow(GAME_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, sw, sh,
                                    SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
        if (!g_window) {
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, 0);
            g_window = SDL_CreateWindow(GAME_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, sw, sh,
                                        SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
        }
#endif
        if (!g_window) host_fatal("SDL_CreateWindow: %s", SDL_GetError());
        gfx_window_created(g_window);
#ifndef __ANDROID__
        SDL_StartTextInput();
#endif
    }
    host_log("viewport window %08x %dx%d\n", g_hwnd, g_win_w, g_win_h);
}

// ---------------------------------------------------------------- message queue
typedef struct { uint32_t hwnd, msg, wp, lp, time, x, y; } Msg;
#define QN 1024
static Msg q[QN];
static int qh, qt;
static int mouse_x, mouse_y, mouse_buttons;     // virtual cursor in viewport coordinates
static int captured;                             // relative mouse mode (pointer lock)
static uint8_t keystate[256];

static void post_to(uint32_t hwnd, uint32_t msg, uint32_t wp, uint32_t lp) {
    int n = (qt + 1) % QN;
    if (n == qh) return;   // drop on overflow
    q[qt].hwnd = hwnd; q[qt].msg = msg; q[qt].wp = wp; q[qt].lp = lp;
    q[qt].time = host_ticks(); q[qt].x = mouse_x; q[qt].y = mouse_y;
    qt = n;
}
static void post(uint32_t msg, uint32_t wp, uint32_t lp) { if (g_hwnd) post_to(g_hwnd, msg, wp, lp); }

static uint32_t sdl_to_vk(SDL_Keycode k) {
    if (k >= 'a' && k <= 'z') return (uint32_t)(k - 'a' + 'A');
    if (k >= 'A' && k <= 'Z') return (uint32_t)k;
    if (k >= '0' && k <= '9') return (uint32_t)k;
    if (k >= SDLK_F1 && k <= SDLK_F12) return 0x70 + (k - SDLK_F1);
    switch (k) {
    case SDLK_AC_BACK: return 0x1B;
    case SDLK_LEFT: return 0x25; case SDLK_UP: return 0x26; case SDLK_RIGHT: return 0x27; case SDLK_DOWN: return 0x28;
    case SDLK_ESCAPE: return 0x1B; case SDLK_RETURN: case SDLK_KP_ENTER: return 0x0D; case SDLK_SPACE: return 0x20;
    case SDLK_TAB: return 0x09; case SDLK_BACKSPACE: return 0x08;
    case SDLK_LSHIFT: case SDLK_RSHIFT: return 0x10;
    case SDLK_LCTRL: case SDLK_RCTRL: return 0x11;
    case SDLK_LALT: case SDLK_RALT: return 0x12;
    case SDLK_PAUSE: return 0x13; case SDLK_CAPSLOCK: return 0x14;
    case SDLK_PAGEUP: return 0x21; case SDLK_PAGEDOWN: return 0x22; case SDLK_END: return 0x23; case SDLK_HOME: return 0x24;
    case SDLK_INSERT: return 0x2D; case SDLK_DELETE: return 0x2E; case SDLK_PRINTSCREEN: return 0x2C;
    case SDLK_KP_0: return 0x60; case SDLK_KP_1: return 0x61; case SDLK_KP_2: return 0x62; case SDLK_KP_3: return 0x63;
    case SDLK_KP_4: return 0x64; case SDLK_KP_5: return 0x65; case SDLK_KP_6: return 0x66; case SDLK_KP_7: return 0x67;
    case SDLK_KP_8: return 0x68; case SDLK_KP_9: return 0x69; case SDLK_KP_MULTIPLY: return 0x6A; case SDLK_KP_PLUS: return 0x6B;
    case SDLK_KP_MINUS: return 0x6D; case SDLK_KP_PERIOD: return 0x6E; case SDLK_KP_DIVIDE: return 0x6F;
    case SDLK_SEMICOLON: return 0xBA; case SDLK_EQUALS: return 0xBB; case SDLK_COMMA: return 0xBC; case SDLK_MINUS: return 0xBD;
    case SDLK_PERIOD: return 0xBE; case SDLK_SLASH: return 0xBF; case SDLK_BACKQUOTE: return 0xC0;
    case SDLK_LEFTBRACKET: return 0xDB; case SDLK_BACKSLASH: return 0xDC; case SDLK_RIGHTBRACKET: return 0xDD; case SDLK_QUOTE: return 0xDE;
    }
    return 0;
}

// dinput.c: the DirectInput devices see the same input
void dinput_key_sdl(int scancode, int down);
void dinput_key_dik(uint8_t dik, int down);
uint8_t dinput_vk_to_dik(uint32_t vk);
void dinput_mouse_move(int dx, int dy);
void dinput_mouse_wheel(int dz);
void dinput_mouse_button(int b, int down);
void dinput_clear_mouse(void);

static uint32_t mouse_lp(void) { return ((uint32_t)(mouse_y & 0xffff) << 16) | (uint32_t)(mouse_x & 0xffff); }
static void mouse_to(int x, int y) {
    if (x < 0) x = 0; if (y < 0) y = 0;
    if (x >= g_win_w) x = g_win_w - 1; if (y >= g_win_h) y = g_win_h - 1;
    mouse_x = x; mouse_y = y;
    post(0x200, (uint32_t)mouse_buttons, mouse_lp());    // WM_MOUSEMOVE
}

static void vk_event(uint32_t vk, int down, int repeat, uint32_t sc) {
    uint32_t lp = 1 | ((sc & 0xff) << 16);
    keystate[vk & 0xff] = down ? 0x80 : 0;
    if (down) {
        if (repeat) lp |= 1u << 30;
        post(vk == 0x12 ? 0x104 : 0x100, vk, lp);
        if (vk == 0x0D || vk == 0x08 || vk == 0x1B || vk == 0x09) {
            post(0x102, vk, lp);
        }
    } else {
        post(vk == 0x12 ? 0x105 : 0x101, vk, lp | 0xC0000000u);
    }
}

void host_send_key(uint32_t vk, int down) {
    vk_event(vk, down, 0, 0);
    dinput_key_dik(dinput_vk_to_dik(vk), down);
}

int g_is_aiming = 0;
static uint32_t s_lbutton_down_frame = 0;

void host_send_mouse_button(int button, int down) {
    if (button == 1) g_is_aiming = down;
    if (button == 0 && down) {
        s_lbutton_down_frame = host_frame_count();
    }
    uint32_t bit = (button == 0) ? 1 : (button == 1) ? 2 : 0x10;
    if (down) mouse_buttons |= bit; else mouse_buttons &= ~bit;
    keystate[button == 0 ? 1 : button == 1 ? 2 : 4] = down ? 0x80 : 0;
    dinput_mouse_button(button, down);
    uint32_t msg = (button == 0) ? 0x201 : (button == 1) ? 0x204 : 0x207;
    post(down ? msg : msg + 1, (uint32_t)mouse_buttons, mouse_lp());
}

void host_send_mouse_move(int dx, int dy) {
    if (captured) {
        dinput_mouse_move(dx, dy);
        mouse_to(mouse_x + dx, mouse_y + dy);
    } else {
        mouse_to(mouse_x + dx, mouse_y + dy);
    }
}

void host_send_mouse_wheel(int delta) {
    dinput_mouse_wheel(delta);
    post(0x20A, ((uint32_t)(delta & 0xffff) << 16) | (uint32_t)mouse_buttons, mouse_lp());
}

#define MAX_CONTROLLERS 4
static SDL_GameController *g_controllers[MAX_CONTROLLERS];
int g_target_res_w = 1280;
int g_target_res_h = 720;
int g_target_fov = 0;
int g_stick_curve = 1; // 0: Linear, 1: Progressive Quadratic (Default), 2: Exponential

void host_set_stick_curve(int curve) {
    if (curve >= 0 && curve <= 2) g_stick_curve = curve;
}

int host_get_stick_curve(void) {
    return g_stick_curve;
}
static float g_stick_lx = 0.0f, g_stick_ly = 0.0f;
static float g_stick_rx = 0.0f, g_stick_ry = 0.0f;
static int g_pad_key_w = 0, g_pad_key_s = 0, g_pad_key_a = 0, g_pad_key_d = 0;
static int g_pad_trigger_l = 0, g_pad_trigger_r = 0;
static int g_pad_back_held = 0;

static void controller_init(void) {
    int num = SDL_NumJoysticks();
    host_log("controller_init: %d joysticks present\n", num);
    for (int i = 0; i < num; i++) {
        if (SDL_IsGameController(i)) {
            SDL_GameController *gc = SDL_GameControllerOpen(i);
            if (gc) {
                host_log("Opened GameController %d: %s\n", i, SDL_GameControllerName(gc));
                for (int c = 0; c < MAX_CONTROLLERS; c++) {
                    if (!g_controllers[c]) { g_controllers[c] = gc; break; }
                }
            }
        }
    }
}

// Scripted input for testing: PORT_INPUT="frame:key:VK;frame:down:VK;frame:up:VK;frame:char:c;frame:move:x,y;
// frame:click:x,y;frame:rclick:x,y;frame:ldown:x,y;frame:lup:x,y;frame:rel:dx,dy"
static void scripted_input(void) {
    static char *spec; static int init; static uint32_t last = 0xffffffffu;
    static uint32_t release_vk[8]; static int n_release;
    if (!init) { init = 1; const char *e = getenv("PORT_INPUT"); if (e) spec = strdup(e); }
    if (!spec) return;
    uint32_t fr = host_frame_count();
    if (fr == last) return;
    last = fr;
    for (int i = 0; i < n_release; i++) {
        if (release_vk[i] == 0x10001) { mouse_buttons &= ~1; post(0x202, mouse_buttons, mouse_lp()); dinput_mouse_button(0, 0); }
        else if (release_vk[i] == 0x10002) { mouse_buttons &= ~2; post(0x205, mouse_buttons, mouse_lp()); dinput_mouse_button(1, 0); }
        else { vk_event(release_vk[i], 0, 0, 0); dinput_key_dik(dinput_vk_to_dik(release_vk[i]), 0); }
    }
    n_release = 0;
    char *copy = strdup(spec);
    for (char *tok = strtok(copy, ";"); tok; tok = strtok(NULL, ";")) {
        unsigned f; char act[16]; char arg[64] = "";
        if (sscanf(tok, "%u:%15[^:]:%63s", &f, act, arg) < 2 || f != fr) continue;
        int x = 0, y = 0; sscanf(arg, "%d,%d", &x, &y);
        uint32_t vk = (uint32_t)strtol(arg, NULL, 0);
        if (!strcmp(act, "key") || !strcmp(act, "down")) {
            vk_event(vk, 1, 0, 0); dinput_key_dik(dinput_vk_to_dik(vk), 1);
            if (act[0] == 'k' && n_release < 8) release_vk[n_release++] = vk;
        }
        else if (!strcmp(act, "up")) { vk_event(vk, 0, 0, 0); dinput_key_dik(dinput_vk_to_dik(vk), 0); }
        else if (!strcmp(act, "char")) post(0x102, (uint32_t)(unsigned char)arg[0], 1);
        else if (!strcmp(act, "move")) { dinput_mouse_move(x - mouse_x, y - mouse_y); mouse_to(x, y); }
        else if (!strcmp(act, "rel")) { dinput_mouse_move(x, y); mouse_to(mouse_x + x, mouse_y + y); }
        else if (!strcmp(act, "click") || !strcmp(act, "rclick") || !strcmp(act, "ldown") || !strcmp(act, "lup")) {
            int right = act[0] == 'r';
            dinput_mouse_move(x - mouse_x, y - mouse_y); mouse_to(x, y);
            if (strcmp(act, "lup")) { mouse_buttons |= right ? 2 : 1; post(right ? 0x204 : 0x201, mouse_buttons, mouse_lp()); dinput_mouse_button(right, 1); }
            if (!strcmp(act, "lup")) { mouse_buttons &= ~1; post(0x202, mouse_buttons, mouse_lp()); dinput_mouse_button(0, 0); }
            if ((!strcmp(act, "click") || !strcmp(act, "rclick")) && n_release < 8) release_vk[n_release++] = right ? 0x10002 : 0x10001;
        }
        host_log("input @%u: %s %s\n", fr, act, arg);
    }
    free(copy);
}

static void handle_event(SDL_Event e) {
    switch (e.type) {
    case SDL_QUIT:
        host_log("window closed\n");
        post(0x10, 0, 0);       // WM_CLOSE
#ifndef __EMSCRIPTEN__
        { static int n; if (++n > 2) { host_shutdown(); exit(0); } }
#endif
        break;
    case SDL_KEYDOWN: case SDL_KEYUP: {
        if (!e.key.repeat && !g_menu_active) dinput_key_sdl(e.key.keysym.scancode, e.type == SDL_KEYDOWN);
#ifndef __EMSCRIPTEN__
        if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_RETURN && (e.key.keysym.mod & KMOD_ALT)) {
            uint32_t fl = SDL_GetWindowFlags(g_window);
            SDL_SetWindowFullscreen(g_window, (fl & SDL_WINDOW_FULLSCREEN_DESKTOP) ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP);
            break;
        }
#endif
        uint32_t vk = sdl_to_vk(e.key.keysym.sym);
        if (vk) vk_event(vk, e.type == SDL_KEYDOWN, e.key.repeat, e.key.keysym.scancode);
        break;
    }
    case SDL_TEXTINPUT: {
        const unsigned char *t = (const unsigned char *)e.text.text;
        for (; *t; t++) if (*t >= 32 && *t < 128) post(0x102, *t, 1);
        break;
    }
    case SDL_MOUSEMOTION:
        if (captured) {
            dinput_mouse_move((int)(e.motion.xrel * g_mouse_sensitivity_scale), (int)(e.motion.yrel * g_mouse_sensitivity_scale));
            mouse_x = g_win_w / 2;
            mouse_y = g_win_h / 2;
        } else {
            int gx, gy; gfx_map_mouse(e.motion.x, e.motion.y, &gx, &gy);
            mouse_to(gx, gy);
        }
        break;
    case SDL_MOUSEBUTTONDOWN: case SDL_MOUSEBUTTONUP: {
        int down = e.type == SDL_MOUSEBUTTONDOWN;
        if (!captured) { int gx, gy; gfx_map_mouse(e.button.x, e.button.y, &gx, &gy); if (gx != mouse_x || gy != mouse_y) mouse_to(gx, gy); }
        uint32_t bit = e.button.button == SDL_BUTTON_LEFT ? 1 : e.button.button == SDL_BUTTON_RIGHT ? 2 : 0x10;
        if (down) mouse_buttons |= bit; else mouse_buttons &= ~bit;
        keystate[e.button.button == SDL_BUTTON_LEFT ? 1 : e.button.button == SDL_BUTTON_RIGHT ? 2 : 4] = down ? 0x80 : 0;
        dinput_mouse_button(e.button.button == SDL_BUTTON_LEFT ? 0 : e.button.button == SDL_BUTTON_RIGHT ? 1 : 2, down);
        uint32_t msg = e.button.button == SDL_BUTTON_LEFT ? 0x201 : e.button.button == SDL_BUTTON_RIGHT ? 0x204 : 0x207;
        post(down ? msg : msg + 1, (uint32_t)mouse_buttons, mouse_lp());
        { static int lg = -1; if (lg < 0) lg = getenv("PORT_INPUTLOG") != NULL;
          if (lg) host_log("input: button %d %s at %d,%d frame %u (sdl %d,%d)\n", e.button.button, down ? "down" : "up", mouse_x, mouse_y, host_frame_count(), e.button.x, e.button.y); }
        break;
    }
    case SDL_MOUSEWHEEL: {
        int d = e.wheel.y * 120;
        dinput_mouse_wheel(d);
        post(0x20A, ((uint32_t)(d & 0xffff) << 16) | (uint32_t)mouse_buttons, mouse_lp());
        break;
    }
    case SDL_CONTROLLERDEVICEADDED: {
        int idx = e.cdevice.which;
        if (SDL_IsGameController(idx)) {
            SDL_GameController *gc = SDL_GameControllerOpen(idx);
            if (gc) {
                host_log("controller connected: %s (idx %d)\n", SDL_GameControllerName(gc), idx);
                for (int c = 0; c < MAX_CONTROLLERS; c++) {
                    if (!g_controllers[c]) { g_controllers[c] = gc; break; }
                }
            }
        }
        break;
    }
    case SDL_CONTROLLERDEVICEREMOVED: {
        SDL_JoystickID jid = (SDL_JoystickID)e.cdevice.which;
        for (int c = 0; c < MAX_CONTROLLERS; c++) {
            if (g_controllers[c]) {
                SDL_Joystick *joy = SDL_GameControllerGetJoystick(g_controllers[c]);
                if (joy && SDL_JoystickInstanceID(joy) == jid) {
                    host_log("controller disconnected: %s\n", SDL_GameControllerName(g_controllers[c]));
                    SDL_GameControllerClose(g_controllers[c]);
                    g_controllers[c] = NULL;
                    break;
                }
            }
        }
        break;
    }
    case SDL_CONTROLLERBUTTONDOWN:
    case SDL_CONTROLLERBUTTONUP: {
        int down = (e.type == SDL_CONTROLLERBUTTONDOWN);
        int btn = e.cbutton.button;
        host_log("CONTROLLER: btn=%d down=%d captured=%d\n", btn, down, captured);
        if (captured) {
            switch (btn) {
            case SDL_CONTROLLER_BUTTON_A:
                host_send_key(0x20, down); // Space (Jump)
                break;
            case SDL_CONTROLLER_BUTTON_B:
                host_send_key(0x11, down); // Ctrl (Crouch / Duck)
                break;
            case SDL_CONTROLLER_BUTTON_X:
                host_send_key('R', down);  // R (Reload)
                break;
            case SDL_CONTROLLER_BUTTON_Y:
                host_send_key('E', down);  // E (Action / Use)
                break;
            case SDL_CONTROLLER_BUTTON_BACK:
                g_pad_back_held = down;
                if (!down) host_send_key(0x09, 0);
                else host_send_key(0x09, 1); // Tab (Objectives)
                break;
            case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
                if (g_pad_back_held) {
                    // Combo: Select + RB = QuickSave (F5)
                    host_send_key(0x74, down);
                } else {
                    host_send_mouse_button(0, down); // Fire
                }
                break;
            case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
                if (g_pad_back_held) {
                    // Combo: Select + LB = QuickLoad (F6)
                    host_send_key(0x75, down);
                } else if (down) {
                    host_pulse_mouse_button(1); // AltFire / Toggle Aim
                }
                break;
            case SDL_CONTROLLER_BUTTON_DPAD_UP:
                host_send_key('F', down);  // Flashlight
                break;
            case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
                host_send_key(0x09, down); // Tab (Objectives)
                break;
            case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
                if (down) host_send_mouse_wheel(-120); // Prev Weapon
                break;
            case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
                if (down) host_send_mouse_wheel(120);  // Next Weapon
                break;
            case SDL_CONTROLLER_BUTTON_START:
                host_send_key(0x1B, down); // Escape (Pause)
                break;
            case SDL_CONTROLLER_BUTTON_LEFTSTICK:
                host_send_key(0x10, down); // Shift (Walking/Run)
                break;
            case SDL_CONTROLLER_BUTTON_RIGHTSTICK:
                host_send_mouse_button(2, down); // Middle Click (Zoom)
                break;
            }
        } else {
            // In menu:
            switch (btn) {
            case SDL_CONTROLLER_BUTTON_A:
                host_send_mouse_button(0, down); // Left Click
                break;
            case SDL_CONTROLLER_BUTTON_B:
            case SDL_CONTROLLER_BUTTON_START:
            case SDL_CONTROLLER_BUTTON_BACK:
                host_send_key(0x1B, down); // Escape / Back
                break;
            }
        }
        break;
    }
    case SDL_CONTROLLERAXISMOTION: {
        int axis = e.caxis.axis;
        int16_t val = e.caxis.value;
        float norm_val = (float)val / 32767.0f;
        switch (axis) {
        case SDL_CONTROLLER_AXIS_LEFTX:
            g_stick_lx = norm_val;
            break;
        case SDL_CONTROLLER_AXIS_LEFTY:
            g_stick_ly = norm_val;
            break;
        case SDL_CONTROLLER_AXIS_RIGHTX:
            g_stick_rx = norm_val;
            break;
        case SDL_CONTROLLER_AXIS_RIGHTY:
            g_stick_ry = norm_val;
            break;
        case SDL_CONTROLLER_AXIS_TRIGGERLEFT: {
            int down = val > 8000;
            if (down != g_pad_trigger_l) {
                g_pad_trigger_l = down;
                if (down) {
                    host_pulse_mouse_button(1); // Toggle Aim / AltFire (prevents continuous toggle flicker)
                }
            }
            break;
        }
        case SDL_CONTROLLER_AXIS_TRIGGERRIGHT: {
            int down = val > 8000;
            if (down != g_pad_trigger_r) {
                g_pad_trigger_r = down;
                host_send_mouse_button(0, down); // Fire
            }
            break;
        }
        }
        break;
    }
    case SDL_WINDOWEVENT:
        // The window stays active (engines that pause on WM_ACTIVATEAPP 0 stop when the mouse leaves); held mouse
        // buttons are released when focus goes.
        if (e.window.event == SDL_WINDOWEVENT_FOCUS_LOST) {
            if (mouse_buttons & 1) { mouse_buttons &= ~1; post(0x202, mouse_buttons, mouse_lp()); }
            if (mouse_buttons & 2) { mouse_buttons &= ~2; post(0x205, mouse_buttons, mouse_lp()); }
            dinput_mouse_button(0, 0); dinput_mouse_button(1, 0); dinput_mouse_button(2, 0);
        }
        break;
    }
}

// UE2's menus select the item under the cursor during a frame and ignore a click that arrives in the same frame
// as the move to it (a browser delivers move, down and up together), so such button events wait one frame.
static SDL_Event deferred[16];
static int ndeferred;
static uint32_t deferred_frame, moved_frame = 0xffffffffu;

static uint32_t s_keys_to_release[8];
static uint32_t s_keys_release_frame[8];
static int s_num_keys_to_release = 0;

static int s_mouse_btns_to_release[4];
static uint32_t s_mouse_btns_release_frame[4];
static int s_num_mouse_btns_to_release = 0;

static int s_pending_mouse_click = 0;
static int s_menu_touch_active = 0;
static int s_pending_mouse_gx = 0, s_pending_mouse_gy = 0;
static uint32_t s_pending_mouse_frame = 0;

void host_pulse_key(uint32_t vk) {
    host_send_key(vk, 1);
    if (s_num_keys_to_release < 8) {
        s_keys_to_release[s_num_keys_to_release] = vk;
        s_keys_release_frame[s_num_keys_to_release] = host_frame_count() + 3;
        s_num_keys_to_release++;
    }
}

void host_pulse_mouse_button(int btn) {
    host_send_mouse_button(btn, 1);
    if (s_num_mouse_btns_to_release < 4) {
        s_mouse_btns_to_release[s_num_mouse_btns_to_release] = btn;
        s_mouse_btns_release_frame[s_num_mouse_btns_to_release] = host_frame_count() + 3;
        s_num_mouse_btns_to_release++;
    }
}

#define MAX_PENDING_CMDS 16
static char s_pending_cmds[MAX_PENDING_CMDS][512];
static int s_pending_cmd_head = 0;
static int s_pending_cmd_tail = 0;
static pthread_mutex_t s_cmd_mutex = PTHREAD_MUTEX_INITIALIZER;

uint32_t get_lotd_viewport(void) {
    if (g_lotd_viewport) return g_lotd_viewport;
    if (g_lotd_viewport_window) {
        uint32_t vp = R32(g_lotd_viewport_window + 0x3c);
        if (vp) {
            g_lotd_viewport = vp;
            host_log("LOTD: Resolved UWindowsViewport from g_lotd_viewport_window (%08x) -> %08x\n", g_lotd_viewport_window, g_lotd_viewport);
            return g_lotd_viewport;
        }
    }
    if (g_hwnd) {
        Win *w = user32_win(g_hwnd);
        if (w && w->userdata) {
            uint32_t vp = R32(w->userdata + 0x3c);
            if (vp) {
                g_lotd_viewport = vp;
                host_log("LOTD: Resolved UWindowsViewport from w->userdata (%08x) -> %08x\n", w->userdata, g_lotd_viewport);
                return g_lotd_viewport;
            }
        }
    }
    uint32_t arr = R32(0xde51e0u);
    uint32_t count = R32(0xde51e4u);
    if (arr && count > 0 && count < 1000) {
        for (uint32_t i = 0; i < count; i++) {
            uint32_t wnd = R32(arr + i * 4);
            if (wnd && R32(wnd + 4) == g_hwnd) {
                uint32_t vp = R32(wnd + 0x3c);
                if (vp) {
                    g_lotd_viewport = vp;
                    host_log("LOTD: Resolved UWindowsViewport from _Windows[%u] (%08x) -> %08x\n", i, wnd, g_lotd_viewport);
                    return g_lotd_viewport;
                }
            }
        }
    }
    return 0;
}

void d3d_set_fxaa(int enabled);
int d3d_get_fxaa(void);
void d3d_set_cas(int enabled);
void d3d_set_filmic(int enabled);
void d3d_set_romero(int enabled);
void d3d_set_brightness(float b);
void d3d_set_vignette(float v);
void d3d_set_widescreen(int enabled);
int d3d_get_widescreen(void);
void open_touch_editor_java(void);
void open_console_terminal_java(void);
void show_keyboard_java(void);

static void execute_single_command(const char *cmd) {
    if (!cmd || !cmd[0]) return;
    host_log("execute_single_command: '%s'\n", cmd);

    // Check for chained commands separated by pipe '|'
    if (strchr(cmd, '|')) {
        char buf[512];
        snprintf(buf, sizeof(buf), "%s", cmd);
        char *token = strtok(buf, "|");
        while (token) {
            while (*token == ' ') token++;
            char *end = token + strlen(token) - 1;
            while (end > token && *end == ' ') { *end = '\0'; end--; }
            if (*token) execute_single_command(token);
            token = strtok(NULL, "|");
        }
        return;
    }

    if (!strcasecmp(cmd, "loaded") || !strcasecmp(cmd, "allweapons")) {
        // Execute native Land of the Dead weapons cheat function directly into player inventory
        execute_single_command("weapons");
        execute_single_command("kungfu");
        execute_single_command("allammo");
        return;
    }

    if (!strcasecmp(cmd, "allammo")) {
        // In Land of the Dead, UE2's default allammo tries to load WarClassLight.dll and fails.
        // Instead summon ammo pickups for all Land of the Dead weapons:
        const char *lotd_ammo[] = {
            "summon DOTZWeapons.GlockAmmoPickup",
            "summon DOTZWeapons.RevolverAmmoPickup",
            "summon DOTZWeapons.ShotgunAmmoPickup",
            "summon DOTZWeapons.RifleAmmoPickup",
            "summon DOTZWeapons.M16AmmoPickup",
            "summon DOTZWeapons.SniperAmmoPickup",
            "summon DOTZWeapons.GrenadeAmmoPickup",
            "summon DOTZWeapons.MolotovAmmoPickup",
            NULL
        };
        for (int i = 0; lotd_ammo[i]; i++) {
            execute_single_command(lotd_ammo[i]);
        }
        return;
    }

    if (!strcasecmp(cmd, "showkeyboard") || !strcasecmp(cmd, "openkeyboard")) {
#ifdef __ANDROID__
        extern void show_keyboard_java(void);
        show_keyboard_java();
#endif
        return;
    }

    if (!strcasecmp(cmd, "hidekeyboard") || !strcasecmp(cmd, "closekeyboard")) {
#ifdef __ANDROID__
        extern void hide_keyboard_java(void);
        hide_keyboard_java();
#endif
        return;
    }

    if (!strcasecmp(cmd, "open_touch_editor") || !strcasecmp(cmd, "opentoucheditor")) {
#ifdef __ANDROID__
        open_touch_editor_java();
#endif
        return;
    }

    if (!strcasecmp(cmd, "open_console_terminal") || !strcasecmp(cmd, "openconsoleterminal") || !strcasecmp(cmd, "showconsole")) {
#ifdef __ANDROID__
        open_console_terminal_java();
#endif
        return;
    }

    if (!strncasecmp(cmd, "setcas ", 7)) {
        int v = atoi(cmd + 7);
        d3d_set_cas(v > 0 ? 1 : 0);
        return;
    }

    if (!strncasecmp(cmd, "setfxaa ", 8)) {
        int v = atoi(cmd + 8);
        d3d_set_fxaa(v > 0 ? 1 : 0);
        return;
    }

    if (!strncasecmp(cmd, "setfilter ", 10)) {
        int v = atoi(cmd + 10);
        switch (v) {
            case 1: d3d_set_romero(1); d3d_set_filmic(0); break;
            case 2: d3d_set_romero(1); d3d_set_filmic(1); break;
            case 3: d3d_set_romero(0); d3d_set_filmic(1); break;
            default: d3d_set_romero(0); d3d_set_filmic(0); break;
        }
        return;
    }

    if (!strncasecmp(cmd, "sethdr ", 7)) {
        int v = atoi(cmd + 7);
        if (v == 0) { d3d_set_brightness(1.0f); }
        else if (v == 1) { d3d_set_brightness(1.15f); }
        else if (v == 2) { d3d_set_brightness(1.30f); }
        else { d3d_set_brightness(1.45f); }
        return;
    }

    if (!strncasecmp(cmd, "setvignette ", 12)) {
        int v = atoi(cmd + 12);
        if (v == 0) d3d_set_vignette(0.0f);
        else if (v == 1) d3d_set_vignette(0.45f);
        else d3d_set_vignette(0.85f);
        return;
    }

    if (!strncasecmp(cmd, "setwidescreen ", 14)) {
        int v = atoi(cmd + 14);
        d3d_set_widescreen(v);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jmethodID mid = (*env)->GetStaticMethodID(env, cls, "onNativeWidescreenChanged", "(I)V");
                if (mid) (*env)->CallStaticVoidMethod(env, cls, mid, (jint)v);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setosd ", 7)) {
        int v = atoi(cmd + 7);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mTelemetryEnabled", "Z");
                if (fid) (*env)->SetStaticBooleanField(env, cls, fid, v > 0 ? JNI_TRUE : JNI_FALSE);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setfps ", 7)) {
        int v = atoi(cmd + 7);
        int target = 60;
        if (v == 0) target = 30;
        else if (v == 1) target = 60;
        else if (v == 2) target = 90;
        else if (v == 3) target = 120;
        else if (v == 4) target = 0; // unlimited
        else if (v >= 15) target = v; // direct fps e.g. 30, 60, 90, 120
        extern void host_set_target_fps(int fps);
        host_set_target_fps(target);
        return;
    }

    if (!strncasecmp(cmd, "sethaptics ", 11)) {
        int v = atoi(cmd + 11);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mHapticEnabled", "Z");
                if (fid) {
                    (*env)->SetStaticBooleanField(env, cls, fid, v == 0 ? JNI_TRUE : JNI_FALSE);
                }
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setmuffle ", 10)) {
        int v = atoi(cmd + 10);
        audio_set_muffle(v == 0 ? 0.0f : -1.0f);
        return;
    }

    if (!strncasecmp(cmd, "setautosprint ", 14)) {
        int v = atoi(cmd + 14);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mAutoSprint", "Z");
                if (fid) (*env)->SetStaticBooleanField(env, cls, fid, v == 0 ? JNI_TRUE : JNI_FALSE);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setcrosshair ", 13)) {
        int v = atoi(cmd + 13);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mCrosshairStyle", "I");
                if (fid) (*env)->SetStaticIntField(env, cls, fid, v);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "sethitmarker ", 13)) {
        int v = atoi(cmd + 13);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mHitmarkerEnabled", "Z");
                if (fid) (*env)->SetStaticBooleanField(env, cls, fid, v == 0 ? JNI_TRUE : JNI_FALSE);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setaimassist ", 13)) {
        int v = atoi(cmd + 13);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mAimAssistEnabled", "Z");
                if (fid) (*env)->SetStaticBooleanField(env, cls, fid, v > 0 ? JNI_TRUE : JNI_FALSE);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setjoymode ", 11)) {
        int v = atoi(cmd + 11);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mFloatingJoyEnabled", "Z");
                if (fid) (*env)->SetStaticBooleanField(env, cls, fid, v == 0 ? JNI_TRUE : JNI_FALSE);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setstickcurve ", 14)) {
        int v = atoi(cmd + 14);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mStickCurve", "I");
                if (fid) (*env)->SetStaticIntField(env, cls, fid, v);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setautoreload ", 14)) {
        int v = atoi(cmd + 14);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mAutoReload", "Z");
                if (fid) (*env)->SetStaticBooleanField(env, cls, fid, v == 0 ? JNI_TRUE : JNI_FALSE);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setautopickup ", 14)) {
        int v = atoi(cmd + 14);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mAutoPickup", "Z");
                if (fid) (*env)->SetStaticBooleanField(env, cls, fid, v == 0 ? JNI_TRUE : JNI_FALSE);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setrapidfire ", 13)) {
        int v = atoi(cmd + 13);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mRapidFireEnabled", "Z");
                if (fid) (*env)->SetStaticBooleanField(env, cls, fid, v == 0 ? JNI_TRUE : JNI_FALSE);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "sethudvisible ", 14)) {
        int v = atoi(cmd + 14);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mHudVisibilityMode", "I");
                if (fid) (*env)->SetStaticIntField(env, cls, fid, v);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strncasecmp(cmd, "setsubtitles ", 13)) {
        int v = atoi(cmd + 13);
#ifdef __ANDROID__
        JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
        if (env) {
            jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
            if (cls) {
                jfieldID fid = (*env)->GetStaticFieldID(env, cls, "mSubtitlesEnabled", "Z");
                if (fid) (*env)->SetStaticBooleanField(env, cls, fid, v > 0 ? JNI_TRUE : JNI_FALSE);
                (*env)->DeleteLocalRef(env, cls);
            }
        }
#endif
        return;
    }

    if (!strcasecmp(cmd, "fists") || !strcasecmp(cmd, "fist")) {
        execute_single_command("SwitchWeapon 1");
        host_pulse_key('1');
        return;
    }

    if (!strcasecmp(cmd, "loaded") || !strcasecmp(cmd, "allweapons")) {
        execute_single_command("weapons");
        execute_single_command("kungfu");
        execute_single_command("allammo");
        return;
    }

    if (!strcasecmp(cmd, "allammo")) {
        execute_single_command("summon DOTZWeapons.GlockAmmoPickup");
        execute_single_command("summon DOTZWeapons.RevolverAmmoPickup");
        execute_single_command("summon DOTZWeapons.ShotgunAmmoPickup");
        execute_single_command("summon DOTZWeapons.RifleAmmoPickup");
        execute_single_command("summon DOTZWeapons.SniperAmmoPickup");
        execute_single_command("summon DOTZWeapons.M16AmmoPickup");
        // fall through to UViewport::Exec
    }

    char safe_cmd[512];
    snprintf(safe_cmd, sizeof(safe_cmd), "%s", cmd);

    if (!strncasecmp(safe_cmd, "open ", 5)) {
        char *map = safe_cmd + 5;
        while (*map == ' ') map++;
        if (!strcasecmp(map, "CH01") || !strcasecmp(map, "CH01.dz")) strcpy(map, "CH01.dz");
        else if (!strcasecmp(map, "CH02") || !strcasecmp(map, "CH02a") || !strcasecmp(map, "CH02a.dz") || !strcasecmp(map, "CH02.dz")) strcpy(map, "CH02a.dz");
        else if (!strcasecmp(map, "CH03") || !strcasecmp(map, "CH03a") || !strcasecmp(map, "CH03a.dz") || !strcasecmp(map, "CH03.dz")) strcpy(map, "CH03a.dz");
        else if (!strcasecmp(map, "CH04") || !strcasecmp(map, "CH04a") || !strcasecmp(map, "CH04a.dz") || !strcasecmp(map, "CH04.dz")) strcpy(map, "CH04a.dz");
        else if (!strcasecmp(map, "CH05") || !strcasecmp(map, "CH05a") || !strcasecmp(map, "CH05a.dz") || !strcasecmp(map, "CH05.dz")) strcpy(map, "CH05a.dz");
        else if (!strcasecmp(map, "CH06") || !strcasecmp(map, "CH06a") || !strcasecmp(map, "CH06a.dz") || !strcasecmp(map, "CH06.dz")) strcpy(map, "CH06a.dz");
        else if (!strcasecmp(map, "CH07") || !strcasecmp(map, "CH07a") || !strcasecmp(map, "CH07a.dz") || !strcasecmp(map, "CH07.dz")) strcpy(map, "CH07a.dz");
        else if (!strcasecmp(map, "CH08") || !strcasecmp(map, "CH08.dz")) strcpy(map, "CH08.dz");
        else if (!strcasecmp(map, "CH09") || !strcasecmp(map, "CH09a") || !strcasecmp(map, "CH09a.dz") || !strcasecmp(map, "CH09.dz")) strcpy(map, "CH09a.dz");
        else if (!strcasecmp(map, "CH10") || !strcasecmp(map, "CH10.dz")) strcpy(map, "CH10.dz");
        else if (!strcasecmp(map, "CH11") || !strcasecmp(map, "CH11a") || !strcasecmp(map, "CH11a.dz") || !strcasecmp(map, "CH11.dz")) strcpy(map, "CH11a.dz");
        else if (!strcasecmp(map, "CH12") || !strcasecmp(map, "CH12a") || !strcasecmp(map, "CH12a.dz") || !strcasecmp(map, "CH12.dz")) strcpy(map, "CH12a.dz");
        else if (!strcasecmp(map, "CH13") || !strcasecmp(map, "CH13a") || !strcasecmp(map, "CH13a.dz") || !strcasecmp(map, "CH13.dz")) strcpy(map, "CH13a.dz");
        else if (!strchr(map, '.') && !strchr(map, ':') && !strchr(map, '?') && strlen(safe_cmd) < sizeof(safe_cmd) - 4) {
            strcat(safe_cmd, ".dz");
        }
        cmd = safe_cmd;
    }

    static uint32_t s_cmd_guest_buf = 0;
    if (!s_cmd_guest_buf) s_cmd_guest_buf = guest_static_alloc(512);
    int len = 0;
    while (cmd[len] && len < 250) {
        W16(s_cmd_guest_buf + len * 2, (uint16_t)(uint8_t)cmd[len]);
        len++;
    }
    W16(s_cmd_guest_buf + len * 2, 0);

    uint32_t glog_ptr = R32(0x10959d0cu);
    uint32_t glog = glog_ptr ? R32(glog_ptr) : 0;

    // First try UViewport::Exec (0x007ab0d0) which routes player & cheat commands
    // (CheatManager, PlayerController, Level, GameInfo).
    // Note on UE2 ABI: UViewport inherits UPlayer (UObject + FExec).
    // The FExec vtable is at vp + 0x2C. UViewport::Exec expects this = vp + 0x2C.
    // Inside f_7ab0d0, [esi + 4] is (vp + 0x2c) + 4 = vp + 0x30 (APlayerController* Actor).
    uint32_t vp = get_lotd_viewport();
    uint32_t handled = 0;
    if (vp) {
        uint32_t exec_vp = vp + 0x2cu;
        uint32_t actor = R32(vp + 0x30u);
        if (actor != 0) {
            host_log("LOTD: Executing command via UViewport::Exec (%08x, Actor=%08x): '%s'\n", exec_vp, actor, cmd);
            handled = guest_call_this(0x007ab0d0u, exec_vp, 2, s_cmd_guest_buf, glog);
            if (g_unwind) {
                guest_unwind_done();
                handled = 0;
            }
        }
    }

    if (!strcasecmp(cmd, "kungfu")) {
        if (!handled) {
            execute_single_command("summon DOTZWeapons.KungFuWeapon");
        }
    }

    // Also pass to GEngine::Exec (0x10959bf0) if not handled by Viewport or if it is an engine-level command
    if (!handled || !strncasecmp(cmd, "open ", 5) || !strcasecmp(cmd, "exit") || !strcasecmp(cmd, "quit")) {
        uint32_t gexec_ptr = R32(0x10959bf0u);
        uint32_t gexec = gexec_ptr ? R32(gexec_ptr) : 0;
        if (gexec) {
            uint32_t vtable = R32(gexec);
            uint32_t fn_exec = vtable ? R32(vtable) : 0; // FExec::Exec(const TCHAR* Cmd, FOutputDevice& Ar)
            if (fn_exec) {
                host_log("LOTD: Executing command via GExec (%08x, fn=%08x): '%s'\n", gexec, fn_exec, cmd);
                guest_call_this(fn_exec, gexec, 2, s_cmd_guest_buf, glog);
                if (g_unwind) {
                    guest_unwind_done();
                }
            }
        }
    }

    host_log("execute_single_command: '%s' processed\n", cmd);
}

static int s_in_execute_cmd = 0;

int host_handle_unrealscript_cmd(uint32_t cmd_ptr) {
    if (s_in_execute_cmd) return 0;
    if (!cmd_ptr || cmd_ptr >= GUEST_SIZE - 64) return 0;
    char cmd[512];
    int i = 0;
    while (i < 510) {
        uint16_t ch = R16(cmd_ptr + i * 2);
        if (!ch) break;
        cmd[i] = (char)ch;
        i++;
    }
    cmd[i] = '\0';
    if (!cmd[0]) return 0;

    if (!strncasecmp(cmd, "menu_active ", 12)) {
        g_menu_active = atoi(cmd + 12);
        host_log("host_handle_unrealscript_cmd: g_menu_active = %d\n", g_menu_active);
        return 1;
    }

    if (!strncasecmp(cmd, "exec_cmd ", 9)) {
        host_log("host_handle_unrealscript_cmd: exec_cmd '%s'\n", cmd + 9);
        s_in_execute_cmd = 1;
        execute_single_command(cmd + 9);
        s_in_execute_cmd = 0;
        return 1;
    }

    if (!strncasecmp(cmd, "fov ", 4) || !strncasecmp(cmd, "setfov ", 7)) {
        const char *val_str = (!strncasecmp(cmd, "fov ", 4)) ? (cmd + 4) : (cmd + 7);
        int f = atoi(val_str);
        if (f >= 60 && f <= 130) {
            g_target_fov = f;
            d3d_set_widescreen(d3d_get_widescreen());
            host_log("host_handle_unrealscript_cmd: updated g_target_fov to %d\n", g_target_fov);
        }
        return 1;
    }

    if (!strncasecmp(cmd, "setsens ", 8) || !strncasecmp(cmd, "SetSensitivity ", 15)) {
        const char *val_str = (!strncasecmp(cmd, "setsens ", 8)) ? (cmd + 8) : (cmd + 15);
        float s = atof(val_str);
        if (s > 0.05f) {
            g_mouse_sensitivity_scale = s / 3.0f;
            host_log("host_handle_unrealscript_cmd: updated mouse sensitivity scale to %.2f (val=%.2f)\n", g_mouse_sensitivity_scale, s);
        }
        return 1;
    }

    if (!strncasecmp(cmd, "setfps ", 7) ||
        !strncasecmp(cmd, "setfxaa ", 8) ||
        !strncasecmp(cmd, "setcas ", 7) ||
        !strncasecmp(cmd, "setfilter ", 10) ||
        !strncasecmp(cmd, "sethdr ", 7) ||
        !strncasecmp(cmd, "setvignette ", 12) ||
        !strncasecmp(cmd, "setwidescreen ", 14) ||
        !strncasecmp(cmd, "setosd ", 7) ||
        !strncasecmp(cmd, "sethaptics ", 11) ||
        !strncasecmp(cmd, "setmuffle ", 10) ||
        !strncasecmp(cmd, "setaimassist ", 13) ||
        !strncasecmp(cmd, "setjoymode ", 11) ||
        !strncasecmp(cmd, "setstickcurve ", 14) ||
        !strncasecmp(cmd, "setautosprint ", 14) ||
        !strncasecmp(cmd, "setautoreload ", 14) ||
        !strncasecmp(cmd, "setautopickup ", 14) ||
        !strncasecmp(cmd, "setrapidfire ", 13) ||
        !strncasecmp(cmd, "sethudvisible ", 14) ||
        !strncasecmp(cmd, "setcrosshair ", 13) ||
        !strncasecmp(cmd, "sethitmarker ", 13) ||
        !strncasecmp(cmd, "setsubtitles ", 13) ||
        !strcasecmp(cmd, "open_touch_editor") ||
        !strcasecmp(cmd, "open_console_terminal") ||
        !strcasecmp(cmd, "openconsoleterminal") ||
        !strcasecmp(cmd, "showconsole")) {
        host_log("host_handle_unrealscript_cmd: executing custom command '%s'\n", cmd);
        s_in_execute_cmd = 1;
        execute_single_command(cmd);
        s_in_execute_cmd = 0;
        return 1;
    }
    return 0;
}

static int s_quick_turn_steps = 0;
static int s_quick_turn_amount = 0;

void host_trigger_quick_turn_180(void) {
    if (captured) {
        s_quick_turn_steps = 8;
        s_quick_turn_amount = 90;
    }
}

void user32_pump_events(void) {
    static int controller_inited = 0;
    if (!controller_inited) {
        controller_inited = 1;
        controller_init();
    }
    SDL_Event e;
    scripted_input();
    uint32_t fr = host_frame_count();
    if (s_pending_mouse_click && fr >= s_pending_mouse_frame) {
        s_pending_mouse_click = 0;
        mouse_to(s_pending_mouse_gx, s_pending_mouse_gy);
        host_send_mouse_button(0, 1);
        if (!s_menu_touch_active) {
            if (s_num_mouse_btns_to_release < 4) {
                s_mouse_btns_to_release[s_num_mouse_btns_to_release] = 0;
                s_mouse_btns_release_frame[s_num_mouse_btns_to_release] = fr + 2;
                s_num_mouse_btns_to_release++;
            } else {
                host_send_mouse_button(0, 0);
            }
        }
    }
    if (ndeferred && fr != deferred_frame) {
        SDL_Event now[16]; int nnow = ndeferred;
        memcpy(now, deferred, sizeof(SDL_Event) * (size_t)ndeferred);
        ndeferred = 0;
        for (int i = 0; i < nnow; i++) handle_event(now[i]);
    }
    int moved_this_pump = moved_frame == fr;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_MOUSEMOTION) { moved_this_pump = 1; moved_frame = fr; }
        if ((e.type == SDL_MOUSEBUTTONDOWN || e.type == SDL_MOUSEBUTTONUP) && !captured) {
            int gx, gy; gfx_map_mouse(e.button.x, e.button.y, &gx, &gy);
            if ((moved_this_pump || gx != mouse_x || gy != mouse_y || ndeferred) && ndeferred < 16) {
                if (gx != mouse_x || gy != mouse_y) { mouse_to(gx, gy); moved_frame = fr; }
                if (!ndeferred) deferred_frame = fr;
                deferred[ndeferred++] = e;
                continue;
            }
        }
        handle_event(e);
    }

    if (s_quick_turn_steps > 0 && captured) {
        dinput_mouse_move(s_quick_turn_amount, 0);
        s_quick_turn_steps--;
    }

    // Process Gamepad Analog Sticks
    static uint32_t s_last_stick_frame = 0;
    uint32_t fr_stick = host_frame_count();
    if (fr_stick != s_last_stick_frame) {
        s_last_stick_frame = fr_stick;
        if (captured) {
            const float DEADZONE_MOVE = 0.22f;
            int want_w = (g_stick_ly < -DEADZONE_MOVE);
            int want_s = (g_stick_ly > DEADZONE_MOVE);
            int want_a = (g_stick_lx < -DEADZONE_MOVE);
            int want_d = (g_stick_lx > DEADZONE_MOVE);

            if (want_w != g_pad_key_w) { g_pad_key_w = want_w; host_send_key('W', want_w); }
            if (want_s != g_pad_key_s) { g_pad_key_s = want_s; host_send_key('S', want_s); }
            if (want_a != g_pad_key_a) { g_pad_key_a = want_a; host_send_key('A', want_a); }
            if (want_d != g_pad_key_d) { g_pad_key_d = want_d; host_send_key('D', want_d); }

            const float DEADZONE_LOOK = 0.12f;
            float mag = sqrtf(g_stick_rx * g_stick_rx + g_stick_ry * g_stick_ry);
            static float acc_rx = 0.0f, acc_ry = 0.0f;

            if (mag > DEADZONE_LOOK) {
                float norm = (mag - DEADZONE_LOOK) / (1.0f - DEADZONE_LOOK);
                if (norm > 1.0f) norm = 1.0f;
                float curve_factor = 1.0f;
                extern int g_stick_curve;
                if (g_stick_curve == 0) {
                    curve_factor = norm; // Linear
                } else if (g_stick_curve == 2) {
                    curve_factor = norm * norm * norm; // Exponential
                } else {
                    curve_factor = norm * 0.40f + norm * norm * 0.60f; // Quadratic Progressive Default
                }
                float speed = curve_factor * 16.0f;
                extern int g_is_aiming;
                if (g_is_aiming) speed *= 0.55f;
                float look_dx = (g_stick_rx / mag) * speed;
                float look_dy = (g_stick_ry / mag) * speed;

                acc_rx += look_dx;
                acc_ry += look_dy;
                int idx = (int)acc_rx;
                int idy = (int)acc_ry;
                if (idx != 0 || idy != 0) {
                    acc_rx -= (float)idx;
                    acc_ry -= (float)idy;
                    dinput_mouse_move(idx, idy);
                }
            }
        } else {
            if (g_pad_key_w) { g_pad_key_w = 0; host_send_key('W', 0); }
            if (g_pad_key_s) { g_pad_key_s = 0; host_send_key('S', 0); }
            if (g_pad_key_a) { g_pad_key_a = 0; host_send_key('A', 0); }
            if (g_pad_key_d) { g_pad_key_d = 0; host_send_key('D', 0); }

            const float DEADZONE_MENU = 0.20f;
            float abs_lx = fabsf(g_stick_lx);
            float abs_ly = fabsf(g_stick_ly);
            float abs_rx = fabsf(g_stick_rx);
            float abs_ry = fabsf(g_stick_ry);
            float mx = (abs_rx > DEADZONE_MENU) ? g_stick_rx : ((abs_lx > DEADZONE_MENU) ? g_stick_lx : 0.0f);
            float my = (abs_ry > DEADZONE_MENU) ? g_stick_ry : ((abs_ly > DEADZONE_MENU) ? g_stick_ly : 0.0f);
            static float acc_mx = 0.0f, acc_my = 0.0f;
            if (mx != 0.0f || my != 0.0f) {
                acc_mx += mx * 9.0f;
                acc_my += my * 9.0f;
                int dmx = (int)acc_mx;
                int dmy = (int)acc_my;
                if (dmx != 0 || dmy != 0) {
                    acc_mx -= (float)dmx;
                    acc_my -= (float)dmy;
                    mouse_to(mouse_x + dmx, mouse_y + dmy);
                }
            }
        }
    }

    // Process pending console commands on the main engine thread
    pthread_mutex_lock(&s_cmd_mutex);
    while (s_pending_cmd_head != s_pending_cmd_tail) {
        char cmd[512];
        snprintf(cmd, sizeof(cmd), "%s", s_pending_cmds[s_pending_cmd_head]);
        s_pending_cmd_head = (s_pending_cmd_head + 1) % MAX_PENDING_CMDS;
        pthread_mutex_unlock(&s_cmd_mutex);

        execute_single_command(cmd);

        pthread_mutex_lock(&s_cmd_mutex);
    }
    pthread_mutex_unlock(&s_cmd_mutex);

    // Release pulsed keys whose delay has expired
    uint32_t fr_now = host_frame_count();
    for (int k = 0; k < s_num_keys_to_release; ) {
        if (fr_now >= s_keys_release_frame[k]) {
            host_send_key(s_keys_to_release[k], 0);
            s_keys_to_release[k] = s_keys_to_release[s_num_keys_to_release - 1];
            s_keys_release_frame[k] = s_keys_release_frame[s_num_keys_to_release - 1];
            s_num_keys_to_release--;
        } else {
            k++;
        }
    }

    // Release pulsed mouse buttons whose delay has expired
    for (int m = 0; m < s_num_mouse_btns_to_release; ) {
        if (fr_now >= s_mouse_btns_release_frame[m]) {
            host_send_mouse_button(s_mouse_btns_to_release[m], 0);
            s_mouse_btns_to_release[m] = s_mouse_btns_to_release[s_num_mouse_btns_to_release - 1];
            s_mouse_btns_release_frame[m] = s_mouse_btns_release_frame[s_num_mouse_btns_to_release - 1];
            s_num_mouse_btns_to_release--;
        } else {
            m++;
        }
    }
}

static int peek(uint32_t pmsg, uint32_t hwnd, uint32_t lo, uint32_t hi, uint32_t remove) {
    for (int i = qh; i != qt; i = (i + 1) % QN) {
        Msg *m = &q[i];
        if (hwnd && m->hwnd != hwnd) continue;
        if ((lo || hi) && (m->msg < lo || m->msg > hi)) continue;
        W32(pmsg, m->hwnd); W32(pmsg + 4, m->msg); W32(pmsg + 8, m->wp); W32(pmsg + 12, m->lp);
        W32(pmsg + 16, m->time); W32(pmsg + 20, m->x); W32(pmsg + 24, m->y);
        if (remove & 1) {
            // remove entry i, keeping order
            for (int j = i; j != qh; ) { int p = (j - 1 + QN) % QN; q[j] = q[p]; j = p; }
            qh = (qh + 1) % QN;
        }
        return 1;
    }
    return 0;
}
static void u_PeekMessage(void) {
    user32_pump_events();
    SRET(peek(ARG(0), ARG(1), ARG(2), ARG(3), ARG(4)), 5);
}
static void u_TranslateMessage(void) { SRET(0, 1); }
static void u_DispatchMessage(void) {
    uint32_t pmsg = ARG(0);
    uint32_t hwnd = R32(pmsg), msg = R32(pmsg + 4), wp = R32(pmsg + 8), lp = R32(pmsg + 12);
    uint32_t r = send(hwnd, msg, wp, lp);
    if (g_unwind) return;
    SRET(r, 1);
}
static void u_SendMessage(void) {
    uint32_t r = send(ARG(0), ARG(1), ARG(2), ARG(3));
    if (g_unwind) return;
    SRET(r, 4);
}
static void u_SendMessageTimeoutW(void) {
    uint32_t r = send(ARG(0), ARG(1), ARG(2), ARG(3));
    if (g_unwind) return;
    if (ARG(6)) W32(ARG(6), r);
    SRET(1, 7);
}
static void u_PostMessage(void) {
    if (ARG(0) == 0xffffu) SRET(1, 4);      // HWND_BROADCAST
    post_to(ARG(0) ? ARG(0) : g_hwnd, ARG(1), ARG(2), ARG(3));
    SRET(1, 4);
}
static void u_PostQuitMessage(void) { post(0x12, ARG(0), 0); SRET(0, 1); }
static void u_CallWindowProc(void) {
    uint32_t r = guest_call(ARG(0), 4, ARG(1), ARG(2), ARG(3), ARG(4));
    if (g_unwind) return;
    SRET(r, 5);
}
static void u_DefWindowProc(void) {
    uint32_t hwnd = ARG(0), msg = ARG(1);
    uint32_t r = 0;
    switch (msg) {
    case 0x81: r = 1; break;                                // WM_NCCREATE
    case 0x10: {                                            // WM_CLOSE
        Win *w = user32_win(hwnd);
        if (w) { send(hwnd, 0x02, 0, 0); if (g_unwind) return; }
        break;
    }
    case 0x0D: { Win *w = user32_win(hwnd); r = put_w(ARG(3), ARG(2), w ? w->text : ""); break; }   // WM_GETTEXT
    case 0x0E: { Win *w = user32_win(hwnd); r = w ? (uint32_t)strlen(w->text) : 0; break; }        // WM_GETTEXTLENGTH
    }
    SRET(r, 4);
}
static void u_DefMDIChildProc(void) { SRET(0, 4); }
static void u_GetMessageTime(void) { SRET(host_ticks(), 0); }
static uint32_t reg_msg_n;
static void u_RegisterWindowMessage(void) { SRET(0xC200 + (reg_msg_n++), 1); }

// ---------------------------------------------------------------- cursor and keyboard
static void u_GetCursorPos(void) {
    Win *w = user32_win(g_hwnd);
    W32(ARG(0), mouse_x + (w ? w->x : 0)); W32(ARG(0) + 4, mouse_y + (w ? w->y : 0));
    SRET(1, 1);
}
static void u_SetCursorPos(void) {
    Win *w = user32_win(g_hwnd);
    mouse_x = (int32_t)ARG(0) - (w ? w->x : 0); mouse_y = (int32_t)ARG(1) - (w ? w->y : 0);
    SRET(1, 2);
}
#ifdef __EMSCRIPTEN__
// The page owns pointer lock (web/shell.html: Module.onWantPointerLock): browsers grant it only inside a click or
// key handler, and SDL's relative mode never asks for it when the pointer has not entered the canvas yet (no mouse
// focus) nor again after Esc released it. Locked, SDL still reports movementX/Y as relative motion.
EM_JS(void, web_want_pointer_lock, (int want), { if (Module.onWantPointerLock) Module.onWantPointerLock(!!want); });
#endif
static void update_capture(void) {
    int want = cursor_count < 0;
    if (want != captured) {
        captured = want;
        g_menu_active = !want;
        dinput_clear_mouse();
#ifdef __EMSCRIPTEN__
        web_want_pointer_lock(want);
#else
        SDL_SetRelativeMouseMode(want ? SDL_TRUE : SDL_FALSE);
#endif
        host_log("mouse %s\n", want ? "captured (relative)" : "released");
    }
}
static void u_ShowCursor(void) {
    cursor_count += ARG(0) ? 1 : -1;
#ifdef __ANDROID__
    SDL_ShowCursor(SDL_DISABLE);
#else
    SDL_ShowCursor(cursor_count >= 0 ? SDL_ENABLE : SDL_DISABLE);
#endif
    update_capture();
    SRET((uint32_t)cursor_count, 1);
}
static void u_ClipCursor(void) { SRET(1, 1); }
static void u_SetCursor(void) { SRET(0, 1); }
static void u_GetCursor(void) { SRET(0x00030001, 0); }
static void u_LoadCursor(void) { SRET(0x00030001, 2); }
static void u_LoadIcon(void) { SRET(0x00040001, 2); }
static void u_LoadImageA(void) { SRET(0x00040002, 6); }
static void u_SetCapture(void) { SRET(0, 1); }
static void u_ReleaseCapture(void) { SRET(1, 0); }
static void u_GetCapture(void) { SRET(0, 0); }
static void u_WindowFromPoint(void) { SRET(g_hwnd, 2); }
static void u_GetKeyState(void) { SRET(keystate[ARG(0) & 0xff] ? 0xff80u : 0, 1); }
static void u_SetKeyboardState(void) { SRET(1, 1); }
static void u_MapVirtualKeyW(void) {
    uint32_t code = ARG(0), type = ARG(1);
    if (type == 0) SRET(dinput_vk_to_dik(code), 2);     // VK -> scan code (DIK numbers are scan codes)
    SRET(0, 2);
}
static void u_GetKeyNameTextW(void) {
    uint32_t lparam = ARG(0);
    uint32_t buf = ARG(1);
    int max = (int)ARG(2);
    int sc = (int)((lparam >> 16) & 0xff);
    int ext = (int)((lparam >> 24) & 1);
    const char *name = NULL;

    if (ext) {
        switch (sc) {
            case 0x1C: name = "ENTER"; break;
            case 0x1D: name = "RCTRL"; break;
            case 0x35: name = "NUM /"; break;
            case 0x37: name = "PRINTSCRN"; break;
            case 0x38: name = "RALT"; break;
            case 0x47: name = "HOME"; break;
            case 0x48: name = "UP"; break;
            case 0x49: name = "PGUP"; break;
            case 0x4B: name = "LEFT"; break;
            case 0x4D: name = "RIGHT"; break;
            case 0x4F: name = "END"; break;
            case 0x50: name = "DOWN"; break;
            case 0x51: name = "PGDN"; break;
            case 0x52: name = "INSERT"; break;
            case 0x53: name = "DELETE"; break;
        }
    }
    if (!name) {
        static const char *sc_table[256] = {
            [0x01] = "ESC",
            [0x02] = "1", [0x03] = "2", [0x04] = "3", [0x05] = "4", [0x06] = "5",
            [0x07] = "6", [0x08] = "7", [0x09] = "8", [0x0A] = "9", [0x0B] = "0",
            [0x0C] = "-", [0x0D] = "=", [0x0E] = "BACKSPACE", [0x0F] = "TAB",
            [0x10] = "Q", [0x11] = "W", [0x12] = "E", [0x13] = "R", [0x14] = "T",
            [0x15] = "Y", [0x16] = "U", [0x17] = "I", [0x18] = "O", [0x19] = "P",
            [0x1A] = "[", [0x1B] = "]", [0x1C] = "ENTER", [0x1D] = "CTRL",
            [0x1E] = "A", [0x1F] = "S", [0x20] = "D", [0x21] = "F", [0x22] = "G",
            [0x23] = "H", [0x24] = "J", [0x25] = "K", [0x26] = "L", [0x27] = ";",
            [0x28] = "'", [0x29] = "`", [0x2A] = "SHIFT", [0x2B] = "\\",
            [0x2C] = "Z", [0x2D] = "X", [0x2E] = "C", [0x2F] = "V", [0x30] = "B",
            [0x31] = "N", [0x32] = "M", [0x33] = ",", [0x34] = ".", [0x35] = "/",
            [0x36] = "RSHIFT", [0x37] = "NUM *", [0x38] = "ALT", [0x39] = "SPACE",
            [0x3A] = "CAPSLOCK",
            [0x3B] = "F1", [0x3C] = "F2", [0x3D] = "F3", [0x3E] = "F4", [0x3F] = "F5",
            [0x40] = "F6", [0x41] = "F7", [0x42] = "F8", [0x43] = "F9", [0x44] = "F10",
            [0x45] = "NUMLOCK", [0x46] = "SCROLL",
            [0x47] = "NUM 7", [0x48] = "NUM 8", [0x49] = "NUM 9", [0x4A] = "NUM -",
            [0x4B] = "NUM 4", [0x4C] = "NUM 5", [0x4D] = "NUM 6", [0x4E] = "NUM +",
            [0x4F] = "NUM 1", [0x50] = "NUM 2", [0x51] = "NUM 3", [0x52] = "NUM 0",
            [0x53] = "NUM .", [0x57] = "F11", [0x58] = "F12",
            [0xC7] = "HOME", [0xC8] = "UP", [0xC9] = "PGUP",
            [0xCB] = "LEFT", [0xCD] = "RIGHT",
            [0xCF] = "END", [0xD0] = "DOWN", [0xD1] = "PGDN",
            [0xD2] = "INSERT", [0xD3] = "DELETE",
        };
        name = sc_table[sc];
    }
    if (!name) name = "KEY";
    SRET(put_w(buf, max, name), 3);
}
static void u_RegisterHotKey(void) { SRET(1, 4); }
static void u_UnregisterHotKey(void) { SRET(1, 2); }
static void u_AttachThreadInput(void) { SRET(1, 3); }

// ---------------------------------------------------------------- painting, menus, dialogs, clipboard (no-ops)
static void u_GetDC(void) { SRET(0x00050001, 1); }
static void u_ReleaseDC(void) { SRET(1, 2); }
static void u_BeginPaint(void) { memset(G + ARG(1), 0, 64); W32(ARG(1), 0x00050001); SRET(0x00050001, 2); }
static void u_EndPaint(void) { SRET(1, 2); }
static void u_ret0_1(void) { SRET(0, 1); }
static void u_ret0_2(void) { SRET(0, 2); }
static void u_ret0_3(void) { SRET(0, 3); }
static void u_ret0_4(void) { SRET(0, 4); }
static void u_ret0_5(void) { SRET(0, 5); }
static void u_ret0_7(void) { SRET(0, 7); }
static void u_ret1_0(void) { SRET(1, 0); }
static void u_ret1_1(void) { SRET(1, 1); }
static void u_ret1_2(void) { SRET(1, 2); }
static void u_ret1_3(void) { SRET(1, 3); }
static void u_ret1_4(void) { SRET(1, 4); }
static void u_retm1_2(void) { SRET(0xffffffffu, 2); }
static void u_DrawText(void) { SRET(16, 5); }
static void u_DrawTextEx(void) { SRET(16, 6); }
static void u_GetSysColor(void) { SRET(0xC0C0C0, 1); }
static void u_GetSysColorBrush(void) { SRET(0x00070001, 1); }
static void u_BeginDeferWindowPos(void) { SRET(0x00080001, 1); }
static void u_DeferWindowPos(void) { SRET(ARG(0), 8); }
static void u_CreateMenu(void) { SRET(0x00090001, 0); }
static void u_LoadMenu(void) { SRET(0x00090002, 2); }
static void u_MessageBoxW(void) {
    char t[512], c[128];
    wstr(ARG(1), t, sizeof t); wstr(ARG(2), c, sizeof c);
    host_log("MessageBox: [%s] %s\n", c, t);
    SRET(1, 4);
}
static void u_MessageBoxA(void) {
    host_log("MessageBox: [%s] %s\n", ARG(2) ? GSTR(ARG(2)) : "", ARG(1) ? GSTR(ARG(1)) : "");
    SRET(1, 4);
}

#define U(n, f) {"USER32", n, f}
const ShimDef shims_user32[] = {
    U("RegisterClassExA", u_RegisterClassExA), U("RegisterClassExW", u_RegisterClassExW),
    U("GetClassInfoExA", u_GetClassInfoExA), U("GetClassInfoExW", u_GetClassInfoExW),
    U("CreateWindowExA", u_CreateWindowExA), U("CreateWindowExW", u_CreateWindowExW),
    U("CreateDialogParamA", u_CreateDialogParam), U("CreateDialogParamW", u_CreateDialogParam),
    U("CreateDialogIndirectParamA", u_CreateDialogIndirectParamA),
    U("DialogBoxParamA", u_DialogBoxParam), U("DialogBoxParamW", u_DialogBoxParam), U("EndDialog", u_EndDialog),
    U("DestroyWindow", u_DestroyWindow), U("IsWindow", u_IsWindow), U("IsWindowVisible", u_IsWindowVisible),
    U("IsWindowEnabled", u_IsWindowEnabled), U("EnableWindow", u_ret0_2), U("ShowWindow", u_ShowWindow),
    U("UpdateWindow", u_UpdateWindow), U("GetParent", u_GetParent), U("SetParent", u_SetParent), U("GetWindow", u_GetWindow),
    U("GetDlgItem", u_GetDlgItem), U("GetDlgCtrlID", u_GetDlgCtrlID), U("EnumChildWindows", u_EnumChildWindows),
    U("EnumThreadWindows", u_EnumThreadWindows), U("FindWindowExA", u_FindWindowEx), U("FindWindowExW", u_FindWindowEx),
    U("GetDesktopWindow", u_GetDesktopWindow), U("GetActiveWindow", u_GetActiveWindow), U("GetFocus", u_ret_hwnd0),
    U("GetForegroundWindow", u_ret_hwnd0), U("SetActiveWindow", u_ret_hwnd1), U("SetFocus", u_ret_hwnd1),
    U("SetForegroundWindow", u_ret_hwnd1), U("BringWindowToTop", u_ret1_1),
    U("GetWindowThreadProcessId", u_GetWindowThreadProcessId),
    U("GetWindowLongA", u_GetWindowLong), U("GetWindowLongW", u_GetWindowLong),
    U("SetWindowLongA", u_SetWindowLong), U("SetWindowLongW", u_SetWindowLong),
    U("SetPropA", u_SetPropA), U("SetPropW", u_SetPropW), U("GetPropA", u_GetPropA), U("GetPropW", u_GetPropW),
    U("RemovePropA", u_RemovePropA), U("RemovePropW", u_RemovePropW),
    U("GetWindowTextA", u_GetWindowTextA), U("GetWindowTextW", u_GetWindowTextW),
    U("GetClientRect", u_GetClientRect), U("GetWindowRect", u_GetWindowRect), U("SetWindowPos", u_SetWindowPos),
    U("MoveWindow", u_MoveWindow), U("AdjustWindowRect", u_AdjustWindowRect), U("ClientToScreen", u_ClientToScreen),
    U("ScreenToClient", u_ScreenToClient), U("MapWindowPoints", u_MapWindowPoints), U("IsIconic", u_IsIconic),
    U("IsZoomed", u_IsZoomed), U("GetSystemMetrics", u_GetSystemMetrics),
    U("SystemParametersInfoA", u_SystemParametersInfo), U("SystemParametersInfoW", u_SystemParametersInfo),
    U("PeekMessageA", u_PeekMessage), U("PeekMessageW", u_PeekMessage), U("TranslateMessage", u_TranslateMessage),
    U("DispatchMessageA", u_DispatchMessage), U("DispatchMessageW", u_DispatchMessage),
    U("SendMessageA", u_SendMessage), U("SendMessageW", u_SendMessage), U("SendMessageTimeoutW", u_SendMessageTimeoutW),
    U("PostMessageA", u_PostMessage), U("PostMessageW", u_PostMessage), U("PostQuitMessage", u_PostQuitMessage),
    U("CallWindowProcA", u_CallWindowProc), U("CallWindowProcW", u_CallWindowProc),
    U("DefWindowProcA", u_DefWindowProc), U("DefWindowProcW", u_DefWindowProc),
    U("DefMDIChildProcA", u_DefMDIChildProc), U("DefMDIChildProcW", u_DefMDIChildProc),
    U("GetMessageTime", u_GetMessageTime), U("RegisterWindowMessageA", u_RegisterWindowMessage),
    U("RegisterWindowMessageW", u_RegisterWindowMessage),
    U("GetCursorPos", u_GetCursorPos), U("SetCursorPos", u_SetCursorPos), U("ShowCursor", u_ShowCursor),
    U("ClipCursor", u_ClipCursor), U("SetCursor", u_SetCursor), U("GetCursor", u_GetCursor),
    U("LoadCursorA", u_LoadCursor), U("LoadCursorW", u_LoadCursor), U("LoadIconA", u_LoadIcon), U("LoadIconW", u_LoadIcon),
    U("LoadImageA", u_LoadImageA), U("SetCapture", u_SetCapture), U("ReleaseCapture", u_ReleaseCapture),
    U("GetCapture", u_GetCapture), U("WindowFromPoint", u_WindowFromPoint), U("GetKeyState", u_GetKeyState),
    U("SetKeyboardState", u_SetKeyboardState), U("MapVirtualKeyW", u_MapVirtualKeyW), U("GetKeyNameTextW", u_GetKeyNameTextW),
    U("RegisterHotKey", u_RegisterHotKey), U("UnregisterHotKey", u_UnregisterHotKey), U("AttachThreadInput", u_AttachThreadInput),
    U("GetDC", u_GetDC), U("ReleaseDC", u_ReleaseDC), U("BeginPaint", u_BeginPaint), U("EndPaint", u_EndPaint),
    U("InvalidateRect", u_ret1_3), U("ValidateRect", u_ret1_2), U("GetUpdateRect", u_ret0_3), U("FillRect", u_ret1_3),
    U("DrawEdge", u_ret1_4), U("DrawFocusRect", u_ret1_2), U("DrawTextA", u_DrawText), U("DrawTextW", u_DrawText),
    U("DrawTextExA", u_DrawTextEx), U("DrawTextExW", u_DrawTextEx), U("GetSysColor", u_GetSysColor),
    U("GetSysColorBrush", u_GetSysColorBrush), U("MessageBeep", u_ret1_1),
    U("BeginDeferWindowPos", u_BeginDeferWindowPos), U("EndDeferWindowPos", u_ret1_1),
    U("CreatePopupMenu", u_CreateMenu), U("DestroyMenu", u_ret1_1), U("LoadMenuA", u_LoadMenu), U("LoadMenuW", u_LoadMenu),
    U("GetMenu", u_ret0_1), U("SetMenu", u_ret1_2), U("GetSubMenu", u_ret0_2), U("GetMenuItemCount", u_ret0_1),
    U("GetMenuItemInfoA", u_ret0_4), U("GetMenuItemInfoW", u_ret0_4), U("SetMenuItemInfoA", u_ret1_4),
    U("SetMenuItemInfoW", u_ret1_4), U("InsertMenuItemA", u_ret1_4), U("GetMenuState", u_retm1_2),
    U("TrackPopupMenu", u_ret0_7), U("OpenClipboard", u_ret0_1), U("CloseClipboard", u_ret1_0), U("EmptyClipboard", u_ret1_0),
    U("GetClipboardData", u_ret0_1), U("SetClipboardData", u_ret0_2),
    U("MessageBoxA", u_MessageBoxA), U("MessageBoxW", u_MessageBoxW),
    {0, 0, 0}
};

#ifdef __ANDROID__
#include <jni.h>

static JavaVM *g_jvm = NULL;
static jclass g_sdl_cls = NULL;
static jmethodID g_set_kb_method = NULL;

JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    (void)reserved;
    g_jvm = vm;
    JNIEnv *env = NULL;
    if ((*vm)->GetEnv(vm, (void **)&env, JNI_VERSION_1_6) == JNI_OK) {
        jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
        if (cls) {
            g_sdl_cls = (jclass)(*env)->NewGlobalRef(env, cls);
            g_set_kb_method = (*env)->GetStaticMethodID(env, g_sdl_cls, "setSoftKeyboardVisible", "(Z)V");
        }
    }
    return JNI_VERSION_1_6;
}

void android_show_keyboard(int show) {
    if (!g_jvm || !g_sdl_cls || !g_set_kb_method) return;
    JNIEnv *env = NULL;
    int attached = 0;
    if ((*g_jvm)->GetEnv(g_jvm, (void **)&env, JNI_VERSION_1_6) != JNI_OK) {
        if ((*g_jvm)->AttachCurrentThread(g_jvm, &env, NULL) != 0) return;
        attached = 1;
    }
    (*env)->CallStaticVoidMethod(env, g_sdl_cls, g_set_kb_method, (jboolean)(show ? JNI_TRUE : JNI_FALSE));
    if (attached) {
        (*g_jvm)->DetachCurrentThread(g_jvm);
    }
}

void android_notify_focus_component(uint32_t comp) {
    if (!comp || comp >= GUEST_SIZE - 64) {
        android_show_keyboard(0);
        return;
    }
    char name[128] = {0};
    uint32_t name_idx = R32(comp + 0x1c);
    uint32_t names_ptr = R32(0x69a758u);
    if (names_ptr && names_ptr < GUEST_SIZE - 65536) {
        uint32_t entry = R32(names_ptr + (name_idx & 0xffff) * 4);
        if (entry && entry < GUEST_SIZE - 64) {
            uint16_t *wstr = (uint16_t *)(G + entry + 0xc);
            for (int k = 0; k < 120 && wstr[k]; k++) {
                name[k] = (char)wstr[k];
            }
        }
    }
    char cls_name[128] = {0};
    uint32_t cls = R32(comp + 0x24);
    if (!cls || cls >= GUEST_SIZE - 64) cls = R32(comp + 0x20);
    if (!cls || cls >= GUEST_SIZE - 64) cls = R32(comp + 0x28);
    if (cls && cls < GUEST_SIZE - 64 && names_ptr && names_ptr < GUEST_SIZE - 65536) {
        uint32_t c_idx = R32(cls + 0x1c);
        uint32_t c_entry = R32(names_ptr + (c_idx & 0xffff) * 4);
        if (c_entry && c_entry < GUEST_SIZE - 64) {
            uint16_t *wstr = (uint16_t *)(G + c_entry + 0xc);
            for (int k = 0; k < 120 && wstr[k]; k++) {
                cls_name[k] = (char)wstr[k];
            }
        }
    }
    host_log("LOTD: Component focus changed: comp=%08x name='%s' class='%s'\n", comp, name, cls_name);
    if (strcasestr(name, "Edit") || strcasestr(cls_name, "Edit") ||
        strcasestr(name, "Text") || strcasestr(cls_name, "Text") ||
        strcasestr(name, "Box")  || strcasestr(cls_name, "Box")  ||
        strcasestr(name, "Input")|| strcasestr(cls_name, "Input")||
        strcasestr(name, "Pass") || strcasestr(cls_name, "Pass") ||
        strcasestr(name, "Profile") || strcasestr(cls_name, "Profile") ||
        strcasestr(name, "Type") || strcasestr(cls_name, "Type")) {
        android_show_keyboard(1);
    } else {
        android_show_keyboard(0);
    }
}

JNIEXPORT jboolean JNICALL
Java_org_libsdl_app_SDLActivity_nativeIsCaptured(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    if (bink_is_active()) return JNI_FALSE;
    return (jboolean)(captured ? JNI_TRUE : JNI_FALSE);
}

JNIEXPORT jboolean JNICALL
Java_org_libsdl_app_SDLActivity_nativeIsMoviePlaying(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jboolean)(bink_is_active() ? JNI_TRUE : JNI_FALSE);
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSkipMovie(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    if (bink_is_active()) {
        bink_skip_current();
    }
    host_pulse_key(0x20); // Space
    host_pulse_key(0x1b); // Esc
    host_pulse_key(0x0d); // Enter
    host_pulse_mouse_button(0); // Left click
}

static void inspect_weapon_object(uint32_t obj, uint32_t names_ptr, uint32_t *pmask, uint32_t *visited, int *n_visited) {
    if (!obj || obj >= GUEST_SIZE - 256) return;
    for (int i = 0; i < *n_visited; i++) {
        if (visited[i] == obj) return;
    }
    if (*n_visited < 64) {
        visited[(*n_visited)++] = obj;
    } else {
        return;
    }

    uint32_t c = R32(obj + 0x20u);
    if (!c || c >= GUEST_SIZE - 64) c = R32(obj + 0x24u);
    if (c && c < GUEST_SIZE - 64) {
        uint32_t c_idx = R32(c + 0x1cu);
        uint32_t e = R32(names_ptr + (c_idx & 0xffff) * 4);
        if (e && e < GUEST_SIZE - 64) {
            uint16_t *w = (uint16_t *)(G + e + 0xc);
            char cname[64] = {0};
            for (int k = 0; k < 60 && w[k]; k++) cname[k] = (char)w[k];
            int is_inv = (strstr(cname, "Weapon") || strstr(cname, "Inventory") || strstr(cname, "Fist") || strstr(cname, "Kung"));
            if (strstr(cname, "Fist")) *pmask |= (1 << 0);
            else if (strstr(cname, "Pipe") || strstr(cname, "Bat") || strstr(cname, "Axe") ||
                     strstr(cname, "Shovel") || strstr(cname, "Hammer") || strstr(cname, "Golf")) *pmask |= (1 << 1);
            else if (strstr(cname, "Glock") || strstr(cname, "Revolver") || strstr(cname, "Pistol") || strstr(cname, "Colt")) *pmask |= (1 << 2);
            else if (strstr(cname, "Shotgun")) *pmask |= (1 << 3);
            else if (strstr(cname, "Rifle") || strstr(cname, "M16")) *pmask |= (1 << 4);
            else if (strstr(cname, "Sniper")) *pmask |= (1 << 5);
            else if (strstr(cname, "Grenade") || strstr(cname, "Molotov")) *pmask |= (1 << 6);
            else if (strstr(cname, "Kung")) *pmask |= (1 << 8);

            if (is_inv) {
                for (int off = 0x1c0; off < 0x380; off += 4) {
                    uint32_t child = R32(obj + off);
                    if (child && child < GUEST_SIZE - 256) {
                        inspect_weapon_object(child, names_ptr, pmask, visited, n_visited);
                    }
                }
            }
        }
    }
}

JNIEXPORT jint JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetPossessedWeapons(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    uint32_t vp = get_lotd_viewport();
    if (!vp) return 0;
    uint32_t actor = R32(vp + 0x30u);
    if (!actor || actor >= GUEST_SIZE - 256) return 0;

    uint32_t names_ptr = R32(0x69a758u);
    if (!names_ptr || names_ptr >= GUEST_SIZE - 65536) return 0;

    static int s_pawn_offset = -1;
    uint32_t pawn = 0;

    if (s_pawn_offset > 0) {
        pawn = R32(actor + s_pawn_offset);
    }
    if (!pawn || pawn >= GUEST_SIZE - 256) {
        s_pawn_offset = -1;
        for (int off = 0x100; off < 0x580; off += 4) {
            uint32_t ptr = R32(actor + off);
            if (ptr && ptr < GUEST_SIZE - 256) {
                uint32_t c = R32(ptr + 0x20u);
                if (!c || c >= GUEST_SIZE - 64) c = R32(ptr + 0x24u);
                if (c && c < GUEST_SIZE - 64) {
                    uint32_t c_idx = R32(c + 0x1cu);
                    uint32_t e = R32(names_ptr + (c_idx & 0xffff) * 4);
                    if (e && e < GUEST_SIZE - 64) {
                        uint16_t *w = (uint16_t *)(G + e + 0xc);
                        char cname[64] = {0};
                        for (int k = 0; k < 60 && w[k]; k++) cname[k] = (char)w[k];
                        if (strstr(cname, "Jack") || strstr(cname, "Slade") || strstr(cname, "Pawn")) {
                            s_pawn_offset = off;
                            pawn = ptr;
                            break;
                        }
                    }
                }
            }
        }
    }
    if (!pawn) return 0;

    uint32_t mask = (1 << 0); // Fists default
    uint32_t visited[64];
    int n_visited = 0;

    for (int off = 0x100; off < 0x600; off += 4) {
        uint32_t ptr = R32(pawn + off);
        if (ptr && ptr < GUEST_SIZE - 256) {
            inspect_weapon_object(ptr, names_ptr, &mask, visited, &n_visited);
        }
    }

    return (jint)mask;
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTouchKey(JNIEnv *env, jclass cls, jint vk, jboolean down) {
    (void)env; (void)cls;
    host_send_key((uint32_t)vk, down ? 1 : 0);
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTouchMouseButton(JNIEnv *env, jclass cls, jint button, jboolean down) {
    (void)env; (void)cls;
    host_send_mouse_button((int)button, down ? 1 : 0);
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTouchMouseButtonPulse(JNIEnv *env, jclass cls, jint button) {
    (void)env; (void)cls;
    host_pulse_mouse_button((int)button);
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTouchLook(JNIEnv *env, jclass cls, jfloat dx, jfloat dy) {
    (void)env; (void)cls;
    if (captured) {
        static float acc_x = 0.0f, acc_y = 0.0f;
        acc_x += dx * g_mouse_sensitivity_scale;
        acc_y += dy * g_mouse_sensitivity_scale;
        int idx = (int)acc_x;
        int idy = (int)acc_y;
        if (idx != 0 || idy != 0) {
            acc_x -= (float)idx;
            acc_y -= (float)idy;
            dinput_mouse_move(idx, idy);
            mouse_x = g_win_w / 2;
            mouse_y = g_win_h / 2;
        }
    }
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetGamepadAxes(JNIEnv *env, jclass cls, jfloat lx, jfloat ly, jfloat rx, jfloat ry) {
    (void)env; (void)cls;
    g_stick_lx = lx;
    g_stick_ly = ly;
    g_stick_rx = rx;
    g_stick_ry = ry;
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetTargetResolution(JNIEnv *env, jclass cls, jint w, jint h) {
    (void)env; (void)cls;
    if (w > 0 && h > 0) {
        g_target_res_w = w;
        g_target_res_h = h;
        host_log("nativeSetTargetResolution: %dx%d\n", w, h);
    }
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetTargetFov(JNIEnv *env, jclass cls, jint fov) {
    (void)env; (void)cls;
    if (fov == 0 || (fov >= 60 && fov <= 130)) {
        g_target_fov = fov;
        host_log("nativeSetTargetFov: %d\n", fov);
    }
}

void d3d_set_widescreen(int enabled);
int d3d_get_widescreen(void);

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetWidescreen(JNIEnv *env, jclass cls, jint enabled) {
    (void)env; (void)cls;
    d3d_set_widescreen(enabled);
}

JNIEXPORT jint JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetWidescreen(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return d3d_get_widescreen();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTouchWheel(JNIEnv *env, jclass cls, jint delta) {
    (void)env; (void)cls;
    host_send_mouse_wheel((int)delta);
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTouchMenuClick(JNIEnv *env, jclass cls, jint x, jint y) {
    (void)env; (void)cls;
    int gx, gy;
    gfx_map_mouse(x, y, &gx, &gy);
    mouse_to(gx, gy);
    host_send_mouse_button(0, 1);
    host_send_mouse_button(0, 0);
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTouchMenuAction(JNIEnv *env, jclass cls, jint action, jint x, jint y) {
    (void)env; (void)cls;
    int gx, gy;
    gfx_map_mouse(x, y, &gx, &gy);
    if (action == 0) { // ACTION_DOWN
        if (bink_is_active()) {
            bink_skip_current();
            host_pulse_key(0x20);
            host_pulse_key(0x1b);
            host_pulse_key(0x0d);
            return;
        }
        mouse_to(gx, gy);
        s_menu_touch_active = 1;
        s_pending_mouse_click = 1;
        s_pending_mouse_gx = gx;
        s_pending_mouse_gy = gy;
        s_pending_mouse_frame = host_frame_count() + 1;
    } else if (action == 1) { // ACTION_MOVE
        mouse_to(gx, gy);
        if (s_pending_mouse_click) {
            s_pending_mouse_gx = gx;
            s_pending_mouse_gy = gy;
        }
    } else if (action == 2 || action == 3) { // ACTION_UP or ACTION_CANCEL
        s_menu_touch_active = 0;
        mouse_to(gx, gy);
        if (!s_pending_mouse_click) {
            host_send_mouse_button(0, 0);
        }
    }
}

void host_exec_command(const char *cmd) {
    if (!cmd || !cmd[0]) return;
    pthread_mutex_lock(&s_cmd_mutex);
    int next = (s_pending_cmd_tail + 1) % MAX_PENDING_CMDS;
    if (next != s_pending_cmd_head) {
        snprintf(s_pending_cmds[s_pending_cmd_tail], sizeof(s_pending_cmds[0]), "%s", cmd);
        s_pending_cmd_tail = next;
    }
    pthread_mutex_unlock(&s_cmd_mutex);
}

JNIEXPORT jboolean JNICALL
Java_org_libsdl_app_SDLActivity_nativeIsAiming(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return g_is_aiming ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeExecConsole(JNIEnv *env, jclass cls, jstring jcmd) {
    (void)cls;
    if (!jcmd) return;
    const char *cmd = (*env)->GetStringUTFChars(env, jcmd, NULL);
    if (cmd) {
        host_exec_command(cmd);
        (*env)->ReleaseStringUTFChars(env, jcmd, cmd);
    }
}

void d3d_set_fxaa(int enabled);
int d3d_get_fxaa(void);
void d3d_set_cas(int enabled);
int d3d_get_cas(void);
void d3d_set_filmic(int enabled);
int d3d_get_filmic(void);
void d3d_set_romero(int enabled);
int d3d_get_romero(void);
void d3d_set_brightness(float b);
float d3d_get_brightness(void);
void d3d_set_vignette(float v);
float d3d_get_vignette(void);
void d3d_trigger_screen_shake(float intensity);
float d3d_get_screen_shake(void);
void d3d_get_backbuffer_size(int *w, int *h);
uint32_t heap_used_bytes(void);
uint32_t heap_peak_bytes(void);
void audio_set_muffle(float amount);
float audio_get_muffle(void);
void audio_pause(int pause);

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetVignette(JNIEnv *env, jclass cls, jfloat v) {
    (void)env; (void)cls;
    d3d_set_vignette((float)v);
}

JNIEXPORT jfloat JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetVignette(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jfloat)d3d_get_vignette();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTriggerScreenShake(JNIEnv *env, jclass cls, jfloat intensity) {
    (void)env; (void)cls;
    d3d_trigger_screen_shake((float)intensity);
}

JNIEXPORT jfloat JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetScreenShake(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jfloat)d3d_get_screen_shake();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetFxaa(JNIEnv *env, jclass cls, jint enabled) {
    (void)env; (void)cls;
    d3d_set_fxaa((int)enabled);
}

JNIEXPORT jint JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetFxaa(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jint)d3d_get_fxaa();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetCas(JNIEnv *env, jclass cls, jint enabled) {
    (void)env; (void)cls;
    d3d_set_cas((int)enabled);
}

JNIEXPORT jint JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetCas(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jint)d3d_get_cas();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetFilmic(JNIEnv *env, jclass cls, jint enabled) {
    (void)env; (void)cls;
    d3d_set_filmic((int)enabled);
}

JNIEXPORT jint JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetFilmic(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jint)d3d_get_filmic();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetRomero(JNIEnv *env, jclass cls, jint enabled) {
    (void)env; (void)cls;
    d3d_set_romero((int)enabled);
}

JNIEXPORT jint JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetRomero(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jint)d3d_get_romero();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetBrightness(JNIEnv *env, jclass cls, jfloat b) {
    (void)env; (void)cls;
    d3d_set_brightness((float)b);
}

JNIEXPORT jfloat JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetBrightness(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jfloat)d3d_get_brightness();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetStickCurve(JNIEnv *env, jclass cls, jint curve) {
    (void)env; (void)cls;
    host_set_stick_curve((int)curve);
}

JNIEXPORT jint JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetStickCurve(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jint)host_get_stick_curve();
}

JNIEXPORT jboolean JNICALL
Java_org_libsdl_app_SDLActivity_nativeRumbleController(JNIEnv *env, jclass cls, jint low, jint high, jint duration_ms) {
    (void)env; (void)cls;
    int success = 0;
    for (int c = 0; c < MAX_CONTROLLERS; c++) {
        if (g_controllers[c]) {
            if (SDL_GameControllerRumble(g_controllers[c], (Uint16)low, (Uint16)high, (Uint32)duration_ms) == 0) {
                success = 1;
            }
        }
    }
    return success ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jintArray JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetTelemetry(JNIEnv *env, jclass cls) {
    (void)cls;
    jintArray result = (*env)->NewIntArray(env, 10);
    if (!result) return NULL;
    int bw = g_win_w, bh = g_win_h;
    d3d_get_backbuffer_size(&bw, &bh);
    jint telem[10];
    telem[0] = (jint)host_frame_count();
    telem[1] = (jint)(heap_used_bytes() / 1024u);
    telem[2] = (jint)(heap_peak_bytes() / 1024u);
    telem[3] = (jint)bw;
    telem[4] = (jint)bh;
    telem[5] = (jint)g_target_fov;
    telem[6] = (jint)d3d_get_fxaa();
    telem[7] = (jint)d3d_get_filmic();
    telem[8] = (jint)g_stick_curve;
    telem[9] = (jint)g_is_aiming;
    (*env)->SetIntArrayRegion(env, result, 0, 10, telem);
    return result;
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTriggerQuickTurn180(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    host_trigger_quick_turn_180();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativePauseAudio(JNIEnv *env, jclass cls, jboolean pause) {
    (void)env; (void)cls;
    audio_pause(pause ? 1 : 0);
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetAudioMuffle(JNIEnv *env, jclass cls, jfloat muffle) {
    (void)env; (void)cls;
    audio_set_muffle((float)muffle);
}

JNIEXPORT jfloat JNICALL
Java_org_libsdl_app_SDLActivity_nativeGetAudioMuffle(JNIEnv *env, jclass cls) {
    (void)env; (void)cls;
    return (jfloat)audio_get_muffle();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetLoggingEnabled(JNIEnv *env, jclass cls, jboolean enabled) {
    (void)env; (void)cls;
    host_set_logging_enabled(enabled ? 1 : 0);
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeSetAudioMasterGain(JNIEnv *env, jclass cls, jfloat gain) {
    (void)env; (void)cls;
    audio_set_master_gain((float)gain);
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeTrimMemory(JNIEnv *env, jclass cls, jint level) {
    (void)env; (void)cls; (void)level;
    d3d_trim_memory();
}

JNIEXPORT void JNICALL
Java_org_libsdl_app_SDLActivity_nativeBlackboxLog(JNIEnv *env, jclass cls, jstring msg) {
    (void)cls;
    if (!msg) return;
    const char *str = (*env)->GetStringUTFChars(env, msg, NULL);
    if (str) {
        blackbox_log("[JAVA] %s", str);
        (*env)->ReleaseStringUTFChars(env, msg, str);
    }
}

#include <SDL_system.h>
void open_touch_editor_java(void) {
    JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
    if (!env) return;
    jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
    if (!cls) return;
    jmethodID mid = (*env)->GetStaticMethodID(env, cls, "openTouchEditor", "()V");
    if (mid) {
        (*env)->CallStaticVoidMethod(env, cls, mid);
    }
    (*env)->DeleteLocalRef(env, cls);
}

void show_keyboard_java(void) {
    SDL_StartTextInput();
    JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
    if (!env) return;
    jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
    if (!cls) return;
    jmethodID mid = (*env)->GetStaticMethodID(env, cls, "showVirtualKeyboard", "()V");
    if (mid) {
        (*env)->CallStaticVoidMethod(env, cls, mid);
    }
    (*env)->DeleteLocalRef(env, cls);
}

void hide_keyboard_java(void) {
    SDL_StopTextInput();
    JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
    if (!env) return;
    jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
    if (!cls) return;
    jmethodID mid = (*env)->GetStaticMethodID(env, cls, "setSoftKeyboardVisible", "(Z)V");
    if (mid) {
        (*env)->CallStaticVoidMethod(env, cls, mid, (jboolean)JNI_FALSE);
    }
    (*env)->DeleteLocalRef(env, cls);
}

void open_ingame_settings_java(void) {
    JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
    if (!env) return;
    jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
    if (!cls) return;
    jmethodID mid = (*env)->GetStaticMethodID(env, cls, "openInGameSettings", "()V");
    if (mid) {
        (*env)->CallStaticVoidMethod(env, cls, mid);
    }
    (*env)->DeleteLocalRef(env, cls);
}

void open_console_terminal_java(void) {
    JNIEnv *env = (JNIEnv *)SDL_AndroidGetJNIEnv();
    if (!env) return;
    jclass cls = (*env)->FindClass(env, "org/libsdl/app/SDLActivity");
    if (!cls) return;
    jmethodID mid = (*env)->GetStaticMethodID(env, cls, "openConsoleTerminal", "()V");
    if (mid) {
        (*env)->CallStaticVoidMethod(env, cls, mid);
    }
    (*env)->DeleteLocalRef(env, cls);
}
#endif
