#include "recomp.h"
#include "rec_mod.h"

void f_92fae0(void) {
  LOAD_REGS();
L_92fae0: /* 92fae0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92fae3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 92fae7: xor eax, eax */
  eax = 0;
/* 92fae9: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 92faed: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 92faf1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 92faf5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 92faf9: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 92fafd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fafe: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 92fb00: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 92fb02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92fb03: mov dword ptr [esp + 0x18], 0x92f7b0 */
  W32((uint32_t)(esp + 0x18u), 0x92f7b0u);
/* 92fb0b: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 92fb13: call 0x929df0 */
  esp -= 4; W32(esp, 0x92fb18u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 92fb18: mov eax, 1 */
  eax = 0x1u;
/* 92fb1d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92fb20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92fb30(void) {
  LOAD_REGS();
L_92fb30: /* 92fb30: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92fb33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92fb34: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92fb35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92fb36: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 92fb3a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92fb3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92fb3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fb3e: call 0x928730 */
  esp -= 4; W32(esp, 0x92fb43u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 92fb43: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 92fb46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92fb47: mov ebp, eax */
  ebp = eax;
/* 92fb49: call 0x928730 */
  esp -= 4; W32(esp, 0x92fb4eu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 92fb4e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 92fb50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92fb51: mov edi, eax */
  edi = eax;
/* 92fb53: call 0x928610 */
  esp -= 4; W32(esp, 0x92fb58u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 92fb58: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 92fb5c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 92fb5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fb60: call 0x928610 */
  esp -= 4; W32(esp, 0x92fb65u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 92fb65: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 92fb69: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 92fb6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92fb6c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92fb70: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92fb75u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92fb75: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 92fb78: mov ebx, eax */
  ebx = eax;
/* 92fb7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92fb7b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 92fb7f: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92fb84u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92fb84: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 92fb88: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92fb8a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92fb8c: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 92fb90: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 92fb94: xor ecx, ecx */
  ecx = 0;
/* 92fb96: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92fb99: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 92fb9c: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* 92fb9f: fsub dword ptr [ebp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x30u)));
/* 92fba2: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 92fba5: lea ebx, [ebp + 0x30] */
  ebx = (uint32_t)(ebp + 0x30u);
/* 92fba8: lea esi, [ebp + 0x20] */
  esi = (uint32_t)(ebp + 0x20u);
/* 92fbab: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 92fbaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92fbb0: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 92fbb3: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 92fbb7: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 92fbba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fbbb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 92fbbf: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 92fbc3: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 92fbc6: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 92fbc9: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 92fbcd: call 0x92feb0 */
  esp -= 4; W32(esp, 0x92fbd2u); SPILL(); f_92feb0(); if (g_unwind) return; RELOAD();
/* 92fbd2: fst dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0);
/* 92fbd6: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 92fbda: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fbdc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92fbdf: jp 0x92fbe7 */
  if (pf) goto L_92fbe7;
L_92fbe1: /* 92fbe1: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 92fbe5: jmp 0x92fbeb */
  goto L_92fbeb;
L_92fbe7: /* 92fbe7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_92fbeb: /* 92fbeb: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92fbef: fchs  */
  ST0 = -ST0;
/* 92fbf1: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 92fbf5: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 92fbf9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fbfb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92fbfe: jp 0x92fc0a */
  if (pf) goto L_92fc0a;
L_92fc00: /* 92fc00: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92fc04: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 92fc08: jmp 0x92fc21 */
  goto L_92fc21;
L_92fc0a: /* 92fc0a: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 92fc0e: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 92fc12: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fc14: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92fc17: jnp 0x92fc21 */
  if (!pf) goto L_92fc21;
L_92fc19: /* 92fc19: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92fc1d: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
L_92fc21: /* 92fc21: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 92fc25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92fc26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fc27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92fc28: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 92fc2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92fc2d: call 0x92fed0 */
  esp -= 4; W32(esp, 0x92fc32u); SPILL(); f_92fed0(); if (g_unwind) return; RELOAD();
/* 92fc32: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92fc36: fsub dword ptr [edi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x30u)));
/* 92fc39: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 92fc3d: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92fc41: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92fc45: fsub dword ptr [edi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x34u)));
/* 92fc48: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92fc4c: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 92fc50: fsub dword ptr [edi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x38u)));
/* 92fc53: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 92fc57: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 92fc5b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92fc5f: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 92fc63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92fc65: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92fc69: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 92fc6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92fc6f: fld dword ptr [edx + 0x80] */
  { double v = F32((uint32_t)(edx + 0x80u)); FPUSH(v); }
/* 92fc75: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92fc77: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fc79: fmul dword ptr [0xa214e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa214e0u)));
/* 92fc7f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92fc81: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 92fc83: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fc85: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92fc87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92fc8a: jne 0x92fcc5 */
  if (!zf) goto L_92fcc5;
L_92fc8c: /* 92fc8c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92fc8e: fsqrt  */
  ST0 = sqrt(ST0);
/* 92fc90: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 92fc96: fst dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0);
/* 92fc9a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92fc9c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92fca0: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 92fca4: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92fca8: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92fcac: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 92fcb0: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92fcb4: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 92fcb8: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 92fcbc: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 92fcc0: jmp 0x92fe07 */
  goto L_92fe07;
L_92fcc5: /* 92fcc5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92fcc7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 92fcc9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92fccb: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92fccd: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 92fcd0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92fcd2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fcd4: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 92fcd8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92fcda: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 92fcdd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92fcdf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fce1: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 92fce5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92fce7: fcom dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
/* 92fceb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fced: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92fcf0: jne 0x92fcf9 */
  if (!zf) goto L_92fcf9;
L_92fcf2: /* 92fcf2: mov ecx, 1 */
  ecx = 0x1u;
/* 92fcf7: jmp 0x92fcfb */
  goto L_92fcfb;
L_92fcf9: /* 92fcf9: xor ecx, ecx */
  ecx = 0;
L_92fcfb: /* 92fcfb: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 92fcff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fd01: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92fd04: jne 0x92fd0d */
  if (!zf) goto L_92fd0d;
L_92fd06: /* 92fd06: mov edx, 1 */
  edx = 0x1u;
/* 92fd0b: jmp 0x92fd0f */
  goto L_92fd0f;
L_92fd0d: /* 92fd0d: xor edx, edx */
  edx = 0;
L_92fd0f: /* 92fd0f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 92fd13: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 92fd17: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fd19: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92fd1c: jne 0x92fd25 */
  if (!zf) goto L_92fd25;
L_92fd1e: /* 92fd1e: mov eax, 1 */
  eax = 0x1u;
/* 92fd23: jmp 0x92fd27 */
  goto L_92fd27;
L_92fd25: /* 92fd25: xor eax, eax */
  eax = 0;
L_92fd27: /* 92fd27: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92fd29: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92fd2b: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 92fd2d: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92fd2f: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = r;
  }
/* 92fd32: mov eax, 0x21312300 */
  eax = 0x21312300u;
/* 92fd37: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 92fd39: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 92fd41: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 92fd49: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 92fd51: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92fd54: mov dword ptr [esp + eax*4 + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + eax*4 + 0x34u), 0x3f800000u);
/* 92fd5c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92fd60: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92fd63: xor eax, eax */
  eax = 0;
/* 92fd65: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 92fd69: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92fd6c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92fd6e: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92fd72: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 92fd76: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92fd79: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92fd7d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92fd7f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92fd81: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92fd85: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 92fd89: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92fd8b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 92fd8f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92fd92: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92fd94: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 92fd98: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 92fd9e: mov edi, edi */
  edi = edi;
L_92fda0: /* 92fda0: fld dword ptr [esp + eax*4 + 0x28] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x28u)); FPUSH(v); }
/* 92fda4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92fda5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92fda8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92fdaa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fdac: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92fdae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92fdb0: jl 0x92fda0 */
  if ((sf != of)) goto L_92fda0;
L_92fdb2: /* 92fdb2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 92fdb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fdba: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92fdbd: jne 0x92fde7 */
  if (!zf) goto L_92fde7;
L_92fdbf: /* 92fdbf: fsqrt  */
  ST0 = sqrt(ST0);
/* 92fdc1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 92fdc7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92fdcb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fdcd: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92fdd1: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92fdd5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fdd7: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92fddb: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 92fddf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fde1: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 92fde5: jmp 0x92fdff */
  goto L_92fdff;
L_92fde7: /* 92fde7: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 92fdef: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 92fdf7: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
L_92fdff: /* 92fdff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92fe01: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_92fe07: /* 92fe07: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 92fe0b: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 92fe0e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 92fe12: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 92fe15: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 92fe17: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 92fe1b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92fe1d: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 92fe21: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 92fe25: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fe27: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92fe2a: jp 0x92fe9c */
  if (pf) goto L_92fe9c;
L_92fe2c: /* 92fe2c: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 92fe2f: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 92fe33: fchs  */
  ST0 = -ST0;
/* 92fe35: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 92fe39: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 92fe3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92fe3e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92fe42: xor eax, eax */
  eax = 0;
/* 92fe44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fe45: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fe47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fe48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92fe49: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 92fe4b: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 92fe4f: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 92fe51: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 92fe54: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 92fe58: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 92fe5b: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92fe5f: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 92fe62: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fe64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92fe65: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 92fe69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fe6a: fadd dword ptr [esp + 0x64] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x64u)));
/* 92fe6e: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 92fe72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92fe73: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 92fe77: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 92fe7b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92fe7d: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 92fe81: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 92fe85: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92fe87: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x92fe8cu); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 92fe8c: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 92fe8f: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92fe92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92fe93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92fe94: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92fe95: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92fe96: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92fe99: ret 8 */
  esp += 12; SPILL(); return;
L_92fe9c: /* 92fe9c: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 92fea0: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 92fea3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92fea4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92fea5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92fea6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92fea7: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92feaa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92feb0(void) {
  LOAD_REGS();
L_92feb0: /* 92feb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92feb4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92feb8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92febb: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 92febe: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92fec1: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 92fec4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92fec6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92fec8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92feca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92fecc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92fed0(void) {
  LOAD_REGS();
L_92fed0: /* 92fed0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92fed4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92fed8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92feda: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92fede: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92fee2: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 92fee4: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 92fee6: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92feea: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92feed: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 92fef0: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 92fef3: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92fef7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92fefa: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 92fefd: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 92ff00: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92ff10(void) {
  LOAD_REGS();
L_92ff10: /* 92ff10: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92ff13: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 92ff17: xor eax, eax */
  eax = 0;
/* 92ff19: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 92ff1d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 92ff21: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 92ff25: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 92ff29: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 92ff2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ff2e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92ff30: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 92ff32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ff33: mov dword ptr [esp + 0x18], 0x92fb30 */
  W32((uint32_t)(esp + 0x18u), 0x92fb30u);
/* 92ff3b: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 92ff43: call 0x929df0 */
  esp -= 4; W32(esp, 0x92ff48u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 92ff48: mov eax, 1 */
  eax = 0x1u;
/* 92ff4d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92ff50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92ff60(void) {
  LOAD_REGS();
L_92ff60: /* 92ff60: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92ff63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92ff64: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92ff65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ff66: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 92ff6a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92ff6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ff6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ff6e: call 0x928730 */
  esp -= 4; W32(esp, 0x92ff73u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 92ff73: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 92ff76: mov ebp, eax */
  ebp = eax;
/* 92ff78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ff79: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 92ff7d: call 0x928730 */
  esp -= 4; W32(esp, 0x92ff82u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 92ff82: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 92ff84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92ff85: mov ebx, eax */
  ebx = eax;
/* 92ff87: call 0x928610 */
  esp -= 4; W32(esp, 0x92ff8cu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 92ff8c: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 92ff90: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 92ff93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ff94: call 0x928610 */
  esp -= 4; W32(esp, 0x92ff99u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 92ff99: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 92ff9d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 92ff9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ffa0: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92ffa4: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92ffa9u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92ffa9: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 92ffac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92ffad: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 92ffb1: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92ffb6u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92ffb6: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 92ffba: xor edx, edx */
  edx = 0;
/* 92ffbc: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 92ffbf: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 92ffc2: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92ffc5: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 92ffc9: fchs  */
  ST0 = -ST0;
/* 92ffcb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ffcc: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 92ffd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92ffd1: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 92ffd4: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 92ffd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ffd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92ffda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ffdb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 92ffde: lea edi, [ebx + 0x20] */
  edi = (uint32_t)(ebx + 0x20u);
/* 92ffe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ffe2: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 92ffe6: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 92ffea: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 92ffed: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92fff0: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 92fff3: fchs  */
  ST0 = -ST0;
/* 92fff5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92fff6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92fff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92fff8: lea esi, [ebp + 0x20] */
  esi = (uint32_t)(ebp + 0x20u);
/* 92fffb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 92fffe: add ebp, 0x30 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 930001: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 930002: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 930003: call 0x99b6b0 */
  esp -= 4; W32(esp, 0x930008u); SPILL(); f_99b6b0(); if (g_unwind) return; RELOAD();
/* 930008: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93000c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93000e: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 930011: mov ecx, eax */
  ecx = eax;
/* 930013: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 930016: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93001a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93001d: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 930020: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 930024: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 930027: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 93002a: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93002e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 930032: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 930034: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 930036: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 93003a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93003e: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 930041: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 930044: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 930048: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93004c: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93004f: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 930052: xor ebx, ebx */
  ebx = 0;
/* 930054: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 930058: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93005a: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 93005e: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 930062: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 930066: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93006a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93006e: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 930072: fst dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0);
/* 930076: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93007a: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93007e: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 930082: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930084: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 930088: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 93008c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93008e: fcom dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
/* 930094: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930096: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930099: jne 0x9300d4 */
  if (!zf) goto L_9300d4;
L_93009b: /* 93009b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93009d: fsqrt  */
  ST0 = sqrt(ST0);
/* 93009f: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9300a5: fst dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0);
/* 9300a9: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9300ab: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9300af: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 9300b3: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9300b7: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9300bb: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 9300bf: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9300c3: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9300c7: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 9300cb: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9300cf: jmp 0x930251 */
  goto L_930251;
L_9300d4: /* 9300d4: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9300d6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9300d8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9300de: je 0x93010e */
  if (zf) goto L_93010e;
L_9300e0: /* 9300e0: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 9300e3: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9300e6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9300e9: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 9300ec: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9300ee: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9300f2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9300f5: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9300f7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9300f9: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9300fc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9300fe: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 930102: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 930104: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 930107: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 930109: jmp 0x9301d8 */
  goto L_9301d8;
L_93010e: /* 93010e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 930110: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 930114: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 930116: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 930118: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 93011b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93011d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93011f: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 930123: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930125: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 930128: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93012a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93012c: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 930130: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930132: fcom dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
/* 930136: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930138: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93013b: jne 0x930144 */
  if (!zf) goto L_930144;
L_93013d: /* 93013d: mov ecx, 1 */
  ecx = 0x1u;
/* 930142: jmp 0x930146 */
  goto L_930146;
L_930144: /* 930144: xor ecx, ecx */
  ecx = 0;
L_930146: /* 930146: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 93014a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93014c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93014f: jne 0x930158 */
  if (!zf) goto L_930158;
L_930151: /* 930151: mov edx, 1 */
  edx = 0x1u;
/* 930156: jmp 0x93015a */
  goto L_93015a;
L_930158: /* 930158: xor edx, edx */
  edx = 0;
L_93015a: /* 93015a: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93015e: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 930162: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930164: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930167: jne 0x930170 */
  if (!zf) goto L_930170;
L_930169: /* 930169: mov eax, 1 */
  eax = 0x1u;
/* 93016e: jmp 0x930172 */
  goto L_930172;
L_930170: /* 930170: xor eax, eax */
  eax = 0;
L_930172: /* 930172: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 930174: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 930176: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 930178: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 93017a: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = r;
  }
/* 93017d: mov edx, 0x21312300 */
  edx = 0x21312300u;
/* 930182: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* 930184: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 93018c: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 930194: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 93019c: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 93019f: mov dword ptr [esp + edx*4 + 0x38], 0x3f800000 */
  W32((uint32_t)(esp + edx*4 + 0x38u), 0x3f800000u);
/* 9301a7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9301ab: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9301ae: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9301b2: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9301b5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9301b7: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9301bb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9301bf: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9301c2: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9301c6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9301c8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9301ca: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9301ce: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9301d2: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9301d4: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
L_9301d8: /* 9301d8: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9301db: xor eax, eax */
  eax = 0;
/* 9301dd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9301df: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9301e3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9301e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9301f0: /* 9301f0: fld dword ptr [esp + eax*4 + 0x2c] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x2cu)); FPUSH(v); }
/* 9301f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9301f5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9301f8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9301fa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9301fc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9301fe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930200: jl 0x9301f0 */
  if ((sf != of)) goto L_9301f0;
L_930202: /* 930202: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 930208: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93020a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93020d: jne 0x930237 */
  if (!zf) goto L_930237;
L_93020f: /* 93020f: fsqrt  */
  ST0 = sqrt(ST0);
/* 930211: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 930217: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93021b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93021d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 930221: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 930225: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930227: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93022b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93022f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930231: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 930235: jmp 0x93024f */
  goto L_93024f;
L_930237: /* 930237: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 93023f: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 930247: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
L_93024f: /* 93024f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_930251: /* 930251: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 930255: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 930258: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93025c: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 93025f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 930261: fst dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0);
/* 930265: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 930269: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93026b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93026e: jp 0x9302dc */
  if (pf) goto L_9302dc;
L_930270: /* 930270: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 930273: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 930277: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93027b: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 93027f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930281: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 930285: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 930286: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 930287: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 93028b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93028c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93028d: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 930291: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 930293: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 930297: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 930299: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93029b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93029c: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 9302a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9302a1: fadd dword ptr [esp + 0x68] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x68u)));
/* 9302a5: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 9302a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9302aa: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 9302ae: mov dword ptr [edi + 0x14], ebx */
  W32((uint32_t)(edi + 0x14u), ebx);
/* 9302b1: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9302b5: mov dword ptr [edi + 0x18], ebx */
  W32((uint32_t)(edi + 0x18u), ebx);
/* 9302b8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9302ba: mov dword ptr [edi + 0x1c], ebx */
  W32((uint32_t)(edi + 0x1cu), ebx);
/* 9302bd: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 9302c1: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 9302c5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9302c7: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x9302ccu); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 9302cc: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 9302cf: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9302d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9302d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9302d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9302d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9302d6: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9302d9: ret 8 */
  esp += 12; SPILL(); return;
L_9302dc: /* 9302dc: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 9302e0: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 9302e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9302e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9302e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9302e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9302e7: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9302ea: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9302f0(void) {
  LOAD_REGS();
L_9302f0: /* 9302f0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9302f3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9302f7: xor eax, eax */
  eax = 0;
/* 9302f9: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 9302fd: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 930301: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 930305: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 930309: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 93030d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93030e: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 930310: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 930312: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 930313: mov dword ptr [esp + 0x18], 0x92ff60 */
  W32((uint32_t)(esp + 0x18u), 0x92ff60u);
/* 93031b: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 930323: call 0x929df0 */
  esp -= 4; W32(esp, 0x930328u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 930328: mov eax, 1 */
  eax = 0x1u;
/* 93032d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 930330: ret 4 */
  esp += 8; SPILL(); return;
}

void f_930340(void) {
  LOAD_REGS();
L_930340: /* 930340: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 930346: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 930347: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 930348: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 930349: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93034a: mov edi, dword ptr [esp + 0xc0] */
  edi = R32((uint32_t)(esp + 0xc0u));
/* 930351: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 930353: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 930354: call 0x928730 */
  esp -= 4; W32(esp, 0x930359u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 930359: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 93035c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93035d: mov ebx, eax */
  ebx = eax;
/* 93035f: call 0x928730 */
  esp -= 4; W32(esp, 0x930364u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 930364: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 930366: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 930367: mov esi, eax */
  esi = eax;
/* 930369: call 0x928610 */
  esp -= 4; W32(esp, 0x93036eu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93036e: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 930372: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 930375: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 930376: call 0x928610 */
  esp -= 4; W32(esp, 0x93037bu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93037b: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 93037f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 930381: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 930382: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 930389: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93038eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93038e: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 930391: mov ebp, eax */
  ebp = eax;
/* 930393: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 930394: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 930398: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93039du); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93039d: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 9303a4: xor edi, edi */
  edi = 0;
/* 9303a6: mov dword ptr [ecx + 0xc], edi */
  W32((uint32_t)(ecx + 0xcu), edi);
/* 9303a9: mov dword ptr [ecx + 0x10], edi */
  W32((uint32_t)(ecx + 0x10u), edi);
/* 9303ac: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 9303af: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9303b2: lea ecx, [ebx + 0x20] */
  ecx = (uint32_t)(ebx + 0x20u);
/* 9303b5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9303b8: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 9303bc: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9303bf: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 9303c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9303c8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9303ca: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9303cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9303ce: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 9303d2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9303d4: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 9303d7: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9303da: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 9303dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9303df: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9303e2: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 9303e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9303e7: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9303eb: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9303ee: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 9303f1: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9303f4: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 9303f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9303f9: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 9303fc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9303fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930400: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 930404: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 930407: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 93040a: fld dword ptr [ebx + 0x34] */
  { double v = F32((uint32_t)(ebx + 0x34u)); FPUSH(v); }
/* 93040d: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 930410: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 930413: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 930416: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 930418: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93041b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93041d: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 930420: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930422: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 930424: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 930426: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930428: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 93042c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93042e: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 930431: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 930433: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 930437: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93043a: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 93043e: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 930442: xor ecx, ecx */
  ecx = 0;
/* 930444: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930446: mov ebx, 3 */
  ebx = 0x3u;
/* 93044b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93044d: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 930450: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 930453: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930455: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 930459: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 93045b: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 93045e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 930460: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 930463: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 930465: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 930468: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93046a: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 93046e: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 930471: mov ebp, edi */
  ebp = edi;
/* 930473: fchs  */
  ST0 = -ST0;
/* 930475: fst dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0);
/* 930479: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93047d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93047f: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 930483: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 930487: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93048b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93048d: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 930491: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 930495: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 930499: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93049b: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 93049f: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9304a3: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9304a5: /* 9304a5: fld dword ptr [esp + ecx*4 + 0x3c] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x3cu)); FPUSH(v); }
/* 9304a9: fabs  */
  ST0 = fabs(ST0);
/* 9304ab: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 9304b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9304b3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9304b6: jne 0x930500 */
  if (!zf) goto L_930500;
L_9304b8: /* 9304b8: fld dword ptr [esp + ecx*4 + 0x3c] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x3cu)); FPUSH(v); }
/* 9304bc: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9304c2: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9304c4: fchs  */
  ST0 = -ST0;
/* 9304c6: fsub dword ptr [esp + ecx*4 + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + ecx*4 + 0x48u)));
/* 9304ca: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9304cc: fstp dword ptr [esp + ecx*8 + 0x84] */
  WF32((uint32_t)(esp + ecx*8 + 0x84u), ST0); FPOP();
/* 9304d3: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9304d5: fsub dword ptr [esp + ecx*4 + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + ecx*4 + 0x48u)));
/* 9304d9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9304db: fstp dword ptr [esp + ecx*8 + 0x88] */
  WF32((uint32_t)(esp + ecx*8 + 0x88u), ST0); FPOP();
/* 9304e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9304e4: fld dword ptr [esp + ecx*4 + 0x3c] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x3cu)); FPUSH(v); }
/* 9304e8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9304ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9304f0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 9304f3: jp 0x930516 */
  if (pf) goto L_930516;
L_9304f5: /* 9304f5: mov eax, 1 */
  eax = 0x1u;
/* 9304fa: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 9304fc: or ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 9304fe: jmp 0x930516 */
  goto L_930516;
L_930500: /* 930500: mov dword ptr [esp + ecx*8 + 0x84], 0xff7fffff */
  W32((uint32_t)(esp + ecx*8 + 0x84u), 0xff7fffffu);
/* 93050b: mov dword ptr [esp + ecx*8 + 0x88], 0x7f7fffff */
  W32((uint32_t)(esp + ecx*8 + 0x88u), 0x7f7fffffu);
L_930516: /* 930516: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 930518: fchs  */
  ST0 = -ST0;
/* 93051a: fcom dword ptr [esp + ecx*4 + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + ecx*4 + 0x30u)));
/* 93051e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930520: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930523: jne 0x93052b */
  if (!zf) goto L_93052b;
L_930525: /* 930525: fstp dword ptr [esp + ecx*4 + 0x20] */
  WF32((uint32_t)(esp + ecx*4 + 0x20u), ST0); FPOP();
/* 930529: jmp 0x930567 */
  goto L_930567;
L_93052b: /* 93052b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93052d: fld dword ptr [esp + ecx*4 + 0x30] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x30u)); FPUSH(v); }
/* 930531: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 930533: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930535: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930538: jne 0x930542 */
  if (!zf) goto L_930542;
L_93053a: /* 93053a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 93053c: mov dword ptr [esp + ecx*4 + 0x20], eax */
  W32((uint32_t)(esp + ecx*4 + 0x20u), eax);
/* 930540: jmp 0x930567 */
  goto L_930567;
L_930542: /* 930542: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 930546: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 930547: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93054a: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 93054e: jne 0x930554 */
  if (!zf) goto L_930554;
L_930550: /* 930550: mov edi, ecx */
  edi = ecx;
/* 930552: jmp 0x93055f */
  goto L_93055f;
L_930554: /* 930554: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 930557: jne 0x93055f */
  if (!zf) goto L_93055f;
L_930559: /* 930559: mov eax, ebx */
  eax = ebx;
/* 93055b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 93055d: mov edi, eax */
  edi = eax;
L_93055f: /* 93055f: mov dword ptr [esp + ecx*4 + 0x20], 0 */
  W32((uint32_t)(esp + ecx*4 + 0x20u), 0x0u);
L_930567: /* 930567: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 930568: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 930569: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 93056c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 93056e: jg 0x9304a5 */
  if ((!zf && sf == of)) goto L_9304a5;
L_930574: /* 930574: xor eax, eax */
  eax = 0;
/* 930576: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 93057a: mov dword ptr [esp + 0x6c], ebp */
  W32((uint32_t)(esp + 0x6cu), ebp);
/* 93057e: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 930582: mov dword ptr [esp + 0x1c], 0xff7fffff */
  W32((uint32_t)(esp + 0x1cu), 0xff7fffffu);
/* 93058a: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 93058e: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
L_930592: /* 930592: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
/* 930596: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 93059c: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 9305a0: xor ebp, ebp */
  ebp = 0;
/* 9305a2: mov ecx, 3 */
  ecx = 0x3u;
/* 9305a7: xor ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  cf = 0;
  ebx = r;
  }
/* 9305a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9305b0: /* 9305b0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  ecx = r;
  }
/* 9305b1: mov edx, ebx */
  edx = ebx;
/* 9305b3: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* 9305b5: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9305b8: lea edi, [edx + ecx*2] */
  edi = (uint32_t)(edx + ecx*2);
/* 9305bb: fcom dword ptr [esp + edi*4 + 0x84] */
  fpu_com(ST0, F32((uint32_t)(esp + edi*4 + 0x84u)));
/* 9305c2: lea edx, [esp + edi*4 + 0x84] */
  edx = (uint32_t)(esp + edi*4 + 0x84u);
/* 9305c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9305cb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9305ce: jne 0x9305e3 */
  if (!zf) goto L_9305e3;
L_9305d0: /* 9305d0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9305d2: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 9305d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9305d8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9305db: jne 0x9305e3 */
  if (!zf) goto L_9305e3;
L_9305dd: /* 9305dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9305df: mov ebp, edi */
  ebp = edi;
/* 9305e1: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
L_9305e3: /* 9305e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 9305e5: jne 0x9305b0 */
  if (!zf) goto L_9305b0;
L_9305e7: /* 9305e7: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 9305eb: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 9305ef: fcomp dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
  FPOP();
/* 9305f3: mov ecx, ebp */
  ecx = ebp;
/* 9305f5: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = r;
  }
/* 9305f7: mov eax, 1 */
  eax = 0x1u;
/* 9305fc: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 9305fe: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 930602: mov dword ptr [esp + edx*4 + 0xa0], ebp */
  W32((uint32_t)(esp + edx*4 + 0xa0u), ebp);
/* 930609: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 93060b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93060d: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 930611: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 930614: jp 0x93061a */
  if (pf) goto L_93061a;
L_930616: /* 930616: inc dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x70u), r);
  }
L_93061a: /* 93061a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 93061b: cmp edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93061e: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 930622: jl 0x930592 */
  if ((sf != of)) goto L_930592;
L_930628: /* 930628: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 93062c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 93062d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 930631: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 930635: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 930637: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 93063b: mov dword ptr [esp + 0xb8], 6 */
  W32((uint32_t)(esp + 0xb8u), 0x6u);
/* 930646: mov dword ptr [esp + 0x9c], 0x7f7fffff */
  W32((uint32_t)(esp + 0x9cu), 0x7f7fffffu);
/* 930651: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 930659: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 930661: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 930669: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 930671: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 930679: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 93067d: jge 0x930bdf */
  if ((sf == of)) goto L_930bdf;
L_930683: /* 930683: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 930687: mov ebp, dword ptr [esp + 0x78] */
  ebp = R32((uint32_t)(esp + 0x78u));
/* 93068b: jmp 0x930691 */
  goto L_930691;
L_93068d: /* 93068d: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
L_930691: /* 930691: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 930695: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 930699: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93069c: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 9306a0: mov edx, dword ptr [esp + ecx*4 + 0xa0] */
  edx = R32((uint32_t)(esp + ecx*4 + 0xa0u));
/* 9306a7: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9306ab: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 9306af: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 9306b3: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9306b7: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 9306bb: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 9306bf: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9306c3: jne 0x9307d9 */
  if (!zf) goto L_9307d9;
L_9306c9: /* 9306c9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9306cb: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9306cf: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 9306d3: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9306d7: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 9306db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9306dd: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9306e1: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9306e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9306e7: jne 0x930749 */
  if (!zf) goto L_930749;
L_9306e9: /* 9306e9: fchs  */
  ST0 = -ST0;
/* 9306eb: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 9306ee: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9306f0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9306f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9306f4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9306f7: jp 0x9306fd */
  if (pf) goto L_9306fd;
L_9306f9: /* 9306f9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9306fb: jmp 0x930700 */
  goto L_930700;
L_9306fd: /* 9306fd: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_930700: /* 930700: fcomp dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
  FPOP();
/* 930704: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930706: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 930709: jp 0x930713 */
  if (pf) goto L_930713;
L_93070b: /* 93070b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93070d: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 930711: jmp 0x930726 */
  goto L_930726;
L_930713: /* 930713: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 930716: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 930718: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93071a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93071c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93071f: jnp 0x930726 */
  if (!pf) goto L_930726;
L_930721: /* 930721: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930723: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_930726: /* 930726: fld dword ptr [esp + edx*4 + 0x84] */
  { double v = F32((uint32_t)(esp + edx*4 + 0x84u)); FPUSH(v); }
/* 93072d: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 930733: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 930735: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 930737: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930739: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93073c: jnp 0x9308c2 */
  if (!pf) goto L_9308c2;
L_930742: /* 930742: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930744: jmp 0x930825 */
  goto L_930825;
L_930749: /* 930749: fld dword ptr [esp + edi*4 + 0x3c] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x3cu)); FPUSH(v); }
/* 93074d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93074f: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 930751: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 930757: fcom dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
/* 93075d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93075f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930762: jne 0x930980 */
  if (!zf) goto L_930980;
L_930768: /* 930768: fld dword ptr [esp + edi*4 + 0x30] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x30u)); FPUSH(v); }
/* 93076c: fmul dword ptr [esp + edi*4 + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + edi*4 + 0x3cu)));
/* 930770: fsubrp st(2) */
  STI(2) = ST0 - STI(2);
  FPOP();
/* 930772: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 930778: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 93077a: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 93077c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93077e: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 930781: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 930783: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 930785: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930787: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93078a: jp 0x930790 */
  if (pf) goto L_930790;
L_93078c: /* 93078c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93078e: jmp 0x930793 */
  goto L_930793;
L_930790: /* 930790: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_930793: /* 930793: fcomp dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
  FPOP();
/* 930797: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930799: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93079c: jp 0x9307a6 */
  if (pf) goto L_9307a6;
L_93079e: /* 93079e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9307a0: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9307a4: jmp 0x9307b9 */
  goto L_9307b9;
L_9307a6: /* 9307a6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 9307a9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9307ab: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9307ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9307af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9307b2: jnp 0x9307b9 */
  if (!pf) goto L_9307b9;
L_9307b4: /* 9307b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9307b6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_9307b9: /* 9307b9: fld dword ptr [esp + edx*4 + 0x84] */
  { double v = F32((uint32_t)(esp + edx*4 + 0x84u)); FPUSH(v); }
/* 9307c0: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 9307c6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9307c8: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9307ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9307cc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9307cf: jnp 0x930913 */
  if (!pf) goto L_930913;
L_9307d5: /* 9307d5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9307d7: jmp 0x930825 */
  goto L_930825;
L_9307d9: /* 9307d9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9307dc: jne 0x930b85 */
  if (!zf) goto L_930b85;
L_9307e2: /* 9307e2: fld dword ptr [esp + edi*4 + 0x20] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x20u)); FPUSH(v); }
/* 9307e6: fmul dword ptr [esp + edi*4 + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + edi*4 + 0x3cu)));
/* 9307ea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9307ec: fabs  */
  ST0 = fabs(ST0);
/* 9307ee: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 9307f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9307f6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9307f9: jnp 0x930a1c */
  if (!pf) goto L_930a1c;
L_9307ff: /* 9307ff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 930805: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930807: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93080a: je 0x930abc */
  if (zf) goto L_930abc;
L_930810: /* 930810: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 930813: fcomp dword ptr [esp + edx*4 + 0x84] */
  fpu_com(ST0, F32((uint32_t)(esp + edx*4 + 0x84u)));
  FPOP();
/* 93081a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93081c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93081f: jnp 0x930b16 */
  if (!pf) goto L_930b16;
L_930825: /* 930825: mov eax, dword ptr [esp + edx*4 + 0x84] */
  eax = R32((uint32_t)(esp + edx*4 + 0x84u));
/* 93082c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 930830: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 930834: mov ecx, edx */
  ecx = edx;
/* 930836: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = r;
  }
/* 930838: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 93083a: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 93083d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 930840: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 930842: jne 0x930868 */
  if (!zf) goto L_930868;
L_930844: /* 930844: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 930845: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 930848: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 93084c: mov dword ptr [esp + ecx*4 + 0x20], 0 */
  W32((uint32_t)(esp + ecx*4 + 0x20u), 0x0u);
/* 930854: je 0x93089c */
  if (zf) goto L_93089c;
L_930856: /* 930856: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 930859: jne 0x93089e */
  if (!zf) goto L_93089e;
L_93085b: /* 93085b: mov edx, 3 */
  edx = 0x3u;
/* 930860: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 930862: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 930864: mov edi, edx */
  edi = edx;
/* 930866: jmp 0x93089e */
  goto L_93089e;
L_930868: /* 930868: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 93086c: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 930870: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 930874: fild dword ptr [esp + 0x68] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 930878: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 930879: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93087c: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 930880: fmul dword ptr [edx + ecx*4 + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + ecx*4 + 0x10u)));
/* 930884: fstp dword ptr [esp + ecx*4 + 0x20] */
  WF32((uint32_t)(esp + ecx*4 + 0x20u), ST0); FPOP();
/* 930888: jne 0x930897 */
  if (!zf) goto L_930897;
L_93088a: /* 93088a: mov eax, 3 */
  eax = 0x3u;
/* 93088f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 930891: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 930893: mov edi, eax */
  edi = eax;
/* 930895: jmp 0x93089e */
  goto L_93089e;
L_930897: /* 930897: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93089a: jne 0x93089e */
  if (!zf) goto L_93089e;
L_93089c: /* 93089c: mov edi, ecx */
  edi = ecx;
L_93089e: /* 93089e: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 9308a2: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9308a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9308a7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9308a9: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 9308ad: jl 0x93068d */
  if ((sf != of)) goto L_93068d;
L_9308b3: /* 9308b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9308b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9308b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9308b6: xor eax, eax */
  eax = 0;
/* 9308b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9308b9: add esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9308bf: ret 8 */
  esp += 12; SPILL(); return;
L_9308c2: /* 9308c2: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9308c6: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 9308ce: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9308d0: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 9308d4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9308d8: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9308dc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9308de: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 9308e2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9308e6: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 9308ea: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 9308ee: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9308f2: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 9308f6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9308fa: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9308fe: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 930902: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 930906: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 93090a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93090e: jmp 0x930bd9 */
  goto L_930bd9;
L_930913: /* 930913: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 930917: lea eax, [esp + edi*4 + 0x10] */
  eax = (uint32_t)(esp + edi*4 + 0x10u);
/* 93091b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93091d: mov dword ptr [esp + 0x60], 1 */
  W32((uint32_t)(esp + 0x60u), 0x1u);
/* 930925: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 930929: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93092d: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 930931: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930933: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 930937: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93093b: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93093f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930941: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 930945: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 930949: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 93094b: mov dword ptr [esp + edi*4 + 0x20], edx */
  W32((uint32_t)(esp + edi*4 + 0x20u), edx);
/* 93094f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930951: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 930955: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 930959: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93095d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 930961: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 930965: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 930969: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93096d: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 930971: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 930975: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 93097b: jmp 0x930bd9 */
  goto L_930bd9;
L_930980: /* 930980: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930982: lea eax, [esp + edi*4 + 0x10] */
  eax = (uint32_t)(esp + edi*4 + 0x10u);
/* 930986: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930988: lea edx, [esp + edx*4 + 0x84] */
  edx = (uint32_t)(esp + edx*4 + 0x84u);
/* 93098f: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 930993: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930997: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 93099b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93099f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9309a3: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9309a7: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 9309ab: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9309af: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9309b3: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9309b7: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 9309bb: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9309bf: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 9309c1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9309c5: mov dword ptr [esp + edi*4 + 0x20], ebx */
  W32((uint32_t)(esp + edi*4 + 0x20u), ebx);
/* 9309c9: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 9309cd: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9309d1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9309d5: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 9309d9: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9309dd: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9309e1: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 9309e5: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9309e9: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 9309ef: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9309f1: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 9309f4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9309f6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9309f8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9309fb: jne 0x930a0c */
  if (!zf) goto L_930a0c;
L_9309fd: /* 9309fd: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9309ff: mov dword ptr [esp + 0x60], 1 */
  W32((uint32_t)(esp + 0x60u), 0x1u);
/* 930a07: jmp 0x930bd1 */
  goto L_930bd1;
L_930a0c: /* 930a0c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 930a0f: mov dword ptr [esp + 0x60], 1 */
  W32((uint32_t)(esp + 0x60u), 0x1u);
/* 930a17: jmp 0x930bd1 */
  goto L_930bd1;
L_930a1c: /* 930a1c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930a1e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 930a26: fld dword ptr [esp + edi*4 + 0x48] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x48u)); FPUSH(v); }
/* 930a2a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 930a32: fsub dword ptr [esp + edi*4 + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi*4 + 0x20u)));
/* 930a36: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 930a3e: lea edx, [esp + edx*4 + 0x84] */
  edx = (uint32_t)(esp + edx*4 + 0x84u);
/* 930a45: fstp dword ptr [esp + edi*4 + 0x10] */
  WF32((uint32_t)(esp + edi*4 + 0x10u), ST0); FPOP();
/* 930a49: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 930a4d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930a51: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 930a55: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 930a59: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930a5d: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 930a61: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 930a65: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930a69: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 930a6d: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 930a71: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 930a73: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 930a77: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 930a7b: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 930a7f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 930a83: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 930a87: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 930a8b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 930a8f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 930a91: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 930a94: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 930a96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930a98: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930a9b: jne 0x930aac */
  if (!zf) goto L_930aac;
L_930a9d: /* 930a9d: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 930a9f: mov dword ptr [esp + 0x60], 2 */
  W32((uint32_t)(esp + 0x60u), 0x2u);
/* 930aa7: jmp 0x930bd1 */
  goto L_930bd1;
L_930aac: /* 930aac: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 930aaf: mov dword ptr [esp + 0x60], 2 */
  W32((uint32_t)(esp + 0x60u), 0x2u);
/* 930ab7: jmp 0x930bd1 */
  goto L_930bd1;
L_930abc: /* 930abc: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 930ac0: lea eax, [esp + edi*4 + 0x20] */
  eax = (uint32_t)(esp + edi*4 + 0x20u);
/* 930ac4: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930ac8: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 930acc: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 930ad0: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930ad4: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 930ad8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 930adc: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930ae0: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 930ae4: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 930ae8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 930aea: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 930aec: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 930af0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 930af2: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 930af6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 930af8: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 930afc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 930afe: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 930b00: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 930b04: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 930b08: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 930b0c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 930b10: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 930b14: jmp 0x930b73 */
  goto L_930b73;
L_930b16: /* 930b16: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 930b19: lea eax, [esp + edi*4 + 0x20] */
  eax = (uint32_t)(esp + edi*4 + 0x20u);
/* 930b1d: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 930b21: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930b23: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 930b27: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 930b2b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 930b2f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 930b33: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930b35: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 930b39: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 930b3d: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 930b41: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 930b45: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 930b47: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 930b4b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 930b4f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 930b51: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 930b55: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 930b59: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 930b5b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 930b5f: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 930b63: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 930b67: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 930b6b: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 930b6f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_930b73: /* 930b73: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 930b77: mov dword ptr [esp + 0x60], 2 */
  W32((uint32_t)(esp + 0x60u), 0x2u);
/* 930b7f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 930b83: jmp 0x930bd9 */
  goto L_930bd9;
L_930b85: /* 930b85: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 930b89: lea edx, [esp + edx*4 + 0x84] */
  edx = (uint32_t)(esp + edx*4 + 0x84u);
/* 930b90: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930b94: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 930b98: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 930b9c: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 930ba0: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930ba4: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 930ba8: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 930bac: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 930bb0: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 930bb4: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 930bb8: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 930bbc: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 930bbe: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 930bc1: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 930bc3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930bc5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930bc8: jne 0x930bce */
  if (!zf) goto L_930bce;
L_930bca: /* 930bca: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 930bcc: jmp 0x930bd1 */
  goto L_930bd1;
L_930bce: /* 930bce: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_930bd1: /* 930bd1: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 930bd5: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
L_930bd9: /* 930bd9: cmp ecx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 930bdd: jl 0x930bee */
  if ((sf != of)) goto L_930bee;
L_930bdf: /* 930bdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 930be0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 930be1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 930be2: xor eax, eax */
  eax = 0;
/* 930be4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 930be5: add esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 930beb: ret 8 */
  esp += 12; SPILL(); return;
L_930bee: /* 930bee: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 930bf2: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 930bf6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 930bfa: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 930bfe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930c00: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 930c04: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 930c08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930c0a: fcom dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
/* 930c10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930c12: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930c15: jne 0x930c49 */
  if (!zf) goto L_930c49;
L_930c17: /* 930c17: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 930c19: fsqrt  */
  ST0 = sqrt(ST0);
/* 930c1b: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 930c21: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 930c25: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930c27: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 930c2b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 930c2f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930c31: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 930c35: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 930c39: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930c3b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 930c3f: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 930c41: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 930c44: jmp 0x930e25 */
  goto L_930e25;
L_930c49: /* 930c49: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 930c4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930c4f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 930c55: mov edi, dword ptr [esp + 0x78] */
  edi = R32((uint32_t)(esp + 0x78u));
/* 930c59: xor ebp, ebp */
  ebp = 0;
/* 930c5b: mov dword ptr [esp + 0x54], 0xff7fffff */
  W32((uint32_t)(esp + 0x54u), 0xff7fffffu);
/* 930c63: xor ecx, ecx */
  ecx = 0;
/* 930c65: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
L_930c68: /* 930c68: fld dword ptr [esp + ecx*4 + 0x48] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x48u)); FPUSH(v); }
/* 930c6c: fabs  */
  ST0 = fabs(ST0);
/* 930c6e: fld dword ptr [esp + ecx*4 + 0x3c] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x3cu)); FPUSH(v); }
/* 930c72: fabs  */
  ST0 = fabs(ST0);
/* 930c74: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 930c76: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 930c78: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 930c7b: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 930c7d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 930c7f: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 930c83: fcomp dword ptr [esp + 0x54] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x54u)));
  FPOP();
/* 930c87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930c89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930c8c: jne 0x930cb9 */
  if (!zf) goto L_930cb9;
L_930c8e: /* 930c8e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 930c92: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930c94: fld dword ptr [esp + ecx*4 + 0x48] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x48u)); FPUSH(v); }
/* 930c98: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 930c9c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 930ca2: mov ebp, ecx */
  ebp = ecx;
/* 930ca4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930ca6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930ca9: jne 0x930cb3 */
  if (!zf) goto L_930cb3;
L_930cab: /* 930cab: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 930cb1: jmp 0x930cb9 */
  goto L_930cb9;
L_930cb3: /* 930cb3: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
L_930cb9: /* 930cb9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 930cba: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 930cbd: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 930cc0: jl 0x930c68 */
  if ((sf != of)) goto L_930c68;
L_930cc2: /* 930cc2: mov ebx, dword ptr [esp + 0x74] */
  ebx = R32((uint32_t)(esp + 0x74u));
/* 930cc6: xor edi, edi */
  edi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
L_930cc8: /* 930cc8: mov ecx, edi */
  ecx = edi;
/* 930cca: mov eax, 1 */
  eax = 0x1u;
/* 930ccf: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 930cd1: mov edx, 1 */
  edx = 0x1u;
/* 930cd6: mov dword ptr [esp + edi*4 + 0x30], 0 */
  W32((uint32_t)(esp + edi*4 + 0x30u), 0x0u);
/* 930cde: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 930ce1: fld dword ptr [esp + eax*4 + 0x3c] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x3cu)); FPUSH(v); }
/* 930ce5: mov ecx, eax */
  ecx = eax;
/* 930ce7: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 930ce9: fchs  */
  ST0 = -ST0;
/* 930ceb: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 930cee: mov ecx, dword ptr [esp + edx*4 + 0x3c] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x3cu));
/* 930cf2: mov dword ptr [esp + eax*4 + 0x30], ecx */
  W32((uint32_t)(esp + eax*4 + 0x30u), ecx);
/* 930cf6: fstp dword ptr [esp + edx*4 + 0x30] */
  WF32((uint32_t)(esp + edx*4 + 0x30u), ST0); FPOP();
/* 930cfa: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 930cfe: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 930d02: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 930d06: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 930d0a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930d0c: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 930d10: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 930d14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930d16: fcom dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
/* 930d1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930d1e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930d21: jne 0x930e01 */
  if (!zf) goto L_930e01;
L_930d27: /* 930d27: fsqrt  */
  ST0 = sqrt(ST0);
/* 930d29: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 930d2f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 930d33: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930d35: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 930d39: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 930d3d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930d3f: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 930d43: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 930d47: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 930d49: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 930d4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 930d4f: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 930d53: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 930d57: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 930d5b: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 930d5f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930d61: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 930d65: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 930d69: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930d6b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 930d6d: fabs  */
  ST0 = fabs(ST0);
/* 930d6f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 930d73: fabs  */
  ST0 = fabs(ST0);
/* 930d75: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 930d77: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 930d79: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 930d7c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 930d80: fabs  */
  ST0 = fabs(ST0);
/* 930d82: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 930d86: fmul dword ptr [ebx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x14u)));
/* 930d89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930d8b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 930d8f: fabs  */
  ST0 = fabs(ST0);
/* 930d91: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 930d95: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 930d98: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930d9a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 930d9c: fcom dword ptr [esp + 0x54] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x54u)));
/* 930da0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930da2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 930da5: jne 0x930dff */
  if (!zf) goto L_930dff;
L_930da7: /* 930da7: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 930dab: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 930daf: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 930db3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 930db9: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 930dbd: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 930dc1: lea ebp, [edi + 3] */
  ebp = (uint32_t)(edi + 0x3u);
/* 930dc4: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 930dc8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930dca: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 930dce: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 930dd1: jp 0x930e03 */
  if (pf) goto L_930e03;
L_930dd3: /* 930dd3: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 930dd7: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 930ddd: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 930de1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 930de5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 930deb: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 930def: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 930df3: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 930df9: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 930dfd: jmp 0x930e03 */
  goto L_930e03;
L_930dff: /* 930dff: fstp st(0) */
  STI(0) = ST0; FPOP();
L_930e01: /* 930e01: fstp st(0) */
  STI(0) = ST0; FPOP();
L_930e03: /* 930e03: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 930e04: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 930e07: jl 0x930cc8 */
  if ((sf != of)) goto L_930cc8;
L_930e0d: /* 930e0d: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 930e10: jge 0x930e18 */
  if ((sf == of)) goto L_930e18;
L_930e12: /* 930e12: fstp dword ptr [esp + ebp*4 + 0x10] */
  WF32((uint32_t)(esp + ebp*4 + 0x10u), ST0); FPOP();
/* 930e16: jmp 0x930e1a */
  goto L_930e1a;
L_930e18: /* 930e18: fstp st(0) */
  STI(0) = ST0; FPOP();
L_930e1a: /* 930e1a: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 930e1e: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 930e22: fsub dword ptr [edx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x10u)));
L_930e25: /* 930e25: mov edi, dword ptr [esp + 0xc4] */
  edi = R32((uint32_t)(esp + 0xc4u));
/* 930e2c: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 930e30: fcomp dword ptr [esp + 0x7c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x7cu)));
  FPOP();
/* 930e34: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 930e36: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 930e39: jp 0x930e73 */
  if (pf) goto L_930e73;
L_930e3b: /* 930e3b: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 930e42: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 930e46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 930e47: xor eax, eax */
  eax = 0;
/* 930e49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 930e4a: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 930e4d: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 930e50: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 930e53: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 930e57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 930e58: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 930e5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 930e5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 930e5e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 930e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 930e61: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 930e65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 930e66: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 930e6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 930e6b: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x930e70u); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 930e70: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_930e73: /* 930e73: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 930e76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 930e77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 930e78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 930e79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 930e7a: add esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 930e80: ret 8 */
  esp += 12; SPILL(); return;
}

void f_930e90(void) {
  LOAD_REGS();
L_930e90: /* 930e90: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 930e93: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 930e97: xor eax, eax */
  eax = 0;
/* 930e99: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 930e9d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 930ea1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 930ea5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 930ea9: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 930ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 930eae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 930eb0: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 930eb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 930eb3: mov dword ptr [esp + 0x18], 0x930340 */
  W32((uint32_t)(esp + 0x18u), 0x930340u);
/* 930ebb: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 930ec3: call 0x929df0 */
  esp -= 4; W32(esp, 0x930ec8u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 930ec8: mov eax, 1 */
  eax = 0x1u;
/* 930ecd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 930ed0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_930ee0(void) {
  LOAD_REGS();
L_930ee0: /* 930ee0: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 930ee6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 930ee7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 930ee8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 930ee9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 930eea: mov edi, dword ptr [esp + 0x114] */
  edi = R32((uint32_t)(esp + 0x114u));
/* 930ef1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 930ef3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 930ef4: call 0x928730 */
  esp -= 4; W32(esp, 0x930ef9u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 930ef9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 930efc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 930efd: mov ebx, eax */
  ebx = eax;
/* 930eff: call 0x928730 */
  esp -= 4; W32(esp, 0x930f04u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 930f04: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 930f06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 930f07: mov esi, eax */
  esi = eax;
/* 930f09: call 0x928610 */
  esp -= 4; W32(esp, 0x930f0eu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 930f0e: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 930f12: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 930f15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 930f16: call 0x928610 */
  esp -= 4; W32(esp, 0x930f1bu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 930f1b: fadd dword ptr [esp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x58u)));
/* 930f1f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 930f21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 930f22: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 930f29: call 0x9287f0 */
  esp -= 4; W32(esp, 0x930f2eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 930f2e: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 930f31: mov ebp, eax */
  ebp = eax;
/* 930f33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 930f34: mov dword ptr [esp + 0x84], ebp */
  W32((uint32_t)(esp + 0x84u), ebp);
/* 930f3b: call 0x9287f0 */
  esp -= 4; W32(esp, 0x930f40u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 930f40: mov ecx, eax */
  ecx = eax;
/* 930f42: mov eax, dword ptr [esp + 0x118] */
  eax = R32((uint32_t)(esp + 0x118u));
/* 930f49: xor edx, edx */
  edx = 0;
/* 930f4b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 930f4e: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 930f51: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 930f54: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 930f56: lea eax, [ebx + 0x20] */
  eax = (uint32_t)(ebx + 0x20u);
/* 930f59: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 930f5c: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 930f60: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 930f63: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 930f6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930f6c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 930f6f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 930f72: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930f74: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 930f78: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 930f7b: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 930f7e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 930f81: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 930f84: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930f86: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 930f88: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 930f8b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930f8d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 930f91: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 930f94: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 930f97: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 930f9a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 930f9d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930f9f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 930fa1: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 930fa4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930fa6: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 930faa: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 930fad: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 930fb0: fld dword ptr [ebx + 0x34] */
  { double v = F32((uint32_t)(ebx + 0x34u)); FPUSH(v); }
/* 930fb3: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 930fb6: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 930fb9: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 930fbc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 930fbe: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 930fc1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 930fc3: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 930fc6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930fc8: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 930fca: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 930fcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930fce: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 930fd2: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 930fd4: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 930fd7: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 930fdb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 930fdd: mov dword ptr [esp + 0x50], 1 */
  W32((uint32_t)(esp + 0x50u), 0x1u);
/* 930fe5: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 930fe8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930fea: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 930fec: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 930fef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 930ff1: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 930ff5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 930ff7: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 930ffa: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 930ffc: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 930fff: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 931001: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 931004: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931006: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 93100a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93100e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 931014: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931016: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931019: je 0x931023 */
  if (zf) goto L_931023;
L_93101b: /* 93101b: mov dword ptr [esp + 0x50], 0xffffffff */
  W32((uint32_t)(esp + 0x50u), 0xffffffffu);
L_931023: /* 931023: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 931026: fchs  */
  ST0 = -ST0;
/* 931028: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 93102c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 931030: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931032: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 931036: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 93103a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93103e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931040: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 931044: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931048: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 93104c: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 931050: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 931054: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 931058: fabs  */
  ST0 = fabs(ST0);
/* 93105a: fst dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0);
/* 931061: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 931067: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931069: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93106c: jne 0x93109b */
  if (!zf) goto L_93109b;
L_93106e: /* 93106e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 931074: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* 931078: fild dword ptr [esp + 0x50] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 93107c: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 93107f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931081: fchs  */
  ST0 = -ST0;
/* 931083: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 931087: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 931089: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 93108d: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 931091: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931093: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 931097: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931099: jmp 0x9310ab */
  goto L_9310ab;
L_93109b: /* 93109b: mov dword ptr [esp + 0x6c], 0xff7fffff */
  W32((uint32_t)(esp + 0x6cu), 0xff7fffffu);
/* 9310a3: mov dword ptr [esp + 0x70], 0x7f7fffff */
  W32((uint32_t)(esp + 0x70u), 0x7f7fffffu);
L_9310ab: /* 9310ab: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 9310ae: fchs  */
  ST0 = -ST0;
/* 9310b0: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9310b4: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9310b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9310b8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9310bb: jp 0x9310c3 */
  if (pf) goto L_9310c3;
L_9310bd: /* 9310bd: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9310c1: jmp 0x9310ec */
  goto L_9310ec;
L_9310c3: /* 9310c3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9310c5: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9310c9: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 9310cc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9310ce: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9310d1: jne 0x9310dc */
  if (!zf) goto L_9310dc;
L_9310d3: /* 9310d3: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 9310d6: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 9310da: jmp 0x9310ec */
  goto L_9310ec;
L_9310dc: /* 9310dc: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 9310e4: mov dword ptr [esp + 0x54], 1 */
  W32((uint32_t)(esp + 0x54u), 0x1u);
L_9310ec: /* 9310ec: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9310f0: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9310f4: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 9310f8: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9310fc: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 931100: fadd dword ptr [esp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x58u)));
/* 931104: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 93110b: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 931112: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 931116: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 93111a: fcomp dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
  FPOP();
/* 931120: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931122: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931125: jne 0x93119b */
  if (!zf) goto L_93119b;
L_931127: /* 931127: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93112b: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 93112f: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 931133: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 931137: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931139: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 93113c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93113e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 931140: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 931144: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 931148: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93114c: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 931150: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931152: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 931154: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 931156: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 931158: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 93115c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93115e: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 931160: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 931166: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931168: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93116b: jne 0x931197 */
  if (!zf) goto L_931197;
L_93116d: /* 93116d: fsqrt  */
  ST0 = sqrt(ST0);
/* 93116f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 931175: fdiv dword ptr [esp + 0x60] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x60u)));
/* 931179: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93117b: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 93117d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93117f: fchs  */
  ST0 = -ST0;
/* 931181: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 931185: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 931187: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 931189: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 93118b: fchs  */
  ST0 = -ST0;
/* 93118d: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 931191: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 931193: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931195: jmp 0x9311ab */
  goto L_9311ab;
L_931197: /* 931197: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931199: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93119b: /* 93119b: mov dword ptr [esp + 0x74], 0x7f7fffff */
  W32((uint32_t)(esp + 0x74u), 0x7f7fffffu);
/* 9311a3: mov dword ptr [esp + 0x78], 0x7f7fffff */
  W32((uint32_t)(esp + 0x78u), 0x7f7fffffu);
L_9311ab: /* 9311ab: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 9311ae: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9311b2: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9311b6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9311ba: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 9311be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9311c0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9311c2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9311c4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9311c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9311c8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9311ca: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9311cd: jne 0x9311d4 */
  if (!zf) goto L_9311d4;
L_9311cf: /* 9311cf: or dword ptr [esp + 0x54], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + 0x54u), r);
  }
L_9311d4: /* 9311d4: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 9311d8: fcomp dword ptr [esp + 0x74] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x74u)));
  FPOP();
/* 9311dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9311de: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9311e1: jne 0x9311ea */
  if (!zf) goto L_9311ea;
L_9311e3: /* 9311e3: mov ecx, 1 */
  ecx = 0x1u;
/* 9311e8: jmp 0x9311ec */
  goto L_9311ec;
L_9311ea: /* 9311ea: xor ecx, ecx */
  ecx = 0;
L_9311ec: /* 9311ec: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 9311ee: mov eax, ecx */
  eax = ecx;
/* 9311f0: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9311f3: not eax */
  eax = ~eax;
/* 9311f5: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9311f8: lea ebp, [ecx + 1] */
  ebp = (uint32_t)(ecx + 0x1u);
/* 9311fb: fld dword ptr [esp + ebp*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x6cu)); FPUSH(v); }
/* 9311ff: mov edi, eax */
  edi = eax;
/* 931201: fcomp dword ptr [esp + edi*4 + 0x6c] */
  fpu_com(ST0, F32((uint32_t)(esp + edi*4 + 0x6cu)));
  FPOP();
/* 931205: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 93120c: mov dword ptr [esp + 0x98], ebp */
  W32((uint32_t)(esp + 0x98u), ebp);
/* 931213: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 931216: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931218: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93121b: jne 0x931224 */
  if (!zf) goto L_931224;
L_93121d: /* 93121d: mov eax, 1 */
  eax = 0x1u;
/* 931222: jmp 0x931226 */
  goto L_931226;
L_931224: /* 931224: xor eax, eax */
  eax = 0;
L_931226: /* 931226: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 931228: mov ecx, eax */
  ecx = eax;
/* 93122a: not ecx */
  ecx = ~ecx;
/* 93122c: mov edx, ecx */
  edx = ecx;
/* 93122e: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 931230: mov ebp, eax */
  ebp = eax;
/* 931232: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 931234: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 931236: and eax, dword ptr [esp + 0x98] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x98u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 93123d: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 93123f: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 931241: mov edi, eax */
  edi = eax;
/* 931243: fld dword ptr [esp + edi*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x6cu)); FPUSH(v); }
/* 931247: mov dword ptr [esp + 0x98], edx */
  W32((uint32_t)(esp + 0x98u), edx);
/* 93124e: fcomp dword ptr [esp + ebx*4 + 0x6c] */
  fpu_com(ST0, F32((uint32_t)(esp + ebx*4 + 0x6cu)));
  FPOP();
/* 931252: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931254: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931257: jne 0x931260 */
  if (!zf) goto L_931260;
L_931259: /* 931259: mov ecx, 1 */
  ecx = 0x1u;
/* 93125e: jmp 0x931262 */
  goto L_931262;
L_931260: /* 931260: xor ecx, ecx */
  ecx = 0;
L_931262: /* 931262: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 931266: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 931268: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 93126e: mov eax, ecx */
  eax = ecx;
/* 931270: not eax */
  eax = ~eax;
/* 931272: mov edx, ecx */
  edx = ecx;
/* 931274: mov ebp, eax */
  ebp = eax;
/* 931276: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93127a: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 93127c: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 93127e: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 931280: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 931282: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 931284: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 931288: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 93128a: xor edi, edi */
  edi = 0;
/* 93128c: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* 931293: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 93129a: mov dword ptr [esp + 0xa4], 4 */
  W32((uint32_t)(esp + 0xa4u), 0x4u);
/* 9312a5: mov dword ptr [esp + 0x7c], 0x7f7fffff */
  W32((uint32_t)(esp + 0x7cu), 0x7f7fffffu);
/* 9312ad: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9312b5: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9312bd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9312c5: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 9312c9: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 9312cd: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 9312d1: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
L_9312d5: /* 9312d5: mov ecx, dword ptr [esp + edi*4 + 0x94] */
  ecx = R32((uint32_t)(esp + edi*4 + 0x94u));
/* 9312dc: fld dword ptr [esp + ecx*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x6cu)); FPUSH(v); }
/* 9312e0: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 9312e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9312e6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9312e9: jnp 0x93130a */
  if (!pf) goto L_93130a;
L_9312eb: /* 9312eb: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 9312ef: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9312f2: mov edx, 0 */
  edx = 0x0u;
/* 9312f7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9312fa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9312fb: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9312fd: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 9312ff: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 931301: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 931303: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 931306: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 931308: je 0x931314 */
  if (zf) goto L_931314;
L_93130a: /* 93130a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 93130b: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93130e: jl 0x9312d5 */
  if ((sf != of)) goto L_9312d5;
L_931310: /* 931310: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
L_931314: /* 931314: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 931317: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 93131b: jge 0x931df4 */
  if ((sf == of)) goto L_931df4;
L_931321: /* 931321: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* 931328: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 93132c: mov ecx, edi */
  ecx = edi;
/* 93132e: jmp 0x931334 */
  goto L_931334;
L_931330: /* 931330: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
L_931334: /* 931334: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931336: mov ebp, dword ptr [esp + ecx*4 + 0x94] */
  ebp = R32((uint32_t)(esp + ecx*4 + 0x94u));
/* 93133d: jne 0x93173a */
  if (!zf) goto L_93173a;
L_931343: /* 931343: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 931345: jne 0x931697 */
  if (!zf) goto L_931697;
L_93134b: /* 93134b: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 931352: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 931358: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93135a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93135d: jne 0x931609 */
  if (!zf) goto L_931609;
L_931363: /* 931363: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 93136a: fcom dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
/* 931370: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931372: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931375: jne 0x9315a1 */
  if (!zf) goto L_9315a1;
L_93137b: /* 93137b: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 93137e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931380: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 931382: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 931386: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 93138a: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93138e: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 931392: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931394: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 931398: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 93139c: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9313a0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9313a2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9313a6: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 9313aa: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9313ae: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 9313b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9313b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9313b6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9313b8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9313ba: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9313bc: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9313be: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9313c0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9313c2: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 9313c9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9313cb: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9313cd: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9313cf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9313d1: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9313d3: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9313d5: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9313d7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9313d9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9313db: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 9313e2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9313e4: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9313e6: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 9313ea: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9313ec: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 9313f2: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 9313f6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9313f8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9313fa: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 9313fc: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9313fe: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 931400: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* 931402: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 931404: fstp dword ptr [esp + 0xc8] */
  WF32((uint32_t)(esp + 0xc8u), ST0); FPOP();
/* 93140b: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 93140d: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 93140f: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 931413: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 931415: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 931417: fstp dword ptr [esp + 0xcc] */
  WF32((uint32_t)(esp + 0xccu), ST0); FPOP();
/* 93141e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931420: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 931427: fld dword ptr [esp + ebp*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x6cu)); FPUSH(v); }
/* 93142b: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 93142e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 931430: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931432: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931435: jne 0x931444 */
  if (!zf) goto L_931444;
L_931437: /* 931437: mov eax, dword ptr [esp + ebp*4 + 0x6c] */
  eax = R32((uint32_t)(esp + ebp*4 + 0x6cu));
/* 93143b: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 931442: jmp 0x93144e */
  goto L_93144e;
L_931444: /* 931444: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 931447: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
L_93144e: /* 93144e: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 931455: lea edx, [esp + 0xc0] */
  edx = (uint32_t)(esp + 0xc0u);
/* 93145c: fadd dword ptr [0xa214dc] */
  ST0 = ST0 + (F32((uint32_t)(0xa214dcu)));
/* 931462: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 931463: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 931465: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 931468: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93146c: lea eax, [esp + 0xb8] */
  eax = (uint32_t)(esp + 0xb8u);
/* 931473: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 931477: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 93147d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 931480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 931481: call 0x93f8e0 */
  esp -= 4; W32(esp, 0x931486u); SPILL(); f_93f8e0(); if (g_unwind) return; RELOAD();
/* 931486: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 93148d: mov ecx, eax */
  ecx = eax;
/* 93148f: fstp dword ptr [esp + ecx*4 + 0xbc] */
  WF32((uint32_t)(esp + ecx*4 + 0xbcu), ST0); FPOP();
/* 931496: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 931499: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93149d: mov edi, ecx */
  edi = ecx;
/* 93149f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9314a0: fstp dword ptr [esp + ecx*4 + 0xa8] */
  WF32((uint32_t)(esp + ecx*4 + 0xa8u), ST0); FPOP();
/* 9314a7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9314a8: xor edx, edx */
  edx = 0;
/* 9314aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9314ac: mov dword ptr [esp + 0x40], 0x7f7fffff */
  W32((uint32_t)(esp + 0x40u), 0x7f7fffffu);
/* 9314b4: jle 0x931531 */
  if ((zf || sf != of)) goto L_931531;
L_9314b6: /* 9314b6: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 9314ba: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 9314bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9314c0: /* 9314c0: fld dword ptr [esp + edx*4 + 0xa8] */
  { double v = F32((uint32_t)(esp + edx*4 + 0xa8u)); FPUSH(v); }
/* 9314c7: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9314cb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9314cd: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 9314d1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9314d3: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9314d7: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 9314db: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9314dd: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9314e1: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 9314e5: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9314e9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9314eb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9314ed: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9314ef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9314f1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9314f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9314f5: fsqrt  */
  ST0 = sqrt(ST0);
/* 9314f7: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9314f9: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 9314fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9314fd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9314ff: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 931503: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 931507: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931509: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93150b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93150d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93150f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931511: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 931513: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931515: fcom dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
/* 931519: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93151b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93151e: jp 0x931528 */
  if (pf) goto L_931528;
L_931520: /* 931520: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 931524: mov edi, edx */
  edi = edx;
/* 931526: jmp 0x93152a */
  goto L_93152a;
L_931528: /* 931528: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93152a: /* 93152a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 93152b: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93152d: jl 0x9314c0 */
  if ((sf != of)) goto L_9314c0;
L_93152f: /* 93152f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_931531: /* 931531: fld dword ptr [esp + edi*4 + 0xa8] */
  { double v = F32((uint32_t)(esp + edi*4 + 0xa8u)); FPUSH(v); }
/* 931538: lea ecx, [esp + edi*4 + 0xa8] */
  ecx = (uint32_t)(esp + edi*4 + 0xa8u);
/* 93153f: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931542: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 931544: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931546: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931549: jne 0x93154f */
  if (!zf) goto L_93154f;
L_93154b: /* 93154b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93154d: jmp 0x931552 */
  goto L_931552;
L_93154f: /* 93154f: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_931552: /* 931552: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931555: fchs  */
  ST0 = -ST0;
/* 931557: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 93155b: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 93155f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931561: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931564: jp 0x93156c */
  if (pf) goto L_93156c;
L_931566: /* 931566: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93156a: jmp 0x931581 */
  goto L_931581;
L_93156c: /* 93156c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93156e: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931571: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 931573: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931575: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931578: jne 0x93157e */
  if (!zf) goto L_93157e;
L_93157a: /* 93157a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93157c: jmp 0x931581 */
  goto L_931581;
L_93157e: /* 93157e: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_931581: /* 931581: fld dword ptr [esp + ebp*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x6cu)); FPUSH(v); }
/* 931585: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 93158b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93158d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93158f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931591: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931594: jnp 0x9317fd */
  if (!pf) goto L_9317fd;
L_93159a: /* 93159a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93159c: jmp 0x931785 */
  goto L_931785;
L_9315a1: /* 9315a1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9315a3: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 9315a6: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 9315aa: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9315ae: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 9315b1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9315b3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9315b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9315b7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9315ba: jp 0x9315c0 */
  if (pf) goto L_9315c0;
L_9315bc: /* 9315bc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9315be: jmp 0x9315c3 */
  goto L_9315c3;
L_9315c0: /* 9315c0: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_9315c3: /* 9315c3: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 9315c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9315c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9315cc: jp 0x9315d6 */
  if (pf) goto L_9315d6;
L_9315ce: /* 9315ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9315d0: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 9315d4: jmp 0x9315e9 */
  goto L_9315e9;
L_9315d6: /* 9315d6: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 9315d9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9315db: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9315dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9315df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9315e2: jnp 0x9315e9 */
  if (!pf) goto L_9315e9;
L_9315e4: /* 9315e4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9315e6: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_9315e9: /* 9315e9: fld dword ptr [esp + ebp*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x6cu)); FPUSH(v); }
/* 9315ed: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 9315f3: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9315f5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9315f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9315f9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9315fc: jnp 0x9318d6 */
  if (!pf) goto L_9318d6;
L_931602: /* 931602: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931604: jmp 0x931785 */
  goto L_931785;
L_931609: /* 931609: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93160d: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 931611: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 931615: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 931619: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93161b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93161f: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 931623: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931625: fchs  */
  ST0 = -ST0;
/* 931627: fld dword ptr [esp + ebp*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x6cu)); FPUSH(v); }
/* 93162b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93162d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93162f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931631: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931634: jnp 0x93163c */
  if (!pf) goto L_93163c;
L_931636: /* 931636: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931638: fld dword ptr [esp + ebp*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x6cu)); FPUSH(v); }
L_93163c: /* 93163c: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 93163f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 931641: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 931643: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931645: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931648: jp 0x93164e */
  if (pf) goto L_93164e;
L_93164a: /* 93164a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93164c: jmp 0x931651 */
  goto L_931651;
L_93164e: /* 93164e: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_931651: /* 931651: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 931655: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931657: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93165a: jp 0x931664 */
  if (pf) goto L_931664;
L_93165c: /* 93165c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93165e: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 931662: jmp 0x931677 */
  goto L_931677;
L_931664: /* 931664: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931667: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 931669: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93166b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93166d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931670: jnp 0x931677 */
  if (!pf) goto L_931677;
L_931672: /* 931672: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931674: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_931677: /* 931677: fld dword ptr [esp + ebp*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x6cu)); FPUSH(v); }
/* 93167b: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 931681: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 931683: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 931685: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931687: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93168a: jnp 0x9319b1 */
  if (!pf) goto L_9319b1;
L_931690: /* 931690: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931692: jmp 0x931785 */
  goto L_931785;
L_931697: /* 931697: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93169b: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 93169f: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 9316a5: fcom dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
/* 9316ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9316ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9316b0: jne 0x931b5d */
  if (!zf) goto L_931b5d;
L_9316b6: /* 9316b6: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9316ba: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9316be: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9316c2: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9316c6: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9316ca: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9316ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9316d0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9316d2: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 9316d4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9316da: fdiv st(3) */
  ST0 = ST0 / STI(3);
/* 9316dc: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9316de: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 9316e0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9316e2: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 9316e5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9316e7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9316e9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9316eb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9316ee: jp 0x9316f4 */
  if (pf) goto L_9316f4;
L_9316f0: /* 9316f0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9316f2: jmp 0x9316f7 */
  goto L_9316f7;
L_9316f4: /* 9316f4: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_9316f7: /* 9316f7: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 9316fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9316fd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931700: jp 0x93170a */
  if (pf) goto L_93170a;
L_931702: /* 931702: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931704: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 931708: jmp 0x93171d */
  goto L_93171d;
L_93170a: /* 93170a: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 93170d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93170f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 931711: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931713: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931716: jnp 0x93171d */
  if (!pf) goto L_93171d;
L_931718: /* 931718: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93171a: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_93171d: /* 93171d: fld dword ptr [esp + ebp*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x6cu)); FPUSH(v); }
/* 931721: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 931727: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 931729: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93172b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93172d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931730: jnp 0x931a86 */
  if (!pf) goto L_931a86;
L_931736: /* 931736: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931738: jmp 0x931785 */
  goto L_931785;
L_93173a: /* 93173a: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93173c: jne 0x931d9c */
  if (!zf) goto L_931d9c;
L_931742: /* 931742: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 931749: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 93174f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931751: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931754: jnp 0x931c47 */
  if (!pf) goto L_931c47;
L_93175a: /* 93175a: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93175e: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 931762: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 931768: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93176a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93176d: je 0x931cd2 */
  if (zf) goto L_931cd2;
L_931773: /* 931773: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931776: fcomp dword ptr [esp + ebp*4 + 0x6c] */
  fpu_com(ST0, F32((uint32_t)(esp + ebp*4 + 0x6cu)));
  FPOP();
/* 93177a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93177c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93177f: jnp 0x931d35 */
  if (!pf) goto L_931d35;
L_931785: /* 931785: mov ecx, dword ptr [esp + ebp*4 + 0x6c] */
  ecx = R32((uint32_t)(esp + ebp*4 + 0x6cu));
/* 931789: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 93178d: mov ecx, ebp */
  ecx = ebp;
/* 93178f: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = r;
  }
/* 931791: mov edx, ebp */
  edx = ebp;
/* 931793: mov eax, 1 */
  eax = 0x1u;
/* 931798: not edx */
  edx = ~edx;
/* 93179a: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 93179c: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93179f: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 9317a3: je 0x9317e0 */
  if (zf) goto L_9317e0;
L_9317a5: /* 9317a5: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9317a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9317a9: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 9317ad: jne 0x9317b3 */
  if (!zf) goto L_9317b3;
L_9317af: /* 9317af: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_9317b3: /* 9317b3: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
L_9317b7: /* 9317b7: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 9317bb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9317bc: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9317bf: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 9317c3: jl 0x931330 */
  if ((sf != of)) goto L_931330;
L_9317c9: /* 9317c9: mov edx, dword ptr [esp + 0x118] */
  edx = R32((uint32_t)(esp + 0x118u));
/* 9317d0: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 9317d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9317d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9317d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9317d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9317d7: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9317dd: ret 8 */
  esp += 12; SPILL(); return;
L_9317e0: /* 9317e0: not eax */
  eax = ~eax;
/* 9317e2: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9317e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9317e6: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 9317ea: jne 0x9317b3 */
  if (!zf) goto L_9317b3;
L_9317ec: /* 9317ec: fild dword ptr [esp + 0x50] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 9317f0: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 9317f4: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 9317f7: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9317fb: jmp 0x9317b7 */
  goto L_9317b7;
L_9317fd: /* 9317fd: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 931801: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 931809: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93180b: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 93180f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 931813: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 931817: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93181b: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 93181f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931821: xor eax, eax */
  eax = 0;
/* 931823: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 931827: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93182b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 93182f: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 931833: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 931837: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 93183b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_931841: /* 931841: fld dword ptr [esp + eax*4 + 0x28] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x28u)); FPUSH(v); }
/* 931845: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 931846: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 931849: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93184b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93184d: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 93184f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931851: jl 0x931841 */
  if ((sf != of)) goto L_931841;
L_931853: /* 931853: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 931859: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93185b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93185e: jne 0x93187a */
  if (!zf) goto L_93187a;
L_931860: /* 931860: fsqrt  */
  ST0 = sqrt(ST0);
/* 931862: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 931868: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 93186c: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 931870: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 931874: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 931878: jmp 0x931888 */
  goto L_931888;
L_93187a: /* 93187a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93187c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 931882: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_931888: /* 931888: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 93188c: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 93188f: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 931893: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931895: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 931899: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93189b: mov dword ptr [esp + 0x5c], 1 */
  W32((uint32_t)(esp + 0x5cu), 0x1u);
/* 9318a3: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9318a7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9318a9: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9318ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9318af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9318b1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9318b5: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 9318b9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9318bd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9318c1: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 9318c5: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9318c9: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 9318cd: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9318d1: jmp 0x931ded */
  goto L_931ded;
L_9318d6: /* 9318d6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9318da: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 9318e2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9318e4: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 9318e8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9318ec: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9318f0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9318f4: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 9318f8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9318fa: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 9318fe: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 931902: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 931906: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 93190a: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 93190e: xor eax, eax */
  eax = 0;
/* 931910: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 931914: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93191a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_931920: /* 931920: fld dword ptr [esp + eax*4 + 0x28] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x28u)); FPUSH(v); }
/* 931924: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 931925: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 931928: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93192a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93192c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 93192e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931930: jl 0x931920 */
  if ((sf != of)) goto L_931920;
L_931932: /* 931932: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 931938: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93193a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93193d: jne 0x931959 */
  if (!zf) goto L_931959;
L_93193f: /* 93193f: fsqrt  */
  ST0 = sqrt(ST0);
/* 931941: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 931947: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 93194b: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 93194f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 931953: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 931957: jmp 0x931967 */
  goto L_931967;
L_931959: /* 931959: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93195b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 931961: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_931967: /* 931967: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 93196a: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 93196e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931970: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 931974: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 931976: mov dword ptr [esp + 0x5c], 1 */
  W32((uint32_t)(esp + 0x5cu), 0x1u);
/* 93197e: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 931982: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931984: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931988: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93198a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93198c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 931990: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 931994: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 931998: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93199c: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 9319a0: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9319a4: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 9319a8: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9319ac: jmp 0x931ded */
  goto L_931ded;
L_9319b1: /* 9319b1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9319b5: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 9319bd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9319bf: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 9319c3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9319c7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9319cb: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9319cf: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 9319d3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9319d5: xor eax, eax */
  eax = 0;
/* 9319d7: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 9319db: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9319df: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9319e3: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 9319e7: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9319eb: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 9319ef: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_9319f5: /* 9319f5: fld dword ptr [esp + eax*4 + 0x28] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x28u)); FPUSH(v); }
/* 9319f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9319fa: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9319fd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9319ff: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931a01: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 931a03: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931a05: jl 0x9319f5 */
  if ((sf != of)) goto L_9319f5;
L_931a07: /* 931a07: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 931a0d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931a0f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931a12: jne 0x931a2e */
  if (!zf) goto L_931a2e;
L_931a14: /* 931a14: fsqrt  */
  ST0 = sqrt(ST0);
/* 931a16: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 931a1c: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 931a20: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 931a24: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 931a28: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 931a2c: jmp 0x931a3c */
  goto L_931a3c;
L_931a2e: /* 931a2e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931a30: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 931a36: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_931a3c: /* 931a3c: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 931a3f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 931a43: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931a45: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 931a49: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 931a4b: mov dword ptr [esp + 0x5c], 1 */
  W32((uint32_t)(esp + 0x5cu), 0x1u);
/* 931a53: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 931a57: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931a59: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931a5d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931a5f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931a61: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 931a65: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 931a69: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 931a6d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 931a71: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 931a75: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 931a79: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 931a7d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 931a81: jmp 0x931ded */
  goto L_931ded;
L_931a86: /* 931a86: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 931a8a: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 931a92: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931a94: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 931a98: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 931a9c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 931aa0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 931aa4: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 931aa8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931aaa: xor eax, eax */
  eax = 0;
/* 931aac: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 931ab0: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 931ab4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 931ab8: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 931abc: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 931ac0: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 931ac4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 931aca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_931ad0: /* 931ad0: fld dword ptr [esp + eax*4 + 0x28] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x28u)); FPUSH(v); }
/* 931ad4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 931ad5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 931ad8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931ada: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931adc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 931ade: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931ae0: jl 0x931ad0 */
  if ((sf != of)) goto L_931ad0;
L_931ae2: /* 931ae2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 931ae8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931aea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931aed: jne 0x931b09 */
  if (!zf) goto L_931b09;
L_931aef: /* 931aef: fsqrt  */
  ST0 = sqrt(ST0);
/* 931af1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 931af7: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 931afb: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 931aff: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 931b03: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 931b07: jmp 0x931b17 */
  goto L_931b17;
L_931b09: /* 931b09: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931b0b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 931b11: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_931b17: /* 931b17: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 931b1a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 931b22: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931b24: mov dword ptr [esp + 0x5c], 3 */
  W32((uint32_t)(esp + 0x5cu), 0x3u);
/* 931b2c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 931b2e: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 931b32: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931b34: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931b38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931b3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931b3c: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 931b40: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 931b44: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 931b48: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 931b4c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 931b50: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 931b54: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 931b58: jmp 0x931ded */
  goto L_931ded;
L_931b5d: /* 931b5d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931b5f: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 931b67: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931b6b: xor eax, eax */
  eax = 0;
/* 931b6d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 931b71: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 931b75: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931b79: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 931b7d: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 931b81: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931b85: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 931b89: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 931b8d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 931b8f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 931b93: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 931b95: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931b99: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 931b9f: nop  */
L_931ba0: /* 931ba0: fld dword ptr [esp + eax*4 + 0x28] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x28u)); FPUSH(v); }
/* 931ba4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 931ba5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 931ba8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931baa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931bac: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 931bae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931bb0: jl 0x931ba0 */
  if ((sf != of)) goto L_931ba0;
L_931bb2: /* 931bb2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 931bb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931bba: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931bbd: jne 0x931bd5 */
  if (!zf) goto L_931bd5;
L_931bbf: /* 931bbf: fsqrt  */
  ST0 = sqrt(ST0);
/* 931bc1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 931bc7: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 931bcb: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 931bcd: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 931bd1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 931bd3: jmp 0x931be3 */
  goto L_931be3;
L_931bd5: /* 931bd5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931bd7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 931bdd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_931be3: /* 931be3: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 931be6: lea ecx, [esp + ebp*4 + 0x6c] */
  ecx = (uint32_t)(esp + ebp*4 + 0x6cu);
/* 931bea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931bec: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 931bf4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 931bf6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 931bfa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931bfc: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931c00: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931c02: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931c04: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 931c08: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 931c0a: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 931c0e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 931c12: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 931c16: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 931c1a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 931c1c: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931c1f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 931c21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931c23: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931c26: jne 0x931c37 */
  if (!zf) goto L_931c37;
L_931c28: /* 931c28: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 931c2a: mov dword ptr [esp + 0x5c], 3 */
  W32((uint32_t)(esp + 0x5cu), 0x3u);
/* 931c32: jmp 0x931de5 */
  goto L_931de5;
L_931c37: /* 931c37: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931c3a: mov dword ptr [esp + 0x5c], 3 */
  W32((uint32_t)(esp + 0x5cu), 0x3u);
/* 931c42: jmp 0x931de5 */
  goto L_931de5;
L_931c47: /* 931c47: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 931c4b: lea ecx, [esp + ebp*4 + 0x6c] */
  ecx = (uint32_t)(esp + ebp*4 + 0x6cu);
/* 931c4f: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 931c53: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 931c5b: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 931c63: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 931c67: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931c6b: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 931c6f: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 931c73: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931c77: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 931c7b: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 931c7f: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931c83: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 931c87: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 931c8b: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 931c8f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 931c91: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 931c95: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931c99: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 931c9d: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 931ca1: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 931ca5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 931ca7: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931caa: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 931cac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931cae: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931cb1: jne 0x931cc2 */
  if (!zf) goto L_931cc2;
L_931cb3: /* 931cb3: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 931cb5: mov dword ptr [esp + 0x5c], 2 */
  W32((uint32_t)(esp + 0x5cu), 0x2u);
/* 931cbd: jmp 0x931de5 */
  goto L_931de5;
L_931cc2: /* 931cc2: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931cc5: mov dword ptr [esp + 0x5c], 2 */
  W32((uint32_t)(esp + 0x5cu), 0x2u);
/* 931ccd: jmp 0x931de5 */
  goto L_931de5;
L_931cd2: /* 931cd2: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931cd6: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 931cda: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 931cde: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 931ce2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 931cea: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 931cf2: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 931cf6: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931cfa: mov dword ptr [esp + 0x5c], 2 */
  W32((uint32_t)(esp + 0x5cu), 0x2u);
/* 931d02: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 931d06: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 931d0a: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931d0e: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 931d12: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 931d16: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 931d1a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 931d1c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 931d20: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931d24: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 931d28: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 931d2c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 931d30: jmp 0x931ded */
  goto L_931ded;
L_931d35: /* 931d35: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 931d38: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 931d3c: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 931d40: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 931d44: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 931d48: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 931d4c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 931d54: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 931d5c: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 931d60: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 931d64: mov dword ptr [esp + 0x5c], 2 */
  W32((uint32_t)(esp + 0x5cu), 0x2u);
/* 931d6c: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 931d70: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 931d74: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 931d78: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 931d7c: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 931d80: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 931d84: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 931d86: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 931d8a: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931d8e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 931d92: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 931d96: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 931d9a: jmp 0x931ded */
  goto L_931ded;
L_931d9c: /* 931d9c: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931da0: lea ecx, [esp + ebp*4 + 0x6c] */
  ecx = (uint32_t)(esp + ebp*4 + 0x6cu);
/* 931da4: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 931da8: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 931dac: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 931db0: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931db4: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 931db8: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 931dbc: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 931dc0: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 931dc4: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 931dc8: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 931dcc: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 931dd0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 931dd2: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 931dd5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 931dd7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931dd9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931ddc: jne 0x931de2 */
  if (!zf) goto L_931de2;
L_931dde: /* 931dde: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 931de0: jmp 0x931de5 */
  goto L_931de5;
L_931de2: /* 931de2: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_931de5: /* 931de5: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 931de9: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
L_931ded: /* 931ded: cmp dword ptr [esp + 0x68], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x68u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 931df2: jl 0x931e0b */
  if ((sf != of)) goto L_931e0b;
L_931df4: /* 931df4: mov edx, dword ptr [esp + 0x118] */
  edx = R32((uint32_t)(esp + 0x118u));
/* 931dfb: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 931dfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 931dff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 931e00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 931e01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 931e02: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 931e08: ret 8 */
  esp += 12; SPILL(); return;
L_931e0b: /* 931e0b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 931e0f: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 931e13: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 931e17: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 931e1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931e1d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 931e21: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 931e25: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931e27: fcom dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
/* 931e2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931e2f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931e32: jne 0x931e63 */
  if (!zf) goto L_931e63;
L_931e34: /* 931e34: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 931e36: fsqrt  */
  ST0 = sqrt(ST0);
/* 931e38: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 931e3e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 931e42: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931e44: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 931e48: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 931e4c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931e4e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 931e52: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 931e56: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931e58: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 931e5c: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 931e5e: jmp 0x931fc2 */
  goto L_931fc2;
L_931e63: /* 931e63: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 931e67: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931e69: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 931e6d: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 931e75: fabs  */
  ST0 = fabs(ST0);
/* 931e77: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 931e7e: fmul dword ptr [ebx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x14u)));
/* 931e81: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 931e84: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 931e86: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 931e8a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 931e90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931e92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931e95: je 0x931e9f */
  if (zf) goto L_931e9f;
L_931e97: /* 931e97: mov dword ptr [esp + 0x18], 0xbf800000 */
  W32((uint32_t)(esp + 0x18u), 0xbf800000u);
L_931e9f: /* 931e9f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 931ea3: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 931ea7: fchs  */
  ST0 = -ST0;
/* 931ea9: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 931ead: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 931eb1: fadd dword ptr [esp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x58u)));
/* 931eb5: fcom dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
/* 931ebb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931ebd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931ec0: jp 0x931f09 */
  if (pf) goto L_931f09;
L_931ec2: /* 931ec2: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 931ec6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931ec8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931eca: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 931ece: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 931ed2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 931ed6: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 931eda: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 931ede: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 931ee2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931ee4: fcom dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
/* 931eea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931eec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931eef: jp 0x931f09 */
  if (pf) goto L_931f09;
L_931ef1: /* 931ef1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931ef3: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 931efb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931efd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 931f03: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_931f09: /* 931f09: fsqrt  */
  ST0 = sqrt(ST0);
/* 931f0b: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 931f11: fst dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0);
/* 931f15: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 931f17: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 931f1b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931f1d: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 931f21: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 931f25: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 931f29: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 931f2d: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 931f33: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 931f37: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 931f3b: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 931f3f: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 931f43: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 931f47: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931f49: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 931f4d: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 931f51: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 931f53: fst dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0);
/* 931f57: fabs  */
  ST0 = fabs(ST0);
/* 931f59: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 931f5c: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 931f60: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 931f62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931f64: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 931f67: jne 0x931fc2 */
  if (!zf) goto L_931fc2;
L_931f69: /* 931f69: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 931f6d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 931f6f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 931f73: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 931f77: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 931f7b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 931f7f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 931f85: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 931f89: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 931f8d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 931f91: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931f93: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931f96: jp 0x931fc2 */
  if (pf) goto L_931fc2;
L_931f98: /* 931f98: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 931f9c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 931fa2: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 931fa6: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 931faa: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 931fb0: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 931fb4: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 931fb8: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 931fbe: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_931fc2: /* 931fc2: fsub dword ptr [ebx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x10u)));
/* 931fc5: mov edi, dword ptr [esp + 0x118] */
  edi = R32((uint32_t)(esp + 0x118u));
/* 931fcc: fst dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0);
/* 931fd0: fcomp dword ptr [esp + 0x90] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x90u)));
  FPOP();
/* 931fd7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 931fd9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 931fdc: jp 0x932016 */
  if (pf) goto L_932016;
L_931fde: /* 931fde: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 931fe2: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 931fe9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 931fea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 931feb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 931fec: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 931ff0: xor eax, eax */
  eax = 0;
/* 931ff2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 931ff3: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 931ff6: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 931ff9: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 931ffc: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 932000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 932001: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 932003: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 932004: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 932008: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 932009: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 93200d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93200e: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x932013u); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 932013: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_932016: /* 932016: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 932019: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93201a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93201b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93201c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93201d: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 932023: ret 8 */
  esp += 12; SPILL(); return;
}

void f_932030(void) {
  LOAD_REGS();
L_932030: /* 932030: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 932033: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 932037: xor eax, eax */
  eax = 0;
/* 932039: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 93203d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 932041: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 932045: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 932049: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 93204d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93204e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 932050: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 932052: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 932053: mov dword ptr [esp + 0x18], 0x930ee0 */
  W32((uint32_t)(esp + 0x18u), 0x930ee0u);
/* 93205b: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 932063: call 0x929df0 */
  esp -= 4; W32(esp, 0x932068u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 932068: mov eax, 1 */
  eax = 0x1u;
/* 93206d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 932070: ret 4 */
  esp += 8; SPILL(); return;
}

void f_932080(void) {
  LOAD_REGS();
L_932080: /* 932080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 932081: mov ebp, esp */
  ebp = esp;
/* 932083: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 932086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 932087: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 93208a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 93208c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93208d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93208e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93208f: call 0x928730 */
  esp -= 4; W32(esp, 0x932094u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 932094: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 932097: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 932098: mov edi, eax */
  edi = eax;
/* 93209a: call 0x928730 */
  esp -= 4; W32(esp, 0x93209fu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93209f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 9320a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9320a2: mov esi, eax */
  esi = eax;
/* 9320a4: call 0x928610 */
  esp -= 4; W32(esp, 0x9320a9u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 9320a9: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 9320ac: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9320af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9320b0: call 0x928610 */
  esp -= 4; W32(esp, 0x9320b5u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 9320b5: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 9320b8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 9320ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9320bb: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 9320be: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9320c3u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9320c3: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9320c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9320c7: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 9320ca: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9320cfu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9320cf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9320d2: xor edx, edx */
  edx = 0;
/* 9320d4: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 9320d7: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 9320da: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 9320dd: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9320df: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9320e2: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 9320e5: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9320e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9320ea: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9320ed: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 9320f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9320f2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 9320f5: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 9320f8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 9320fb: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 9320fe: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 932101: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932103: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 932106: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 932109: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93210b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 93210e: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 932111: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 932114: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 932117: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 93211a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93211c: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 93211f: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 932122: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932124: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 932127: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* 93212a: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 93212d: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 932130: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 932133: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 932136: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 932139: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93213b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93213e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 932140: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 932142: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932144: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 932146: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 932149: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93214b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 93214e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 932150: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 932153: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 932155: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 932158: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93215a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93215c: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93215f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932161: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 932164: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 932166: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 932169: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 93216b: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93216e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 932170: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 932173: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932175: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 932178: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* 93217b: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 93217e: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 932181: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 932184: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 932187: call 0x99cc00 */
  esp -= 4; W32(esp, 0x93218cu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 93218c: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 93218f: mov eax, esp */
  eax = esp;
/* 932191: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 932192: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 932195: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 932198: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 93219b: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 93219e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93219f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 9321a2: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 9321a5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9321a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9321a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9321aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9321ab: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0x9321aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9321ae: xor ebx, ebx */
  ebx = 0;
/* 9321b0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9321b2: jne 0x9321c2 */
  if (!zf) goto L_9321c2;
L_9321b4: /* 9321b4: xor eax, eax */
  eax = 0;
/* 9321b6: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* 9321b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9321ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9321bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9321bc: mov esp, ebp */
  esp = ebp;
/* 9321be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9321bf: ret 8 */
  esp += 12; SPILL(); return;
L_9321c2: /* 9321c2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9321c4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9321c7: mov dword ptr [ecx + 0x14], ebx */
  W32((uint32_t)(ecx + 0x14u), ebx);
/* 9321ca: mov dword ptr [ecx + 0x18], ebx */
  W32((uint32_t)(ecx + 0x18u), ebx);
/* 9321cd: mov dword ptr [ecx + 0x1c], ebx */
  W32((uint32_t)(ecx + 0x1cu), ebx);
/* 9321d0: jle 0x93220b */
  if ((zf || sf != of)) goto L_93220b;
L_9321d2: /* 9321d2: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_9321d5: /* 9321d5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9321d8: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 9321db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9321dc: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 9321df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9321e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9321e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9321e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9321e3: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9321e6: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 9321e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9321ea: mov eax, dword ptr [edx + 0x34] */
  eax = R32((uint32_t)(edx + 0x34u));
/* 9321ed: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 9321f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9321f1: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9321f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9321f4: call 0x932270 */
  esp -= 4; W32(esp, 0x9321f9u); SPILL(); f_932270(); if (g_unwind) return; RELOAD();
/* 9321f9: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9321fc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9321ff: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 932202: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 932205: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 932206: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 932209: jne 0x9321d5 */
  if (!zf) goto L_9321d5;
L_93220b: /* 93220b: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 93220e: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 932211: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 932214: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 932217: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932219: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 93221c: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 93221f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932221: fcom dword ptr [0xa214e4] */
  fpu_com(ST0, F32((uint32_t)(0xa214e4u)));
/* 932227: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932229: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93222c: jne 0x93225b */
  if (!zf) goto L_93225b;
L_93222e: /* 93222e: fsqrt  */
  ST0 = sqrt(ST0);
/* 932230: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 932236: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 932238: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 93223b: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 93223e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 932240: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 932243: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 932246: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 932249: fstp dword ptr [ecx + 0x1c] */
  WF32((uint32_t)(ecx + 0x1cu), ST0); FPOP();
/* 93224c: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 93224f: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* 932252: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 932253: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 932254: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 932255: mov esp, ebp */
  esp = ebp;
/* 932257: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 932258: ret 8 */
  esp += 12; SPILL(); return;
L_93225b: /* 93225b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93225d: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 932260: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* 932263: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 932264: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 932265: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 932266: mov esp, ebp */
  esp = ebp;
/* 932268: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 932269: ret 8 */
  esp += 12; SPILL(); return;
}

void f_932270(void) {
  LOAD_REGS();
L_932270: /* 932270: sub esp, 0xdc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 932276: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 932277: mov ebx, dword ptr [esp + 0xe4] */
  ebx = R32((uint32_t)(esp + 0xe4u));
/* 93227e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 932281: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 932283: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 932285: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 932287: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 93228a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93228b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93228c: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 932290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 932291: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 932294: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 932297: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 93229b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93229e: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 9322a1: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 9322a5: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9322a7: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 9322a9: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 9322ad: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9322b0: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9322b3: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 9322ba: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9322bd: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 9322c0: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 9322c7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9322c9: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 9322cb: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 9322d2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9322d5: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 9322d8: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 9322df: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9322e2: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 9322e5: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 9322ec: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9322f3: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 9322f7: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 9322fe: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 932302: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932304: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 932308: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 93230c: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 932310: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 932317: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 93231b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93231d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 932321: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 932328: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 93232c: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 932330: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 932334: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932336: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93233a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93233e: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 932342: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 932346: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 93234a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93234c: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 932350: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 932354: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932356: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93235a: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 93235e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 932362: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 932366: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932368: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 93236f: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 932373: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 932377: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93237b: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 93237f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932381: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 932388: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93238c: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 932390: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 932394: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 932398: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93239a: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 9323a1: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 9323a8: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 9323ac: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9323b3: mov edi, dword ptr [esp + 0xf4] */
  edi = R32((uint32_t)(esp + 0xf4u));
/* 9323ba: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9323be: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9323c0: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 9323c7: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9323ce: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 9323d2: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9323d6: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 9323da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9323dc: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 9323e3: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9323e7: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9323eb: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 9323f2: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 9323f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9323f8: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 9323ff: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 932406: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 93240a: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 932411: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 932415: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932417: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 93241e: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 932425: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 932429: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 932430: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 932434: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932436: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 93243d: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 932444: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 932448: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 93244f: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 932453: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932455: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 93245c: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 932463: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 932465: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 93246c: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93246f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932471: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 932478: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93247b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93247d: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 932484: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 932487: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 93248e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 932491: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932493: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 93249a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93249c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93249e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9324a0: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 9324a7: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 9324ae: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9324b0: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 9324b7: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9324ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9324bc: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 9324c3: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 9324c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9324c8: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 9324cf: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9324d2: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 9324d9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9324dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9324de: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 9324e5: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9324e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9324e9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9324eb: fstp dword ptr [esp + 0xbc] */
  WF32((uint32_t)(esp + 0xbcu), ST0); FPOP();
/* 9324f2: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 9324f9: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9324fb: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 932502: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 932505: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932507: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 93250e: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 932511: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932513: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 93251a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93251d: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 932524: mov esi, dword ptr [esp + 0xf8] */
  esi = R32((uint32_t)(esp + 0xf8u));
/* 93252b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93252e: mov al, byte ptr [ebx + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x14u))) & 0xffu);
/* 932531: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932533: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932535: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 93253c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93253e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932540: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932542: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 932549: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93254d: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93254f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 932553: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 932556: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932558: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93255c: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93255f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932561: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 932565: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 932568: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93256c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93256f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932571: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 932575: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 932577: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932579: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93257b: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93257f: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 932586: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 932589: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 932590: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 932593: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932595: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 93259c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93259e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9325a0: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 9325a4: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 9325ab: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9325ad: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 9325b4: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9325b7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9325b9: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 9325c0: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9325c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9325c5: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 9325c9: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 9325d0: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9325d2: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 9325d9: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9325dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9325de: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 9325e5: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9325e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9325ea: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 9325ee: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9325f2: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9325f5: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9325f9: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9325fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9325fe: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 932602: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 932604: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932606: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93260a: jne 0x932628 */
  if (!zf) goto L_932628;
L_93260c: /* 93260c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 932610: mov dword ptr [esp + 0xe4], 1 */
  W32((uint32_t)(esp + 0xe4u), 0x1u);
/* 93261b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 932621: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932623: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932626: jnp 0x932633 */
  if (!pf) goto L_932633;
L_932628: /* 932628: mov dword ptr [esp + 0xe4], 0 */
  W32((uint32_t)(esp + 0xe4u), 0x0u);
L_932633: /* 932633: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 932637: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 93263f: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 932646: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 93264e: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 932652: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 93265a: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 932661: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 932669: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 932671: mov dword ptr [esp + 0x58], 0xffffffff */
  W32((uint32_t)(esp + 0x58u), 0xffffffffu);
/* 932679: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 93267d: mov dword ptr [esp + 0x68], 2 */
  W32((uint32_t)(esp + 0x68u), 0x2u);
/* 932685: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 932689: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 932690: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 932694: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 93269b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 93269d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93269f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9326a2: jp 0x9326ab */
  if (pf) goto L_9326ab;
L_9326a4: /* 9326a4: mov ebx, 1 */
  ebx = 0x1u;
/* 9326a9: jmp 0x9326ad */
  goto L_9326ad;
L_9326ab: /* 9326ab: xor ebx, ebx */
  ebx = 0;
L_9326ad: /* 9326ad: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 9326b4: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 9326b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9326ba: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9326bd: jp 0x9326c6 */
  if (pf) goto L_9326c6;
L_9326bf: /* 9326bf: mov edx, 1 */
  edx = 0x1u;
/* 9326c4: jmp 0x9326c8 */
  goto L_9326c8;
L_9326c6: /* 9326c6: xor edx, edx */
  edx = 0;
L_9326c8: /* 9326c8: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 9326cf: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 9326d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9326d5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9326d8: jp 0x9326e1 */
  if (pf) goto L_9326e1;
L_9326da: /* 9326da: mov eax, 1 */
  eax = 0x1u;
/* 9326df: jmp 0x9326e3 */
  goto L_9326e3;
L_9326e1: /* 9326e1: xor eax, eax */
  eax = 0;
L_9326e3: /* 9326e3: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9326e5: fchs  */
  ST0 = -ST0;
/* 9326e7: fcomp dword ptr [esp + 0xb8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xb8u)));
  FPOP();
/* 9326ee: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9326f0: mov ebx, eax */
  ebx = eax;
/* 9326f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9326f4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9326f7: jne 0x932700 */
  if (!zf) goto L_932700;
L_9326f9: /* 9326f9: mov ebp, 1 */
  ebp = 0x1u;
/* 9326fe: jmp 0x932702 */
  goto L_932702;
L_932700: /* 932700: xor ebp, ebp */
  ebp = 0;
L_932702: /* 932702: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 932706: fchs  */
  ST0 = -ST0;
/* 932708: fcomp dword ptr [esp + 0xbc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xbcu)));
  FPOP();
/* 93270f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932711: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932714: jne 0x93271d */
  if (!zf) goto L_93271d;
L_932716: /* 932716: mov edx, 1 */
  edx = 0x1u;
/* 93271b: jmp 0x93271f */
  goto L_93271f;
L_93271d: /* 93271d: xor edx, edx */
  edx = 0;
L_93271f: /* 93271f: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 932723: fchs  */
  ST0 = -ST0;
/* 932725: fcomp dword ptr [esp + 0xc0] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xc0u)));
  FPOP();
/* 93272c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93272e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932731: jne 0x93273a */
  if (!zf) goto L_93273a;
L_932733: /* 932733: mov eax, 1 */
  eax = 0x1u;
/* 932738: jmp 0x93273c */
  goto L_93273c;
L_93273a: /* 93273a: xor eax, eax */
  eax = 0;
L_93273c: /* 93273c: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 93273e: and eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 932740: mov edx, eax */
  edx = eax;
/* 932742: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 932744: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 932746: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 93274d: je 0x9328c6 */
  if (zf) goto L_9328c6;
L_932753: /* 932753: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932755: je 0x9328ac */
  if (zf) goto L_9328ac;
L_93275b: /* 93275b: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93275f: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 932766: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 93276a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93276e: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 932772: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 932774: fmul dword ptr [0xa214e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa214e0u)));
/* 93277a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93277c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 932780: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932782: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932785: jne 0x9327b8 */
  if (!zf) goto L_9327b8;
L_932787: /* 932787: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 93278b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93278f: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 932793: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 932795: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932797: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93279a: jp 0x9327e8 */
  if (pf) goto L_9327e8;
L_93279c: /* 93279c: fld dword ptr [esp + 0xfc] */
  { double v = F32((uint32_t)(esp + 0xfcu)); FPUSH(v); }
/* 9327a3: fchs  */
  ST0 = -ST0;
/* 9327a5: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9327a9: fld dword ptr [esp + 0xfc] */
  { double v = F32((uint32_t)(esp + 0xfcu)); FPUSH(v); }
/* 9327b0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9327b2: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 9327b6: jmp 0x9327e8 */
  goto L_9327e8;
L_9327b8: /* 9327b8: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 9327bc: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9327c0: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 9327c4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9327c6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9327c8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9327ca: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9327cc: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9327ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9327d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9327d2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9327d5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9327d7: je 0x9328b4 */
  if (zf) goto L_9328b4;
L_9327dd: /* 9327dd: mov eax, dword ptr [esp + 0xfc] */
  eax = R32((uint32_t)(esp + 0xfcu));
/* 9327e4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
L_9327e8: /* 9327e8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9327ec: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9327ee: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 9327f0: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9327f4: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9327f7: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 9327fa: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9327fe: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 932801: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 932804: fstp dword ptr [esp + 0xe0] */
  WF32((uint32_t)(esp + 0xe0u), ST0); FPOP();
/* 93280b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93280d: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 93280f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 932811: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 932814: fld dword ptr [esp + 0xe0] */
  { double v = F32((uint32_t)(esp + 0xe0u)); FPUSH(v); }
/* 93281b: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 93281e: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 932822: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 932824: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 932828: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93282a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93282c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 932830: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 932832: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932834: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 932838: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93283a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93283c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93283e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 932844: fdiv st(3) */
  ST0 = ST0 / STI(3);
/* 932846: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 93284a: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 93284e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 932852: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 932856: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93285a: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93285e: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 932862: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 932866: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93286a: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 93286e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 932872: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 932874: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 932878: fstp dword ptr [esp + 0xd8] */
  WF32((uint32_t)(esp + 0xd8u), ST0); FPOP();
/* 93287f: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 932883: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 93288a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93288c: fld dword ptr [esp + 0xe0] */
  { double v = F32((uint32_t)(esp + 0xe0u)); FPUSH(v); }
/* 932893: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 932897: fstp dword ptr [esp + 0xe0] */
  WF32((uint32_t)(esp + 0xe0u), ST0); FPOP();
/* 93289e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9328a2: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 9328a6: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9328aa: jmp 0x9328d0 */
  goto L_9328d0;
L_9328ac: /* 9328ac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9328ae: je 0x9327dd */
  if (zf) goto L_9327dd;
L_9328b4: /* 9328b4: fld dword ptr [esp + 0xfc] */
  { double v = F32((uint32_t)(esp + 0xfcu)); FPUSH(v); }
/* 9328bb: fchs  */
  ST0 = -ST0;
/* 9328bd: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9328c1: jmp 0x9327e8 */
  goto L_9327e8;
L_9328c6: /* 9328c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9328c8: mov dword ptr [esp + 0x38], 0x7f7fffff */
  W32((uint32_t)(esp + 0x38u), 0x7f7fffffu);
L_9328d0: /* 9328d0: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9328d4: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9328d8: fcom dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
/* 9328de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9328e0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9328e3: jnp 0x932910 */
  if (!pf) goto L_932910;
L_9328e5: /* 9328e5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9328e9: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9328ed: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9328ef: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 9328f6: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 9328fd: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9328ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932901: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932904: jnp 0x932912 */
  if (!pf) goto L_932912;
L_932906: /* 932906: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 93290e: jmp 0x93291a */
  goto L_93291a;
L_932910: /* 932910: fstp st(0) */
  STI(0) = ST0; FPOP();
L_932912: /* 932912: mov dword ptr [esp + 0x50], 1 */
  W32((uint32_t)(esp + 0x50u), 0x1u);
L_93291a: /* 93291a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93291c: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 932924: jne 0x932b9f */
  if (!zf) goto L_932b9f;
L_93292a: /* 93292a: fld dword ptr [esp + 0xfc] */
  { double v = F32((uint32_t)(esp + 0xfcu)); FPUSH(v); }
/* 932931: xor ebp, ebp */
  ebp = 0;
/* 932933: fchs  */
  ST0 = -ST0;
/* 932935: lea ebx, [esp + 0x70] */
  ebx = (uint32_t)(esp + 0x70u);
/* 932939: fstp dword ptr [esp + 0xc8] */
  WF32((uint32_t)(esp + 0xc8u), ST0); FPOP();
L_932940: /* 932940: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 932947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 932948: mov ecx, dword ptr [esp + 0xf4] */
  ecx = R32((uint32_t)(esp + 0xf4u));
/* 93294f: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 932953: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 932954: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 932957: mov ecx, dword ptr [esp + 0xd0] */
  ecx = R32((uint32_t)(esp + 0xd0u));
/* 93295e: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 932962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 932963: mov eax, dword ptr [esp + 0x108] */
  eax = R32((uint32_t)(esp + 0x108u));
/* 93296a: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93296f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 932971: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 932972: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 932973: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 932974: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 932975: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 932976: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 932977: call 0x99b300 */
  esp -= 4; W32(esp, 0x93297cu); SPILL(); f_99b300(); if (g_unwind) return; RELOAD();
/* 93297c: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 932980: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 932982: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 932989: mov ecx, eax */
  ecx = eax;
/* 93298b: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* 93298e: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 932990: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 932994: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 932997: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93299a: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93299d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9329a1: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9329a4: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 9329a7: fstp dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0); FPOP();
/* 9329ae: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9329b2: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 9329b4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 9329b6: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9329ba: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9329be: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 9329c1: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 9329c4: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 9329c8: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9329cc: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 9329cf: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 9329d2: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 9329d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9329d8: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 9329dc: fstp dword ptr [esp + 0xcc] */
  WF32((uint32_t)(esp + 0xccu), ST0); FPOP();
/* 9329e3: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 9329e7: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 9329ee: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 9329f2: fstp dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0); FPOP();
/* 9329f9: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 932a00: fmul dword ptr [esp + 0xcc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xccu)));
/* 932a07: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 932a0e: fmul dword ptr [esp + 0xd4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xd4u)));
/* 932a15: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932a17: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 932a19: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 932a1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932a1d: fst dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0);
/* 932a21: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 932a25: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 932a27: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 932a29: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 932a2d: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 932a31: fmul dword ptr [0xa214e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214e8u)));
/* 932a37: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 932a39: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932a3b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932a3e: jne 0x932a47 */
  if (!zf) goto L_932a47;
L_932a40: /* 932a40: mov edx, 1 */
  edx = 0x1u;
/* 932a45: jmp 0x932a49 */
  goto L_932a49;
L_932a47: /* 932a47: xor edx, edx */
  edx = 0;
L_932a49: /* 932a49: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 932a4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932a51: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932a54: jp 0x932a5c */
  if (pf) goto L_932a5c;
L_932a56: /* 932a56: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932a58: je 0x932a89 */
  if (zf) goto L_932a89;
L_932a5a: /* 932a5a: jmp 0x932a60 */
  goto L_932a60;
L_932a5c: /* 932a5c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932a5e: je 0x932a74 */
  if (zf) goto L_932a74;
L_932a60: /* 932a60: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 932a67: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 932a6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932a6f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932a72: jp 0x932a89 */
  if (pf) goto L_932a89;
L_932a74: /* 932a74: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 932a78: fcomp dword ptr [0xa13bbc] */
  fpu_com(ST0, F32((uint32_t)(0xa13bbcu)));
  FPOP();
/* 932a7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932a80: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932a83: jp 0x932b24 */
  if (pf) goto L_932b24;
L_932a89: /* 932a89: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 932a8d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 932a91: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 932a95: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 932a99: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 932a9d: mov dword ptr [esp + 0xd8], eax */
  W32((uint32_t)(esp + 0xd8u), eax);
/* 932aa4: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 932aa8: mov dword ptr [esp + 0xdc], edx */
  W32((uint32_t)(esp + 0xdcu), edx);
/* 932aaf: mov edx, dword ptr [esp + 0xcc] */
  edx = R32((uint32_t)(esp + 0xccu));
/* 932ab6: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 932aba: mov dword ptr [esp + 0xe0], eax */
  W32((uint32_t)(esp + 0xe0u), eax);
/* 932ac1: mov eax, dword ptr [esp + 0xd4] */
  eax = R32((uint32_t)(esp + 0xd4u));
/* 932ac8: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 932acc: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 932ad0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 932ad4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 932ad8: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 932adc: mov edx, dword ptr [esp + 0xc4] */
  edx = R32((uint32_t)(esp + 0xc4u));
/* 932ae3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 932ae7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932ae9: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 932aed: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932af0: mov edx, ebp */
  edx = ebp;
/* 932af2: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 932af6: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 932afa: jp 0x932b1a */
  if (pf) goto L_932b1a;
L_932afc: /* 932afc: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 932b03: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 932b09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932b0b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932b0e: jp 0x932b1a */
  if (pf) goto L_932b1a;
L_932b10: /* 932b10: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 932b18: jmp 0x932b75 */
  goto L_932b75;
L_932b1a: /* 932b1a: mov dword ptr [esp + 0x68], 1 */
  W32((uint32_t)(esp + 0x68u), 0x1u);
/* 932b22: jmp 0x932b75 */
  goto L_932b75;
L_932b24: /* 932b24: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932b26: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 932b28: je 0x932b71 */
  if (zf) goto L_932b71;
L_932b2a: /* 932b2a: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 932b2e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 932b34: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932b36: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932b39: jp 0x932b71 */
  if (pf) goto L_932b71;
L_932b3b: /* 932b3b: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 932b3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932b41: je 0x932b71 */
  if (zf) goto L_932b71;
L_932b43: /* 932b43: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 932b47: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 932b4b: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 932b4f: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 932b53: fcomp dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
  FPOP();
/* 932b59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932b5b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932b5e: jne 0x932b71 */
  if (!zf) goto L_932b71;
L_932b60: /* 932b60: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 932b63: mov dword ptr [esp + 0x68], 2 */
  W32((uint32_t)(esp + 0x68u), 0x2u);
/* 932b6b: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 932b6f: jmp 0x932b75 */
  goto L_932b75;
L_932b71: /* 932b71: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
L_932b75: /* 932b75: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 932b76: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 932b79: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 932b7c: jl 0x932940 */
  if ((sf != of)) goto L_932940;
L_932b82: /* 932b82: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 932b84: jl 0x932ba3 */
  if ((sf != of)) goto L_932ba3;
L_932b86: /* 932b86: mov eax, dword ptr [esp + 0xf0] */
  eax = R32((uint32_t)(esp + 0xf0u));
/* 932b8d: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 932b90: lea ecx, [edx + 2] */
  ecx = (uint32_t)(edx + 0x2u);
/* 932b93: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 932b95: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932b97: je 0x933115 */
  if (zf) goto L_933115;
L_932b9d: /* 932b9d: jmp 0x932ba3 */
  goto L_932ba3;
L_932b9f: /* 932b9f: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
L_932ba3: /* 932ba3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 932ba7: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 932bab: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 932baf: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 932bb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932bb5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 932bb9: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 932bbd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932bbf: fcom dword ptr [0xa214e0] */
  fpu_com(ST0, F32((uint32_t)(0xa214e0u)));
/* 932bc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932bc7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932bca: jne 0x932d1d */
  if (!zf) goto L_932d1d;
L_932bd0: /* 932bd0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 932bd2: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 932bd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932bd8: fsqrt  */
  ST0 = sqrt(ST0);
/* 932bda: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 932be0: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 932be4: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 932be6: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 932bea: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 932bee: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 932bf2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 932bf6: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 932bfa: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 932bfe: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 932c02: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 932c06: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 932c0a: jne 0x932ca9 */
  if (!zf) goto L_932ca9;
L_932c10: /* 932c10: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 932c14: fdiv dword ptr [esp + 0x40] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x40u)));
/* 932c18: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 932c1c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 932c1e: fcomp dword ptr [esp + 0xb8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xb8u)));
  FPOP();
/* 932c25: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932c27: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932c2a: jne 0x932c33 */
  if (!zf) goto L_932c33;
L_932c2c: /* 932c2c: mov ebx, 1 */
  ebx = 0x1u;
/* 932c31: jmp 0x932c35 */
  goto L_932c35;
L_932c33: /* 932c33: xor ebx, ebx */
  ebx = 0;
L_932c35: /* 932c35: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 932c39: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 932c3b: fcomp dword ptr [esp + 0xbc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xbcu)));
  FPOP();
/* 932c42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932c44: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932c47: jne 0x932c50 */
  if (!zf) goto L_932c50;
L_932c49: /* 932c49: mov ecx, 1 */
  ecx = 0x1u;
/* 932c4e: jmp 0x932c52 */
  goto L_932c52;
L_932c50: /* 932c50: xor ecx, ecx */
  ecx = 0;
L_932c52: /* 932c52: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 932c56: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 932c58: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 932c5f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 932c61: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932c63: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 932c65: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932c68: jp 0x932c71 */
  if (pf) goto L_932c71;
L_932c6a: /* 932c6a: mov eax, 1 */
  eax = 0x1u;
/* 932c6f: jmp 0x932c73 */
  goto L_932c73;
L_932c71: /* 932c71: xor eax, eax */
  eax = 0;
L_932c73: /* 932c73: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 932c75: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932c77: je 0x932ca9 */
  if (zf) goto L_932ca9;
L_932c79: /* 932c79: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 932c7d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932c83: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 932c87: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 932c8b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932c91: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 932c95: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 932c99: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932c9f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 932ca3: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
L_932ca9: /* 932ca9: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 932cb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932cb2: je 0x932e8f */
  if (zf) goto L_932e8f;
L_932cb8: /* 932cb8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 932cba: jge 0x932e8f */
  if ((sf == of)) goto L_932e8f;
L_932cc0: /* 932cc0: fld dword ptr [esp + 0x100] */
  { double v = F32((uint32_t)(esp + 0x100u)); FPUSH(v); }
/* 932cc7: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 932cc9: fcomp dword ptr [esp + 0x108] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x108u)));
  FPOP();
/* 932cd0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932cd2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932cd5: jp 0x932e8f */
  if (pf) goto L_932e8f;
L_932cdb: /* 932cdb: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 932cdf: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932ce5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 932ce9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 932ced: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932cf3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 932cf7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 932cfb: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932d01: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 932d05: fchs  */
  ST0 = -ST0;
/* 932d07: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 932d0b: fabs  */
  ST0 = fabs(ST0);
/* 932d0d: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 932d14: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 932d16: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932d18: jmp 0x932e8f */
  goto L_932e8f;
L_932d1d: /* 932d1d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 932d1f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 932d21: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 932d27: jge 0x932d85 */
  if ((sf == of)) goto L_932d85;
L_932d29: /* 932d29: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 932d2d: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 932d31: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 932d37: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 932d3b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 932d3f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 932d43: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 932d47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932d49: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 932d4d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932d50: jp 0x932e27 */
  if (pf) goto L_932e27;
L_932d56: /* 932d56: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 932d5a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932d60: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 932d64: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 932d68: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932d6e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 932d72: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 932d76: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932d7c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 932d80: jmp 0x932e27 */
  goto L_932e27;
L_932d85: /* 932d85: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 932d89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932d8b: je 0x932e04 */
  if (zf) goto L_932e04;
L_932d8d: /* 932d8d: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 932d90: fld dword ptr [esp + ecx*4 + 0x74] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x74u)); FPUSH(v); }
/* 932d94: lea eax, [esp + ecx*4 + 0x70] */
  eax = (uint32_t)(esp + ecx*4 + 0x70u);
/* 932d98: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 932d9b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 932d9e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 932da1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932da3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 932da7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 932daa: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 932dac: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 932dae: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 932db1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932db3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 932db7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 932db9: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 932dbc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 932dbf: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 932dc1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932dc3: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 932dc7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 932dcb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 932dd1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932dd3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932dd6: jp 0x932e27 */
  if (pf) goto L_932e27;
L_932dd8: /* 932dd8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 932ddc: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932de2: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 932de6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 932dea: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932df0: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 932df4: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 932df8: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 932dfe: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 932e02: jmp 0x932e27 */
  goto L_932e27;
L_932e04: /* 932e04: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 932e07: mov ecx, dword ptr [esp + edx*4 + 0x94] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x94u));
/* 932e0e: lea eax, [esp + edx*4 + 0x94] */
  eax = (uint32_t)(esp + edx*4 + 0x94u);
/* 932e15: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 932e18: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 932e1b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 932e1f: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 932e23: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_932e27: /* 932e27: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 932e2d: xor eax, eax */
  eax = 0;
/* 932e2f: nop  */
L_932e30: /* 932e30: fld dword ptr [esp + eax*4 + 0x10] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x10u)); FPUSH(v); }
/* 932e34: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 932e35: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 932e38: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 932e3a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 932e3c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 932e3e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 932e40: jl 0x932e30 */
  if ((sf != of)) goto L_932e30;
L_932e42: /* 932e42: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 932e48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932e4a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932e4d: jne 0x932e75 */
  if (!zf) goto L_932e75;
L_932e4f: /* 932e4f: fsqrt  */
  ST0 = sqrt(ST0);
/* 932e51: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 932e57: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 932e5b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 932e5d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 932e61: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 932e65: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 932e67: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 932e6b: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 932e6f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 932e73: jmp 0x932e8f */
  goto L_932e8f;
L_932e75: /* 932e75: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 932e77: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
/* 932e7f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 932e87: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_932e8f: /* 932e8f: fsub dword ptr [esp + 0x100] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x100u)));
/* 932e96: fst dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0);
/* 932e9a: fcomp dword ptr [esp + 0x108] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x108u)));
  FPOP();
/* 932ea1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932ea3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932ea6: jp 0x933115 */
  if (pf) goto L_933115;
L_932eac: /* 932eac: mov ebx, dword ptr [esp + 0x104] */
  ebx = R32((uint32_t)(esp + 0x104u));
/* 932eb3: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 932eb6: mov ebp, dword ptr [esp + 0x10c] */
  ebp = R32((uint32_t)(esp + 0x10cu));
/* 932ebd: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 932ec0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 932ec3: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 932ec6: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 932eca: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 932ecd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 932ece: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 932ecf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 932ed0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932ed2: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 932ed6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 932ed8: mov dword ptr [esp + 0xd4], ecx */
  W32((uint32_t)(esp + 0xd4u), ecx);
/* 932edf: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 932ee1: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 932ee5: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 932ee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 932eea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932eec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 932eed: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 932eef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 932ef0: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 932ef4: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 932ef8: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 932efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 932efc: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 932efe: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 932f05: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 932f08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 932f09: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 932f0c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932f0e: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 932f11: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 932f14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932f16: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 932f1a: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 932f1d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 932f1f: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 932f22: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 932f25: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932f27: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 932f2a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 932f2d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932f2f: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 932f33: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x932f38u); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 932f38: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 932f3c: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 932f3f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 932f45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932f47: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932f4a: jp 0x9330e4 */
  if (pf) goto L_9330e4;
L_932f50: /* 932f50: mov eax, dword ptr [esp + 0xe8] */
  eax = R32((uint32_t)(esp + 0xe8u));
/* 932f57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 932f59: je 0x9330e4 */
  if (zf) goto L_9330e4;
L_932f5f: /* 932f5f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 932f63: mov edx, dword ptr [esp + 0xf0] */
  edx = R32((uint32_t)(esp + 0xf0u));
/* 932f6a: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 932f6d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 932f6f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 932f73: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 932f76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932f78: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 932f7c: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 932f7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932f80: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 932f84: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 932f87: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 932f8b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 932f8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932f90: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 932f94: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 932f96: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932f98: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 932f9a: fsubr dword ptr [esp + 0x100] */
  ST0 = (F32((uint32_t)(esp + 0x100u))) - ST0;
/* 932fa1: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 932fa5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 932fa9: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 932fab: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 932faf: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 932fb2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932fb4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 932fb8: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 932fbb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 932fbd: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 932fc1: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 932fc7: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 932fcb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932fcd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 932fd0: jne 0x932fdb */
  if (!zf) goto L_932fdb;
L_932fd2: /* 932fd2: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 932fd9: jmp 0x932ff5 */
  goto L_932ff5;
L_932fdb: /* 932fdb: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 932fe1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932fe3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932fe6: jp 0x93303d */
  if (pf) goto L_93303d;
L_932fe8: /* 932fe8: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 932fec: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 932ff3: fchs  */
  ST0 = -ST0;
L_932ff5: /* 932ff5: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 932ff9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 932ffb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 932ffe: jp 0x933009 */
  if (pf) goto L_933009;
L_933000: /* 933000: fld dword ptr [esp + 0xfc] */
  { double v = F32((uint32_t)(esp + 0xfcu)); FPUSH(v); }
/* 933007: jmp 0x933044 */
  goto L_933044;
L_933009: /* 933009: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93300d: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 933011: fsubr dword ptr [esp + 0x34] */
  ST0 = (F32((uint32_t)(esp + 0x34u))) - ST0;
/* 933015: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 933019: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 93301d: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 933024: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 933026: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933028: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93302b: jne 0x933033 */
  if (!zf) goto L_933033;
L_93302d: /* 93302d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 933031: jmp 0x933044 */
  goto L_933044;
L_933033: /* 933033: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 933037: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 93303b: jmp 0x933044 */
  goto L_933044;
L_93303d: /* 93303d: fld dword ptr [esp + 0xe8] */
  { double v = F32((uint32_t)(esp + 0xe8u)); FPUSH(v); }
L_933044: /* 933044: fcom dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
/* 933048: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93304a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93304d: jnp 0x9330e2 */
  if (!pf) goto L_9330e2;
L_933053: /* 933053: fld dword ptr [esp + 0x100] */
  { double v = F32((uint32_t)(esp + 0x100u)); FPUSH(v); }
/* 93305a: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 93305e: fchs  */
  ST0 = -ST0;
/* 933060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 933061: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 933065: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 933066: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 933068: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93306a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93306c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 93306e: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 933070: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 933072: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 933074: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 933078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933079: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 93307d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93307e: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 933081: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 933085: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933086: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 93308d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93308f: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 933093: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 933096: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 93309d: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9330a1: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9330a3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9330a5: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 9330ac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9330ae: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 9330b2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9330b4: fadd dword ptr [esp + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x84u)));
/* 9330bb: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 9330c2: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 9330c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9330c8: fadd dword ptr [esp + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x88u)));
/* 9330cf: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 9330d6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9330d8: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x9330ddu); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 9330dd: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9330e0: jmp 0x9330e4 */
  goto L_9330e4;
L_9330e2: /* 9330e2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9330e4: /* 9330e4: mov ecx, dword ptr [esp + 0xc8] */
  ecx = R32((uint32_t)(esp + 0xc8u));
/* 9330eb: cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9330ee: jge 0x933115 */
  if ((sf == of)) goto L_933115;
L_9330f0: /* 9330f0: mov edx, dword ptr [esp + 0xf0] */
  edx = R32((uint32_t)(esp + 0xf0u));
/* 9330f7: lea eax, [ecx + ecx*4] */
  eax = (uint32_t)(ecx + ecx*4);
/* 9330fa: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9330fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_933100: /* 933100: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 933103: mov edi, dword ptr [edx + 0x10] */
  edi = R32((uint32_t)(edx + 0x10u));
/* 933106: mov dword ptr [eax + esi + 0x24], edi */
  W32((uint32_t)(eax + esi + 0x24u), edi);
/* 93310a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 93310d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 93310e: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 933111: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 933113: jl 0x933100 */
  if ((sf != of)) goto L_933100;
L_933115: /* 933115: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 933116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 933117: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 933118: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 933119: add esp, 0xdc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93311f: ret  */
  esp += 4; SPILL(); return;
}

void f_933120(void) {
  LOAD_REGS();
L_933120: /* 933120: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 933123: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 933127: xor eax, eax */
  eax = 0;
/* 933129: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 93312d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 933131: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 933135: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 933139: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 93313d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93313e: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 933140: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 933142: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933143: mov dword ptr [esp + 0x18], 0x932080 */
  W32((uint32_t)(esp + 0x18u), 0x932080u);
/* 93314b: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 933153: call 0x929df0 */
  esp -= 4; W32(esp, 0x933158u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 933158: mov eax, 1 */
  eax = 0x1u;
/* 93315d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 933160: ret 4 */
  esp += 8; SPILL(); return;
}

void f_933170(void) {
  LOAD_REGS();
L_933170: /* 933170: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933171: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 933175: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 933179: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 93317d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 933181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 933182: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 933186: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93318a: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 93318c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 93318e: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 933191: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 933194: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 933197: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 93319a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93319c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93319e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9331a0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9331a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9331a4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9331a6: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9331a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9331aa: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9331ae: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9331b0: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9331b2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9331b4: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9331b7: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9331b9: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9331bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9331be: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9331c2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9331c6: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 9331ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9331cc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9331cf: jp 0x9331f5 */
  if (pf) goto L_9331f5;
L_9331d1: /* 9331d1: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9331d5: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 9331dc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9331de: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9331e1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9331e4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 9331e7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 9331ea: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 9331ed: mov eax, 1 */
  eax = 0x1u;
/* 9331f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9331f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9331f4: ret  */
  esp += 4; SPILL(); return;
L_9331f5: /* 9331f5: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9331f9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9331ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933201: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 933204: jp 0x93321a */
  if (pf) goto L_93321a;
L_933206: /* 933206: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93320a: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 93320e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933210: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 933213: jne 0x93321a */
  if (!zf) goto L_93321a;
L_933215: /* 933215: xor eax, eax */
  eax = 0;
/* 933217: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 933218: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 933219: ret  */
  esp += 4; SPILL(); return;
L_93321a: /* 93321a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93321e: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 933222: fsubr dword ptr [esp + 0x14] */
  ST0 = (F32((uint32_t)(esp + 0x14u))) - ST0;
/* 933226: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93322a: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 93322e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933230: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 933233: jne 0x93323a */
  if (!zf) goto L_93323a;
L_933235: /* 933235: xor eax, eax */
  eax = 0;
/* 933237: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 933238: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 933239: ret  */
  esp += 4; SPILL(); return;
L_93323a: /* 93323a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93323e: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 933242: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 933248: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93324a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93324d: jne 0x93326b */
  if (!zf) goto L_93326b;
L_93324f: /* 93324f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 933251: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 933253: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 933257: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 93325b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93325d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93325f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 933261: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 933264: jp 0x93326d */
  if (pf) goto L_93326d;
L_933266: /* 933266: xor eax, eax */
  eax = 0;
/* 933268: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 933269: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 93326a: ret  */
  esp += 4; SPILL(); return;
L_93326b: /* 93326b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93326d: /* 93326d: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 933271: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 933275: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 933279: fsqrt  */
  ST0 = sqrt(ST0);
/* 93327b: fsubr dword ptr [esp + 0xc] */
  ST0 = (F32((uint32_t)(esp + 0xcu))) - ST0;
/* 93327f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 933281: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 933284: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 933286: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 933288: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 93328a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93328d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93328f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 933292: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 933295: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 933298: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93329b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93329c: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 93329f: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 9332a2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9332a8: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
/* 9332ac: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9332af: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 9332b1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9332b3: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 9332b6: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9332b9: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 9332bc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9332be: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 9332c1: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 9332c4: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 9332c7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9332c9: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 9332cc: mov eax, 1 */
  eax = 0x1u;
/* 9332d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9332d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9332d4: ret  */
  esp += 4; SPILL(); return;
}

void f_9332e0(void) {
  LOAD_REGS();
L_9332e0: /* 9332e0: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9332e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9332e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9332e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9332e6: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 9332ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9332eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9332ec: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9332f1u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9332f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9332f2: mov edi, eax */
  edi = eax;
/* 9332f4: call 0x928730 */
  esp -= 4; W32(esp, 0x9332f9u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9332f9: mov esi, eax */
  esi = eax;
/* 9332fb: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 9332ff: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 933301: xor ecx, ecx */
  ecx = 0;
/* 933303: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 933306: xor edx, edx */
  edx = 0;
/* 933308: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 93330b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 93330f: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 933312: xor ebp, ebp */
  ebp = 0;
/* 933314: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 933317: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 93331b: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 93331e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 933320: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 933322: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 933324: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 933327: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933329: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93332b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93332e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933330: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 933334: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 933336: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 933339: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93333b: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93333e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933340: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 933342: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 933345: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933347: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93334b: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93334e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 933350: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 933353: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933355: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 933357: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 93335a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93335c: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 933360: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 933362: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 933365: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 933368: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 93336b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93336e: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 933371: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 933373: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 933375: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 933377: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93337a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93337c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93337e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 933381: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933383: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 933387: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 933389: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93338c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93338e: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 933391: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933393: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 933395: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 933398: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93339a: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 93339e: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 9333a1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9333a3: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 9333a6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9333a8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9333aa: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 9333ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9333af: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9333b3: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 9333b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9333b8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9333bb: jne 0x9333e4 */
  if (!zf) goto L_9333e4;
L_9333bd: /* 9333bd: fcom dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
/* 9333c0: mov edx, 1 */
  edx = 0x1u;
/* 9333c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9333c7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9333ca: jp 0x933443 */
  if (pf) goto L_933443;
L_9333cc: /* 9333cc: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 9333cf: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 9333d3: fchs  */
  ST0 = -ST0;
/* 9333d5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9333d7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9333d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9333db: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9333de: jp 0x933443 */
  if (pf) goto L_933443;
L_9333e0: /* 9333e0: mov ebp, edx */
  ebp = edx;
/* 9333e2: jmp 0x933443 */
  goto L_933443;
L_9333e4: /* 9333e4: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 9333e7: fchs  */
  ST0 = -ST0;
/* 9333e9: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9333ed: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9333ef: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9333f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9333f3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9333f6: jne 0x933423 */
  if (!zf) goto L_933423;
L_9333f8: /* 9333f8: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 9333fb: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
/* 933403: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933405: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 933408: jne 0x93340f */
  if (!zf) goto L_93340f;
L_93340a: /* 93340a: mov edx, 1 */
  edx = 0x1u;
L_93340f: /* 93340f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 933411: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 933413: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933415: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 933417: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93341a: jp 0x933443 */
  if (pf) goto L_933443;
L_93341c: /* 93341c: mov ebp, 1 */
  ebp = 0x1u;
/* 933421: jmp 0x933443 */
  goto L_933443;
L_933423: /* 933423: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 933425: mov ebp, 1 */
  ebp = 0x1u;
/* 93342a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93342c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93342e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 933431: jne 0x933443 */
  if (!zf) goto L_933443;
L_933433: /* 933433: fcom dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
/* 933436: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 93343a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93343c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93343f: jne 0x933443 */
  if (!zf) goto L_933443;
L_933441: /* 933441: mov edx, ebp */
  edx = ebp;
L_933443: /* 933443: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 933447: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 93344f: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 933453: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 93345b: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 933463: xor eax, eax */
  eax = 0;
/* 933465: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 933469: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93346d: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 933471: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 933475: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 933479: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 93347d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_933483: /* 933483: fld dword ptr [esp + eax*4 + 0x20] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x20u)); FPUSH(v); }
/* 933487: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 933488: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93348b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93348d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93348f: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 933491: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 933493: jl 0x933483 */
  if ((sf != of)) goto L_933483;
L_933495: /* 933495: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93349b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93349d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9334a0: jne 0x9334d0 */
  if (!zf) goto L_9334d0;
L_9334a2: /* 9334a2: fsqrt  */
  ST0 = sqrt(ST0);
/* 9334a4: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 9334a8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9334ae: fdiv dword ptr [esp + 0x78] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x78u)));
/* 9334b2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9334b6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9334b8: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9334bc: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9334c0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9334c2: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9334c6: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 9334ca: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9334ce: jmp 0x9334f2 */
  goto L_9334f2;
L_9334d0: /* 9334d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9334d2: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 9334da: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 9334e2: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 9334ea: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
L_9334f2: /* 9334f2: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9334f4: mov ebx, dword ptr [esp + 0x78] */
  ebx = R32((uint32_t)(esp + 0x78u));
/* 9334f8: je 0x933538 */
  if (zf) goto L_933538;
L_9334fa: /* 9334fa: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9334fd: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 933501: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933502: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 933505: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 933506: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 93350a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93350b: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 93350f: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 933513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933514: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933515: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 933519: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93351a: call 0x933170 */
  esp -= 4; W32(esp, 0x93351fu); SPILL(); f_933170(); if (g_unwind) return; RELOAD();
/* 93351f: mov ecx, eax */
  ecx = eax;
/* 933521: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 933524: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 933526: je 0x933538 */
  if (zf) goto L_933538;
L_933528: /* 933528: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 93352c: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 93352f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933531: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 933534: jp 0x933538 */
  if (pf) goto L_933538;
L_933536: /* 933536: xor ecx, ecx */
  ecx = 0;
L_933538: /* 933538: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93353a: je 0x933582 */
  if (zf) goto L_933582;
L_93353c: /* 93353c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93353e: jne 0x933582 */
  if (!zf) goto L_933582;
L_933540: /* 933540: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 933543: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 933547: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933548: fchs  */
  ST0 = -ST0;
/* 93354a: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 93354d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 933551: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 933552: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 933556: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933557: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 93355b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93355c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93355d: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 933561: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933562: call 0x933170 */
  esp -= 4; W32(esp, 0x933567u); SPILL(); f_933170(); if (g_unwind) return; RELOAD();
/* 933567: mov ecx, eax */
  ecx = eax;
/* 933569: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93356c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93356e: je 0x933582 */
  if (zf) goto L_933582;
L_933570: /* 933570: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 933573: fchs  */
  ST0 = -ST0;
/* 933575: fcomp dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
  FPOP();
/* 933579: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93357b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93357e: jp 0x933582 */
  if (pf) goto L_933582;
L_933580: /* 933580: xor ecx, ecx */
  ecx = 0;
L_933582: /* 933582: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 933586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 933588: je 0x93387d */
  if (zf) goto L_93387d;
L_93358e: /* 93358e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 933590: jne 0x933601 */
  if (!zf) goto L_933601;
L_933592: /* 933592: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 933596: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 93359a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93359e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9335a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9335a4: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 9335a7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9335a9: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9335ab: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9335ad: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9335af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9335b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9335b4: jp 0x9336c6 */
  if (pf) goto L_9336c6;
L_9335ba: /* 9335ba: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9335be: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 9335c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9335c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9335c6: jp 0x9336c6 */
  if (pf) goto L_9336c6;
L_9335cc: /* 9335cc: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 9335cf: fchs  */
  ST0 = -ST0;
/* 9335d1: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 9335d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9335d7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9335da: jp 0x9336c6 */
  if (pf) goto L_9336c6;
L_9335e0: /* 9335e0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9335e4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9335e6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9335ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9335ec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9335f0: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 9335f4: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 9335f8: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 9335fc: mov ecx, 1 */
  ecx = 0x1u;
L_933601: /* 933601: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
L_933605: /* 933605: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 933609: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 933610: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 933612: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 933616: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93361a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93361b: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93361e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933620: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 933624: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 933627: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933629: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 93362c: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93362f: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 933633: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 933636: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93363a: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93363d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93363f: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 933643: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 933646: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933648: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93364b: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 93364e: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 933652: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 933655: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 933659: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93365c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93365e: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 933662: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 933665: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933667: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93366a: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 93366d: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 933671: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 933673: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 933677: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93367a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93367c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93367e: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 933681: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933683: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 933686: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 933688: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 93368b: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 93368f: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 933692: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933694: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 933698: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93369b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93369d: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 9336a0: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 9336a3: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9336a7: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 9336aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9336ac: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9336b0: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9336b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9336b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9336b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9336b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9336b8: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 9336bb: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 9336be: mov eax, ecx */
  eax = ecx;
/* 9336c0: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9336c3: ret 0x10 */
  esp += 20; SPILL(); return;
L_9336c6: /* 9336c6: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9336ca: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9336ce: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9336d2: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9336d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9336d8: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 9336dc: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9336e0: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9336e4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9336e8: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9336ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9336ee: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9336f0: fst dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0);
/* 9336f4: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 9336f8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9336fa: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9336fc: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 933700: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 933706: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 933708: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93370a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93370e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 933710: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 933714: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93371a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93371c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93371f: jne 0x933885 */
  if (!zf) goto L_933885;
L_933725: /* 933725: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 933729: fabs  */
  ST0 = fabs(ST0);
/* 93372b: fcomp dword ptr [0xa20e04] */
  fpu_com(ST0, F32((uint32_t)(0xa20e04u)));
  FPOP();
/* 933731: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933733: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 933736: jne 0x933885 */
  if (!zf) goto L_933885;
L_93373c: /* 93373c: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 933740: fchs  */
  ST0 = -ST0;
/* 933742: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 933746: fsqrt  */
  ST0 = sqrt(ST0);
/* 933748: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93374a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93374c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93374e: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 933752: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 933754: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 933756: fst dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0);
/* 93375a: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 93375e: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 933762: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 933766: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 93376a: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 93376e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 933774: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933776: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 933779: jne 0x933885 */
  if (!zf) goto L_933885;
L_93377f: /* 93377f: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 933783: fcomp dword ptr [esp + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x78u)));
  FPOP();
/* 933787: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933789: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93378c: jp 0x933885 */
  if (pf) goto L_933885;
L_933792: /* 933792: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 933796: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 933799: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93379b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93379e: jp 0x933885 */
  if (pf) goto L_933885;
L_9337a4: /* 9337a4: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 9337a7: fchs  */
  ST0 = -ST0;
/* 9337a9: fcomp dword ptr [esp + 0x7c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x7cu)));
  FPOP();
/* 9337ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9337af: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9337b2: jp 0x933885 */
  if (pf) goto L_933885;
L_9337b8: /* 9337b8: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 9337bc: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 9337c0: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9337c4: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 9337c8: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 9337d0: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 9337d4: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 9337d8: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 9337dc: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 9337e0: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 9337e4: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9337e8: xor eax, eax */
  eax = 0;
/* 9337ea: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 9337ee: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 9337f2: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 9337f6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9337fa: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 9337fe: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 933802: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 933806: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93380c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_933810: /* 933810: fld dword ptr [esp + eax*4 + 0x60] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x60u)); FPUSH(v); }
/* 933814: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 933815: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 933818: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93381a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93381c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 93381e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 933820: jl 0x933810 */
  if ((sf != of)) goto L_933810;
L_933822: /* 933822: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 933828: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93382a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93382d: jne 0x93385b */
  if (!zf) goto L_93385b;
L_93382f: /* 93382f: fsqrt  */
  ST0 = sqrt(ST0);
/* 933831: mov ecx, 1 */
  ecx = 0x1u;
/* 933836: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 93383c: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 933840: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 933842: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 933846: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93384a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93384c: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 933850: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 933856: jmp 0x933605 */
  goto L_933605;
L_93385b: /* 93385b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93385d: mov dword ptr [esp + 0x60], 0x3f800000 */
  W32((uint32_t)(esp + 0x60u), 0x3f800000u);
/* 933865: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93386b: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 933873: mov ecx, 1 */
  ecx = 0x1u;
/* 933878: jmp 0x933605 */
  goto L_933605;
L_93387d: /* 93387d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93387f: jne 0x933601 */
  if (!zf) goto L_933601;
L_933885: /* 933885: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 933886: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 933887: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 933888: xor eax, eax */
  eax = 0;
/* 93388a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93388b: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93388e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_9338a0(void) {
  LOAD_REGS();
L_9338a0: /* 9338a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9338a4: push 0x9332e0 */
  { uint32_t v = 0x9332e0u; esp -= 4; W32(esp, v); }
/* 9338a9: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9338ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9338ac: call 0x929ec0 */
  esp -= 4; W32(esp, 0x9338b1u); SPILL(); f_929ec0(); if (g_unwind) return; RELOAD();
/* 9338b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9338c0(void) {
  LOAD_REGS();
L_9338c0: /* 9338c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9338c1: mov ebp, esp */
  ebp = esp;
/* 9338c3: sub esp, 0x1e8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1e8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9338c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9338ca: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 9338cd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9338cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9338d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9338d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9338d2: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9338d7u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9338d7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9338da: mov esi, eax */
  esi = eax;
/* 9338dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9338dd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 9338e0: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9338e5u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9338e5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 9338e7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9338ea: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9338ed: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 9338ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9338f0: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 9338f3: call 0x928610 */
  esp -= 4; W32(esp, 0x9338f8u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 9338f8: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 9338fb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 9338fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9338fe: call 0x928610 */
  esp -= 4; W32(esp, 0x933903u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 933903: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 933906: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 933909: xor ecx, ecx */
  ecx = 0;
/* 93390b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93390c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 93390f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 933912: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 933915: call 0x92e600 */
  esp -= 4; W32(esp, 0x93391au); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93391a: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 93391d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93391e: call 0x92e620 */
  esp -= 4; W32(esp, 0x933923u); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 933923: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 933926: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 933928: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933929: call 0x928730 */
  esp -= 4; W32(esp, 0x93392eu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93392e: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 933931: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933932: mov esi, eax */
  esi = eax;
/* 933934: call 0x928730 */
  esp -= 4; W32(esp, 0x933939u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 933939: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 93393c: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 93393f: mov edi, eax */
  edi = eax;
/* 933941: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933942: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 933948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933949: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93394a: call 0x92ea60 */
  esp -= 4; W32(esp, 0x93394fu); SPILL(); f_92ea60(); if (g_unwind) return; RELOAD();
/* 93394f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 933952: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 933955: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 933958: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933959: lea edx, [ebp - 0x10] */
  edx = (uint32_t)(ebp + 0xfffffff0u);
/* 93395c: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 93395f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 933962: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933963: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 933966: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93396bu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93396b: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 93396e: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 933971: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 933974: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 933977: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933978: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93397a: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 93397d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93397f: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 933982: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 933985: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933987: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 93398a: call 0x92e280 */
  esp -= 4; W32(esp, 0x93398fu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93398f: lea eax, [edi + 0x20] */
  eax = (uint32_t)(edi + 0x20u);
/* 933992: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 933995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933996: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 933999: call 0x92e280 */
  esp -= 4; W32(esp, 0x93399eu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93399e: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 9339a1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9339a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 9339a7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9339aa: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9339ad: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9339b0: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9339b3: call 0x99cc00 */
  esp -= 4; W32(esp, 0x9339b8u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 9339b8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9339bb: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 9339be: mov ecx, esp */
  ecx = esp;
/* 9339c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9339c1: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 9339c4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 9339c7: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 9339ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9339cb: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 9339ce: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9339d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9339d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9339d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9339d4: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x9339d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9339d7: mov ebx, eax */
  ebx = eax;
/* 9339d9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9339dc: xor ecx, ecx */
  ecx = 0;
/* 9339de: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9339e1: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9339e3: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 9339e6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9339e8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9339eb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9339ee: jne 0x933a01 */
  if (!zf) goto L_933a01;
L_9339f0: /* 9339f0: xor eax, eax */
  eax = 0;
/* 9339f2: lea esp, [ebp - 0x1f4] */
  esp = (uint32_t)(ebp + 0xfffffe0cu);
/* 9339f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9339f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9339fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9339fb: mov esp, ebp */
  esp = ebp;
/* 9339fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9339fe: ret 8 */
  esp += 12; SPILL(); return;
L_933a01: /* 933a01: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 933a07: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 933a0a: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* 933a10: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 933a13: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* 933a19: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 933a1c: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 933a22: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 933a25: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 933a28: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 933a2b: lea eax, [edi + 0x20] */
  eax = (uint32_t)(edi + 0x20u);
/* 933a2e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 933a31: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 933a34: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933a36: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 933a38: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 933a3a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933a3c: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 933a42: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 933a45: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 933a48: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 933a4a: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 933a4d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933a4f: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 933a52: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 933a55: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933a57: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 933a5d: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 933a60: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 933a63: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 933a65: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 933a68: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933a6a: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 933a6d: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 933a70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933a72: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 933a78: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 933a7b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 933a7e: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 933a81: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 933a84: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933a86: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 933a89: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 933a8b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933a8d: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 933a93: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 933a96: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 933a99: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 933a9c: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 933a9f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933aa1: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 933aa4: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 933aa7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933aa9: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 933aaf: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 933ab2: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 933ab5: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 933ab8: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 933abb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933abd: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 933ac0: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 933ac3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933ac5: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 933acb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 933ace: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 933ad1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 933ad3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 933ad5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933ad7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 933ada: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 933add: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933adf: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 933ae5: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 933ae8: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 933aeb: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 933aee: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 933af1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933af3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 933af5: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 933af8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933afa: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 933b00: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 933b03: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 933b06: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 933b09: lea edx, [ebp - 0x10] */
  edx = (uint32_t)(ebp + 0xfffffff0u);
/* 933b0c: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 933b0f: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 933b12: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933b14: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 933b16: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 933b19: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 933b1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933b1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933b1e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933b20: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 933b26: call 0x933ec0 */
  esp -= 4; W32(esp, 0x933b2bu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 933b2b: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 933b2e: xor eax, eax */
  eax = 0;
/* 933b30: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 933b32: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 933b34: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 933b37: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 933b3a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 933b3d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933b3f: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 933b42: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 933b45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933b47: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 933b4a: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 933b4d: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 933b50: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 933b53: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 933b56: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933b58: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 933b5b: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 933b5e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933b60: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 933b63: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 933b66: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 933b69: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 933b6c: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 933b6f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933b71: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 933b74: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 933b77: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933b79: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 933b7c: jle 0x933d67 */
  if ((zf || sf != of)) goto L_933d67;
L_933b82: /* 933b82: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_933b85: /* 933b85: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 933b88: cmp dword ptr [edi + 0xc], 0x190 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(0x190u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 933b8f: jge 0x933d6a */
  if ((sf == of)) goto L_933d6a;
L_933b95: /* 933b95: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 933b98: mov edi, dword ptr [eax + 0x34] */
  edi = R32((uint32_t)(eax + 0x34u));
/* 933b9b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 933b9e: mov edx, dword ptr [edi + ecx] */
  edx = R32((uint32_t)(edi + ecx));
/* 933ba1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 933ba3: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 933ba6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933ba7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933ba8: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 933bae: call 0x933ef0 */
  esp -= 4; W32(esp, 0x933bb3u); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 933bb3: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 933bb6: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 933bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933bba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933bbb: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 933bc1: call 0x933ef0 */
  esp -= 4; W32(esp, 0x933bc6u); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 933bc6: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 933bc9: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 933bcc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933bcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933bce: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 933bd4: call 0x933ef0 */
  esp -= 4; W32(esp, 0x933bd9u); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 933bd9: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 933bdc: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 933bdf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933be0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933be1: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 933be7: call 0x933f50 */
  esp -= 4; W32(esp, 0x933becu); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 933bec: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 933bef: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 933bf2: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 933bf5: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 933bf8: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 933bfb: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 933bfe: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 933c00: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 933c03: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 933c05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933c06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933c07: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 933c0d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 933c10: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 933c13: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 933c19: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 933c1c: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 933c22: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 933c25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933c26: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 933c2c: call 0x933da0 */
  esp -= 4; W32(esp, 0x933c31u); SPILL(); f_933da0(); if (g_unwind) return; RELOAD();
/* 933c31: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 933c34: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 933c37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933c38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933c39: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 933c3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933c40: call 0x933da0 */
  esp -= 4; W32(esp, 0x933c45u); SPILL(); f_933da0(); if (g_unwind) return; RELOAD();
/* 933c45: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 933c48: lea ecx, [ebp - 0x1e8] */
  ecx = (uint32_t)(ebp + 0xfffffe18u);
/* 933c4e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 933c51: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 933c57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933c58: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 933c5b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 933c61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933c62: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 933c65: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 933c68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933c69: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 933c6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933c6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933c6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933c6f: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 933c72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933c73: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 933c76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933c77: lea edx, [ebp - 0xb0] */
  edx = (uint32_t)(ebp + 0xffffff50u);
/* 933c7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933c7e: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 933c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933c82: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 933c85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933c86: call 0x933fb0 */
  esp -= 4; W32(esp, 0x933c8bu); SPILL(); f_933fb0(); if (g_unwind) return; RELOAD();
/* 933c8b: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 933c8e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 933c90: je 0x933d4c */
  if (zf) goto L_933d4c;
L_933c96: /* 933c96: lea edx, [ebp - 0x10] */
  edx = (uint32_t)(ebp + 0xfffffff0u);
/* 933c99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933c9a: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 933c9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933c9e: mov ecx, esi */
  ecx = esi;
/* 933ca0: call 0x933f50 */
  esp -= 4; W32(esp, 0x933ca5u); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 933ca5: test byte ptr [ebp - 0x2c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd4u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 933ca9: jne 0x933cd1 */
  if (!zf) goto L_933cd1;
L_933cab: /* 933cab: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 933cae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933caf: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 933cb2: call 0x92e280 */
  esp -= 4; W32(esp, 0x933cb7u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 933cb7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 933cbd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933cbf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 933cc2: jp 0x933cd1 */
  if (pf) goto L_933cd1;
L_933cc4: /* 933cc4: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 933cc9: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 933ccc: call 0x933e90 */
  esp -= 4; W32(esp, 0x933cd1u); SPILL(); f_933e90(); if (g_unwind) return; RELOAD();
L_933cd1: /* 933cd1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 933cd4: lea eax, [ebp - 0x1e8] */
  eax = (uint32_t)(ebp + 0xfffffe18u);
/* 933cda: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 933cdc: lea edx, [ebp - 0x1e8] */
  edx = (uint32_t)(ebp + 0xfffffe18u);
/* 933ce2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 933ce5: je 0x933d3d */
  if (zf) goto L_933d3d;
L_933ce7: /* 933ce7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 933cea: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 933ced: cmp eax, 0x190 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x190u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 933cf2: jge 0x933d40 */
  if ((sf == of)) goto L_933d40;
L_933cf4: /* 933cf4: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 933cf7: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 933cfa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 933cfb: lea ebx, [ebx + edx*8] */
  ebx = (uint32_t)(ebx + edx*8);
/* 933cfe: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 933d01: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 933d04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 933d05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933d06: mov ecx, esi */
  ecx = esi;
/* 933d08: call 0x933ef0 */
  esp -= 4; W32(esp, 0x933d0du); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 933d0d: mov cx, word ptr [ebp + 0xa] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xau))) & 0xffffu);
/* 933d11: mov word ptr [ebx + 0x1c], cx */
  W16((uint32_t)(ebx + 0x1cu), (ecx & 0xffffu));
/* 933d15: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 933d18: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 933d1b: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 933d1e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 933d21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933d22: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 933d25: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* 933d28: call 0x933e40 */
  esp -= 4; W32(esp, 0x933d2du); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 933d2d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 933d30: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 933d33: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 933d36: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 933d38: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 933d3b: jne 0x933ce7 */
  if (!zf) goto L_933ce7;
L_933d3d: /* 933d3d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_933d40: /* 933d40: lea edx, [ebp - 0x10] */
  edx = (uint32_t)(ebp + 0xfffffff0u);
/* 933d43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 933d44: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 933d47: call 0x933e60 */
  esp -= 4; W32(esp, 0x933d4cu); SPILL(); f_933e60(); if (g_unwind) return; RELOAD();
L_933d4c: /* 933d4c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 933d4f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 933d52: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 933d55: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 933d56: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 933d59: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 933d5b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 933d5e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 933d61: jl 0x933b85 */
  if ((sf != of)) goto L_933b85;
L_933d67: /* 933d67: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_933d6a: /* 933d6a: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 933d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 933d6e: call 0x933dd0 */
  esp -= 4; W32(esp, 0x933d73u); SPILL(); f_933dd0(); if (g_unwind) return; RELOAD();
/* 933d73: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 933d75: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 933d78: xor eax, eax */
  eax = 0;
/* 933d7a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 933d7c: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 933d7f: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 933d82: lea esp, [ebp - 0x1f4] */
  esp = (uint32_t)(ebp + 0xfffffe0cu);
/* 933d88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 933d89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 933d8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 933d8b: mov esp, ebp */
  esp = ebp;
/* 933d8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 933d8e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_933da0(void) {
  LOAD_REGS();
L_933da0: /* 933da0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 933da4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 933da6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 933daa: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 933dac: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 933db0: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 933db2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 933db5: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 933db8: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 933dbb: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 933dbe: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 933dc1: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 933dc4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_933dd0(void) {
  LOAD_REGS();
L_933dd0: /* 933dd0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 933dd6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 933dda: xor edx, edx */
  edx = 0;
/* 933ddc: xor eax, eax */
  eax = 0;
/* 933dde: mov edi, edi */
  edi = edi;
L_933de0: /* 933de0: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 933de3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 933de4: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 933de7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 933de9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 933deb: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 933ded: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 933def: jl 0x933de0 */
  if ((sf != of)) goto L_933de0;
L_933df1: /* 933df1: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 933df7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 933df9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 933dfc: jne 0x933e1f */
  if (!zf) goto L_933e1f;
L_933dfe: /* 933dfe: fsqrt  */
  ST0 = sqrt(ST0);
/* 933e00: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 933e06: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 933e08: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 933e0a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 933e0c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 933e0e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 933e10: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 933e13: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 933e16: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 933e19: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 933e1c: ret 4 */
  esp += 8; SPILL(); return;
L_933e1f: /* 933e1f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 933e21: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 933e27: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 933e2d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 933e30: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 933e33: ret 4 */
  esp += 8; SPILL(); return;
}

void f_933e40(void) {
  LOAD_REGS();
L_933e40: /* 933e40: mov eax, ecx */
  eax = ecx;
/* 933e42: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 933e46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 933e48: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 933e4a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 933e4d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 933e50: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 933e53: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 933e56: ret 4 */
  esp += 8; SPILL(); return;
}

void f_933e60(void) {
  LOAD_REGS();
L_933e60: /* 933e60: mov eax, ecx */
  eax = ecx;
/* 933e62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 933e66: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 933e68: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 933e6a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 933e6c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 933e6f: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 933e72: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 933e75: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 933e78: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 933e7b: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 933e7e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_933e90(void) {
  LOAD_REGS();
L_933e90: /* 933e90: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 933e94: mov eax, ecx */
  eax = ecx;
/* 933e96: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 933e98: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 933e9a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 933e9e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 933ea1: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 933ea4: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 933ea8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 933eab: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 933eae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_933ec0(void) {
  LOAD_REGS();
L_933ec0: /* 933ec0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 933ec3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 933ec7: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 933eca: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 933ecd: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 933ed0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 933ed2: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 933ed4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 933ed8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 933eda: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 933edd: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 933ee0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_933ef0(void) {
  LOAD_REGS();
L_933ef0: /* 933ef0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 933ef4: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 933ef7: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 933efa: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 933efe: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 933f01: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 933f04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f06: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 933f08: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 933f0a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f0c: fadd dword ptr [ecx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x30u)));
/* 933f0f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 933f11: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 933f14: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 933f16: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 933f19: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 933f1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f1e: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 933f21: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 933f24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f26: fadd dword ptr [ecx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x34u)));
/* 933f29: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 933f2c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 933f2f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 933f31: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 933f34: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 933f37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f39: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 933f3c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 933f3f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f41: fadd dword ptr [ecx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x38u)));
/* 933f44: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 933f47: ret 8 */
  esp += 12; SPILL(); return;
}

void f_933f50(void) {
  LOAD_REGS();
L_933f50: /* 933f50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 933f54: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 933f57: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 933f5a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 933f5e: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 933f61: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 933f64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f66: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 933f68: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 933f6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f6c: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 933f6e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 933f71: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 933f73: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 933f76: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 933f79: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f7b: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 933f7e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 933f81: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f83: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 933f86: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 933f89: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 933f8b: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 933f8e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 933f91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f93: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 933f96: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 933f99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 933f9b: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 933f9e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_933fb0(void) {
  LOAD_REGS();
L_933fb0: /* 933fb0: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 933fb6: fld dword ptr [esp + 0xe4] */
  { double v = F32((uint32_t)(esp + 0xe4u)); FPUSH(v); }
/* 933fbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 933fbe: fmul dword ptr [esp + 0xe8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xe8u)));
/* 933fc5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 933fc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 933fc7: mov esi, dword ptr [esp + 0xfc] */
  esi = R32((uint32_t)(esp + 0xfcu));
/* 933fce: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 933fd1: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 933fd5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 933fd8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 933fda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 933fdb: fchs  */
  ST0 = -ST0;
/* 933fdd: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 933fe1: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 933fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 933fe6: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 933fea: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 933ff2: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 933ffa: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 933ffe: call 0x934970 */
  esp -= 4; W32(esp, 0x934003u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 934003: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 934007: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 93400b: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 93400f: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 934013: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 934017: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 93401b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93401c: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 934020: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 934024: call 0x92e280 */
  esp -= 4; W32(esp, 0x934029u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 934029: fcomp qword ptr [0xa214f0] */
  fpu_com(ST0, F64((uint32_t)(0xa214f0u)));
  FPOP();
/* 93402f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934031: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934034: jp 0x934066 */
  if (pf) goto L_934066;
L_934036: /* 934036: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93403c: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 934044: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 93404c: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 934054: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 93405c: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 934064: jmp 0x9340d1 */
  goto L_9340d1;
L_934066: /* 934066: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 93406a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93406b: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 93406f: call 0x92e280 */
  esp -= 4; W32(esp, 0x934074u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 934074: fsqrt  */
  ST0 = sqrt(ST0);
/* 934076: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 93407a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 934080: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934082: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934085: jnp 0x934095 */
  if (!pf) goto L_934095;
L_934087: /* 934087: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 93408b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93408c: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 934090: call 0x934990 */
  esp -= 4; W32(esp, 0x934095u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_934095: /* 934095: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 934099: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 93409d: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 9340a1: fchs  */
  ST0 = -ST0;
/* 9340a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9340a4: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 9340a8: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 9340ac: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 9340b4: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 9340b8: call 0x934970 */
  esp -= 4; W32(esp, 0x9340bdu); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 9340bd: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9340c1: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9340c5: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9340c9: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 9340cd: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
L_9340d1: /* 9340d1: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9340d4: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9340d8: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9340db: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9340dd: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9340e1: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 9340e9: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9340ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9340ee: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9340f0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9340f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9340f4: fabs  */
  ST0 = fabs(ST0);
/* 9340f6: fmul dword ptr [esp + 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xf8u)));
/* 9340fd: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 934100: fabs  */
  ST0 = fabs(ST0);
/* 934102: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 934104: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 934106: fmul dword ptr [esp + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xfcu)));
/* 93410d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93410f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 934113: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 934116: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 934119: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93411c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93411f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934121: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 934123: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 934125: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934127: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 934129: fabs  */
  ST0 = fabs(ST0);
/* 93412b: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 93412f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 934133: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 934139: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93413b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93413e: je 0x934148 */
  if (zf) goto L_934148;
L_934140: /* 934140: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
L_934148: /* 934148: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93414c: mov byte ptr [esp + 0x13], 0xc */
  W8((uint32_t)(esp + 0x13u), 0xcu);
/* 934151: fcomp dword ptr [esp + 0xf4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xf4u)));
  FPOP();
/* 934158: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93415a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93415d: jne 0x93416e */
  if (!zf) goto L_93416e;
L_93415f: /* 93415f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 934160: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 934163: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 934164: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 934166: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 934167: add esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93416d: ret  */
  esp += 4; SPILL(); return;
L_93416e: /* 93416e: test byte ptr [esi + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934172: jne 0x93419f */
  if (!zf) goto L_93419f;
L_934174: /* 934174: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 934178: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93417e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934180: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934183: jp 0x93419f */
  if (pf) goto L_93419f;
L_934185: /* 934185: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 934189: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 934191: fchs  */
  ST0 = -ST0;
/* 934193: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 934197: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 934199: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93419b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_93419f: /* 93419f: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 9341a3: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 9341a7: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 9341ab: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9341af: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 9341b3: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 9341b7: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 9341bb: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9341bf: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 9341c3: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9341c7: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 9341cb: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 9341cf: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9341d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9341d5: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9341d9: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9341dd: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9341e0: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9341e4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9341e8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9341ea: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 9341ee: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9341f1: call 0x92ec40 */
  esp -= 4; W32(esp, 0x9341f6u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 9341f6: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 9341fd: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 934201: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 934205: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 934207: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 93420b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93420f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 934212: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 934215: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 934217: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93421a: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93421e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 934221: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934223: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 934227: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 934229: mov ecx, dword ptr [esp + 0xe8] */
  ecx = R32((uint32_t)(esp + 0xe8u));
/* 934230: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934232: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 934236: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 934238: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93423b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93423d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 93423f: fcom dword ptr [0xa20e1c] */
  fpu_com(ST0, F32((uint32_t)(0xa20e1cu)));
/* 934245: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934247: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93424a: jne 0x934255 */
  if (!zf) goto L_934255;
L_93424c: /* 93424c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93424e: mov eax, 2 */
  eax = 0x2u;
/* 934253: jmp 0x93426c */
  goto L_93426c;
L_934255: /* 934255: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 93425b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93425d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934260: mov eax, 3 */
  eax = 0x3u;
/* 934265: jnp 0x93426c */
  if (!pf) goto L_93426c;
L_934267: /* 934267: mov eax, 1 */
  eax = 0x1u;
L_93426c: /* 93426c: mov edx, dword ptr [esp + 0xf0] */
  edx = R32((uint32_t)(esp + 0xf0u));
/* 934273: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 934278: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 93427b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93427d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 934280: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 934283: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 934287: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 93428a: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93428d: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 934291: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934293: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934296: jp 0x93429f */
  if (pf) goto L_93429f;
L_934298: /* 934298: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 93429b: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
L_93429f: /* 93429f: fcom dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
/* 9342a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9342a4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9342a7: jp 0x9342ae */
  if (pf) goto L_9342ae;
L_9342a9: /* 9342a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9342ab: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
L_9342ae: /* 9342ae: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9342b1: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9342b4: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 9342b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9342ba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9342bd: jp 0x9342c6 */
  if (pf) goto L_9342c6;
L_9342bf: /* 9342bf: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9342c2: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_9342c6: /* 9342c6: fcom dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
/* 9342c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9342cb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9342ce: jp 0x9342d5 */
  if (pf) goto L_9342d5;
L_9342d0: /* 9342d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9342d2: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
L_9342d5: /* 9342d5: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9342d9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9342db: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9342e1: fst dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0);
/* 9342e5: fabs  */
  ST0 = fabs(ST0);
/* 9342e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9342e9: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 9342ed: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9342f3: fadd dword ptr [esp + 0xfc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xfcu)));
/* 9342fa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9342fc: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 934300: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 934302: fcomp dword ptr [esp + 0xf4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xf4u)));
  FPOP();
/* 934309: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93430b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93430e: jne 0x934355 */
  if (!zf) goto L_934355;
L_934310: /* 934310: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 934314: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 93431c: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 934320: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 934326: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934328: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93432b: je 0x934335 */
  if (zf) goto L_934335;
L_93432d: /* 93432d: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
L_934335: /* 934335: fcomp dword ptr [esp + 0xf4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xf4u)));
  FPOP();
/* 93433c: mov byte ptr [esp + 0x13], 0xb */
  W8((uint32_t)(esp + 0x13u), 0xbu);
/* 934341: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934343: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934346: jne 0x934357 */
  if (!zf) goto L_934357;
L_934348: /* 934348: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 934349: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93434a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93434b: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93434d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93434e: add esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934354: ret  */
  esp += 4; SPILL(); return;
L_934355: /* 934355: fstp st(0) */
  STI(0) = ST0; FPOP();
L_934357: /* 934357: mov edi, dword ptr [esp + 0x104] */
  edi = R32((uint32_t)(esp + 0x104u));
/* 93435e: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 934360: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 934363: fabs  */
  ST0 = fabs(ST0);
/* 934365: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 934368: fabs  */
  ST0 = fabs(ST0);
/* 93436a: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93436d: fabs  */
  ST0 = fabs(ST0);
/* 93436f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 934373: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 934377: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 934379: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 934380: lea ebp, [edi + 0x18] */
  ebp = (uint32_t)(edi + 0x18u);
/* 934383: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 934386: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 93438d: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 934394: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 934396: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 93439a: fabs  */
  ST0 = fabs(ST0);
/* 93439c: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 93439f: fabs  */
  ST0 = fabs(ST0);
/* 9343a1: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 9343a4: fabs  */
  ST0 = fabs(ST0);
/* 9343a6: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9343aa: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 9343ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9343b0: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 9343b7: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 9343be: mov dword ptr [esp + 0x9c], ebx */
  W32((uint32_t)(esp + 0x9cu), ebx);
/* 9343c5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 9343c8: fabs  */
  ST0 = fabs(ST0);
/* 9343ca: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9343ce: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 9343d1: fabs  */
  ST0 = fabs(ST0);
/* 9343d3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9343d7: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 9343da: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 9343e1: fabs  */
  ST0 = fabs(ST0);
/* 9343e3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9343e6: mov dword ptr [esp + 0x98], ebp */
  W32((uint32_t)(esp + 0x98u), ebp);
/* 9343ed: call 0x92ec40 */
  esp -= 4; W32(esp, 0x9343f2u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 9343f2: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9343f6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9343fa: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9343fe: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 934405: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 934406: mov ecx, edi */
  ecx = edi;
/* 934408: mov dword ptr [esp + 0xb0], eax */
  W32((uint32_t)(esp + 0xb0u), eax);
/* 93440f: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 934416: call 0x92e280 */
  esp -= 4; W32(esp, 0x93441bu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93441b: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93441f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 934420: mov ecx, ebx */
  ecx = ebx;
/* 934422: call 0x92e280 */
  esp -= 4; W32(esp, 0x934427u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 934427: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 93442b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93442c: mov ecx, ebp */
  ecx = ebp;
/* 93442e: call 0x92e280 */
  esp -= 4; W32(esp, 0x934433u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 934433: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 934437: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 93443b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 93443d: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 934444: lea eax, [esp + 0x9c] */
  eax = (uint32_t)(esp + 0x9cu);
/* 93444b: xor ecx, ecx */
  ecx = 0;
/* 93444d: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 93444f: mov edx, edi */
  edx = edi;
/* 934451: mov ebp, esi */
  ebp = esi;
/* 934453: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 93445a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_934460: /* 934460: mov eax, 1 */
  eax = 0x1u;
/* 934465: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 934467: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 93446a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 93446d: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 934470: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 934473: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 934476: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 934479: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 93447c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93447e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934480: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 934486: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93448a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93448c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93448f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 934492: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 934499: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93449b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93449d: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 9344a1: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9344a5: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 9344a8: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 9344af: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9344b1: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9344b3: fsubr dword ptr [eax + ebp] */
  ST0 = (F32((uint32_t)(eax + ebp))) - ST0;
/* 9344b6: fcom dword ptr [esp + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x58u)));
/* 9344ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9344bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9344bf: jne 0x934563 */
  if (!zf) goto L_934563;
L_9344c5: /* 9344c5: fsqrt  */
  ST0 = sqrt(ST0);
/* 9344c7: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9344cd: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9344d1: fabs  */
  ST0 = fabs(ST0);
/* 9344d3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9344d5: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9344d9: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9344dd: fabs  */
  ST0 = fabs(ST0);
/* 9344df: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9344e1: fst dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0);
/* 9344e5: fadd dword ptr [esp + 0xf8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xf8u)));
/* 9344ec: fsubr dword ptr [esp + 0x40] */
  ST0 = (F32((uint32_t)(esp + 0x40u))) - ST0;
/* 9344f0: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 9344f4: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 9344f8: fcomp dword ptr [esp + 0xf4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xf4u)));
  FPOP();
/* 9344ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934501: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934504: jne 0x934563 */
  if (!zf) goto L_934563;
L_934506: /* 934506: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93450a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 93450e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 934514: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 934518: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 934520: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934522: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934525: je 0x93452f */
  if (zf) goto L_93452f;
L_934527: /* 934527: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
L_93452f: /* 93452f: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 934533: mov bl, cl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 934535: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 934539: or bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93453c: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 934540: mov byte ptr [esp + 0x13], bl */
  W8((uint32_t)(esp + 0x13u), (ebx & 0xffu));
/* 934544: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 93454b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93454f: fcomp dword ptr [esp + 0xf4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xf4u)));
  FPOP();
/* 934556: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934558: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93455b: je 0x934348 */
  if (zf) goto L_934348;
L_934561: /* 934561: jmp 0x934569 */
  goto L_934569;
L_934563: /* 934563: mov bl, byte ptr [esp + 0x13] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 934567: fstp st(0) */
  STI(0) = ST0; FPOP();
L_934569: /* 934569: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 93456a: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 93456d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 934570: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 934573: jl 0x934460 */
  if ((sf != of)) goto L_934460;
L_934579: /* 934579: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93457d: mov ecx, dword ptr [esp + 0xe0] */
  ecx = R32((uint32_t)(esp + 0xe0u));
/* 934584: mov ebp, dword ptr [esp + 0xec] */
  ebp = R32((uint32_t)(esp + 0xecu));
/* 93458b: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 93458d: test byte ptr [esi + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934591: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 934594: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 934598: je 0x934730 */
  if (zf) goto L_934730;
L_93459e: /* 93459e: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 9345a0: and al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 9345a2: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9345a4: jne 0x934685 */
  if (!zf) goto L_934685;
L_9345aa: /* 9345aa: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9345ae: fld dword ptr [esp + 0xfc] */
  { double v = F32((uint32_t)(esp + 0xfcu)); FPUSH(v); }
/* 9345b5: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 9345bc: fchs  */
  ST0 = -ST0;
/* 9345be: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 9345c4: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 9345cb: mov edx, ecx */
  edx = ecx;
/* 9345cd: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 9345d0: mov eax, dword ptr [esp + 0xe8] */
  eax = R32((uint32_t)(esp + 0xe8u));
/* 9345d7: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9345d9: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 9345dd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9345df: mov dword ptr [esp + 0x5c], 0x3f800000 */
  W32((uint32_t)(esp + 0x5cu), 0x3f800000u);
/* 9345e7: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 9345ef: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 9345f7: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 9345ff: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 934607: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93460a: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 93460e: fcomp dword ptr [esp + 0xf4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xf4u)));
  FPOP();
/* 934615: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934617: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93461a: jp 0x934623 */
  if (pf) goto L_934623;
L_93461c: /* 93461c: mov edx, 1 */
  edx = 0x1u;
/* 934621: jmp 0x934625 */
  goto L_934625;
L_934623: /* 934623: xor edx, edx */
  edx = 0;
L_934625: /* 934625: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 934628: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93462b: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 93462f: fcomp dword ptr [esp + 0xf4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xf4u)));
  FPOP();
/* 934636: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934638: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93463b: jp 0x934644 */
  if (pf) goto L_934644;
L_93463d: /* 93463d: mov ecx, 1 */
  ecx = 0x1u;
/* 934642: jmp 0x934646 */
  goto L_934646;
L_934644: /* 934644: xor ecx, ecx */
  ecx = 0;
L_934646: /* 934646: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 934649: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93464c: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 934650: fcomp dword ptr [esp + 0xf4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xf4u)));
  FPOP();
/* 934657: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934659: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93465c: jp 0x934665 */
  if (pf) goto L_934665;
L_93465e: /* 93465e: mov eax, 1 */
  eax = 0x1u;
/* 934663: jmp 0x934667 */
  goto L_934667;
L_934665: /* 934665: xor eax, eax */
  eax = 0;
L_934667: /* 934667: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 934669: mov ecx, dword ptr [esp + 0xf0] */
  ecx = R32((uint32_t)(esp + 0xf0u));
/* 934670: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 934672: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 934675: sub eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 93467a: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 93467d: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 934680: jmp 0x934730 */
  goto L_934730;
L_934685: /* 934685: cmp bl, 0xc */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 934688: je 0x934730 */
  if (zf) goto L_934730;
L_93468e: /* 93468e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 934691: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 934694: fld dword ptr [edi + edx*4 + 4] */
  { double v = F32((uint32_t)(edi + edx*4 + 0x4u)); FPUSH(v); }
/* 934698: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 93469b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93469d: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 9346a5: fchs  */
  ST0 = -ST0;
/* 9346a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9346a9: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 9346ad: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9346b1: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9346b5: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 9346b9: mov edx, eax */
  edx = eax;
/* 9346bb: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 9346bf: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 9346c6: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9346ca: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9346ce: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9346d2: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 9346d8: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 9346dc: fst dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0);
/* 9346e0: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 9346e4: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9346e8: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 9346ef: fchs  */
  ST0 = -ST0;
/* 9346f1: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 9346f5: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9346f9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9346fd: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934701: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 934705: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 934707: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 93470b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93470f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 934713: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 934715: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 934718: mov ecx, dword ptr [esp + 0xf0] */
  ecx = R32((uint32_t)(esp + 0xf0u));
/* 93471f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 934722: mov eax, dword ptr [esp + 0xe8] */
  eax = R32((uint32_t)(esp + 0xe8u));
/* 934729: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 93472b: mov word ptr [ecx], 0x103 */
  W16((uint32_t)(ecx), 0x103u);
L_934730: /* 934730: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 934733: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 934735: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 934739: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93473a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93473b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93473c: call 0x9349f0 */
  esp -= 4; W32(esp, 0x934741u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 934741: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 934745: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 934749: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 93474d: mov dword ptr [esp + 0xc4], edx */
  W32((uint32_t)(esp + 0xc4u), edx);
/* 934754: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 934758: mov dword ptr [esp + 0xc8], eax */
  W32((uint32_t)(esp + 0xc8u), eax);
/* 93475f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 934762: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 934763: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 93476a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 93476d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93476e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93476f: call 0x9349f0 */
  esp -= 4; W32(esp, 0x934774u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 934774: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 934778: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 93477c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 934780: mov dword ptr [esp + 0xdc], edx */
  W32((uint32_t)(esp + 0xdcu), edx);
/* 934787: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 93478b: mov dword ptr [esp + 0xe0], eax */
  W32((uint32_t)(esp + 0xe0u), eax);
/* 934792: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 934794: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 934795: mov dword ptr [esp + 0xe8], ecx */
  W32((uint32_t)(esp + 0xe8u), ecx);
/* 93479c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 93479f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9347a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9347a1: call 0x9349f0 */
  esp -= 4; W32(esp, 0x9347a6u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 9347a6: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 9347aa: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 9347ae: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 9347b2: mov dword ptr [esp + 0xfc], ecx */
  W32((uint32_t)(esp + 0xfcu), ecx);
/* 9347b9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9347bb: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 9347c2: mov dword ptr [esp + 0xf8], eax */
  W32((uint32_t)(esp + 0xf8u), eax);
/* 9347c9: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9347cc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9347cf: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9347d2: mov ebx, dword ptr [esp + 0x120] */
  ebx = R32((uint32_t)(esp + 0x120u));
/* 9347d9: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9347dc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9347df: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9347e2: lea edx, [esp + 0xbc] */
  edx = (uint32_t)(esp + 0xbcu);
/* 9347e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9347eb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9347ed: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 9347f1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9347f3: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 9347f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9347f9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9347fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9347fd: mov edx, dword ptr [esp + 0x100] */
  edx = R32((uint32_t)(esp + 0x100u));
/* 934804: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 934805: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 934806: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 934807: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 934808: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 934809: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93480a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93480b: call 0x934ec0 */
  esp -= 4; W32(esp, 0x934810u); SPILL(); f_934ec0(); if (g_unwind) return; RELOAD();
/* 934810: mov al, byte ptr [esi + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x14u))) & 0xffu);
/* 934813: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934816: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934818: je 0x9348eb */
  if (zf) goto L_9348eb;
L_93481e: /* 93481e: mov ecx, dword ptr [esp + 0x108] */
  ecx = R32((uint32_t)(esp + 0x108u));
/* 934825: mov edx, dword ptr [esp + 0xf8] */
  edx = R32((uint32_t)(esp + 0xf8u));
/* 93482c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93482e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93482f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 934830: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 934831: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 934832: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 934833: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 934837: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 93483b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93483c: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 934840: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 934841: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 934849: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 934851: call 0x934a60 */
  esp -= 4; W32(esp, 0x934856u); SPILL(); f_934a60(); if (g_unwind) return; RELOAD();
/* 934856: mov ebp, dword ptr [esp + 0x108] */
  ebp = R32((uint32_t)(esp + 0x108u));
/* 93485d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934860: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934862: je 0x9348eb */
  if (zf) goto L_9348eb;
L_934868: /* 934868: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 93486b: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 93486f: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 934873: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 934876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 934877: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 93487a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93487b: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 93487f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 934880: call 0x934a30 */
  esp -= 4; W32(esp, 0x934885u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 934885: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934888: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 934889: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93488d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93488e: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 934892: call 0x9349c0 */
  esp -= 4; W32(esp, 0x934897u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 934897: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 93489b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93489c: call 0x933e40 */
  esp -= 4; W32(esp, 0x9348a1u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 9348a1: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9348a5: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 9348ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9348ad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9348b0: jp 0x9348eb */
  if (pf) goto L_9348eb;
L_9348b2: /* 9348b2: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9348b5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9348b9: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9348bd: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9348c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9348c1: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 9348c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9348c5: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9348c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9348ca: call 0x934a30 */
  esp -= 4; W32(esp, 0x9348cfu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 9348cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9348d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9348d3: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 9348d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9348d8: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 9348dc: call 0x9349c0 */
  esp -= 4; W32(esp, 0x9348e1u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 9348e1: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9348e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9348e6: call 0x933e40 */
  esp -= 4; W32(esp, 0x9348ebu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_9348eb: /* 9348eb: test byte ptr [esi + 0x14], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x14u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9348ef: je 0x93491e */
  if (zf) goto L_93491e;
L_9348f1: /* 9348f1: mov edx, dword ptr [esp + 0x108] */
  edx = R32((uint32_t)(esp + 0x108u));
/* 9348f8: mov eax, dword ptr [esp + 0xf8] */
  eax = R32((uint32_t)(esp + 0xf8u));
/* 9348ff: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 934906: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 934907: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 93490a: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93490f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 934911: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 934912: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 934913: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 934914: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 934915: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 934916: call 0x934dd0 */
  esp -= 4; W32(esp, 0x93491bu); SPILL(); f_934dd0(); if (g_unwind) return; RELOAD();
/* 93491b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_93491e: /* 93491e: test byte ptr [esi + 0x14], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x14u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934922: je 0x934951 */
  if (zf) goto L_934951;
L_934924: /* 934924: mov eax, dword ptr [esp + 0x108] */
  eax = R32((uint32_t)(esp + 0x108u));
/* 93492b: mov ecx, dword ptr [esp + 0xf8] */
  ecx = R32((uint32_t)(esp + 0xf8u));
/* 934932: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 934939: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93493a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 93493d: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 934942: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 934944: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 934945: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 934946: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 934947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 934948: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 934949: call 0x934dd0 */
  esp -= 4; W32(esp, 0x93494eu); SPILL(); f_934dd0(); if (g_unwind) return; RELOAD();
/* 93494e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_934951: /* 934951: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 934954: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 934958: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 934959: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93495a: xor eax, eax */
  eax = 0;
/* 93495c: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93495e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93495f: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 934962: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 934963: add esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934969: ret  */
  esp += 4; SPILL(); return;
}

void f_934970(void) {
  LOAD_REGS();
L_934970: /* 934970: mov eax, ecx */
  eax = ecx;
/* 934972: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 934976: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 934978: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 93497a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 93497d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 934980: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 934983: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 934986: ret 4 */
  esp += 8; SPILL(); return;
}

void f_934990(void) {
  LOAD_REGS();
L_934990: /* 934990: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 934996: mov eax, ecx */
  eax = ecx;
/* 934998: fdiv dword ptr [esp + 4] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x4u)));
/* 93499c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93499e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9349a0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9349a2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9349a4: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9349a7: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9349aa: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9349ad: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9349b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9349c0(void) {
  LOAD_REGS();
L_9349c0: /* 9349c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9349c4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9349c7: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 9349ca: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9349cd: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 9349d0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9349d2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9349d6: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 9349d8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9349da: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9349dd: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9349e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9349f0(void) {
  LOAD_REGS();
L_9349f0: /* 9349f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9349f4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9349f8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9349fb: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9349fe: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 934a02: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 934a05: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 934a08: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934a0a: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 934a0c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 934a0f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 934a11: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 934a13: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 934a16: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934a18: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 934a1b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 934a1d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 934a20: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 934a22: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 934a25: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934a27: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 934a2a: ret  */
  esp += 4; SPILL(); return;
}
