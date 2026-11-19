#include "recomp.h"
#include "rec_mod.h"

void f_48bdcd(void) {
  LOAD_REGS();
L_48bdcd: /* 48bdcd: jmp dword ptr [0x48e180] */
  SPILL(); f_42265c(); return; /* MSVCR70!??_V@YAXPAX@Z */
}

void f_48bdd3(void) {
  LOAD_REGS();
L_48bdd3: /* 48bdd3: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 48bdd5: push 0x4c92a0 */
  { uint32_t v = 0x4c92a0u; esp -= 4; W32(esp, v); }
/* 48bdda: call 0x462f61 */
  esp -= 4; W32(esp, 0x48bddfu); SPILL(); f_462f61(); if (g_unwind) return; RELOAD();
/* 48bddf: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_48bde3: /* 48bde3: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 48bde6: js 0x48bdf6 */
  if (sf) goto L_48bdf6;
L_48bde8: /* 48bde8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48bdeb: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48bdee: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 48bdf1: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x48bdf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48bdf4: jmp 0x48bde3 */
  goto L_48bde3;
L_48bdf6: /* 48bdf6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48bdfa: call 0x4625b5 */
  esp -= 4; W32(esp, 0x48bdffu); SPILL(); f_4625b5(); if (g_unwind) return; RELOAD();
/* 48bdff: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_48be02(void) {
  LOAD_REGS();
L_48be02: /* 48be02: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 48be05: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 48be08: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 48be0b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 48be0d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 48be10: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 48be13: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48be19: je 0x48be2b */
  if (zf) goto L_48be2b;
L_48be1b: /* 48be1b: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 48be22: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 48be25: ret  */
  esp += 4; SPILL(); return;
L_48be2b: /* 48be2b: call 0x48bf62 */
  esp -= 4; W32(esp, 0x48be30u); SPILL(); f_48bf62(); if (g_unwind) return; RELOAD();
  SPILL(); f_48be30(); return;
}

void f_48be26(void) {
  LOAD_REGS();
  goto L_48be26;
L_48bdf6: /* 48bdf6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48bdfa: call 0x4625b5 */
  esp -= 4; W32(esp, 0x48bdffu); SPILL(); f_4625b5(); if (g_unwind) return; RELOAD();
/* 48bdff: ret 0x10 */
  esp += 20; SPILL(); return;
L_48be26: /* 48be26: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 48be29: jmp 0x48bdf6 */
  goto L_48bdf6;
}

void f_48be30(void) {
  LOAD_REGS();
L_48be30: /* 48be30: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48be32: push 0x4c92b0 */
  { uint32_t v = 0x4c92b0u; esp -= 4; W32(esp, v); }
/* 48be37: call 0x462f61 */
  esp -= 4; W32(esp, 0x48be3cu); SPILL(); f_462f61(); if (g_unwind) return; RELOAD();
/* 48be3c: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 48be40: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 48be43: mov eax, esi */
  eax = esi;
/* 48be45: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 48be49: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 48be4c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_48be50: /* 48be50: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 48be53: js 0x48be60 */
  if (sf) goto L_48be60;
L_48be55: /* 48be55: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 48be58: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48be5b: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x48be5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48be5e: jmp 0x48be50 */
  goto L_48be50;
L_48be60: /* 48be60: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 48be67: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48be6b: call 0x48be78 */
  esp -= 4; W32(esp, 0x48be70u); SPILL(); f_48be78(); if (g_unwind) return; RELOAD();
/* 48be70: call 0x4625b5 */
  esp -= 4; W32(esp, 0x48be75u); SPILL(); f_4625b5(); if (g_unwind) return; RELOAD();
/* 48be75: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_48be78(void) {
  LOAD_REGS();
L_48be78: /* 48be78: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48be7c: jne 0x48be8f */
  if (!zf) goto L_48be8f;
L_48be7e: /* 48be7e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48be81: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48be84: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48be87: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48be8a: call 0x48bdd3 */
  esp -= 4; W32(esp, 0x48be8fu); SPILL(); f_48bdd3(); if (g_unwind) return; RELOAD();
L_48be8f: /* 48be8f: ret  */
  esp += 4; SPILL(); return;
}

void f_48bead(void) {
  LOAD_REGS();
L_48bead: /* 48bead: xor eax, eax */
  eax = 0;
/* 48beaf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48beb0: ret  */
  esp += 4; SPILL(); return;
}

void f_48beb1(void) {
  LOAD_REGS();
L_48beb1: /* 48beb1: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 48beb4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48beb8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 48beba: call dword ptr [0x48e014] */
  esp -= 4; W32(esp, 0x48bec0u); SPILL(); call_ind(R32(0x48e014u)); if (g_unwind) return; /* KERNEL32!ExitProcess */ RELOAD();
/* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
}

void f_48bec6(void) {
  LOAD_REGS();
L_48bec6: /* 48bec6: jmp dword ptr [0x48e174] */
  SPILL(); f_41a9dc(); return; /* MSVCR70!??0exception@@QAE@ABV0@@Z */
}

void f_48becc(void) {
  LOAD_REGS();
L_48becc: /* 48becc: jmp dword ptr [0x48e170] */
  SPILL(); f_41aa62(); return; /* MSVCR70!??0bad_cast@@QAE@ABV0@@Z */
}

void f_48bed2(void) {
  LOAD_REGS();
L_48bed2: /* 48bed2: jmp dword ptr [0x48e16c] */
  SPILL(); f_41aa7a(); return; /* MSVCR70!??1bad_cast@@UAE@XZ */
}

void f_48bed8(void) {
  LOAD_REGS();
L_48bed8: /* 48bed8: jmp dword ptr [0x48e0d4] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_48bede(void) {
  LOAD_REGS();
L_48bede: /* 48bede: jmp dword ptr [0x48e06c] */
  SPILL(); f_414646(); return; /* MSVCR70!_Getdays */
}

void f_48bee4(void) {
  LOAD_REGS();
L_48bee4: /* 48bee4: jmp dword ptr [0x48e070] */
  SPILL(); f_4146c5(); return; /* MSVCR70!_Getmonths */
}

void f_48beea(void) {
  LOAD_REGS();
L_48beea: /* 48beea: jmp dword ptr [0x48e07c] */
  SPILL(); f_40813d(); return; /* MSVCR70!atan2 */
}

void f_48bef0(void) {
  LOAD_REGS();
L_48bef0: /* 48bef0: jmp dword ptr [0x48e080] */
  SPILL(); f_408165(); return; /* MSVCR70!cos */
}

void f_48bef6(void) {
  LOAD_REGS();
L_48bef6: /* 48bef6: jmp dword ptr [0x48e084] */
  SPILL(); f_40823b(); return; /* MSVCR70!exp */
}

void f_48befc(void) {
  LOAD_REGS();
L_48befc: /* 48befc: jmp dword ptr [0x48e08c] */
  SPILL(); f_4082f7(); return; /* MSVCR70!log */
}

void f_48bf02(void) {
  LOAD_REGS();
L_48bf02: /* 48bf02: jmp dword ptr [0x48e090] */
  SPILL(); f_408593(); return; /* MSVCR70!pow */
}

void f_48bf08(void) {
  LOAD_REGS();
L_48bf08: /* 48bf08: jmp dword ptr [0x48e094] */
  SPILL(); f_40882f(); return; /* MSVCR70!sin */
}

void f_48bf0e(void) {
  LOAD_REGS();
L_48bf0e: /* 48bf0e: jmp dword ptr [0x48e098] */
  SPILL(); f_4088dd(); return; /* MSVCR70!sqrt */
}

void f_48bf14(void) {
  LOAD_REGS();
L_48bf14: /* 48bf14: jmp dword ptr [0x48e09c] */
  SPILL(); f_408997(); return; /* MSVCR70!tan */
}

void f_48bf1a(void) {
  LOAD_REGS();
L_48bf1a: /* 48bf1a: jmp dword ptr [0x48e0e8] */
  SPILL(); f_41aa3c(); return; /* MSVCR70!?what@exception@@UBEPBDXZ */
}

void f_48bf20(void) {
  LOAD_REGS();
L_48bf20: /* 48bf20: jmp dword ptr [0x48e0f0] */
  SPILL(); f_40f26d(); return; /* MSVCR70!?_set_new_handler@@YAP6AHI@ZP6AHI@Z@Z */
}

void f_48bf26(void) {
  LOAD_REGS();
L_48bf26: /* 48bf26: jmp dword ptr [0x48e100] */
  SPILL(); f_406182(); return; /* MSVCR70!strcmp */
}

void f_48bf2c(void) {
  LOAD_REGS();
L_48bf2c: /* 48bf2c: jmp dword ptr [0x48e110] */
  SPILL(); f_4011d9(); return; /* MSVCR70!_unlock */
}

void f_48bf32(void) {
  LOAD_REGS();
L_48bf32: /* 48bf32: jmp dword ptr [0x48e114] */
  SPILL(); f_4011b7(); return; /* MSVCR70!_lock */
}

void f_48bf38(void) {
  LOAD_REGS();
L_48bf38: /* 48bf38: jmp dword ptr [0x48e120] */
  SPILL(); f_4038f9(); return; /* MSVCR70!__crtCompareStringA */
}

void f_48bf3e(void) {
  LOAD_REGS();
L_48bf3e: /* 48bf3e: jmp dword ptr [0x48e128] */
  SPILL(); f_40462b(); return; /* MSVCR70!__crtLCMapStringA */
}

void f_48bf44(void) {
  LOAD_REGS();
L_48bf44: /* 48bf44: jmp dword ptr [0x48e134] */
  SPILL(); f_416504(); return; /* MSVCR70!__crtGetStringTypeW */
}

void f_48bf4a(void) {
  LOAD_REGS();
L_48bf4a: /* 48bf4a: jmp dword ptr [0x48e138] */
  SPILL(); f_40f297(); return; /* MSVCR70!_callnewh */
}

void f_48bf50(void) {
  LOAD_REGS();
L_48bf50: /* 48bf50: jmp dword ptr [0x48e13c] */
  SPILL(); f_416273(); return; /* MSVCR70!__crtCompareStringW */
}

void f_48bf56(void) {
  LOAD_REGS();
L_48bf56: /* 48bf56: jmp dword ptr [0x48e140] */
  SPILL(); f_401944(); return; /* MSVCR70!__crtLCMapStringW */
}

void f_48bf5c(void) {
  LOAD_REGS();
L_48bf5c: /* 48bf5c: jmp dword ptr [0x48e148] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_48bf62(void) {
  LOAD_REGS();
L_48bf62: /* 48bf62: jmp dword ptr [0x48e14c] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_48bf68(void) {
  LOAD_REGS();
L_48bf68: /* 48bf68: jmp dword ptr [0x48e150] */
  SPILL(); f_412b93(); return; /* MSVCR70!__security_error_handler */
}

