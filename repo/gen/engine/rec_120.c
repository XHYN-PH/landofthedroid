#include "recomp.h"
#include "rec_mod.h"

void f_90e590(void) {
  LOAD_REGS();
L_90e590: /* 90e590: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e594: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90e595: call 0x972710 */
  esp -= 4; W32(esp, 0x90e59au); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 90e59a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90e59d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90e59f: je 0x90e5a7 */
  if (zf) goto L_90e5a7;
L_90e5a1: /* 90e5a1: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 90e5a4: ret 4 */
  esp += 8; SPILL(); return;
L_90e5a7: /* 90e5a7: xor eax, eax */
  eax = 0;
/* 90e5a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e5b0(void) {
  LOAD_REGS();
L_90e5b0: /* 90e5b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e5b4: mov edx, dword ptr [eax + 0x1a4] */
  edx = R32((uint32_t)(eax + 0x1a4u));
/* 90e5ba: lea ecx, [eax + 0x1ac] */
  ecx = (uint32_t)(eax + 0x1acu);
/* 90e5c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90e5c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90e5c2: call 0x972770 */
  esp -= 4; W32(esp, 0x90e5c7u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 90e5c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90e5ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90e5cc: je 0x90e5d4 */
  if (zf) goto L_90e5d4;
L_90e5ce: /* 90e5ce: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 90e5d1: ret 4 */
  esp += 8; SPILL(); return;
L_90e5d4: /* 90e5d4: xor eax, eax */
  eax = 0;
/* 90e5d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e5e0(void) {
  LOAD_REGS();
L_90e5e0: /* 90e5e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e5e4: fld dword ptr [eax + 0x230] */
  { double v = F32((uint32_t)(eax + 0x230u)); FPUSH(v); }
/* 90e5ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e5f0(void) {
  LOAD_REGS();
L_90e5f0: /* 90e5f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90e5f4: xor ecx, ecx */
  ecx = 0;
/* 90e5f6: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 90e5fb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90e5fd: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 90e600: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 90e603: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 90e606: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90e60a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90e60d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 90e610: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 90e613: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 90e616: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 90e619: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 90e61c: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 90e61f: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 90e622: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 90e625: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 90e628: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 90e62b: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 90e62e: cmp dword ptr [edx + 0x19c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x19cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90e634: je 0x90e663 */
  if (zf) goto L_90e663;
L_90e636: /* 90e636: fld dword ptr [edx + 0x190] */
  { double v = F32((uint32_t)(edx + 0x190u)); FPUSH(v); }
/* 90e63c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 90e642: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 90e645: fld dword ptr [edx + 0x194] */
  { double v = F32((uint32_t)(edx + 0x194u)); FPUSH(v); }
/* 90e64b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 90e651: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 90e654: fld dword ptr [edx + 0x198] */
  { double v = F32((uint32_t)(edx + 0x198u)); FPUSH(v); }
/* 90e65a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 90e660: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
L_90e663: /* 90e663: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e670(void) {
  LOAD_REGS();
L_90e670: /* 90e670: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e674: mov edx, dword ptr [eax + 0x190] */
  edx = R32((uint32_t)(eax + 0x190u));
/* 90e67a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e67e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e680: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 90e686: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e689: mov eax, dword ptr [eax + 0x198] */
  eax = R32((uint32_t)(eax + 0x198u));
/* 90e68f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90e692: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e6a0(void) {
  LOAD_REGS();
L_90e6a0: /* 90e6a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e6a4: fld dword ptr [eax + 0x150] */
  { double v = F32((uint32_t)(eax + 0x150u)); FPUSH(v); }
/* 90e6aa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e6ae: fmul dword ptr [eax + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x198u)));
/* 90e6b4: fld dword ptr [eax + 0x140] */
  { double v = F32((uint32_t)(eax + 0x140u)); FPUSH(v); }
/* 90e6ba: fmul dword ptr [eax + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x194u)));
/* 90e6c0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e6c2: fld dword ptr [eax + 0x130] */
  { double v = F32((uint32_t)(eax + 0x130u)); FPUSH(v); }
/* 90e6c8: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 90e6ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e6d0: fadd dword ptr [eax + 0x160] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x160u)));
/* 90e6d6: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 90e6d8: fld dword ptr [eax + 0x134] */
  { double v = F32((uint32_t)(eax + 0x134u)); FPUSH(v); }
/* 90e6de: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 90e6e4: fld dword ptr [eax + 0x154] */
  { double v = F32((uint32_t)(eax + 0x154u)); FPUSH(v); }
/* 90e6ea: fmul dword ptr [eax + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x198u)));
/* 90e6f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e6f2: fld dword ptr [eax + 0x144] */
  { double v = F32((uint32_t)(eax + 0x144u)); FPUSH(v); }
/* 90e6f8: fmul dword ptr [eax + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x194u)));
/* 90e6fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e700: fadd dword ptr [eax + 0x164] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x164u)));
/* 90e706: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 90e709: fld dword ptr [eax + 0x138] */
  { double v = F32((uint32_t)(eax + 0x138u)); FPUSH(v); }
/* 90e70f: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 90e715: fld dword ptr [eax + 0x158] */
  { double v = F32((uint32_t)(eax + 0x158u)); FPUSH(v); }
/* 90e71b: fmul dword ptr [eax + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x198u)));
/* 90e721: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e723: fld dword ptr [eax + 0x148] */
  { double v = F32((uint32_t)(eax + 0x148u)); FPUSH(v); }
/* 90e729: fmul dword ptr [eax + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x194u)));
/* 90e72f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e731: fadd dword ptr [eax + 0x168] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x168u)));
/* 90e737: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 90e73a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e740(void) {
  LOAD_REGS();
L_90e740: /* 90e740: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e744: add eax, 0xf0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90e749: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e750(void) {
  LOAD_REGS();
L_90e750: /* 90e750: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e754: fld dword ptr [eax + 0x238] */
  { double v = F32((uint32_t)(eax + 0x238u)); FPUSH(v); }
/* 90e75a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e760(void) {
  LOAD_REGS();
L_90e760: /* 90e760: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e764: mov eax, dword ptr [eax + 0x1a8] */
  eax = R32((uint32_t)(eax + 0x1a8u));
/* 90e76a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e770(void) {
  LOAD_REGS();
L_90e770: /* 90e770: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90e774: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90e778: mov dword ptr [ecx + 0x1dc], eax */
  W32((uint32_t)(ecx + 0x1dcu), eax);
/* 90e77e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e790(void) {
  LOAD_REGS();
L_90e790: /* 90e790: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e794: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90e795: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 90e799: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90e79a: lea edi, [eax + 0x130] */
  edi = (uint32_t)(eax + 0x130u);
/* 90e7a0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 90e7a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90e7a6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 90e7a8: call 0x90d370 */
  esp -= 4; W32(esp, 0x90e7adu); SPILL(); f_90d370(); if (g_unwind) return; RELOAD();
/* 90e7ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90e7ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90e7af: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e7c0(void) {
  LOAD_REGS();
L_90e7c0: /* 90e7c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e7c4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90e7c8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90e7cc: fstp dword ptr [eax + 0x160] */
  WF32((uint32_t)(eax + 0x160u), ST0); FPOP();
/* 90e7d2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90e7d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90e7d7: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 90e7dd: mov dword ptr [eax + 0x168], edx */
  W32((uint32_t)(eax + 0x168u), edx);
/* 90e7e3: call 0x90d370 */
  esp -= 4; W32(esp, 0x90e7e8u); SPILL(); f_90d370(); if (g_unwind) return; RELOAD();
/* 90e7e8: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90e7f0(void) {
  LOAD_REGS();
L_90e7f0: /* 90e7f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e7f4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e7f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90e7fa: mov dword ptr [eax + 0x130], edx */
  W32((uint32_t)(eax + 0x130u), edx);
/* 90e800: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90e803: mov dword ptr [eax + 0x134], edx */
  W32((uint32_t)(eax + 0x134u), edx);
/* 90e809: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 90e80c: mov dword ptr [eax + 0x138], edx */
  W32((uint32_t)(eax + 0x138u), edx);
/* 90e812: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 90e815: mov dword ptr [eax + 0x140], edx */
  W32((uint32_t)(eax + 0x140u), edx);
/* 90e81b: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 90e81e: mov dword ptr [eax + 0x144], edx */
  W32((uint32_t)(eax + 0x144u), edx);
/* 90e824: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 90e827: mov dword ptr [eax + 0x148], edx */
  W32((uint32_t)(eax + 0x148u), edx);
/* 90e82d: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 90e830: mov dword ptr [eax + 0x150], edx */
  W32((uint32_t)(eax + 0x150u), edx);
/* 90e836: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 90e839: mov dword ptr [eax + 0x154], edx */
  W32((uint32_t)(eax + 0x154u), edx);
/* 90e83f: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 90e842: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90e843: mov dword ptr [eax + 0x158], ecx */
  W32((uint32_t)(eax + 0x158u), ecx);
/* 90e849: call 0x90d370 */
  esp -= 4; W32(esp, 0x90e84eu); SPILL(); f_90d370(); if (g_unwind) return; RELOAD();
/* 90e84e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e860(void) {
  LOAD_REGS();
L_90e860: /* 90e860: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90e863: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 90e867: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 90e86b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 90e86f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90e873: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 90e877: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 90e87b: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 90e87f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 90e883: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 90e887: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90e889: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 90e88b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 90e88f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 90e893: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e895: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90e897: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 90e89b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 90e89d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 90e8a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e8a3: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90e8a5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90e8a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e8a9: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 90e8ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90e8af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90e8b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90e8b3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 90e8b7: fabs  */
  ST0 = fabs(ST0);
/* 90e8b9: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 90e8bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90e8c1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90e8c4: jnp 0x90e902 */
  if (!pf) goto L_90e902;
L_90e8c6: /* 90e8c6: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 90e8ca: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 90e8d0: fabs  */
  ST0 = fabs(ST0);
/* 90e8d2: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 90e8d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90e8da: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90e8dd: jnp 0x90e902 */
  if (!pf) goto L_90e902;
L_90e8df: /* 90e8df: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 90e8e3: xor eax, eax */
  eax = 0;
/* 90e8e5: fsqrt  */
  ST0 = sqrt(ST0);
/* 90e8e7: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 90e8ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_90e8f0: /* 90e8f0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90e8f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90e8f3: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90e8f6: fmul dword ptr [esp + eax*4 + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax*4 + 0x8u)));
/* 90e8fa: fstp dword ptr [esp + eax*4 + 8] */
  WF32((uint32_t)(esp + eax*4 + 0x8u), ST0); FPOP();
/* 90e8fe: jl 0x90e8f0 */
  if ((sf != of)) goto L_90e8f0;
L_90e900: /* 90e900: fstp st(0) */
  STI(0) = ST0; FPOP();
L_90e902: /* 90e902: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90e906: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 90e90a: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90e90e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90e90f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90e913: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90e917: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90e91b: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90e91f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 90e923: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 90e927: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 90e92b: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 90e92f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90e933: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 90e935: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90e939: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 90e93b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90e93d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90e941: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 90e945: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90e947: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90e94b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90e94f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90e951: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 90e955: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 90e959: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90e95d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90e95f: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 90e963: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 90e967: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 90e96b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 90e96f: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90e973: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 90e975: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 90e979: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90e97b: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 90e97d: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 90e981: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 90e985: fstp dword ptr [eax + 0x130] */
  WF32((uint32_t)(eax + 0x130u), ST0); FPOP();
/* 90e98b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90e98f: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 90e993: fstp dword ptr [eax + 0x140] */
  WF32((uint32_t)(eax + 0x140u), ST0); FPOP();
/* 90e999: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 90e99d: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 90e9a1: fstp dword ptr [eax + 0x150] */
  WF32((uint32_t)(eax + 0x150u), ST0); FPOP();
/* 90e9a7: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90e9ab: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 90e9af: fstp dword ptr [eax + 0x134] */
  WF32((uint32_t)(eax + 0x134u), ST0); FPOP();
/* 90e9b5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90e9b7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 90e9bb: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 90e9bd: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 90e9c1: fstp dword ptr [eax + 0x144] */
  WF32((uint32_t)(eax + 0x144u), ST0); FPOP();
/* 90e9c7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90e9cb: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 90e9cf: fstp dword ptr [eax + 0x154] */
  WF32((uint32_t)(eax + 0x154u), ST0); FPOP();
/* 90e9d5: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 90e9d9: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 90e9dd: fstp dword ptr [eax + 0x138] */
  WF32((uint32_t)(eax + 0x138u), ST0); FPOP();
/* 90e9e3: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90e9e7: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 90e9eb: fstp dword ptr [eax + 0x148] */
  WF32((uint32_t)(eax + 0x148u), ST0); FPOP();
/* 90e9f1: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 90e9f5: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 90e9f9: fstp dword ptr [eax + 0x158] */
  WF32((uint32_t)(eax + 0x158u), ST0); FPOP();
/* 90e9ff: call 0x90d370 */
  esp -= 4; W32(esp, 0x90ea04u); SPILL(); f_90d370(); if (g_unwind) return; RELOAD();
/* 90ea04: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ea07: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_90ea10(void) {
  LOAD_REGS();
L_90ea10: /* 90ea10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ea14: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90ea18: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90ea1c: fstp dword ptr [eax + 0x90] */
  WF32((uint32_t)(eax + 0x90u), ST0); FPOP();
/* 90ea22: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90ea26: mov dword ptr [eax + 0x94], ecx */
  W32((uint32_t)(eax + 0x94u), ecx);
/* 90ea2c: mov dword ptr [eax + 0x98], edx */
  W32((uint32_t)(eax + 0x98u), edx);
/* 90ea32: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90ea40(void) {
  LOAD_REGS();
L_90ea40: /* 90ea40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ea44: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90ea48: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90ea4c: fstp dword ptr [eax + 0xa0] */
  WF32((uint32_t)(eax + 0xa0u), ST0); FPOP();
/* 90ea52: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90ea56: mov dword ptr [eax + 0xa4], ecx */
  W32((uint32_t)(eax + 0xa4u), ecx);
/* 90ea5c: mov dword ptr [eax + 0xa8], edx */
  W32((uint32_t)(eax + 0xa8u), edx);
/* 90ea62: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90ea70(void) {
  LOAD_REGS();
L_90ea70: /* 90ea70: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90ea74: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ea78: fstp dword ptr [eax + 0x1f4] */
  WF32((uint32_t)(eax + 0x1f4u), ST0); FPOP();
/* 90ea7e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90ea90(void) {
  LOAD_REGS();
L_90ea90: /* 90ea90: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90ea94: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ea98: fstp dword ptr [eax + 0x1f8] */
  WF32((uint32_t)(eax + 0x1f8u), ST0); FPOP();
/* 90ea9e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90eab0(void) {
  LOAD_REGS();
L_90eab0: /* 90eab0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90eab4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 90eaba: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 90eabd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90eac1: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 90eac4: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 90eac7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90eacb: mov dword ptr [ecx + 0xe0], eax */
  W32((uint32_t)(ecx + 0xe0u), eax);
/* 90ead1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90ead5: mov dword ptr [ecx + 0xe4], edx */
  W32((uint32_t)(ecx + 0xe4u), edx);
/* 90eadb: mov dword ptr [ecx + 0xe8], eax */
  W32((uint32_t)(ecx + 0xe8u), eax);
/* 90eae1: xor edx, edx */
  edx = 0;
/* 90eae3: xor eax, eax */
  eax = 0;
L_90eae5: /* 90eae5: fld dword ptr [ecx + eax*4 + 0xe0] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0xe0u)); FPUSH(v); }
/* 90eaec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90eaed: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90eaf0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90eaf2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90eaf4: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 90eaf6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90eaf8: jl 0x90eae5 */
  if ((sf != of)) goto L_90eae5;
L_90eafa: /* 90eafa: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 90eb00: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90eb02: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90eb05: jne 0x90eb3a */
  if (!zf) goto L_90eb3a;
L_90eb07: /* 90eb07: fsqrt  */
  ST0 = sqrt(ST0);
/* 90eb09: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90eb0f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90eb11: fmul dword ptr [ecx + 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xe0u)));
/* 90eb17: fstp dword ptr [ecx + 0xe0] */
  WF32((uint32_t)(ecx + 0xe0u), ST0); FPOP();
/* 90eb1d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90eb1f: fmul dword ptr [ecx + 0xe4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xe4u)));
/* 90eb25: fstp dword ptr [ecx + 0xe4] */
  WF32((uint32_t)(ecx + 0xe4u), ST0); FPOP();
/* 90eb2b: fmul dword ptr [ecx + 0xe8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xe8u)));
/* 90eb31: fstp dword ptr [ecx + 0xe8] */
  WF32((uint32_t)(ecx + 0xe8u), ST0); FPOP();
/* 90eb37: ret 0x10 */
  esp += 20; SPILL(); return;
L_90eb3a: /* 90eb3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90eb3c: mov dword ptr [ecx + 0xe0], 0x3f800000 */
  W32((uint32_t)(ecx + 0xe0u), 0x3f800000u);
/* 90eb46: mov dword ptr [ecx + 0xe4], edx */
  W32((uint32_t)(ecx + 0xe4u), edx);
/* 90eb4c: mov dword ptr [ecx + 0xe8], edx */
  W32((uint32_t)(ecx + 0xe8u), edx);
/* 90eb52: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90eb60(void) {
  LOAD_REGS();
L_90eb60: /* 90eb60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90eb64: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 90eb68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90eb70(void) {
  LOAD_REGS();
L_90eb70: /* 90eb70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90eb74: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90eb78: fstp dword ptr [eax + 0x1f0] */
  WF32((uint32_t)(eax + 0x1f0u), ST0); FPOP();
/* 90eb7e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90eb82: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90eb88: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 90eb8b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90eb90(void) {
  LOAD_REGS();
L_90eb90: /* 90eb90: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90eb93: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 90eb97: mov eax, dword ptr [edx + 0x1a4] */
  eax = R32((uint32_t)(edx + 0x1a4u));
/* 90eb9d: fld dword ptr [eax + 0x180] */
  { double v = F32((uint32_t)(eax + 0x180u)); FPUSH(v); }
/* 90eba3: fmul dword ptr [eax + 0x17c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x17cu)));
/* 90eba9: fmul dword ptr [eax + 0x17c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x17cu)));
/* 90ebaf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 90ebb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90ebb5: fld dword ptr [0xa09ac8] */
  { double v = F32((uint32_t)(0xa09ac8u)); FPUSH(v); }
/* 90ebbb: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 90ebbf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90ebc2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90ebc4: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 90ebc8: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 90ebcb: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 90ebcf: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 90ebd3: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 90ebd6: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90ebda: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 90ebde: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 90ebe2: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 90ebe5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 90ebe9: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 90ebec: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 90ebf0: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 90ebf3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 90ebf7: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 90ebfa: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 90ebfd: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 90ec01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ec03: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 90ec07: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ec0a: jp 0x90ec12 */
  if (pf) goto L_90ec12;
L_90ec0c: /* 90ec0c: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90ec10: jmp 0x90ec16 */
  goto L_90ec16;
L_90ec12: /* 90ec12: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_90ec16: /* 90ec16: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90ec18: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 90ec1e: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 90ec22: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 90ec26: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ec28: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ec2b: jp 0x90ec37 */
  if (pf) goto L_90ec37;
L_90ec2d: /* 90ec2d: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 90ec31: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 90ec35: jmp 0x90ec4e */
  goto L_90ec4e;
L_90ec37: /* 90ec37: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90ec3b: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 90ec3f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ec41: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ec44: jnp 0x90ec4e */
  if (!pf) goto L_90ec4e;
L_90ec46: /* 90ec46: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 90ec4a: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
L_90ec4e: /* 90ec4e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90ec52: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 90ec56: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ec58: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ec5b: jp 0x90ec63 */
  if (pf) goto L_90ec63;
L_90ec5d: /* 90ec5d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90ec61: jmp 0x90ec67 */
  goto L_90ec67;
L_90ec63: /* 90ec63: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_90ec67: /* 90ec67: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 90ec6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ec6d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ec70: jp 0x90ec7c */
  if (pf) goto L_90ec7c;
L_90ec72: /* 90ec72: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 90ec76: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 90ec7a: jmp 0x90ec93 */
  goto L_90ec93;
L_90ec7c: /* 90ec7c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90ec80: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 90ec84: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ec86: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ec89: jnp 0x90ec93 */
  if (!pf) goto L_90ec93;
L_90ec8b: /* 90ec8b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 90ec8f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_90ec93: /* 90ec93: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 90ec97: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 90ec9b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ec9d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90eca0: jp 0x90eca8 */
  if (pf) goto L_90eca8;
L_90eca2: /* 90eca2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 90eca6: jmp 0x90ecac */
  goto L_90ecac;
L_90eca8: /* 90eca8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_90ecac: /* 90ecac: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 90ecb0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ecb2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ecb5: jp 0x90ecc1 */
  if (pf) goto L_90ecc1;
L_90ecb7: /* 90ecb7: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 90ecbb: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 90ecbf: jmp 0x90ecd8 */
  goto L_90ecd8;
L_90ecc1: /* 90ecc1: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 90ecc5: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 90ecc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90eccb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ecce: jnp 0x90ecd8 */
  if (!pf) goto L_90ecd8;
L_90ecd0: /* 90ecd0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 90ecd4: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_90ecd8: /* 90ecd8: xor eax, eax */
  eax = 0;
/* 90ecda: lea ecx, [edx + 0x70] */
  ecx = (uint32_t)(edx + 0x70u);
/* 90ecdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ecde: mov edi, edi */
  edi = edi;
L_90ece0: /* 90ece0: mov esi, dword ptr [esp + eax*4 + 4] */
  esi = R32((uint32_t)(esp + eax*4 + 0x4u));
/* 90ece4: mov dword ptr [ecx - 0x10], esi */
  W32((uint32_t)(ecx + 0xfffffff0u), esi);
/* 90ece7: mov esi, dword ptr [esp + eax*4 + 0x10] */
  esi = R32((uint32_t)(esp + eax*4 + 0x10u));
/* 90eceb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 90eced: mov esi, dword ptr [esp + eax*4 + 0x1c] */
  esi = R32((uint32_t)(esp + eax*4 + 0x1cu));
/* 90ecf1: mov dword ptr [ecx + 0x10], esi */
  W32((uint32_t)(ecx + 0x10u), esi);
/* 90ecf4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90ecf5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90ecf8: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90ecfb: jl 0x90ece0 */
  if ((sf != of)) goto L_90ece0;
L_90ecfd: /* 90ecfd: lea ecx, [edx + 0x50] */
  ecx = (uint32_t)(edx + 0x50u);
/* 90ed00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90ed01: lea eax, [edx + 0x40] */
  eax = (uint32_t)(edx + 0x40u);
/* 90ed04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90ed05: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90ed08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90ed09: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 90ed0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90ed0e: call 0x90ed20 */
  esp -= 4; W32(esp, 0x90ed13u); SPILL(); f_90ed20(); if (g_unwind) return; RELOAD();
/* 90ed13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ed16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90ed17: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ed1a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90ed20(void) {
  LOAD_REGS();
L_90ed20: /* 90ed20: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90ed23: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 90ed27: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 90ed2a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90ed2e: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 90ed31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ed32: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 90ed35: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 90ed38: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90ed3a: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 90ed3d: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 90ed40: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 90ed43: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 90ed46: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90ed48: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90ed4c: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 90ed4f: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 90ed52: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 90ed56: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 90ed59: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90ed5b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90ed5d: fsubr dword ptr [esp + 8] */
  ST0 = (F32((uint32_t)(esp + 0x8u))) - ST0;
/* 90ed61: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 90ed63: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90ed67: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 90ed6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ed6c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90ed6e: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 90ed71: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ed73: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90ed79: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 90ed7d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90ed7f: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90ed83: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90ed87: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90ed8b: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 90ed8e: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 90ed91: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 90ed93: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90ed95: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90ed97: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90ed99: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90ed9d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90eda1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90eda3: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 90eda6: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 90eda9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 90edab: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 90edae: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90edb0: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90edb4: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 90edb8: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 90edbb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90edbf: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 90edc2: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 90edc4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90edc6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90edc8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90edca: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90edce: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 90edd2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90edd4: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 90edd7: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 90edda: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 90edde: fsubr dword ptr [esp + 8] */
  ST0 = (F32((uint32_t)(esp + 0x8u))) - ST0;
/* 90ede2: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90ede6: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 90ede8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90edea: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 90eded: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 90edf0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 90edf3: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90edf7: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 90edfa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90edfe: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 90ee02: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 90ee05: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90ee08: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 90ee0a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 90ee0d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 90ee0f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 90ee12: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 90ee15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90ee16: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ee19: ret  */
  esp += 4; SPILL(); return;
}

void f_90ee20(void) {
  LOAD_REGS();
L_90ee20: /* 90ee20: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90ee23: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 90ee27: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 90ee2b: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 90ee2f: xor eax, eax */
  eax = 0;
/* 90ee31: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 90ee35: lea ecx, [edx + 0x70] */
  ecx = (uint32_t)(edx + 0x70u);
/* 90ee38: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 90ee3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ee3f: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 90ee43: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 90ee47: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 90ee4b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90ee4d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 90ee51: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 90ee55: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 90ee59: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 90ee5d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
L_90ee61: /* 90ee61: mov esi, dword ptr [esp + eax*4 + 4] */
  esi = R32((uint32_t)(esp + eax*4 + 0x4u));
/* 90ee65: mov dword ptr [ecx - 0x10], esi */
  W32((uint32_t)(ecx + 0xfffffff0u), esi);
/* 90ee68: mov esi, dword ptr [esp + eax*4 + 0x10] */
  esi = R32((uint32_t)(esp + eax*4 + 0x10u));
/* 90ee6c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 90ee6e: mov esi, dword ptr [esp + eax*4 + 0x1c] */
  esi = R32((uint32_t)(esp + eax*4 + 0x1cu));
/* 90ee72: mov dword ptr [ecx + 0x10], esi */
  W32((uint32_t)(ecx + 0x10u), esi);
/* 90ee75: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90ee76: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90ee79: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90ee7c: jl 0x90ee61 */
  if ((sf != of)) goto L_90ee61;
L_90ee7e: /* 90ee7e: lea eax, [edx + 0x50] */
  eax = (uint32_t)(edx + 0x50u);
/* 90ee81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90ee82: lea ecx, [edx + 0x40] */
  ecx = (uint32_t)(edx + 0x40u);
/* 90ee85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90ee86: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90ee89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90ee8a: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 90ee8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90ee8f: call 0x90ed20 */
  esp -= 4; W32(esp, 0x90ee94u); SPILL(); f_90ed20(); if (g_unwind) return; RELOAD();
/* 90ee94: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ee97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90ee98: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ee9b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90eea0(void) {
  LOAD_REGS();
L_90eea0: /* 90eea0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90eea4: mov eax, dword ptr [edx + 0x214] */
  eax = R32((uint32_t)(edx + 0x214u));
/* 90eeaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90eeac: jne 0x90ef1d */
  if (!zf) goto L_90ef1d;
L_90eeae: /* 90eeae: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90eeb2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 90eeb4: mov dword ptr [edx + 0x190], eax */
  W32((uint32_t)(edx + 0x190u), eax);
/* 90eeba: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90eebd: mov dword ptr [edx + 0x194], eax */
  W32((uint32_t)(edx + 0x194u), eax);
/* 90eec3: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 90eec6: mov dword ptr [edx + 0x198], eax */
  W32((uint32_t)(edx + 0x198u), eax);
/* 90eecc: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 90eece: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90eed4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90eed6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90eed9: jp 0x90ef0c */
  if (pf) goto L_90ef0c;
L_90eedb: /* 90eedb: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 90eede: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90eee4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90eee6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90eee9: jp 0x90ef0c */
  if (pf) goto L_90ef0c;
L_90eeeb: /* 90eeeb: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 90eeee: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90eef4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90eef6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90eef9: jp 0x90ef0c */
  if (pf) goto L_90ef0c;
L_90eefb: /* 90eefb: xor eax, eax */
  eax = 0;
/* 90eefd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90eefe: mov dword ptr [edx + 0x19c], eax */
  W32((uint32_t)(edx + 0x19cu), eax);
/* 90ef04: call 0x90d370 */
  esp -= 4; W32(esp, 0x90ef09u); SPILL(); f_90d370(); if (g_unwind) return; RELOAD();
/* 90ef09: ret 8 */
  esp += 12; SPILL(); return;
L_90ef0c: /* 90ef0c: mov eax, 1 */
  eax = 0x1u;
/* 90ef11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90ef12: mov dword ptr [edx + 0x19c], eax */
  W32((uint32_t)(edx + 0x19cu), eax);
/* 90ef18: call 0x90d370 */
  esp -= 4; W32(esp, 0x90ef1du); SPILL(); f_90d370(); if (g_unwind) return; RELOAD();
L_90ef1d: /* 90ef1d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90ef20(void) {
  LOAD_REGS();
L_90ef20: /* 90ef20: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90ef23: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90ef27: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 90ef2b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 90ef2d: fsub dword ptr [eax + 0x160] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x160u)));
/* 90ef33: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 90ef36: fsub dword ptr [eax + 0x164] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x164u)));
/* 90ef3c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 90ef3f: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 90ef43: fsub dword ptr [eax + 0x168] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x168u)));
/* 90ef49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90ef4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90ef4b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90ef4d: fmul dword ptr [eax + 0x138] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x138u)));
/* 90ef53: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90ef55: fmul dword ptr [eax + 0x134] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x134u)));
/* 90ef5b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ef5d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90ef5f: fmul dword ptr [eax + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x130u)));
/* 90ef65: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ef67: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 90ef6b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90ef6d: fmul dword ptr [eax + 0x148] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x148u)));
/* 90ef73: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90ef75: fmul dword ptr [eax + 0x144] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x144u)));
/* 90ef7b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ef7d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90ef7f: fmul dword ptr [eax + 0x140] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x140u)));
/* 90ef85: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ef87: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 90ef8b: fmul dword ptr [eax + 0x158] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x158u)));
/* 90ef91: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90ef93: fmul dword ptr [eax + 0x154] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x154u)));
/* 90ef99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ef9b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90ef9d: fmul dword ptr [eax + 0x150] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x150u)));
/* 90efa3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90efa5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 90efa9: call 0x90eea0 */
  esp -= 4; W32(esp, 0x90efaeu); SPILL(); f_90eea0(); if (g_unwind) return; RELOAD();
/* 90efae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90efb1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90efc0(void) {
  LOAD_REGS();
L_90efc0: /* 90efc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90efc4: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90efc7: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 90efcb: jmp 0x90eea0 */
  SPILL(); f_90eea0(); return;
}

void f_90efd0(void) {
  LOAD_REGS();
L_90efd0: /* 90efd0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90efd4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90efd8: fstp dword ptr [eax + 0x238] */
  WF32((uint32_t)(eax + 0x238u), ST0); FPOP();
/* 90efde: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90eff0(void) {
  LOAD_REGS();
L_90eff0: /* 90eff0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90eff1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90eff2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 90eff6: mov eax, dword ptr [esi + 0x1a4] */
  eax = R32((uint32_t)(esi + 0x1a4u));
/* 90effc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90effd: lea ebp, [esi + 0x1ac] */
  ebp = (uint32_t)(esi + 0x1acu);
/* 90f003: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90f004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f005: call 0x972510 */
  esp -= 4; W32(esp, 0x90f00au); SPILL(); f_972510(); if (g_unwind) return; RELOAD();
/* 90f00a: mov al, byte ptr [esi + 0x1ec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1ecu))) & 0xffu);
/* 90f010: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f013: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90f015: je 0x90f030 */
  if (zf) goto L_90f030;
L_90f017: /* 90f017: mov edx, dword ptr [esi + 0x1a4] */
  edx = R32((uint32_t)(esi + 0x1a4u));
/* 90f01d: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 90f023: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90f024: add edx, 0x68 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90f027: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90f028: call 0x972510 */
  esp -= 4; W32(esp, 0x90f02du); SPILL(); f_972510(); if (g_unwind) return; RELOAD();
/* 90f02d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90f030: /* 90f030: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 90f034: mov eax, dword ptr [esi + 0x1a4] */
  eax = R32((uint32_t)(esi + 0x1a4u));
/* 90f03a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f03b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90f03c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f03d: mov dword ptr [esi + 0x1a8], edi */
  W32((uint32_t)(esi + 0x1a8u), edi);
/* 90f043: call 0x9723a0 */
  esp -= 4; W32(esp, 0x90f048u); SPILL(); f_9723a0(); if (g_unwind) return; RELOAD();
/* 90f048: mov al, byte ptr [esi + 0x1ec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1ecu))) & 0xffu);
/* 90f04e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f051: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90f053: je 0x90f06f */
  if (zf) goto L_90f06f;
L_90f055: /* 90f055: mov edx, dword ptr [esi + 0x1a4] */
  edx = R32((uint32_t)(esi + 0x1a4u));
/* 90f05b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f05c: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 90f062: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90f063: add edx, 0x68 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90f066: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90f067: call 0x9723a0 */
  esp -= 4; W32(esp, 0x90f06cu); SPILL(); f_9723a0(); if (g_unwind) return; RELOAD();
/* 90f06c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90f06f: /* 90f06f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90f070: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f071: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90f072: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90f080(void) {
  LOAD_REGS();
L_90f080: /* 90f080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f081: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90f085: test byte ptr [esi + 0x1ec], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1ecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90f08c: je 0x90f0e8 */
  if (zf) goto L_90f0e8;
L_90f08e: /* 90f08e: mov ecx, dword ptr [esi + 0x1a4] */
  ecx = R32((uint32_t)(esi + 0x1a4u));
/* 90f094: lea eax, [esi + 0x1c4] */
  eax = (uint32_t)(esi + 0x1c4u);
/* 90f09a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f09b: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90f09e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90f09f: call 0x972510 */
  esp -= 4; W32(esp, 0x90f0a4u); SPILL(); f_972510(); if (g_unwind) return; RELOAD();
/* 90f0a4: and dword ptr [esi + 0x1ec], 0xfffffffa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1ecu))); uint32_t b = (uint32_t)(0xfffffffau);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x1ecu), r);
  }
/* 90f0ab: mov eax, dword ptr [esi + 0x1a4] */
  eax = R32((uint32_t)(esi + 0x1a4u));
/* 90f0b1: mov dword ptr [esi + 0x230], 0 */
  W32((uint32_t)(esi + 0x230u), 0x0u);
/* 90f0bb: mov dword ptr [esi + 0x1e0], 0xffffffff */
  W32((uint32_t)(esi + 0x1e0u), 0xffffffffu);
/* 90f0c5: mov edx, dword ptr [eax + 0xbc] */
  edx = R32((uint32_t)(eax + 0xbcu));
/* 90f0cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f0ce: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 90f0cf: mov dword ptr [eax + 0xbc], edx */
  W32((uint32_t)(eax + 0xbcu), edx);
/* 90f0d5: mov edx, dword ptr [esi + 0x1a4] */
  edx = R32((uint32_t)(esi + 0x1a4u));
/* 90f0db: mov eax, dword ptr [edx + 0x1d0] */
  eax = R32((uint32_t)(edx + 0x1d0u));
/* 90f0e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f0e3: je 0x90f0e8 */
  if (zf) goto L_90f0e8;
L_90f0e5: /* 90f0e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f0e6: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x90f0e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90f0e8: /* 90f0e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f0e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f0f0(void) {
  LOAD_REGS();
L_90f0f0: /* 90f0f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f0f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90f0f5: test byte ptr [esi + 0x1ec], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1ecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90f0fc: jne 0x90f14b */
  if (!zf) goto L_90f14b;
L_90f0fe: /* 90f0fe: mov eax, dword ptr [esi + 0x1a8] */
  eax = R32((uint32_t)(esi + 0x1a8u));
/* 90f104: mov edx, dword ptr [esi + 0x1a4] */
  edx = R32((uint32_t)(esi + 0x1a4u));
/* 90f10a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f10b: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 90f111: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90f112: add edx, 0x68 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90f115: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90f116: call 0x9723a0 */
  esp -= 4; W32(esp, 0x90f11bu); SPILL(); f_9723a0(); if (g_unwind) return; RELOAD();
/* 90f11b: or dword ptr [esi + 0x1ec], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1ecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x1ecu), r);
  }
/* 90f122: mov eax, dword ptr [esi + 0x1a4] */
  eax = R32((uint32_t)(esi + 0x1a4u));
/* 90f128: mov edx, dword ptr [eax + 0xbc] */
  edx = R32((uint32_t)(eax + 0xbcu));
/* 90f12e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f131: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 90f132: mov dword ptr [eax + 0xbc], edx */
  W32((uint32_t)(eax + 0xbcu), edx);
/* 90f138: mov eax, dword ptr [esi + 0x1a4] */
  eax = R32((uint32_t)(esi + 0x1a4u));
/* 90f13e: mov eax, dword ptr [eax + 0x1cc] */
  eax = R32((uint32_t)(eax + 0x1ccu));
/* 90f144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f146: je 0x90f14b */
  if (zf) goto L_90f14b;
L_90f148: /* 90f148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f149: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x90f14bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90f14b: /* 90f14b: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* 90f151: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90f154: mov dword ptr [esi + 0x230], 0 */
  W32((uint32_t)(esi + 0x230u), 0x0u);
/* 90f15e: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* 90f164: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f165: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f170(void) {
  LOAD_REGS();
L_90f170: /* 90f170: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f174: mov eax, dword ptr [eax + 0x1ec] */
  eax = R32((uint32_t)(eax + 0x1ecu));
/* 90f17a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90f17d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f180(void) {
  LOAD_REGS();
L_90f180: /* 90f180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f184: xor ecx, ecx */
  ecx = 0;
/* 90f186: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 90f189: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 90f18c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 90f18f: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 90f192: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 90f195: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 90f198: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 90f19b: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 90f19e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f1b0(void) {
  LOAD_REGS();
L_90f1b0: /* 90f1b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f1b4: xor ecx, ecx */
  ecx = 0;
/* 90f1b6: mov dword ptr [eax + 0x170], ecx */
  W32((uint32_t)(eax + 0x170u), ecx);
/* 90f1bc: mov dword ptr [eax + 0x174], ecx */
  W32((uint32_t)(eax + 0x174u), ecx);
/* 90f1c2: mov dword ptr [eax + 0x178], ecx */
  W32((uint32_t)(eax + 0x178u), ecx);
/* 90f1c8: mov dword ptr [eax + 0x17c], ecx */
  W32((uint32_t)(eax + 0x17cu), ecx);
/* 90f1ce: mov dword ptr [eax + 0x180], ecx */
  W32((uint32_t)(eax + 0x180u), ecx);
/* 90f1d4: mov dword ptr [eax + 0x184], ecx */
  W32((uint32_t)(eax + 0x184u), ecx);
/* 90f1da: mov dword ptr [eax + 0x188], ecx */
  W32((uint32_t)(eax + 0x188u), ecx);
/* 90f1e0: mov dword ptr [eax + 0x18c], ecx */
  W32((uint32_t)(eax + 0x18cu), ecx);
/* 90f1e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f1f0(void) {
  LOAD_REGS();
L_90f1f0: /* 90f1f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f1f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f1f5: lea ebx, [eax + 0x1fc] */
  ebx = (uint32_t)(eax + 0x1fcu);
/* 90f1fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f1fc: call 0x972710 */
  esp -= 4; W32(esp, 0x90f201u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 90f201: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f204: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f206: je 0x90f22e */
  if (zf) goto L_90f22e;
L_90f208: /* 90f208: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90f209: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 90f20d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f20e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f20f: nop  */
L_90f210: /* 90f210: mov edi, dword ptr [eax + 0x14] */
  edi = R32((uint32_t)(eax + 0x14u));
/* 90f213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f214: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f215: call 0x972770 */
  esp -= 4; W32(esp, 0x90f21au); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 90f21a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f21d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90f21e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f21f: mov esi, eax */
  esi = eax;
/* 90f221: call dword ptr [esp + 0x20] */
  { uint32_t t = R32((uint32_t)(esp + 0x20u)); esp -= 4; W32(esp, 0x90f225u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90f225: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f227: mov eax, esi */
  eax = esi;
/* 90f229: jne 0x90f210 */
  if (!zf) goto L_90f210;
L_90f22b: /* 90f22b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90f22c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f22d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_90f22e: /* 90f22e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90f22f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90f240(void) {
  LOAD_REGS();
L_90f240: /* 90f240: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f244: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f246: lea edi, [eax + 0x1fc] */
  edi = (uint32_t)(eax + 0x1fcu);
/* 90f24c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f24d: call 0x972710 */
  esp -= 4; W32(esp, 0x90f252u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 90f252: mov esi, eax */
  esi = eax;
/* 90f254: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f257: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f259: je 0x90f279 */
  if (zf) goto L_90f279;
L_90f25b: /* 90f25b: nop  */
/* 90f25c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_90f260: /* 90f260: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 90f263: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90f264: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90f269u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 90f269: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f26a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f26b: call 0x972770 */
  esp -= 4; W32(esp, 0x90f270u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 90f270: mov esi, eax */
  esi = eax;
/* 90f272: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f275: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f277: jne 0x90f260 */
  if (!zf) goto L_90f260;
L_90f279: /* 90f279: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90f27a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f27b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f280(void) {
  LOAD_REGS();
L_90f280: /* 90f280: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f284: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f285: lea ebx, [eax + 0x1fc] */
  ebx = (uint32_t)(eax + 0x1fcu);
/* 90f28b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f28c: call 0x972710 */
  esp -= 4; W32(esp, 0x90f291u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 90f291: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f294: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f296: je 0x90f2c3 */
  if (zf) goto L_90f2c3;
L_90f298: /* 90f298: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f299: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f29a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_90f2a0: /* 90f2a0: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 90f2a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f2a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f2a5: call 0x972770 */
  esp -= 4; W32(esp, 0x90f2aau); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 90f2aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f2ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f2ae: mov edi, eax */
  edi = eax;
/* 90f2b0: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90f2b5u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 90f2b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f2b6: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x90f2bbu); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 90f2bb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f2bd: mov eax, edi */
  eax = edi;
/* 90f2bf: jne 0x90f2a0 */
  if (!zf) goto L_90f2a0;
L_90f2c1: /* 90f2c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90f2c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90f2c3: /* 90f2c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90f2c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f2d0(void) {
  LOAD_REGS();
L_90f2d0: /* 90f2d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f2d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f2d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f2d6: lea edi, [eax + 0x1fc] */
  edi = (uint32_t)(eax + 0x1fcu);
/* 90f2dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f2dd: call 0x972710 */
  esp -= 4; W32(esp, 0x90f2e2u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 90f2e2: mov esi, eax */
  esi = eax;
/* 90f2e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f2e7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f2e9: je 0x90f319 */
  if (zf) goto L_90f319;
L_90f2eb: /* 90f2eb: nop  */
/* 90f2ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_90f2f0: /* 90f2f0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 90f2f3: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 90f2f9: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90f2fc: je 0x90f303 */
  if (zf) goto L_90f303;
L_90f2fe: /* 90f2fe: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90f301: jne 0x90f309 */
  if (!zf) goto L_90f309;
L_90f303: /* 90f303: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90f304: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90f309u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_90f309: /* 90f309: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f30a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f30b: call 0x972770 */
  esp -= 4; W32(esp, 0x90f310u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 90f310: mov esi, eax */
  esi = eax;
/* 90f312: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f315: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f317: jne 0x90f2f0 */
  if (!zf) goto L_90f2f0;
L_90f319: /* 90f319: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90f31a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f31b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f320(void) {
  LOAD_REGS();
L_90f320: /* 90f320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f324: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f325: lea ebx, [eax + 0x1fc] */
  ebx = (uint32_t)(eax + 0x1fcu);
/* 90f32b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f32c: call 0x972710 */
  esp -= 4; W32(esp, 0x90f331u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 90f331: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f334: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f336: je 0x90f373 */
  if (zf) goto L_90f373;
L_90f338: /* 90f338: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f339: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f33a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_90f340: /* 90f340: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 90f343: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f344: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f345: call 0x972770 */
  esp -= 4; W32(esp, 0x90f34au); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 90f34a: mov edi, eax */
  edi = eax;
/* 90f34c: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 90f352: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f355: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90f358: je 0x90f35f */
  if (zf) goto L_90f35f;
L_90f35a: /* 90f35a: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90f35d: jne 0x90f36b */
  if (!zf) goto L_90f36b;
L_90f35f: /* 90f35f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f360: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90f365u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 90f365: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f366: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x90f36bu); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
L_90f36b: /* 90f36b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f36d: mov eax, edi */
  eax = edi;
/* 90f36f: jne 0x90f340 */
  if (!zf) goto L_90f340;
L_90f371: /* 90f371: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90f372: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90f373: /* 90f373: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90f374: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f380(void) {
  LOAD_REGS();
L_90f380: /* 90f380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f384: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90f388: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* 90f38b: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 90f38e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90f392: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* 90f395: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 90f398: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90f39c: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* 90f39f: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 90f3a2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90f3b0(void) {
  LOAD_REGS();
L_90f3b0: /* 90f3b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90f3b3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90f3b7: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 90f3bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f3bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90f3bd: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x90f3c2u); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 90f3c2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 90f3c6: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 90f3ca: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 90f3ce: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 90f3d2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 90f3d6: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 90f3da: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90f3de: fadd dword ptr [edx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x10u)));
/* 90f3e1: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 90f3e4: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90f3e8: fadd dword ptr [edx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x14u)));
/* 90f3eb: fstp dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0); FPOP();
/* 90f3ee: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 90f3f2: fadd dword ptr [edx + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x18u)));
/* 90f3f5: fstp dword ptr [edx + 0x18] */
  WF32((uint32_t)(edx + 0x18u), ST0); FPOP();
/* 90f3f8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f3fa: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 90f3fe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f400: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90f404: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90f406: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90f40a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90f40e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90f410: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 90f414: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90f416: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90f41a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90f41c: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90f420: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90f422: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90f426: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90f428: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90f42c: fadd dword ptr [edx + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x20u)));
/* 90f42f: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 90f432: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90f436: fadd dword ptr [edx + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x24u)));
/* 90f439: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
/* 90f43c: fadd dword ptr [edx + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x28u)));
/* 90f43f: fstp dword ptr [edx + 0x28] */
  WF32((uint32_t)(edx + 0x28u), ST0); FPOP();
/* 90f442: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f445: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_90f450(void) {
  LOAD_REGS();
L_90f450: /* 90f450: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f454: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90f458: fadd dword ptr [eax + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x20u)));
/* 90f45b: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 90f45e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90f462: fadd dword ptr [eax + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x24u)));
/* 90f465: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 90f468: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90f46c: fadd dword ptr [eax + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x28u)));
/* 90f46f: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 90f472: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90f480(void) {
  LOAD_REGS();
L_90f480: /* 90f480: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f484: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90f488: fadd dword ptr [eax + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x170u)));
/* 90f48e: mov dword ptr [eax + 0x1a0], 1 */
  W32((uint32_t)(eax + 0x1a0u), 0x1u);
/* 90f498: fstp dword ptr [eax + 0x170] */
  WF32((uint32_t)(eax + 0x170u), ST0); FPOP();
/* 90f49e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90f4a2: fadd dword ptr [eax + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x174u)));
/* 90f4a8: fstp dword ptr [eax + 0x174] */
  WF32((uint32_t)(eax + 0x174u), ST0); FPOP();
/* 90f4ae: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90f4b2: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 90f4b8: fstp dword ptr [eax + 0x178] */
  WF32((uint32_t)(eax + 0x178u), ST0); FPOP();
/* 90f4be: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90f4d0(void) {
  LOAD_REGS();
L_90f4d0: /* 90f4d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90f4d3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90f4d7: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 90f4db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f4dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90f4dd: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x90f4e2u); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 90f4e2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 90f4e6: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 90f4ea: mov dword ptr [edx + 0x1a0], 1 */
  W32((uint32_t)(edx + 0x1a0u), 0x1u);
/* 90f4f4: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 90f4f8: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 90f4fc: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 90f500: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 90f504: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90f508: fadd dword ptr [edx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x170u)));
/* 90f50e: fstp dword ptr [edx + 0x170] */
  WF32((uint32_t)(edx + 0x170u), ST0); FPOP();
/* 90f514: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90f518: fadd dword ptr [edx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x174u)));
/* 90f51e: fstp dword ptr [edx + 0x174] */
  WF32((uint32_t)(edx + 0x174u), ST0); FPOP();
/* 90f524: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 90f528: fadd dword ptr [edx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x178u)));
/* 90f52e: fstp dword ptr [edx + 0x178] */
  WF32((uint32_t)(edx + 0x178u), ST0); FPOP();
/* 90f534: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f536: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 90f53a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f53c: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90f540: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90f542: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90f546: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90f54a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90f54c: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 90f550: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90f552: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90f556: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90f558: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90f55c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90f55e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90f562: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90f564: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90f568: fadd dword ptr [edx + 0x180] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x180u)));
/* 90f56e: fstp dword ptr [edx + 0x180] */
  WF32((uint32_t)(edx + 0x180u), ST0); FPOP();
/* 90f574: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90f578: fadd dword ptr [edx + 0x184] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x184u)));
/* 90f57e: fstp dword ptr [edx + 0x184] */
  WF32((uint32_t)(edx + 0x184u), ST0); FPOP();
/* 90f584: fadd dword ptr [edx + 0x188] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x188u)));
/* 90f58a: fstp dword ptr [edx + 0x188] */
  WF32((uint32_t)(edx + 0x188u), ST0); FPOP();
/* 90f590: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90f593: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_90f5a0(void) {
  LOAD_REGS();
L_90f5a0: /* 90f5a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90f5a4: fld dword ptr [ecx + 0x94] */
  { double v = F32((uint32_t)(ecx + 0x94u)); FPUSH(v); }
/* 90f5aa: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90f5ae: fld dword ptr [ecx + 0x90] */
  { double v = F32((uint32_t)(ecx + 0x90u)); FPUSH(v); }
/* 90f5b4: fld dword ptr [ecx + 0x98] */
  { double v = F32((uint32_t)(ecx + 0x98u)); FPUSH(v); }
/* 90f5ba: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f5bc: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90f5be: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90f5c0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 90f5c2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90f5c4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f5c6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90f5c8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90f5ca: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 90f5cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f5cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90f5d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f5d3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90f5d6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f5d8: je 0x90f696 */
  if (zf) goto L_90f696;
L_90f5de: /* 90f5de: fld dword ptr [ecx + 0xa4] */
  { double v = F32((uint32_t)(ecx + 0xa4u)); FPUSH(v); }
/* 90f5e4: fld dword ptr [ecx + 0xa0] */
  { double v = F32((uint32_t)(ecx + 0xa0u)); FPUSH(v); }
/* 90f5ea: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* 90f5f0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f5f2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90f5f4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90f5f6: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 90f5f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90f5fa: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f5fc: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90f5fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90f600: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 90f603: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f605: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90f607: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f609: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90f60c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f60e: je 0x90f696 */
  if (zf) goto L_90f696;
L_90f614: /* 90f614: fld dword ptr [ecx + 0xc4] */
  { double v = F32((uint32_t)(ecx + 0xc4u)); FPUSH(v); }
/* 90f61a: fld dword ptr [ecx + 0xc0] */
  { double v = F32((uint32_t)(ecx + 0xc0u)); FPUSH(v); }
/* 90f620: fld dword ptr [ecx + 0xc8] */
  { double v = F32((uint32_t)(ecx + 0xc8u)); FPUSH(v); }
/* 90f626: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f628: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90f62a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90f62c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 90f62e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90f630: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f632: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90f634: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90f636: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 90f639: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f63b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90f63d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f63f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90f642: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f644: je 0x90f696 */
  if (zf) goto L_90f696;
L_90f646: /* 90f646: fld dword ptr [ecx + 0xd4] */
  { double v = F32((uint32_t)(ecx + 0xd4u)); FPUSH(v); }
/* 90f64c: fld dword ptr [ecx + 0xd0] */
  { double v = F32((uint32_t)(ecx + 0xd0u)); FPUSH(v); }
/* 90f652: fld dword ptr [ecx + 0xd8] */
  { double v = F32((uint32_t)(ecx + 0xd8u)); FPUSH(v); }
/* 90f658: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f65a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90f65c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90f65e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 90f660: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90f662: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90f664: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90f666: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90f668: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 90f66b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f66d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90f66f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f671: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90f674: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90f676: je 0x90f696 */
  if (zf) goto L_90f696;
L_90f678: /* 90f678: fld dword ptr [ecx + 0x230] */
  { double v = F32((uint32_t)(ecx + 0x230u)); FPUSH(v); }
/* 90f67e: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 90f681: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90f683: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90f686: jp 0x90f691 */
  if (pf) goto L_90f691;
L_90f688: /* 90f688: test byte ptr [ecx + 0x1ec], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1ecu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90f68f: je 0x90f696 */
  if (zf) goto L_90f696;
L_90f691: /* 90f691: xor eax, eax */
  eax = 0;
/* 90f693: ret 8 */
  esp += 12; SPILL(); return;
L_90f696: /* 90f696: mov eax, 1 */
  eax = 0x1u;
/* 90f69b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90f6a0(void) {
  LOAD_REGS();
L_90f6a0: /* 90f6a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f6a4: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 90f6a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f6b0(void) {
  LOAD_REGS();
L_90f6b0: /* 90f6b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f6b4: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 90f6b8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f6c0(void) {
  LOAD_REGS();
L_90f6c0: /* 90f6c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f6c4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 90f6c7: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 90f6ca: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90f6cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f6d0(void) {
  LOAD_REGS();
L_90f6d0: /* 90f6d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f6d4: or dword ptr [eax + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 90f6d8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f6e0(void) {
  LOAD_REGS();
L_90f6e0: /* 90f6e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f6e4: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 90f6e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f6f0(void) {
  LOAD_REGS();
L_90f6f0: /* 90f6f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f6f4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 90f6f7: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 90f6fa: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90f6fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f700(void) {
  LOAD_REGS();
L_90f700: /* 90f700: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f704: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f706: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x90f70bu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 90f70b: mov esi, eax */
  esi = eax;
/* 90f70d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f70f: jne 0x90f715 */
  if (!zf) goto L_90f715;
L_90f711: /* 90f711: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f712: ret 4 */
  esp += 8; SPILL(); return;
L_90f715: /* 90f715: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f716: mov dword ptr [esi + 0xb0], 0 */
  W32((uint32_t)(esi + 0xb0u), 0x0u);
/* 90f720: mov dword ptr [esi + 0x60], 0x91bcc0 */
  W32((uint32_t)(esi + 0x60u), 0x91bcc0u);
/* 90f727: mov dword ptr [esi + 0x64], 3 */
  W32((uint32_t)(esi + 0x64u), 0x3u);
/* 90f72e: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 90f738: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 90f742: call 0x90f750 */
  esp -= 4; W32(esp, 0x90f747u); SPILL(); f_90f750(); if (g_unwind) return; RELOAD();
/* 90f747: mov eax, esi */
  eax = esi;
/* 90f749: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f74a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f750(void) {
  LOAD_REGS();
L_90f750: /* 90f750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f751: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90f755: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f756: call 0x90f790 */
  esp -= 4; W32(esp, 0x90f75bu); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 90f75b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f75c: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90f761u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90f761: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f763: je 0x90f771 */
  if (zf) goto L_90f771;
L_90f765: /* 90f765: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f766: call 0x90f790 */
  esp -= 4; W32(esp, 0x90f76bu); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 90f76b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f76c: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90f771u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_90f771: /* 90f771: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f772: call 0x90f790 */
  esp -= 4; W32(esp, 0x90f777u); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 90f777: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f778: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 90f77c: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_90f790(void) {
  LOAD_REGS();
L_90f790: /* 90f790: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f794: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f7a0(void) {
  LOAD_REGS();
L_90f7a0: /* 90f7a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f7a4: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 90f7aa: xor ecx, ecx */
  ecx = 0;
/* 90f7ac: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f7ae: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 90f7b1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 90f7b2: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90f7b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f7c0(void) {
  LOAD_REGS();
L_90f7c0: /* 90f7c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f7c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f7c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f7c6: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x90f7cbu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 90f7cb: mov esi, eax */
  esi = eax;
/* 90f7cd: xor eax, eax */
  eax = 0;
/* 90f7cf: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90f7d1: jne 0x90f7d7 */
  if (!zf) goto L_90f7d7;
L_90f7d3: /* 90f7d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f7d4: ret 4 */
  esp += 8; SPILL(); return;
L_90f7d7: /* 90f7d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f7d8: mov dword ptr [esi + 0xb0], 4 */
  W32((uint32_t)(esi + 0xb0u), 0x4u);
/* 90f7e2: mov dword ptr [esi + 0x60], 0x91bef0 */
  W32((uint32_t)(esi + 0x60u), 0x91bef0u);
/* 90f7e9: mov dword ptr [esi + 0x64], 3 */
  W32((uint32_t)(esi + 0x64u), 0x3u);
/* 90f7f0: mov dword ptr [esi + 0x1dc], eax */
  W32((uint32_t)(esi + 0x1dcu), eax);
/* 90f7f6: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* 90f7fc: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 90f806: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 90f810: call 0x90f820 */
  esp -= 4; W32(esp, 0x90f815u); SPILL(); f_90f820(); if (g_unwind) return; RELOAD();
/* 90f815: mov eax, esi */
  eax = esi;
/* 90f817: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f818: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f820(void) {
  LOAD_REGS();
L_90f820: /* 90f820: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f821: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90f825: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f826: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90f82bu); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90f82b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f82c: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90f831u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90f831: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90f833: je 0x90f841 */
  if (zf) goto L_90f841;
L_90f835: /* 90f835: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f836: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90f83bu); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90f83b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f83c: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90f841u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_90f841: /* 90f841: xor ecx, ecx */
  ecx = 0;
/* 90f843: mov dword ptr [esi + 0x178], ecx */
  W32((uint32_t)(esi + 0x178u), ecx);
/* 90f849: lea eax, [esi + 0x16c] */
  eax = (uint32_t)(esi + 0x16cu);
/* 90f84f: mov edx, 3 */
  edx = 0x3u;
L_90f854: /* 90f854: mov dword ptr [eax - 0xc], ecx */
  W32((uint32_t)(eax + 0xfffffff4u), ecx);
/* 90f857: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 90f859: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 90f85c: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 90f85f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90f862: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 90f863: jne 0x90f854 */
  if (!zf) goto L_90f854;
L_90f865: /* 90f865: mov eax, 0x3f800000 */
  eax = 0x3f800000u;
/* 90f86a: mov dword ptr [esi + 0x17c], eax */
  W32((uint32_t)(esi + 0x17cu), eax);
/* 90f870: mov dword ptr [esi + 0x170], eax */
  W32((uint32_t)(esi + 0x170u), eax);
/* 90f876: lea eax, [esi + 0x194] */
  eax = (uint32_t)(esi + 0x194u);
/* 90f87c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90f87d: mov dword ptr [esi + 0x1dc], ecx */
  W32((uint32_t)(esi + 0x1dcu), ecx);
/* 90f883: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* 90f889: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* 90f88f: mov dword ptr [esi + 0x1e8], 0x7f7fffff */
  W32((uint32_t)(esi + 0x1e8u), 0x7f7fffffu);
/* 90f899: call 0x911dd0 */
  esp -= 4; W32(esp, 0x90f89eu); SPILL(); f_911dd0(); if (g_unwind) return; RELOAD();
/* 90f89e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f89f: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90f8a4u); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90f8a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90f8a5: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 90f8a9: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_90f8b0(void) {
  LOAD_REGS();
L_90f8b0: /* 90f8b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f8b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f8c0(void) {
  LOAD_REGS();
L_90f8c0: /* 90f8c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f8c4: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 90f8ca: xor ecx, ecx */
  ecx = 0;
/* 90f8cc: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90f8cf: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 90f8d2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 90f8d3: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90f8d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f8e0(void) {
  LOAD_REGS();
L_90f8e0: /* 90f8e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f8e4: mov edx, dword ptr [eax + 0x160] */
  edx = R32((uint32_t)(eax + 0x160u));
/* 90f8ea: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90f8ee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90f8f0: mov edx, dword ptr [eax + 0x164] */
  edx = R32((uint32_t)(eax + 0x164u));
/* 90f8f6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90f8f9: mov eax, dword ptr [eax + 0x168] */
  eax = R32((uint32_t)(eax + 0x168u));
/* 90f8ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90f902: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90f910(void) {
  LOAD_REGS();
L_90f910: /* 90f910: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f914: mov edx, dword ptr [eax + 0x16c] */
  edx = R32((uint32_t)(eax + 0x16cu));
/* 90f91a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90f91e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90f920: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 90f926: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90f929: mov eax, dword ptr [eax + 0x174] */
  eax = R32((uint32_t)(eax + 0x174u));
/* 90f92f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90f932: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90f940(void) {
  LOAD_REGS();
L_90f940: /* 90f940: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f944: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 90f94a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f950(void) {
  LOAD_REGS();
L_90f950: /* 90f950: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f954: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 90f95a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90f95e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90f960: mov edx, dword ptr [eax + 0x180] */
  edx = R32((uint32_t)(eax + 0x180u));
/* 90f966: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90f969: mov eax, dword ptr [eax + 0x184] */
  eax = R32((uint32_t)(eax + 0x184u));
/* 90f96f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90f972: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90f980(void) {
  LOAD_REGS();
L_90f980: /* 90f980: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f984: mov edx, dword ptr [eax + 0x188] */
  edx = R32((uint32_t)(eax + 0x188u));
/* 90f98a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90f98e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90f990: mov edx, dword ptr [eax + 0x18c] */
  edx = R32((uint32_t)(eax + 0x18cu));
/* 90f996: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90f999: mov eax, dword ptr [eax + 0x190] */
  eax = R32((uint32_t)(eax + 0x190u));
/* 90f99f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90f9a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90f9b0(void) {
  LOAD_REGS();
L_90f9b0: /* 90f9b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f9b4: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90f9b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f9c0(void) {
  LOAD_REGS();
L_90f9c0: /* 90f9c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f9c4: mov eax, dword ptr [eax + 0x1dc] */
  eax = R32((uint32_t)(eax + 0x1dcu));
/* 90f9ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f9d0(void) {
  LOAD_REGS();
L_90f9d0: /* 90f9d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90f9d4: mov eax, dword ptr [eax + 0x1e4] */
  eax = R32((uint32_t)(eax + 0x1e4u));
/* 90f9da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90f9e0(void) {
  LOAD_REGS();
L_90f9e0: /* 90f9e0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90f9e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90f9e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90f9e5: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 90f9e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f9ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90f9eb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90f9ec: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90f9f1u); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90f9f1: mov esi, eax */
  esi = eax;
/* 90f9f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90f9f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f9f6: call 0x90bda0 */
  esp -= 4; W32(esp, 0x90f9fbu); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 90f9fb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90f9fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90f9fe: mov edi, eax */
  edi = eax;
/* 90fa00: call 0x90bda0 */
  esp -= 4; W32(esp, 0x90fa05u); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 90fa05: mov ebx, eax */
  ebx = eax;
/* 90fa07: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 90fa0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fa0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fa0d: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x90fa12u); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 90fa12: fld dword ptr [ebp + 0x160] */
  { double v = F32((uint32_t)(ebp + 0x160u)); FPUSH(v); }
/* 90fa18: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 90fa1c: lea esi, [ebp + 0x160] */
  esi = (uint32_t)(ebp + 0x160u);
/* 90fa22: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 90fa26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90fa27: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 90fa2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fa2c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 90fa2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fa30: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 90fa34: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 90fa38: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 90fa3b: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 90fa3f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 90fa43: call 0x90e330 */
  esp -= 4; W32(esp, 0x90fa48u); SPILL(); f_90e330(); if (g_unwind) return; RELOAD();
/* 90fa48: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90fa4a: je 0x90fa91 */
  if (zf) goto L_90fa91;
L_90fa4c: /* 90fa4c: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 90fa50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90fa51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90fa52: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x90fa57u); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 90fa57: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 90fa59: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 90fa5d: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 90fa61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fa62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fa63: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 90fa67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90fa68: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 90fa6b: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 90fa6f: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 90fa73: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 90fa76: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 90fa7a: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 90fa7e: call 0x90e330 */
  esp -= 4; W32(esp, 0x90fa83u); SPILL(); f_90e330(); if (g_unwind) return; RELOAD();
/* 90fa83: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90fa87: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 90fa8b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 90fa8f: jmp 0x90faa3 */
  goto L_90faa3;
L_90fa91: /* 90fa91: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 90fa97: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 90fa9d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_90faa3: /* 90faa3: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 90faa7: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 90faab: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 90faad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90faae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90faaf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90fab0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 90fab2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90fab3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90fab5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 90fab9: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 90fabb: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 90fabe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90fac0: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 90fac4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 90fac6: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 90fac9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90facb: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90face: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90fae0(void) {
  LOAD_REGS();
L_90fae0: /* 90fae0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fae4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90fae8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90faec: fstp dword ptr [eax + 0x160] */
  WF32((uint32_t)(eax + 0x160u), ST0); FPOP();
/* 90faf2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90faf6: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 90fafc: mov dword ptr [eax + 0x168], edx */
  W32((uint32_t)(eax + 0x168u), edx);
/* 90fb02: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90fb10(void) {
  LOAD_REGS();
L_90fb10: /* 90fb10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fb14: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90fb18: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90fb1c: fstp dword ptr [eax + 0x16c] */
  WF32((uint32_t)(eax + 0x16cu), ST0); FPOP();
/* 90fb22: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90fb26: mov dword ptr [eax + 0x170], ecx */
  W32((uint32_t)(eax + 0x170u), ecx);
/* 90fb2c: mov dword ptr [eax + 0x174], edx */
  W32((uint32_t)(eax + 0x174u), edx);
/* 90fb32: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90fb40(void) {
  LOAD_REGS();
L_90fb40: /* 90fb40: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90fb44: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fb48: fstp dword ptr [eax + 0x178] */
  WF32((uint32_t)(eax + 0x178u), ST0); FPOP();
/* 90fb4e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90fb60(void) {
  LOAD_REGS();
L_90fb60: /* 90fb60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fb64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fb65: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 90fb69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fb6a: lea edi, [eax + 0x194] */
  edi = (uint32_t)(eax + 0x194u);
/* 90fb70: mov ecx, 0x12 */
  ecx = 0x12u;
/* 90fb75: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 90fb77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90fb78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90fb79: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90fb80(void) {
  LOAD_REGS();
L_90fb80: /* 90fb80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90fb84: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90fb88: mov dword ptr [ecx + 0x1dc], eax */
  W32((uint32_t)(ecx + 0x1dcu), eax);
/* 90fb8e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90fba0(void) {
  LOAD_REGS();
L_90fba0: /* 90fba0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fba4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90fba8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90fbac: fstp dword ptr [eax + 0x17c] */
  WF32((uint32_t)(eax + 0x17cu), ST0); FPOP();
/* 90fbb2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90fbb6: mov dword ptr [eax + 0x180], ecx */
  W32((uint32_t)(eax + 0x180u), ecx);
/* 90fbbc: mov ecx, dword ptr [eax + 0x1a0] */
  ecx = R32((uint32_t)(eax + 0x1a0u));
/* 90fbc2: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 90fbc5: mov dword ptr [eax + 0x184], edx */
  W32((uint32_t)(eax + 0x184u), edx);
/* 90fbcb: mov dword ptr [eax + 0x1a0], ecx */
  W32((uint32_t)(eax + 0x1a0u), ecx);
/* 90fbd1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90fbe0(void) {
  LOAD_REGS();
L_90fbe0: /* 90fbe0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90fbe4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90fbe8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90fbec: mov dword ptr [ecx + 0x188], eax */
  W32((uint32_t)(ecx + 0x188u), eax);
/* 90fbf2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90fbf6: mov dword ptr [ecx + 0x190], eax */
  W32((uint32_t)(ecx + 0x190u), eax);
/* 90fbfc: mov dword ptr [ecx + 0x18c], edx */
  W32((uint32_t)(ecx + 0x18cu), edx);
/* 90fc02: fld dword ptr [ecx + 0x18c] */
  { double v = F32((uint32_t)(ecx + 0x18cu)); FPUSH(v); }
/* 90fc08: fld dword ptr [ecx + 0x188] */
  { double v = F32((uint32_t)(ecx + 0x188u)); FPUSH(v); }
/* 90fc0e: fld dword ptr [ecx + 0x190] */
  { double v = F32((uint32_t)(ecx + 0x190u)); FPUSH(v); }
/* 90fc14: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90fc16: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90fc18: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90fc1a: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 90fc1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90fc1e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90fc20: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90fc22: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90fc24: fcomp dword ptr [0xa20e04] */
  fpu_com(ST0, F32((uint32_t)(0xa20e04u)));
  FPOP();
/* 90fc2a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90fc2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90fc2e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90fc30: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90fc33: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90fc35: mov eax, dword ptr [ecx + 0x1a0] */
  eax = R32((uint32_t)(ecx + 0x1a0u));
/* 90fc3b: jne 0x90fc4b */
  if (!zf) goto L_90fc4b;
L_90fc3d: /* 90fc3d: or eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 90fc42: mov dword ptr [ecx + 0x1a0], eax */
  W32((uint32_t)(ecx + 0x1a0u), eax);
/* 90fc48: ret 0x10 */
  esp += 20; SPILL(); return;
L_90fc4b: /* 90fc4b: and eax, 0xfffffeff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffeffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90fc50: mov dword ptr [ecx + 0x1a0], eax */
  W32((uint32_t)(ecx + 0x1a0u), eax);
/* 90fc56: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90fc60(void) {
  LOAD_REGS();
L_90fc60: /* 90fc60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fc64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fc65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fc66: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x90fc6bu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 90fc6b: mov esi, eax */
  esi = eax;
/* 90fc6d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90fc6f: jne 0x90fc75 */
  if (!zf) goto L_90fc75;
L_90fc71: /* 90fc71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90fc72: ret 4 */
  esp += 8; SPILL(); return;
L_90fc75: /* 90fc75: mov dword ptr [esi + 0xb0], 5 */
  W32((uint32_t)(esi + 0xb0u), 0x5u);
/* 90fc7f: mov dword ptr [esi + 0x60], 0x91cb80 */
  W32((uint32_t)(esi + 0x60u), 0x91cb80u);
/* 90fc86: mov dword ptr [esi + 0x64], 0 */
  W32((uint32_t)(esi + 0x64u), 0x0u);
/* 90fc8d: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 90fc97: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 90fca1: mov ecx, dword ptr [0xa20e00] */
  ecx = R32((uint32_t)(0xa20e00u));
/* 90fca7: mov dword ptr [esi + 0x164], ecx */
  W32((uint32_t)(esi + 0x164u), ecx);
/* 90fcad: mov edx, dword ptr [0xa20e00] */
  edx = R32((uint32_t)(0xa20e00u));
/* 90fcb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fcb4: mov dword ptr [esi + 0x168], edx */
  W32((uint32_t)(esi + 0x168u), edx);
/* 90fcba: call 0x90fd20 */
  esp -= 4; W32(esp, 0x90fcbfu); SPILL(); f_90fd20(); if (g_unwind) return; RELOAD();
/* 90fcbf: mov eax, esi */
  eax = esi;
/* 90fcc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90fcc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90fcd0(void) {
  LOAD_REGS();
L_90fcd0: /* 90fcd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fcd1: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 90fcd5: mov eax, dword ptr [edi + 0x164] */
  eax = R32((uint32_t)(edi + 0x164u));
/* 90fcdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90fcdd: je 0x90fcf9 */
  if (zf) goto L_90fcf9;
L_90fcdf: /* 90fcdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90fce0: /* 90fce0: mov esi, dword ptr [eax + 0x1dc] */
  esi = R32((uint32_t)(eax + 0x1dcu));
/* 90fce6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fce7: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90fcecu); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90fcec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fced: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x90fcf2u); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 90fcf2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90fcf4: mov eax, esi */
  eax = esi;
/* 90fcf6: jne 0x90fce0 */
  if (!zf) goto L_90fce0;
L_90fcf8: /* 90fcf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90fcf9: /* 90fcf9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 90fcfb: mov eax, dword ptr [eax + 0x1d4] */
  eax = R32((uint32_t)(eax + 0x1d4u));
/* 90fd01: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90fd03: je 0x90fd08 */
  if (zf) goto L_90fd08;
L_90fd05: /* 90fd05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fd06: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x90fd08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90fd08: /* 90fd08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fd09: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x90fd0eu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 90fd0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90fd0f: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 90fd13: jmp 0x90bbd0 */
  SPILL(); f_90bbd0(); return;
}

void f_90fd20(void) {
  LOAD_REGS();
L_90fd20: /* 90fd20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fd21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fd22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 90fd26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fd27: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x90fd2cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 90fd2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fd2d: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90fd32u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90fd32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90fd34: je 0x90fd42 */
  if (zf) goto L_90fd42;
L_90fd36: /* 90fd36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fd37: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x90fd3cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 90fd3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fd3d: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90fd42u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_90fd42: /* 90fd42: mov esi, dword ptr [edi + 0x164] */
  esi = R32((uint32_t)(edi + 0x164u));
/* 90fd48: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90fd4e: je 0x90fd8c */
  if (zf) goto L_90fd8c;
L_90fd50: /* 90fd50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_90fd51: /* 90fd51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fd52: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90fd57u); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90fd57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fd58: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90fd5du); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90fd5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90fd5f: je 0x90fd6d */
  if (zf) goto L_90fd6d;
L_90fd61: /* 90fd61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fd62: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90fd67u); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90fd67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fd68: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90fd6du); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_90fd6d: /* 90fd6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fd6e: call 0x90f9c0 */
  esp -= 4; W32(esp, 0x90fd73u); SPILL(); f_90f9c0(); if (g_unwind) return; RELOAD();
/* 90fd73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fd74: mov ebx, eax */
  ebx = eax;
/* 90fd76: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90fd7bu); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90fd7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fd7c: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x90fd81u); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 90fd81: cmp ebx, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90fd87: mov esi, ebx */
  esi = ebx;
/* 90fd89: jne 0x90fd51 */
  if (!zf) goto L_90fd51;
L_90fd8b: /* 90fd8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_90fd8c: /* 90fd8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90fd8d: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x90fd92u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 90fd92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fd93: call 0x90b820 */
  esp -= 4; W32(esp, 0x90fd98u); SPILL(); f_90b820(); if (g_unwind) return; RELOAD();
/* 90fd98: mov eax, dword ptr [0xa20e00] */
  eax = R32((uint32_t)(0xa20e00u));
/* 90fd9d: mov dword ptr [edi + 0x164], eax */
  W32((uint32_t)(edi + 0x164u), eax);
/* 90fda3: mov ecx, dword ptr [0xa20e00] */
  ecx = R32((uint32_t)(0xa20e00u));
/* 90fda9: xor eax, eax */
  eax = 0;
/* 90fdab: mov dword ptr [edi + 0x168], ecx */
  W32((uint32_t)(edi + 0x168u), ecx);
/* 90fdb1: mov dword ptr [edi + 0x160], eax */
  W32((uint32_t)(edi + 0x160u), eax);
/* 90fdb7: mov dword ptr [edi + 0x16c], eax */
  W32((uint32_t)(edi + 0x16cu), eax);
/* 90fdbd: mov dword ptr [edi + 0x170], eax */
  W32((uint32_t)(edi + 0x170u), eax);
/* 90fdc3: mov dword ptr [edi + 0x174], eax */
  W32((uint32_t)(edi + 0x174u), eax);
/* 90fdc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90fdca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90fdcb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90fdd0(void) {
  LOAD_REGS();
L_90fdd0: /* 90fdd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90fdd4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90fdd8: mov dword ptr [ecx + 0x174], eax */
  W32((uint32_t)(ecx + 0x174u), eax);
/* 90fdde: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90fdf0(void) {
  LOAD_REGS();
L_90fdf0: /* 90fdf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fdf4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90fe00(void) {
  LOAD_REGS();
L_90fe00: /* 90fe00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fe04: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 90fe0a: xor ecx, ecx */
  ecx = 0;
/* 90fe0c: cmp edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90fe0f: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 90fe12: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 90fe13: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90fe15: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90fe20(void) {
  LOAD_REGS();
L_90fe20: /* 90fe20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fe24: mov eax, dword ptr [eax + 0x164] */
  eax = R32((uint32_t)(eax + 0x164u));
/* 90fe2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90fe30(void) {
  LOAD_REGS();
L_90fe30: /* 90fe30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fe34: mov eax, dword ptr [eax + 0x174] */
  eax = R32((uint32_t)(eax + 0x174u));
/* 90fe3a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90fe40(void) {
  LOAD_REGS();
L_90fe40: /* 90fe40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fe44: mov eax, dword ptr [eax + 0x16c] */
  eax = R32((uint32_t)(eax + 0x16cu));
/* 90fe4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90fe50(void) {
  LOAD_REGS();
L_90fe50: /* 90fe50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fe54: mov eax, dword ptr [eax + 0x160] */
  eax = R32((uint32_t)(eax + 0x160u));
/* 90fe5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90fe60(void) {
  LOAD_REGS();
L_90fe60: /* 90fe60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90fe64: mov eax, dword ptr [eax + 0x1dc] */
  eax = R32((uint32_t)(eax + 0x1dcu));
/* 90fe6a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90fe70(void) {
  LOAD_REGS();
L_90fe70: /* 90fe70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fe74: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 90fe7a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90fe80(void) {
  LOAD_REGS();
L_90fe80: /* 90fe80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90fe84: mov ecx, dword ptr [eax + 0x164] */
  ecx = R32((uint32_t)(eax + 0x164u));
/* 90fe8a: cmp ecx, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90fe90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90fe94: jne 0x90febc */
  if (!zf) goto L_90febc;
L_90fe96: /* 90fe96: mov dword ptr [eax + 0x168], ecx */
  W32((uint32_t)(eax + 0x168u), ecx);
/* 90fe9c: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 90fea2: mov edx, dword ptr [0xa20e00] */
  edx = R32((uint32_t)(0xa20e00u));
/* 90fea8: mov dword ptr [ecx + 0x1e0], edx */
  W32((uint32_t)(ecx + 0x1e0u), edx);
/* 90feae: mov edx, dword ptr [0xa20e00] */
  edx = R32((uint32_t)(0xa20e00u));
/* 90feb4: mov dword ptr [ecx + 0x1dc], edx */
  W32((uint32_t)(ecx + 0x1dcu), edx);
/* 90feba: jmp 0x90feda */
  goto L_90feda;
L_90febc: /* 90febc: mov edx, dword ptr [eax + 0x168] */
  edx = R32((uint32_t)(eax + 0x168u));
/* 90fec2: mov dword ptr [ecx + 0x1e0], edx */
  W32((uint32_t)(ecx + 0x1e0u), edx);
/* 90fec8: mov edx, dword ptr [eax + 0x168] */
  edx = R32((uint32_t)(eax + 0x168u));
/* 90fece: mov dword ptr [edx + 0x1dc], ecx */
  W32((uint32_t)(edx + 0x1dcu), ecx);
/* 90fed4: mov dword ptr [eax + 0x168], ecx */
  W32((uint32_t)(eax + 0x168u), ecx);
L_90feda: /* 90feda: mov dword ptr [ecx + 0x1e4], eax */
  W32((uint32_t)(ecx + 0x1e4u), eax);
/* 90fee0: inc dword ptr [eax + 0x160] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x160u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x160u), r);
  }
/* 90fee6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90fef0(void) {
  LOAD_REGS();
L_90fef0: /* 90fef0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90fef4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90fef8: cmp dword ptr [ecx + 0x164], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x164u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90fefe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90feff: jne 0x90ff0f */
  if (!zf) goto L_90ff0f;
L_90ff01: /* 90ff01: mov edx, dword ptr [eax + 0x1dc] */
  edx = R32((uint32_t)(eax + 0x1dcu));
/* 90ff07: mov dword ptr [ecx + 0x164], edx */
  W32((uint32_t)(ecx + 0x164u), edx);
/* 90ff0d: jmp 0x90ff21 */
  goto L_90ff21;
L_90ff0f: /* 90ff0f: mov edx, dword ptr [eax + 0x1e0] */
  edx = R32((uint32_t)(eax + 0x1e0u));
/* 90ff15: mov esi, dword ptr [eax + 0x1dc] */
  esi = R32((uint32_t)(eax + 0x1dcu));
/* 90ff1b: mov dword ptr [edx + 0x1dc], esi */
  W32((uint32_t)(edx + 0x1dcu), esi);
L_90ff21: /* 90ff21: cmp dword ptr [ecx + 0x168], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x168u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ff27: jne 0x90ff37 */
  if (!zf) goto L_90ff37;
L_90ff29: /* 90ff29: mov edx, dword ptr [eax + 0x1e0] */
  edx = R32((uint32_t)(eax + 0x1e0u));
/* 90ff2f: mov dword ptr [ecx + 0x168], edx */
  W32((uint32_t)(ecx + 0x168u), edx);
/* 90ff35: jmp 0x90ff49 */
  goto L_90ff49;
L_90ff37: /* 90ff37: mov edx, dword ptr [eax + 0x1dc] */
  edx = R32((uint32_t)(eax + 0x1dcu));
/* 90ff3d: mov esi, dword ptr [eax + 0x1e0] */
  esi = R32((uint32_t)(eax + 0x1e0u));
/* 90ff43: mov dword ptr [edx + 0x1e0], esi */
  W32((uint32_t)(edx + 0x1e0u), esi);
L_90ff49: /* 90ff49: mov edx, dword ptr [0xa20e00] */
  edx = R32((uint32_t)(0xa20e00u));
/* 90ff4f: mov dword ptr [eax + 0x1e0], edx */
  W32((uint32_t)(eax + 0x1e0u), edx);
/* 90ff55: mov edx, dword ptr [0xa20e00] */
  edx = R32((uint32_t)(0xa20e00u));
/* 90ff5b: mov dword ptr [eax + 0x1dc], edx */
  W32((uint32_t)(eax + 0x1dcu), edx);
/* 90ff61: mov dword ptr [eax + 0x1e4], 0 */
  W32((uint32_t)(eax + 0x1e4u), 0x0u);
/* 90ff6b: dec dword ptr [ecx + 0x160] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x160u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx + 0x160u), r);
  }
/* 90ff71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90ff72: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90ff80(void) {
  LOAD_REGS();
L_90ff80: /* 90ff80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ff81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90ff82: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 90ff86: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 90ff88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90ff89: call 0x90f7c0 */
  esp -= 4; W32(esp, 0x90ff8eu); SPILL(); f_90f7c0(); if (g_unwind) return; RELOAD();
/* 90ff8e: mov esi, eax */
  esi = eax;
/* 90ff90: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ff96: je 0x90ffb3 */
  if (zf) goto L_90ffb3;
L_90ff98: /* 90ff98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ff99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90ff9a: call 0x90fe80 */
  esp -= 4; W32(esp, 0x90ff9fu); SPILL(); f_90fe80(); if (g_unwind) return; RELOAD();
/* 90ff9f: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 90ffa2: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 90ffa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90ffa6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90ffa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ffa8: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90ffadu); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90ffad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90ffae: call 0x90c130 */
  esp -= 4; W32(esp, 0x90ffb3u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
L_90ffb3: /* 90ffb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90ffb4: mov eax, esi */
  eax = esi;
/* 90ffb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90ffb7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90ffc0(void) {
  LOAD_REGS();
L_90ffc0: /* 90ffc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ffc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ffc5: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 90ffc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ffca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90ffcb: call 0x90fef0 */
  esp -= 4; W32(esp, 0x90ffd0u); SPILL(); f_90fef0(); if (g_unwind) return; RELOAD();
/* 90ffd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ffd1: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x90ffd6u); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 90ffd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90ffd7: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x90ffdcu); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 90ffdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90ffdd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90ffe0(void) {
  LOAD_REGS();
L_90ffe0: /* 90ffe0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90ffe4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ffe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ffe7: je 0x91000a */
  if (zf) goto L_91000a;
L_90ffe9: /* 90ffe9: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90ffed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_90fff0: /* 90fff0: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 90fff3: test byte ptr [ecx + 0x1ec], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1ecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90fffa: je 0x91000c */
  if (zf) goto L_91000c;
L_90fffc: /* 90fffc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90fffd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90fffe: call 0x972770 */
  esp -= 4; W32(esp, 0x910003u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 910003: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910006: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910008: jne 0x90fff0 */
  if (!zf) goto L_90fff0;
L_91000a: /* 91000a: xor eax, eax */
  eax = 0;
L_91000c: /* 91000c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91000d: ret  */
  esp += 4; SPILL(); return;
}

void f_910010(void) {
  LOAD_REGS();
L_910010: /* 910010: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 910014: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910015: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 910016: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 91001a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91001b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91001c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 910020: lea esi, [edi*4] */
  esi = (uint32_t)(edi*4);
/* 910027: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 91002a: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 91002d: lea eax, [ebx + ebp*4 + 0x40] */
  eax = (uint32_t)(ebx + ebp*4 + 0x40u);
/* 910031: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910033: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910035: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910037: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910039: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91003b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91003c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91003d: call 0x974b30 */
  esp -= 4; W32(esp, 0x910042u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 910042: lea ecx, [eax + 0x40] */
  ecx = (uint32_t)(eax + 0x40u);
/* 910045: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 910048: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91004a: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 91004d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91004f: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 910052: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 910054: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 910057: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 910059: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 91005c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91005e: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 910061: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 910063: mov dword ptr [eax + 0x30], edi */
  W32((uint32_t)(eax + 0x30u), edi);
/* 910066: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 910069: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91006a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91006b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 91006d: xor ecx, ecx */
  ecx = 0;
/* 91006f: mov dword ptr [eax + 0x10], ebp */
  W32((uint32_t)(eax + 0x10u), ebp);
/* 910072: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 910073: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 910076: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 910079: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 91007c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91007d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_910080(void) {
  LOAD_REGS();
L_910080: /* 910080: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 910084: xor ecx, ecx */
  ecx = 0;
/* 910086: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 910089: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 91008c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 91008e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9100a0(void) {
  LOAD_REGS();
L_9100a0: /* 9100a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9100a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9100a2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9100a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9100a7: call 0x90fe00 */
  esp -= 4; W32(esp, 0x9100acu); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 9100ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9100ad: mov esi, eax */
  esi = eax;
/* 9100af: call 0x90bd40 */
  esp -= 4; W32(esp, 0x9100b4u); SPILL(); f_90bd40(); if (g_unwind) return; RELOAD();
/* 9100b4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9100b8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9100ba: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9100bc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9100be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9100c0: je 0x9100d5 */
  if (zf) goto L_9100d5;
L_9100c2: /* 9100c2: mov eax, dword ptr [esi + 0x160] */
  eax = R32((uint32_t)(esi + 0x160u));
/* 9100c8: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9100cb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9100cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9100ce: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 9100d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9100d2: ret 8 */
  esp += 12; SPILL(); return;
L_9100d5: /* 9100d5: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9100d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9100d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9100da: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 9100dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9100de: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9100f0(void) {
  LOAD_REGS();
L_9100f0: /* 9100f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9100f1: mov ebp, esp */
  ebp = esp;
/* 9100f3: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9100f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9100f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9100f8: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 9100fb: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 9100fe: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 910101: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910104: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910105: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 910108: call 0x99cc00 */
  esp -= 4; W32(esp, 0x91010du); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 91010d: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 910110: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 910113: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910116: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 910119: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 91011c: xor ebx, ebx */
  ebx = 0;
/* 91011e: call 0x99cc00 */
  esp -= 4; W32(esp, 0x910123u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 910123: xor eax, eax */
  eax = 0;
/* 910125: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 910128: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 91012b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 91012e: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 910131: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 910134: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 910137: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 91013a: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 91013d: xor edi, edi */
  edi = 0;
/* 91013f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910140: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 910143: call 0x972710 */
  esp -= 4; W32(esp, 0x910148u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 910148: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91014b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91014d: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 910150: je 0x910448 */
  if (zf) goto L_910448;
L_910156: /* 910156: jmp 0x910160 */
  goto L_910160;
L_910158: /* 910158: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 91015b: nop  */
/* 91015c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_910160: /* 910160: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 910163: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 910166: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 910169: mov dword ptr [eax + ecx*4], 0 */
  W32((uint32_t)(eax + ecx*4), 0x0u);
/* 910170: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 910173: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 910176: mov dword ptr [eax + ecx*4], 0 */
  W32((uint32_t)(eax + ecx*4), 0x0u);
/* 91017d: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 910180: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 910183: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 910186: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 910189: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91018a: call 0x910080 */
  esp -= 4; W32(esp, 0x91018fu); SPILL(); f_910080(); if (g_unwind) return; RELOAD();
/* 91018f: mov edi, dword ptr [esi + 0x20] */
  edi = R32((uint32_t)(esi + 0x20u));
/* 910192: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 910195: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 910198: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 91019b: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91019e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9101a1: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 9101a4: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 9101a7: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 9101aa: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9101ad: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 9101b0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9101b3: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 9101b6: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 9101b9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9101ba: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 9101bd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 9101c0: mov dword ptr [eax + ebx*4], edx */
  W32((uint32_t)(eax + ebx*4), edx);
/* 9101c3: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 9101c6: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 9101c9: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 9101cc: mov dword ptr [edx + 0x1e8], ecx */
  W32((uint32_t)(edx + 0x1e8u), ecx);
/* 9101d2: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9101d5: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9101d8: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* 9101db: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9101de: mov ecx, dword ptr [eax + ecx] */
  ecx = R32((uint32_t)(eax + ecx));
/* 9101e1: add ecx, dword ptr [eax + edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edi)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9101e4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9101e5: mov dword ptr [edx + 0x1e4], ecx */
  W32((uint32_t)(edx + 0x1e4u), ecx);
/* 9101eb: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9101ee: mov dword ptr [edx + 0x1e0], eax */
  W32((uint32_t)(edx + 0x1e0u), eax);
/* 9101f4: or dword ptr [edx + 0x1ec], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1ecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx + 0x1ecu), r);
  }
/* 9101fb: mov edi, dword ptr [esi + 0x20] */
  edi = R32((uint32_t)(esi + 0x20u));
/* 9101fe: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 910201: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 910204: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 910207: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 910208: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 91020b: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 91020d: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 910210: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 910213: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 910216: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 910219: mov edi, dword ptr [eax + edx] */
  edi = R32((uint32_t)(eax + edx));
/* 91021c: mov ecx, dword ptr [eax + ecx] */
  ecx = R32((uint32_t)(eax + ecx));
/* 91021f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 910221: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 910224: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910226: jge 0x9103c4 */
  if ((sf == of)) goto L_9103c4;
L_91022c: /* 91022c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_910230: /* 910230: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 910233: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 910236: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 910239: add eax, 0x1fc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91023e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91023f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910240: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 910243: call 0x972710 */
  esp -= 4; W32(esp, 0x910248u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 910248: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91024b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91024d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 910250: je 0x910377 */
  if (zf) goto L_910377;
L_910256: /* 910256: jmp 0x910260 */
  goto L_910260;
L_910258: /* 910258: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91025b: nop  */
/* 91025c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_910260: /* 910260: mov edi, dword ptr [eax + 0x14] */
  edi = R32((uint32_t)(eax + 0x14u));
/* 910263: test byte ptr [edi + 0x5c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x5cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 910267: jne 0x910356 */
  if (!zf) goto L_910356;
L_91026d: /* 91026d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 910270: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 910272: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 910275: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 910278: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91027b: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 91027e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 910281: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 910284: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 910285: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 910288: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91028b: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 91028e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91028f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 910292: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 910294: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 910297: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91029a: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 91029d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91029e: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 9102a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9102a2: call 0x9100a0 */
  esp -= 4; W32(esp, 0x9102a7u); SPILL(); f_9100a0(); if (g_unwind) return; RELOAD();
/* 9102a7: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 9102aa: mov eax, 2 */
  eax = 0x2u;
/* 9102af: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9102b1: mov dword ptr [edi + 0x5c], ecx */
  W32((uint32_t)(edi + 0x5cu), ecx);
/* 9102b4: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9102b7: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 9102ba: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9102bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9102c0: /* 9102c0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9102c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9102c4: je 0x91033d */
  if (zf) goto L_91033d;
L_9102c6: /* 9102c6: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9102c9: je 0x91033d */
  if (zf) goto L_91033d;
L_9102cb: /* 9102cb: test byte ptr [eax + 0x1ec], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1ecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9102d2: jne 0x91033d */
  if (!zf) goto L_91033d;
L_9102d4: /* 9102d4: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 9102d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9102da: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 9102dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9102de: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 9102e1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 9102e4: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
/* 9102e7: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9102ea: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 9102ed: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 9102f0: mov dword ptr [eax + 0x1e8], edx */
  W32((uint32_t)(eax + 0x1e8u), edx);
/* 9102f6: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 9102f9: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 9102fc: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* 9102ff: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 910302: mov edx, dword ptr [ecx + edx] */
  edx = R32((uint32_t)(ecx + edx));
/* 910305: add edx, dword ptr [ecx + edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edi)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 910308: mov edi, dword ptr [eax + 0x1ec] */
  edi = R32((uint32_t)(eax + 0x1ecu));
/* 91030e: mov dword ptr [eax + 0x1e4], edx */
  W32((uint32_t)(eax + 0x1e4u), edx);
/* 910314: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 910317: mov dword ptr [eax + 0x1e0], ecx */
  W32((uint32_t)(eax + 0x1e0u), ecx);
/* 91031d: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 910320: mov dword ptr [eax + 0x1ec], edi */
  W32((uint32_t)(eax + 0x1ecu), edi);
/* 910326: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 910329: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 91032c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 91032d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91032e: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 910331: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 910334: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 910337: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 91033a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91033b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_91033d: /* 91033d: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 910340: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 910343: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 910346: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 910347: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 91034a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 91034d: jne 0x9102c0 */
  if (!zf) goto L_9102c0;
L_910353: /* 910353: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_910356: /* 910356: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 910359: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91035a: lea eax, [ecx + 0x1fc] */
  eax = (uint32_t)(ecx + 0x1fcu);
/* 910360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910361: call 0x972770 */
  esp -= 4; W32(esp, 0x910366u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 910366: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910369: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91036b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 91036e: jne 0x910258 */
  if (!zf) goto L_910258;
L_910374: /* 910374: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
L_910377: /* 910377: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 91037a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91037b: call 0x90f170 */
  esp -= 4; W32(esp, 0x910380u); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 910380: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910382: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 910385: jne 0x91039b */
  if (!zf) goto L_91039b;
L_910387: /* 910387: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910388: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x91038du); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 91038d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 910390: mov ecx, dword ptr [eax + 0x1ec] */
  ecx = R32((uint32_t)(eax + 0x1ecu));
/* 910396: or ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 910399: jmp 0x9103a4 */
  goto L_9103a4;
L_91039b: /* 91039b: mov ecx, dword ptr [eax + 0x1ec] */
  ecx = R32((uint32_t)(eax + 0x1ecu));
/* 9103a1: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
L_9103a4: /* 9103a4: mov dword ptr [eax + 0x1ec], ecx */
  W32((uint32_t)(eax + 0x1ecu), ecx);
/* 9103aa: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9103ad: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9103b0: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 9103b3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9103b6: mov ecx, dword ptr [eax + ecx] */
  ecx = R32((uint32_t)(eax + ecx));
/* 9103b9: add ecx, dword ptr [eax + edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9103bc: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9103be: jl 0x910230 */
  if ((sf != of)) goto L_910230;
L_9103c4: /* 9103c4: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9103c7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9103ca: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 9103cd: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 9103d0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 9103d2: mov ecx, eax */
  ecx = eax;
/* 9103d4: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9103da: jns 0x9103e1 */
  if (!sf) goto L_9103e1;
L_9103dc: /* 9103dc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9103dd: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9103e0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  ecx = r;
  }
L_9103e1: /* 9103e1: je 0x9103e8 */
  if (zf) goto L_9103e8;
L_9103e3: /* 9103e3: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9103e5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_9103e8: /* 9103e8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9103ea: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9103ed: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 9103f0: mov edi, dword ptr [esi + 0x34] */
  edi = R32((uint32_t)(esi + 0x34u));
/* 9103f3: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9103f6: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 9103f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9103fb: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9103fd: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 910400: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 910403: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* 910406: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 910408: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 91040b: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 91040e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 910411: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 910413: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 910414: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 910417: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 91041a: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 91041d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 910420: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 910421: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910422: call 0x90ffe0 */
  esp -= 4; W32(esp, 0x910427u); SPILL(); f_90ffe0(); if (g_unwind) return; RELOAD();
/* 910427: mov edi, eax */
  edi = eax;
/* 910429: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 91042c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91042f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910431: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 910434: je 0x91043d */
  if (zf) goto L_91043d;
L_910436: /* 910436: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 910439: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91043a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91043b: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x91043du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_91043d: /* 91043d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91043f: jne 0x910158 */
  if (!zf) goto L_910158;
L_910445: /* 910445: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
L_910448: /* 910448: xor eax, eax */
  eax = 0;
/* 91044a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91044c: mov edx, 0xfffffffd */
  edx = 0xfffffffdu;
/* 910451: jle 0x910466 */
  if ((zf || sf != of)) goto L_910466;
L_910453: /* 910453: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 910456: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 910459: mov esi, dword ptr [ecx + 0x5c] */
  esi = R32((uint32_t)(ecx + 0x5cu));
/* 91045c: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 91045e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91045f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910461: mov dword ptr [ecx + 0x5c], esi */
  W32((uint32_t)(ecx + 0x5cu), esi);
/* 910464: jl 0x910453 */
  if ((sf != of)) goto L_910453;
L_910466: /* 910466: xor eax, eax */
  eax = 0;
/* 910468: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91046a: jle 0x910489 */
  if ((zf || sf != of)) goto L_910489;
L_91046c: /* 91046c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_910470: /* 910470: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 910473: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 910476: mov edi, dword ptr [ecx + 0x1ec] */
  edi = R32((uint32_t)(ecx + 0x1ecu));
/* 91047c: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 91047e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91047f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910481: mov dword ptr [ecx + 0x1ec], edi */
  W32((uint32_t)(ecx + 0x1ecu), edi);
/* 910487: jl 0x910470 */
  if ((sf != of)) goto L_910470;
L_910489: /* 910489: lea esp, [ebp - 0x30] */
  esp = (uint32_t)(ebp + 0xffffffd0u);
/* 91048c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91048d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91048e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91048f: mov esp, ebp */
  esp = ebp;
/* 910491: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 910492: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_9104a0(void) {
  LOAD_REGS();
L_9104a0: /* 9104a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9104a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9104a6: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 9104aa: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 9104b0: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 9104b2: fcomp dword ptr [edx + 0x178] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x178u)));
  FPOP();
/* 9104b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9104ba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9104bd: jp 0x9104c5 */
  if (pf) goto L_9104c5;
L_9104bf: /* 9104bf: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 9104c4: ret  */
  esp += 4; SPILL(); return;
L_9104c5: /* 9104c5: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 9104cb: fcomp dword ptr [edx + 0x178] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x178u)));
  FPOP();
/* 9104d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9104d3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9104d6: jne 0x9104de */
  if (!zf) goto L_9104de;
L_9104d8: /* 9104d8: mov eax, 1 */
  eax = 0x1u;
/* 9104dd: ret  */
  esp += 4; SPILL(); return;
L_9104de: /* 9104de: xor eax, eax */
  eax = 0;
/* 9104e0: ret  */
  esp += 4; SPILL(); return;
}

void f_9104f0(void) {
  LOAD_REGS();
L_9104f0: /* 9104f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9104f1: mov ebp, esp */
  ebp = esp;
/* 9104f3: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9104f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9104f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9104f8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9104fb: mov ebx, dword ptr [esi + 0x2c] */
  ebx = R32((uint32_t)(esi + 0x2cu));
/* 9104fe: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 910501: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 910504: mov edx, dword ptr [ecx + ebx*4 - 4] */
  edx = R32((uint32_t)(ecx + ebx*4 + 0xfffffffcu));
/* 910508: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 910509: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91050a: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 91050d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 910510: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 910513: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 910516: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 910519: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 91051c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91051d: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 910520: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 910523: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 910526: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 910528: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 91052b: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91052e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910531: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 910534: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 910537: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 91053a: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 91053d: mov dword ptr [ebp - 8], 0 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x0u);
/* 910544: call 0x99cc00 */
  esp -= 4; W32(esp, 0x910549u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 910549: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 91054c: mov eax, esp */
  eax = esp;
/* 91054e: push 0x910c30 */
  { uint32_t v = 0x910c30u; esp -= 4; W32(esp, v); }
/* 910553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910555: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 910558: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 910559: call 0x9759d0 */
  esp -= 4; W32(esp, 0x91055eu); SPILL(); f_9759d0(); if (g_unwind) return; RELOAD();
/* 91055e: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 910561: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 910564: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910567: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91056a: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91056d: call 0x99cc00 */
  esp -= 4; W32(esp, 0x910572u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 910572: xor eax, eax */
  eax = 0;
/* 910574: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 910576: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 910579: jle 0x910595 */
  if ((zf || sf != of)) goto L_910595;
L_91057b: /* 91057b: nop  */
/* 91057c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_910580: /* 910580: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 910583: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 910586: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 910587: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910589: mov dword ptr [edx + 0x23c], 0xffffffff */
  W32((uint32_t)(edx + 0x23cu), 0xffffffffu);
/* 910593: jl 0x910580 */
  if ((sf != of)) goto L_910580;
L_910595: /* 910595: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 910598: xor edi, edi */
  edi = 0;
/* 91059a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91059c: jle 0x91062d */
  if ((zf || sf != of)) goto L_91062d;
L_9105a2: /* 9105a2: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9105a5: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 9105a8: mov dword ptr [ecx + 0x154], 0xffffffff */
  W32((uint32_t)(ecx + 0x154u), 0xffffffffu);
/* 9105b2: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 9105b5: mov dword ptr [edx + 0x158], 0 */
  W32((uint32_t)(edx + 0x158u), 0x0u);
/* 9105bf: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 9105c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9105c3: call 0x90fe00 */
  esp -= 4; W32(esp, 0x9105c8u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 9105c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9105ca: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 9105cd: je 0x9105e4 */
  if (zf) goto L_9105e4;
L_9105cf: /* 9105cf: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9105d2: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 9105d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9105d6: call 0x90bd40 */
  esp -= 4; W32(esp, 0x9105dbu); SPILL(); f_90bd40(); if (g_unwind) return; RELOAD();
/* 9105db: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9105de: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 9105e1: mov dword ptr [edx + 0x64], eax */
  W32((uint32_t)(edx + 0x64u), eax);
L_9105e4: /* 9105e4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9105e7: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9105ea: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 9105ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9105ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9105ef: call 0x910a40 */
  esp -= 4; W32(esp, 0x9105f4u); SPILL(); f_910a40(); if (g_unwind) return; RELOAD();
/* 9105f4: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9105f7: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 9105fa: fstp dword ptr [eax + 0x15c] */
  WF32((uint32_t)(eax + 0x15cu), ST0); FPOP();
/* 910600: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 910603: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910608: je 0x910611 */
  if (zf) goto L_910611;
L_91060a: /* 91060a: mov edx, dword ptr [eax + 0x64] */
  edx = R32((uint32_t)(eax + 0x64u));
/* 91060d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91060f: jle 0x910621 */
  if ((zf || sf != of)) goto L_910621;
L_910611: /* 910611: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 910614: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910615: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 910618: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 910619: call 0x975a10 */
  esp -= 4; W32(esp, 0x91061eu); SPILL(); f_975a10(); if (g_unwind) return; RELOAD();
/* 91061e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_910621: /* 910621: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 910624: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 910625: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910627: jl 0x9105a2 */
  if ((sf != of)) goto L_9105a2;
L_91062d: /* 91062d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 910630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910631: call 0x975a80 */
  esp -= 4; W32(esp, 0x910636u); SPILL(); f_975a80(); if (g_unwind) return; RELOAD();
/* 910636: mov edi, eax */
  edi = eax;
/* 910638: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91063b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91063d: je 0x91080c */
  if (zf) goto L_91080c;
L_910643: /* 910643: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 910646: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910648: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 91064b: mov ebx, dword ptr [ecx + 0x23c] */
  ebx = R32((uint32_t)(ecx + 0x23cu));
/* 910651: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 910654: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 910657: je 0x91079c */
  if (zf) goto L_91079c;
L_91065d: /* 91065d: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910660: mov eax, dword ptr [eax + 0x23c] */
  eax = R32((uint32_t)(eax + 0x23cu));
/* 910666: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 910669: jne 0x9106f8 */
  if (!zf) goto L_9106f8;
L_91066f: /* 91066f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910671: jne 0x9106c1 */
  if (!zf) goto L_9106c1;
L_910673: /* 910673: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 910676: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 910679: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91067a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91067b: call 0x910be0 */
  esp -= 4; W32(esp, 0x910680u); SPILL(); f_910be0(); if (g_unwind) return; RELOAD();
/* 910680: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 910683: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 910686: mov ebx, eax */
  ebx = eax;
/* 910688: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 91068b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91068c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91068d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91068e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91068f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910690: call 0x910ef0 */
  esp -= 4; W32(esp, 0x910695u); SPILL(); f_910ef0(); if (g_unwind) return; RELOAD();
/* 910695: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910698: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91069a: je 0x9107f3 */
  if (zf) goto L_9107f3;
L_9106a0: /* 9106a0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9106a3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9106a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9106a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9106a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9106a9: call 0x910b90 */
  esp -= 4; W32(esp, 0x9106aeu); SPILL(); f_910b90(); if (g_unwind) return; RELOAD();
/* 9106ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9106b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9106b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9106b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9106b4: call 0x910b90 */
  esp -= 4; W32(esp, 0x9106b9u); SPILL(); f_910b90(); if (g_unwind) return; RELOAD();
/* 9106b9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9106bc: jmp 0x9107f3 */
  goto L_9107f3;
L_9106c1: /* 9106c1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9106c4: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 9106c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9106c8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9106cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9106cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9106cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9106ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9106cf: call 0x910ef0 */
  esp -= 4; W32(esp, 0x9106d4u); SPILL(); f_910ef0(); if (g_unwind) return; RELOAD();
/* 9106d4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9106d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9106d9: je 0x9107f3 */
  if (zf) goto L_9107f3;
L_9106df: /* 9106df: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9106e2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9106e5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9106e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9106e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9106ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9106eb: call 0x910b90 */
  esp -= 4; W32(esp, 0x9106f0u); SPILL(); f_910b90(); if (g_unwind) return; RELOAD();
/* 9106f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9106f3: jmp 0x9107f3 */
  goto L_9107f3;
L_9106f8: /* 9106f8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9106fb: jne 0x910731 */
  if (!zf) goto L_910731;
L_9106fd: /* 9106fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 910700: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 910703: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 910706: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910707: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910708: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910709: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91070a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91070b: call 0x910ef0 */
  esp -= 4; W32(esp, 0x910710u); SPILL(); f_910ef0(); if (g_unwind) return; RELOAD();
/* 910710: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910713: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910715: je 0x9107f3 */
  if (zf) goto L_9107f3;
L_91071b: /* 91071b: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 91071e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 910721: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910722: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910723: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910724: call 0x910b90 */
  esp -= 4; W32(esp, 0x910729u); SPILL(); f_910b90(); if (g_unwind) return; RELOAD();
/* 910729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91072c: jmp 0x9107f3 */
  goto L_9107f3;
L_910731: /* 910731: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910733: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 910736: jne 0x910747 */
  if (!zf) goto L_910747;
L_910738: /* 910738: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 91073b: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 91073e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91073f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910741: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910742: jmp 0x9107ea */
  goto L_9107ea;
L_910747: /* 910747: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 91074a: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* 91074d: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 910750: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 910753: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 910756: add eax, dword ptr [ecx + edx*4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edx*4)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910759: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91075a: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 91075d: call 0x90fe00 */
  esp -= 4; W32(esp, 0x910762u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 910762: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 910765: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 910768: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 910769: cmp ecx, dword ptr [edx + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91076c: jl 0x910776 */
  if ((sf != of)) goto L_910776;
L_91076e: /* 91076e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910770: jne 0x9107f3 */
  if (!zf) goto L_9107f3;
L_910776: /* 910776: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 910779: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 91077c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91077d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91077e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91077f: call 0x910df0 */
  esp -= 4; W32(esp, 0x910784u); SPILL(); f_910df0(); if (g_unwind) return; RELOAD();
/* 910784: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 910787: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 91078a: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 91078d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91078e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91078f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910790: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910791: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910792: call 0x910ef0 */
  esp -= 4; W32(esp, 0x910797u); SPILL(); f_910ef0(); if (g_unwind) return; RELOAD();
/* 910797: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91079a: jmp 0x9107f3 */
  goto L_9107f3;
L_91079c: /* 91079c: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91079f: jne 0x9107dd */
  if (!zf) goto L_9107dd;
L_9107a1: /* 9107a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9107a4: lea edx, [ebp - 8] */
  edx = (uint32_t)(ebp + 0xfffffff8u);
/* 9107a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9107a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9107a9: call 0x910be0 */
  esp -= 4; W32(esp, 0x9107aeu); SPILL(); f_910be0(); if (g_unwind) return; RELOAD();
/* 9107ae: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9107b1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9107b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9107b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9107b6: mov ebx, eax */
  ebx = eax;
/* 9107b8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9107bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9107bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9107bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9107be: call 0x910ef0 */
  esp -= 4; W32(esp, 0x9107c3u); SPILL(); f_910ef0(); if (g_unwind) return; RELOAD();
/* 9107c3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9107c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9107c8: je 0x9107f3 */
  if (zf) goto L_9107f3;
L_9107ca: /* 9107ca: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9107cd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9107d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9107d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9107d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9107d3: call 0x910b90 */
  esp -= 4; W32(esp, 0x9107d8u); SPILL(); f_910b90(); if (g_unwind) return; RELOAD();
/* 9107d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9107db: jmp 0x9107f3 */
  goto L_9107f3;
L_9107dd: /* 9107dd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9107e0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9107e3: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 9107e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9107e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9107e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9107e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_9107ea: /* 9107ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9107eb: call 0x910ef0 */
  esp -= 4; W32(esp, 0x9107f0u); SPILL(); f_910ef0(); if (g_unwind) return; RELOAD();
/* 9107f0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9107f3: /* 9107f3: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 9107f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9107f7: call 0x975a80 */
  esp -= 4; W32(esp, 0x9107fcu); SPILL(); f_975a80(); if (g_unwind) return; RELOAD();
/* 9107fc: mov edi, eax */
  edi = eax;
/* 9107fe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910801: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910803: jne 0x910643 */
  if (!zf) goto L_910643;
L_910809: /* 910809: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_91080c: /* 91080c: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91080f: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 910812: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 910815: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* 910818: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 910819: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 91081c: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 91081f: sub dword ptr [esi + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esi + 0x20u), r);
  }
/* 910822: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 910825: sub dword ptr [esi + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 910828: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 91082b: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 91082e: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 910831: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 910834: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 910837: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 910839: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* 91083c: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 91083f: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 910841: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 910844: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 910847: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 91084a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 91084c: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 91084f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 910851: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 910854: mov dword ptr [ebp - 0x10], 0 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x0u);
/* 91085b: jle 0x9109fa */
  if ((zf || sf != of)) goto L_9109fa;
L_910861: /* 910861: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 910864: lea ebx, [ecx + 8] */
  ebx = (uint32_t)(ecx + 0x8u);
L_910867: /* 910867: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91086a: jle 0x9109e5 */
  if ((zf || sf != of)) goto L_9109e5;
L_910870: /* 910870: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 910873: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 910876: mov dword ptr [eax + edx*4], 0 */
  W32((uint32_t)(eax + edx*4), 0x0u);
/* 91087d: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 910880: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 910883: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91088a: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91088d: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 910890: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 910893: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 910896: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 910897: call 0x910080 */
  esp -= 4; W32(esp, 0x91089cu); SPILL(); f_910080(); if (g_unwind) return; RELOAD();
/* 91089c: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91089f: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 9108a2: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 9108a5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 9108a8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9108ab: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9108ae: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9108b1: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 9108b4: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 9108b6: xor eax, eax */
  eax = 0;
/* 9108b8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9108ba: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9108bd: jle 0x910922 */
  if ((zf || sf != of)) goto L_910922;
L_9108bf: /* 9108bf: nop  */
L_9108c0: /* 9108c0: mov ecx, dword ptr [ebx - 4] */
  ecx = R32((uint32_t)(ebx + 0xfffffffcu));
/* 9108c3: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 9108c6: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9108c9: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 9108cc: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 9108cf: mov dword ptr [eax + 0x1e8], edx */
  W32((uint32_t)(eax + 0x1e8u), edx);
/* 9108d5: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 9108d8: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 9108db: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* 9108de: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9108e1: mov edx, dword ptr [ecx + edx] */
  edx = R32((uint32_t)(ecx + edx));
/* 9108e4: add edx, dword ptr [ecx + edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edi)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9108e7: mov dword ptr [eax + 0x1e4], edx */
  W32((uint32_t)(eax + 0x1e4u), edx);
/* 9108ed: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 9108f0: mov dword ptr [eax + 0x1e0], ecx */
  W32((uint32_t)(eax + 0x1e0u), ecx);
/* 9108f6: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 9108f9: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9108fc: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 9108ff: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 910902: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 910905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 910906: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 910909: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 91090c: mov edi, dword ptr [eax + edx*4] */
  edi = R32((uint32_t)(eax + edx*4));
/* 91090f: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 910912: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 910913: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 910915: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 910918: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 91091a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91091b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91091d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 910920: jl 0x9108c0 */
  if ((sf != of)) goto L_9108c0;
L_910922: /* 910922: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 910925: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 910927: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 91092e: jle 0x910981 */
  if ((zf || sf != of)) goto L_910981;
L_910930: /* 910930: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 910933: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 910936: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 910939: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* 91093c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91093d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91093e: call 0x910c60 */
  esp -= 4; W32(esp, 0x910943u); SPILL(); f_910c60(); if (g_unwind) return; RELOAD();
/* 910943: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 910946: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 910948: mov dword ptr [edx + ecx*4], edi */
  W32((uint32_t)(edx + ecx*4), edi);
/* 91094b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 91094e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 910951: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 910954: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910957: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 91095a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91095b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 91095e: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 910960: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 910963: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 910966: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 910969: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91096a: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 91096d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91096e: call 0x9100a0 */
  esp -= 4; W32(esp, 0x910973u); SPILL(); f_9100a0(); if (g_unwind) return; RELOAD();
/* 910973: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 910976: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 910979: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91097a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91097c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 91097f: jl 0x910930 */
  if ((sf != of)) goto L_910930;
L_910981: /* 910981: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 910984: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 910987: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 91098a: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 91098d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 91098f: mov ecx, eax */
  ecx = eax;
/* 910991: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 910997: jns 0x91099e */
  if (!sf) goto L_91099e;
L_910999: /* 910999: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91099a: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91099d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  ecx = r;
  }
L_91099e: /* 91099e: je 0x9109a5 */
  if (zf) goto L_9109a5;
L_9109a0: /* 9109a0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9109a2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_9109a5: /* 9109a5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9109a7: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9109aa: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 9109ad: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9109b0: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 9109b3: add dword ptr [esi + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x34u), r);
  }
/* 9109b6: mov edi, dword ptr [edx + ecx*4 + 8] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x8u));
/* 9109ba: add dword ptr [esi + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 9109bd: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 9109c0: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 9109c3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 9109c6: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9109c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9109c9: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 9109cc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9109cf: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 9109d2: mov ecx, dword ptr [edx + eax*4 - 0xc] */
  ecx = R32((uint32_t)(edx + eax*4 + 0xfffffff4u));
/* 9109d6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9109d9: cmp ecx, dword ptr [eax + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9109dc: jg 0x9109e5 */
  if ((!zf && sf == of)) goto L_9109e5;
L_9109de: /* 9109de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9109df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9109e0: call 0x910ff0 */
  esp -= 4; W32(esp, 0x9109e5u); SPILL(); f_910ff0(); if (g_unwind) return; RELOAD();
L_9109e5: /* 9109e5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9109e8: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9109eb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9109ec: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9109ef: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9109f1: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 9109f4: jl 0x910867 */
  if ((sf != of)) goto L_910867;
L_9109fa: /* 9109fa: xor edi, edi */
  edi = 0;
/* 9109fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9109fe: jle 0x910a2c */
  if ((zf || sf != of)) goto L_910a2c;
L_910a00: /* 910a00: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 910a03: lea esi, [edx + 0xc] */
  esi = (uint32_t)(edx + 0xcu);
L_910a06: /* 910a06: mov eax, dword ptr [esi - 8] */
  eax = R32((uint32_t)(esi + 0xfffffff8u));
/* 910a09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910a0b: je 0x910a14 */
  if (zf) goto L_910a14;
L_910a0d: /* 910a0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910a0e: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x910a14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_910a14: /* 910a14: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 910a16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910a18: je 0x910a21 */
  if (zf) goto L_910a21;
L_910a1a: /* 910a1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910a1b: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x910a21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_910a21: /* 910a21: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 910a24: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 910a25: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 910a28: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910a2a: jl 0x910a06 */
  if ((sf != of)) goto L_910a06;
L_910a2c: /* 910a2c: lea esp, [ebp - 0x30] */
  esp = (uint32_t)(ebp + 0xffffffd0u);
/* 910a2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910a30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910a31: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 910a32: mov esp, ebp */
  esp = ebp;
/* 910a34: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 910a35: ret 8 */
  esp += 12; SPILL(); return;
}

void f_910a40(void) {
  LOAD_REGS();
L_910a40: /* 910a40: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 910a43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910a44: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 910a48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910a49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910a4a: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 910a52: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 910a5a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 910a62: call 0x90fe00 */
  esp -= 4; W32(esp, 0x910a67u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 910a67: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 910a6a: mov esi, dword ptr [esi + 0x58] */
  esi = R32((uint32_t)(esi + 0x58u));
/* 910a6d: mov edi, eax */
  edi = eax;
/* 910a6f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910a71: jne 0x910a7f */
  if (!zf) goto L_910a7f;
L_910a73: /* 910a73: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 910a79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910a7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910a7b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910a7e: ret  */
  esp += 4; SPILL(); return;
L_910a7f: /* 910a7f: mov eax, dword ptr [edi + 0x160] */
  eax = R32((uint32_t)(edi + 0x160u));
/* 910a85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910a87: jne 0x910a95 */
  if (!zf) goto L_910a95;
L_910a89: /* 910a89: fld dword ptr [0xa13bb8] */
  { double v = F32((uint32_t)(0xa13bb8u)); FPUSH(v); }
/* 910a8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910a90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910a91: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910a94: ret  */
  esp += 4; SPILL(); return;
L_910a95: /* 910a95: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 910a98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910a9a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910a9b: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 910a9f: jne 0x910aa6 */
  if (!zf) goto L_910aa6;
L_910aa1: /* 910aa1: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 910aa4: jmp 0x910aaa */
  goto L_910aaa;
L_910aa6: /* 910aa6: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
L_910aaa: /* 910aaa: fild dword ptr [edi + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x64u)); FPUSH(v); }
/* 910aad: fmul dword ptr [ebx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x28u)));
/* 910ab0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 910ab2: fadd dword ptr [ebx + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x20u)));
/* 910ab5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 910ab7: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 910abb: fld dword ptr [ecx + 0x230] */
  { double v = F32((uint32_t)(ecx + 0x230u)); FPUSH(v); }
/* 910ac1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 910ac7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 910ac9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 910acc: je 0x910af9 */
  if (zf) goto L_910af9;
L_910ace: /* 910ace: mov al, byte ptr [ecx + 0x1ec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1ecu))) & 0xffu);
/* 910ad4: mov dl, 4 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
/* 910ad6: test dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 910ad8: je 0x910af9 */
  if (zf) goto L_910af9;
L_910ada: /* 910ada: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910adc: je 0x910b04 */
  if (zf) goto L_910b04;
L_910ade: /* 910ade: fld dword ptr [esi + 0x230] */
  { double v = F32((uint32_t)(esi + 0x230u)); FPUSH(v); }
/* 910ae4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 910aea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 910aec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 910aef: je 0x910af9 */
  if (zf) goto L_910af9;
L_910af1: /* 910af1: test byte ptr [esi + 0x1ec], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1ecu))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 910af7: jne 0x910b04 */
  if (!zf) goto L_910b04;
L_910af9: /* 910af9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 910afd: fadd dword ptr [ebx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x34u)));
/* 910b00: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_910b04: /* 910b04: mov esi, dword ptr [edi + 0x164] */
  esi = R32((uint32_t)(edi + 0x164u));
/* 910b0a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910b0c: je 0x910b5d */
  if (zf) goto L_910b5d;
L_910b0e: /* 910b0e: mov edi, edi */
  edi = edi;
L_910b10: /* 910b10: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 910b14: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 910b18: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 910b1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910b1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910b20: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 910b24: call 0x90f9e0 */
  esp -= 4; W32(esp, 0x910b29u); SPILL(); f_90f9e0(); if (g_unwind) return; RELOAD();
/* 910b29: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 910b2d: fmul dword ptr [esi + 0x174] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x174u)));
/* 910b33: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 910b37: fmul dword ptr [esi + 0x170] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x170u)));
/* 910b3d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 910b3f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 910b43: fmul dword ptr [esi + 0x16c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x16cu)));
/* 910b49: mov esi, dword ptr [esi + 0x1dc] */
  esi = R32((uint32_t)(esi + 0x1dcu));
/* 910b4f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910b51: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 910b53: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 910b57: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 910b5b: jne 0x910b10 */
  if (!zf) goto L_910b10;
L_910b5d: /* 910b5d: fild dword ptr [edi + 0x160] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x160u)); FPUSH(v); }
/* 910b63: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 910b67: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 910b6a: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 910b6c: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 910b70: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 910b74: fmul dword ptr [ebx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x30u)));
/* 910b77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 910b78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910b79: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 910b7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910b7c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 910b7e: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 910b80: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910b83: ret  */
  esp += 4; SPILL(); return;
}

void f_910b90(void) {
  LOAD_REGS();
L_910b90: /* 910b90: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 910b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910b95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910b96: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 910b9a: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 910b9d: mov edx, dword ptr [ecx + eax*4 + 8] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x8u));
/* 910ba1: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 910ba4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 910ba7: lea eax, [edx*4 + 4] */
  eax = (uint32_t)(edx*4 + 0x4u);
/* 910bae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910baf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910bb0: call dword ptr [0xb021ac] */
  { uint32_t t = R32((uint32_t)(0xb021acu)); esp -= 4; W32(esp, 0x910bb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 910bb6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 910bb9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 910bbd: mov dword ptr [eax + 0x23c], edi */
  W32((uint32_t)(eax + 0x23cu), edi);
/* 910bc3: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 910bc6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 910bc9: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 910bcc: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 910bcf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 910bd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910bd1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 910bd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910bd5: ret  */
  esp += 4; SPILL(); return;
}

void f_910be0(void) {
  LOAD_REGS();
L_910be0: /* 910be0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 910be4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 910be6: lea edx, [ecx + ecx*4] */
  edx = (uint32_t)(ecx + ecx*4);
/* 910be9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 910bed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910bee: xor esi, esi */
  esi = 0;
/* 910bf0: mov dword ptr [ecx + edx*4], esi */
  W32((uint32_t)(ecx + edx*4), esi);
/* 910bf3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 910bf5: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 910bf8: mov dword ptr [ecx + edx*4 + 8], esi */
  W32((uint32_t)(ecx + edx*4 + 0x8u), esi);
/* 910bfc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 910bfe: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 910c01: mov dword ptr [ecx + edx*4 + 4], esi */
  W32((uint32_t)(ecx + edx*4 + 0x4u), esi);
/* 910c05: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 910c07: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 910c0a: mov dword ptr [ecx + edx*4 + 0x10], esi */
  W32((uint32_t)(ecx + edx*4 + 0x10u), esi);
/* 910c0e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 910c10: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 910c13: mov dword ptr [ecx + edx*4 + 0xc], esi */
  W32((uint32_t)(ecx + edx*4 + 0xcu), esi);
/* 910c17: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 910c19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 910c1a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 910c1c: mov eax, ecx */
  eax = ecx;
/* 910c1e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 910c1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910c20: ret  */
  esp += 4; SPILL(); return;
}

void f_910c30(void) {
  LOAD_REGS();
L_910c30: /* 910c30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 910c34: fld dword ptr [eax + 0x15c] */
  { double v = F32((uint32_t)(eax + 0x15cu)); FPUSH(v); }
/* 910c3a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 910c3e: fcomp dword ptr [ecx + 0x15c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x15cu)));
  FPOP();
/* 910c44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 910c46: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 910c49: jne 0x910c51 */
  if (!zf) goto L_910c51;
L_910c4b: /* 910c4b: mov eax, 1 */
  eax = 0x1u;
/* 910c50: ret  */
  esp += 4; SPILL(); return;
L_910c51: /* 910c51: xor eax, eax */
  eax = 0;
/* 910c53: ret  */
  esp += 4; SPILL(); return;
}

void f_910c60(void) {
  LOAD_REGS();
L_910c60: /* 910c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 910c61: mov ebp, esp */
  ebp = esp;
/* 910c63: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 910c66: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 910c69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910c6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910c6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910c6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910c6d: call 0x90fe00 */
  esp -= 4; W32(esp, 0x910c72u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 910c72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910c74: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 910c77: je 0x910dd8 */
  if (zf) goto L_910dd8;
L_910c7d: /* 910c7d: mov edi, dword ptr [eax + 0x160] */
  edi = R32((uint32_t)(eax + 0x160u));
/* 910c83: lea esi, [edi*4] */
  esi = (uint32_t)(edi*4);
/* 910c8a: mov eax, esi */
  eax = esi;
/* 910c8c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910c8f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 910c92: call 0x99cc00 */
  esp -= 4; W32(esp, 0x910c97u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 910c97: mov eax, esi */
  eax = esi;
/* 910c99: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910c9c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 910c9f: mov dword ptr [ebp - 4], esp */
  W32((uint32_t)(ebp + 0xfffffffcu), esp);
/* 910ca2: call 0x99cc00 */
  esp -= 4; W32(esp, 0x910ca7u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 910ca7: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 910caa: mov eax, dword ptr [esi + 0x164] */
  eax = R32((uint32_t)(esi + 0x164u));
/* 910cb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910cb2: mov ebx, esp */
  ebx = esp;
/* 910cb4: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 910cbb: je 0x910cea */
  if (zf) goto L_910cea;
L_910cbd: /* 910cbd: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 910cc0: mov ecx, ebx */
  ecx = ebx;
/* 910cc2: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_910cc4: /* 910cc4: mov esi, dword ptr [eax + 0x194] */
  esi = R32((uint32_t)(eax + 0x194u));
/* 910cca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910ccc: je 0x910cd1 */
  if (zf) goto L_910cd1;
L_910cce: /* 910cce: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_910cd1: /* 910cd1: mov dword ptr [edx + ecx], eax */
  W32((uint32_t)(edx + ecx), eax);
/* 910cd4: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 910cda: mov eax, dword ptr [eax + 0x1dc] */
  eax = R32((uint32_t)(eax + 0x1dcu));
/* 910ce0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 910ce3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910ce5: jne 0x910cc4 */
  if (!zf) goto L_910cc4;
L_910ce7: /* 910ce7: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
L_910cea: /* 910cea: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 910ced: push 0x9104a0 */
  { uint32_t v = 0x9104a0u; esp -= 4; W32(esp, v); }
/* 910cf2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 910cf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910cf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910cf6: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x910cfcu); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 910cfc: mov eax, dword ptr [esi + 0x158] */
  eax = R32((uint32_t)(esi + 0x158u));
/* 910d02: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 910d05: mov edi, dword ptr [esi + 0x64] */
  edi = R32((uint32_t)(esi + 0x64u));
/* 910d08: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 910d0b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910d0d: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 910d10: jle 0x910dd8 */
  if ((zf || sf != of)) goto L_910dd8;
L_910d16: /* 910d16: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 910d19: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 910d1c: fidiv dword ptr [ebp - 0x10] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xfffffff0u)));
/* 910d1f: fcomp dword ptr [edx + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x1cu)));
  FPOP();
/* 910d22: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 910d24: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 910d27: jnp 0x910d7f */
  if (!pf) goto L_910d7f;
L_910d29: /* 910d29: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 910d2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910d2e: je 0x910d7f */
  if (zf) goto L_910d7f;
L_910d30: /* 910d30: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 910d33: xor edx, edx */
  edx = 0;
/* 910d35: mov eax, ebx */
  eax = ebx;
/* 910d37: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 910d39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_910d40: /* 910d40: mov esi, dword ptr [eax + ecx] */
  esi = R32((uint32_t)(eax + ecx));
/* 910d43: cmp dword ptr [esi + 0x194], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x194u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910d4a: je 0x910d51 */
  if (zf) goto L_910d51;
L_910d4c: /* 910d4c: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910d4f: jne 0x910d57 */
  if (!zf) goto L_910d57;
L_910d51: /* 910d51: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 910d52: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910d55: jmp 0x910d40 */
  goto L_910d40;
L_910d57: /* 910d57: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 910d5a: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 910d5d: cmp dword ptr [edx + 0x194], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x194u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910d64: jne 0x910d69 */
  if (!zf) goto L_910d69;
L_910d66: /* 910d66: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 910d67: jmp 0x910d6c */
  goto L_910d6c;
L_910d69: /* 910d69: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_910d6c: /* 910d6c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 910d6f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 910d70: mov dword ptr [edx + 0x194], 0 */
  W32((uint32_t)(edx + 0x194u), 0x0u);
/* 910d7a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 910d7d: jmp 0x910dc6 */
  goto L_910dc6;
L_910d7f: /* 910d7f: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 910d82: mov ecx, edx */
  ecx = edx;
/* 910d84: xor esi, esi */
  esi = 0;
/* 910d86: mov eax, ebx */
  eax = ebx;
/* 910d88: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 910d8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_910d90: /* 910d90: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* 910d93: cmp dword ptr [edi + 0x194], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x194u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910d9a: jne 0x910da1 */
  if (!zf) goto L_910da1;
L_910d9c: /* 910d9c: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910d9f: jne 0x910da7 */
  if (!zf) goto L_910da7;
L_910da1: /* 910da1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 910da2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910da5: jmp 0x910d90 */
  goto L_910d90;
L_910da7: /* 910da7: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 910daa: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 910dad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910dae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 910daf: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x910db4u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
/* 910db4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 910db7: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 910dba: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 910dbb: mov dword ptr [ebx + esi*4], 1 */
  W32((uint32_t)(ebx + esi*4), 0x1u);
/* 910dc2: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 910dc5: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_910dc6: /* 910dc6: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 910dc9: cmp edi, dword ptr [eax + 0x158] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x158u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910dcf: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 910dd2: jg 0x910d16 */
  if ((!zf && sf == of)) goto L_910d16;
L_910dd8: /* 910dd8: lea esp, [ebp - 0x1c] */
  esp = (uint32_t)(ebp + 0xffffffe4u);
/* 910ddb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910ddc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910ddd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 910dde: mov esp, ebp */
  esp = ebp;
/* 910de0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 910de1: ret  */
  esp += 4; SPILL(); return;
}

void f_910df0(void) {
  LOAD_REGS();
L_910df0: /* 910df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910df1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 910df2: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 910df6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910df7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910df8: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 910dfc: lea eax, [ebp + ebp*4] */
  eax = (uint32_t)(ebp + ebp*4);
/* 910e00: lea esi, [edi + eax*4] */
  esi = (uint32_t)(edi + eax*4);
/* 910e03: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 910e07: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 910e0a: mov edx, dword ptr [edi + ecx*4 + 8] */
  edx = R32((uint32_t)(edi + ecx*4 + 0x8u));
/* 910e0e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 910e11: mov ebx, dword ptr [edi + ecx*4 + 0x10] */
  ebx = R32((uint32_t)(edi + ecx*4 + 0x10u));
/* 910e15: lea edi, [edi + ecx*4] */
  edi = (uint32_t)(edi + ecx*4);
/* 910e18: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 910e1b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 910e1d: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 910e24: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 910e27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 910e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910e29: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 910e2b: call dword ptr [0xb021ac] */
  { uint32_t t = R32((uint32_t)(0xb021acu)); esp -= 4; W32(esp, 0x910e31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 910e31: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 910e34: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 910e3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910e3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 910e3d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 910e40: call dword ptr [0xb021ac] */
  { uint32_t t = R32((uint32_t)(0xb021acu)); esp -= 4; W32(esp, 0x910e46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 910e46: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 910e49: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 910e4c: xor ebx, ebx */
  ebx = 0;
/* 910e4e: xor eax, eax */
  eax = 0;
/* 910e50: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910e52: jle 0x910e7f */
  if ((zf || sf != of)) goto L_910e7f;
L_910e54: /* 910e54: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 910e57: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 910e5a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 910e5d: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 910e60: mov dword ptr [ebx + edx*4], ecx */
  W32((uint32_t)(ebx + edx*4), ecx);
/* 910e63: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 910e66: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 910e69: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 910e6c: mov dword ptr [edx + 0x23c], ebp */
  W32((uint32_t)(edx + 0x23cu), ebp);
/* 910e72: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 910e75: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 910e78: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 910e79: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910e7b: jl 0x910e54 */
  if ((sf != of)) goto L_910e54;
L_910e7d: /* 910e7d: xor ebx, ebx */
  ebx = 0;
L_910e7f: /* 910e7f: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 910e82: xor eax, eax */
  eax = 0;
/* 910e84: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910e86: jle 0x910eb3 */
  if ((zf || sf != of)) goto L_910eb3;
L_910e88: /* 910e88: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 910e8b: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 910e8e: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 910e91: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 910e94: mov dword ptr [ebx + edx*4], ecx */
  W32((uint32_t)(ebx + edx*4), ecx);
/* 910e97: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 910e9a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 910e9d: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 910ea0: mov dword ptr [edx + 0x154], ebp */
  W32((uint32_t)(edx + 0x154u), ebp);
/* 910ea6: inc dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x10u), r);
  }
/* 910ea9: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 910eac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 910ead: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910eaf: jl 0x910e88 */
  if ((sf != of)) goto L_910e88;
L_910eb1: /* 910eb1: xor ebx, ebx */
  ebx = 0;
L_910eb3: /* 910eb3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 910eb5: add dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 910eb7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 910eba: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910ebc: je 0x910ec8 */
  if (zf) goto L_910ec8;
L_910ebe: /* 910ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910ebf: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x910ec5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 910ec5: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
L_910ec8: /* 910ec8: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 910ecb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910ecd: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 910ed0: je 0x910edc */
  if (zf) goto L_910edc;
L_910ed2: /* 910ed2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910ed3: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x910ed9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 910ed9: mov dword ptr [edi + 0xc], ebx */
  W32((uint32_t)(edi + 0xcu), ebx);
L_910edc: /* 910edc: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 910edf: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 910ee1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910ee2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910ee3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 910ee4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 910ee5: ret  */
  esp += 4; SPILL(); return;
}

void f_910ef0(void) {
  LOAD_REGS();
L_910ef0: /* 910ef0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910ef1: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 910ef5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 910ef6: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 910efa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910efb: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 910eff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910f00: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* 910f03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910f04: lea edi, [ebp + eax*4] */
  edi = (uint32_t)(ebp + eax*4);
/* 910f08: call 0x90fe00 */
  esp -= 4; W32(esp, 0x910f0du); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 910f0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910f0f: jne 0x910f1e */
  if (!zf) goto L_910f1e;
L_910f11: /* 910f11: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 910f14: mov dword ptr [esi + 0x158], eax */
  W32((uint32_t)(esi + 0x158u), eax);
/* 910f1a: add dword ptr [edi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
/* 910f1c: jmp 0x910f76 */
  goto L_910f76;
L_910f1e: /* 910f1e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 910f22: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 910f24: cmp edx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910f27: jge 0x910f94 */
  if ((sf == of)) goto L_910f94;
L_910f29: /* 910f29: mov eax, dword ptr [esi + 0x158] */
  eax = R32((uint32_t)(esi + 0x158u));
/* 910f2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 910f31: jne 0x910f42 */
  if (!zf) goto L_910f42;
L_910f33: /* 910f33: fld dword ptr [esi + 0x15c] */
  { double v = F32((uint32_t)(esi + 0x15cu)); FPUSH(v); }
/* 910f39: fsub dword ptr [ecx + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x20u)));
/* 910f3c: fstp dword ptr [esi + 0x15c] */
  WF32((uint32_t)(esi + 0x15cu), ST0); FPOP();
L_910f42: /* 910f42: fld dword ptr [esi + 0x15c] */
  { double v = F32((uint32_t)(esi + 0x15cu)); FPUSH(v); }
/* 910f48: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 910f49: mov dword ptr [esi + 0x158], eax */
  W32((uint32_t)(esi + 0x158u), eax);
/* 910f4f: fsub dword ptr [ecx + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x28u)));
/* 910f52: fstp dword ptr [esi + 0x15c] */
  WF32((uint32_t)(esi + 0x15cu), ST0); FPOP();
/* 910f58: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 910f5a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 910f5b: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 910f5d: mov eax, dword ptr [esi + 0x158] */
  eax = R32((uint32_t)(esi + 0x158u));
/* 910f63: cmp eax, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 910f66: jge 0x910f76 */
  if ((sf == of)) goto L_910f76;
L_910f68: /* 910f68: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 910f6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910f6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910f6e: call 0x975a10 */
  esp -= 4; W32(esp, 0x910f73u); SPILL(); f_975a10(); if (g_unwind) return; RELOAD();
/* 910f73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_910f76: /* 910f76: cmp dword ptr [esi + 0x154], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x154u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 910f7d: jne 0x910f8a */
  if (!zf) goto L_910f8a;
L_910f7f: /* 910f7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910f80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910f81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 910f82: call 0x910fa0 */
  esp -= 4; W32(esp, 0x910f87u); SPILL(); f_910fa0(); if (g_unwind) return; RELOAD();
/* 910f87: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_910f8a: /* 910f8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910f8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910f8c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 910f8d: mov eax, 1 */
  eax = 0x1u;
/* 910f92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 910f93: ret  */
  esp += 4; SPILL(); return;
L_910f94: /* 910f94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910f95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910f96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 910f97: xor eax, eax */
  eax = 0;
/* 910f99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 910f9a: ret  */
  esp += 4; SPILL(); return;
}

void f_910fa0(void) {
  LOAD_REGS();
L_910fa0: /* 910fa0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 910fa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910fa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910fa6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 910faa: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 910fad: mov edx, dword ptr [ecx + eax*4 + 0x10] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x10u));
/* 910fb1: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 910fb4: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 910fb7: lea eax, [edx*4 + 4] */
  eax = (uint32_t)(edx*4 + 0x4u);
/* 910fbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 910fbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 910fc0: call dword ptr [0xb021ac] */
  { uint32_t t = R32((uint32_t)(0xb021acu)); esp -= 4; W32(esp, 0x910fc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 910fc6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 910fc9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 910fcd: mov dword ptr [eax + 0x154], edi */
  W32((uint32_t)(eax + 0x154u), edi);
/* 910fd3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 910fd6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 910fd9: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 910fdc: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 910fdf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 910fe0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 910fe1: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 910fe4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 910fe5: ret  */
  esp += 4; SPILL(); return;
}

void f_910ff0(void) {
  LOAD_REGS();
L_910ff0: /* 910ff0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 910ff4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 910ff6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 910ff7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 910ff8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 910ff9: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 910ffd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 910ffe: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 911001: xor ebp, ebp */
  ebp = 0;
/* 911003: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 911004: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 911006: je 0x9110f2 */
  if (zf) goto L_9110f2;
L_91100c: /* 91100c: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 91100f: mov ebx, dword ptr [ecx + edi*4] */
  ebx = R32((uint32_t)(ecx + edi*4));
/* 911012: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 911015: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 911018: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91101a: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91101c: jge 0x91105d */
  if ((sf == of)) goto L_91105d;
L_91101e: /* 91101e: jmp 0x911024 */
  goto L_911024;
L_911020: /* 911020: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_911024: /* 911024: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 911026: jne 0x9110f2 */
  if (!zf) goto L_9110f2;
L_91102c: /* 91102c: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 91102f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911030: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 911033: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911034: call 0x90f5a0 */
  esp -= 4; W32(esp, 0x911039u); SPILL(); f_90f5a0(); if (g_unwind) return; RELOAD();
/* 911039: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91103b: je 0x911042 */
  if (zf) goto L_911042;
L_91103d: /* 91103d: mov ebp, 1 */
  ebp = 0x1u;
L_911042: /* 911042: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 911045: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 911048: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 91104b: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 91104e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 91104f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 911051: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911053: jl 0x911020 */
  if ((sf != of)) goto L_911020;
L_911055: /* 911055: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 911057: jne 0x9110ee */
  if (!zf) goto L_9110ee;
L_91105d: /* 91105d: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 911060: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 911063: mov ebx, dword ptr [ecx + edi*4] */
  ebx = R32((uint32_t)(ecx + edi*4));
/* 911066: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 911069: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91106b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91106d: jge 0x91109b */
  if ((sf == of)) goto L_91109b;
L_91106f: /* 91106f: nop  */
L_911070: /* 911070: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 911073: mov ebp, dword ptr [ecx + ebx*4] */
  ebp = R32((uint32_t)(ecx + ebx*4));
/* 911076: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 911077: call 0x90f080 */
  esp -= 4; W32(esp, 0x91107cu); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 91107c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91107d: call 0x90f180 */
  esp -= 4; W32(esp, 0x911082u); SPILL(); f_90f180(); if (g_unwind) return; RELOAD();
/* 911082: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 911083: call 0x90f1b0 */
  esp -= 4; W32(esp, 0x911088u); SPILL(); f_90f1b0(); if (g_unwind) return; RELOAD();
/* 911088: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 91108b: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 91108e: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 911091: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 911094: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 911095: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 911097: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911099: jl 0x911070 */
  if ((sf != of)) goto L_911070;
L_91109b: /* 91109b: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91109e: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 9110a1: mov ebp, dword ptr [esi + 0x20] */
  ebp = R32((uint32_t)(esi + 0x20u));
/* 9110a4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9110a7: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 9110aa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9110ab: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 9110ae: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 9110b1: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 9110b3: mov dword ptr [esi + 0x20], ebp */
  W32((uint32_t)(esi + 0x20u), ebp);
/* 9110b6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 9110b9: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 9110bc: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9110be: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 9110c1: mov edi, dword ptr [esi + 0x34] */
  edi = R32((uint32_t)(esi + 0x34u));
/* 9110c4: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 9110c7: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 9110ca: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9110cc: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9110ce: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 9110d1: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 9110d4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9110d7: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9110d9: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 9110dc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9110df: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 9110e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9110e3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9110e5: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 9110e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9110e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9110ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9110eb: ret 8 */
  esp += 12; SPILL(); return;
L_9110ee: /* 9110ee: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_9110f2: /* 9110f2: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 9110f5: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 9110f8: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 9110fb: cmp ecx, dword ptr [eax + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9110fe: jle 0x911107 */
  if ((zf || sf != of)) goto L_911107;
L_911100: /* 911100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911101: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911102: call 0x9104f0 */
  esp -= 4; W32(esp, 0x911107u); SPILL(); f_9104f0(); if (g_unwind) return; RELOAD();
L_911107: /* 911107: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 911108: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911109: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91110a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91110b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_911110(void) {
  LOAD_REGS();
L_911110: /* 911110: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911114: mov ecx, dword ptr [eax + 0x214] */
  ecx = R32((uint32_t)(eax + 0x214u));
/* 91111a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91111b: xor esi, esi */
  esi = 0;
/* 91111d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91111f: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 911122: je 0x911129 */
  if (zf) goto L_911129;
L_911124: /* 911124: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 911127: jmp 0x91112c */
  goto L_91112c;
L_911129: /* 911129: and ecx, 0xfffffffd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
L_91112c: /* 91112c: fld dword ptr [eax + 0x88] */
  { double v = F32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 911132: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 911135: fadd dword ptr [eax + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x74u)));
/* 911138: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 91113b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91113f: fadd dword ptr [eax + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x60u)));
/* 911142: fmul dword ptr [0xa12538] */
  ST0 = ST0 * (F32((uint32_t)(0xa12538u)));
/* 911148: fld dword ptr [eax + 0xa0] */
  { double v = F32((uint32_t)(eax + 0xa0u)); FPUSH(v); }
/* 91114e: fmul dword ptr [eax + 0x1f8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f8u)));
/* 911154: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 911156: fsubr dword ptr [ecx] */
  ST0 = (F32((uint32_t)(ecx))) - ST0;
/* 911158: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 91115a: fld dword ptr [eax + 0xa4] */
  { double v = F32((uint32_t)(eax + 0xa4u)); FPUSH(v); }
/* 911160: fmul dword ptr [eax + 0x1f8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f8u)));
/* 911166: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 911168: fsubr dword ptr [eax + 0x24] */
  ST0 = (F32((uint32_t)(eax + 0x24u))) - ST0;
/* 91116b: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 91116e: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* 911174: fmul dword ptr [eax + 0x1f8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f8u)));
/* 91117a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91117c: fsubr dword ptr [eax + 0x28] */
  ST0 = (F32((uint32_t)(eax + 0x28u))) - ST0;
/* 91117f: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 911182: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 911184: fld dword ptr [eax + 0x90] */
  { double v = F32((uint32_t)(eax + 0x90u)); FPUSH(v); }
/* 91118a: fmul dword ptr [eax + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f4u)));
/* 911190: fchs  */
  ST0 = -ST0;
/* 911192: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 911194: fmul dword ptr [eax + 0x1f0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f0u)));
/* 91119a: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* 91119d: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 9111a0: fld dword ptr [eax + 0x94] */
  { double v = F32((uint32_t)(eax + 0x94u)); FPUSH(v); }
/* 9111a6: fmul dword ptr [eax + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f4u)));
/* 9111ac: fchs  */
  ST0 = -ST0;
/* 9111ae: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 9111b1: fmul dword ptr [eax + 0x1f0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f0u)));
/* 9111b7: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* 9111ba: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 9111bd: fld dword ptr [eax + 0x98] */
  { double v = F32((uint32_t)(eax + 0x98u)); FPUSH(v); }
/* 9111c3: fmul dword ptr [eax + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f4u)));
/* 9111c9: fchs  */
  ST0 = -ST0;
/* 9111cb: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 9111ce: cmp dword ptr [eax + 0x1a0], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9111d4: fmul dword ptr [eax + 0x1f0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f0u)));
/* 9111da: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* 9111dd: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 9111e0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9111e4: fadd dword ptr [eax + 0x230] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x230u)));
/* 9111ea: fstp dword ptr [eax + 0x230] */
  WF32((uint32_t)(eax + 0x230u), ST0); FPOP();
/* 9111f0: je 0x911237 */
  if (zf) goto L_911237;
L_9111f2: /* 9111f2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9111f8: mov edx, 4 */
  edx = 0x4u;
/* 9111fd: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
L_911201: /* 911201: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 911203: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 911206: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 911207: fmul dword ptr [ecx + 0x14c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14cu)));
/* 91120d: mov dword ptr [ecx + 0x14c], esi */
  W32((uint32_t)(ecx + 0x14cu), esi);
/* 911213: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 911216: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 911219: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91121b: fmul dword ptr [ecx + 0x15c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x15cu)));
/* 911221: mov dword ptr [ecx + 0x15c], esi */
  W32((uint32_t)(ecx + 0x15cu), esi);
/* 911227: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91122a: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 91122d: jne 0x911201 */
  if (!zf) goto L_911201;
L_91122f: /* 91122f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 911231: mov dword ptr [eax + 0x1a0], esi */
  W32((uint32_t)(eax + 0x1a0u), esi);
L_911237: /* 911237: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911238: ret  */
  esp += 4; SPILL(); return;
}

void f_911240(void) {
  LOAD_REGS();
L_911240: /* 911240: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 911243: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 911247: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 91124b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91124f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 911252: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 911255: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 911259: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91125a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91125b: xor edi, edi */
  edi = 0;
/* 91125d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91125e: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 911262: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 911266: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 91126a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 91126e: call 0x91b490 */
  esp -= 4; W32(esp, 0x911273u); SPILL(); f_91b490(); if (g_unwind) return; RELOAD();
/* 911273: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 911277: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 91127a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 91127e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 911281: xor esi, esi */
  esi = 0;
/* 911283: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911285: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 911289: jle 0x911400 */
  if ((zf || sf != of)) goto L_911400;
L_91128f: /* 91128f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 911290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 911291: jmp 0x911297 */
  goto L_911297;
L_911293: /* 911293: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_911297: /* 911297: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 91129a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 91129d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 9112a0: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 9112a3: mov edi, dword ptr [edi + esi*4] */
  edi = R32((uint32_t)(edi + esi*4));
/* 9112a6: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 9112a8: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 9112ab: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 9112ae: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 9112b1: lea edi, [ebp + edi*4] */
  edi = (uint32_t)(ebp + edi*4);
/* 9112b5: mov ebp, dword ptr [eax + 8] */
  ebp = R32((uint32_t)(eax + 0x8u));
/* 9112b8: mov esi, dword ptr [ebp + esi*4] */
  esi = R32((uint32_t)(ebp + esi*4));
/* 9112bc: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 9112c0: xor esi, esi */
  esi = 0;
/* 9112c2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9112c4: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9112c8: jle 0x911305 */
  if ((zf || sf != of)) goto L_911305;
L_9112ca: /* 9112ca: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 9112ce: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9112d1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9112d3: mov ebp, ecx */
  ebp = ecx;
L_9112d5: /* 9112d5: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9112d9: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9112dd: mov edx, dword ptr [ebx + esi*4] */
  edx = R32((uint32_t)(ebx + esi*4));
/* 9112e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9112e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9112e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9112e3: call 0x911110 */
  esp -= 4; W32(esp, 0x9112e8u); SPILL(); f_911110(); if (g_unwind) return; RELOAD();
/* 9112e8: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 9112eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9112ee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9112ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9112f0: call 0x90d420 */
  esp -= 4; W32(esp, 0x9112f5u); SPILL(); f_90d420(); if (g_unwind) return; RELOAD();
/* 9112f5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9112f9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9112fa: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9112fd: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9112ff: jl 0x9112d5 */
  if ((sf != of)) goto L_9112d5;
L_911301: /* 911301: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
L_911305: /* 911305: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 911309: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 91130d: xor esi, esi */
  esi = 0;
/* 91130f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 911311: jle 0x9113b7 */
  if ((zf || sf != of)) goto L_9113b7;
L_911317: /* 911317: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 91131a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91131b: call 0x90fe00 */
  esp -= 4; W32(esp, 0x911320u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 911320: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 911323: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 911326: mov ecx, dword ptr [edx + 0x1e4] */
  ecx = R32((uint32_t)(edx + 0x1e4u));
/* 91132c: mov dword ptr [eax + 0xb4], ecx */
  W32((uint32_t)(eax + 0xb4u), ecx);
/* 911332: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 911335: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 911338: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91133a: jne 0x911348 */
  if (!zf) goto L_911348;
L_91133c: /* 91133c: mov dword ptr [eax + 0xb8], 0xffffffff */
  W32((uint32_t)(eax + 0xb8u), 0xffffffffu);
/* 911346: jmp 0x911354 */
  goto L_911354;
L_911348: /* 911348: mov edx, dword ptr [ecx + 0x1e4] */
  edx = R32((uint32_t)(ecx + 0x1e4u));
/* 91134e: mov dword ptr [eax + 0xb8], edx */
  W32((uint32_t)(eax + 0xb8u), edx);
L_911354: /* 911354: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 911358: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 911359: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91135b: jl 0x911317 */
  if ((sf != of)) goto L_911317;
L_91135d: /* 91135d: mov ebx, eax */
  ebx = eax;
/* 91135f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 911361: jle 0x9113b3 */
  if ((zf || sf != of)) goto L_9113b3;
L_911363: /* 911363: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 911364: call 0x91b570 */
  esp -= 4; W32(esp, 0x911369u); SPILL(); f_91b570(); if (g_unwind) return; RELOAD();
/* 911369: xor esi, esi */
  esi = 0;
/* 91136b: nop  */
/* 91136c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_911370: /* 911370: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 911374: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 911377: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 91137b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91137c: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 911380: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 911381: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 911382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911383: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 911384: call dword ptr [eax + 0x60] */
  { uint32_t t = R32((uint32_t)(eax + 0x60u)); esp -= 4; W32(esp, 0x911387u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 911387: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 911388: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91138a: jl 0x911370 */
  if ((sf != of)) goto L_911370;
L_91138c: /* 91138c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91138d: call 0x91b4b0 */
  esp -= 4; W32(esp, 0x911392u); SPILL(); f_91b4b0(); if (g_unwind) return; RELOAD();
/* 911392: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 911395: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 911398: mov ecx, dword ptr [eax + edx*4 - 4] */
  ecx = R32((uint32_t)(eax + edx*4 + 0xfffffffcu));
/* 91139c: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9113a0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9113a4: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 9113a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9113a9: je 0x9113cc */
  if (zf) goto L_9113cc;
L_9113ab: /* 9113ab: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9113af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9113b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9113b1: jmp 0x9113c7 */
  goto L_9113c7;
L_9113b3: /* 9113b3: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
L_9113b7: /* 9113b7: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 9113bb: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 9113be: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9113c0: je 0x9113d0 */
  if (zf) goto L_9113d0;
L_9113c2: /* 9113c2: mov edx, ecx */
  edx = ecx;
/* 9113c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9113c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_9113c7: /* 9113c7: call 0x911410 */
  esp -= 4; W32(esp, 0x9113ccu); SPILL(); f_911410(); if (g_unwind) return; RELOAD();
L_9113cc: /* 9113cc: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
L_9113d0: /* 9113d0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9113d4: cmp ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9113d8: jbe 0x9113de */
  if ((cf | zf)) goto L_9113de;
L_9113da: /* 9113da: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_9113de: /* 9113de: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9113e2: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 9113e5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9113e6: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9113e8: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9113ec: jl 0x911293 */
  if ((sf != of)) goto L_911293;
L_9113f2: /* 9113f2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9113f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9113f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9113f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9113f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9113fa: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9113fd: ret 0x18 */
  esp += 28; SPILL(); return;
L_911400: /* 911400: mov eax, edi */
  eax = edi;
/* 911402: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 911403: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911404: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 911407: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_911410(void) {
  LOAD_REGS();
L_911410: /* 911410: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911414: mov ecx, eax */
  ecx = eax;
/* 911416: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91141c: jns 0x911423 */
  if (!sf) goto L_911423;
L_91141e: /* 91141e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91141f: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 911422: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  ecx = r;
  }
L_911423: /* 911423: je 0x91142a */
  if (zf) goto L_91142a;
L_911425: /* 911425: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 911427: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_91142a: /* 91142a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91142b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91142e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 911430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911431: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 911435: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 911438: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91143b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91143c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91143e: mov edx, eax */
  edx = eax;
/* 911440: jl 0x911444 */
  if ((sf != of)) goto L_911444;
L_911442: /* 911442: mov edx, ecx */
  edx = ecx;
L_911444: /* 911444: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 911446: jge 0x911456 */
  if ((sf == of)) goto L_911456;
L_911448: /* 911448: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 91144b: xor eax, eax */
  eax = 0;
/* 91144d: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 911450: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 911452: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911453: ret 8 */
  esp += 12; SPILL(); return;
L_911456: /* 911456: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911458: jl 0x91145c */
  if ((sf != of)) goto L_91145c;
L_91145a: /* 91145a: mov eax, ecx */
  eax = ecx;
L_91145c: /* 91145c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 91145f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 911462: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 911464: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911465: ret 8 */
  esp += 12; SPILL(); return;
}

void f_911470(void) {
  LOAD_REGS();
L_911470: /* 911470: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 911473: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 911477: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 911478: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 911479: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 91147d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 911481: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 911484: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 911487: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 91148b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91148c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91148d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91148e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 911492: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 911496: call 0x91b490 */
  esp -= 4; W32(esp, 0x91149bu); SPILL(); f_91b490(); if (g_unwind) return; RELOAD();
/* 91149b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 91149f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9114a3: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 9114a6: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 9114a9: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 9114ac: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 9114ae: lea ebp, [esi + edx*4] */
  ebp = (uint32_t)(esi + edx*4);
/* 9114b1: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9114b4: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 9114b7: mov esi, dword ptr [esi + ecx*4] */
  esi = R32((uint32_t)(esi + ecx*4));
/* 9114ba: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 9114bd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9114c0: lea edi, [edi + esi*4] */
  edi = (uint32_t)(edi + esi*4);
/* 9114c3: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 9114c6: xor ebx, ebx */
  ebx = 0;
/* 9114c8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9114ca: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 9114ce: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 9114d2: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 9114d6: jle 0x911528 */
  if ((zf || sf != of)) goto L_911528;
L_9114d8: /* 9114d8: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9114dc: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
L_9114e0: /* 9114e0: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 9114e4: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9114e8: mov ecx, dword ptr [ebp + ebx*4] */
  ecx = R32((uint32_t)(ebp + ebx*4));
/* 9114ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9114ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9114ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9114ef: call 0x911110 */
  esp -= 4; W32(esp, 0x9114f4u); SPILL(); f_911110(); if (g_unwind) return; RELOAD();
/* 9114f4: mov esi, dword ptr [ebp + ebx*4] */
  esi = R32((uint32_t)(ebp + ebx*4));
/* 9114f8: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 9114fc: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 911500: add esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 911506: mov ecx, 0x10 */
  ecx = 0x10u;
/* 91150b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 91150d: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 911511: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 911514: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 911515: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 911518: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91151a: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 91151e: jl 0x9114e0 */
  if ((sf != of)) goto L_9114e0;
L_911520: /* 911520: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 911524: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
L_911528: /* 911528: xor ebx, ebx */
  ebx = 0;
/* 91152a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91152c: jle 0x9115d5 */
  if ((zf || sf != of)) goto L_9115d5;
L_911532: /* 911532: mov edx, dword ptr [edi + ebx*4] */
  edx = R32((uint32_t)(edi + ebx*4));
/* 911535: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 911536: call 0x90fe00 */
  esp -= 4; W32(esp, 0x91153bu); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 91153b: mov eax, dword ptr [edi + ebx*4] */
  eax = R32((uint32_t)(edi + ebx*4));
/* 91153e: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 911541: mov edx, dword ptr [ecx + 0x1e8] */
  edx = R32((uint32_t)(ecx + 0x1e8u));
/* 911547: mov dword ptr [eax + 0xb4], edx */
  W32((uint32_t)(eax + 0xb4u), edx);
/* 91154d: mov eax, dword ptr [edi + ebx*4] */
  eax = R32((uint32_t)(edi + ebx*4));
/* 911550: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 911553: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 911555: jne 0x911563 */
  if (!zf) goto L_911563;
L_911557: /* 911557: mov dword ptr [eax + 0xb8], 0xffffffff */
  W32((uint32_t)(eax + 0xb8u), 0xffffffffu);
/* 911561: jmp 0x91156f */
  goto L_91156f;
L_911563: /* 911563: mov ecx, dword ptr [ecx + 0x1e8] */
  ecx = R32((uint32_t)(ecx + 0x1e8u));
/* 911569: mov dword ptr [eax + 0xb8], ecx */
  W32((uint32_t)(eax + 0xb8u), ecx);
L_91156f: /* 91156f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 911570: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911572: jl 0x911532 */
  if ((sf != of)) goto L_911532;
L_911574: /* 911574: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 911576: jle 0x9115d5 */
  if ((zf || sf != of)) goto L_9115d5;
L_911578: /* 911578: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 91157c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91157d: call 0x91b570 */
  esp -= 4; W32(esp, 0x911582u); SPILL(); f_91b570(); if (g_unwind) return; RELOAD();
/* 911582: xor esi, esi */
  esi = 0;
L_911584: /* 911584: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 911588: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 91158b: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 91158f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 911590: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 911594: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 911595: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 911596: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911597: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 911598: call dword ptr [eax + 0x60] */
  { uint32_t t = R32((uint32_t)(eax + 0x60u)); esp -= 4; W32(esp, 0x91159bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91159b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91159f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9115a0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9115a2: jl 0x911584 */
  if ((sf != of)) goto L_911584;
L_9115a4: /* 9115a4: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 9115a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9115a9: call 0x91b4b0 */
  esp -= 4; W32(esp, 0x9115aeu); SPILL(); f_91b4b0(); if (g_unwind) return; RELOAD();
/* 9115ae: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9115b1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9115b3: mov esi, dword ptr [eax + edx*4 - 4] */
  esi = R32((uint32_t)(eax + edx*4 + 0xfffffffcu));
/* 9115b7: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9115bb: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 9115be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9115c0: je 0x9115c9 */
  if (zf) goto L_9115c9;
L_9115c2: /* 9115c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9115c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9115c4: call 0x911410 */
  esp -= 4; W32(esp, 0x9115c9u); SPILL(); f_911410(); if (g_unwind) return; RELOAD();
L_9115c9: /* 9115c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9115ca: mov eax, esi */
  eax = esi;
/* 9115cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9115cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9115ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9115cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9115d2: ret 0x1c */
  esp += 32; SPILL(); return;
L_9115d5: /* 9115d5: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9115d9: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 9115dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9115de: je 0x9115e8 */
  if (zf) goto L_9115e8;
L_9115e0: /* 9115e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9115e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9115e3: call 0x911410 */
  esp -= 4; W32(esp, 0x9115e8u); SPILL(); f_911410(); if (g_unwind) return; RELOAD();
L_9115e8: /* 9115e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9115e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9115ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9115eb: xor eax, eax */
  eax = 0;
/* 9115ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9115ee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9115f1: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_911600(void) {
  LOAD_REGS();
L_911600: /* 911600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 911601: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 911605: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911606: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 911607: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 91160b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 91160e: mov ecx, dword ptr [eax + ebp*4] */
  ecx = R32((uint32_t)(eax + ebp*4));
/* 911611: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 911614: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 911617: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 91161a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 91161e: mov eax, dword ptr [ecx + ebp*4] */
  eax = R32((uint32_t)(ecx + ebp*4));
/* 911621: xor esi, esi */
  esi = 0;
/* 911623: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 911625: jle 0x91164d */
  if ((zf || sf != of)) goto L_91164d;
L_911627: /* 911627: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 911628: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 91162c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_911630: /* 911630: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 911634: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 911637: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 911638: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911639: call 0x90d2c0 */
  esp -= 4; W32(esp, 0x91163eu); SPILL(); f_90d2c0(); if (g_unwind) return; RELOAD();
/* 91163e: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 911641: mov eax, dword ptr [ecx + ebp*4] */
  eax = R32((uint32_t)(ecx + ebp*4));
/* 911644: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 911645: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 911648: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91164a: jl 0x911630 */
  if ((sf != of)) goto L_911630;
L_91164c: /* 91164c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_91164d: /* 91164d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91164e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91164f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 911650: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_911660(void) {
  LOAD_REGS();
L_911660: /* 911660: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 911663: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 911667: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91166b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 91166e: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 911671: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 911672: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911673: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 911675: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 911678: xor ebx, ebx */
  ebx = 0;
/* 91167a: lea esi, [esi + edx*4] */
  esi = (uint32_t)(esi + edx*4);
/* 91167d: cmp dword ptr [eax + ecx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911680: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 911684: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 911688: jle 0x91180a */
  if ((zf || sf != of)) goto L_91180a;
L_91168e: /* 91168e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91168f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 911690: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
L_911694: /* 911694: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 911696: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 91169a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91169b: call 0x90fe00 */
  esp -= 4; W32(esp, 0x9116a0u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 9116a0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9116a2: mov edx, 4 */
  edx = 0x4u;
/* 9116a7: jne 0x9116f7 */
  if (!zf) goto L_9116f7;
L_9116a9: /* 9116a9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9116ad: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9116b0: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9116b2: lea eax, [ecx + 0x20] */
  eax = (uint32_t)(ecx + 0x20u);
/* 9116b5: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_9116b7: /* 9116b7: mov ebp, dword ptr [eax - 0x20] */
  ebp = R32((uint32_t)(eax + 0xffffffe0u));
/* 9116ba: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 9116bc: lea edi, [ecx + eax + 0x48] */
  edi = (uint32_t)(ecx + eax + 0x48u);
/* 9116c0: mov dword ptr [edi + ebx], ebp */
  W32((uint32_t)(edi + ebx), ebp);
/* 9116c3: mov ebp, dword ptr [eax - 0x10] */
  ebp = R32((uint32_t)(eax + 0xfffffff0u));
/* 9116c6: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 9116c8: lea edi, [ecx + eax + 0x68] */
  edi = (uint32_t)(ecx + eax + 0x68u);
/* 9116cc: mov dword ptr [edi + ebx], ebp */
  W32((uint32_t)(edi + ebx), ebp);
/* 9116cf: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 9116d1: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 9116d3: lea edi, [ecx + eax + 0x58] */
  edi = (uint32_t)(ecx + eax + 0x58u);
/* 9116d7: mov dword ptr [edi + ebx], ebp */
  W32((uint32_t)(edi + ebx), ebp);
/* 9116da: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 9116dd: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 9116df: lea edi, [ecx + eax + 0x78] */
  edi = (uint32_t)(ecx + eax + 0x78u);
/* 9116e3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9116e6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9116e7: mov dword ptr [edi + ebx], ebp */
  W32((uint32_t)(edi + ebx), ebp);
/* 9116ea: jne 0x9116b7 */
  if (!zf) goto L_9116b7;
L_9116ec: /* 9116ec: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 9116f0: xor ebx, ebx */
  ebx = 0;
/* 9116f2: jmp 0x9117e2 */
  goto L_9117e2;
L_9116f7: /* 9116f7: mov edi, dword ptr [eax + 0x164] */
  edi = R32((uint32_t)(eax + 0x164u));
/* 9116fd: lea ecx, [eax + 0x88] */
  ecx = (uint32_t)(eax + 0x88u);
L_911703: /* 911703: mov dword ptr [ecx - 0x20], ebx */
  W32((uint32_t)(ecx + 0xffffffe0u), ebx);
/* 911706: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 911708: mov dword ptr [ecx - 0x10], ebx */
  W32((uint32_t)(ecx + 0xfffffff0u), ebx);
/* 91170b: mov dword ptr [ecx + 0x10], ebx */
  W32((uint32_t)(ecx + 0x10u), ebx);
/* 91170e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 911711: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 911712: jne 0x911703 */
  if (!zf) goto L_911703;
L_911714: /* 911714: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 911716: mov dword ptr [eax + 0x170], ebx */
  W32((uint32_t)(eax + 0x170u), ebx);
/* 91171c: je 0x9117e2 */
  if (zf) goto L_9117e2;
L_911722: /* 911722: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 911726: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 911729: lea esi, [edx + ebp + 0x20] */
  esi = (uint32_t)(edx + ebp + 0x20u);
/* 91172d: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_911731: /* 911731: mov ebx, edi */
  ebx = edi;
/* 911733: lea edx, [edi + 0x78] */
  edx = (uint32_t)(edi + 0x78u);
/* 911736: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 911739: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 91173b: mov dword ptr [esp + 0x14], 3 */
  W32((uint32_t)(esp + 0x14u), 0x3u);
L_911743: /* 911743: mov ebp, dword ptr [esi - 0x20] */
  ebp = R32((uint32_t)(esi + 0xffffffe0u));
/* 911746: mov dword ptr [ebx + ecx], ebp */
  W32((uint32_t)(ebx + ecx), ebp);
/* 911749: fld dword ptr [ebx + ecx] */
  { double v = F32((uint32_t)(ebx + ecx)); FPUSH(v); }
/* 91174c: mov ebp, dword ptr [esi - 0x10] */
  ebp = R32((uint32_t)(esi + 0xfffffff0u));
/* 91174f: mov dword ptr [edx + 0x10], ebp */
  W32((uint32_t)(edx + 0x10u), ebp);
/* 911752: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 911754: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 911756: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 911759: mov dword ptr [edx + 0x20], ebp */
  W32((uint32_t)(edx + 0x20u), ebp);
/* 91175c: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 91175e: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 911762: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 911765: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 911767: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91176a: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 91176d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 911770: fadd dword ptr [edx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xcu)));
/* 911773: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 911774: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 911778: fstp dword ptr [ecx + 0x1c] */
  WF32((uint32_t)(ecx + 0x1cu), ST0); FPOP();
/* 91177b: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 91177e: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 911781: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 911784: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 911787: fadd dword ptr [edx + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x1cu)));
/* 91178a: fstp dword ptr [ecx + 0x2c] */
  WF32((uint32_t)(ecx + 0x2cu), ST0); FPOP();
/* 91178d: jne 0x911743 */
  if (!zf) goto L_911743;
L_91178f: /* 91178f: fld dword ptr [edi + 0x70] */
  { double v = F32((uint32_t)(edi + 0x70u)); FPUSH(v); }
/* 911792: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 911796: fmul dword ptr [edi + 0x174] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x174u)));
/* 91179c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91179d: fld dword ptr [edi + 0x6c] */
  { double v = F32((uint32_t)(edi + 0x6cu)); FPUSH(v); }
/* 9117a0: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9117a4: fmul dword ptr [edi + 0x170] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x170u)));
/* 9117aa: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 9117ae: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9117b1: xor ebx, ebx */
  ebx = 0;
/* 9117b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9117b5: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 9117b9: fld dword ptr [edi + 0x68] */
  { double v = F32((uint32_t)(edi + 0x68u)); FPUSH(v); }
/* 9117bc: fmul dword ptr [edi + 0x16c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x16cu)));
/* 9117c2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9117c4: fadd dword ptr [eax + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x170u)));
/* 9117ca: fstp dword ptr [eax + 0x170] */
  WF32((uint32_t)(eax + 0x170u), ST0); FPOP();
/* 9117d0: mov edi, dword ptr [edi + 0x1dc] */
  edi = R32((uint32_t)(edi + 0x1dcu));
/* 9117d6: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9117d8: jne 0x911731 */
  if (!zf) goto L_911731;
L_9117de: /* 9117de: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_9117e2: /* 9117e2: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9117e6: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 9117e9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9117ed: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9117f1: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 9117f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9117f5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9117f8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9117fa: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9117fe: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 911802: jl 0x911694 */
  if ((sf != of)) goto L_911694;
L_911808: /* 911808: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 911809: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_91180a: /* 91180a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 91180e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91180f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 911810: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 911813: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_911820(void) {
  LOAD_REGS();
L_911820: /* 911820: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 911824: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 91182a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 91182e: mov ecx, dword ptr [edx + 0x18] */
  ecx = R32((uint32_t)(edx + 0x18u));
/* 911831: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 911834: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911835: mov esi, dword ptr [edx + 0x1c] */
  esi = R32((uint32_t)(edx + 0x1cu));
/* 911838: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 91183b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91183d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91183f: jge 0x91186d */
  if ((sf == of)) goto L_91186d;
L_911841: /* 911841: mov edx, dword ptr [edx + 0x14] */
  edx = R32((uint32_t)(edx + 0x14u));
/* 911844: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 911846: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 911849: mov esi, eax */
  esi = eax;
/* 91184b: nop  */
/* 91184c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_911850: /* 911850: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 911852: fcom dword ptr [ecx + 0x238] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x238u)));
/* 911858: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91185a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91185d: jne 0x911867 */
  if (!zf) goto L_911867;
L_91185f: /* 91185f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 911861: fld dword ptr [ecx + 0x238] */
  { double v = F32((uint32_t)(ecx + 0x238u)); FPUSH(v); }
L_911867: /* 911867: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91186a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 91186b: jne 0x911850 */
  if (!zf) goto L_911850;
L_91186d: /* 91186d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91186e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_911880(void) {
  LOAD_REGS();
L_911880: /* 911880: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 911883: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 911887: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 91188b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91188c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91188d: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 911894: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911895: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 911899: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91189b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91189d: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9118a1: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 9118a4: lea eax, [eax + eax*2 + 0x5c] */
  eax = (uint32_t)(eax + eax*2 + 0x5cu);
/* 9118a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9118a9: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 9118ad: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9118b1: jle 0x9119d1 */
  if ((zf || sf != of)) goto L_9119d1;
L_9118b7: /* 9118b7: lea eax, [edx*8] */
  eax = (uint32_t)(edx*8);
/* 9118be: mov ecx, eax */
  ecx = eax;
/* 9118c0: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 9118c3: je 0x9118ce */
  if (zf) goto L_9118ce;
L_9118c5: /* 9118c5: lea eax, [edx*8 + 0x40] */
  eax = (uint32_t)(edx*8 + 0x40u);
/* 9118cc: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_9118ce: /* 9118ce: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9118d2: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 9118d9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9118dd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9118e1: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 9118e8: mov eax, ecx */
  eax = ecx;
/* 9118ea: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 9118ed: jne 0x9118f5 */
  if (!zf) goto L_9118f5;
L_9118ef: /* 9118ef: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9118f3: jmp 0x911902 */
  goto L_911902;
L_9118f5: /* 9118f5: lea edi, [esi*4 + 0x40] */
  edi = (uint32_t)(esi*4 + 0x40u);
/* 9118fc: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9118fe: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_911902: /* 911902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 911904: jne 0x91190c */
  if (!zf) goto L_91190c;
L_911906: /* 911906: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 91190a: jmp 0x911919 */
  goto L_911919;
L_91190c: /* 91190c: lea edi, [esi*4 + 0x40] */
  edi = (uint32_t)(esi*4 + 0x40u);
/* 911913: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 911915: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_911919: /* 911919: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91191c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91191e: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 911922: jne 0x91192a */
  if (!zf) goto L_91192a;
L_911924: /* 911924: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 911928: jmp 0x911937 */
  goto L_911937;
L_91192a: /* 91192a: lea edx, [esi*4 + 0x40] */
  edx = (uint32_t)(esi*4 + 0x40u);
/* 911931: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 911933: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_911937: /* 911937: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 911939: jne 0x91193f */
  if (!zf) goto L_91193f;
L_91193b: /* 91193b: mov ebp, ecx */
  ebp = ecx;
/* 91193d: jmp 0x911948 */
  goto L_911948;
L_91193f: /* 91193f: lea ebp, [esi*4 + 0x40] */
  ebp = (uint32_t)(esi*4 + 0x40u);
/* 911946: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
L_911948: /* 911948: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91194a: jne 0x911950 */
  if (!zf) goto L_911950;
L_91194c: /* 91194c: mov ebx, ecx */
  ebx = ecx;
/* 91194e: jmp 0x911959 */
  goto L_911959;
L_911950: /* 911950: lea ebx, [esi*4 + 0x40] */
  ebx = (uint32_t)(esi*4 + 0x40u);
/* 911957: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_911959: /* 911959: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91195b: jne 0x911961 */
  if (!zf) goto L_911961;
L_91195d: /* 91195d: mov edi, ecx */
  edi = ecx;
/* 91195f: jmp 0x91196a */
  goto L_91196a;
L_911961: /* 911961: lea edi, [esi*4 + 0x40] */
  edi = (uint32_t)(esi*4 + 0x40u);
/* 911968: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_91196a: /* 91196a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91196c: jne 0x911972 */
  if (!zf) goto L_911972;
L_91196e: /* 91196e: mov esi, ecx */
  esi = ecx;
/* 911970: jmp 0x91197b */
  goto L_91197b;
L_911972: /* 911972: lea esi, [esi*4 + 0x40] */
  esi = (uint32_t)(esi*4 + 0x40u);
/* 911979: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_91197b: /* 91197b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 91197f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 911980: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 911983: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 911985: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 911989: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91198c: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 91198f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 911993: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 911996: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 911998: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91199a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91199c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91199e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9119a0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9119a4: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9119a6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9119aa: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9119ac: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9119b0: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9119b2: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9119b6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9119b8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9119bc: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9119be: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9119c2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9119c4: lea eax, [edx + ecx + 0x280] */
  eax = (uint32_t)(edx + ecx + 0x280u);
/* 9119cb: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9119cf: jmp 0x9119e1 */
  goto L_9119e1;
L_9119d1: /* 9119d1: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 9119d5: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 9119d9: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 9119dd: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
L_9119e1: /* 9119e1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9119e5: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9119e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9119ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9119eb: call 0x974b30 */
  esp -= 4; W32(esp, 0x9119f0u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 9119f0: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 9119f4: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 9119f8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9119fb: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 9119fe: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 911a02: lea ecx, [eax + 0x5c] */
  ecx = (uint32_t)(eax + 0x5cu);
/* 911a05: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 911a08: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 911a0a: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 911a0d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 911a0f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 911a13: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 911a15: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 911a18: jle 0x911ac4 */
  if ((zf || sf != of)) goto L_911ac4;
L_911a1e: /* 911a1e: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 911a22: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 911a25: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 911a29: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 911a2c: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 911a30: lea ecx, [ecx + edx + 0x3f] */
  ecx = (uint32_t)(ecx + edx + 0x3fu);
/* 911a34: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 911a38: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911a3b: mov dword ptr [eax + 0x58], ecx */
  W32((uint32_t)(eax + 0x58u), ecx);
/* 911a3e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 911a40: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 911a44: mov dword ptr [eax + 0x54], ecx */
  W32((uint32_t)(eax + 0x54u), ecx);
/* 911a47: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 911a49: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 911a4d: mov dword ptr [eax + 0x50], ecx */
  W32((uint32_t)(eax + 0x50u), ecx);
/* 911a50: lea ecx, [ecx + edx + 0x3f] */
  ecx = (uint32_t)(ecx + edx + 0x3fu);
/* 911a54: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 911a58: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911a5b: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* 911a5e: lea ecx, [ecx + edx + 0x3f] */
  ecx = (uint32_t)(ecx + edx + 0x3fu);
/* 911a62: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 911a66: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911a69: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 911a6c: lea ecx, [ecx + edx + 0x3f] */
  ecx = (uint32_t)(ecx + edx + 0x3fu);
/* 911a70: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 911a74: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911a77: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 911a7a: lea ecx, [ecx + edx + 0x3f] */
  ecx = (uint32_t)(ecx + edx + 0x3fu);
/* 911a7e: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 911a82: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911a85: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 911a88: lea ecx, [ecx + edx + 0x3f] */
  ecx = (uint32_t)(ecx + edx + 0x3fu);
/* 911a8c: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911a8f: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 911a92: lea ecx, [ecx + ebp + 0x3f] */
  ecx = (uint32_t)(ecx + ebp + 0x3fu);
/* 911a96: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911a99: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 911a9c: lea ecx, [ecx + ebx + 0x3f] */
  ecx = (uint32_t)(ecx + ebx + 0x3fu);
/* 911aa0: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911aa3: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 911aa6: lea ecx, [ecx + edi + 0x3f] */
  ecx = (uint32_t)(ecx + edi + 0x3fu);
/* 911aaa: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911aad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 911aae: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 911ab1: lea ecx, [ecx + esi + 0x3f] */
  ecx = (uint32_t)(ecx + esi + 0x3fu);
/* 911ab5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911ab6: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 911ab9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 911aba: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 911abd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 911abe: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 911ac1: ret 0x10 */
  esp += 20; SPILL(); return;
L_911ac4: /* 911ac4: xor ecx, ecx */
  ecx = 0;
/* 911ac6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 911ac7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911ac8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 911ac9: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 911acc: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 911acf: mov dword ptr [eax + 0x58], ecx */
  W32((uint32_t)(eax + 0x58u), ecx);
/* 911ad2: mov dword ptr [eax + 0x54], ecx */
  W32((uint32_t)(eax + 0x54u), ecx);
/* 911ad5: mov dword ptr [eax + 0x50], ecx */
  W32((uint32_t)(eax + 0x50u), ecx);
/* 911ad8: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* 911adb: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 911ade: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 911ae1: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 911ae4: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 911ae7: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 911aea: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 911aed: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 911af0: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 911af3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 911af4: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 911af7: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_911b00(void) {
  LOAD_REGS();
L_911b00: /* 911b00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911b01: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 911b05: xor ecx, ecx */
  ecx = 0;
/* 911b07: xor edx, edx */
  edx = 0;
/* 911b09: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911b0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 911b0c: jle 0x911b74 */
  if ((zf || sf != of)) goto L_911b74;
L_911b0e: /* 911b0e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_911b12: /* 911b12: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* 911b15: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 911b18: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 911b1b: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 911b1e: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 911b21: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 911b24: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 911b27: mov dword ptr [eax + 0xc0], ecx */
  W32((uint32_t)(eax + 0xc0u), ecx);
/* 911b2d: mov dword ptr [eax + 0xc4], ecx */
  W32((uint32_t)(eax + 0xc4u), ecx);
/* 911b33: mov dword ptr [eax + 0xc8], ecx */
  W32((uint32_t)(eax + 0xc8u), ecx);
/* 911b39: mov dword ptr [eax + 0xd0], ecx */
  W32((uint32_t)(eax + 0xd0u), ecx);
/* 911b3f: mov dword ptr [eax + 0xd4], ecx */
  W32((uint32_t)(eax + 0xd4u), ecx);
/* 911b45: mov dword ptr [eax + 0xd8], ecx */
  W32((uint32_t)(eax + 0xd8u), ecx);
/* 911b4b: mov dword ptr [eax + 0x90], ecx */
  W32((uint32_t)(eax + 0x90u), ecx);
/* 911b51: mov dword ptr [eax + 0x94], ecx */
  W32((uint32_t)(eax + 0x94u), ecx);
/* 911b57: mov dword ptr [eax + 0x98], ecx */
  W32((uint32_t)(eax + 0x98u), ecx);
/* 911b5d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 911b5e: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911b60: mov dword ptr [eax + 0xa0], ecx */
  W32((uint32_t)(eax + 0xa0u), ecx);
/* 911b66: mov dword ptr [eax + 0xa4], ecx */
  W32((uint32_t)(eax + 0xa4u), ecx);
/* 911b6c: mov dword ptr [eax + 0xa8], ecx */
  W32((uint32_t)(eax + 0xa8u), ecx);
/* 911b72: jl 0x911b12 */
  if ((sf != of)) goto L_911b12;
L_911b74: /* 911b74: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 911b78: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* 911b7b: xor esi, esi */
  esi = 0;
/* 911b7d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911b7f: jle 0x911be1 */
  if ((zf || sf != of)) goto L_911be1;
L_911b81: /* 911b81: xor eax, eax */
  eax = 0;
L_911b83: /* 911b83: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911b86: mov dword ptr [eax + edi], ecx */
  W32((uint32_t)(eax + edi), ecx);
/* 911b89: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911b8c: mov dword ptr [eax + edi + 4], ecx */
  W32((uint32_t)(eax + edi + 0x4u), ecx);
/* 911b90: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911b93: mov dword ptr [eax + edi + 8], ecx */
  W32((uint32_t)(eax + edi + 0x8u), ecx);
/* 911b97: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911b9a: mov dword ptr [eax + edi + 0x10], ecx */
  W32((uint32_t)(eax + edi + 0x10u), ecx);
/* 911b9e: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911ba1: mov dword ptr [eax + edi + 0x14], ecx */
  W32((uint32_t)(eax + edi + 0x14u), ecx);
/* 911ba5: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911ba8: mov dword ptr [eax + edi + 0x18], ecx */
  W32((uint32_t)(eax + edi + 0x18u), ecx);
/* 911bac: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911baf: mov dword ptr [eax + edi + 0x20], ecx */
  W32((uint32_t)(eax + edi + 0x20u), ecx);
/* 911bb3: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911bb6: mov dword ptr [eax + edi + 0x24], ecx */
  W32((uint32_t)(eax + edi + 0x24u), ecx);
/* 911bba: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911bbd: mov dword ptr [eax + edi + 0x28], ecx */
  W32((uint32_t)(eax + edi + 0x28u), ecx);
/* 911bc1: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911bc4: mov dword ptr [eax + edi + 0x30], ecx */
  W32((uint32_t)(eax + edi + 0x30u), ecx);
/* 911bc8: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911bcb: mov dword ptr [eax + edi + 0x34], ecx */
  W32((uint32_t)(eax + edi + 0x34u), ecx);
/* 911bcf: mov edi, dword ptr [edx + 0x44] */
  edi = R32((uint32_t)(edx + 0x44u));
/* 911bd2: mov dword ptr [eax + edi + 0x38], ecx */
  W32((uint32_t)(eax + edi + 0x38u), ecx);
/* 911bd6: mov edi, dword ptr [edx + 0x24] */
  edi = R32((uint32_t)(edx + 0x24u));
/* 911bd9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 911bda: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 911bdd: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 911bdf: jl 0x911b83 */
  if ((sf != of)) goto L_911b83;
L_911be1: /* 911be1: push 0xaf2684 */
  { uint32_t v = 0xaf2684u; esp -= 4; W32(esp, v); }
/* 911be6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 911be7: call 0x971e20 */
  esp -= 4; W32(esp, 0x911becu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 911bec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 911bef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 911bf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911bf1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_911c00(void) {
  LOAD_REGS();
L_911c00: /* 911c00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911c04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911c05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911c06: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x911c0bu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 911c0b: mov esi, eax */
  esi = eax;
/* 911c0d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 911c0f: jne 0x911c15 */
  if (!zf) goto L_911c15;
L_911c11: /* 911c11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911c12: ret 4 */
  esp += 8; SPILL(); return;
L_911c15: /* 911c15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911c16: mov dword ptr [esi + 0xb0], 0xc */
  W32((uint32_t)(esi + 0xb0u), 0xcu);
/* 911c20: mov dword ptr [esi + 0x60], 0x921e60 */
  W32((uint32_t)(esi + 0x60u), 0x921e60u);
/* 911c27: mov dword ptr [esi + 0x64], 3 */
  W32((uint32_t)(esi + 0x64u), 0x3u);
/* 911c2e: mov dword ptr [esi + 0xa8], 0x911d10 */
  W32((uint32_t)(esi + 0xa8u), 0x911d10u);
/* 911c38: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 911c42: call 0x911c50 */
  esp -= 4; W32(esp, 0x911c47u); SPILL(); f_911c50(); if (g_unwind) return; RELOAD();
/* 911c47: mov eax, esi */
  eax = esi;
/* 911c49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911c4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911c50(void) {
  LOAD_REGS();
L_911c50: /* 911c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911c51: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 911c55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911c56: call 0x911cb0 */
  esp -= 4; W32(esp, 0x911c5bu); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 911c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911c5c: call 0x90bd20 */
  esp -= 4; W32(esp, 0x911c61u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 911c61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 911c63: je 0x911c71 */
  if (zf) goto L_911c71;
L_911c65: /* 911c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911c66: call 0x911cb0 */
  esp -= 4; W32(esp, 0x911c6bu); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 911c6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911c6c: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x911c71u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_911c71: /* 911c71: xor eax, eax */
  eax = 0;
/* 911c73: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 911c79: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 911c7f: mov dword ptr [esi + 0x160], eax */
  W32((uint32_t)(esi + 0x160u), eax);
/* 911c85: mov eax, 0x7f7fffff */
  eax = 0x7f7fffffu;
/* 911c8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911c8b: mov dword ptr [esi + 0x164], eax */
  W32((uint32_t)(esi + 0x164u), eax);
/* 911c91: mov dword ptr [esi + 0x168], eax */
  W32((uint32_t)(esi + 0x168u), eax);
/* 911c97: call 0x911cb0 */
  esp -= 4; W32(esp, 0x911c9cu); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 911c9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911c9d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 911ca1: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_911cb0(void) {
  LOAD_REGS();
L_911cb0: /* 911cb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911cb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911cc0(void) {
  LOAD_REGS();
L_911cc0: /* 911cc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911cc4: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 911cca: xor ecx, ecx */
  ecx = 0;
/* 911ccc: cmp edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 911ccf: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 911cd2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 911cd3: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 911cd5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911ce0(void) {
  LOAD_REGS();
L_911ce0: /* 911ce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911ce4: fld dword ptr [eax + 0x164] */
  { double v = F32((uint32_t)(eax + 0x164u)); FPUSH(v); }
/* 911cea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911cf0(void) {
  LOAD_REGS();
L_911cf0: /* 911cf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911cf4: fld dword ptr [eax + 0x168] */
  { double v = F32((uint32_t)(eax + 0x168u)); FPUSH(v); }
/* 911cfa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911d00(void) {
  LOAD_REGS();
L_911d00: /* 911d00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911d04: mov eax, dword ptr [eax + 0x160] */
  eax = R32((uint32_t)(eax + 0x160u));
/* 911d0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911d10(void) {
  LOAD_REGS();
L_911d10: /* 911d10: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 911d13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 911d14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911d15: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 911d19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 911d1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911d1b: call 0x911cc0 */
  esp -= 4; W32(esp, 0x911d20u); SPILL(); f_911cc0(); if (g_unwind) return; RELOAD();
/* 911d20: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 911d24: mov edi, eax */
  edi = eax;
/* 911d26: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 911d2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911d2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 911d2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 911d2d: call 0x90b980 */
  esp -= 4; W32(esp, 0x911d32u); SPILL(); f_90b980(); if (g_unwind) return; RELOAD();
/* 911d32: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 911d36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 911d37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 911d38: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x911d3du); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 911d3d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 911d41: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 911d45: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 911d49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 911d4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911d4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 911d4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 911d4d: call 0x911cb0 */
  esp -= 4; W32(esp, 0x911d52u); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 911d52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 911d53: call 0x90c270 */
  esp -= 4; W32(esp, 0x911d58u); SPILL(); f_90c270(); if (g_unwind) return; RELOAD();
/* 911d58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 911d59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 911d5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 911d5b: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 911d5e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_911d70(void) {
  LOAD_REGS();
L_911d70: /* 911d70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 911d74: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 911d78: mov dword ptr [ecx + 0x160], eax */
  W32((uint32_t)(ecx + 0x160u), eax);
/* 911d7e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_911d90(void) {
  LOAD_REGS();
L_911d90: /* 911d90: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 911d94: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911d98: fstp dword ptr [eax + 0x164] */
  WF32((uint32_t)(eax + 0x164u), ST0); FPOP();
/* 911d9e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_911db0(void) {
  LOAD_REGS();
L_911db0: /* 911db0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 911db4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911db8: fstp dword ptr [eax + 0x168] */
  WF32((uint32_t)(eax + 0x168u), ST0); FPOP();
/* 911dbe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_911dd0(void) {
  LOAD_REGS();
L_911dd0: /* 911dd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911dd4: xor ecx, ecx */
  ecx = 0;
/* 911dd6: mov edx, 0x7f7fffff */
  edx = 0x7f7fffffu;
/* 911ddb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 911ddd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 911de0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 911de3: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 911de6: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 911de9: mov dword ptr [eax + 0x14], 0x3a83126f */
  W32((uint32_t)(eax + 0x14u), 0x3a83126fu);
/* 911df0: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 911df3: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 911df6: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 911df9: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 911dfc: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 911dff: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 911e02: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 911e05: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 911e08: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 911e0b: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 911e0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911e20(void) {
  LOAD_REGS();
L_911e20: /* 911e20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911e24: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 911e26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911e30(void) {
  LOAD_REGS();
L_911e30: /* 911e30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911e34: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 911e37: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911e40(void) {
  LOAD_REGS();
L_911e40: /* 911e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911e44: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 911e47: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911e50(void) {
  LOAD_REGS();
L_911e50: /* 911e50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911e54: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 911e57: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911e60(void) {
  LOAD_REGS();
L_911e60: /* 911e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911e64: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 911e67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911e70(void) {
  LOAD_REGS();
L_911e70: /* 911e70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911e74: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 911e77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911e80(void) {
  LOAD_REGS();
L_911e80: /* 911e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911e84: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 911e87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911e90(void) {
  LOAD_REGS();
L_911e90: /* 911e90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911e94: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 911e97: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911ea0(void) {
  LOAD_REGS();
L_911ea0: /* 911ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911ea4: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 911ea7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911eb0(void) {
  LOAD_REGS();
L_911eb0: /* 911eb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911eb4: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 911eb7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911ec0(void) {
  LOAD_REGS();
L_911ec0: /* 911ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911ec4: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 911ec7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911ed0(void) {
  LOAD_REGS();
L_911ed0: /* 911ed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911ed4: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 911ed7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911ee0(void) {
  LOAD_REGS();
L_911ee0: /* 911ee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911ee4: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 911ee7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911ef0(void) {
  LOAD_REGS();
L_911ef0: /* 911ef0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911ef4: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 911ef7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911f00(void) {
  LOAD_REGS();
L_911f00: /* 911f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911f04: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 911f07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_911f10(void) {
  LOAD_REGS();
L_911f10: /* 911f10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 911f14: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 911f17: je 0x911f2e */
  if (zf) goto L_911f2e;
L_911f19: /* 911f19: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 911f1a: je 0x911f48 */
  if (zf) goto L_911f48;
L_911f1c: /* 911f1c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 911f1d: je 0x911f3b */
  if (zf) goto L_911f3b;
L_911f1f: /* 911f1f: push 0xaf26b8 */
  { uint32_t v = 0xaf26b8u; esp -= 4; W32(esp, v); }
/* 911f24: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 911f26: call 0x971e20 */
  esp -= 4; W32(esp, 0x911f2bu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 911f2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_911f2e: /* 911f2e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 911f32: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 911f38: ret 8 */
  esp += 12; SPILL(); return;
L_911f3b: /* 911f3b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 911f3f: mov dword ptr [ecx], 2 */
  W32((uint32_t)(ecx), 0x2u);
/* 911f45: ret 8 */
  esp += 12; SPILL(); return;
L_911f48: /* 911f48: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 911f4c: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 911f52: ret 8 */
  esp += 12; SPILL(); return;
}

void f_911f60(void) {
  LOAD_REGS();
L_911f60: /* 911f60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 911f64: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 911f67: je 0x911f97 */
  if (zf) goto L_911f97;
L_911f69: /* 911f69: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 911f6a: je 0x911f89 */
  if (zf) goto L_911f89;
L_911f6c: /* 911f6c: push 0xaf26ec */
  { uint32_t v = 0xaf26ecu; esp -= 4; W32(esp, v); }
/* 911f71: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 911f73: call 0x971e20 */
  esp -= 4; W32(esp, 0x911f78u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 911f78: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 911f7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 911f7f: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 911f86: ret 8 */
  esp += 12; SPILL(); return;
L_911f89: /* 911f89: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 911f8d: mov dword ptr [ecx + 4], 1 */
  W32((uint32_t)(ecx + 0x4u), 0x1u);
/* 911f94: ret 8 */
  esp += 12; SPILL(); return;
L_911f97: /* 911f97: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 911f9b: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
/* 911fa2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_911fb0(void) {
  LOAD_REGS();
L_911fb0: /* 911fb0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 911fb4: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 911fb7: je 0x911fe7 */
  if (zf) goto L_911fe7;
L_911fb9: /* 911fb9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 911fba: je 0x911fd9 */
  if (zf) goto L_911fd9;
L_911fbc: /* 911fbc: push 0xaf26ec */
  { uint32_t v = 0xaf26ecu; esp -= 4; W32(esp, v); }
/* 911fc1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 911fc3: call 0x971e20 */
  esp -= 4; W32(esp, 0x911fc8u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 911fc8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 911fcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 911fcf: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 911fd6: ret 8 */
  esp += 12; SPILL(); return;
L_911fd9: /* 911fd9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 911fdd: mov dword ptr [ecx + 8], 1 */
  W32((uint32_t)(ecx + 0x8u), 0x1u);
/* 911fe4: ret 8 */
  esp += 12; SPILL(); return;
L_911fe7: /* 911fe7: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 911feb: mov dword ptr [edx + 8], 0 */
  W32((uint32_t)(edx + 0x8u), 0x0u);
/* 911ff2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912000(void) {
  LOAD_REGS();
L_912000: /* 912000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912001: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 912005: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 912006: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 91200a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91200b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91200c: call 0x911f60 */
  esp -= 4; W32(esp, 0x912011u); SPILL(); f_911f60(); if (g_unwind) return; RELOAD();
/* 912011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912012: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 912013: call 0x911fb0 */
  esp -= 4; W32(esp, 0x912018u); SPILL(); f_911fb0(); if (g_unwind) return; RELOAD();
/* 912018: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 912019: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91201a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912020(void) {
  LOAD_REGS();
L_912020: /* 912020: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912024: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91202a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91202c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91202f: jp 0x912048 */
  if (pf) goto L_912048;
L_912031: /* 912031: push 0xaf2720 */
  { uint32_t v = 0xaf2720u; esp -= 4; W32(esp, v); }
/* 912036: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 912038: call 0x971e20 */
  esp -= 4; W32(esp, 0x91203du); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 91203d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 912040: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
L_912048: /* 912048: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 91204c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912050: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 912053: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912057: fabs  */
  ST0 = fabs(ST0);
/* 912059: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 91205f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 912061: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 912064: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 912067: jnp 0x912072 */
  if (!pf) goto L_912072;
L_912069: /* 912069: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 91206c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 91206f: ret 8 */
  esp += 12; SPILL(); return;
L_912072: /* 912072: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 912075: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 912078: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912080(void) {
  LOAD_REGS();
L_912080: /* 912080: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912084: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912088: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 91208b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912090(void) {
  LOAD_REGS();
L_912090: /* 912090: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912094: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91209a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91209c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91209f: jp 0x9120b8 */
  if (pf) goto L_9120b8;
L_9120a1: /* 9120a1: push 0xaf2778 */
  { uint32_t v = 0xaf2778u; esp -= 4; W32(esp, v); }
/* 9120a6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9120a8: call 0x971e20 */
  esp -= 4; W32(esp, 0x9120adu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 9120ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9120b0: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
L_9120b8: /* 9120b8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9120bc: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9120c0: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 9120c3: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9120c7: fabs  */
  ST0 = fabs(ST0);
/* 9120c9: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 9120cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9120d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9120d4: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 9120d7: jnp 0x9120e2 */
  if (!pf) goto L_9120e2;
L_9120d9: /* 9120d9: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9120dc: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9120df: ret 8 */
  esp += 12; SPILL(); return;
L_9120e2: /* 9120e2: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9120e5: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9120e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9120f0(void) {
  LOAD_REGS();
L_9120f0: /* 9120f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9120f4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9120f8: fstp dword ptr [ecx + 0x1c] */
  WF32((uint32_t)(ecx + 0x1cu), ST0); FPOP();
/* 9120fb: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9120ff: fabs  */
  ST0 = fabs(ST0);
/* 912101: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 912107: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 912109: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91210c: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 91210f: jnp 0x91211a */
  if (!pf) goto L_91211a;
L_912111: /* 912111: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 912114: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 912117: ret 8 */
  esp += 12; SPILL(); return;
L_91211a: /* 91211a: and eax, 0xfffffff7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91211d: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 912120: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912130(void) {
  LOAD_REGS();
L_912130: /* 912130: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912134: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912138: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 91213b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912140(void) {
  LOAD_REGS();
L_912140: /* 912140: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912144: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912148: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 91214b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912150(void) {
  LOAD_REGS();
L_912150: /* 912150: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912154: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91215a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91215c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91215f: jp 0x912178 */
  if (pf) goto L_912178;
L_912161: /* 912161: push 0xaf27c8 */
  { uint32_t v = 0xaf27c8u; esp -= 4; W32(esp, v); }
/* 912166: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 912168: call 0x971e20 */
  esp -= 4; W32(esp, 0x91216du); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 91216d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 912170: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
L_912178: /* 912178: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 91217c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912180: fstp dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0); FPOP();
/* 912183: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912187: fabs  */
  ST0 = fabs(ST0);
/* 912189: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 91218f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 912191: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 912194: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 912197: jnp 0x9121a2 */
  if (!pf) goto L_9121a2;
L_912199: /* 912199: or eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 91219c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 91219f: ret 8 */
  esp += 12; SPILL(); return;
L_9121a2: /* 9121a2: and eax, 0xffffffef */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9121a5: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9121a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9121b0(void) {
  LOAD_REGS();
L_9121b0: /* 9121b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9121b4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9121b8: fstp dword ptr [ecx + 0x38] */
  WF32((uint32_t)(ecx + 0x38u), ST0); FPOP();
/* 9121bb: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9121bf: fabs  */
  ST0 = fabs(ST0);
/* 9121c1: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 9121c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9121c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9121cc: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 9121cf: jnp 0x9121da */
  if (!pf) goto L_9121da;
L_9121d1: /* 9121d1: or eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9121d4: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9121d7: ret 8 */
  esp += 12; SPILL(); return;
L_9121da: /* 9121da: and eax, 0xffffffbf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9121dd: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9121e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9121f0(void) {
  LOAD_REGS();
L_9121f0: /* 9121f0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9121f4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9121f8: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* 9121fb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912200(void) {
  LOAD_REGS();
L_912200: /* 912200: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912204: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912208: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 91220b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912210(void) {
  LOAD_REGS();
L_912210: /* 912210: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912214: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91221a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91221c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91221f: jp 0x912238 */
  if (pf) goto L_912238;
L_912221: /* 912221: push 0xaf2818 */
  { uint32_t v = 0xaf2818u; esp -= 4; W32(esp, v); }
/* 912226: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 912228: call 0x971e20 */
  esp -= 4; W32(esp, 0x91222du); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 91222d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 912230: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
L_912238: /* 912238: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 91223c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912240: fstp dword ptr [ecx + 0x34] */
  WF32((uint32_t)(ecx + 0x34u), ST0); FPOP();
/* 912243: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912247: fabs  */
  ST0 = fabs(ST0);
/* 912249: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 91224f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 912251: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 912254: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 912257: jnp 0x912262 */
  if (!pf) goto L_912262;
L_912259: /* 912259: or eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 91225c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 91225f: ret 8 */
  esp += 12; SPILL(); return;
L_912262: /* 912262: and eax, 0xffffffdf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 912265: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 912268: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912270(void) {
  LOAD_REGS();
L_912270: /* 912270: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 912274: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912278: fstp dword ptr [ecx + 0x3c] */
  WF32((uint32_t)(ecx + 0x3cu), ST0); FPOP();
/* 91227b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 91227f: fabs  */
  ST0 = fabs(ST0);
/* 912281: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 912287: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 912289: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91228c: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 91228f: jnp 0x91229c */
  if (!pf) goto L_91229c;
L_912291: /* 912291: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 912296: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 912299: ret 8 */
  esp += 12; SPILL(); return;
L_91229c: /* 91229c: and eax, 0xffffff7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9122a1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9122a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9122b0(void) {
  LOAD_REGS();
L_9122b0: /* 9122b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9122b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9122b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9122b6: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 9122ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9122bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9122bc: call 0x912150 */
  esp -= 4; W32(esp, 0x9122c1u); SPILL(); f_912150(); if (g_unwind) return; RELOAD();
/* 9122c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9122c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9122c3: call 0x912210 */
  esp -= 4; W32(esp, 0x9122c8u); SPILL(); f_912210(); if (g_unwind) return; RELOAD();
/* 9122c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9122c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9122ca: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9122d0(void) {
  LOAD_REGS();
L_9122d0: /* 9122d0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9122d4: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9122da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9122dc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9122df: jp 0x9122f8 */
  if (pf) goto L_9122f8;
L_9122e1: /* 9122e1: push 0xaf2868 */
  { uint32_t v = 0xaf2868u; esp -= 4; W32(esp, v); }
/* 9122e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9122e8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9122ea: call 0x971e20 */
  esp -= 4; W32(esp, 0x9122efu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 9122ef: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9122f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9122f8: /* 9122f8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9122fc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9122fe: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 912301: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* 912304: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912310(void) {
  LOAD_REGS();
L_912310: /* 912310: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912314: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 91231a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91231c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91231f: jp 0x912338 */
  if (pf) goto L_912338;
L_912321: /* 912321: push 0xaf28b8 */
  { uint32_t v = 0xaf28b8u; esp -= 4; W32(esp, v); }
/* 912326: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 912328: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 91232a: call 0x971e20 */
  esp -= 4; W32(esp, 0x91232fu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 91232f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 912335: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_912338: /* 912338: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 91233c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91233e: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 912341: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 912344: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912350(void) {
  LOAD_REGS();
L_912350: /* 912350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912354: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 912356: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x91235bu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 91235b: mov esi, eax */
  esi = eax;
/* 91235d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91235f: jne 0x912365 */
  if (!zf) goto L_912365;
L_912361: /* 912361: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 912362: ret 4 */
  esp += 8; SPILL(); return;
L_912365: /* 912365: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912366: mov dword ptr [esi + 0xb0], 9 */
  W32((uint32_t)(esi + 0xb0u), 0x9u);
/* 912370: mov dword ptr [esi + 0x60], 0x9202d0 */
  W32((uint32_t)(esi + 0x60u), 0x9202d0u);
/* 912377: mov dword ptr [esi + 0x64], 5 */
  W32((uint32_t)(esi + 0x64u), 0x5u);
/* 91237e: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 912388: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 912392: call 0x9123a0 */
  esp -= 4; W32(esp, 0x912397u); SPILL(); f_9123a0(); if (g_unwind) return; RELOAD();
/* 912397: mov eax, esi */
  eax = esi;
/* 912399: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91239a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9123a0(void) {
  LOAD_REGS();
L_9123a0: /* 9123a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9123a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9123a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9123a6: call 0x912430 */
  esp -= 4; W32(esp, 0x9123abu); SPILL(); f_912430(); if (g_unwind) return; RELOAD();
/* 9123ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9123ac: call 0x90bd20 */
  esp -= 4; W32(esp, 0x9123b1u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 9123b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9123b3: je 0x9123c1 */
  if (zf) goto L_9123c1;
L_9123b5: /* 9123b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9123b6: call 0x912430 */
  esp -= 4; W32(esp, 0x9123bbu); SPILL(); f_912430(); if (g_unwind) return; RELOAD();
/* 9123bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9123bc: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x9123c1u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_9123c1: /* 9123c1: fld qword ptr [0xa20e10] */
  { double v = F64((uint32_t)(0xa20e10u)); FPUSH(v); }
/* 9123c7: mov eax, 2 */
  eax = 0x2u;
/* 9123cc: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 9123ce: mov dword ptr [esi + 0x168], eax */
  W32((uint32_t)(esi + 0x168u), eax);
/* 9123d4: mov dword ptr [esi + 0x164], eax */
  W32((uint32_t)(esi + 0x164u), eax);
/* 9123da: mov eax, 0x7f7fffff */
  eax = 0x7f7fffffu;
/* 9123df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9123e0: mov dword ptr [esi + 0x160], 0 */
  W32((uint32_t)(esi + 0x160u), 0x0u);
/* 9123ea: mov dword ptr [esi + 0x178], eax */
  W32((uint32_t)(esi + 0x178u), eax);
/* 9123f0: mov dword ptr [esi + 0x180], eax */
  W32((uint32_t)(esi + 0x180u), eax);
/* 9123f6: mov dword ptr [esi + 0x17c], eax */
  W32((uint32_t)(esi + 0x17cu), eax);
/* 9123fc: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
/* 912402: fst dword ptr [esi + 0x16c] */
  WF32((uint32_t)(esi + 0x16cu), ST0);
/* 912408: fst dword ptr [esi + 0x170] */
  WF32((uint32_t)(esi + 0x170u), ST0);
/* 91240e: fstp dword ptr [esi + 0x174] */
  WF32((uint32_t)(esi + 0x174u), ST0); FPOP();
/* 912414: call 0x912430 */
  esp -= 4; W32(esp, 0x912419u); SPILL(); f_912430(); if (g_unwind) return; RELOAD();
/* 912419: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91241a: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 91241e: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_912430(void) {
  LOAD_REGS();
L_912430: /* 912430: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912434: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912440(void) {
  LOAD_REGS();
L_912440: /* 912440: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912444: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 91244a: xor ecx, ecx */
  ecx = 0;
/* 91244c: cmp edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91244f: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 912452: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 912453: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 912455: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912460(void) {
  LOAD_REGS();
L_912460: /* 912460: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912464: mov eax, dword ptr [eax + 0x164] */
  eax = R32((uint32_t)(eax + 0x164u));
/* 91246a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912470(void) {
  LOAD_REGS();
L_912470: /* 912470: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912474: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 91247a: call 0x99cc96 */
  esp -= 4; W32(esp, 0x91247fu); SPILL(); hle_CIacos(); RELOAD();
/* 91247f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 912481: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912490(void) {
  LOAD_REGS();
L_912490: /* 912490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912494: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 91249a: call 0x99cc96 */
  esp -= 4; W32(esp, 0x91249fu); SPILL(); hle_CIacos(); RELOAD();
/* 91249f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9124a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9124b0(void) {
  LOAD_REGS();
L_9124b0: /* 9124b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9124b4: fld dword ptr [eax + 0x180] */
  { double v = F32((uint32_t)(eax + 0x180u)); FPUSH(v); }
/* 9124ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9124c0(void) {
  LOAD_REGS();
L_9124c0: /* 9124c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9124c4: fld dword ptr [eax + 0x184] */
  { double v = F32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 9124ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9124d0(void) {
  LOAD_REGS();
L_9124d0: /* 9124d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9124d4: mov eax, dword ptr [eax + 0x168] */
  eax = R32((uint32_t)(eax + 0x168u));
/* 9124da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9124e0(void) {
  LOAD_REGS();
L_9124e0: /* 9124e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9124e4: fld dword ptr [eax + 0x16c] */
  { double v = F32((uint32_t)(eax + 0x16cu)); FPUSH(v); }
/* 9124ea: call 0x99cc96 */
  esp -= 4; W32(esp, 0x9124efu); SPILL(); hle_CIacos(); RELOAD();
/* 9124ef: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9124f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912500(void) {
  LOAD_REGS();
L_912500: /* 912500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912504: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 91250a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912510(void) {
  LOAD_REGS();
L_912510: /* 912510: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912514: fld dword ptr [eax + 0x17c] */
  { double v = F32((uint32_t)(eax + 0x17cu)); FPUSH(v); }
/* 91251a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912520(void) {
  LOAD_REGS();
L_912520: /* 912520: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 912523: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 91252a: fld dword ptr [ecx + 0xc4] */
  { double v = F32((uint32_t)(ecx + 0xc4u)); FPUSH(v); }
/* 912530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912531: fmul dword ptr [ecx + 0x104] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x104u)));
/* 912537: lea esi, [ecx + 0xfc] */
  esi = (uint32_t)(ecx + 0xfcu);
/* 91253d: fld dword ptr [ecx + 0xc0] */
  { double v = F32((uint32_t)(ecx + 0xc0u)); FPUSH(v); }
/* 912543: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 912546: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 912548: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* 91254e: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 912550: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 912552: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 912556: fcomp dword ptr [0xa20e1c] */
  fpu_com(ST0, F32((uint32_t)(0xa20e1cu)));
  FPOP();
/* 91255c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91255e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 912561: jne 0x9125fd */
  if (!zf) goto L_9125fd;
L_912567: /* 912567: mov eax, dword ptr [ecx + 0xbc] */
  eax = R32((uint32_t)(ecx + 0xbcu));
/* 91256d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 91256f: mov edx, dword ptr [ecx + 0xc0] */
  edx = R32((uint32_t)(ecx + 0xc0u));
/* 912575: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 912578: mov eax, dword ptr [ecx + 0xc4] */
  eax = R32((uint32_t)(ecx + 0xc4u));
/* 91257e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 912581: mov edx, dword ptr [ecx + 0xc8] */
  edx = R32((uint32_t)(ecx + 0xc8u));
/* 912587: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 91258a: mov eax, dword ptr [ecx + 0xcc] */
  eax = R32((uint32_t)(ecx + 0xccu));
/* 912590: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 912593: mov edx, dword ptr [ecx + 0xd0] */
  edx = R32((uint32_t)(ecx + 0xd0u));
/* 912599: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 91259c: mov eax, dword ptr [ecx + 0xd4] */
  eax = R32((uint32_t)(ecx + 0xd4u));
/* 9125a2: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 9125a5: mov edx, dword ptr [ecx + 0xd8] */
  edx = R32((uint32_t)(ecx + 0xd8u));
/* 9125ab: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 9125ae: mov eax, dword ptr [ecx + 0xdc] */
  eax = R32((uint32_t)(ecx + 0xdcu));
/* 9125b4: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 9125b7: mov edx, dword ptr [ecx + 0xe0] */
  edx = R32((uint32_t)(ecx + 0xe0u));
/* 9125bd: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 9125c0: mov eax, dword ptr [ecx + 0xe4] */
  eax = R32((uint32_t)(ecx + 0xe4u));
/* 9125c6: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 9125c9: mov edx, dword ptr [ecx + 0xe8] */
  edx = R32((uint32_t)(ecx + 0xe8u));
/* 9125cf: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 9125d2: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* 9125d8: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 9125db: mov edx, dword ptr [ecx + 0xf0] */
  edx = R32((uint32_t)(ecx + 0xf0u));
/* 9125e1: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 9125e4: mov eax, dword ptr [ecx + 0xf4] */
  eax = R32((uint32_t)(ecx + 0xf4u));
/* 9125ea: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 9125ed: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 9125f3: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 9125f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9125f7: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9125fa: ret 4 */
  esp += 8; SPILL(); return;
L_9125fd: /* 9125fd: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 912601: fcomp dword ptr [0xa20e18] */
  fpu_com(ST0, F32((uint32_t)(0xa20e18u)));
  FPOP();
/* 912607: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 912609: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91260c: jne 0x912879 */
  if (!zf) goto L_912879;
L_912612: /* 912612: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 912618: xor eax, eax */
  eax = 0;
/* 91261a: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 91261e: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 912624: fsqrt  */
  ST0 = sqrt(ST0);
/* 912626: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 91262a: fld dword ptr [ecx + 0xc0] */
  { double v = F32((uint32_t)(ecx + 0xc0u)); FPUSH(v); }
/* 912630: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 912633: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 912636: fmul dword ptr [ecx + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xc4u)));
/* 91263c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91263e: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 912642: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 912644: fmul dword ptr [ecx + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xc4u)));
/* 91264a: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* 912650: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 912653: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 912655: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 912659: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* 91265f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 912662: fld dword ptr [ecx + 0xc0] */
  { double v = F32((uint32_t)(ecx + 0xc0u)); FPUSH(v); }
/* 912668: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 91266a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91266c: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 912670: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_912676: /* 912676: fld dword ptr [esp + eax*4 + 0x24] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x24u)); FPUSH(v); }
/* 91267a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91267b: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91267e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 912680: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 912682: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 912684: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 912686: jl 0x912676 */
  if ((sf != of)) goto L_912676;
L_912688: /* 912688: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 91268e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 912690: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 912693: jne 0x9126bb */
  if (!zf) goto L_9126bb;
L_912695: /* 912695: fsqrt  */
  ST0 = sqrt(ST0);
/* 912697: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 91269d: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 9126a1: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9126a5: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9126a9: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 9126ad: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9126b1: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9126b5: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9126b9: jmp 0x9126d1 */
  goto L_9126d1;
L_9126bb: /* 9126bb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9126bd: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 9126c5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9126cb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_9126d1: /* 9126d1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9126d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9126d4: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 9126d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9126d9: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9126dd: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 9126e1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9126e5: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 9126e9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9126ed: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 9126f1: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 9126f7: fsqrt  */
  ST0 = sqrt(ST0);
/* 9126f9: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9126fd: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 912701: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 912705: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 912707: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 91270b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91270f: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 912713: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 912717: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 91271b: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91271f: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 912723: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 912727: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 912729: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91272b: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 91272f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 912733: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 912735: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 912739: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 91273b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 91273f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 912741: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 912745: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 912749: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 91274b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 91274f: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 912751: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 912753: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 912757: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91275b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91275d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 912761: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 912763: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 912765: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 912769: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91276b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91276d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 91276f: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 912773: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 912775: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 912779: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91277b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91277d: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 91277f: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 912783: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 912787: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 91278b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91278f: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 912793: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 912797: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 91279b: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 91279f: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 9127a3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9127a7: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 9127ab: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 9127af: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9127b1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9127b5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9127b7: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 9127bb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9127bf: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 9127c3: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9127c7: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 9127cb: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 9127cf: lea edi, [ecx + 0x11c] */
  edi = (uint32_t)(ecx + 0x11cu);
/* 9127d5: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9127d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9127da: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 9127de: lea ebx, [ecx + 0x10c] */
  ebx = (uint32_t)(ecx + 0x10cu);
/* 9127e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9127e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9127e6: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 9127ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9127ec: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 9127f0: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 9127f4: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 9127f8: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 9127fc: fmul dword ptr [ecx + 0xe4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xe4u)));
/* 912802: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 912806: fmul dword ptr [ecx + 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xe0u)));
/* 91280c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91280e: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 912812: fmul dword ptr [ecx + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xdcu)));
/* 912818: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91281a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 91281c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91281e: fmul dword ptr [ecx + 0xe4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xe4u)));
/* 912824: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 912826: fmul dword ptr [ecx + 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xe0u)));
/* 91282c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91282e: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 912832: fmul dword ptr [ecx + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xdcu)));
/* 912838: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91283a: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 91283d: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 912841: fmul dword ptr [ecx + 0xe4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xe4u)));
/* 912847: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 91284b: fmul dword ptr [ecx + 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xe0u)));
/* 912851: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 912853: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 912857: fmul dword ptr [ecx + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xdcu)));
/* 91285d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91285f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 912862: call 0x912880 */
  esp -= 4; W32(esp, 0x912867u); SPILL(); f_912880(); if (g_unwind) return; RELOAD();
/* 912867: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 912868: call 0x9128c0 */
  esp -= 4; W32(esp, 0x91286du); SPILL(); f_9128c0(); if (g_unwind) return; RELOAD();
/* 91286d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91286f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 912870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 912872: call 0x912880 */
  esp -= 4; W32(esp, 0x912877u); SPILL(); f_912880(); if (g_unwind) return; RELOAD();
/* 912877: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 912878: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_912879: /* 912879: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91287a: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91287d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912880(void) {
  LOAD_REGS();
L_912880: /* 912880: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 912884: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 912888: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 91288b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 91288e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 912892: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 912895: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 912898: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91289a: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 91289c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 91289f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9128a1: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9128a4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9128a6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9128a8: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 9128ab: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9128ad: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9128b0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9128b2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9128b5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9128b7: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9128ba: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9128c0(void) {
  LOAD_REGS();
L_9128c0: /* 9128c0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9128c6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9128ca: xor edx, edx */
  edx = 0;
/* 9128cc: xor eax, eax */
  eax = 0;
/* 9128ce: mov edi, edi */
  edi = edi;
L_9128d0: /* 9128d0: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 9128d3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9128d4: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9128d7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9128d9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9128db: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9128dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9128df: jl 0x9128d0 */
  if ((sf != of)) goto L_9128d0;
L_9128e1: /* 9128e1: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9128e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9128e9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9128ec: jne 0x91290f */
  if (!zf) goto L_91290f;
L_9128ee: /* 9128ee: fsqrt  */
  ST0 = sqrt(ST0);
/* 9128f0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9128f6: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 9128f8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9128fa: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9128fc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9128fe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 912900: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 912903: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 912906: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 912909: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 91290c: ret 4 */
  esp += 8; SPILL(); return;
L_91290f: /* 91290f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 912911: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 912917: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 91291d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 912920: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 912923: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912930(void) {
  LOAD_REGS();
L_912930: /* 912930: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 912934: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 912938: mov dword ptr [ecx + 0x164], eax */
  W32((uint32_t)(ecx + 0x164u), eax);
/* 91293e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912950(void) {
  LOAD_REGS();
L_912950: /* 912950: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912954: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912958: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91295e: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 912960: fstp dword ptr [eax + 0x170] */
  WF32((uint32_t)(eax + 0x170u), ST0); FPOP();
/* 912966: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912970(void) {
  LOAD_REGS();
L_912970: /* 912970: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912974: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912978: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91297e: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 912980: fstp dword ptr [eax + 0x174] */
  WF32((uint32_t)(eax + 0x174u), ST0); FPOP();
/* 912986: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912990(void) {
  LOAD_REGS();
L_912990: /* 912990: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912994: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912998: fstp dword ptr [eax + 0x180] */
  WF32((uint32_t)(eax + 0x180u), ST0); FPOP();
/* 91299e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9129b0(void) {
  LOAD_REGS();
L_9129b0: /* 9129b0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9129b4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9129b8: fstp dword ptr [eax + 0x184] */
  WF32((uint32_t)(eax + 0x184u), ST0); FPOP();
/* 9129be: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9129d0(void) {
  LOAD_REGS();
L_9129d0: /* 9129d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9129d4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9129d8: mov dword ptr [ecx + 0x168], eax */
  W32((uint32_t)(ecx + 0x168u), eax);
/* 9129de: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9129f0(void) {
  LOAD_REGS();
L_9129f0: /* 9129f0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9129f4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9129f8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9129fe: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 912a00: fstp dword ptr [eax + 0x16c] */
  WF32((uint32_t)(eax + 0x16cu), ST0); FPOP();
/* 912a06: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912a10(void) {
  LOAD_REGS();
L_912a10: /* 912a10: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912a14: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912a18: fstp dword ptr [eax + 0x178] */
  WF32((uint32_t)(eax + 0x178u), ST0); FPOP();
/* 912a1e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912a30(void) {
  LOAD_REGS();
L_912a30: /* 912a30: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912a34: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912a38: fstp dword ptr [eax + 0x17c] */
  WF32((uint32_t)(eax + 0x17cu), ST0); FPOP();
/* 912a3e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912a50(void) {
  LOAD_REGS();
L_912a50: /* 912a50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 912a51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912a52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 912a53: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 912a57: xor ebx, ebx */
  ebx = 0;
/* 912a59: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 912a5b: jne 0x912a65 */
  if (!zf) goto L_912a65;
L_912a5d: /* 912a5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 912a5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 912a5f: xor eax, eax */
  eax = 0;
/* 912a61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 912a62: ret 0x10 */
  esp += 20; SPILL(); return;
L_912a65: /* 912a65: push 0x234 */
  { uint32_t v = 0x234u; esp -= 4; W32(esp, v); }
/* 912a6a: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x912a70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 912a70: mov esi, eax */
  esi = eax;
/* 912a72: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 912a74: jne 0x912a7e */
  if (!zf) goto L_912a7e;
L_912a76: /* 912a76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 912a77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 912a78: xor eax, eax */
  eax = 0;
/* 912a7a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 912a7b: ret 0x10 */
  esp += 20; SPILL(); return;
L_912a7e: /* 912a7e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 912a82: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 912a86: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 912a8a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 912a8e: mov dword ptr [esi + 0x17c], eax */
  W32((uint32_t)(esi + 0x17cu), eax);
/* 912a94: mov dword ptr [esi + 0x180], ecx */
  W32((uint32_t)(esi + 0x180u), ecx);
/* 912a9a: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 912a9e: fdivr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) / ST0;
/* 912aa2: fstp dword ptr [esi + 0x184] */
  WF32((uint32_t)(esi + 0x184u), ST0); FPOP();
/* 912aa8: call 0x914950 */
  esp -= 4; W32(esp, 0x912aadu); SPILL(); f_914950(); if (g_unwind) return; RELOAD();
/* 912aad: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 912aaf: lea edx, [esi + 0x9c] */
  edx = (uint32_t)(esi + 0x9cu);
/* 912ab5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 912ab6: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* 912abc: call 0x974a90 */
  esp -= 4; W32(esp, 0x912ac1u); SPILL(); f_974a90(); if (g_unwind) return; RELOAD();
/* 912ac1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 912ac3: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 912ac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 912aca: mov dword ptr [esi + 0xb8], ebx */
  W32((uint32_t)(esi + 0xb8u), ebx);
/* 912ad0: mov dword ptr [esi + 0xbc], ebx */
  W32((uint32_t)(esi + 0xbcu), ebx);
/* 912ad6: mov dword ptr [esi + 0xb4], edi */
  W32((uint32_t)(esi + 0xb4u), edi);
/* 912adc: call 0x974a90 */
  esp -= 4; W32(esp, 0x912ae1u); SPILL(); f_974a90(); if (g_unwind) return; RELOAD();
/* 912ae1: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 912ae7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 912ae9: push 0x240 */
  { uint32_t v = 0x240u; esp -= 4; W32(esp, v); }
/* 912aee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 912aef: lea edx, [esi + 0xc0] */
  edx = (uint32_t)(esi + 0xc0u);
/* 912af5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 912af6: call dword ptr [0xb02208] */
  { uint32_t t = R32((uint32_t)(0xb02208u)); esp -= 4; W32(esp, 0x912afcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 912afc: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 912b00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 912b01: push 0x1ec */
  { uint32_t v = 0x1ecu; esp -= 4; W32(esp, v); }
/* 912b06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 912b07: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* 912b0d: lea eax, [esi + 0xfc] */
  eax = (uint32_t)(esi + 0xfcu);
/* 912b13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 912b14: mov dword ptr [esi + 0xf8], ebx */
  W32((uint32_t)(esi + 0xf8u), ebx);
/* 912b1a: call dword ptr [0xb02208] */
  { uint32_t t = R32((uint32_t)(0xb02208u)); esp -= 4; W32(esp, 0x912b20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 912b20: push 0x90cd80 */
  { uint32_t v = 0x90cd80u; esp -= 4; W32(esp, v); }
/* 912b25: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 912b2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912b2b: call 0x971fe0 */
  esp -= 4; W32(esp, 0x912b30u); SPILL(); f_971fe0(); if (g_unwind) return; RELOAD();
/* 912b30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912b31: call 0x9727f0 */
  esp -= 4; W32(esp, 0x912b36u); SPILL(); f_9727f0(); if (g_unwind) return; RELOAD();
/* 912b36: push 0x90cd80 */
  { uint32_t v = 0x90cd80u; esp -= 4; W32(esp, v); }
/* 912b3b: lea edi, [esi + 0x68] */
  edi = (uint32_t)(esi + 0x68u);
/* 912b3e: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 912b43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 912b44: call 0x971fe0 */
  esp -= 4; W32(esp, 0x912b49u); SPILL(); f_971fe0(); if (g_unwind) return; RELOAD();
/* 912b49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 912b4a: call 0x9727f0 */
  esp -= 4; W32(esp, 0x912b4fu); SPILL(); f_9727f0(); if (g_unwind) return; RELOAD();
/* 912b4f: push 0x90cd80 */
  { uint32_t v = 0x90cd80u; esp -= 4; W32(esp, v); }
/* 912b54: lea edi, [esi + 0x34] */
  edi = (uint32_t)(esi + 0x34u);
/* 912b57: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 912b5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 912b5d: call 0x971fe0 */
  esp -= 4; W32(esp, 0x912b62u); SPILL(); f_971fe0(); if (g_unwind) return; RELOAD();
/* 912b62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 912b63: call 0x9727f0 */
  esp -= 4; W32(esp, 0x912b68u); SPILL(); f_9727f0(); if (g_unwind) return; RELOAD();
/* 912b68: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 912b6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 912b6c: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 912b72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 912b73: call 0x974a90 */
  esp -= 4; W32(esp, 0x912b78u); SPILL(); f_974a90(); if (g_unwind) return; RELOAD();
/* 912b78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 912b79: lea edx, [esi + 0x134] */
  edx = (uint32_t)(esi + 0x134u);
/* 912b7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 912b80: call 0x974a90 */
  esp -= 4; W32(esp, 0x912b85u); SPILL(); f_974a90(); if (g_unwind) return; RELOAD();
/* 912b85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912b86: mov dword ptr [esi + 0x1d0], ebx */
  W32((uint32_t)(esi + 0x1d0u), ebx);
/* 912b8c: mov dword ptr [esi + 0x1cc], ebx */
  W32((uint32_t)(esi + 0x1ccu), ebx);
/* 912b92: mov dword ptr [esi + 0x1d4], ebx */
  W32((uint32_t)(esi + 0x1d4u), ebx);
/* 912b98: call 0x912c10 */
  esp -= 4; W32(esp, 0x912b9du); SPILL(); f_912c10(); if (g_unwind) return; RELOAD();
/* 912b9d: call 0x975ba0 */
  esp -= 4; W32(esp, 0x912ba2u); SPILL(); f_975ba0(); if (g_unwind) return; RELOAD();
/* 912ba2: mov dword ptr [esi + 0x1d8], eax */
  W32((uint32_t)(esi + 0x1d8u), eax);
/* 912ba8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 912ba9: mov eax, esi */
  eax = esi;
/* 912bab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 912bac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 912bad: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_912bb0(void) {
  LOAD_REGS();
L_912bb0: /* 912bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912bb1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 912bb5: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 912bbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 912bbc: call 0x974ac0 */
  esp -= 4; W32(esp, 0x912bc1u); SPILL(); f_974ac0(); if (g_unwind) return; RELOAD();
/* 912bc1: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 912bc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 912bc8: call dword ptr [0xb0220c] */
  { uint32_t t = R32((uint32_t)(0xb0220cu)); esp -= 4; W32(esp, 0x912bceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 912bce: lea edx, [esi + 0x14c] */
  edx = (uint32_t)(esi + 0x14cu);
/* 912bd4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 912bd5: call 0x974ac0 */
  esp -= 4; W32(esp, 0x912bdau); SPILL(); f_974ac0(); if (g_unwind) return; RELOAD();
/* 912bda: lea eax, [esi + 0xfc] */
  eax = (uint32_t)(esi + 0xfcu);
/* 912be0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 912be1: call dword ptr [0xb0220c] */
  { uint32_t t = R32((uint32_t)(0xb0220cu)); esp -= 4; W32(esp, 0x912be7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 912be7: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 912bed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 912bee: call 0x974ac0 */
  esp -= 4; W32(esp, 0x912bf3u); SPILL(); f_974ac0(); if (g_unwind) return; RELOAD();
/* 912bf3: lea edx, [esi + 0x9c] */
  edx = (uint32_t)(esi + 0x9cu);
/* 912bf9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 912bfa: call 0x974ac0 */
  esp -= 4; W32(esp, 0x912bffu); SPILL(); f_974ac0(); if (g_unwind) return; RELOAD();
/* 912bff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912c00: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x912c06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 912c06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 912c07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912c10(void) {
  LOAD_REGS();
L_912c10: /* 912c10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912c14: fld dword ptr [0x9f7c0c] */
  { double v = F32((uint32_t)(0x9f7c0cu)); FPUSH(v); }
/* 912c1a: fdiv dword ptr [eax + 0x180] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x180u)));
/* 912c20: mov ecx, 0x3e4ccccd */
  ecx = 0x3e4ccccdu;
/* 912c25: mov edx, 0x3a83126f */
  edx = 0x3a83126fu;
/* 912c2a: mov dword ptr [eax + 0x1e4], ecx */
  W32((uint32_t)(eax + 0x1e4u), ecx);
/* 912c30: mov dword ptr [eax + 0x188], ecx */
  W32((uint32_t)(eax + 0x188u), ecx);
/* 912c36: mov dword ptr [eax + 0x18c], edx */
  W32((uint32_t)(eax + 0x18cu), edx);
/* 912c3c: mov dword ptr [eax + 0x198], edx */
  W32((uint32_t)(eax + 0x198u), edx);
/* 912c42: mov dword ptr [eax + 0x1a4], ecx */
  W32((uint32_t)(eax + 0x1a4u), ecx);
/* 912c48: xor ecx, ecx */
  ecx = 0;
/* 912c4a: mov edx, 0x42200000 */
  edx = 0x42200000u;
/* 912c4f: mov dword ptr [eax + 0x1a0], 0x3d4ccccd */
  W32((uint32_t)(eax + 0x1a0u), 0x3d4ccccdu);
/* 912c59: mov dword ptr [eax + 0x1ac], ecx */
  W32((uint32_t)(eax + 0x1acu), ecx);
/* 912c5f: mov dword ptr [eax + 0x1b0], 0x43160000 */
  W32((uint32_t)(eax + 0x1b0u), 0x43160000u);
/* 912c69: mov dword ptr [eax + 0x1b4], 0x42c80000 */
  W32((uint32_t)(eax + 0x1b4u), 0x42c80000u);
/* 912c73: mov dword ptr [eax + 0x1b8], edx */
  W32((uint32_t)(eax + 0x1b8u), edx);
/* 912c79: mov dword ptr [eax + 0x1c4], edx */
  W32((uint32_t)(eax + 0x1c4u), edx);
/* 912c7f: mov dword ptr [eax + 0x1a8], 0x7ffffffc */
  W32((uint32_t)(eax + 0x1a8u), 0x7ffffffcu);
/* 912c89: mov dword ptr [eax + 0x190], 1 */
  W32((uint32_t)(eax + 0x190u), 0x1u);
/* 912c93: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 912c99: mov dword ptr [eax + 0x168], ecx */
  W32((uint32_t)(eax + 0x168u), ecx);
/* 912c9f: mov dword ptr [eax + 0x16c], ecx */
  W32((uint32_t)(eax + 0x16cu), ecx);
/* 912ca5: mov dword ptr [eax + 0x1c8], ecx */
  W32((uint32_t)(eax + 0x1c8u), ecx);
/* 912cab: mov dword ptr [eax + 0x174], ecx */
  W32((uint32_t)(eax + 0x174u), ecx);
/* 912cb1: mov dword ptr [eax + 0x178], ecx */
  W32((uint32_t)(eax + 0x178u), ecx);
/* 912cb7: mov dword ptr [eax + 0x1e8], 0xa */
  W32((uint32_t)(eax + 0x1e8u), 0xau);
/* 912cc1: mov dword ptr [eax + 0x204], ecx */
  W32((uint32_t)(eax + 0x204u), ecx);
/* 912cc7: mov dword ptr [eax + 0x1fc], ecx */
  W32((uint32_t)(eax + 0x1fcu), ecx);
/* 912ccd: mov dword ptr [eax + 0x20c], ecx */
  W32((uint32_t)(eax + 0x20cu), ecx);
/* 912cd3: mov dword ptr [eax + 0x214], ecx */
  W32((uint32_t)(eax + 0x214u), ecx);
/* 912cd9: mov dword ptr [eax + 0x22c], ecx */
  W32((uint32_t)(eax + 0x22cu), ecx);
/* 912cdf: mov dword ptr [eax + 0x228], 0x911b00 */
  W32((uint32_t)(eax + 0x228u), 0x911b00u);
/* 912ce9: mov dword ptr [eax + 0x230], ecx */
  W32((uint32_t)(eax + 0x230u), ecx);
/* 912cef: fstp dword ptr [eax + 0x1e0] */
  WF32((uint32_t)(eax + 0x1e0u), ST0); FPOP();
/* 912cf5: fld dword ptr [eax + 0x17c] */
  { double v = F32((uint32_t)(eax + 0x17cu)); FPUSH(v); }
/* 912cfb: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 912d01: fstp dword ptr [eax + 0x1ec] */
  WF32((uint32_t)(eax + 0x1ecu), ST0); FPOP();
/* 912d07: fld dword ptr [eax + 0x17c] */
  { double v = F32((uint32_t)(eax + 0x17cu)); FPUSH(v); }
/* 912d0d: fmul dword ptr [0xa1bcec] */
  ST0 = ST0 * (F32((uint32_t)(0xa1bcecu)));
/* 912d13: fstp dword ptr [eax + 0x194] */
  WF32((uint32_t)(eax + 0x194u), ST0); FPOP();
/* 912d19: fld dword ptr [eax + 0x17c] */
  { double v = F32((uint32_t)(eax + 0x17cu)); FPUSH(v); }
/* 912d1f: fmul dword ptr [0xa110dc] */
  ST0 = ST0 * (F32((uint32_t)(0xa110dcu)));
/* 912d25: fstp dword ptr [eax + 0x19c] */
  WF32((uint32_t)(eax + 0x19cu), ST0); FPOP();
/* 912d2b: fld dword ptr [eax + 0x17c] */
  { double v = F32((uint32_t)(eax + 0x17cu)); FPUSH(v); }
/* 912d31: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 912d37: fstp dword ptr [eax + 0x1bc] */
  WF32((uint32_t)(eax + 0x1bcu), ST0); FPOP();
/* 912d3d: fld dword ptr [eax + 0x17c] */
  { double v = F32((uint32_t)(eax + 0x17cu)); FPUSH(v); }
/* 912d43: fmul dword ptr [0xa20e20] */
  ST0 = ST0 * (F32((uint32_t)(0xa20e20u)));
/* 912d49: fstp dword ptr [eax + 0x1c0] */
  WF32((uint32_t)(eax + 0x1c0u), ST0); FPOP();
/* 912d4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912d60(void) {
  LOAD_REGS();
L_912d60: /* 912d60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912d64: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 912d6a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912d70(void) {
  LOAD_REGS();
L_912d70: /* 912d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912d74: mov eax, dword ptr [eax + 0xf4] */
  eax = R32((uint32_t)(eax + 0xf4u));
/* 912d7a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912d80(void) {
  LOAD_REGS();
L_912d80: /* 912d80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912d84: add eax, 0x9c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 912d89: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 912d8d: jmp 0x974bd0 */
  goto L_974bd0;
L_974bd0: /* 974bd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974bd4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 974bd7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912da0(void) {
  LOAD_REGS();
L_912da0: /* 912da0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912da4: add eax, 0x9c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 912da9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912db0(void) {
  LOAD_REGS();
L_912db0: /* 912db0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912db4: add eax, 0xdc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 912db9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912dc0(void) {
  LOAD_REGS();
L_912dc0: /* 912dc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912dc4: add eax, 0x134 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x134u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 912dc9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912dd0(void) {
  LOAD_REGS();
L_912dd0: /* 912dd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912dd4: add eax, 0x14c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 912dd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912de0(void) {
  LOAD_REGS();
L_912de0: /* 912de0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912de4: mov edx, dword ptr [eax + 0x164] */
  edx = R32((uint32_t)(eax + 0x164u));
/* 912dea: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 912dee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 912df0: mov edx, dword ptr [eax + 0x168] */
  edx = R32((uint32_t)(eax + 0x168u));
/* 912df6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 912df9: mov eax, dword ptr [eax + 0x16c] */
  eax = R32((uint32_t)(eax + 0x16cu));
/* 912dff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 912e02: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912e10(void) {
  LOAD_REGS();
L_912e10: /* 912e10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912e14: fld dword ptr [eax + 0x1e0] */
  { double v = F32((uint32_t)(eax + 0x1e0u)); FPUSH(v); }
/* 912e1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912e20(void) {
  LOAD_REGS();
L_912e20: /* 912e20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912e24: fld dword ptr [eax + 0x188] */
  { double v = F32((uint32_t)(eax + 0x188u)); FPUSH(v); }
/* 912e2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912e30(void) {
  LOAD_REGS();
L_912e30: /* 912e30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912e34: fld dword ptr [eax + 0x18c] */
  { double v = F32((uint32_t)(eax + 0x18cu)); FPUSH(v); }
/* 912e3a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912e40(void) {
  LOAD_REGS();
L_912e40: /* 912e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912e44: mov eax, dword ptr [eax + 0xb8] */
  eax = R32((uint32_t)(eax + 0xb8u));
/* 912e4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912e50(void) {
  LOAD_REGS();
L_912e50: /* 912e50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912e54: mov eax, dword ptr [eax + 0xbc] */
  eax = R32((uint32_t)(eax + 0xbcu));
/* 912e5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912e60(void) {
  LOAD_REGS();
L_912e60: /* 912e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912e64: add eax, 0xfc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 912e69: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 912e6d: jmp dword ptr [0xb0221c] */
  { uint32_t t = R32((uint32_t)(0xb0221cu)); SPILL(); call_ind(t); return; }
}

void f_912e80(void) {
  LOAD_REGS();
L_912e80: /* 912e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912e84: mov eax, dword ptr [eax + 0xf8] */
  eax = R32((uint32_t)(eax + 0xf8u));
/* 912e8a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912e90(void) {
  LOAD_REGS();
L_912e90: /* 912e90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912e94: mov eax, dword ptr [eax + 0x190] */
  eax = R32((uint32_t)(eax + 0x190u));
/* 912e9a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912ea0(void) {
  LOAD_REGS();
L_912ea0: /* 912ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912ea4: fld dword ptr [eax + 0x194] */
  { double v = F32((uint32_t)(eax + 0x194u)); FPUSH(v); }
/* 912eaa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912eb0(void) {
  LOAD_REGS();
L_912eb0: /* 912eb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912eb4: fld dword ptr [eax + 0x198] */
  { double v = F32((uint32_t)(eax + 0x198u)); FPUSH(v); }
/* 912eba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912ec0(void) {
  LOAD_REGS();
L_912ec0: /* 912ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912ec4: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 912eca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912ed0(void) {
  LOAD_REGS();
L_912ed0: /* 912ed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912ed4: fld dword ptr [eax + 0x1a0] */
  { double v = F32((uint32_t)(eax + 0x1a0u)); FPUSH(v); }
/* 912eda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912ee0(void) {
  LOAD_REGS();
L_912ee0: /* 912ee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912ee4: fld dword ptr [eax + 0x1a4] */
  { double v = F32((uint32_t)(eax + 0x1a4u)); FPUSH(v); }
/* 912eea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912ef0(void) {
  LOAD_REGS();
L_912ef0: /* 912ef0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912ef4: mov eax, dword ptr [eax + 0x1a8] */
  eax = R32((uint32_t)(eax + 0x1a8u));
/* 912efa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912f00(void) {
  LOAD_REGS();
L_912f00: /* 912f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912f04: mov eax, dword ptr [eax + 0x1e8] */
  eax = R32((uint32_t)(eax + 0x1e8u));
/* 912f0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912f10(void) {
  LOAD_REGS();
L_912f10: /* 912f10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912f14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 912f15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 912f16: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 912f1a: lea esi, [eax + 0x1ac] */
  esi = (uint32_t)(eax + 0x1acu);
/* 912f20: mov ecx, 7 */
  ecx = 0x7u;
/* 912f25: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 912f27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 912f28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 912f29: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912f30(void) {
  LOAD_REGS();
L_912f30: /* 912f30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912f34: mov eax, dword ptr [eax + 0x22c] */
  eax = R32((uint32_t)(eax + 0x22cu));
/* 912f3a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912f40(void) {
  LOAD_REGS();
L_912f40: /* 912f40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912f44: mov eax, dword ptr [eax + 0x228] */
  eax = R32((uint32_t)(eax + 0x228u));
/* 912f4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912f50(void) {
  LOAD_REGS();
L_912f50: /* 912f50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912f54: fld dword ptr [eax + 0x184] */
  { double v = F32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 912f5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_912f60(void) {
  LOAD_REGS();
L_912f60: /* 912f60: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912f64: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912f68: fstp dword ptr [eax + 0x1e0] */
  WF32((uint32_t)(eax + 0x1e0u), ST0); FPOP();
/* 912f6e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912f80(void) {
  LOAD_REGS();
L_912f80: /* 912f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912f84: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912f88: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 912f8c: fstp dword ptr [eax + 0x1e4] */
  WF32((uint32_t)(eax + 0x1e4u), ST0); FPOP();
/* 912f92: mov dword ptr [eax + 0x188], ecx */
  W32((uint32_t)(eax + 0x188u), ecx);
/* 912f98: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912fa0(void) {
  LOAD_REGS();
L_912fa0: /* 912fa0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 912fa4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912fa8: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
/* 912fac: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 912fb0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 912fb2: fstp dword ptr [eax + 0x1e4] */
  WF32((uint32_t)(eax + 0x1e4u), ST0); FPOP();
/* 912fb8: fstp dword ptr [eax + 0x188] */
  WF32((uint32_t)(eax + 0x188u), ST0); FPOP();
/* 912fbe: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_912fd0(void) {
  LOAD_REGS();
L_912fd0: /* 912fd0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 912fd4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 912fd8: fstp dword ptr [eax + 0x18c] */
  WF32((uint32_t)(eax + 0x18cu), ST0); FPOP();
/* 912fde: ret 8 */
  esp += 12; SPILL(); return;
}

void f_912ff0(void) {
  LOAD_REGS();
L_912ff0: /* 912ff0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 912ff4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 912ff8: mov dword ptr [ecx + 0x190], eax */
  W32((uint32_t)(ecx + 0x190u), eax);
/* 912ffe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913010(void) {
  LOAD_REGS();
L_913010: /* 913010: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 913014: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913018: fstp dword ptr [eax + 0x194] */
  WF32((uint32_t)(eax + 0x194u), ST0); FPOP();
/* 91301e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913030(void) {
  LOAD_REGS();
L_913030: /* 913030: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 913034: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913038: fstp dword ptr [eax + 0x198] */
  WF32((uint32_t)(eax + 0x198u), ST0); FPOP();
/* 91303e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913050(void) {
  LOAD_REGS();
L_913050: /* 913050: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 913054: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913058: fstp dword ptr [eax + 0x19c] */
  WF32((uint32_t)(eax + 0x19cu), ST0); FPOP();
/* 91305e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913070(void) {
  LOAD_REGS();
L_913070: /* 913070: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 913074: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913078: fstp dword ptr [eax + 0x1a0] */
  WF32((uint32_t)(eax + 0x1a0u), ST0); FPOP();
/* 91307e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913090(void) {
  LOAD_REGS();
L_913090: /* 913090: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 913094: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913098: fstp dword ptr [eax + 0x1a4] */
  WF32((uint32_t)(eax + 0x1a4u), ST0); FPOP();
/* 91309e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9130b0(void) {
  LOAD_REGS();
L_9130b0: /* 9130b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9130b4: mov edx, eax */
  edx = eax;
/* 9130b6: and edx, 0x80000003 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 9130bc: jns 0x9130c3 */
  if (!sf) goto L_9130c3;
L_9130be: /* 9130be: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 9130bf: or edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9130c2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  edx = r;
  }
L_9130c3: /* 9130c3: mov ecx, eax */
  ecx = eax;
/* 9130c5: je 0x9130cc */
  if (zf) goto L_9130cc;
L_9130c7: /* 9130c7: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9130c9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_9130cc: /* 9130cc: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9130cf: jge 0x9130e3 */
  if ((sf == of)) goto L_9130e3;
L_9130d1: /* 9130d1: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9130d5: mov eax, 4 */
  eax = 0x4u;
/* 9130da: mov dword ptr [ecx + 0x1a8], eax */
  W32((uint32_t)(ecx + 0x1a8u), eax);
/* 9130e0: ret 8 */
  esp += 12; SPILL(); return;
L_9130e3: /* 9130e3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9130e5: jne 0x9130f4 */
  if (!zf) goto L_9130f4;
L_9130e7: /* 9130e7: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9130eb: mov dword ptr [edx + 0x1a8], eax */
  W32((uint32_t)(edx + 0x1a8u), eax);
/* 9130f1: ret 8 */
  esp += 12; SPILL(); return;
L_9130f4: /* 9130f4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9130f8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9130fa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9130fd: mov dword ptr [ecx + 0x1a8], eax */
  W32((uint32_t)(ecx + 0x1a8u), eax);
/* 913103: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913110(void) {
  LOAD_REGS();
L_913110: /* 913110: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913114: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 913118: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 91311c: fstp dword ptr [eax + 0x164] */
  WF32((uint32_t)(eax + 0x164u), ST0); FPOP();
/* 913122: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 913126: mov dword ptr [eax + 0x168], ecx */
  W32((uint32_t)(eax + 0x168u), ecx);
/* 91312c: mov dword ptr [eax + 0x16c], edx */
  W32((uint32_t)(eax + 0x16cu), edx);
/* 913132: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_913140(void) {
  LOAD_REGS();
L_913140: /* 913140: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 913144: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 913148: mov dword ptr [ecx + 0x1c8], eax */
  W32((uint32_t)(ecx + 0x1c8u), eax);
/* 91314e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913160(void) {
  LOAD_REGS();
L_913160: /* 913160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913164: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913165: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913166: lea edi, [eax + 0x1fc] */
  edi = (uint32_t)(eax + 0x1fcu);
/* 91316c: mov ecx, 0xb */
  ecx = 0xbu;
/* 913171: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* 913175: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 913177: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 913178: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 913179: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_913180(void) {
  LOAD_REGS();
L_913180: /* 913180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913181: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913182: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 913186: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913187: call 0x972710 */
  esp -= 4; W32(esp, 0x91318cu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 91318c: mov esi, eax */
  esi = eax;
/* 91318e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 913191: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 913193: je 0x9131ae */
  if (zf) goto L_9131ae;
L_913195: /* 913195: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 913198: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913199: call 0x90f180 */
  esp -= 4; W32(esp, 0x91319eu); SPILL(); f_90f180(); if (g_unwind) return; RELOAD();
/* 91319e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91319f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9131a0: call 0x972770 */
  esp -= 4; W32(esp, 0x9131a5u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 9131a5: mov esi, eax */
  esi = eax;
/* 9131a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9131aa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9131ac: jne 0x913195 */
  if (!zf) goto L_913195;
L_9131ae: /* 9131ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9131af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9131b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9131c0(void) {
  LOAD_REGS();
L_9131c0: /* 9131c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9131c4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9131c8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9131cc: mov dword ptr [ecx + 0x174], eax */
  W32((uint32_t)(ecx + 0x174u), eax);
/* 9131d2: xor eax, eax */
  eax = 0;
/* 9131d4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9131d6: mov dword ptr [ecx + 0x178], edx */
  W32((uint32_t)(ecx + 0x178u), edx);
/* 9131dc: jle 0x9131f8 */
  if ((zf || sf != of)) goto L_9131f8;
L_9131de: /* 9131de: mov edi, edi */
  edi = edi;
L_9131e0: /* 9131e0: mov edx, dword ptr [ecx + 0x174] */
  edx = R32((uint32_t)(ecx + 0x174u));
/* 9131e6: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 9131ed: mov edx, dword ptr [ecx + 0x178] */
  edx = R32((uint32_t)(ecx + 0x178u));
/* 9131f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9131f4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9131f6: jl 0x9131e0 */
  if ((sf != of)) goto L_9131e0;
L_9131f8: /* 9131f8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_913200(void) {
  LOAD_REGS();
L_913200: /* 913200: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 913204: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 913208: mov dword ptr [ecx + 0x1e8], eax */
  W32((uint32_t)(ecx + 0x1e8u), eax);
/* 91320e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913220(void) {
  LOAD_REGS();
L_913220: /* 913220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913224: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913225: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 913229: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91322a: lea edi, [eax + 0x1ac] */
  edi = (uint32_t)(eax + 0x1acu);
/* 913230: mov ecx, 7 */
  ecx = 0x7u;
/* 913235: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 913237: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 913238: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 913239: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913240(void) {
  LOAD_REGS();
L_913240: /* 913240: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913244: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 913248: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 91324c: mov dword ptr [eax + 0x228], ecx */
  W32((uint32_t)(eax + 0x228u), ecx);
/* 913252: mov dword ptr [eax + 0x230], edx */
  W32((uint32_t)(eax + 0x230u), edx);
/* 913258: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_913260(void) {
  LOAD_REGS();
L_913260: /* 913260: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 913264: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 913268: mov dword ptr [ecx + 0x22c], eax */
  W32((uint32_t)(ecx + 0x22cu), eax);
/* 91326e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_913280(void) {
  LOAD_REGS();
L_913280: /* 913280: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 913283: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913284: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 913285: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 913289: mov eax, dword ptr [ebp + 0xf8] */
  eax = R32((uint32_t)(ebp + 0xf8u));
/* 91328f: mov ecx, dword ptr [ebp + 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xb8u));
/* 913295: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913296: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913297: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913298: lea esi, [ebp + 0x14c] */
  esi = (uint32_t)(ebp + 0x14cu);
/* 91329e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91329f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9132a0: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 9132a4: call 0x910010 */
  esp -= 4; W32(esp, 0x9132a9u); SPILL(); f_910010(); if (g_unwind) return; RELOAD();
/* 9132a9: lea edx, [ebp + 0x190] */
  edx = (uint32_t)(ebp + 0x190u);
/* 9132af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9132b0: push 0x910ff0 */
  { uint32_t v = 0x910ff0u; esp -= 4; W32(esp, v); }
/* 9132b5: mov ebx, eax */
  ebx = eax;
/* 9132b7: lea edi, [ebp + 0x68] */
  edi = (uint32_t)(ebp + 0x68u);
/* 9132ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9132bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9132bc: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 9132c0: call 0x9100f0 */
  esp -= 4; W32(esp, 0x9132c5u); SPILL(); f_9100f0(); if (g_unwind) return; RELOAD();
/* 9132c5: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 9132c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9132ca: jle 0x913489 */
  if ((zf || sf != of)) goto L_913489;
L_9132d0: /* 9132d0: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 9132d3: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9132d6: lea eax, [ebp + 0xdc] */
  eax = (uint32_t)(ebp + 0xdcu);
/* 9132dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9132dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9132de: call 0x974b30 */
  esp -= 4; W32(esp, 0x9132e3u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 9132e3: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* 9132e6: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 9132e9: mov esi, dword ptr [ebx + 0x38] */
  esi = R32((uint32_t)(ebx + 0x38u));
/* 9132ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9132ed: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 9132f0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9132f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9132f3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9132f7: lea eax, [ebp + 0x134] */
  eax = (uint32_t)(ebp + 0x134u);
/* 9132fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9132fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9132ff: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 913303: call 0x911880 */
  esp -= 4; W32(esp, 0x913308u); SPILL(); f_911880(); if (g_unwind) return; RELOAD();
/* 913308: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91330c: mov edi, eax */
  edi = eax;
/* 91330e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 913312: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913313: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913314: lea esi, [ebp + 0x1dc] */
  esi = (uint32_t)(ebp + 0x1dcu);
/* 91331a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91331b: lea ecx, [ebp + 0x164] */
  ecx = (uint32_t)(ebp + 0x164u);
/* 913321: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913322: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 913323: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913324: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 913328: call 0x911240 */
  esp -= 4; W32(esp, 0x91332du); SPILL(); f_911240(); if (g_unwind) return; RELOAD();
/* 91332d: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 913330: mov edx, dword ptr [ebp + 0x188] */
  edx = R32((uint32_t)(ebp + 0x188u));
/* 913336: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 91333a: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 91333e: mov dword ptr [ebp + 0x1e4], edx */
  W32((uint32_t)(ebp + 0x1e4u), edx);
/* 913344: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 913346: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 913349: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 91334c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91334d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91334e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 913350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913351: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913352: call 0x914d60 */
  esp -= 4; W32(esp, 0x913357u); SPILL(); f_914d60(); if (g_unwind) return; RELOAD();
/* 913357: mov edi, eax */
  edi = eax;
/* 913359: lea eax, [ebp + 0x9c] */
  eax = (uint32_t)(ebp + 0x9cu);
/* 91335f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913361: call 0x974b30 */
  esp -= 4; W32(esp, 0x913366u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 913366: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 913368: mov dword ptr [ebp + 0x1f0], eax */
  W32((uint32_t)(ebp + 0x1f0u), eax);
/* 91336e: mov dword ptr [ebp + 0x1f4], edi */
  W32((uint32_t)(ebp + 0x1f4u), edi);
/* 913374: call 0x915270 */
  esp -= 4; W32(esp, 0x913379u); SPILL(); f_915270(); if (g_unwind) return; RELOAD();
/* 913379: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 91337c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 913380: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 913383: mov edi, esp */
  edi = esp;
/* 913385: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 913386: mov ecx, 0x13 */
  ecx = 0x13u;
/* 91338b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 91338d: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 913391: mov esi, dword ptr [esp + 0x78] */
  esi = R32((uint32_t)(esp + 0x78u));
/* 913395: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913396: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913397: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91339a: mov edi, esp */
  edi = esp;
/* 91339c: mov ecx, 0x17 */
  ecx = 0x17u;
/* 9133a1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9133a3: call 0x914450 */
  esp -= 4; W32(esp, 0x9133a8u); SPILL(); f_914450(); if (g_unwind) return; RELOAD();
/* 9133a8: mov eax, dword ptr [ebp + 0x22c] */
  eax = R32((uint32_t)(ebp + 0x22cu));
/* 9133ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9133b0: je 0x9133c9 */
  if (zf) goto L_9133c9;
L_9133b2: /* 9133b2: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9133b6: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 9133b9: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9133bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9133be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9133bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9133c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9133c1: call 0x913630 */
  esp -= 4; W32(esp, 0x9133c6u); SPILL(); f_913630(); if (g_unwind) return; RELOAD();
/* 9133c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9133c9: /* 9133c9: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 9133cc: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9133d0: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9133d3: mov edi, esp */
  edi = esp;
/* 9133d5: mov ecx, 0x13 */
  ecx = 0x13u;
/* 9133da: lea esi, [ebp + 0x1dc] */
  esi = (uint32_t)(ebp + 0x1dcu);
/* 9133e0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9133e2: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 9133e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9133e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9133e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9133e9: call 0x914410 */
  esp -= 4; W32(esp, 0x9133eeu); SPILL(); f_914410(); if (g_unwind) return; RELOAD();
/* 9133ee: mov ecx, dword ptr [ebp + 0x1f0] */
  ecx = R32((uint32_t)(ebp + 0x1f0u));
/* 9133f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9133f5: lea eax, [ebp + 0x9c] */
  eax = (uint32_t)(ebp + 0x9cu);
/* 9133fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9133fc: call 0x974b90 */
  esp -= 4; W32(esp, 0x913401u); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 913401: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 913404: xor esi, esi */
  esi = 0;
/* 913406: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 913408: jle 0x91342b */
  if ((zf || sf != of)) goto L_91342b;
L_91340a: /* 91340a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_913410: /* 913410: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 913413: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 913416: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913417: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91341a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91341b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91341d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91341e: call 0x911600 */
  esp -= 4; W32(esp, 0x913423u); SPILL(); f_911600(); if (g_unwind) return; RELOAD();
/* 913423: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 913426: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 913427: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 913429: jl 0x913410 */
  if ((sf != of)) goto L_913410;
L_91342b: /* 91342b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91342c: lea eax, [ebp + 0xdc] */
  eax = (uint32_t)(ebp + 0xdcu);
/* 913432: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913433: call 0x974b90 */
  esp -= 4; W32(esp, 0x913438u); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 913438: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 91343b: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 91343f: mov edi, dword ptr [ecx + 0x44] */
  edi = R32((uint32_t)(ecx + 0x44u));
/* 913442: xor esi, esi */
  esi = 0;
/* 913444: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 913446: jle 0x913472 */
  if ((zf || sf != of)) goto L_913472;
L_913448: /* 913448: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913449: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91344a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91344b: call 0x911660 */
  esp -= 4; W32(esp, 0x913450u); SPILL(); f_911660(); if (g_unwind) return; RELOAD();
/* 913450: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 913453: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 913455: mov eax, dword ptr [ebp + 0x1c8] */
  eax = R32((uint32_t)(ebp + 0x1c8u));
/* 91345b: test al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91345d: je 0x91346a */
  if (zf) goto L_91346a;
L_91345f: /* 91345f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913461: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913462: call 0x9134d0 */
  esp -= 4; W32(esp, 0x913467u); SPILL(); f_9134d0(); if (g_unwind) return; RELOAD();
/* 913467: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_91346a: /* 91346a: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 91346d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91346e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 913470: jl 0x913448 */
  if ((sf != of)) goto L_913448;
L_913472: /* 913472: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 913476: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91347a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91347b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91347c: call 0x974b90 */
  esp -= 4; W32(esp, 0x913481u); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 913481: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 913485: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_913489: /* 913489: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91348a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91348b: call 0x974b90 */
  esp -= 4; W32(esp, 0x913490u); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 913490: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913491: call 0x972710 */
  esp -= 4; W32(esp, 0x913496u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 913496: mov esi, eax */
  esi = eax;
/* 913498: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91349b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91349d: je 0x9134b9 */
  if (zf) goto L_9134b9;
L_91349f: /* 91349f: nop  */
L_9134a0: /* 9134a0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9134a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9134a4: call 0x90f180 */
  esp -= 4; W32(esp, 0x9134a9u); SPILL(); f_90f180(); if (g_unwind) return; RELOAD();
/* 9134a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9134aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9134ab: call 0x972770 */
  esp -= 4; W32(esp, 0x9134b0u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 9134b0: mov esi, eax */
  esi = eax;
/* 9134b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9134b5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9134b7: jne 0x9134a0 */
  if (!zf) goto L_9134a0;
L_9134b9: /* 9134b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9134ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9134bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9134bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9134bd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9134c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9134d0(void) {
  LOAD_REGS();
L_9134d0: /* 9134d0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9134d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9134d4: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 9134d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9134d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9134da: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 9134de: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9134e1: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9134e4: mov ebp, dword ptr [eax + ebx*4] */
  ebp = R32((uint32_t)(eax + ebx*4));
/* 9134e7: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 9134ea: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9134ec: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9134ee: jge 0x913629 */
  if ((sf == of)) goto L_913629;
L_9134f4: /* 9134f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_9134f5: /* 9134f5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9134f7: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* 9134fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9134fb: call 0x90fe00 */
  esp -= 4; W32(esp, 0x913500u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 913500: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 913502: je 0x913611 */
  if (zf) goto L_913611;
L_913508: /* 913508: mov esi, dword ptr [eax + 0x164] */
  esi = R32((uint32_t)(eax + 0x164u));
/* 91350e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 913510: je 0x913611 */
  if (zf) goto L_913611;
L_913516: /* 913516: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 91351a: mov edi, ebx */
  edi = ebx;
/* 91351c: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 91351f: and ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
L_913522: /* 913522: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 913526: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913527: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913528: call 0x90f8e0 */
  esp -= 4; W32(esp, 0x91352du); SPILL(); f_90f8e0(); if (g_unwind) return; RELOAD();
/* 91352d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91352f: je 0x9135a7 */
  if (zf) goto L_9135a7;
L_913531: /* 913531: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 913535: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 913536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913537: call 0x90f910 */
  esp -= 4; W32(esp, 0x91353cu); SPILL(); f_90f910(); if (g_unwind) return; RELOAD();
/* 91353c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91353d: call 0x90f940 */
  esp -= 4; W32(esp, 0x913542u); SPILL(); f_90f940(); if (g_unwind) return; RELOAD();
/* 913542: fmul dword ptr [0xa150c4] */
  ST0 = ST0 * (F32((uint32_t)(0xa150c4u)));
/* 913548: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 91354a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 91354c: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 913552: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 913556: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 91355b: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 91355f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 913561: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913562: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 913566: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 91356a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 91356c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91356d: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 913571: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 913575: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 913577: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 91357b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91357f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 913581: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 913585: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913587: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913589: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91358d: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 913591: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 913595: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913599: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 91359d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9135a1: call dword ptr [0xb022c8] */
  { uint32_t t = R32((uint32_t)(0xb022c8u)); esp -= 4; W32(esp, 0x9135a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9135a7: /* 9135a7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9135a9: je 0x9135fb */
  if (zf) goto L_9135fb;
L_9135ab: /* 9135ab: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 9135af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9135b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9135b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9135b3: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x9135b8u); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 9135b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9135b9: call 0x90bdc0 */
  esp -= 4; W32(esp, 0x9135beu); SPILL(); f_90bdc0(); if (g_unwind) return; RELOAD();
/* 9135be: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9135c2: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 9135c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9135c8: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 9135cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9135cf: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9135d3: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 9135d7: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9135db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9135dc: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 9135e0: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 9135e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9135e5: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9135e9: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9135ed: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 9135f1: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9135f5: call dword ptr [0xb022c8] */
  { uint32_t t = R32((uint32_t)(0xb022c8u)); esp -= 4; W32(esp, 0x9135fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9135fb: /* 9135fb: mov esi, dword ptr [esi + 0x1dc] */
  esi = R32((uint32_t)(esi + 0x1dcu));
/* 913601: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 913603: jne 0x913522 */
  if (!zf) goto L_913522;
L_913609: /* 913609: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 91360d: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
L_913611: /* 913611: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 913614: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 913617: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 91361a: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* 91361d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 91361e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 913620: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 913622: jl 0x9134f5 */
  if ((sf != of)) goto L_9134f5;
L_913628: /* 913628: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_913629: /* 913629: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91362a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91362b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91362c: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91362f: ret  */
  esp += 4; SPILL(); return;
}

void f_913630(void) {
  LOAD_REGS();
L_913630: /* 913630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913631: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 913635: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 913636: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913637: xor ecx, ecx */
  ecx = 0;
/* 913639: xor esi, esi */
  esi = 0;
/* 91363b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91363d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91363e: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 913642: jle 0x9136bd */
  if ((zf || sf != of)) goto L_9136bd;
L_913644: /* 913644: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 913646: jne 0x9136bd */
  if (!zf) goto L_9136bd;
L_913648: /* 913648: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 91364b: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 913650: mov edx, 3 */
  edx = 0x3u;
L_913655: /* 913655: mov ebp, dword ptr [eax - 0x10] */
  ebp = R32((uint32_t)(eax + 0xfffffff0u));
/* 913658: and ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 91365e: cmp ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913664: jne 0x91366b */
  if (!zf) goto L_91366b;
L_913666: /* 913666: mov ecx, 1 */
  ecx = 0x1u;
L_91366b: /* 91366b: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 91366d: and ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 913673: cmp ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913679: jne 0x913680 */
  if (!zf) goto L_913680;
L_91367b: /* 91367b: mov ecx, 1 */
  ecx = 0x1u;
L_913680: /* 913680: mov ebp, dword ptr [eax - 0xc0] */
  ebp = R32((uint32_t)(eax + 0xffffff40u));
/* 913686: and ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 91368c: cmp ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913692: jne 0x913699 */
  if (!zf) goto L_913699;
L_913694: /* 913694: mov ecx, 1 */
  ecx = 0x1u;
L_913699: /* 913699: mov ebp, dword ptr [eax - 0xb0] */
  ebp = R32((uint32_t)(eax + 0xffffff50u));
/* 91369f: and ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 9136a5: cmp ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9136ab: jne 0x9136b2 */
  if (!zf) goto L_9136b2;
L_9136ad: /* 9136ad: mov ecx, 1 */
  ecx = 0x1u;
L_9136b2: /* 9136b2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9136b5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9136b6: jne 0x913655 */
  if (!zf) goto L_913655;
L_9136b8: /* 9136b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9136b9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9136bb: jl 0x913644 */
  if ((sf != of)) goto L_913644;
L_9136bd: /* 9136bd: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 9136c1: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 9136c4: xor ebx, ebx */
  ebx = 0;
/* 9136c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9136c8: jle 0x913749 */
  if ((zf || sf != of)) goto L_913749;
L_9136ca: /* 9136ca: xor esi, esi */
  esi = 0;
/* 9136cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9136d0: /* 9136d0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9136d2: jne 0x91374d */
  if (!zf) goto L_91374d;
L_9136d4: /* 9136d4: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 9136d7: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9136d9: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9136dc: mov edx, 3 */
  edx = 0x3u;
L_9136e1: /* 9136e1: mov ebp, dword ptr [eax - 0x20] */
  ebp = R32((uint32_t)(eax + 0xffffffe0u));
/* 9136e4: and ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 9136ea: cmp ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9136f0: jne 0x9136f7 */
  if (!zf) goto L_9136f7;
L_9136f2: /* 9136f2: mov ecx, 1 */
  ecx = 0x1u;
L_9136f7: /* 9136f7: mov ebp, dword ptr [eax - 0x10] */
  ebp = R32((uint32_t)(eax + 0xfffffff0u));
/* 9136fa: and ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 913700: cmp ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913706: jne 0x91370d */
  if (!zf) goto L_91370d;
L_913708: /* 913708: mov ecx, 1 */
  ecx = 0x1u;
L_91370d: /* 91370d: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 91370f: and ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 913715: cmp ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91371b: jne 0x913722 */
  if (!zf) goto L_913722;
L_91371d: /* 91371d: mov ecx, 1 */
  ecx = 0x1u;
L_913722: /* 913722: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 913725: and ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 91372b: cmp ebp, 0x7f800000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913731: jne 0x913738 */
  if (!zf) goto L_913738;
L_913733: /* 913733: mov ecx, 1 */
  ecx = 0x1u;
L_913738: /* 913738: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91373b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 91373c: jne 0x9136e1 */
  if (!zf) goto L_9136e1;
L_91373e: /* 91373e: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 913741: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 913742: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 913745: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 913747: jl 0x9136d0 */
  if ((sf != of)) goto L_9136d0;
L_913749: /* 913749: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91374b: je 0x91376f */
  if (zf) goto L_91376f;
L_91374d: /* 91374d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 913751: mov eax, dword ptr [ecx + 0x228] */
  eax = R32((uint32_t)(ecx + 0x228u));
/* 913757: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 913759: je 0x91376f */
  if (zf) goto L_91376f;
L_91375b: /* 91375b: mov ecx, dword ptr [ecx + 0x230] */
  ecx = R32((uint32_t)(ecx + 0x230u));
/* 913761: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 913765: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913766: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91376a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91376b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91376c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91376d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x91376fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_91376f: /* 91376f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 913770: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 913771: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 913772: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 913773: ret  */
  esp += 4; SPILL(); return;
}

void f_913780(void) {
  LOAD_REGS();
L_913780: /* 913780: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 913783: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913784: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 913785: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913786: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913787: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 91378b: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 913791: mov edx, dword ptr [edi + 0xb8] */
  edx = R32((uint32_t)(edi + 0xb8u));
/* 913797: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913798: lea eax, [edi + 0x14c] */
  eax = (uint32_t)(edi + 0x14cu);
/* 91379e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91379f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9137a0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9137a4: call 0x910010 */
  esp -= 4; W32(esp, 0x9137a9u); SPILL(); f_910010(); if (g_unwind) return; RELOAD();
/* 9137a9: mov ebx, eax */
  ebx = eax;
/* 9137ab: lea eax, [edi + 0x190] */
  eax = (uint32_t)(edi + 0x190u);
/* 9137b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9137b2: push 0x910ff0 */
  { uint32_t v = 0x910ff0u; esp -= 4; W32(esp, v); }
/* 9137b7: lea esi, [edi + 0x68] */
  esi = (uint32_t)(edi + 0x68u);
/* 9137ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9137bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9137bc: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 9137c0: call 0x9100f0 */
  esp -= 4; W32(esp, 0x9137c5u); SPILL(); f_9100f0(); if (g_unwind) return; RELOAD();
/* 9137c5: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 9137c8: xor ebp, ebp */
  ebp = 0;
/* 9137ca: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9137cc: jle 0x9139e5 */
  if ((zf || sf != of)) goto L_9139e5;
L_9137d2: /* 9137d2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9137d8: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 9137dc: fdiv dword ptr [esp + 0x3c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x3cu)));
/* 9137e0: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9137e4: jmp 0x9137f0 */
  goto L_9137f0;
L_9137e6: /* 9137e6: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 9137ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9137f0: /* 9137f0: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 9137f3: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 9137f6: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9137f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9137fa: lea eax, [edi + 0xdc] */
  eax = (uint32_t)(edi + 0xdcu);
/* 913800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913801: call 0x974b30 */
  esp -= 4; W32(esp, 0x913806u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 913806: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 913807: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913808: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 91380c: call 0x911820 */
  esp -= 4; W32(esp, 0x913811u); SPILL(); f_911820(); if (g_unwind) return; RELOAD();
/* 913811: fld dword ptr [edi + 0x18c] */
  { double v = F32((uint32_t)(edi + 0x18cu)); FPUSH(v); }
/* 913817: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 913819: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 91381b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91381d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 913820: jp 0x91382a */
  if (pf) goto L_91382a;
L_913822: /* 913822: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913824: fld dword ptr [edi + 0x18c] */
  { double v = F32((uint32_t)(edi + 0x18cu)); FPUSH(v); }
L_91382a: /* 91382a: fcom dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
/* 91382e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 913830: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 913833: jp 0x91383b */
  if (pf) goto L_91383b;
L_913835: /* 913835: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 913839: jmp 0x913845 */
  goto L_913845;
L_91383b: /* 91383b: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 91383f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913841: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_913845: /* 913845: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 913848: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 91384c: mov esi, dword ptr [edx + ecx + 4] */
  esi = R32((uint32_t)(edx + ecx + 0x4u));
/* 913850: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* 913853: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 913855: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 913858: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913859: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91385b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91385c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 91385e: lea eax, [edi + 0x134] */
  eax = (uint32_t)(edi + 0x134u);
/* 913864: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913865: call 0x911880 */
  esp -= 4; W32(esp, 0x91386au); SPILL(); f_911880(); if (g_unwind) return; RELOAD();
/* 91386a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 91386e: mov esi, eax */
  esi = eax;
/* 913870: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 913874: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913876: lea eax, [edi + 0x1dc] */
  eax = (uint32_t)(edi + 0x1dcu);
/* 91387c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91387d: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 913881: lea eax, [edi + 0x164] */
  eax = (uint32_t)(edi + 0x164u);
/* 913887: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913888: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913889: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91388a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91388b: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 91388f: call 0x911470 */
  esp -= 4; W32(esp, 0x913894u); SPILL(); f_911470(); if (g_unwind) return; RELOAD();
/* 913894: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 913898: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 91389b: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91389f: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 9138a2: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 9138a5: fmul dword ptr [edi + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x188u)));
/* 9138ab: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 9138ae: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9138b2: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9138b6: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9138ba: fstp dword ptr [edi + 0x1e4] */
  WF32((uint32_t)(edi + 0x1e4u), ST0); FPOP();
/* 9138c0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9138c2: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 9138c5: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 9138c8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9138ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9138cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9138cc: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9138cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9138d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9138d1: call 0x914d60 */
  esp -= 4; W32(esp, 0x9138d6u); SPILL(); f_914d60(); if (g_unwind) return; RELOAD();
/* 9138d6: mov esi, eax */
  esi = eax;
/* 9138d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9138d9: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 9138df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9138e0: call 0x974b30 */
  esp -= 4; W32(esp, 0x9138e5u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 9138e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9138e7: mov dword ptr [edi + 0x1f0], eax */
  W32((uint32_t)(edi + 0x1f0u), eax);
/* 9138ed: mov dword ptr [edi + 0x1f4], esi */
  W32((uint32_t)(edi + 0x1f4u), esi);
/* 9138f3: call 0x915270 */
  esp -= 4; W32(esp, 0x9138f8u); SPILL(); f_915270(); if (g_unwind) return; RELOAD();
/* 9138f8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 9138fc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 913900: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 913903: mov edi, esp */
  edi = esp;
/* 913905: mov ecx, 0x13 */
  ecx = 0x13u;
/* 91390a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 91390c: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 91390f: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 913912: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 913916: mov esi, dword ptr [esp + 0x60] */
  esi = R32((uint32_t)(esp + 0x60u));
/* 91391a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91391b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91391c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91391d: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 913920: mov edi, esp */
  edi = esp;
/* 913922: mov ecx, 0x17 */
  ecx = 0x17u;
/* 913927: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 913929: call 0x914450 */
  esp -= 4; W32(esp, 0x91392eu); SPILL(); f_914450(); if (g_unwind) return; RELOAD();
/* 91392e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 913932: mov eax, dword ptr [esi + 0x22c] */
  eax = R32((uint32_t)(esi + 0x22cu));
/* 913938: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91393a: je 0x913956 */
  if (zf) goto L_913956;
L_91393c: /* 91393c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 913940: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 913943: mov ecx, dword ptr [eax + ebp*4] */
  ecx = R32((uint32_t)(eax + ebp*4));
/* 913946: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 913947: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 91394b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91394c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91394d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91394e: call 0x913630 */
  esp -= 4; W32(esp, 0x913953u); SPILL(); f_913630(); if (g_unwind) return; RELOAD();
/* 913953: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_913956: /* 913956: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 913959: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 91395d: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 913960: mov edi, esp */
  edi = esp;
/* 913962: mov ecx, 0x13 */
  ecx = 0x13u;
/* 913967: add esi, 0x1dc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1dcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91396d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 91396f: mov ecx, dword ptr [eax + ebp*4] */
  ecx = R32((uint32_t)(eax + ebp*4));
/* 913972: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 913976: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913977: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913978: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 913979: call 0x914410 */
  esp -= 4; W32(esp, 0x91397eu); SPILL(); f_914410(); if (g_unwind) return; RELOAD();
/* 91397e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 913982: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* 913988: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913989: lea eax, [esi + 0x9c] */
  eax = (uint32_t)(esi + 0x9cu);
/* 91398f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913990: call 0x974b90 */
  esp -= 4; W32(esp, 0x913995u); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 913995: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913996: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 913997: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913998: call 0x911600 */
  esp -= 4; W32(esp, 0x91399du); SPILL(); f_911600(); if (g_unwind) return; RELOAD();
/* 91399d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9139a1: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 9139a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9139a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9139a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9139a7: call 0x911660 */
  esp -= 4; W32(esp, 0x9139acu); SPILL(); f_911660(); if (g_unwind) return; RELOAD();
/* 9139ac: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9139b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9139b1: lea eax, [esi + 0x134] */
  eax = (uint32_t)(esi + 0x134u);
/* 9139b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9139b8: call 0x974b90 */
  esp -= 4; W32(esp, 0x9139bdu); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 9139bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9139be: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 9139c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9139c5: call 0x974b90 */
  esp -= 4; W32(esp, 0x9139cau); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 9139ca: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9139ce: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 9139d1: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9139d2: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9139d5: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9139d7: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 9139db: jl 0x9137e6 */
  if ((sf != of)) goto L_9137e6;
L_9139e1: /* 9139e1: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
L_9139e5: /* 9139e5: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9139e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9139ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9139eb: call 0x974b90 */
  esp -= 4; W32(esp, 0x9139f0u); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 9139f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9139f1: call 0x972710 */
  esp -= 4; W32(esp, 0x9139f6u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 9139f6: mov edi, eax */
  edi = eax;
/* 9139f8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9139fb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9139fd: je 0x913a23 */
  if (zf) goto L_913a23;
L_9139ff: /* 9139ff: mov ebp, 0x7f7fffff */
  ebp = 0x7f7fffffu;
L_913a04: /* 913a04: mov ebx, dword ptr [edi + 0x14] */
  ebx = R32((uint32_t)(edi + 0x14u));
/* 913a07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913a08: call 0x90f180 */
  esp -= 4; W32(esp, 0x913a0du); SPILL(); f_90f180(); if (g_unwind) return; RELOAD();
/* 913a0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913a0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913a0f: mov dword ptr [ebx + 0x238], ebp */
  W32((uint32_t)(ebx + 0x238u), ebp);
/* 913a15: call 0x972770 */
  esp -= 4; W32(esp, 0x913a1au); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 913a1a: mov edi, eax */
  edi = eax;
/* 913a1c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 913a1f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 913a21: jne 0x913a04 */
  if (!zf) goto L_913a04;
L_913a23: /* 913a23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 913a24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 913a25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 913a26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 913a27: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 913a2a: ret 8 */
  esp += 12; SPILL(); return;
}