void f_48bf6e(void) {
  LOAD_REGS();
L_48bf6e: /* 48bf6e: jmp dword ptr [0x48e164] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_48bf74(void) {
  LOAD_REGS();
L_48bf74: /* 48bf74: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48bf77: call 0x461c65 */
  esp -= 4; W32(esp, 0x48bf7cu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48bf7c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48bf7d: ret  */
  esp += 4; SPILL(); return;
}

void f_48bf7e(void) {
  LOAD_REGS();
  goto L_48bf7e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48bf7e: /* 48bf7e: mov eax, 0x4c9ad8 */
  eax = 0x4c9ad8u;
/* 48bf83: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48bf88(void) {
  LOAD_REGS();
L_48bf88: /* 48bf88: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48bf8b: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48bf90(void) {
  LOAD_REGS();
  goto L_48bf90;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48bf90: /* 48bf90: mov eax, 0x4c9ab4 */
  eax = 0x4c9ab4u;
/* 48bf95: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48bf9a(void) {
  LOAD_REGS();
  goto L_48bf9a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48bf9a: /* 48bf9a: mov eax, 0x4c96d8 */
  eax = 0x4c96d8u;
/* 48bf9f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48bfa4(void) {
  LOAD_REGS();
L_48bfa4: /* 48bfa4: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48bfa7: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48bfaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48bfac: je 0x48bfb9 */
  if (zf) goto L_48bfb9;
L_48bfae: /* 48bfae: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48bfb1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48bfb4: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48bfb9: /* 48bfb9: ret  */
  esp += 4; SPILL(); return;
}

void f_48bfba(void) {
  LOAD_REGS();
  goto L_48bfba;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48bfba: /* 48bfba: mov eax, 0x4c96fc */
  eax = 0x4c96fcu;
/* 48bfbf: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48bfc4(void) {
  LOAD_REGS();
L_48bfc4: /* 48bfc4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48bfc7: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48bfcc(void) {
  LOAD_REGS();
  goto L_48bfcc;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48bfcc: /* 48bfcc: mov eax, 0x4c9720 */
  eax = 0x4c9720u;
/* 48bfd1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48bfd6(void) {
  LOAD_REGS();
L_48bfd6: /* 48bfd6: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 48bfd9: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48bfde(void) {
  LOAD_REGS();
  goto L_48bfde;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48bfde: /* 48bfde: mov eax, 0x4c9778 */
  eax = 0x4c9778u;
/* 48bfe3: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48bfe8(void) {
  LOAD_REGS();
L_48bfe8: /* 48bfe8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48bfeb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48bfee: jmp 0x461d4f */
  SPILL(); f_461d4f(); return;
}

void f_48bff3(void) {
  LOAD_REGS();
  goto L_48bff3;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48bff3: /* 48bff3: mov eax, 0x4c979c */
  eax = 0x4c979cu;
/* 48bff8: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48bffd(void) {
  LOAD_REGS();
L_48bffd: /* 48bffd: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 48c000: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c005(void) {
  LOAD_REGS();
  goto L_48c005;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c005: /* 48c005: mov eax, 0x4c97f4 */
  eax = 0x4c97f4u;
/* 48c00a: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c00f(void) {
  LOAD_REGS();
L_48c00f: /* 48c00f: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 48c012: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c017(void) {
  LOAD_REGS();
  goto L_48c017;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c017: /* 48c017: mov eax, 0x4c984c */
  eax = 0x4c984cu;
/* 48c01c: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c021(void) {
  LOAD_REGS();
L_48c021: /* 48c021: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c024: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c029(void) {
  LOAD_REGS();
L_48c029: /* 48c029: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48c02c: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c031(void) {
  LOAD_REGS();
  goto L_48c031;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c031: /* 48c031: mov eax, 0x4c98ac */
  eax = 0x4c98acu;
/* 48c036: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c03b(void) {
  LOAD_REGS();
L_48c03b: /* 48c03b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c03e: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c043(void) {
  LOAD_REGS();
L_48c043: /* 48c043: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48c046: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c04b(void) {
  LOAD_REGS();
  goto L_48c04b;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c04b: /* 48c04b: mov eax, 0x4c990c */
  eax = 0x4c990cu;
/* 48c050: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c055(void) {
  LOAD_REGS();
L_48c055: /* 48c055: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c058: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c05d(void) {
  LOAD_REGS();
L_48c05d: /* 48c05d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48c060: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c065(void) {
  LOAD_REGS();
  goto L_48c065;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c065: /* 48c065: mov eax, 0x4c996c */
  eax = 0x4c996cu;
/* 48c06a: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c06f(void) {
  LOAD_REGS();
L_48c06f: /* 48c06f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c072: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c077(void) {
  LOAD_REGS();
  goto L_48c077;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c077: /* 48c077: mov eax, 0x4c99c4 */
  eax = 0x4c99c4u;
/* 48c07c: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c081(void) {
  LOAD_REGS();
L_48c081: /* 48c081: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c084: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c089(void) {
  LOAD_REGS();
  goto L_48c089;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c089: /* 48c089: mov eax, 0x4c9a1c */
  eax = 0x4c9a1cu;
/* 48c08e: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c093(void) {
  LOAD_REGS();
L_48c093: /* 48c093: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 48c096: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48c09b(void) {
  LOAD_REGS();
  goto L_48c09b;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c09b: /* 48c09b: mov eax, 0x4c9a40 */
  eax = 0x4c9a40u;
/* 48c0a0: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c0a5(void) {
  LOAD_REGS();
L_48c0a5: /* 48c0a5: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 48c0a8: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48c0ad(void) {
  LOAD_REGS();
  goto L_48c0ad;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c0ad: /* 48c0ad: mov eax, 0x4c9a64 */
  eax = 0x4c9a64u;
/* 48c0b2: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c0b7(void) {
  LOAD_REGS();
L_48c0b7: /* 48c0b7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c0ba: jmp 0x462325 */
  SPILL(); f_462325(); return;
}

void f_48c0bf(void) {
  LOAD_REGS();
L_48c0bf: /* 48c0bf: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c0c2: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c0c5: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c0ca(void) {
  LOAD_REGS();
  goto L_48c0ca;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c0ca: /* 48c0ca: mov eax, 0x4c9a90 */
  eax = 0x4c9a90u;
/* 48c0cf: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c0d4(void) {
  LOAD_REGS();
L_48c0d4: /* 48c0d4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c0d7: jmp 0x4697da */
  SPILL(); f_4697da(); return;
}

void f_48c0dc(void) {
  LOAD_REGS();
  goto L_48c0dc;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c0dc: /* 48c0dc: mov eax, 0x4c9afc */
  eax = 0x4c9afcu;
/* 48c0e1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c0e6(void) {
  LOAD_REGS();
L_48c0e6: /* 48c0e6: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 48c0e9: call 0x461c65 */
  esp -= 4; W32(esp, 0x48c0eeu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48c0ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48c0ef: ret  */
  esp += 4; SPILL(); return;
}

void f_48c0f0(void) {
  LOAD_REGS();
  goto L_48c0f0;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c0f0: /* 48c0f0: mov eax, 0x4c9b28 */
  eax = 0x4c9b28u;
/* 48c0f5: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c0fa(void) {
  LOAD_REGS();
L_48c0fa: /* 48c0fa: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c0fd: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c100: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c102: je 0x48c10f */
  if (zf) goto L_48c10f;
L_48c104: /* 48c104: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c107: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c10a: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48c10f: /* 48c10f: ret  */
  esp += 4; SPILL(); return;
}

void f_48c110(void) {
  LOAD_REGS();
  goto L_48c110;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c110: /* 48c110: mov eax, 0x4c9b4c */
  eax = 0x4c9b4cu;
/* 48c115: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c11a(void) {
  LOAD_REGS();
L_48c11a: /* 48c11a: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48c11d: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c122(void) {
  LOAD_REGS();
  goto L_48c122;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c122: /* 48c122: mov eax, 0x4c9b70 */
  eax = 0x4c9b70u;
/* 48c127: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c12c(void) {
  LOAD_REGS();
L_48c12c: /* 48c12c: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c12f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c134: je 0x48c141 */
  if (zf) goto L_48c141;
L_48c136: /* 48c136: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c139: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c13c: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48c141: /* 48c141: ret  */
  esp += 4; SPILL(); return;
}

void f_48c142(void) {
  LOAD_REGS();
  goto L_48c142;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c142: /* 48c142: mov eax, 0x4c9bb8 */
  eax = 0x4c9bb8u;
/* 48c147: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c14c(void) {
  LOAD_REGS();
L_48c14c: /* 48c14c: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c14f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c152: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c154: je 0x48c161 */
  if (zf) goto L_48c161;
L_48c156: /* 48c156: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c159: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c15c: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48c161: /* 48c161: ret  */
  esp += 4; SPILL(); return;
}

void f_48c162(void) {
  LOAD_REGS();
  goto L_48c162;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c162: /* 48c162: mov eax, 0x4c9bdc */
  eax = 0x4c9bdcu;
/* 48c167: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c16c(void) {
  LOAD_REGS();
L_48c16c: /* 48c16c: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c16f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c172: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c174: je 0x48c181 */
  if (zf) goto L_48c181;
L_48c176: /* 48c176: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c179: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c17c: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48c181: /* 48c181: ret  */
  esp += 4; SPILL(); return;
}

void f_48c182(void) {
  LOAD_REGS();
  goto L_48c182;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c182: /* 48c182: mov eax, 0x4c9c00 */
  eax = 0x4c9c00u;
/* 48c187: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c18c(void) {
  LOAD_REGS();
L_48c18c: /* 48c18c: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c18f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c192: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c194: je 0x48c1a1 */
  if (zf) goto L_48c1a1;
L_48c196: /* 48c196: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c199: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c19c: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48c1a1: /* 48c1a1: ret  */
  esp += 4; SPILL(); return;
}

void f_48c1a2(void) {
  LOAD_REGS();
  goto L_48c1a2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c1a2: /* 48c1a2: mov eax, 0x4c9c24 */
  eax = 0x4c9c24u;
/* 48c1a7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c1ac(void) {
  LOAD_REGS();
L_48c1ac: /* 48c1ac: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c1af: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c1b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c1b4: je 0x48c1c1 */
  if (zf) goto L_48c1c1;
L_48c1b6: /* 48c1b6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c1b9: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c1bc: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48c1c1: /* 48c1c1: ret  */
  esp += 4; SPILL(); return;
}

void f_48c1c2(void) {
  LOAD_REGS();
  goto L_48c1c2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c1c2: /* 48c1c2: mov eax, 0x4c9c48 */
  eax = 0x4c9c48u;
/* 48c1c7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c1cc(void) {
  LOAD_REGS();
L_48c1cc: /* 48c1cc: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c1cf: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c1d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c1d4: je 0x48c1e1 */
  if (zf) goto L_48c1e1;
L_48c1d6: /* 48c1d6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c1d9: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c1dc: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48c1e1: /* 48c1e1: ret  */
  esp += 4; SPILL(); return;
}

void f_48c1e2(void) {
  LOAD_REGS();
  goto L_48c1e2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c1e2: /* 48c1e2: mov eax, 0x4c9c6c */
  eax = 0x4c9c6cu;
/* 48c1e7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c1ec(void) {
  LOAD_REGS();
L_48c1ec: /* 48c1ec: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c1ef: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c1f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c1f4: je 0x48c201 */
  if (zf) goto L_48c201;
L_48c1f6: /* 48c1f6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c1f9: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c1fc: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48c201: /* 48c201: ret  */
  esp += 4; SPILL(); return;
}

void f_48c202(void) {
  LOAD_REGS();
L_48c202: /* 48c202: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c205: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c208: jmp 0x469023 */
  SPILL(); f_469023(); return;
}

void f_48c20d(void) {
  LOAD_REGS();
  goto L_48c20d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c20d: /* 48c20d: mov eax, 0x4c9c98 */
  eax = 0x4c9c98u;
/* 48c212: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c217(void) {
  LOAD_REGS();
L_48c217: /* 48c217: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c21a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c21d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c21f: je 0x48c22c */
  if (zf) goto L_48c22c;
L_48c221: /* 48c221: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c224: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c227: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48c22c: /* 48c22c: ret  */
  esp += 4; SPILL(); return;
}

void f_48c22d(void) {
  LOAD_REGS();
L_48c22d: /* 48c22d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c230: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c233: jmp 0x469091 */
  SPILL(); f_469091(); return;
}

void f_48c238(void) {
  LOAD_REGS();
  goto L_48c238;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c238: /* 48c238: mov eax, 0x4c9cc4 */
  eax = 0x4c9cc4u;
/* 48c23d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c242(void) {
  LOAD_REGS();
L_48c242: /* 48c242: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c245: jmp 0x4697da */
  SPILL(); f_4697da(); return;
}

void f_48c24a(void) {
  LOAD_REGS();
L_48c24a: /* 48c24a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c24d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c250: jmp 0x463f76 */
  SPILL(); f_463f76(); return;
}

void f_48c255(void) {
  LOAD_REGS();
  goto L_48c255;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c255: /* 48c255: mov eax, 0x4c9d88 */
  eax = 0x4c9d88u;
/* 48c25a: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c25f(void) {
  LOAD_REGS();
L_48c25f: /* 48c25f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c262: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c265: jmp 0x461d4f */
  SPILL(); f_461d4f(); return;
}

void f_48c26a(void) {
  LOAD_REGS();
  goto L_48c26a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c26a: /* 48c26a: mov eax, 0x4c9d0c */
  eax = 0x4c9d0cu;
/* 48c26f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c274(void) {
  LOAD_REGS();
L_48c274: /* 48c274: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c277: jmp 0x461c33 */
  SPILL(); f_461c33(); return;
}

void f_48c27c(void) {
  LOAD_REGS();
  goto L_48c27c;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c27c: /* 48c27c: mov eax, 0x4c9d30 */
  eax = 0x4c9d30u;
/* 48c281: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c286(void) {
  LOAD_REGS();
L_48c286: /* 48c286: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c289: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48c28c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48c28e: je 0x48c29b */
  if (zf) goto L_48c29b;
L_48c290: /* 48c290: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c293: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c296: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48c29b: /* 48c29b: ret  */
  esp += 4; SPILL(); return;
}

void f_48c29c(void) {
  LOAD_REGS();
L_48c29c: /* 48c29c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48c29f: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48c2a2: jmp 0x467c0b */
  SPILL(); f_467c0b(); return;
}

void f_48c2a7(void) {
  LOAD_REGS();
  goto L_48c2a7;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c2a7: /* 48c2a7: mov eax, 0x4c9d5c */
  eax = 0x4c9d5cu;
/* 48c2ac: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c2b1(void) {
  LOAD_REGS();
L_48c2b1: /* 48c2b1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c2b4: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c2b9(void) {
  LOAD_REGS();
  goto L_48c2b9;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c2b9: /* 48c2b9: mov eax, 0x4c9de0 */
  eax = 0x4c9de0u;
/* 48c2be: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c2c3(void) {
  LOAD_REGS();
L_48c2c3: /* 48c2c3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c2c6: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c2cb(void) {
  LOAD_REGS();
  goto L_48c2cb;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c2cb: /* 48c2cb: mov eax, 0x4c9e38 */
  eax = 0x4c9e38u;
/* 48c2d0: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c2d5(void) {
  LOAD_REGS();
L_48c2d5: /* 48c2d5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c2d8: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c2dd(void) {
  LOAD_REGS();
  goto L_48c2dd;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c2dd: /* 48c2dd: mov eax, 0x4c9e90 */
  eax = 0x4c9e90u;
/* 48c2e2: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c2e7(void) {
  LOAD_REGS();
L_48c2e7: /* 48c2e7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c2ea: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c2ef(void) {
  LOAD_REGS();
  goto L_48c2ef;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c2ef: /* 48c2ef: mov eax, 0x4c9ee8 */
  eax = 0x4c9ee8u;
/* 48c2f4: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c2f9(void) {
  LOAD_REGS();
L_48c2f9: /* 48c2f9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c2fc: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c301(void) {
  LOAD_REGS();
  goto L_48c301;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c301: /* 48c301: mov eax, 0x4c9f40 */
  eax = 0x4c9f40u;
/* 48c306: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c30b(void) {
  LOAD_REGS();
L_48c30b: /* 48c30b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c30e: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c313(void) {
  LOAD_REGS();
  goto L_48c313;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c313: /* 48c313: mov eax, 0x4c9f98 */
  eax = 0x4c9f98u;
/* 48c318: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c31d(void) {
  LOAD_REGS();
  goto L_48c31d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c31d: /* 48c31d: mov eax, 0x4ca040 */
  eax = 0x4ca040u;
/* 48c322: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c327(void) {
  LOAD_REGS();
  goto L_48c327;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c327: /* 48c327: mov eax, 0x4ca090 */
  eax = 0x4ca090u;
/* 48c32c: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c331(void) {
  LOAD_REGS();
  goto L_48c331;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c331: /* 48c331: mov eax, 0x4ca0e0 */
  eax = 0x4ca0e0u;
/* 48c336: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c33b(void) {
  LOAD_REGS();
L_48c33b: /* 48c33b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c33e: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c343(void) {
  LOAD_REGS();
L_48c343: /* 48c343: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c346: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c34b(void) {
  LOAD_REGS();
  goto L_48c34b;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c34b: /* 48c34b: mov eax, 0x4ca140 */
  eax = 0x4ca140u;
/* 48c350: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c355(void) {
  LOAD_REGS();
L_48c355: /* 48c355: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c358: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c35d(void) {
  LOAD_REGS();
L_48c35d: /* 48c35d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c360: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c365(void) {
  LOAD_REGS();
  goto L_48c365;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c365: /* 48c365: mov eax, 0x4ca1a0 */
  eax = 0x4ca1a0u;
/* 48c36a: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c36f(void) {
  LOAD_REGS();
L_48c36f: /* 48c36f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c372: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c377(void) {
  LOAD_REGS();
L_48c377: /* 48c377: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c37a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c37f(void) {
  LOAD_REGS();
  goto L_48c37f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c37f: /* 48c37f: mov eax, 0x4ca200 */
  eax = 0x4ca200u;
/* 48c384: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c389(void) {
  LOAD_REGS();
L_48c389: /* 48c389: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c38c: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c391(void) {
  LOAD_REGS();
L_48c391: /* 48c391: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c394: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c399(void) {
  LOAD_REGS();
  goto L_48c399;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c399: /* 48c399: mov eax, 0x4ca260 */
  eax = 0x4ca260u;
/* 48c39e: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c3a3(void) {
  LOAD_REGS();
L_48c3a3: /* 48c3a3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c3a6: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c3ab(void) {
  LOAD_REGS();
L_48c3ab: /* 48c3ab: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c3ae: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c3b3(void) {
  LOAD_REGS();
  goto L_48c3b3;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c3b3: /* 48c3b3: mov eax, 0x4ca2c0 */
  eax = 0x4ca2c0u;
/* 48c3b8: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c3bd(void) {
  LOAD_REGS();
L_48c3bd: /* 48c3bd: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c3c0: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c3c5(void) {
  LOAD_REGS();
L_48c3c5: /* 48c3c5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c3c8: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c3cd(void) {
  LOAD_REGS();
  goto L_48c3cd;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c3cd: /* 48c3cd: mov eax, 0x4ca320 */
  eax = 0x4ca320u;
/* 48c3d2: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c3d7(void) {
  LOAD_REGS();
L_48c3d7: /* 48c3d7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c3da: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c3df(void) {
  LOAD_REGS();
L_48c3df: /* 48c3df: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c3e2: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c3e7(void) {
  LOAD_REGS();
  goto L_48c3e7;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c3e7: /* 48c3e7: mov eax, 0x4ca380 */
  eax = 0x4ca380u;
/* 48c3ec: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c3f1(void) {
  LOAD_REGS();
L_48c3f1: /* 48c3f1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c3f4: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c3f9(void) {
  LOAD_REGS();
L_48c3f9: /* 48c3f9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c3fc: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c401(void) {
  LOAD_REGS();
  goto L_48c401;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c401: /* 48c401: mov eax, 0x4ca3e0 */
  eax = 0x4ca3e0u;
/* 48c406: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c40b(void) {
  LOAD_REGS();
L_48c40b: /* 48c40b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c40e: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c413(void) {
  LOAD_REGS();
L_48c413: /* 48c413: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c416: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c41b(void) {
  LOAD_REGS();
  goto L_48c41b;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c41b: /* 48c41b: mov eax, 0x4ca440 */
  eax = 0x4ca440u;
/* 48c420: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c425(void) {
  LOAD_REGS();
L_48c425: /* 48c425: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c428: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c42d(void) {
  LOAD_REGS();
L_48c42d: /* 48c42d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c430: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c435(void) {
  LOAD_REGS();
  goto L_48c435;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c435: /* 48c435: mov eax, 0x4ca4a0 */
  eax = 0x4ca4a0u;
/* 48c43a: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c43f(void) {
  LOAD_REGS();
L_48c43f: /* 48c43f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c442: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c447(void) {
  LOAD_REGS();
L_48c447: /* 48c447: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c44a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c44f(void) {
  LOAD_REGS();
  goto L_48c44f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c44f: /* 48c44f: mov eax, 0x4ca500 */
  eax = 0x4ca500u;
/* 48c454: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c459(void) {
  LOAD_REGS();
L_48c459: /* 48c459: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c45c: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c461(void) {
  LOAD_REGS();
  goto L_48c461;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c461: /* 48c461: mov eax, 0x4ca58c */
  eax = 0x4ca58cu;
/* 48c466: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c46b(void) {
  LOAD_REGS();
L_48c46b: /* 48c46b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c46e: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c473(void) {
  LOAD_REGS();
  goto L_48c473;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c473: /* 48c473: mov eax, 0x4ca5e4 */
  eax = 0x4ca5e4u;
/* 48c478: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c47d(void) {
  LOAD_REGS();
L_48c47d: /* 48c47d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c480: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c485(void) {
  LOAD_REGS();
L_48c485: /* 48c485: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c488: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c48d(void) {
  LOAD_REGS();
  goto L_48c48d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c48d: /* 48c48d: mov eax, 0x4ca644 */
  eax = 0x4ca644u;
/* 48c492: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c497(void) {
  LOAD_REGS();
L_48c497: /* 48c497: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c49a: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c49f(void) {
  LOAD_REGS();
L_48c49f: /* 48c49f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c4a2: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c4a7(void) {
  LOAD_REGS();
  goto L_48c4a7;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c4a7: /* 48c4a7: mov eax, 0x4ca6a4 */
  eax = 0x4ca6a4u;
/* 48c4ac: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c4b1(void) {
  LOAD_REGS();
L_48c4b1: /* 48c4b1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48c4b4: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c4b9(void) {
  LOAD_REGS();
L_48c4b9: /* 48c4b9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c4bc: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c4c1(void) {
  LOAD_REGS();
  goto L_48c4c1;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c4c1: /* 48c4c1: mov eax, 0x4ca704 */
  eax = 0x4ca704u;
/* 48c4c6: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c4cb(void) {
  LOAD_REGS();
L_48c4cb: /* 48c4cb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c4ce: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c4d3(void) {
  LOAD_REGS();
L_48c4d3: /* 48c4d3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c4d6: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c4db(void) {
  LOAD_REGS();
  goto L_48c4db;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c4db: /* 48c4db: mov eax, 0x4ca764 */
  eax = 0x4ca764u;
/* 48c4e0: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c4e5(void) {
  LOAD_REGS();
L_48c4e5: /* 48c4e5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c4e8: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c4ed(void) {
  LOAD_REGS();
L_48c4ed: /* 48c4ed: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c4f0: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c4f5(void) {
  LOAD_REGS();
  goto L_48c4f5;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c4f5: /* 48c4f5: mov eax, 0x4ca7c4 */
  eax = 0x4ca7c4u;
/* 48c4fa: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c4ff(void) {
  LOAD_REGS();
L_48c4ff: /* 48c4ff: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c502: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c507(void) {
  LOAD_REGS();
L_48c507: /* 48c507: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c50a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c50f(void) {
  LOAD_REGS();
  goto L_48c50f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c50f: /* 48c50f: mov eax, 0x4ca824 */
  eax = 0x4ca824u;
/* 48c514: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c519(void) {
  LOAD_REGS();
L_48c519: /* 48c519: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c51c: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c521(void) {
  LOAD_REGS();
L_48c521: /* 48c521: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c524: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c529(void) {
  LOAD_REGS();
  goto L_48c529;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c529: /* 48c529: mov eax, 0x4ca884 */
  eax = 0x4ca884u;
/* 48c52e: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c533(void) {
  LOAD_REGS();
L_48c533: /* 48c533: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c536: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c53b(void) {
  LOAD_REGS();
L_48c53b: /* 48c53b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c53e: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c543(void) {
  LOAD_REGS();
  goto L_48c543;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c543: /* 48c543: mov eax, 0x4ca8e4 */
  eax = 0x4ca8e4u;
/* 48c548: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c54d(void) {
  LOAD_REGS();
L_48c54d: /* 48c54d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c550: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c555(void) {
  LOAD_REGS();
L_48c555: /* 48c555: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c558: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c55d(void) {
  LOAD_REGS();
  goto L_48c55d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c55d: /* 48c55d: mov eax, 0x4ca944 */
  eax = 0x4ca944u;
/* 48c562: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c567(void) {
  LOAD_REGS();
L_48c567: /* 48c567: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c56a: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c56f(void) {
  LOAD_REGS();
L_48c56f: /* 48c56f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c572: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c577(void) {
  LOAD_REGS();
  goto L_48c577;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c577: /* 48c577: mov eax, 0x4ca9a4 */
  eax = 0x4ca9a4u;
/* 48c57c: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c581(void) {
  LOAD_REGS();
L_48c581: /* 48c581: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c584: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c589(void) {
  LOAD_REGS();
L_48c589: /* 48c589: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c58c: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c591(void) {
  LOAD_REGS();
  goto L_48c591;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c591: /* 48c591: mov eax, 0x4caa04 */
  eax = 0x4caa04u;
/* 48c596: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c59b(void) {
  LOAD_REGS();
L_48c59b: /* 48c59b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c59e: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c5a3(void) {
  LOAD_REGS();
  goto L_48c5a3;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c5a3: /* 48c5a3: mov eax, 0x4caeb0 */
  eax = 0x4caeb0u;
/* 48c5a8: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c5ad(void) {
  LOAD_REGS();
L_48c5ad: /* 48c5ad: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c5b0: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c5b5(void) {
  LOAD_REGS();
L_48c5b5: /* 48c5b5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c5b8: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c5bd(void) {
  LOAD_REGS();
  goto L_48c5bd;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c5bd: /* 48c5bd: mov eax, 0x4caa64 */
  eax = 0x4caa64u;
/* 48c5c2: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c5c7(void) {
  LOAD_REGS();
L_48c5c7: /* 48c5c7: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c5ca: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c5cf(void) {
  LOAD_REGS();
L_48c5cf: /* 48c5cf: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c5d2: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c5d7(void) {
  LOAD_REGS();
  goto L_48c5d7;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c5d7: /* 48c5d7: mov eax, 0x4caac4 */
  eax = 0x4caac4u;
/* 48c5dc: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c5e1(void) {
  LOAD_REGS();
L_48c5e1: /* 48c5e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48c5e4: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c5e9(void) {
  LOAD_REGS();
L_48c5e9: /* 48c5e9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c5ec: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c5f1(void) {
  LOAD_REGS();
  goto L_48c5f1;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c5f1: /* 48c5f1: mov eax, 0x4cab24 */
  eax = 0x4cab24u;
/* 48c5f6: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c5fb(void) {
  LOAD_REGS();
L_48c5fb: /* 48c5fb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c5fe: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c603(void) {
  LOAD_REGS();
L_48c603: /* 48c603: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c606: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c60b(void) {
  LOAD_REGS();
  goto L_48c60b;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c60b: /* 48c60b: mov eax, 0x4cab84 */
  eax = 0x4cab84u;
/* 48c610: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c615(void) {
  LOAD_REGS();
L_48c615: /* 48c615: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c618: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c61d(void) {
  LOAD_REGS();
L_48c61d: /* 48c61d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c620: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c625(void) {
  LOAD_REGS();
  goto L_48c625;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c625: /* 48c625: mov eax, 0x4cabe4 */
  eax = 0x4cabe4u;
/* 48c62a: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c62f(void) {
  LOAD_REGS();
L_48c62f: /* 48c62f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c632: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c637(void) {
  LOAD_REGS();
L_48c637: /* 48c637: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c63a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c63f(void) {
  LOAD_REGS();
  goto L_48c63f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c63f: /* 48c63f: mov eax, 0x4cac44 */
  eax = 0x4cac44u;
/* 48c644: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c649(void) {
  LOAD_REGS();
L_48c649: /* 48c649: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c64c: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c651(void) {
  LOAD_REGS();
L_48c651: /* 48c651: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c654: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c659(void) {
  LOAD_REGS();
  goto L_48c659;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c659: /* 48c659: mov eax, 0x4caca4 */
  eax = 0x4caca4u;
/* 48c65e: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c663(void) {
  LOAD_REGS();
L_48c663: /* 48c663: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c666: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c66b(void) {
  LOAD_REGS();
L_48c66b: /* 48c66b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c66e: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c673(void) {
  LOAD_REGS();
  goto L_48c673;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c673: /* 48c673: mov eax, 0x4cad04 */
  eax = 0x4cad04u;
/* 48c678: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c67d(void) {
  LOAD_REGS();
L_48c67d: /* 48c67d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c680: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c685(void) {
  LOAD_REGS();
L_48c685: /* 48c685: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c688: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c68d(void) {
  LOAD_REGS();
  goto L_48c68d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c68d: /* 48c68d: mov eax, 0x4cad64 */
  eax = 0x4cad64u;
/* 48c692: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c697(void) {
  LOAD_REGS();
L_48c697: /* 48c697: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c69a: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c69f(void) {
  LOAD_REGS();
L_48c69f: /* 48c69f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c6a2: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c6a7(void) {
  LOAD_REGS();
  goto L_48c6a7;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c6a7: /* 48c6a7: mov eax, 0x4cadc4 */
  eax = 0x4cadc4u;
/* 48c6ac: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c6b1(void) {
  LOAD_REGS();
L_48c6b1: /* 48c6b1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c6b4: jmp 0x462246 */
  SPILL(); f_462246(); return;
}

void f_48c6b9(void) {
  LOAD_REGS();
L_48c6b9: /* 48c6b9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c6bc: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c6c1(void) {
  LOAD_REGS();
  goto L_48c6c1;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c6c1: /* 48c6c1: mov eax, 0x4cae24 */
  eax = 0x4cae24u;
/* 48c6c6: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c6cb(void) {
  LOAD_REGS();
L_48c6cb: /* 48c6cb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c6ce: sub ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48c6d1: jmp 0x467c0b */
  SPILL(); f_467c0b(); return;
}

void f_48c6d6(void) {
  LOAD_REGS();
  goto L_48c6d6;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c6d6: /* 48c6d6: mov eax, 0x4caed4 */
  eax = 0x4caed4u;
/* 48c6db: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c6e0(void) {
  LOAD_REGS();
L_48c6e0: /* 48c6e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c6e3: sub ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48c6e6: jmp 0x469023 */
  SPILL(); f_469023(); return;
}

void f_48c6eb(void) {
  LOAD_REGS();
  goto L_48c6eb;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c6eb: /* 48c6eb: mov eax, 0x4caef8 */
  eax = 0x4caef8u;
/* 48c6f0: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c6f5(void) {
  LOAD_REGS();
L_48c6f5: /* 48c6f5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c6f8: sub ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48c6fb: jmp 0x469091 */
  SPILL(); f_469091(); return;
}

void f_48c700(void) {
  LOAD_REGS();
  goto L_48c700;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c700: /* 48c700: mov eax, 0x4caf1c */
  eax = 0x4caf1cu;
/* 48c705: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c70a(void) {
  LOAD_REGS();
L_48c70a: /* 48c70a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c70d: sub ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48c710: jmp 0x464b92 */
  SPILL(); f_464b92(); return;
}

void f_48c715(void) {
  LOAD_REGS();
  goto L_48c715;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c715: /* 48c715: mov eax, 0x4caf40 */
  eax = 0x4caf40u;
/* 48c71a: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c71f(void) {
  LOAD_REGS();
L_48c71f: /* 48c71f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c722: sub ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48c725: jmp 0x468eca */
  SPILL(); f_468eca(); return;
}

void f_48c72a(void) {
  LOAD_REGS();
  goto L_48c72a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c72a: /* 48c72a: mov eax, 0x4caf64 */
  eax = 0x4caf64u;
/* 48c72f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c734(void) {
  LOAD_REGS();
L_48c734: /* 48c734: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c737: sub ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48c73a: jmp 0x468f38 */
  SPILL(); f_468f38(); return;
}

void f_48c73f(void) {
  LOAD_REGS();
  goto L_48c73f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c73f: /* 48c73f: mov eax, 0x4caf88 */
  eax = 0x4caf88u;
/* 48c744: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c749(void) {
  LOAD_REGS();
L_48c749: /* 48c749: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c74c: sub ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48c74f: jmp 0x4690e5 */
  SPILL(); f_4690e5(); return;
}

void f_48c754(void) {
  LOAD_REGS();
  goto L_48c754;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c754: /* 48c754: mov eax, 0x4cafac */
  eax = 0x4cafacu;
/* 48c759: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c75e(void) {
  LOAD_REGS();
L_48c75e: /* 48c75e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c761: sub ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48c764: jmp 0x469198 */
  SPILL(); f_469198(); return;
}

void f_48c769(void) {
  LOAD_REGS();
  goto L_48c769;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c769: /* 48c769: mov eax, 0x4cafd0 */
  eax = 0x4cafd0u;
/* 48c76e: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c773(void) {
  LOAD_REGS();
L_48c773: /* 48c773: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48c776: sub ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48c779: jmp 0x46924b */
  SPILL(); f_46924b(); return;
}

void f_48c77e(void) {
  LOAD_REGS();
  goto L_48c77e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c77e: /* 48c77e: mov eax, 0x4caff4 */
  eax = 0x4caff4u;
/* 48c783: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c788(void) {
  LOAD_REGS();
  goto L_48c788;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c788: /* 48c788: mov eax, 0x4cb044 */
  eax = 0x4cb044u;
/* 48c78d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c792(void) {
  LOAD_REGS();
  goto L_48c792;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c792: /* 48c792: mov eax, 0x4cb094 */
  eax = 0x4cb094u;
/* 48c797: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c79c(void) {
  LOAD_REGS();
L_48c79c: /* 48c79c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c79f: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c7a4(void) {
  LOAD_REGS();
L_48c7a4: /* 48c7a4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48c7a7: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c7ac(void) {
  LOAD_REGS();
  goto L_48c7ac;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c7ac: /* 48c7ac: mov eax, 0x4cb0f4 */
  eax = 0x4cb0f4u;
/* 48c7b1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c7b6(void) {
  LOAD_REGS();
L_48c7b6: /* 48c7b6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c7b9: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c7be(void) {
  LOAD_REGS();
  goto L_48c7be;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c7be: /* 48c7be: mov eax, 0x4cb14c */
  eax = 0x4cb14cu;
/* 48c7c3: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c7c8(void) {
  LOAD_REGS();
L_48c7c8: /* 48c7c8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48c7cb: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c7d0(void) {
  LOAD_REGS();
L_48c7d0: /* 48c7d0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c7d3: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c7d8(void) {
  LOAD_REGS();
  goto L_48c7d8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c7d8: /* 48c7d8: mov eax, 0x4cb1ac */
  eax = 0x4cb1acu;
/* 48c7dd: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c7e2(void) {
  LOAD_REGS();
L_48c7e2: /* 48c7e2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c7e5: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c7ea(void) {
  LOAD_REGS();
  goto L_48c7ea;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c7ea: /* 48c7ea: mov eax, 0x4cb204 */
  eax = 0x4cb204u;
/* 48c7ef: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c7f4(void) {
  LOAD_REGS();
L_48c7f4: /* 48c7f4: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48c7f7: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c7fc(void) {
  LOAD_REGS();
L_48c7fc: /* 48c7fc: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c7ff: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c804(void) {
  LOAD_REGS();
  goto L_48c804;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c804: /* 48c804: mov eax, 0x4cb264 */
  eax = 0x4cb264u;
/* 48c809: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c80e(void) {
  LOAD_REGS();
L_48c80e: /* 48c80e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c811: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c816(void) {
  LOAD_REGS();
  goto L_48c816;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c816: /* 48c816: mov eax, 0x4cb2bc */
  eax = 0x4cb2bcu;
/* 48c81b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c820(void) {
  LOAD_REGS();
L_48c820: /* 48c820: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c823: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c828(void) {
  LOAD_REGS();
L_48c828: /* 48c828: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c82b: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c830(void) {
  LOAD_REGS();
  goto L_48c830;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c830: /* 48c830: mov eax, 0x4cb31c */
  eax = 0x4cb31cu;
/* 48c835: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c83a(void) {
  LOAD_REGS();
L_48c83a: /* 48c83a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c83d: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c842(void) {
  LOAD_REGS();
L_48c842: /* 48c842: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c845: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c84a(void) {
  LOAD_REGS();
  goto L_48c84a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c84a: /* 48c84a: mov eax, 0x4cb37c */
  eax = 0x4cb37cu;
/* 48c84f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c854(void) {
  LOAD_REGS();
L_48c854: /* 48c854: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c857: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c85c(void) {
  LOAD_REGS();
L_48c85c: /* 48c85c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c85f: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c864(void) {
  LOAD_REGS();
  goto L_48c864;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c864: /* 48c864: mov eax, 0x4cb3dc */
  eax = 0x4cb3dcu;
/* 48c869: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c86e(void) {
  LOAD_REGS();
L_48c86e: /* 48c86e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c871: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c876(void) {
  LOAD_REGS();
L_48c876: /* 48c876: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c879: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c87e(void) {
  LOAD_REGS();
  goto L_48c87e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c87e: /* 48c87e: mov eax, 0x4cb43c */
  eax = 0x4cb43cu;
/* 48c883: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c888(void) {
  LOAD_REGS();
L_48c888: /* 48c888: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c88b: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c890(void) {
  LOAD_REGS();
L_48c890: /* 48c890: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c893: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c898(void) {
  LOAD_REGS();
  goto L_48c898;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c898: /* 48c898: mov eax, 0x4cb49c */
  eax = 0x4cb49cu;
/* 48c89d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c8a2(void) {
  LOAD_REGS();
L_48c8a2: /* 48c8a2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c8a5: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c8aa(void) {
  LOAD_REGS();
L_48c8aa: /* 48c8aa: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c8ad: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c8b2(void) {
  LOAD_REGS();
  goto L_48c8b2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c8b2: /* 48c8b2: mov eax, 0x4cb4fc */
  eax = 0x4cb4fcu;
/* 48c8b7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c8bc(void) {
  LOAD_REGS();
L_48c8bc: /* 48c8bc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c8bf: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c8c4(void) {
  LOAD_REGS();
L_48c8c4: /* 48c8c4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c8c7: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c8cc(void) {
  LOAD_REGS();
  goto L_48c8cc;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c8cc: /* 48c8cc: mov eax, 0x4cb55c */
  eax = 0x4cb55cu;
/* 48c8d1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c8d6(void) {
  LOAD_REGS();
L_48c8d6: /* 48c8d6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c8d9: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c8de(void) {
  LOAD_REGS();
L_48c8de: /* 48c8de: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c8e1: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c8e6(void) {
  LOAD_REGS();
  goto L_48c8e6;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c8e6: /* 48c8e6: mov eax, 0x4cb5bc */
  eax = 0x4cb5bcu;
/* 48c8eb: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c8f0(void) {
  LOAD_REGS();
L_48c8f0: /* 48c8f0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c8f3: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c8f8(void) {
  LOAD_REGS();
L_48c8f8: /* 48c8f8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c8fb: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c900(void) {
  LOAD_REGS();
  goto L_48c900;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c900: /* 48c900: mov eax, 0x4cb61c */
  eax = 0x4cb61cu;
/* 48c905: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c90a(void) {
  LOAD_REGS();
L_48c90a: /* 48c90a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c90d: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c912(void) {
  LOAD_REGS();
L_48c912: /* 48c912: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c915: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c91a(void) {
  LOAD_REGS();
  goto L_48c91a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c91a: /* 48c91a: mov eax, 0x4cb67c */
  eax = 0x4cb67cu;
/* 48c91f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c924(void) {
  LOAD_REGS();
L_48c924: /* 48c924: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c927: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c92c(void) {
  LOAD_REGS();
L_48c92c: /* 48c92c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c92f: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c934(void) {
  LOAD_REGS();
  goto L_48c934;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c934: /* 48c934: mov eax, 0x4cb6dc */
  eax = 0x4cb6dcu;
/* 48c939: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c93e(void) {
  LOAD_REGS();
L_48c93e: /* 48c93e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c941: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c946(void) {
  LOAD_REGS();
L_48c946: /* 48c946: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c949: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c94e(void) {
  LOAD_REGS();
  goto L_48c94e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c94e: /* 48c94e: mov eax, 0x4cb73c */
  eax = 0x4cb73cu;
/* 48c953: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c958(void) {
  LOAD_REGS();
L_48c958: /* 48c958: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48c95b: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c960(void) {
  LOAD_REGS();
L_48c960: /* 48c960: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48c963: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48c968(void) {
  LOAD_REGS();
  goto L_48c968;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c968: /* 48c968: mov eax, 0x4cb79c */
  eax = 0x4cb79cu;
/* 48c96d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c972(void) {
  LOAD_REGS();
L_48c972: /* 48c972: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c975: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c97a(void) {
  LOAD_REGS();
  goto L_48c97a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c97a: /* 48c97a: mov eax, 0x4cb828 */
  eax = 0x4cb828u;
/* 48c97f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c984(void) {
  LOAD_REGS();
L_48c984: /* 48c984: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c987: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c98c(void) {
  LOAD_REGS();
  goto L_48c98c;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c98c: /* 48c98c: mov eax, 0x4cb880 */
  eax = 0x4cb880u;
/* 48c991: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c996(void) {
  LOAD_REGS();
L_48c996: /* 48c996: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c999: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c99e(void) {
  LOAD_REGS();
  goto L_48c99e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c99e: /* 48c99e: mov eax, 0x4cb8d8 */
  eax = 0x4cb8d8u;
/* 48c9a3: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c9a8(void) {
  LOAD_REGS();
L_48c9a8: /* 48c9a8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c9ab: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c9b0(void) {
  LOAD_REGS();
  goto L_48c9b0;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c9b0: /* 48c9b0: mov eax, 0x4cb964 */
  eax = 0x4cb964u;
/* 48c9b5: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c9ba(void) {
  LOAD_REGS();
L_48c9ba: /* 48c9ba: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c9bd: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c9c2(void) {
  LOAD_REGS();
  goto L_48c9c2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c9c2: /* 48c9c2: mov eax, 0x4cb9bc */
  eax = 0x4cb9bcu;
/* 48c9c7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c9cc(void) {
  LOAD_REGS();
L_48c9cc: /* 48c9cc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c9cf: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c9d4(void) {
  LOAD_REGS();
  goto L_48c9d4;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c9d4: /* 48c9d4: mov eax, 0x4cba14 */
  eax = 0x4cba14u;
/* 48c9d9: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c9de(void) {
  LOAD_REGS();
L_48c9de: /* 48c9de: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48c9e1: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c9e6(void) {
  LOAD_REGS();
  goto L_48c9e6;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c9e6: /* 48c9e6: mov eax, 0x4cba6c */
  eax = 0x4cba6cu;
/* 48c9eb: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48c9f0(void) {
  LOAD_REGS();
L_48c9f0: /* 48c9f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48c9f3: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48c9f8(void) {
  LOAD_REGS();
  goto L_48c9f8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48c9f8: /* 48c9f8: mov eax, 0x4cbae8 */
  eax = 0x4cbae8u;
/* 48c9fd: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ca02(void) {
  LOAD_REGS();
L_48ca02: /* 48ca02: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48ca05: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ca0a(void) {
  LOAD_REGS();
  goto L_48ca0a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ca0a: /* 48ca0a: mov eax, 0x4cbb40 */
  eax = 0x4cbb40u;
/* 48ca0f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ca14(void) {
  LOAD_REGS();
L_48ca14: /* 48ca14: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48ca17: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ca1c(void) {
  LOAD_REGS();
  goto L_48ca1c;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ca1c: /* 48ca1c: mov eax, 0x4cbb98 */
  eax = 0x4cbb98u;
/* 48ca21: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ca26(void) {
  LOAD_REGS();
L_48ca26: /* 48ca26: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48ca29: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ca2e(void) {
  LOAD_REGS();
L_48ca2e: /* 48ca2e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48ca31: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48ca36(void) {
  LOAD_REGS();
  goto L_48ca36;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ca36: /* 48ca36: mov eax, 0x4cbbf8 */
  eax = 0x4cbbf8u;
/* 48ca3b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ca40(void) {
  LOAD_REGS();
L_48ca40: /* 48ca40: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48ca43: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ca48(void) {
  LOAD_REGS();
L_48ca48: /* 48ca48: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48ca4b: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48ca50(void) {
  LOAD_REGS();
  goto L_48ca50;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ca50: /* 48ca50: mov eax, 0x4cbc58 */
  eax = 0x4cbc58u;
/* 48ca55: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ca5a(void) {
  LOAD_REGS();
L_48ca5a: /* 48ca5a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48ca5d: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ca62(void) {
  LOAD_REGS();
L_48ca62: /* 48ca62: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48ca65: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48ca6a(void) {
  LOAD_REGS();
  goto L_48ca6a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ca6a: /* 48ca6a: mov eax, 0x4cbcb8 */
  eax = 0x4cbcb8u;
/* 48ca6f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ca74(void) {
  LOAD_REGS();
L_48ca74: /* 48ca74: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48ca77: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ca7c(void) {
  LOAD_REGS();
L_48ca7c: /* 48ca7c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48ca7f: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48ca84(void) {
  LOAD_REGS();
  goto L_48ca84;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ca84: /* 48ca84: mov eax, 0x4cbd18 */
  eax = 0x4cbd18u;
/* 48ca89: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ca8e(void) {
  LOAD_REGS();
L_48ca8e: /* 48ca8e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48ca91: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ca96(void) {
  LOAD_REGS();
L_48ca96: /* 48ca96: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48ca99: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48ca9e(void) {
  LOAD_REGS();
  goto L_48ca9e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ca9e: /* 48ca9e: mov eax, 0x4cbd78 */
  eax = 0x4cbd78u;
/* 48caa3: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48caa8(void) {
  LOAD_REGS();
L_48caa8: /* 48caa8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48caab: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cab0(void) {
  LOAD_REGS();
L_48cab0: /* 48cab0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cab3: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cab8(void) {
  LOAD_REGS();
  goto L_48cab8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cab8: /* 48cab8: mov eax, 0x4cbdd8 */
  eax = 0x4cbdd8u;
/* 48cabd: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cac2(void) {
  LOAD_REGS();
L_48cac2: /* 48cac2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cac5: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48caca(void) {
  LOAD_REGS();
L_48caca: /* 48caca: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cacd: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cad2(void) {
  LOAD_REGS();
  goto L_48cad2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cad2: /* 48cad2: mov eax, 0x4cbe38 */
  eax = 0x4cbe38u;
/* 48cad7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cadc(void) {
  LOAD_REGS();
L_48cadc: /* 48cadc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cadf: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cae4(void) {
  LOAD_REGS();
L_48cae4: /* 48cae4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cae7: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48caec(void) {
  LOAD_REGS();
  goto L_48caec;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48caec: /* 48caec: mov eax, 0x4cbe98 */
  eax = 0x4cbe98u;
/* 48caf1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48caf6(void) {
  LOAD_REGS();
L_48caf6: /* 48caf6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48caf9: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cafe(void) {
  LOAD_REGS();
L_48cafe: /* 48cafe: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cb01: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cb06(void) {
  LOAD_REGS();
  goto L_48cb06;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cb06: /* 48cb06: mov eax, 0x4cbef8 */
  eax = 0x4cbef8u;
/* 48cb0b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cb10(void) {
  LOAD_REGS();
L_48cb10: /* 48cb10: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cb13: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cb18(void) {
  LOAD_REGS();
L_48cb18: /* 48cb18: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cb1b: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cb20(void) {
  LOAD_REGS();
  goto L_48cb20;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cb20: /* 48cb20: mov eax, 0x4cbf58 */
  eax = 0x4cbf58u;
/* 48cb25: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cb2a(void) {
  LOAD_REGS();
L_48cb2a: /* 48cb2a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cb2d: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cb32(void) {
  LOAD_REGS();
L_48cb32: /* 48cb32: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cb35: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cb3a(void) {
  LOAD_REGS();
  goto L_48cb3a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cb3a: /* 48cb3a: mov eax, 0x4cbfb8 */
  eax = 0x4cbfb8u;
/* 48cb3f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cb44(void) {
  LOAD_REGS();
L_48cb44: /* 48cb44: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cb47: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cb4c(void) {
  LOAD_REGS();
L_48cb4c: /* 48cb4c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cb4f: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cb54(void) {
  LOAD_REGS();
  goto L_48cb54;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cb54: /* 48cb54: mov eax, 0x4cc018 */
  eax = 0x4cc018u;
/* 48cb59: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cb5e(void) {
  LOAD_REGS();
L_48cb5e: /* 48cb5e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cb61: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cb66(void) {
  LOAD_REGS();
L_48cb66: /* 48cb66: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cb69: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cb6e(void) {
  LOAD_REGS();
  goto L_48cb6e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cb6e: /* 48cb6e: mov eax, 0x4cc078 */
  eax = 0x4cc078u;
/* 48cb73: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cb78(void) {
  LOAD_REGS();
L_48cb78: /* 48cb78: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48cb7b: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cb80(void) {
  LOAD_REGS();
  goto L_48cb80;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cb80: /* 48cb80: mov eax, 0x4cc104 */
  eax = 0x4cc104u;
/* 48cb85: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cb8a(void) {
  LOAD_REGS();
L_48cb8a: /* 48cb8a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48cb8d: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cb92(void) {
  LOAD_REGS();
  goto L_48cb92;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cb92: /* 48cb92: mov eax, 0x4cc15c */
  eax = 0x4cc15cu;
/* 48cb97: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cb9c(void) {
  LOAD_REGS();
L_48cb9c: /* 48cb9c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cb9f: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cba4(void) {
  LOAD_REGS();
  goto L_48cba4;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cba4: /* 48cba4: mov eax, 0x4cc1b4 */
  eax = 0x4cc1b4u;
/* 48cba9: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cbae(void) {
  LOAD_REGS();
L_48cbae: /* 48cbae: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cbb1: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cbb6(void) {
  LOAD_REGS();
  goto L_48cbb6;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cbb6: /* 48cbb6: mov eax, 0x4cc240 */
  eax = 0x4cc240u;
/* 48cbbb: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cbc0(void) {
  LOAD_REGS();
L_48cbc0: /* 48cbc0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cbc3: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cbc8(void) {
  LOAD_REGS();
  goto L_48cbc8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cbc8: /* 48cbc8: mov eax, 0x4cc298 */
  eax = 0x4cc298u;
/* 48cbcd: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cbd2(void) {
  LOAD_REGS();
L_48cbd2: /* 48cbd2: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cbd5: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cbda(void) {
  LOAD_REGS();
  goto L_48cbda;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cbda: /* 48cbda: mov eax, 0x4cc2f0 */
  eax = 0x4cc2f0u;
/* 48cbdf: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cbe4(void) {
  LOAD_REGS();
L_48cbe4: /* 48cbe4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cbe7: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cbec(void) {
  LOAD_REGS();
  goto L_48cbec;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cbec: /* 48cbec: mov eax, 0x4cc348 */
  eax = 0x4cc348u;
/* 48cbf1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cbf6(void) {
  LOAD_REGS();
L_48cbf6: /* 48cbf6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48cbf9: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cbfe(void) {
  LOAD_REGS();
  goto L_48cbfe;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cbfe: /* 48cbfe: mov eax, 0x4cc3a0 */
  eax = 0x4cc3a0u;
/* 48cc03: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cc08(void) {
  LOAD_REGS();
L_48cc08: /* 48cc08: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cc0b: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cc10(void) {
  LOAD_REGS();
  goto L_48cc10;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cc10: /* 48cc10: mov eax, 0x4cc3f8 */
  eax = 0x4cc3f8u;
/* 48cc15: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cc1a(void) {
  LOAD_REGS();
L_48cc1a: /* 48cc1a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cc1d: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cc22(void) {
  LOAD_REGS();
  goto L_48cc22;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cc22: /* 48cc22: mov eax, 0x4cc450 */
  eax = 0x4cc450u;
/* 48cc27: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cc2c(void) {
  LOAD_REGS();
L_48cc2c: /* 48cc2c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cc2f: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cc34(void) {
  LOAD_REGS();
L_48cc34: /* 48cc34: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cc37: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cc3c(void) {
  LOAD_REGS();
  goto L_48cc3c;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cc3c: /* 48cc3c: mov eax, 0x4cc4b0 */
  eax = 0x4cc4b0u;
/* 48cc41: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cc46(void) {
  LOAD_REGS();
L_48cc46: /* 48cc46: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cc49: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cc4e(void) {
  LOAD_REGS();
L_48cc4e: /* 48cc4e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cc51: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cc56(void) {
  LOAD_REGS();
  goto L_48cc56;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cc56: /* 48cc56: mov eax, 0x4cc510 */
  eax = 0x4cc510u;
/* 48cc5b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cc60(void) {
  LOAD_REGS();
L_48cc60: /* 48cc60: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cc63: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cc68(void) {
  LOAD_REGS();
L_48cc68: /* 48cc68: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cc6b: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cc70(void) {
  LOAD_REGS();
  goto L_48cc70;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cc70: /* 48cc70: mov eax, 0x4cc570 */
  eax = 0x4cc570u;
/* 48cc75: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cc7a(void) {
  LOAD_REGS();
L_48cc7a: /* 48cc7a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cc7d: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cc82(void) {
  LOAD_REGS();
L_48cc82: /* 48cc82: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cc85: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cc8a(void) {
  LOAD_REGS();
  goto L_48cc8a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cc8a: /* 48cc8a: mov eax, 0x4cc5d0 */
  eax = 0x4cc5d0u;
/* 48cc8f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cc94(void) {
  LOAD_REGS();
L_48cc94: /* 48cc94: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cc97: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cc9c(void) {
  LOAD_REGS();
L_48cc9c: /* 48cc9c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cc9f: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cca4(void) {
  LOAD_REGS();
  goto L_48cca4;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cca4: /* 48cca4: mov eax, 0x4cc630 */
  eax = 0x4cc630u;
/* 48cca9: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ccae(void) {
  LOAD_REGS();
L_48ccae: /* 48ccae: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48ccb1: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ccb6(void) {
  LOAD_REGS();
L_48ccb6: /* 48ccb6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48ccb9: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48ccbe(void) {
  LOAD_REGS();
  goto L_48ccbe;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ccbe: /* 48ccbe: mov eax, 0x4cc690 */
  eax = 0x4cc690u;
/* 48ccc3: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ccc8(void) {
  LOAD_REGS();
L_48ccc8: /* 48ccc8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cccb: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ccd0(void) {
  LOAD_REGS();
L_48ccd0: /* 48ccd0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48ccd3: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48ccd8(void) {
  LOAD_REGS();
  goto L_48ccd8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ccd8: /* 48ccd8: mov eax, 0x4cc6f0 */
  eax = 0x4cc6f0u;
/* 48ccdd: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cce2(void) {
  LOAD_REGS();
L_48cce2: /* 48cce2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cce5: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ccea(void) {
  LOAD_REGS();
L_48ccea: /* 48ccea: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cced: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48ccf2(void) {
  LOAD_REGS();
  goto L_48ccf2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ccf2: /* 48ccf2: mov eax, 0x4cc750 */
  eax = 0x4cc750u;
/* 48ccf7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ccfc(void) {
  LOAD_REGS();
L_48ccfc: /* 48ccfc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48ccff: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cd04(void) {
  LOAD_REGS();
L_48cd04: /* 48cd04: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cd07: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cd0c(void) {
  LOAD_REGS();
  goto L_48cd0c;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cd0c: /* 48cd0c: mov eax, 0x4cc7b0 */
  eax = 0x4cc7b0u;
/* 48cd11: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cd16(void) {
  LOAD_REGS();
L_48cd16: /* 48cd16: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cd19: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cd1e(void) {
  LOAD_REGS();
L_48cd1e: /* 48cd1e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cd21: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cd26(void) {
  LOAD_REGS();
  goto L_48cd26;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cd26: /* 48cd26: mov eax, 0x4cc810 */
  eax = 0x4cc810u;
/* 48cd2b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cd30(void) {
  LOAD_REGS();
L_48cd30: /* 48cd30: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cd33: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cd38(void) {
  LOAD_REGS();
L_48cd38: /* 48cd38: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cd3b: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cd40(void) {
  LOAD_REGS();
  goto L_48cd40;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cd40: /* 48cd40: mov eax, 0x4cc870 */
  eax = 0x4cc870u;
/* 48cd45: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cd4a(void) {
  LOAD_REGS();
L_48cd4a: /* 48cd4a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cd4d: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cd52(void) {
  LOAD_REGS();
L_48cd52: /* 48cd52: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cd55: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cd5a(void) {
  LOAD_REGS();
  goto L_48cd5a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cd5a: /* 48cd5a: mov eax, 0x4cc8d0 */
  eax = 0x4cc8d0u;
/* 48cd5f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cd64(void) {
  LOAD_REGS();
L_48cd64: /* 48cd64: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48cd67: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cd6c(void) {
  LOAD_REGS();
L_48cd6c: /* 48cd6c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48cd6f: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48cd74(void) {
  LOAD_REGS();
  goto L_48cd74;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cd74: /* 48cd74: mov eax, 0x4cc930 */
  eax = 0x4cc930u;
/* 48cd79: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cd7e(void) {
  LOAD_REGS();
L_48cd7e: /* 48cd7e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48cd81: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cd86(void) {
  LOAD_REGS();
  goto L_48cd86;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cd86: /* 48cd86: mov eax, 0x4cc9bc */
  eax = 0x4cc9bcu;
/* 48cd8b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cd90(void) {
  LOAD_REGS();
L_48cd90: /* 48cd90: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48cd93: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cd98(void) {
  LOAD_REGS();
  goto L_48cd98;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cd98: /* 48cd98: mov eax, 0x4cca14 */
  eax = 0x4cca14u;
/* 48cd9d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cda2(void) {
  LOAD_REGS();
L_48cda2: /* 48cda2: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cda5: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cdaa(void) {
  LOAD_REGS();
  goto L_48cdaa;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cdaa: /* 48cdaa: mov eax, 0x4cca6c */
  eax = 0x4cca6cu;
/* 48cdaf: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cdb4(void) {
  LOAD_REGS();
L_48cdb4: /* 48cdb4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cdb7: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cdbc(void) {
  LOAD_REGS();
  goto L_48cdbc;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cdbc: /* 48cdbc: mov eax, 0x4ccaf8 */
  eax = 0x4ccaf8u;
/* 48cdc1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cdc6(void) {
  LOAD_REGS();
L_48cdc6: /* 48cdc6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cdc9: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cdce(void) {
  LOAD_REGS();
  goto L_48cdce;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cdce: /* 48cdce: mov eax, 0x4ccb50 */
  eax = 0x4ccb50u;
/* 48cdd3: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cdd8(void) {
  LOAD_REGS();
L_48cdd8: /* 48cdd8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cddb: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cde0(void) {
  LOAD_REGS();
  goto L_48cde0;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cde0: /* 48cde0: mov eax, 0x4ccba8 */
  eax = 0x4ccba8u;
/* 48cde5: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cdea(void) {
  LOAD_REGS();
L_48cdea: /* 48cdea: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48cded: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48cdf2(void) {
  LOAD_REGS();
  goto L_48cdf2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cdf2: /* 48cdf2: mov eax, 0x4ccc00 */
  eax = 0x4ccc00u;
/* 48cdf7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cdfc(void) {
  LOAD_REGS();
L_48cdfc: /* 48cdfc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 48cdff: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ce04(void) {
  LOAD_REGS();
  goto L_48ce04;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ce04: /* 48ce04: mov eax, 0x4cba90 */
  eax = 0x4cba90u;
/* 48ce09: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ce0e(void) {
  LOAD_REGS();
L_48ce0e: /* 48ce0e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48ce11: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ce16(void) {
  LOAD_REGS();
  goto L_48ce16;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ce16: /* 48ce16: mov eax, 0x4ccc58 */
  eax = 0x4ccc58u;
/* 48ce1b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ce20(void) {
  LOAD_REGS();
L_48ce20: /* 48ce20: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48ce23: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ce28(void) {
  LOAD_REGS();
  goto L_48ce28;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ce28: /* 48ce28: mov eax, 0x4cccb0 */
  eax = 0x4cccb0u;
/* 48ce2d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ce32(void) {
  LOAD_REGS();
L_48ce32: /* 48ce32: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48ce35: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48ce3a(void) {
  LOAD_REGS();
  goto L_48ce3a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ce3a: /* 48ce3a: mov eax, 0x4ccd08 */
  eax = 0x4ccd08u;
/* 48ce3f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ce44(void) {
  LOAD_REGS();
L_48ce44: /* 48ce44: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 48ce47: jmp 0x462325 */
  SPILL(); f_462325(); return;
}

void f_48ce4c(void) {
  LOAD_REGS();
  goto L_48ce4c;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ce4c: /* 48ce4c: mov eax, 0x4ccd2c */
  eax = 0x4ccd2cu;
/* 48ce51: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ce56(void) {
  LOAD_REGS();
L_48ce56: /* 48ce56: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48ce59: jmp 0x462325 */
  SPILL(); f_462325(); return;
}

void f_48ce5e(void) {
  LOAD_REGS();
  goto L_48ce5e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ce5e: /* 48ce5e: mov eax, 0x4ccd50 */
  eax = 0x4ccd50u;
/* 48ce63: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ce68(void) {
  LOAD_REGS();
L_48ce68: /* 48ce68: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 48ce6b: jmp 0x461d2b */
  SPILL(); f_461d2b(); return;
}

void f_48ce70(void) {
  LOAD_REGS();
  goto L_48ce70;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ce70: /* 48ce70: mov eax, 0x4ccd74 */
  eax = 0x4ccd74u;
/* 48ce75: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ce7a(void) {
  LOAD_REGS();
L_48ce7a: /* 48ce7a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48ce7d: jmp 0x461d2b */
  SPILL(); f_461d2b(); return;
}

void f_48ce82(void) {
  LOAD_REGS();
  goto L_48ce82;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ce82: /* 48ce82: mov eax, 0x4ccd98 */
  eax = 0x4ccd98u;
/* 48ce87: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ce8c(void) {
  LOAD_REGS();
L_48ce8c: /* 48ce8c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 48ce8f: jmp 0x461360 */
  SPILL(); f_461360(); return;
}

void f_48ce94(void) {
  LOAD_REGS();
  goto L_48ce94;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ce94: /* 48ce94: mov eax, 0x4ccdbc */
  eax = 0x4ccdbcu;
/* 48ce99: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ce9e(void) {
  LOAD_REGS();
L_48ce9e: /* 48ce9e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48cea1: jmp 0x461360 */
  SPILL(); f_461360(); return;
}

void f_48cea6(void) {
  LOAD_REGS();
  goto L_48cea6;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cea6: /* 48cea6: mov eax, 0x4ccde0 */
  eax = 0x4ccde0u;
/* 48ceab: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ceb0(void) {
  LOAD_REGS();
L_48ceb0: /* 48ceb0: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48ceb3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48ceb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48ceb8: je 0x48cec5 */
  if (zf) goto L_48cec5;
L_48ceba: /* 48ceba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cebd: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cec0: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48cec5: /* 48cec5: ret  */
  esp += 4; SPILL(); return;
}

void f_48cec6(void) {
  LOAD_REGS();
L_48cec6: /* 48cec6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cec9: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cecc: jmp 0x467c0b */
  SPILL(); f_467c0b(); return;
}

void f_48ced1(void) {
  LOAD_REGS();
  goto L_48ced1;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ced1: /* 48ced1: mov eax, 0x4cce0c */
  eax = 0x4cce0cu;
/* 48ced6: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cedb(void) {
  LOAD_REGS();
L_48cedb: /* 48cedb: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48cede: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48cee1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48cee3: je 0x48cef0 */
  if (zf) goto L_48cef0;
L_48cee5: /* 48cee5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cee8: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48ceeb: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48cef0: /* 48cef0: ret  */
  esp += 4; SPILL(); return;
}

void f_48cef1(void) {
  LOAD_REGS();
L_48cef1: /* 48cef1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cef4: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cef7: jmp 0x469023 */
  SPILL(); f_469023(); return;
}

void f_48cefc(void) {
  LOAD_REGS();
  goto L_48cefc;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cefc: /* 48cefc: mov eax, 0x4cce38 */
  eax = 0x4cce38u;
/* 48cf01: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cf06(void) {
  LOAD_REGS();
L_48cf06: /* 48cf06: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48cf09: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48cf0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48cf0e: je 0x48cf1b */
  if (zf) goto L_48cf1b;
L_48cf10: /* 48cf10: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cf13: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cf16: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48cf1b: /* 48cf1b: ret  */
  esp += 4; SPILL(); return;
}

void f_48cf1c(void) {
  LOAD_REGS();
L_48cf1c: /* 48cf1c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cf1f: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cf22: jmp 0x469091 */
  SPILL(); f_469091(); return;
}

void f_48cf27(void) {
  LOAD_REGS();
  goto L_48cf27;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cf27: /* 48cf27: mov eax, 0x4cce64 */
  eax = 0x4cce64u;
/* 48cf2c: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cf31(void) {
  LOAD_REGS();
L_48cf31: /* 48cf31: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48cf34: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48cf37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48cf39: je 0x48cf46 */
  if (zf) goto L_48cf46;
L_48cf3b: /* 48cf3b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cf3e: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cf41: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48cf46: /* 48cf46: ret  */
  esp += 4; SPILL(); return;
}

void f_48cf47(void) {
  LOAD_REGS();
L_48cf47: /* 48cf47: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cf4a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cf4d: jmp 0x464b92 */
  SPILL(); f_464b92(); return;
}

void f_48cf52(void) {
  LOAD_REGS();
  goto L_48cf52;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cf52: /* 48cf52: mov eax, 0x4cce90 */
  eax = 0x4cce90u;
/* 48cf57: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cf5c(void) {
  LOAD_REGS();
L_48cf5c: /* 48cf5c: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48cf5f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48cf62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48cf64: je 0x48cf71 */
  if (zf) goto L_48cf71;
L_48cf66: /* 48cf66: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cf69: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cf6c: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48cf71: /* 48cf71: ret  */
  esp += 4; SPILL(); return;
}

void f_48cf72(void) {
  LOAD_REGS();
L_48cf72: /* 48cf72: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cf75: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cf78: jmp 0x468eca */
  SPILL(); f_468eca(); return;
}

void f_48cf7d(void) {
  LOAD_REGS();
  goto L_48cf7d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cf7d: /* 48cf7d: mov eax, 0x4ccebc */
  eax = 0x4ccebcu;
/* 48cf82: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cf87(void) {
  LOAD_REGS();
L_48cf87: /* 48cf87: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48cf8a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48cf8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48cf8f: je 0x48cf9c */
  if (zf) goto L_48cf9c;
L_48cf91: /* 48cf91: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cf94: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cf97: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48cf9c: /* 48cf9c: ret  */
  esp += 4; SPILL(); return;
}

void f_48cf9d(void) {
  LOAD_REGS();
L_48cf9d: /* 48cf9d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cfa0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cfa3: jmp 0x468f38 */
  SPILL(); f_468f38(); return;
}

void f_48cfa8(void) {
  LOAD_REGS();
  goto L_48cfa8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cfa8: /* 48cfa8: mov eax, 0x4ccee8 */
  eax = 0x4ccee8u;
/* 48cfad: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cfb2(void) {
  LOAD_REGS();
L_48cfb2: /* 48cfb2: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48cfb5: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48cfb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48cfba: je 0x48cfc7 */
  if (zf) goto L_48cfc7;
L_48cfbc: /* 48cfbc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cfbf: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cfc2: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48cfc7: /* 48cfc7: ret  */
  esp += 4; SPILL(); return;
}

void f_48cfc8(void) {
  LOAD_REGS();
L_48cfc8: /* 48cfc8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cfcb: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cfce: jmp 0x4690e5 */
  SPILL(); f_4690e5(); return;
}

void f_48cfd3(void) {
  LOAD_REGS();
  goto L_48cfd3;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cfd3: /* 48cfd3: mov eax, 0x4ccf14 */
  eax = 0x4ccf14u;
/* 48cfd8: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48cfdd(void) {
  LOAD_REGS();
L_48cfdd: /* 48cfdd: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48cfe0: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48cfe3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48cfe5: je 0x48cff2 */
  if (zf) goto L_48cff2;
L_48cfe7: /* 48cfe7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cfea: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cfed: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48cff2: /* 48cff2: ret  */
  esp += 4; SPILL(); return;
}

void f_48cff3(void) {
  LOAD_REGS();
L_48cff3: /* 48cff3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48cff6: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48cff9: jmp 0x469198 */
  SPILL(); f_469198(); return;
}

void f_48cffe(void) {
  LOAD_REGS();
  goto L_48cffe;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48cffe: /* 48cffe: mov eax, 0x4ccf40 */
  eax = 0x4ccf40u;
/* 48d003: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d008(void) {
  LOAD_REGS();
L_48d008: /* 48d008: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d00b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d00e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d010: je 0x48d01d */
  if (zf) goto L_48d01d;
L_48d012: /* 48d012: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d015: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d018: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48d01d: /* 48d01d: ret  */
  esp += 4; SPILL(); return;
}

void f_48d01e(void) {
  LOAD_REGS();
L_48d01e: /* 48d01e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d021: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d024: jmp 0x46924b */
  SPILL(); f_46924b(); return;
}

void f_48d029(void) {
  LOAD_REGS();
  goto L_48d029;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d029: /* 48d029: mov eax, 0x4ccf6c */
  eax = 0x4ccf6cu;
/* 48d02e: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d033(void) {
  LOAD_REGS();
L_48d033: /* 48d033: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d036: jmp 0x4697da */
  SPILL(); f_4697da(); return;
}

void f_48d03b(void) {
  LOAD_REGS();
  goto L_48d03b;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d03b: /* 48d03b: mov eax, 0x4c9b94 */
  eax = 0x4c9b94u;
/* 48d040: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d045(void) {
  LOAD_REGS();
L_48d045: /* 48d045: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 48d048: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d04d(void) {
  LOAD_REGS();
  goto L_48d04d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d04d: /* 48d04d: mov eax, 0x4cd284 */
  eax = 0x4cd284u;
/* 48d052: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d057(void) {
  LOAD_REGS();
L_48d057: /* 48d057: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48d05a: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48d05f(void) {
  LOAD_REGS();
L_48d05f: /* 48d05f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48d062: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d067(void) {
  LOAD_REGS();
  goto L_48d067;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d067: /* 48d067: mov eax, 0x4ccff8 */
  eax = 0x4ccff8u;
/* 48d06c: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d071(void) {
  LOAD_REGS();
L_48d071: /* 48d071: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48d074: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48d079(void) {
  LOAD_REGS();
L_48d079: /* 48d079: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48d07c: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d081(void) {
  LOAD_REGS();
  goto L_48d081;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d081: /* 48d081: mov eax, 0x4cd058 */
  eax = 0x4cd058u;
/* 48d086: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d08b(void) {
  LOAD_REGS();
L_48d08b: /* 48d08b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48d08e: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48d093(void) {
  LOAD_REGS();
L_48d093: /* 48d093: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48d096: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d09b(void) {
  LOAD_REGS();
  goto L_48d09b;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d09b: /* 48d09b: mov eax, 0x4cd0b8 */
  eax = 0x4cd0b8u;
/* 48d0a0: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d0a5(void) {
  LOAD_REGS();
L_48d0a5: /* 48d0a5: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48d0a8: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48d0ad(void) {
  LOAD_REGS();
  goto L_48d0ad;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d0ad: /* 48d0ad: mov eax, 0x4c9fbc */
  eax = 0x4c9fbcu;
/* 48d0b2: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d0b7(void) {
  LOAD_REGS();
L_48d0b7: /* 48d0b7: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 48d0ba: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d0bf(void) {
  LOAD_REGS();
  goto L_48d0bf;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d0bf: /* 48d0bf: mov eax, 0x4cd158 */
  eax = 0x4cd158u;
/* 48d0c4: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d0c9(void) {
  LOAD_REGS();
L_48d0c9: /* 48d0c9: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 48d0cc: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d0d1(void) {
  LOAD_REGS();
L_48d0d1: /* 48d0d1: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 48d0d4: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d0d9(void) {
  LOAD_REGS();
  goto L_48d0d9;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d0d9: /* 48d0d9: mov eax, 0x4cd0e4 */
  eax = 0x4cd0e4u;
/* 48d0de: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d0e3(void) {
  LOAD_REGS();
L_48d0e3: /* 48d0e3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 48d0e6: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d0eb(void) {
  LOAD_REGS();
  goto L_48d0eb;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d0eb: /* 48d0eb: mov eax, 0x4cd330 */
  eax = 0x4cd330u;
/* 48d0f0: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d0f5(void) {
  LOAD_REGS();
L_48d0f5: /* 48d0f5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48d0f8: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d0fd(void) {
  LOAD_REGS();
  goto L_48d0fd;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d0fd: /* 48d0fd: mov eax, 0x4cd134 */
  eax = 0x4cd134u;
/* 48d102: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d107(void) {
  LOAD_REGS();
L_48d107: /* 48d107: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 48d10a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d10f(void) {
  LOAD_REGS();
L_48d10f: /* 48d10f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 48d112: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d117(void) {
  LOAD_REGS();
  goto L_48d117;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d117: /* 48d117: mov eax, 0x4cd110 */
  eax = 0x4cd110u;
/* 48d11c: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d121(void) {
  LOAD_REGS();
L_48d121: /* 48d121: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48d124: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48d129(void) {
  LOAD_REGS();
  goto L_48d129;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d129: /* 48d129: mov eax, 0x4cd1b0 */
  eax = 0x4cd1b0u;
/* 48d12e: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d133(void) {
  LOAD_REGS();
L_48d133: /* 48d133: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48d136: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48d13b(void) {
  LOAD_REGS();
  goto L_48d13b;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d13b: /* 48d13b: mov eax, 0x4cd208 */
  eax = 0x4cd208u;
/* 48d140: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d145(void) {
  LOAD_REGS();
L_48d145: /* 48d145: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48d148: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_48d14d(void) {
  LOAD_REGS();
  goto L_48d14d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d14d: /* 48d14d: mov eax, 0x4cd260 */
  eax = 0x4cd260u;
/* 48d152: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d157(void) {
  LOAD_REGS();
L_48d157: /* 48d157: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 48d15a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d15f(void) {
  LOAD_REGS();
L_48d15f: /* 48d15f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48d162: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d167(void) {
  LOAD_REGS();
L_48d167: /* 48d167: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 48d16a: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d16f(void) {
  LOAD_REGS();
L_48d16f: /* 48d16f: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 48d172: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d177(void) {
  LOAD_REGS();
L_48d177: /* 48d177: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48d17a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d17f(void) {
  LOAD_REGS();
  goto L_48d17f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d17f: /* 48d17f: mov eax, 0x4cd2c8 */
  eax = 0x4cd2c8u;
/* 48d184: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d189(void) {
  LOAD_REGS();
L_48d189: /* 48d189: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 48d18c: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d191(void) {
  LOAD_REGS();
L_48d191: /* 48d191: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48d194: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d199(void) {
  LOAD_REGS();
L_48d199: /* 48d199: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 48d19c: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d1a1(void) {
  LOAD_REGS();
L_48d1a1: /* 48d1a1: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 48d1a4: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d1a9(void) {
  LOAD_REGS();
L_48d1a9: /* 48d1a9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48d1ac: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d1b1(void) {
  LOAD_REGS();
  goto L_48d1b1;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d1b1: /* 48d1b1: mov eax, 0x4cd30c */
  eax = 0x4cd30cu;
/* 48d1b6: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d1bb(void) {
  LOAD_REGS();
L_48d1bb: /* 48d1bb: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 48d1be: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d1c3(void) {
  LOAD_REGS();
  goto L_48d1c3;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d1c3: /* 48d1c3: mov eax, 0x4cd354 */
  eax = 0x4cd354u;
/* 48d1c8: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d1cd(void) {
  LOAD_REGS();
L_48d1cd: /* 48d1cd: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 48d1d0: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d1d5(void) {
  LOAD_REGS();
L_48d1d5: /* 48d1d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d1d8: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d1db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d1dd: je 0x48d1e7 */
  if (zf) goto L_48d1e7;
L_48d1df: /* 48d1df: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 48d1e2: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
L_48d1e7: /* 48d1e7: ret  */
  esp += 4; SPILL(); return;
}

void f_48d1e8(void) {
  LOAD_REGS();
L_48d1e8: /* 48d1e8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d1eb: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d1ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d1f0: je 0x48d1fa */
  if (zf) goto L_48d1fa;
L_48d1f2: /* 48d1f2: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 48d1f5: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
L_48d1fa: /* 48d1fa: ret  */
  esp += 4; SPILL(); return;
}

void f_48d1fb(void) {
  LOAD_REGS();
L_48d1fb: /* 48d1fb: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48d1fe: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d203(void) {
  LOAD_REGS();
  goto L_48d203;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d203: /* 48d203: mov eax, 0x4cd3a0 */
  eax = 0x4cd3a0u;
/* 48d208: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d20d(void) {
  LOAD_REGS();
L_48d20d: /* 48d20d: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 48d210: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d215(void) {
  LOAD_REGS();
L_48d215: /* 48d215: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d218: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d21b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d21d: je 0x48d227 */
  if (zf) goto L_48d227;
L_48d21f: /* 48d21f: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 48d222: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
L_48d227: /* 48d227: ret  */
  esp += 4; SPILL(); return;
}

void f_48d228(void) {
  LOAD_REGS();
L_48d228: /* 48d228: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d22b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d22e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d230: je 0x48d23a */
  if (zf) goto L_48d23a;
L_48d232: /* 48d232: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 48d235: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
L_48d23a: /* 48d23a: ret  */
  esp += 4; SPILL(); return;
}

void f_48d23b(void) {
  LOAD_REGS();
L_48d23b: /* 48d23b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48d23e: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d243(void) {
  LOAD_REGS();
  goto L_48d243;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d243: /* 48d243: mov eax, 0x4cd3ec */
  eax = 0x4cd3ecu;
/* 48d248: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d24d(void) {
  LOAD_REGS();
L_48d24d: /* 48d24d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 48d250: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d255(void) {
  LOAD_REGS();
L_48d255: /* 48d255: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 48d258: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d25d(void) {
  LOAD_REGS();
L_48d25d: /* 48d25d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48d260: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d265(void) {
  LOAD_REGS();
  goto L_48d265;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d265: /* 48d265: mov eax, 0x4cd420 */
  eax = 0x4cd420u;
/* 48d26a: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d26f(void) {
  LOAD_REGS();
L_48d26f: /* 48d26f: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 48d272: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d277(void) {
  LOAD_REGS();
L_48d277: /* 48d277: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 48d27a: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d27f(void) {
  LOAD_REGS();
L_48d27f: /* 48d27f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48d282: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d287(void) {
  LOAD_REGS();
  goto L_48d287;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d287: /* 48d287: mov eax, 0x4cd454 */
  eax = 0x4cd454u;
/* 48d28c: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d291(void) {
  LOAD_REGS();
L_48d291: /* 48d291: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48d294: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d299(void) {
  LOAD_REGS();
  goto L_48d299;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d299: /* 48d299: mov eax, 0x4cd478 */
  eax = 0x4cd478u;
/* 48d29e: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d2a3(void) {
  LOAD_REGS();
L_48d2a3: /* 48d2a3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48d2a6: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d2ab(void) {
  LOAD_REGS();
  goto L_48d2ab;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d2ab: /* 48d2ab: mov eax, 0x4cd49c */
  eax = 0x4cd49cu;
/* 48d2b0: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d2b5(void) {
  LOAD_REGS();
L_48d2b5: /* 48d2b5: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 48d2bb: jmp 0x472cfe */
  SPILL(); f_472cfe(); return;
}

void f_48d2c0(void) {
  LOAD_REGS();
L_48d2c0: /* 48d2c0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 48d2c3: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d2c8(void) {
  LOAD_REGS();
L_48d2c8: /* 48d2c8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48d2cb: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d2d0(void) {
  LOAD_REGS();
  goto L_48d2d0;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d2d0: /* 48d2d0: mov eax, 0x4cd538 */
  eax = 0x4cd538u;
/* 48d2d5: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d2da(void) {
  LOAD_REGS();
L_48d2da: /* 48d2da: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 48d2e0: jmp 0x472d11 */
  SPILL(); f_472d11(); return;
}

void f_48d2e5(void) {
  LOAD_REGS();
L_48d2e5: /* 48d2e5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 48d2e8: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d2ed(void) {
  LOAD_REGS();
L_48d2ed: /* 48d2ed: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48d2f0: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d2f5(void) {
  LOAD_REGS();
  goto L_48d2f5;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d2f5: /* 48d2f5: mov eax, 0x4cd4d0 */
  eax = 0x4cd4d0u;
/* 48d2fa: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d2ff(void) {
  LOAD_REGS();
L_48d2ff: /* 48d2ff: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 48d305: jmp 0x472d24 */
  SPILL(); f_472d24(); return;
}

void f_48d30a(void) {
  LOAD_REGS();
L_48d30a: /* 48d30a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 48d30d: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d312(void) {
  LOAD_REGS();
L_48d312: /* 48d312: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48d315: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d31a(void) {
  LOAD_REGS();
  goto L_48d31a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d31a: /* 48d31a: mov eax, 0x4cd504 */
  eax = 0x4cd504u;
/* 48d31f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d324(void) {
  LOAD_REGS();
L_48d324: /* 48d324: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 48d327: call 0x461c65 */
  esp -= 4; W32(esp, 0x48d32cu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48d32c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48d32d: ret  */
  esp += 4; SPILL(); return;
}

void f_48d32e(void) {
  LOAD_REGS();
  goto L_48d32e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d32e: /* 48d32e: mov eax, 0x4cd564 */
  eax = 0x4cd564u;
/* 48d333: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d338(void) {
  LOAD_REGS();
L_48d338: /* 48d338: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d33b: jmp 0x461d2b */
  SPILL(); f_461d2b(); return;
}

void f_48d340(void) {
  LOAD_REGS();
L_48d340: /* 48d340: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d343: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d346: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d34b(void) {
  LOAD_REGS();
  goto L_48d34b;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d34b: /* 48d34b: mov eax, 0x4cd590 */
  eax = 0x4cd590u;
/* 48d350: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d355(void) {
  LOAD_REGS();
L_48d355: /* 48d355: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d358: jmp 0x461360 */
  SPILL(); f_461360(); return;
}

void f_48d35d(void) {
  LOAD_REGS();
L_48d35d: /* 48d35d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d360: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d363: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d368(void) {
  LOAD_REGS();
  goto L_48d368;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d368: /* 48d368: mov eax, 0x4cd5bc */
  eax = 0x4cd5bcu;
/* 48d36d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d372(void) {
  LOAD_REGS();
L_48d372: /* 48d372: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d375: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d378: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d37a: je 0x48d387 */
  if (zf) goto L_48d387;
L_48d37c: /* 48d37c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d37f: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d382: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48d387: /* 48d387: ret  */
  esp += 4; SPILL(); return;
}

void f_48d388(void) {
  LOAD_REGS();
L_48d388: /* 48d388: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d38b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d38e: jmp 0x467c0b */
  SPILL(); f_467c0b(); return;
}

void f_48d393(void) {
  LOAD_REGS();
  goto L_48d393;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d393: /* 48d393: mov eax, 0x4cd5e8 */
  eax = 0x4cd5e8u;
/* 48d398: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d39d(void) {
  LOAD_REGS();
L_48d39d: /* 48d39d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d3a0: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48d3a3: jmp 0x467c0b */
  SPILL(); f_467c0b(); return;
}

void f_48d3a8(void) {
  LOAD_REGS();
  goto L_48d3a8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d3a8: /* 48d3a8: mov eax, 0x4cd60c */
  eax = 0x4cd60cu;
/* 48d3ad: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d3b2(void) {
  LOAD_REGS();
L_48d3b2: /* 48d3b2: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d3b5: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d3b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d3ba: je 0x48d3c7 */
  if (zf) goto L_48d3c7;
L_48d3bc: /* 48d3bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d3bf: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d3c2: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48d3c7: /* 48d3c7: ret  */
  esp += 4; SPILL(); return;
}

void f_48d3c8(void) {
  LOAD_REGS();
L_48d3c8: /* 48d3c8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d3cb: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d3ce: jmp 0x469023 */
  SPILL(); f_469023(); return;
}

void f_48d3d3(void) {
  LOAD_REGS();
  goto L_48d3d3;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d3d3: /* 48d3d3: mov eax, 0x4cd638 */
  eax = 0x4cd638u;
/* 48d3d8: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d3dd(void) {
  LOAD_REGS();
L_48d3dd: /* 48d3dd: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d3e0: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48d3e3: jmp 0x469023 */
  SPILL(); f_469023(); return;
}

void f_48d3e8(void) {
  LOAD_REGS();
  goto L_48d3e8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d3e8: /* 48d3e8: mov eax, 0x4cd65c */
  eax = 0x4cd65cu;
/* 48d3ed: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d3f2(void) {
  LOAD_REGS();
L_48d3f2: /* 48d3f2: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d3f5: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d3f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d3fa: je 0x48d407 */
  if (zf) goto L_48d407;
L_48d3fc: /* 48d3fc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d3ff: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d402: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48d407: /* 48d407: ret  */
  esp += 4; SPILL(); return;
}

void f_48d408(void) {
  LOAD_REGS();
L_48d408: /* 48d408: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d40b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d40e: jmp 0x469091 */
  SPILL(); f_469091(); return;
}

void f_48d413(void) {
  LOAD_REGS();
  goto L_48d413;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d413: /* 48d413: mov eax, 0x4cd688 */
  eax = 0x4cd688u;
/* 48d418: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d41d(void) {
  LOAD_REGS();
L_48d41d: /* 48d41d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d420: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48d423: jmp 0x469091 */
  SPILL(); f_469091(); return;
}

void f_48d428(void) {
  LOAD_REGS();
  goto L_48d428;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d428: /* 48d428: mov eax, 0x4cd6ac */
  eax = 0x4cd6acu;
/* 48d42d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d432(void) {
  LOAD_REGS();
L_48d432: /* 48d432: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d435: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d438: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d43a: je 0x48d447 */
  if (zf) goto L_48d447;
L_48d43c: /* 48d43c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d43f: add ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d442: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48d447: /* 48d447: ret  */
  esp += 4; SPILL(); return;
}

void f_48d448(void) {
  LOAD_REGS();
L_48d448: /* 48d448: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d44b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d44e: jmp 0x464b92 */
  SPILL(); f_464b92(); return;
}

void f_48d453(void) {
  LOAD_REGS();
  goto L_48d453;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d453: /* 48d453: mov eax, 0x4cd6d8 */
  eax = 0x4cd6d8u;
/* 48d458: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d45d(void) {
  LOAD_REGS();
L_48d45d: /* 48d45d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d460: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48d463: jmp 0x464b92 */
  SPILL(); f_464b92(); return;
}

void f_48d468(void) {
  LOAD_REGS();
  goto L_48d468;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d468: /* 48d468: mov eax, 0x4cd6fc */
  eax = 0x4cd6fcu;
/* 48d46d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d472(void) {
  LOAD_REGS();
L_48d472: /* 48d472: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d475: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d47a: je 0x48d487 */
  if (zf) goto L_48d487;
L_48d47c: /* 48d47c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d47f: add ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d482: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48d487: /* 48d487: ret  */
  esp += 4; SPILL(); return;
}

void f_48d488(void) {
  LOAD_REGS();
L_48d488: /* 48d488: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d48b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d48e: jmp 0x468eca */
  SPILL(); f_468eca(); return;
}

void f_48d493(void) {
  LOAD_REGS();
  goto L_48d493;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d493: /* 48d493: mov eax, 0x4cd728 */
  eax = 0x4cd728u;
/* 48d498: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d49d(void) {
  LOAD_REGS();
L_48d49d: /* 48d49d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d4a0: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48d4a3: jmp 0x468eca */
  SPILL(); f_468eca(); return;
}

void f_48d4a8(void) {
  LOAD_REGS();
  goto L_48d4a8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d4a8: /* 48d4a8: mov eax, 0x4cd74c */
  eax = 0x4cd74cu;
/* 48d4ad: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d4b2(void) {
  LOAD_REGS();
L_48d4b2: /* 48d4b2: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d4b5: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d4b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d4ba: je 0x48d4c7 */
  if (zf) goto L_48d4c7;
L_48d4bc: /* 48d4bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d4bf: add ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d4c2: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48d4c7: /* 48d4c7: ret  */
  esp += 4; SPILL(); return;
}

void f_48d4c8(void) {
  LOAD_REGS();
L_48d4c8: /* 48d4c8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d4cb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d4ce: jmp 0x468f38 */
  SPILL(); f_468f38(); return;
}

void f_48d4d3(void) {
  LOAD_REGS();
  goto L_48d4d3;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d4d3: /* 48d4d3: mov eax, 0x4cd778 */
  eax = 0x4cd778u;
/* 48d4d8: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d4dd(void) {
  LOAD_REGS();
L_48d4dd: /* 48d4dd: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d4e0: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48d4e3: jmp 0x468f38 */
  SPILL(); f_468f38(); return;
}

void f_48d4e8(void) {
  LOAD_REGS();
  goto L_48d4e8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d4e8: /* 48d4e8: mov eax, 0x4cd79c */
  eax = 0x4cd79cu;
/* 48d4ed: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d4f2(void) {
  LOAD_REGS();
L_48d4f2: /* 48d4f2: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d4f5: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d4f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d4fa: je 0x48d507 */
  if (zf) goto L_48d507;
L_48d4fc: /* 48d4fc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d4ff: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d502: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48d507: /* 48d507: ret  */
  esp += 4; SPILL(); return;
}

void f_48d508(void) {
  LOAD_REGS();
L_48d508: /* 48d508: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d50b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d50e: jmp 0x4690e5 */
  SPILL(); f_4690e5(); return;
}

void f_48d513(void) {
  LOAD_REGS();
  goto L_48d513;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d513: /* 48d513: mov eax, 0x4cd7c8 */
  eax = 0x4cd7c8u;
/* 48d518: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d51d(void) {
  LOAD_REGS();
L_48d51d: /* 48d51d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d520: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48d523: jmp 0x4690e5 */
  SPILL(); f_4690e5(); return;
}

void f_48d528(void) {
  LOAD_REGS();
  goto L_48d528;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d528: /* 48d528: mov eax, 0x4cd7ec */
  eax = 0x4cd7ecu;
/* 48d52d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d532(void) {
  LOAD_REGS();
L_48d532: /* 48d532: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d535: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d538: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d53a: je 0x48d547 */
  if (zf) goto L_48d547;
L_48d53c: /* 48d53c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d53f: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d542: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48d547: /* 48d547: ret  */
  esp += 4; SPILL(); return;
}

void f_48d548(void) {
  LOAD_REGS();
L_48d548: /* 48d548: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d54b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d54e: jmp 0x469198 */
  SPILL(); f_469198(); return;
}

void f_48d553(void) {
  LOAD_REGS();
  goto L_48d553;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d553: /* 48d553: mov eax, 0x4cd818 */
  eax = 0x4cd818u;
/* 48d558: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d55d(void) {
  LOAD_REGS();
L_48d55d: /* 48d55d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d560: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48d563: jmp 0x469198 */
  SPILL(); f_469198(); return;
}

void f_48d568(void) {
  LOAD_REGS();
  goto L_48d568;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d568: /* 48d568: mov eax, 0x4cd83c */
  eax = 0x4cd83cu;
/* 48d56d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d572(void) {
  LOAD_REGS();
L_48d572: /* 48d572: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d575: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d578: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d57a: je 0x48d587 */
  if (zf) goto L_48d587;
L_48d57c: /* 48d57c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d57f: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d582: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48d587: /* 48d587: ret  */
  esp += 4; SPILL(); return;
}

void f_48d588(void) {
  LOAD_REGS();
L_48d588: /* 48d588: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d58b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d58e: jmp 0x46924b */
  SPILL(); f_46924b(); return;
}

void f_48d593(void) {
  LOAD_REGS();
  goto L_48d593;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d593: /* 48d593: mov eax, 0x4cd868 */
  eax = 0x4cd868u;
/* 48d598: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d59d(void) {
  LOAD_REGS();
L_48d59d: /* 48d59d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d5a0: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48d5a3: jmp 0x46924b */
  SPILL(); f_46924b(); return;
}

void f_48d5a8(void) {
  LOAD_REGS();
  goto L_48d5a8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d5a8: /* 48d5a8: mov eax, 0x4cd88c */
  eax = 0x4cd88cu;
/* 48d5ad: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d5b2(void) {
  LOAD_REGS();
L_48d5b2: /* 48d5b2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48d5b5: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d5ba(void) {
  LOAD_REGS();
L_48d5ba: /* 48d5ba: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 48d5bd: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d5c2(void) {
  LOAD_REGS();
L_48d5c2: /* 48d5c2: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 48d5c5: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d5ca(void) {
  LOAD_REGS();
L_48d5ca: /* 48d5ca: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 48d5cd: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d5d2(void) {
  LOAD_REGS();
L_48d5d2: /* 48d5d2: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 48d5d8: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d5dd(void) {
  LOAD_REGS();
L_48d5dd: /* 48d5dd: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 48d5e3: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d5e8(void) {
  LOAD_REGS();
L_48d5e8: /* 48d5e8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 48d5eb: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d5f0(void) {
  LOAD_REGS();
L_48d5f0: /* 48d5f0: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 48d5f6: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d5fb(void) {
  LOAD_REGS();
L_48d5fb: /* 48d5fb: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 48d601: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d606(void) {
  LOAD_REGS();
L_48d606: /* 48d606: lea ecx, [ebp - 0x164] */
  ecx = (uint32_t)(ebp + 0xfffffe9cu);
/* 48d60c: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d611(void) {
  LOAD_REGS();
L_48d611: /* 48d611: lea ecx, [ebp - 0x148] */
  ecx = (uint32_t)(ebp + 0xfffffeb8u);
/* 48d617: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d61c(void) {
  LOAD_REGS();
L_48d61c: /* 48d61c: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 48d622: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d627(void) {
  LOAD_REGS();
L_48d627: /* 48d627: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 48d62d: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d632(void) {
  LOAD_REGS();
L_48d632: /* 48d632: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 48d638: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d63d(void) {
  LOAD_REGS();
  goto L_48d63d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d63d: /* 48d63d: mov eax, 0x4cd918 */
  eax = 0x4cd918u;
/* 48d642: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d647(void) {
  LOAD_REGS();
L_48d647: /* 48d647: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48d64a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d64f(void) {
  LOAD_REGS();
L_48d64f: /* 48d64f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48d652: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d657(void) {
  LOAD_REGS();
L_48d657: /* 48d657: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 48d65a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d65f(void) {
  LOAD_REGS();
L_48d65f: /* 48d65f: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 48d662: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d667(void) {
  LOAD_REGS();
L_48d667: /* 48d667: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48d66d: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d672(void) {
  LOAD_REGS();
L_48d672: /* 48d672: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 48d678: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d67d(void) {
  LOAD_REGS();
L_48d67d: /* 48d67d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 48d680: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d685(void) {
  LOAD_REGS();
L_48d685: /* 48d685: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 48d68b: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d690(void) {
  LOAD_REGS();
L_48d690: /* 48d690: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 48d696: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d69b(void) {
  LOAD_REGS();
L_48d69b: /* 48d69b: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 48d6a1: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d6a6(void) {
  LOAD_REGS();
L_48d6a6: /* 48d6a6: lea ecx, [ebp - 0x13c] */
  ecx = (uint32_t)(ebp + 0xfffffec4u);
/* 48d6ac: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d6b1(void) {
  LOAD_REGS();
L_48d6b1: /* 48d6b1: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 48d6b7: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d6bc(void) {
  LOAD_REGS();
L_48d6bc: /* 48d6bc: lea ecx, [ebp - 0x174] */
  ecx = (uint32_t)(ebp + 0xfffffe8cu);
/* 48d6c2: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d6c7(void) {
  LOAD_REGS();
L_48d6c7: /* 48d6c7: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 48d6cd: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d6d2(void) {
  LOAD_REGS();
  goto L_48d6d2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d6d2: /* 48d6d2: mov eax, 0x4cd9a4 */
  eax = 0x4cd9a4u;
/* 48d6d7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d6dc(void) {
  LOAD_REGS();
L_48d6dc: /* 48d6dc: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 48d6df: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d6e4(void) {
  LOAD_REGS();
L_48d6e4: /* 48d6e4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48d6e7: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d6ec(void) {
  LOAD_REGS();
L_48d6ec: /* 48d6ec: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48d6ef: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d6f4(void) {
  LOAD_REGS();
L_48d6f4: /* 48d6f4: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 48d6f7: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d6fc(void) {
  LOAD_REGS();
L_48d6fc: /* 48d6fc: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 48d6ff: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d704(void) {
  LOAD_REGS();
L_48d704: /* 48d704: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 48d70a: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d70f(void) {
  LOAD_REGS();
L_48d70f: /* 48d70f: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 48d715: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d71a(void) {
  LOAD_REGS();
L_48d71a: /* 48d71a: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 48d71d: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d722(void) {
  LOAD_REGS();
L_48d722: /* 48d722: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 48d728: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d72d(void) {
  LOAD_REGS();
  goto L_48d72d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d72d: /* 48d72d: mov eax, 0x4cda08 */
  eax = 0x4cda08u;
/* 48d732: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d737(void) {
  LOAD_REGS();
L_48d737: /* 48d737: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 48d73a: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d73f(void) {
  LOAD_REGS();
L_48d73f: /* 48d73f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48d742: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d747(void) {
  LOAD_REGS();
L_48d747: /* 48d747: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 48d74a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d74f(void) {
  LOAD_REGS();
L_48d74f: /* 48d74f: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 48d752: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d757(void) {
  LOAD_REGS();
L_48d757: /* 48d757: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 48d75a: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d75f(void) {
  LOAD_REGS();
L_48d75f: /* 48d75f: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 48d765: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d76a(void) {
  LOAD_REGS();
L_48d76a: /* 48d76a: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 48d770: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d775(void) {
  LOAD_REGS();
L_48d775: /* 48d775: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 48d778: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d77d(void) {
  LOAD_REGS();
L_48d77d: /* 48d77d: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 48d783: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d788(void) {
  LOAD_REGS();
  goto L_48d788;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d788: /* 48d788: mov eax, 0x4cda6c */
  eax = 0x4cda6cu;
/* 48d78d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d792(void) {
  LOAD_REGS();
  goto L_48d792;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d792: /* 48d792: mov eax, 0x4cdabc */
  eax = 0x4cdabcu;
/* 48d797: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d79c(void) {
  LOAD_REGS();
  goto L_48d79c;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d79c: /* 48d79c: mov eax, 0x4cdb0c */
  eax = 0x4cdb0cu;
/* 48d7a1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d7a6(void) {
  LOAD_REGS();
L_48d7a6: /* 48d7a6: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 48d7a9: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48d7ae(void) {
  LOAD_REGS();
  goto L_48d7ae;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d7ae: /* 48d7ae: mov eax, 0x4cdb30 */
  eax = 0x4cdb30u;
/* 48d7b3: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d7b8(void) {
  LOAD_REGS();
L_48d7b8: /* 48d7b8: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d7bb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d7be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d7c0: je 0x48d7cd */
  if (zf) goto L_48d7cd;
L_48d7c2: /* 48d7c2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d7c5: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d7c8: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48d7cd: /* 48d7cd: ret  */
  esp += 4; SPILL(); return;
}

void f_48d7ce(void) {
  LOAD_REGS();
L_48d7ce: /* 48d7ce: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d7d1: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d7d4: jmp 0x467c0b */
  SPILL(); f_467c0b(); return;
}

void f_48d7d9(void) {
  LOAD_REGS();
L_48d7d9: /* 48d7d9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d7dc: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d7df: jmp 0x4622d2 */
  SPILL(); f_4622d2(); return;
}

void f_48d7e4(void) {
  LOAD_REGS();
  goto L_48d7e4;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d7e4: /* 48d7e4: mov eax, 0x4cdb64 */
  eax = 0x4cdb64u;
/* 48d7e9: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d7ee(void) {
  LOAD_REGS();
L_48d7ee: /* 48d7ee: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d7f1: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d7f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d7f6: je 0x48d803 */
  if (zf) goto L_48d803;
L_48d7f8: /* 48d7f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d7fb: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d7fe: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48d803: /* 48d803: ret  */
  esp += 4; SPILL(); return;
}

void f_48d804(void) {
  LOAD_REGS();
L_48d804: /* 48d804: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d807: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d80a: jmp 0x469023 */
  SPILL(); f_469023(); return;
}

void f_48d80f(void) {
  LOAD_REGS();
L_48d80f: /* 48d80f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d812: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d815: jmp 0x461cd8 */
  SPILL(); f_461cd8(); return;
}

void f_48d81a(void) {
  LOAD_REGS();
  goto L_48d81a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d81a: /* 48d81a: mov eax, 0x4cdb98 */
  eax = 0x4cdb98u;
/* 48d81f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d824(void) {
  LOAD_REGS();
L_48d824: /* 48d824: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d827: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d82a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d82c: je 0x48d839 */
  if (zf) goto L_48d839;
L_48d82e: /* 48d82e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d831: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d834: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48d839: /* 48d839: ret  */
  esp += 4; SPILL(); return;
}

void f_48d83a(void) {
  LOAD_REGS();
L_48d83a: /* 48d83a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d83d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d840: jmp 0x469091 */
  SPILL(); f_469091(); return;
}

void f_48d845(void) {
  LOAD_REGS();
L_48d845: /* 48d845: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d848: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d84b: jmp 0x46130d */
  SPILL(); f_46130d(); return;
}

void f_48d850(void) {
  LOAD_REGS();
  goto L_48d850;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d850: /* 48d850: mov eax, 0x4cdbcc */
  eax = 0x4cdbccu;
/* 48d855: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d85a(void) {
  LOAD_REGS();
L_48d85a: /* 48d85a: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d85d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d860: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d862: je 0x48d86f */
  if (zf) goto L_48d86f;
L_48d864: /* 48d864: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d867: add ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d86a: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48d86f: /* 48d86f: ret  */
  esp += 4; SPILL(); return;
}

void f_48d870(void) {
  LOAD_REGS();
L_48d870: /* 48d870: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d873: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d876: jmp 0x464b92 */
  SPILL(); f_464b92(); return;
}

void f_48d87b(void) {
  LOAD_REGS();
L_48d87b: /* 48d87b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d87e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d881: jmp 0x4622d2 */
  SPILL(); f_4622d2(); return;
}

void f_48d886(void) {
  LOAD_REGS();
  goto L_48d886;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d886: /* 48d886: mov eax, 0x4cdc00 */
  eax = 0x4cdc00u;
/* 48d88b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d890(void) {
  LOAD_REGS();
L_48d890: /* 48d890: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d893: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d896: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d898: je 0x48d8a5 */
  if (zf) goto L_48d8a5;
L_48d89a: /* 48d89a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d89d: add ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d8a0: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48d8a5: /* 48d8a5: ret  */
  esp += 4; SPILL(); return;
}

void f_48d8a6(void) {
  LOAD_REGS();
L_48d8a6: /* 48d8a6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d8a9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d8ac: jmp 0x468eca */
  SPILL(); f_468eca(); return;
}

void f_48d8b1(void) {
  LOAD_REGS();
L_48d8b1: /* 48d8b1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d8b4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d8b7: jmp 0x461cd8 */
  SPILL(); f_461cd8(); return;
}

void f_48d8bc(void) {
  LOAD_REGS();
  goto L_48d8bc;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d8bc: /* 48d8bc: mov eax, 0x4cdc34 */
  eax = 0x4cdc34u;
/* 48d8c1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d8c6(void) {
  LOAD_REGS();
L_48d8c6: /* 48d8c6: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d8c9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d8cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d8ce: je 0x48d8db */
  if (zf) goto L_48d8db;
L_48d8d0: /* 48d8d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d8d3: add ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d8d6: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48d8db: /* 48d8db: ret  */
  esp += 4; SPILL(); return;
}

void f_48d8dc(void) {
  LOAD_REGS();
L_48d8dc: /* 48d8dc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d8df: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d8e2: jmp 0x468f38 */
  SPILL(); f_468f38(); return;
}

void f_48d8e7(void) {
  LOAD_REGS();
L_48d8e7: /* 48d8e7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d8ea: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d8ed: jmp 0x46130d */
  SPILL(); f_46130d(); return;
}

void f_48d8f2(void) {
  LOAD_REGS();
  goto L_48d8f2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d8f2: /* 48d8f2: mov eax, 0x4cdc68 */
  eax = 0x4cdc68u;
/* 48d8f7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d8fc(void) {
  LOAD_REGS();
L_48d8fc: /* 48d8fc: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d8ff: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d904: je 0x48d911 */
  if (zf) goto L_48d911;
L_48d906: /* 48d906: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d909: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d90c: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48d911: /* 48d911: ret  */
  esp += 4; SPILL(); return;
}

void f_48d912(void) {
  LOAD_REGS();
L_48d912: /* 48d912: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d915: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d918: jmp 0x4690e5 */
  SPILL(); f_4690e5(); return;
}

void f_48d91d(void) {
  LOAD_REGS();
L_48d91d: /* 48d91d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d920: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d923: jmp 0x4622d2 */
  SPILL(); f_4622d2(); return;
}

void f_48d928(void) {
  LOAD_REGS();
  goto L_48d928;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d928: /* 48d928: mov eax, 0x4cdc9c */
  eax = 0x4cdc9cu;
/* 48d92d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d932(void) {
  LOAD_REGS();
L_48d932: /* 48d932: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d935: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d938: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d93a: je 0x48d947 */
  if (zf) goto L_48d947;
L_48d93c: /* 48d93c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d93f: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d942: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
L_48d947: /* 48d947: ret  */
  esp += 4; SPILL(); return;
}

void f_48d948(void) {
  LOAD_REGS();
L_48d948: /* 48d948: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d94b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d94e: jmp 0x469198 */
  SPILL(); f_469198(); return;
}

void f_48d953(void) {
  LOAD_REGS();
L_48d953: /* 48d953: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d956: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d959: jmp 0x461cd8 */
  SPILL(); f_461cd8(); return;
}

void f_48d95e(void) {
  LOAD_REGS();
  goto L_48d95e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d95e: /* 48d95e: mov eax, 0x4cdcd0 */
  eax = 0x4cdcd0u;
/* 48d963: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d968(void) {
  LOAD_REGS();
L_48d968: /* 48d968: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48d96b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48d96e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48d970: je 0x48d97d */
  if (zf) goto L_48d97d;
L_48d972: /* 48d972: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d975: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d978: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
L_48d97d: /* 48d97d: ret  */
  esp += 4; SPILL(); return;
}

void f_48d97e(void) {
  LOAD_REGS();
L_48d97e: /* 48d97e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d981: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d984: jmp 0x46924b */
  SPILL(); f_46924b(); return;
}

void f_48d989(void) {
  LOAD_REGS();
L_48d989: /* 48d989: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48d98c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48d98f: jmp 0x46130d */
  SPILL(); f_46130d(); return;
}

void f_48d994(void) {
  LOAD_REGS();
  goto L_48d994;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d994: /* 48d994: mov eax, 0x4cdd04 */
  eax = 0x4cdd04u;
/* 48d999: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d99e(void) {
  LOAD_REGS();
L_48d99e: /* 48d99e: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 48d9a1: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d9a6(void) {
  LOAD_REGS();
L_48d9a6: /* 48d9a6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48d9a9: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d9ae(void) {
  LOAD_REGS();
  goto L_48d9ae;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d9ae: /* 48d9ae: mov eax, 0x4cdd30 */
  eax = 0x4cdd30u;
/* 48d9b3: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d9b8(void) {
  LOAD_REGS();
L_48d9b8: /* 48d9b8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48d9bb: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d9c0(void) {
  LOAD_REGS();
  goto L_48d9c0;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d9c0: /* 48d9c0: mov eax, 0x4cdd54 */
  eax = 0x4cdd54u;
/* 48d9c5: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d9ca(void) {
  LOAD_REGS();
L_48d9ca: /* 48d9ca: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48d9cd: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d9d2(void) {
  LOAD_REGS();
  goto L_48d9d2;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d9d2: /* 48d9d2: mov eax, 0x4cdda4 */
  eax = 0x4cdda4u;
/* 48d9d7: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d9dc(void) {
  LOAD_REGS();
L_48d9dc: /* 48d9dc: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 48d9df: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48d9e4(void) {
  LOAD_REGS();
L_48d9e4: /* 48d9e4: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48d9e7: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d9ec(void) {
  LOAD_REGS();
  goto L_48d9ec;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d9ec: /* 48d9ec: mov eax, 0x4cdd80 */
  eax = 0x4cdd80u;
/* 48d9f1: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48d9f6(void) {
  LOAD_REGS();
L_48d9f6: /* 48d9f6: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48d9f9: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48d9fe(void) {
  LOAD_REGS();
  goto L_48d9fe;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48d9fe: /* 48d9fe: mov eax, 0x4cddc8 */
  eax = 0x4cddc8u;
/* 48da03: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48da08(void) {
  LOAD_REGS();
L_48da08: /* 48da08: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 48da0b: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48da10(void) {
  LOAD_REGS();
L_48da10: /* 48da10: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 48da13: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48da18(void) {
  LOAD_REGS();
  goto L_48da18;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48da18: /* 48da18: mov eax, 0x4cddf4 */
  eax = 0x4cddf4u;
/* 48da1d: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48da22(void) {
  LOAD_REGS();
L_48da22: /* 48da22: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48da25: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48da2a(void) {
  LOAD_REGS();
  goto L_48da2a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48da2a: /* 48da2a: mov eax, 0x4cde18 */
  eax = 0x4cde18u;
/* 48da2f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48da34(void) {
  LOAD_REGS();
L_48da34: /* 48da34: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 48da37: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48da3c(void) {
  LOAD_REGS();
L_48da3c: /* 48da3c: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 48da3f: jmp 0x462fcb */
  SPILL(); f_462fcb(); return;
}

void f_48da44(void) {
  LOAD_REGS();
  goto L_48da44;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48da44: /* 48da44: mov eax, 0x4cde44 */
  eax = 0x4cde44u;
/* 48da49: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48da4e(void) {
  LOAD_REGS();
L_48da4e: /* 48da4e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48da51: jmp 0x4697da */
  SPILL(); f_4697da(); return;
}

void f_48da56(void) {
  LOAD_REGS();
L_48da56: /* 48da56: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48da5c: jmp 0x488e1d */
  SPILL(); f_488e1d(); return;
}

void f_48da61(void) {
  LOAD_REGS();
  goto L_48da61;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48da61: /* 48da61: mov eax, 0x4ccf98 */
  eax = 0x4ccf98u;
/* 48da66: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48da6b(void) {
  LOAD_REGS();
L_48da6b: /* 48da6b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48da6e: call 0x461c65 */
  esp -= 4; W32(esp, 0x48da73u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48da73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48da74: ret  */
  esp += 4; SPILL(); return;
}

void f_48da75(void) {
  LOAD_REGS();
  goto L_48da75;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48da75: /* 48da75: mov eax, 0x4c9ce8 */
  eax = 0x4c9ce8u;
/* 48da7a: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48da7f(void) {
  LOAD_REGS();
L_48da7f: /* 48da7f: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48da82: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48da87(void) {
  LOAD_REGS();
  goto L_48da87;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48da87: /* 48da87: mov eax, 0x4cde68 */
  eax = 0x4cde68u;
/* 48da8c: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48da91(void) {
  LOAD_REGS();
L_48da91: /* 48da91: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48da94: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48da99(void) {
  LOAD_REGS();
L_48da99: /* 48da99: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48da9c: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48daa1(void) {
  LOAD_REGS();
L_48daa1: /* 48daa1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 48daa4: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48daa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48daa9: je 0x48dab3 */
  if (zf) goto L_48dab3;
L_48daab: /* 48daab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48daae: jmp 0x461389 */
  SPILL(); f_461389(); return;
L_48dab3: /* 48dab3: ret  */
  esp += 4; SPILL(); return;
}

void f_48dab4(void) {
  LOAD_REGS();
  goto L_48dab4;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dab4: /* 48dab4: mov eax, 0x4cde9c */
  eax = 0x4cde9cu;
/* 48dab9: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dabe(void) {
  LOAD_REGS();
L_48dabe: /* 48dabe: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48dac1: call 0x461c65 */
  esp -= 4; W32(esp, 0x48dac6u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48dac6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48dac7: ret  */
  esp += 4; SPILL(); return;
}

void f_48dac8(void) {
  LOAD_REGS();
L_48dac8: /* 48dac8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48dacb: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dad0(void) {
  LOAD_REGS();
  goto L_48dad0;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dad0: /* 48dad0: mov eax, 0x4cdef0 */
  eax = 0x4cdef0u;
/* 48dad5: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dada(void) {
  LOAD_REGS();
L_48dada: /* 48dada: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dadd: jmp 0x4697da */
  SPILL(); f_4697da(); return;
}

void f_48dae2(void) {
  LOAD_REGS();
L_48dae2: /* 48dae2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dae5: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dae8: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48daed(void) {
  LOAD_REGS();
L_48daed: /* 48daed: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48daf3: jmp 0x488e1d */
  SPILL(); f_488e1d(); return;
}

void f_48daf8(void) {
  LOAD_REGS();
L_48daf8: /* 48daf8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 48dafb: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48db00(void) {
  LOAD_REGS();
  goto L_48db00;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48db00: /* 48db00: mov eax, 0x4cdf2c */
  eax = 0x4cdf2cu;
/* 48db05: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48db0a(void) {
  LOAD_REGS();
L_48db0a: /* 48db0a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48db0d: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48db12(void) {
  LOAD_REGS();
L_48db12: /* 48db12: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48db15: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48db18: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48db1d(void) {
  LOAD_REGS();
L_48db1d: /* 48db1d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48db20: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48db23: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48db28(void) {
  LOAD_REGS();
L_48db28: /* 48db28: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48db2b: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48db2e: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48db33(void) {
  LOAD_REGS();
L_48db33: /* 48db33: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48db36: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48db39: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48db3e(void) {
  LOAD_REGS();
  goto L_48db3e;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48db3e: /* 48db3e: mov eax, 0x4cdf70 */
  eax = 0x4cdf70u;
/* 48db43: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48db48(void) {
  LOAD_REGS();
L_48db48: /* 48db48: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 48db4b: call 0x461c65 */
  esp -= 4; W32(esp, 0x48db50u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48db50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48db51: ret  */
  esp += 4; SPILL(); return;
}

void f_48db52(void) {
  LOAD_REGS();
L_48db52: /* 48db52: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 48db58: jmp 0x488e1d */
  SPILL(); f_488e1d(); return;
}

void f_48db5d(void) {
  LOAD_REGS();
  goto L_48db5d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48db5d: /* 48db5d: mov eax, 0x4cdfd0 */
  eax = 0x4cdfd0u;
/* 48db62: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48db67(void) {
  LOAD_REGS();
L_48db67: /* 48db67: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 48db6a: call 0x461c65 */
  esp -= 4; W32(esp, 0x48db6fu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48db6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48db70: ret  */
  esp += 4; SPILL(); return;
}

void f_48db71(void) {
  LOAD_REGS();
L_48db71: /* 48db71: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 48db77: jmp 0x488e1d */
  SPILL(); f_488e1d(); return;
}

void f_48db7c(void) {
  LOAD_REGS();
L_48db7c: /* 48db7c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48db7f: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48db84(void) {
  LOAD_REGS();
L_48db84: /* 48db84: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48db87: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48db8c(void) {
  LOAD_REGS();
  goto L_48db8c;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48db8c: /* 48db8c: mov eax, 0x4ce078 */
  eax = 0x4ce078u;
/* 48db91: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48db96(void) {
  LOAD_REGS();
L_48db96: /* 48db96: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48db99: jmp dword ptr [0x48e0dc] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_48db9f(void) {
  LOAD_REGS();
  goto L_48db9f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48db9f: /* 48db9f: mov eax, 0x4ce09c */
  eax = 0x4ce09cu;
/* 48dba4: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dba9(void) {
  LOAD_REGS();
L_48dba9: /* 48dba9: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 48dbac: call 0x461c65 */
  esp -= 4; W32(esp, 0x48dbb1u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48dbb1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48dbb2: ret  */
  esp += 4; SPILL(); return;
}

void f_48dbb3(void) {
  LOAD_REGS();
L_48dbb3: /* 48dbb3: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 48dbb9: jmp 0x488e1d */
  SPILL(); f_488e1d(); return;
}

void f_48dbbe(void) {
  LOAD_REGS();
L_48dbbe: /* 48dbbe: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48dbc1: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dbc6(void) {
  LOAD_REGS();
L_48dbc6: /* 48dbc6: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48dbc9: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dbce(void) {
  LOAD_REGS();
L_48dbce: /* 48dbce: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48dbd1: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dbd6(void) {
  LOAD_REGS();
  goto L_48dbd6;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dbd6: /* 48dbd6: mov eax, 0x4ce114 */
  eax = 0x4ce114u;
/* 48dbdb: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dbe0(void) {
  LOAD_REGS();
L_48dbe0: /* 48dbe0: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 48dbe3: call 0x461c65 */
  esp -= 4; W32(esp, 0x48dbe8u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48dbe8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48dbe9: ret  */
  esp += 4; SPILL(); return;
}

void f_48dbea(void) {
  LOAD_REGS();
  goto L_48dbea;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dbea: /* 48dbea: mov eax, 0x4ce138 */
  eax = 0x4ce138u;
/* 48dbef: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dbf4(void) {
  LOAD_REGS();
L_48dbf4: /* 48dbf4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dbf7: jmp dword ptr [0x48e0dc] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_48dbfd(void) {
  LOAD_REGS();
  goto L_48dbfd;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dbfd: /* 48dbfd: mov eax, 0x4ce1ec */
  eax = 0x4ce1ecu;
/* 48dc02: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dc07(void) {
  LOAD_REGS();
L_48dc07: /* 48dc07: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48dc0a: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dc0f(void) {
  LOAD_REGS();
  goto L_48dc0f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dc0f: /* 48dc0f: mov eax, 0x4ce24c */
  eax = 0x4ce24cu;
/* 48dc14: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dc19(void) {
  LOAD_REGS();
L_48dc19: /* 48dc19: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dc1c: jmp 0x462325 */
  SPILL(); f_462325(); return;
}

void f_48dc21(void) {
  LOAD_REGS();
  goto L_48dc21;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dc21: /* 48dc21: mov eax, 0x4ce270 */
  eax = 0x4ce270u;
/* 48dc26: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dc2b(void) {
  LOAD_REGS();
L_48dc2b: /* 48dc2b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dc2e: sub ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48dc31: jmp 0x467c0b */
  SPILL(); f_467c0b(); return;
}

void f_48dc36(void) {
  LOAD_REGS();
  goto L_48dc36;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dc36: /* 48dc36: mov eax, 0x4ce294 */
  eax = 0x4ce294u;
/* 48dc3b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dc40(void) {
  LOAD_REGS();
L_48dc40: /* 48dc40: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dc43: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48dc46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48dc48: je 0x48dc55 */
  if (zf) goto L_48dc55;
L_48dc4a: /* 48dc4a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48dc4d: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dc50: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48dc55: /* 48dc55: ret  */
  esp += 4; SPILL(); return;
}

void f_48dc56(void) {
  LOAD_REGS();
L_48dc56: /* 48dc56: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48dc59: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dc5c: jmp 0x464b92 */
  SPILL(); f_464b92(); return;
}

void f_48dc61(void) {
  LOAD_REGS();
  goto L_48dc61;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dc61: /* 48dc61: mov eax, 0x4ce2c0 */
  eax = 0x4ce2c0u;
/* 48dc66: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dc6b(void) {
  LOAD_REGS();
L_48dc6b: /* 48dc6b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dc6e: sub ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48dc71: jmp 0x464b92 */
  SPILL(); f_464b92(); return;
}

void f_48dc76(void) {
  LOAD_REGS();
  goto L_48dc76;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dc76: /* 48dc76: mov eax, 0x4ce2e4 */
  eax = 0x4ce2e4u;
/* 48dc7b: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dc80(void) {
  LOAD_REGS();
L_48dc80: /* 48dc80: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dc83: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48dc86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48dc88: je 0x48dc95 */
  if (zf) goto L_48dc95;
L_48dc8a: /* 48dc8a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48dc8d: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dc90: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
L_48dc95: /* 48dc95: ret  */
  esp += 4; SPILL(); return;
}

void f_48dc96(void) {
  LOAD_REGS();
L_48dc96: /* 48dc96: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48dc99: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dc9c: jmp 0x4690e5 */
  SPILL(); f_4690e5(); return;
}

void f_48dca1(void) {
  LOAD_REGS();
  goto L_48dca1;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dca1: /* 48dca1: mov eax, 0x4ce310 */
  eax = 0x4ce310u;
/* 48dca6: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dcab(void) {
  LOAD_REGS();
L_48dcab: /* 48dcab: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dcae: sub ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48dcb1: jmp 0x4690e5 */
  SPILL(); f_4690e5(); return;
}

void f_48dcb6(void) {
  LOAD_REGS();
  goto L_48dcb6;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dcb6: /* 48dcb6: mov eax, 0x4ce334 */
  eax = 0x4ce334u;
/* 48dcbb: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dcc0(void) {
  LOAD_REGS();
L_48dcc0: /* 48dcc0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48dcc3: jmp 0x4697da */
  SPILL(); f_4697da(); return;
}

void f_48dcc8(void) {
  LOAD_REGS();
L_48dcc8: /* 48dcc8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48dccb: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dcce: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dcd3(void) {
  LOAD_REGS();
L_48dcd3: /* 48dcd3: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48dcd6: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48dcdb(void) {
  LOAD_REGS();
  goto L_48dcdb;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dcdb: /* 48dcdb: mov eax, 0x4ce368 */
  eax = 0x4ce368u;
/* 48dce0: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dce5(void) {
  LOAD_REGS();
L_48dce5: /* 48dce5: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 48dce8: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dced(void) {
  LOAD_REGS();
L_48dced: /* 48dced: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 48dcf0: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dcf5(void) {
  LOAD_REGS();
L_48dcf5: /* 48dcf5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 48dcf8: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dcfd(void) {
  LOAD_REGS();
  goto L_48dcfd;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dcfd: /* 48dcfd: mov eax, 0x4ce39c */
  eax = 0x4ce39cu;
/* 48dd02: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dd07(void) {
  LOAD_REGS();
L_48dd07: /* 48dd07: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dd0a: jmp 0x4697da */
  SPILL(); f_4697da(); return;
}

void f_48dd0f(void) {
  LOAD_REGS();
  goto L_48dd0f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dd0f: /* 48dd0f: mov eax, 0x4ce3c0 */
  eax = 0x4ce3c0u;
/* 48dd14: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dd19(void) {
  LOAD_REGS();
L_48dd19: /* 48dd19: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dd1c: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48dd21(void) {
  LOAD_REGS();
L_48dd21: /* 48dd21: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dd24: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dd27: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dd2c(void) {
  LOAD_REGS();
L_48dd2c: /* 48dd2c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dd2f: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dd32: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dd37(void) {
  LOAD_REGS();
L_48dd37: /* 48dd37: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dd3a: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dd3d: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dd42(void) {
  LOAD_REGS();
L_48dd42: /* 48dd42: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48dd45: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48dd48: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dd4d(void) {
  LOAD_REGS();
  goto L_48dd4d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dd4d: /* 48dd4d: mov eax, 0x4ce404 */
  eax = 0x4ce404u;
/* 48dd52: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dd57(void) {
  LOAD_REGS();
L_48dd57: /* 48dd57: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48dd5a: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48dd5f(void) {
  LOAD_REGS();
L_48dd5f: /* 48dd5f: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 48dd62: call 0x461c65 */
  esp -= 4; W32(esp, 0x48dd67u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48dd67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48dd68: ret  */
  esp += 4; SPILL(); return;
}

void f_48dd69(void) {
  LOAD_REGS();
  goto L_48dd69;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dd69: /* 48dd69: mov eax, 0x4ce430 */
  eax = 0x4ce430u;
/* 48dd6e: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dd73(void) {
  LOAD_REGS();
L_48dd73: /* 48dd73: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 48dd76: call 0x461c65 */
  esp -= 4; W32(esp, 0x48dd7bu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48dd7b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48dd7c: ret  */
  esp += 4; SPILL(); return;
}

void f_48dd7d(void) {
  LOAD_REGS();
  goto L_48dd7d;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dd7d: /* 48dd7d: mov eax, 0x4ce454 */
  eax = 0x4ce454u;
/* 48dd82: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dd87(void) {
  LOAD_REGS();
L_48dd87: /* 48dd87: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48dd8a: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_48dd8f(void) {
  LOAD_REGS();
  goto L_48dd8f;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48dd8f: /* 48dd8f: mov eax, 0x4ce478 */
  eax = 0x4ce478u;
/* 48dd94: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48dd99(void) {
  LOAD_REGS();
L_48dd99: /* 48dd99: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 48dd9c: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dda1(void) {
  LOAD_REGS();
L_48dda1: /* 48dda1: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 48dda4: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48dda9(void) {
  LOAD_REGS();
L_48dda9: /* 48dda9: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 48ddaf: jmp 0x461c6b */
  SPILL(); f_461c6b(); return;
}

void f_48ddb4(void) {
  LOAD_REGS();
  goto L_48ddb4;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ddb4: /* 48ddb4: mov eax, 0x4ce4e8 */
  eax = 0x4ce4e8u;
/* 48ddb9: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ddbe(void) {
  LOAD_REGS();
L_48ddbe: /* 48ddbe: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48ddc1: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48ddc6(void) {
  LOAD_REGS();
  goto L_48ddc6;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ddc6: /* 48ddc6: mov eax, 0x4ce50c */
  eax = 0x4ce50cu;
/* 48ddcb: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48ddd0(void) {
  LOAD_REGS();
L_48ddd0: /* 48ddd0: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 48ddd3: call 0x461c65 */
  esp -= 4; W32(esp, 0x48ddd8u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48ddd8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48ddd9: ret  */
  esp += 4; SPILL(); return;
}

void f_48ddda(void) {
  LOAD_REGS();
L_48ddda: /* 48ddda: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 48dddd: call 0x461c65 */
  esp -= 4; W32(esp, 0x48dde2u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48dde2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48dde3: ret  */
  esp += 4; SPILL(); return;
}

void f_48dde4(void) {
  LOAD_REGS();
L_48dde4: /* 48dde4: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 48dde7: call 0x461c65 */
  esp -= 4; W32(esp, 0x48ddecu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48ddec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48dded: ret  */
  esp += 4; SPILL(); return;
}

void f_48ddee(void) {
  LOAD_REGS();
L_48ddee: /* 48ddee: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48ddf1: call 0x461c65 */
  esp -= 4; W32(esp, 0x48ddf6u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48ddf6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48ddf7: ret  */
  esp += 4; SPILL(); return;
}

void f_48ddf8(void) {
  LOAD_REGS();
  goto L_48ddf8;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48ddf8: /* 48ddf8: mov eax, 0x4ce5b0 */
  eax = 0x4ce5b0u;
/* 48ddfd: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48de02(void) {
  LOAD_REGS();
L_48de02: /* 48de02: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48de05: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_48de0a(void) {
  LOAD_REGS();
  goto L_48de0a;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48de0a: /* 48de0a: mov eax, 0x4ce5d4 */
  eax = 0x4ce5d4u;
/* 48de0f: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48de14(void) {
  LOAD_REGS();
L_48de14: /* 48de14: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 48de17: call 0x461c65 */
  esp -= 4; W32(esp, 0x48de1cu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48de1c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48de1d: ret  */
  esp += 4; SPILL(); return;
}

void f_48de1e(void) {
  LOAD_REGS();
L_48de1e: /* 48de1e: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 48de21: call 0x461c65 */
  esp -= 4; W32(esp, 0x48de26u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48de26: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48de27: ret  */
  esp += 4; SPILL(); return;
}

void f_48de28(void) {
  LOAD_REGS();
L_48de28: /* 48de28: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48de2b: call 0x461c65 */
  esp -= 4; W32(esp, 0x48de30u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48de30: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48de31: ret  */
  esp += 4; SPILL(); return;
}

void f_48de32(void) {
  LOAD_REGS();
  goto L_48de32;
L_48bec0: /* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_48de32: /* 48de32: mov eax, 0x4ce648 */
  eax = 0x4ce648u;
/* 48de37: jmp 0x48bec0 */
  goto L_48bec0;
}

void f_48de3c(void) {
  LOAD_REGS();
L_48de3c: /* 48de3c: mov ecx, 0x4d10ec */
  ecx = 0x4d10ecu;
/* 48de41: jmp 0x4875b1 */
  SPILL(); f_4875b1(); return;
}
