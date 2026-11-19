#include "recomp.h"
#include "rec_mod.h"

void f_4ec2b0(void) {
  LOAD_REGS();
L_4ec2b0: /* 4ec2b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec2b4: cmp eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4ec2b8: jae 0x4ec2bf */
  if (!cf) goto L_4ec2bf;
L_4ec2ba: /* 4ec2ba: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec2be: ret  */
  esp += 4; SPILL(); return;
L_4ec2bf: /* 4ec2bf: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4ec2c3: ret  */
  esp += 4; SPILL(); return;
}

void f_4ec2e0(void) {
  LOAD_REGS();
L_4ec2e0: /* 4ec2e0: mov eax, ecx */
  eax = ecx;
/* 4ec2e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4ec300(void) {
  LOAD_REGS();
L_4ec300: /* 4ec300: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ec304: mov eax, ecx */
  eax = ecx;
/* 4ec306: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ec30a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ec30c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4ec310: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4ec313: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4ec316: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4ec330(void) {
  LOAD_REGS();
L_4ec330: /* 4ec330: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec334: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec336: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4ec339: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec33c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4ec33e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4ec340: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec343: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4ec345: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ec348: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ec34a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4ec34c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec34f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4ec352: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec355: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4ec358: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec35c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4ec35e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ec360: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ec363: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ec366: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec380(void) {
  LOAD_REGS();
L_4ec380: /* 4ec380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec384: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ec387: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ec38a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ec38d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ec390: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec392: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ec394: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ec396: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec398: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ec3b0(void) {
  LOAD_REGS();
L_4ec3b0: /* 4ec3b0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ec3b4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec3b8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4ec3bb: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec3bf: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4ec3c2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec3c6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4ec3c8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec3cc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ec3ce: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ec3d1: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ec3d4: ret  */
  esp += 4; SPILL(); return;
}

void f_4ec3f0(void) {
  LOAD_REGS();
L_4ec3f0: /* 4ec3f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec3f4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ec3f7: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4ec3fa: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ec3fd: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4ec400: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ec402: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec406: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4ec408: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ec40a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ec40d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ec410: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec430(void) {
  LOAD_REGS();
L_4ec430: /* 4ec430: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec433: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec437: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 4ec43a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec43d: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 4ec440: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec442: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 4ec444: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec448: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ec44a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ec44d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ec450: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec470(void) {
  LOAD_REGS();
L_4ec470: /* 4ec470: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec474: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec478: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ec47b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec47f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ec482: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec486: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ec488: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ec48a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ec48d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ec490: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec4b0(void) {
  LOAD_REGS();
L_4ec4b0: /* 4ec4b0: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 4ec4b6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec4ba: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 4ec4be: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4ec4c2: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ec4c5: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec4c9: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ec4cc: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec4d0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ec4d2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ec4d4: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ec4d7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ec4da: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec4f0(void) {
  LOAD_REGS();
L_4ec4f0: /* 4ec4f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec4f4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ec4f7: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ec4fa: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ec4fd: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ec500: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ec502: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec506: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ec508: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ec50a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ec50d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ec510: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec530(void) {
  LOAD_REGS();
L_4ec530: /* 4ec530: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec532: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ec536: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4ec538: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec53a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ec53d: jp 0x4ec561 */
  if (pf) goto L_4ec561;
L_4ec53f: /* 4ec53f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec542: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4ec545: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec547: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ec54a: jp 0x4ec561 */
  if (pf) goto L_4ec561;
L_4ec54c: /* 4ec54c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec54f: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 4ec552: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec554: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ec557: jp 0x4ec561 */
  if (pf) goto L_4ec561;
L_4ec559: /* 4ec559: mov eax, 1 */
  eax = 0x1u;
/* 4ec55e: ret 4 */
  esp += 8; SPILL(); return;
L_4ec561: /* 4ec561: xor eax, eax */
  eax = 0;
/* 4ec563: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ec580(void) {
  LOAD_REGS();
L_4ec580: /* 4ec580: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec582: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ec586: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4ec588: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec58a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ec58d: jp 0x4ec5ae */
  if (pf) goto L_4ec5ae;
L_4ec58f: /* 4ec58f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec592: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4ec595: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec597: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ec59a: jp 0x4ec5ae */
  if (pf) goto L_4ec5ae;
L_4ec59c: /* 4ec59c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec59f: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 4ec5a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec5a4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ec5a7: jp 0x4ec5ae */
  if (pf) goto L_4ec5ae;
L_4ec5a9: /* 4ec5a9: xor eax, eax */
  eax = 0;
/* 4ec5ab: ret 4 */
  esp += 8; SPILL(); return;
L_4ec5ae: /* 4ec5ae: mov eax, 1 */
  eax = 0x1u;
/* 4ec5b3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ec5d0(void) {
  LOAD_REGS();
L_4ec5d0: /* 4ec5d0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec5d3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec5d7: fchs  */
  ST0 = -ST0;
/* 4ec5d9: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec5dc: fchs  */
  ST0 = -ST0;
/* 4ec5de: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec5e0: fchs  */
  ST0 = -ST0;
/* 4ec5e2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ec5e4: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ec5e7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ec5ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ec600(void) {
  LOAD_REGS();
L_4ec600: /* 4ec600: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec604: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ec606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ec607: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4ec609: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ec60b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ec60e: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4ec611: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ec614: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ec617: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec61b: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4ec61e: mov edx, eax */
  edx = eax;
/* 4ec620: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ec623: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ec625: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ec627: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ec62a: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ec62d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ec630: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ec633: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec634: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec650(void) {
  LOAD_REGS();
L_4ec650: /* 4ec650: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec652: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec656: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 4ec658: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ec659: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ec65b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec65e: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 4ec661: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ec664: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec667: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 4ec66a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec66e: mov edx, eax */
  edx = eax;
/* 4ec670: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ec673: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ec675: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ec677: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ec67a: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ec67d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ec680: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ec683: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec684: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec6a0(void) {
  LOAD_REGS();
L_4ec6a0: /* 4ec6a0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ec6a4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec6a8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ec6aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ec6ab: mov edx, eax */
  edx = eax;
/* 4ec6ad: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ec6af: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ec6b3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ec6b6: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ec6b9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ec6bd: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ec6c0: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ec6c3: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ec6c5: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ec6c7: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ec6ca: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ec6cd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ec6d0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ec6d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec6d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec6f0(void) {
  LOAD_REGS();
L_4ec6f0: /* 4ec6f0: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 4ec6f6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ec6fa: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 4ec6fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ec6ff: mov edx, eax */
  edx = eax;
/* 4ec701: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ec703: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ec705: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ec707: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ec709: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ec70c: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ec70f: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ec712: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ec715: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ec717: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ec719: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ec71c: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ec71f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ec722: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ec725: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec726: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec740(void) {
  LOAD_REGS();
L_4ec740: /* 4ec740: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec744: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ec746: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ec747: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ec749: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ec74b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ec74e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ec751: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ec754: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ec757: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec75b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ec75e: mov edx, eax */
  edx = eax;
/* 4ec760: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ec763: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ec765: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ec767: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ec76a: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ec76d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ec770: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ec773: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec774: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec790(void) {
  LOAD_REGS();
L_4ec790: /* 4ec790: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec792: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec796: fdiv dword ptr [eax] */
  ST0 = ST0 / (F32((uint32_t)(eax)));
/* 4ec798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ec799: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ec79b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec79e: fdiv dword ptr [eax + 4] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x4u)));
/* 4ec7a1: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ec7a4: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec7a7: fdiv dword ptr [eax + 8] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x8u)));
/* 4ec7aa: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ec7ae: mov edx, eax */
  edx = eax;
/* 4ec7b0: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ec7b3: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ec7b5: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ec7b7: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ec7ba: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ec7bd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ec7c0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ec7c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec7c4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ec7e0(void) {
  LOAD_REGS();
L_4ec7e0: /* 4ec7e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ec7e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4ec7e5: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ec7e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ec7e9: mov edi, ecx */
  edi = ecx;
/* 4ec7eb: jg 0x4ec804 */
  if ((!zf && sf == of)) goto L_4ec804;
L_4ec7ed: /* 4ec7ed: push 0x2f1 */
  { uint32_t v = 0x2f1u; esp -= 4; W32(esp, v); }
/* 4ec7f2: push 0x5a37b0 */
  { uint32_t v = 0x5a37b0u; esp -= 4; W32(esp, v); }
/* 4ec7f7: push 0x5a37a8 */
  { uint32_t v = 0x5a37a8u; esp -= 4; W32(esp, v); }
/* 4ec7fc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4ec801u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4ec801: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ec804: /* 4ec804: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ec807: jl 0x4ec820 */
  if ((sf != of)) goto L_4ec820;
L_4ec809: /* 4ec809: push 0x2f2 */
  { uint32_t v = 0x2f2u; esp -= 4; W32(esp, v); }
/* 4ec80e: push 0x5a37b0 */
  { uint32_t v = 0x5a37b0u; esp -= 4; W32(esp, v); }
/* 4ec813: push 0x5a37a4 */
  { uint32_t v = 0x5a37a4u; esp -= 4; W32(esp, v); }
/* 4ec818: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4ec81du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4ec81d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ec820: /* 4ec820: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4ec822: jne 0x4ec82b */
  if (!zf) goto L_4ec82b;
L_4ec824: /* 4ec824: mov eax, edi */
  eax = edi;
/* 4ec826: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ec827: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec828: ret 4 */
  esp += 8; SPILL(); return;
L_4ec82b: /* 4ec82b: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ec82e: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 4ec831: je 0x4ec836 */
  if (zf) goto L_4ec836;
L_4ec833: /* 4ec833: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
L_4ec836: /* 4ec836: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ec837: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec838: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ec860(void) {
  LOAD_REGS();
L_4ec860: /* 4ec860: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec863: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ec866: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec869: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec86b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ec86d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4ec86f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4ec871: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4ec873: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec875: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4ec877: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4ec879: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec87b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4ec87e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec880: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec882: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec884: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x4ec889u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 4ec889: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ec88c: ret  */
  esp += 4; SPILL(); return;
}

void f_4ec8a0(void) {
  LOAD_REGS();
L_4ec8a0: /* 4ec8a0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec8a3: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec8a6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec8a8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ec8aa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4ec8ac: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4ec8ae: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4ec8b0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec8b2: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4ec8b4: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4ec8b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec8b8: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 4ec8ba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec8bc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec8be: ret  */
  esp += 4; SPILL(); return;
}

void f_4ec8d0(void) {
  LOAD_REGS();
L_4ec8d0: /* 4ec8d0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec8d3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ec8d6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec8d8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ec8da: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4ec8dc: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4ec8de: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4ec8e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec8e2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4ec8e5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec8e7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec8e9: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x4ec8eeu); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 4ec8ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ec8f1: ret  */
  esp += 4; SPILL(); return;
}

void f_4ec910(void) {
  LOAD_REGS();
L_4ec910: /* 4ec910: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec913: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec915: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ec917: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4ec919: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4ec91b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4ec91d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec91f: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 4ec921: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec923: ret  */
  esp += 4; SPILL(); return;
}

void f_4ec940(void) {
  LOAD_REGS();
L_4ec940: /* 4ec940: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ec942: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ec948: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec94a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ec94d: jp 0x4ec975 */
  if (pf) goto L_4ec975;
L_4ec94f: /* 4ec94f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ec952: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ec958: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec95a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ec95d: jp 0x4ec975 */
  if (pf) goto L_4ec975;
L_4ec95f: /* 4ec95f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ec962: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ec968: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec96a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ec96d: jp 0x4ec975 */
  if (pf) goto L_4ec975;
L_4ec96f: /* 4ec96f: mov eax, 1 */
  eax = 0x1u;
/* 4ec974: ret  */
  esp += 4; SPILL(); return;
L_4ec975: /* 4ec975: xor eax, eax */
  eax = 0;
/* 4ec977: ret  */
  esp += 4; SPILL(); return;
}

void f_4ec990(void) {
  LOAD_REGS();
L_4ec990: /* 4ec990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ec991: mov esi, ecx */
  esi = ecx;
/* 4ec993: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4ec996: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4ec999: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4ec99b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ec99d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4ec99f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4ec9a1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4ec9a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec9a5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4ec9a7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4ec9a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ec9ab: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 4ec9ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec9af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec9b1: fcom qword ptr [0x5694b8] */
  fpu_com(ST0, F64((uint32_t)(0x5694b8u)));
/* 4ec9b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ec9b9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ec9bc: jne 0x4ec9ed */
  if (!zf) goto L_4ec9ed;
L_4ec9be: /* 4ec9be: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ec9c1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4ec9c4: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x4ec9c9u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 4ec9c9: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 4ec9cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ec9d2: mov eax, 1 */
  eax = 0x1u;
/* 4ec9d7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ec9d9: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4ec9db: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4ec9dd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ec9df: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4ec9e2: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4ec9e5: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4ec9e8: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4ec9eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec9ec: ret  */
  esp += 4; SPILL(); return;
L_4ec9ed: /* 4ec9ed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ec9ef: xor eax, eax */
  eax = 0;
/* 4ec9f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ec9f2: ret  */
  esp += 4; SPILL(); return;
}

void f_4eca20(void) {
  LOAD_REGS();
L_4eca20: /* 4eca20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eca21: mov esi, ecx */
  esi = ecx;
/* 4eca23: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4eca26: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4eca29: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4eca2b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eca2d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4eca2f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4eca31: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4eca33: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4eca35: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4eca37: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4eca39: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4eca3b: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 4eca3d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4eca3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4eca41: fcom qword ptr [0x5694b8] */
  fpu_com(ST0, F64((uint32_t)(0x5694b8u)));
/* 4eca47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4eca49: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4eca4c: jne 0x4eca90 */
  if (!zf) goto L_4eca90;
L_4eca4e: /* 4eca4e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4eca51: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4eca54: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x4eca59u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 4eca59: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 4eca5f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4eca63: mov ecx, eax */
  ecx = eax;
/* 4eca65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4eca68: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eca6a: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4eca6c: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4eca6e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eca70: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4eca73: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4eca76: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4eca79: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4eca7c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4eca7e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4eca80: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 4eca83: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4eca86: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 4eca89: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4eca8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eca8d: ret 4 */
  esp += 8; SPILL(); return;
L_4eca90: /* 4eca90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4eca94: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4eca96: xor ecx, ecx */
  ecx = 0;
/* 4eca98: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4eca9a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4eca9d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4ecaa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ecaa1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ecae0(void) {
  LOAD_REGS();
L_4ecae0: /* 4ecae0: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 4ecae6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ecaea: fdiv dword ptr [ecx + 8] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x8u)));
/* 4ecaed: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ecaef: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ecaf2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ecaf4: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ecaf6: mov dword ptr [eax + 8], 0x3f800000 */
  W32((uint32_t)(eax + 0x8u), 0x3f800000u);
/* 4ecafd: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ecaff: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ecb02: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ecb20(void) {
  LOAD_REGS();
L_4ecb20: /* 4ecb20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ecb21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ecb22: mov esi, ecx */
  esi = ecx;
/* 4ecb24: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4ecb27: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ecb2a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4ecb2d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4ecb2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ecb31: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4ecb33: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4ecb35: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4ecb37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ecb39: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4ecb3b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4ecb3d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ecb3f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4ecb42: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ecb44: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ecb46: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ecb48: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x4ecb4du); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 4ecb4d: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 4ecb53: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4ecb57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ecb5a: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4ecb5e: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4ecb61: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4ecb65: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4ecb68: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4ecb6c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4ecb6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ecb6f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ecb71: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ecb74: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ecb77: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4ecb78: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ecba0(void) {
  LOAD_REGS();
L_4ecba0: /* 4ecba0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ecba3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ecba4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ecba5: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4ecba9: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 4ecbac: mov esi, ecx */
  esi = ecx;
/* 4ecbae: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4ecbb1: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 4ecbb5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ecbb9: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ecbbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ecbc1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ecbc4: jnp 0x4ecbee */
  if (!pf) goto L_4ecbee;
L_4ecbc6: /* 4ecbc6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ecbca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ecbcb: fmul qword ptr [0x569470] */
  ST0 = ST0 * (F64((uint32_t)(0x569470u)));
/* 4ecbd1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ecbd3: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 4ecbd7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ecbda: call 0x4e392c */
  esp -= 4; W32(esp, 0x4ecbdfu); SPILL(); f_4e392c(); if (g_unwind) return; RELOAD();
/* 4ecbdf: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4ecbe3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4ecbe7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ecbea: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
L_4ecbee: /* 4ecbee: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4ecbf1: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4ecbf5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4ecbf8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 4ecbfc: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ecc00: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ecc06: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ecc08: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ecc0b: jnp 0x4ecc35 */
  if (!pf) goto L_4ecc35;
L_4ecc0d: /* 4ecc0d: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ecc11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ecc12: fmul qword ptr [0x569470] */
  ST0 = ST0 * (F64((uint32_t)(0x569470u)));
/* 4ecc18: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ecc1a: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 4ecc1e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ecc21: call 0x4e392c */
  esp -= 4; W32(esp, 0x4ecc26u); SPILL(); f_4e392c(); if (g_unwind) return; RELOAD();
/* 4ecc26: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 4ecc2a: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ecc2e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ecc31: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
L_4ecc35: /* 4ecc35: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 4ecc37: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4ecc3b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4ecc3d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 4ecc41: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ecc45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ecc46: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ecc4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ecc4d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ecc4f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ecc52: jnp 0x4ecc7c */
  if (!pf) goto L_4ecc7c;
L_4ecc54: /* 4ecc54: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4ecc58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ecc59: fmul qword ptr [0x569470] */
  ST0 = ST0 * (F64((uint32_t)(0x569470u)));
/* 4ecc5f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ecc61: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 4ecc65: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ecc68: call 0x4e392c */
  esp -= 4; W32(esp, 0x4ecc6du); SPILL(); f_4e392c(); if (g_unwind) return; RELOAD();
/* 4ecc6d: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 4ecc71: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ecc75: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ecc78: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
L_4ecc7c: /* 4ecc7c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ecc80: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 4ecc84: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ecc86: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ecc8a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ecc8d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4ecc90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ecc93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ecce0(void) {
  LOAD_REGS();
L_4ecce0: /* 4ecce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ecce4: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4ecce7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ecd00(void) {
  LOAD_REGS();
L_4ecd00: /* 4ecd00: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ecd02: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ecd08: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ecd0a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ecd0d: jne 0x4ecd15 */
  if (!zf) goto L_4ecd15;
L_4ecd0f: /* 4ecd0f: mov eax, 1 */
  eax = 0x1u;
/* 4ecd14: ret  */
  esp += 4; SPILL(); return;
L_4ecd15: /* 4ecd15: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ecd17: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ecd1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ecd1f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ecd22: jnp 0x4ecd54 */
  if (!pf) goto L_4ecd54;
L_4ecd24: /* 4ecd24: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ecd27: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ecd2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ecd2f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ecd32: je 0x4ecd0f */
  if (zf) goto L_4ecd0f;
L_4ecd34: /* 4ecd34: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ecd37: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ecd3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ecd3f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ecd42: jnp 0x4ecd54 */
  if (!pf) goto L_4ecd54;
L_4ecd44: /* 4ecd44: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ecd47: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ecd4d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ecd4f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ecd52: je 0x4ecd0f */
  if (zf) goto L_4ecd0f;
L_4ecd54: /* 4ecd54: xor eax, eax */
  eax = 0;
/* 4ecd56: ret  */
  esp += 4; SPILL(); return;
}

void f_4ecd80(void) {
  LOAD_REGS();
L_4ecd80: /* 4ecd80: mov eax, ecx */
  eax = ecx;
/* 4ecd82: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ecd86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ecd87: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ecd89: mov edx, eax */
  edx = eax;
/* 4ecd8b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ecd8d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ecd90: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ecd93: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ecd96: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ecd99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ecd9a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ecdb0(void) {
  LOAD_REGS();
L_4ecdb0: /* 4ecdb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ecdb1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 4ecdb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ecdb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ecdb7: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4ecdbb: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 4ecdbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ecdbe: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 4ecdc0: mov esi, ecx */
  esi = ecx;
/* 4ecdc2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ecdc5: call 0x4e15aa */
  esp -= 4; W32(esp, 0x4ecdcau); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 4ecdca: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 4ecdcd: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 4ecdd0: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 4ecdd3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ecdd6: call 0x4e15aa */
  esp -= 4; W32(esp, 0x4ecddbu); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 4ecddb: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 4ecddf: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 4ecde2: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 4ecde5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ecde8: call 0x4e15aa */
  esp -= 4; W32(esp, 0x4ecdedu); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 4ecded: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ecdf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ecdf1: mov word ptr [esi + 4], ax */
  W16((uint32_t)(esi + 0x4u), (eax & 0xffffu));
/* 4ecdf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ecdf6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ecdf7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ece20(void) {
  LOAD_REGS();
L_4ece20: /* 4ece20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ece21: movsx eax, word ptr [ecx] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx)));
/* 4ece24: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ece28: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 4ece2c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ece30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ece31: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4ece35: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4ece37: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 4ece39: movsx esi, word ptr [ecx + 2] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x2u)));
/* 4ece3d: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4ece41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ece42: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ece46: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4ece49: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 4ece4c: movsx ecx, word ptr [ecx + 4] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x4u)));
/* 4ece50: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4ece54: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ece58: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4ece5b: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 4ece5e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4ece5f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ece90(void) {
  LOAD_REGS();
L_4ece90: /* 4ece90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ece94: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 4ece97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ece98: lea edx, [eax + 2] */
  edx = (uint32_t)(eax + 0x2u);
/* 4ece9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ece9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ece9d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ecea1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ecea2: call 0x4e40ed */
  esp -= 4; W32(esp, 0x4ecea7u); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 4ecea7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4eceaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4eceab: call 0x4e40ed */
  esp -= 4; W32(esp, 0x4eceb0u); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 4eceb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4eceb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4eceb4: call 0x4e40ed */
  esp -= 4; W32(esp, 0x4eceb9u); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 4eceb9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ecebc: ret  */
  esp += 4; SPILL(); return;
}

void f_4eced0(void) {
  LOAD_REGS();
L_4eced0: /* 4eced0: mov eax, ecx */
  eax = ecx;
/* 4eced2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4eced6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eced7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4eced9: mov edx, eax */
  edx = eax;
/* 4ecedb: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ecedd: mov cx, word ptr [ecx + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 4ecee1: mov word ptr [edx + 4], cx */
  W16((uint32_t)(edx + 0x4u), (ecx & 0xffffu));
/* 4ecee5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ecee6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ecf00(void) {
  LOAD_REGS();
L_4ecf00: /* 4ecf00: mov eax, ecx */
  eax = ecx;
/* 4ecf02: xor ecx, ecx */
  ecx = 0;
/* 4ecf04: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ecf06: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4ecf09: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ecf0c: ret  */
  esp += 4; SPILL(); return;
}

void f_4ecf20(void) {
  LOAD_REGS();
L_4ecf20: /* 4ecf20: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ecf24: mov eax, ecx */
  eax = ecx;
/* 4ecf26: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ecf2a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ecf2c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4ecf30: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4ecf33: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4ecf36: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4ecf50(void) {
  LOAD_REGS();
L_4ecf50: /* 4ecf50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ecf54: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ecf56: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ecf58: jne 0x4ecf72 */
  if (!zf) goto L_4ecf72;
L_4ecf5a: /* 4ecf5a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4ecf5d: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ecf60: jne 0x4ecf72 */
  if (!zf) goto L_4ecf72;
L_4ecf62: /* 4ecf62: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ecf65: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ecf68: jne 0x4ecf72 */
  if (!zf) goto L_4ecf72;
L_4ecf6a: /* 4ecf6a: mov eax, 1 */
  eax = 0x1u;
/* 4ecf6f: ret 4 */
  esp += 8; SPILL(); return;
L_4ecf72: /* 4ecf72: xor eax, eax */
  eax = 0;
/* 4ecf74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ecf90(void) {
  LOAD_REGS();
L_4ecf90: /* 4ecf90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ecf94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ecf96: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ecf98: jne 0x4ecfaf */
  if (!zf) goto L_4ecfaf;
L_4ecf9a: /* 4ecf9a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4ecf9d: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ecfa0: jne 0x4ecfaf */
  if (!zf) goto L_4ecfaf;
L_4ecfa2: /* 4ecfa2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ecfa5: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ecfa8: jne 0x4ecfaf */
  if (!zf) goto L_4ecfaf;
L_4ecfaa: /* 4ecfaa: xor eax, eax */
  eax = 0;
/* 4ecfac: ret 4 */
  esp += 8; SPILL(); return;
L_4ecfaf: /* 4ecfaf: mov eax, 1 */
  eax = 0x1u;
/* 4ecfb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ecfd0(void) {
  LOAD_REGS();
L_4ecfd0: /* 4ecfd0: mov eax, ecx */
  eax = ecx;
/* 4ecfd2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ecfd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ecfd7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ecfd9: mov edx, eax */
  edx = eax;
/* 4ecfdb: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ecfdd: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ecfe0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ecfe3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ecfe6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ecfe9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ecfea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed000(void) {
  LOAD_REGS();
L_4ed000: /* 4ed000: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ed004: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4ed006: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 4ed008: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed00a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed00d: jp 0x4ed050 */
  if (pf) goto L_4ed050;
L_4ed00f: /* 4ed00f: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4ed012: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 4ed015: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed017: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed01a: jp 0x4ed050 */
  if (pf) goto L_4ed050;
L_4ed01c: /* 4ed01c: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4ed01f: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 4ed022: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed024: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed027: jp 0x4ed050 */
  if (pf) goto L_4ed050;
L_4ed029: /* 4ed029: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 4ed02c: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* 4ed02f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed031: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed034: jp 0x4ed050 */
  if (pf) goto L_4ed050;
L_4ed036: /* 4ed036: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 4ed039: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 4ed03c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed03e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed041: jp 0x4ed050 */
  if (pf) goto L_4ed050;
L_4ed043: /* 4ed043: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 4ed046: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 4ed049: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed04b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed04e: jnp 0x4ed09c */
  if (!pf) goto L_4ed09c;
L_4ed050: /* 4ed050: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4ed052: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* 4ed055: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed057: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed05a: jp 0x4ed0a4 */
  if (pf) goto L_4ed0a4;
L_4ed05c: /* 4ed05c: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4ed05f: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 4ed062: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed064: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed067: jp 0x4ed0a4 */
  if (pf) goto L_4ed0a4;
L_4ed069: /* 4ed069: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4ed06c: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 4ed06f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed071: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed074: jp 0x4ed0a4 */
  if (pf) goto L_4ed0a4;
L_4ed076: /* 4ed076: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 4ed079: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 4ed07b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed07d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed080: jp 0x4ed0a4 */
  if (pf) goto L_4ed0a4;
L_4ed082: /* 4ed082: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 4ed085: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 4ed088: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed08a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed08d: jp 0x4ed0a4 */
  if (pf) goto L_4ed0a4;
L_4ed08f: /* 4ed08f: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 4ed092: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 4ed095: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed097: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed09a: jp 0x4ed0a4 */
  if (pf) goto L_4ed0a4;
L_4ed09c: /* 4ed09c: mov eax, 1 */
  eax = 0x1u;
/* 4ed0a1: ret 4 */
  esp += 8; SPILL(); return;
L_4ed0a4: /* 4ed0a4: xor eax, eax */
  eax = 0;
/* 4ed0a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed0e0(void) {
  LOAD_REGS();
L_4ed0e0: /* 4ed0e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed0e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4ed0e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed0e6: mov eax, ecx */
  eax = ecx;
/* 4ed0e8: mov ecx, 6 */
  ecx = 0x6u;
/* 4ed0ed: mov edi, eax */
  edi = eax;
/* 4ed0ef: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4ed0f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed0f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed0f3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed110(void) {
  LOAD_REGS();
L_4ed110: /* 4ed110: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ed114: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 4ed115: js 0x4ed13d */
  if (sf) goto L_4ed13d;
L_4ed117: /* 4ed117: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ed118: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4ed11c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4ed11d: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 4ed121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed122: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 4ed126: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed127: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 4ed12a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_4ed130: /* 4ed130: mov ecx, esi */
  ecx = esi;
/* 4ed132: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4ed134u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4ed134: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4ed136: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 4ed137: jne 0x4ed130 */
  if (!zf) goto L_4ed130;
L_4ed139: /* 4ed139: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed13a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed13b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4ed13c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4ed13d: /* 4ed13d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ed150(void) {
  LOAD_REGS();
L_4ed150: /* 4ed150: mov eax, ecx */
  eax = ecx;
/* 4ed152: ret  */
  esp += 4; SPILL(); return;
}

void f_4ed170(void) {
  LOAD_REGS();
L_4ed170: /* 4ed170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed171: mov eax, ecx */
  eax = ecx;
/* 4ed173: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ed177: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed178: mov edx, ecx */
  edx = ecx;
/* 4ed17a: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4ed17c: mov esi, eax */
  esi = eax;
/* 4ed17e: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4ed180: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4ed183: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4ed186: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4ed189: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4ed18c: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4ed18f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed190: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed193: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed194: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed1b0(void) {
  LOAD_REGS();
L_4ed1b0: /* 4ed1b0: mov eax, ecx */
  eax = ecx;
/* 4ed1b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ed1b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed1b7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ed1b9: mov edx, eax */
  edx = eax;
/* 4ed1bb: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ed1bd: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ed1c0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ed1c3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ed1c6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ed1c9: mov dword ptr [eax + 0xc], 0 */
  W32((uint32_t)(eax + 0xcu), 0x0u);
/* 4ed1d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed1d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed1f0(void) {
  LOAD_REGS();
L_4ed1f0: /* 4ed1f0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ed1f4: mov eax, ecx */
  eax = ecx;
/* 4ed1f6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ed1fa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ed1fc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4ed200: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4ed203: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4ed207: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4ed20a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4ed20d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ed220(void) {
  LOAD_REGS();
L_4ed220: /* 4ed220: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ed224: mov eax, ecx */
  eax = ecx;
/* 4ed226: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4ed228: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ed22c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4ed22f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4ed233: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4ed236: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ed23a: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed23d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ed250(void) {
  LOAD_REGS();
L_4ed250: /* 4ed250: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed255: mov eax, ecx */
  eax = ecx;
/* 4ed257: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4ed25b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed25c: mov edx, ecx */
  edx = ecx;
/* 4ed25e: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4ed260: mov esi, eax */
  esi = eax;
/* 4ed262: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4ed264: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4ed267: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4ed26a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4ed26d: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4ed270: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ed273: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4ed277: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed278: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ed27b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed27c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ed27e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4ed282: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ed284: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ed286: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4ed289: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ed2a0(void) {
  LOAD_REGS();
L_4ed2a0: /* 4ed2a0: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ed2a3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 4ed2a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed2a8: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 4ed2ac: mov esi, ecx */
  esi = ecx;
/* 4ed2ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed2af: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 4ed2b3: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4ed2b7: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4ed2bb: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 4ed2bf: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 4ed2c3: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4ed2c7: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 4ed2cb: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 4ed2cf: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 4ed2d3: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 4ed2d7: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 4ed2db: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4ed2df: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 4ed2e3: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 4ed2e7: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 4ed2eb: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4ed2ef: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 4ed2f3: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 4ed2f7: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 4ed2fb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ed2ff: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 4ed301: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4ed303: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4ed305: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4ed307: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4ed30b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4ed30d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ed30f: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 4ed313: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4ed315: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4ed319: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 4ed31d: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ed321: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 4ed323: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4ed325: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4ed329: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ed32b: call 0x4e3b5c */
  esp -= 4; W32(esp, 0x4ed330u); SPILL(); f_4e3b5c(); if (g_unwind) return; RELOAD();
/* 4ed330: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4ed334: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ed338: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed33c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ed340: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 4ed344: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 4ed348: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 4ed34c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 4ed350: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 4ed354: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 4ed358: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 4ed35a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ed35b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4ed35d: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 4ed361: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4ed363: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4ed365: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 4ed369: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4ed36b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ed36d: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 4ed371: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4ed373: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 4ed377: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 4ed37b: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4ed37f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 4ed381: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4ed383: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 4ed387: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4ed389: call 0x4e3b5c */
  esp -= 4; W32(esp, 0x4ed38eu); SPILL(); f_4e3b5c(); if (g_unwind) return; RELOAD();
/* 4ed38e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 4ed392: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4ed395: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 4ed399: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4ed39c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ed39e: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 4ed3a2: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4ed3a4: mov eax, esi */
  eax = esi;
/* 4ed3a6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ed3a8: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4ed3ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed3ac: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ed3af: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_4ed410(void) {
  LOAD_REGS();
L_4ed410: /* 4ed410: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ed414: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ed417: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ed41a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ed41d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ed420: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ed422: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ed424: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ed426: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ed428: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 4ed42b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed440(void) {
  LOAD_REGS();
L_4ed440: /* 4ed440: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ed443: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ed447: fchs  */
  ST0 = -ST0;
/* 4ed449: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ed44c: fchs  */
  ST0 = -ST0;
/* 4ed44e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ed451: fchs  */
  ST0 = -ST0;
/* 4ed453: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ed455: fchs  */
  ST0 = -ST0;
/* 4ed457: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ed459: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ed45c: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ed45f: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4ed462: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed480(void) {
  LOAD_REGS();
L_4ed480: /* 4ed480: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ed482: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ed486: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4ed488: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed48a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed48d: jp 0x4ed4be */
  if (pf) goto L_4ed4be;
L_4ed48f: /* 4ed48f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ed492: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4ed495: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed497: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed49a: jp 0x4ed4be */
  if (pf) goto L_4ed4be;
L_4ed49c: /* 4ed49c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ed49f: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 4ed4a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed4a4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed4a7: jp 0x4ed4be */
  if (pf) goto L_4ed4be;
L_4ed4a9: /* 4ed4a9: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ed4ac: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 4ed4af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed4b1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed4b4: jp 0x4ed4be */
  if (pf) goto L_4ed4be;
L_4ed4b6: /* 4ed4b6: mov eax, 1 */
  eax = 0x1u;
/* 4ed4bb: ret 4 */
  esp += 8; SPILL(); return;
L_4ed4be: /* 4ed4be: xor eax, eax */
  eax = 0;
/* 4ed4c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed4f0(void) {
  LOAD_REGS();
L_4ed4f0: /* 4ed4f0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ed4f2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ed4f6: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4ed4f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed4fa: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed4fd: jp 0x4ed52b */
  if (pf) goto L_4ed52b;
L_4ed4ff: /* 4ed4ff: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ed502: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4ed505: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed507: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed50a: jp 0x4ed52b */
  if (pf) goto L_4ed52b;
L_4ed50c: /* 4ed50c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ed50f: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 4ed512: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed514: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed517: jp 0x4ed52b */
  if (pf) goto L_4ed52b;
L_4ed519: /* 4ed519: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ed51c: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 4ed51f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ed521: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ed524: jp 0x4ed52b */
  if (pf) goto L_4ed52b;
L_4ed526: /* 4ed526: xor eax, eax */
  eax = 0;
/* 4ed528: ret 4 */
  esp += 8; SPILL(); return;
L_4ed52b: /* 4ed52b: mov eax, 1 */
  eax = 0x1u;
/* 4ed530: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed560(void) {
  LOAD_REGS();
L_4ed560: /* 4ed560: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ed564: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4ed567: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 4ed56a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ed56d: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4ed570: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ed573: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4ed576: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ed578: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ed57c: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4ed57e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ed580: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ed583: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ed586: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4ed589: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed5a0(void) {
  LOAD_REGS();
L_4ed5a0: /* 4ed5a0: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ed5a3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ed5a7: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4ed5aa: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ed5ad: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 4ed5b0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ed5b3: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 4ed5b6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ed5b8: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 4ed5ba: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ed5be: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ed5c0: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ed5c3: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ed5c6: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4ed5c9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed5e0(void) {
  LOAD_REGS();
L_4ed5e0: /* 4ed5e0: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 4ed5e6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ed5ea: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 4ed5ee: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4ed5f2: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4ed5f5: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed5f9: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ed5fc: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed600: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ed603: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed607: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ed609: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ed60b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ed60e: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ed611: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4ed614: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed630(void) {
  LOAD_REGS();
L_4ed630: /* 4ed630: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed634: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ed638: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4ed63b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed63f: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ed642: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed646: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ed649: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed64d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ed64f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ed651: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ed654: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ed657: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4ed65a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed670(void) {
  LOAD_REGS();
L_4ed670: /* 4ed670: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ed674: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4ed677: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4ed67a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ed67d: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ed680: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ed683: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ed686: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ed688: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ed68c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ed68e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ed690: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ed693: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ed696: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4ed699: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed6b0(void) {
  LOAD_REGS();
L_4ed6b0: /* 4ed6b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ed6b4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ed6b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed6b7: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4ed6b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed6ba: mov edx, ecx */
  edx = ecx;
/* 4ed6bc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ed6be: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ed6c1: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4ed6c4: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ed6c7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ed6ca: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4ed6cd: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ed6d0: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4ed6d2: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4ed6d5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ed6d9: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 4ed6dc: mov esi, eax */
  esi = eax;
/* 4ed6de: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 4ed6e1: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4ed6e3: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4ed6e6: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4ed6e9: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4ed6ec: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4ed6ef: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4ed6f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed6f3: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed6f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed6f7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed720(void) {
  LOAD_REGS();
L_4ed720: /* 4ed720: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ed722: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ed726: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 4ed728: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed729: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed72a: mov edx, ecx */
  edx = ecx;
/* 4ed72c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ed72e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ed731: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 4ed734: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ed737: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ed73a: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 4ed73d: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ed740: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4ed742: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ed745: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4ed748: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ed74c: mov esi, eax */
  esi = eax;
/* 4ed74e: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 4ed751: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4ed753: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4ed756: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4ed759: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4ed75c: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4ed75f: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4ed762: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed763: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed766: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed767: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed790(void) {
  LOAD_REGS();
L_4ed790: /* 4ed790: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ed794: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ed798: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ed79a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed79b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed79c: mov edx, ecx */
  edx = ecx;
/* 4ed79e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ed7a0: mov esi, eax */
  esi = eax;
/* 4ed7a2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4ed7a6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ed7a9: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ed7ac: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4ed7b0: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ed7b3: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ed7b6: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4ed7b8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4ed7bc: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4ed7bf: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 4ed7c2: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4ed7c4: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4ed7c7: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4ed7ca: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4ed7cd: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4ed7d0: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4ed7d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed7d4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed7d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed7d8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed800(void) {
  LOAD_REGS();
L_4ed800: /* 4ed800: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ed804: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ed806: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed807: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ed809: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed80a: mov edx, ecx */
  edx = ecx;
/* 4ed80c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ed80e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ed811: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ed814: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ed817: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ed81a: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ed81d: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ed820: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4ed822: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4ed825: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ed829: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4ed82c: mov esi, eax */
  esi = eax;
/* 4ed82e: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 4ed831: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4ed833: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4ed836: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4ed839: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4ed83c: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4ed83f: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4ed842: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed843: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed846: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed847: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed870(void) {
  LOAD_REGS();
L_4ed870: /* 4ed870: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 4ed876: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ed87a: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 4ed87e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed87f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed880: mov edx, ecx */
  edx = ecx;
/* 4ed882: mov esi, eax */
  esi = eax;
/* 4ed884: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ed886: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ed888: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ed88a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ed88c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ed88f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ed892: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ed894: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ed897: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4ed89a: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4ed89c: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4ed89f: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 4ed8a2: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4ed8a4: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4ed8a7: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4ed8aa: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4ed8ad: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4ed8b0: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4ed8b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed8b4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed8b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed8b8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ed8e0(void) {
  LOAD_REGS();
L_4ed8e0: /* 4ed8e0: mov eax, ecx */
  eax = ecx;
/* 4ed8e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ed8e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed8e7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ed8e9: mov edx, eax */
  edx = eax;
/* 4ed8eb: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ed8ed: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ed8f0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ed8f3: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 4ed8f6: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 4ed8f9: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4ed8fc: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 4ed8ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed900: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed920(void) {
  LOAD_REGS();
L_4ed920: /* 4ed920: mov eax, ecx */
  eax = ecx;
/* 4ed922: ret  */
  esp += 4; SPILL(); return;
}

void f_4ed940(void) {
  LOAD_REGS();
L_4ed940: /* 4ed940: mov eax, ecx */
  eax = ecx;
/* 4ed942: xor ecx, ecx */
  ecx = 0;
/* 4ed944: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ed946: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ed949: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4ed94c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed94f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed970(void) {
  LOAD_REGS();
L_4ed970: /* 4ed970: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ed974: mov eax, ecx */
  eax = ecx;
/* 4ed976: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4ed978: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ed97c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4ed97f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4ed983: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4ed986: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ed98a: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed98d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ed9a0(void) {
  LOAD_REGS();
L_4ed9a0: /* 4ed9a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed9a1: mov eax, ecx */
  eax = ecx;
/* 4ed9a3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ed9a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ed9a8: mov edx, ecx */
  edx = ecx;
/* 4ed9aa: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4ed9ac: mov esi, eax */
  esi = eax;
/* 4ed9ae: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4ed9b0: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4ed9b3: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4ed9b6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4ed9b9: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4ed9bc: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4ed9bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ed9c0: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4ed9c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ed9c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ed9e0(void) {
  LOAD_REGS();
L_4ed9e0: /* 4ed9e0: mov eax, ecx */
  eax = ecx;
/* 4ed9e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ed9e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ed9e7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ed9e9: mov edx, eax */
  edx = eax;
/* 4ed9eb: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ed9ed: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ed9f0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ed9f3: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 4ed9f6: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 4ed9f9: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4ed9fc: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 4ed9ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eda00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4eda20(void) {
  LOAD_REGS();
L_4eda20: /* 4eda20: mov eax, ecx */
  eax = ecx;
/* 4eda22: ret  */
  esp += 4; SPILL(); return;
}

void f_4eda40(void) {
  LOAD_REGS();
L_4eda40: /* 4eda40: mov eax, ecx */
  eax = ecx;
/* 4eda42: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4eda46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eda47: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4eda49: mov edx, eax */
  edx = eax;
/* 4eda4b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4eda4d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4eda50: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4eda53: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4eda56: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4eda59: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4eda5d: mov cl, byte ptr [esp + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 4eda61: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4eda64: mov byte ptr [eax + 0x10], cl */
  W8((uint32_t)(eax + 0x10u), (ecx & 0xffu));
/* 4eda67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eda68: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4eda80(void) {
  LOAD_REGS();
L_4eda80: /* 4eda80: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4eda82: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4eda86: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4eda88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4eda8a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4eda8d: jp 0x4edac6 */
  if (pf) goto L_4edac6;
L_4eda8f: /* 4eda8f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4eda92: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4eda95: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4eda97: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4eda9a: jp 0x4edac6 */
  if (pf) goto L_4edac6;
L_4eda9c: /* 4eda9c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4eda9f: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 4edaa2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4edaa4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4edaa7: jp 0x4edac6 */
  if (pf) goto L_4edac6;
L_4edaa9: /* 4edaa9: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4edaac: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 4edaaf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4edab1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4edab4: jp 0x4edac6 */
  if (pf) goto L_4edac6;
L_4edab6: /* 4edab6: mov al, byte ptr [ecx + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x10u))) & 0xffu);
/* 4edab9: cmp al, byte ptr [edx + 0x10] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0x10u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4edabc: jne 0x4edac6 */
  if (!zf) goto L_4edac6;
L_4edabe: /* 4edabe: mov eax, 1 */
  eax = 0x1u;
/* 4edac3: ret 4 */
  esp += 8; SPILL(); return;
L_4edac6: /* 4edac6: xor eax, eax */
  eax = 0;
/* 4edac8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4edaf0(void) {
  LOAD_REGS();
L_4edaf0: /* 4edaf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edaf1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4edaf5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4edaf6: mov eax, ecx */
  eax = ecx;
/* 4edaf8: mov ecx, 5 */
  ecx = 0x5u;
/* 4edafd: mov edi, eax */
  edi = eax;
/* 4edaff: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4edb01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4edb02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edb03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4edb20(void) {
  LOAD_REGS();
L_4edb20: /* 4edb20: mov eax, ecx */
  eax = ecx;
/* 4edb22: ret  */
  esp += 4; SPILL(); return;
}

void f_4edb40(void) {
  LOAD_REGS();
L_4edb40: /* 4edb40: mov eax, ecx */
  eax = ecx;
/* 4edb42: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4edb46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edb47: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4edb49: mov edx, eax */
  edx = eax;
/* 4edb4b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4edb4d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edb50: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4edb53: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4edb56: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4edb59: xor ecx, ecx */
  ecx = 0;
/* 4edb5b: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4edb5e: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 4edb61: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 4edb66: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4edb69: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 4edb6c: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 4edb6f: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 4edb72: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 4edb75: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 4edb78: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 4edb7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edb7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4edb90(void) {
  LOAD_REGS();
L_4edb90: /* 4edb90: mov eax, ecx */
  eax = ecx;
/* 4edb92: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4edb96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edb97: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4edb99: mov edx, eax */
  edx = eax;
/* 4edb9b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4edb9d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edba0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4edba3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4edba6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4edba9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4edbad: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4edbaf: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 4edbb2: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4edbb4: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edbb7: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4edbba: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4edbbd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4edbc0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4edbc4: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4edbc6: lea edx, [eax + 0x18] */
  edx = (uint32_t)(eax + 0x18u);
/* 4edbc9: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4edbcb: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edbce: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4edbd1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4edbd4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4edbd7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4edbdb: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4edbdd: lea edx, [eax + 0x24] */
  edx = (uint32_t)(eax + 0x24u);
/* 4edbe0: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4edbe2: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edbe5: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4edbe8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4edbeb: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4edbee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edbef: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4edc20(void) {
  LOAD_REGS();
L_4edc20: /* 4edc20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edc21: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4edc25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4edc26: mov eax, ecx */
  eax = ecx;
/* 4edc28: mov ecx, 0xc */
  ecx = 0xcu;
/* 4edc2d: mov edi, eax */
  edi = eax;
/* 4edc2f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4edc31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4edc32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edc33: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4edc50(void) {
  LOAD_REGS();
L_4edc50: /* 4edc50: mov eax, ecx */
  eax = ecx;
/* 4edc52: ret  */
  esp += 4; SPILL(); return;
}

void f_4edc70(void) {
  LOAD_REGS();
L_4edc70: /* 4edc70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edc71: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4edc75: mov eax, ecx */
  eax = ecx;
/* 4edc77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4edc78: mov ecx, 0xc */
  ecx = 0xcu;
/* 4edc7d: mov edi, eax */
  edi = eax;
/* 4edc7f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4edc81: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 4edc85: lea edi, [eax + 0x30] */
  edi = (uint32_t)(eax + 0x30u);
/* 4edc88: mov ecx, 0xc */
  ecx = 0xcu;
/* 4edc8d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4edc8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4edc90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edc91: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4edcb0(void) {
  LOAD_REGS();
L_4edcb0: /* 4edcb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edcb1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4edcb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4edcb6: mov eax, ecx */
  eax = ecx;
/* 4edcb8: mov ecx, 0x18 */
  ecx = 0x18u;
/* 4edcbd: mov edi, eax */
  edi = eax;
/* 4edcbf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4edcc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4edcc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edcc3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4edce0(void) {
  LOAD_REGS();
L_4edce0: /* 4edce0: mov eax, ecx */
  eax = ecx;
/* 4edce2: ret  */
  esp += 4; SPILL(); return;
}

void f_4edd00(void) {
  LOAD_REGS();
L_4edd00: /* 4edd00: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4edd04: mov eax, ecx */
  eax = ecx;
/* 4edd06: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4edd0a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4edd0c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4edd10: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4edd13: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4edd16: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4edd30(void) {
  LOAD_REGS();
L_4edd30: /* 4edd30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4edd34: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 4edd37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edd38: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 4edd3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4edd3c: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 4edd3f: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4edd41: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 4edd44: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4edd46: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 4edd48: add edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4edd4a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4edd4e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4edd50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4edd51: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 4edd54: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4edd57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edd58: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4edd70(void) {
  LOAD_REGS();
L_4edd70: /* 4edd70: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 4edd73: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4edd77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edd78: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 4edd7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4edd7c: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 4edd7f: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4edd81: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edd84: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4edd86: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4edd88: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 4edd8a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4edd8e: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4edd90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4edd91: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 4edd94: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4edd96: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4edd99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edd9a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4eddb0(void) {
  LOAD_REGS();
L_4eddb0: /* 4eddb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4eddb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eddb2: mov esi, ecx */
  esi = ecx;
/* 4eddb4: fild dword ptr [esi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4eddb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4eddb8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 4eddbc: call 0x554f00 */
  esp -= 4; W32(esp, 0x4eddc1u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4eddc1: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4eddc4: mov edi, eax */
  edi = eax;
/* 4eddc6: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 4eddca: call 0x554f00 */
  esp -= 4; W32(esp, 0x4eddcfu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4eddcf: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* 4eddd1: mov ebx, eax */
  ebx = eax;
/* 4eddd3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 4eddd7: call 0x554f00 */
  esp -= 4; W32(esp, 0x4edddcu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4edddc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4edde0: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 4edde3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4edde4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edde5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4edde7: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 4eddea: mov eax, ecx */
  eax = ecx;
/* 4eddec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4edded: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ede00(void) {
  LOAD_REGS();
L_4ede00: /* 4ede00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ede01: mov esi, ecx */
  esi = ecx;
/* 4ede03: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* 4ede05: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 4ede09: call 0x554f00 */
  esp -= 4; W32(esp, 0x4ede0eu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4ede0e: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4ede11: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4ede13: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 4ede17: call 0x554f00 */
  esp -= 4; W32(esp, 0x4ede1cu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4ede1c: fild dword ptr [esi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4ede1f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4ede22: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 4ede26: call 0x554f00 */
  esp -= 4; W32(esp, 0x4ede2bu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4ede2b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4ede2e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4ede30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ede34: mov ecx, eax */
  ecx = eax;
/* 4ede36: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4ede38: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 4ede3b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4ede3e: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 4ede41: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4ede44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ede45: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ede70(void) {
  LOAD_REGS();
L_4ede70: /* 4ede70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ede74: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ede76: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ede78: jne 0x4ede92 */
  if (!zf) goto L_4ede92;
L_4ede7a: /* 4ede7a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4ede7d: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ede80: jne 0x4ede92 */
  if (!zf) goto L_4ede92;
L_4ede82: /* 4ede82: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ede85: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4ede88: jne 0x4ede92 */
  if (!zf) goto L_4ede92;
L_4ede8a: /* 4ede8a: mov eax, 1 */
  eax = 0x1u;
/* 4ede8f: ret 4 */
  esp += 8; SPILL(); return;
L_4ede92: /* 4ede92: xor eax, eax */
  eax = 0;
/* 4ede94: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4edeb0(void) {
  LOAD_REGS();
L_4edeb0: /* 4edeb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4edeb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4edeb6: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4edeb8: jne 0x4edecf */
  if (!zf) goto L_4edecf;
L_4edeba: /* 4edeba: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4edebd: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4edec0: jne 0x4edecf */
  if (!zf) goto L_4edecf;
L_4edec2: /* 4edec2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4edec5: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4edec8: jne 0x4edecf */
  if (!zf) goto L_4edecf;
L_4edeca: /* 4edeca: xor eax, eax */
  eax = 0;
/* 4edecc: ret 4 */
  esp += 8; SPILL(); return;
L_4edecf: /* 4edecf: mov eax, 1 */
  eax = 0x1u;
/* 4eded4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4edef0(void) {
  LOAD_REGS();
L_4edef0: /* 4edef0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4edef4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4edef6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edef7: add dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 4edef9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4edefc: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edeff: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4edf01: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 4edf04: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 4edf07: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 4edf0a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4edf0c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4edf10: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4edf13: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4edf15: mov edx, eax */
  edx = eax;
/* 4edf17: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4edf19: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edf1c: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4edf1f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4edf22: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4edf25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edf26: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4edf40(void) {
  LOAD_REGS();
L_4edf40: /* 4edf40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4edf44: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4edf46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edf47: sub dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 4edf49: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4edf4c: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edf4f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4edf51: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 4edf54: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 4edf57: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 4edf5a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4edf5c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4edf60: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4edf63: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4edf65: mov edx, eax */
  edx = eax;
/* 4edf67: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4edf69: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edf6c: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4edf6f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4edf72: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4edf75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edf76: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4edf90(void) {
  LOAD_REGS();
L_4edf90: /* 4edf90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4edf92: mov eax, 0xffff */
  eax = 0xffffu;
/* 4edf97: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4edf99: jne 0x4edfab */
  if (!zf) goto L_4edfab;
L_4edf9b: /* 4edf9b: test dword ptr [ecx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4edf9e: jne 0x4edfab */
  if (!zf) goto L_4edfab;
L_4edfa0: /* 4edfa0: test dword ptr [ecx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4edfa3: jne 0x4edfab */
  if (!zf) goto L_4edfab;
L_4edfa5: /* 4edfa5: mov eax, 1 */
  eax = 0x1u;
/* 4edfaa: ret  */
  esp += 4; SPILL(); return;
L_4edfab: /* 4edfab: xor eax, eax */
  eax = 0;
/* 4edfad: ret  */
  esp += 4; SPILL(); return;
}

void f_4edfc0(void) {
  LOAD_REGS();
L_4edfc0: /* 4edfc0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4edfc3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4edfc7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4edfc9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4edfcd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4edfd0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4edfd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4edfd5: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4edfd7: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4edfd9: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 4edfdc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4edfde: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4edfe2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4edfe5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 4edfe7: mov edx, eax */
  edx = eax;
/* 4edfe9: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4edfeb: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4edfee: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4edff1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4edff4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4edff7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4edff8: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ee010(void) {
  LOAD_REGS();
L_4ee010: /* 4ee010: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ee014: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4ee017: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4ee019: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ee01d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4ee01f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4ee022: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee025: jge 0x4ee044 */
  if ((sf == of)) goto L_4ee044;
L_4ee027: /* 4ee027: cmp eax, 0xffff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ee02c: jle 0x4ee03d */
  if ((zf || sf != of)) goto L_4ee03d;
L_4ee02e: /* 4ee02e: lea esi, [edx + 0x4000] */
  esi = (uint32_t)(edx + 0x4000u);
/* 4ee034: movzx esi, si */
  esi = (uint32_t)((esi & 0xffffu));
/* 4ee037: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 4ee039: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ee03b: jg 0x4ee062 */
  if ((!zf && sf == of)) goto L_4ee062;
L_4ee03d: /* 4ee03d: mov eax, 0xc000 */
  eax = 0xc000u;
/* 4ee042: jmp 0x4ee064 */
  goto L_4ee064;
L_4ee044: /* 4ee044: jle 0x4ee062 */
  if ((zf || sf != of)) goto L_4ee062;
L_4ee046: /* 4ee046: cmp eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ee04b: jge 0x4ee05b */
  if ((sf == of)) goto L_4ee05b;
L_4ee04d: /* 4ee04d: mov esi, 0x4000 */
  esi = 0x4000u;
/* 4ee052: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4ee054: movzx esi, si */
  esi = (uint32_t)((esi & 0xffffu));
/* 4ee057: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ee059: jl 0x4ee062 */
  if ((sf != of)) goto L_4ee062;
L_4ee05b: /* 4ee05b: mov eax, 0x4000 */
  eax = 0x4000u;
/* 4ee060: jmp 0x4ee064 */
  goto L_4ee064;
L_4ee062: /* 4ee062: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_4ee064: /* 4ee064: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* 4ee067: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4ee06b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4ee06d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4ee06f: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 4ee072: jge 0x4ee091 */
  if ((sf == of)) goto L_4ee091;
L_4ee074: /* 4ee074: cmp eax, 0xffff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ee079: jle 0x4ee08a */
  if ((zf || sf != of)) goto L_4ee08a;
L_4ee07b: /* 4ee07b: lea esi, [edx + 0x4000] */
  esi = (uint32_t)(edx + 0x4000u);
/* 4ee081: movzx esi, si */
  esi = (uint32_t)((esi & 0xffffu));
/* 4ee084: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 4ee086: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ee088: jg 0x4ee0af */
  if ((!zf && sf == of)) goto L_4ee0af;
L_4ee08a: /* 4ee08a: mov eax, 0xc000 */
  eax = 0xc000u;
/* 4ee08f: jmp 0x4ee0b1 */
  goto L_4ee0b1;
L_4ee091: /* 4ee091: jle 0x4ee0af */
  if ((zf || sf != of)) goto L_4ee0af;
L_4ee093: /* 4ee093: cmp eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ee098: jge 0x4ee0a8 */
  if ((sf == of)) goto L_4ee0a8;
L_4ee09a: /* 4ee09a: mov esi, 0x4000 */
  esi = 0x4000u;
/* 4ee09f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4ee0a1: movzx esi, si */
  esi = (uint32_t)((esi & 0xffffu));
/* 4ee0a4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ee0a6: jl 0x4ee0af */
  if ((sf != of)) goto L_4ee0af;
L_4ee0a8: /* 4ee0a8: mov eax, 0x4000 */
  eax = 0x4000u;
/* 4ee0ad: jmp 0x4ee0b1 */
  goto L_4ee0b1;
L_4ee0af: /* 4ee0af: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_4ee0b1: /* 4ee0b1: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 4ee0b4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4ee0b7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ee0b9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ee0bd: mov edx, eax */
  edx = eax;
/* 4ee0bf: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ee0c1: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ee0c4: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ee0c7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ee0ca: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ee0cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ee0ce: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ee120(void) {
  LOAD_REGS();
L_4ee120: /* 4ee120: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ee123: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee124: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ee125: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4ee129: fild dword ptr [edi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 4ee12c: mov esi, ecx */
  esi = ecx;
/* 4ee12e: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4ee132: fild dword ptr [esi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4ee135: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ee139: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ee13f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee141: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee144: jnp 0x4ee16e */
  if (!pf) goto L_4ee16e;
L_4ee146: /* 4ee146: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ee14a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ee14b: fmul qword ptr [0x569470] */
  ST0 = ST0 * (F64((uint32_t)(0x569470u)));
/* 4ee151: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ee153: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 4ee157: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ee15a: call 0x4e392c */
  esp -= 4; W32(esp, 0x4ee15fu); SPILL(); f_4e392c(); if (g_unwind) return; RELOAD();
/* 4ee15f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4ee163: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4ee167: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ee16a: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
L_4ee16e: /* 4ee16e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4ee172: fild dword ptr [edi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 4ee175: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4ee179: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4ee17c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ee180: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ee186: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee188: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee18b: jnp 0x4ee1b5 */
  if (!pf) goto L_4ee1b5;
L_4ee18d: /* 4ee18d: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ee191: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ee192: fmul qword ptr [0x569470] */
  ST0 = ST0 * (F64((uint32_t)(0x569470u)));
/* 4ee198: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ee19a: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 4ee19e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ee1a1: call 0x4e392c */
  esp -= 4; W32(esp, 0x4ee1a6u); SPILL(); f_4e392c(); if (g_unwind) return; RELOAD();
/* 4ee1a6: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 4ee1aa: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ee1ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ee1b1: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
L_4ee1b5: /* 4ee1b5: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4ee1b9: fild dword ptr [edi] */
  { double v = (double)(int32_t)R32((uint32_t)(edi)); FPUSH(v); }
/* 4ee1bb: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4ee1bf: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* 4ee1c1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ee1c5: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4ee1cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee1cd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee1d0: jnp 0x4ee1fa */
  if (!pf) goto L_4ee1fa;
L_4ee1d2: /* 4ee1d2: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4ee1d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ee1d7: fmul qword ptr [0x569470] */
  ST0 = ST0 * (F64((uint32_t)(0x569470u)));
/* 4ee1dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ee1df: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 4ee1e3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ee1e6: call 0x4e392c */
  esp -= 4; W32(esp, 0x4ee1ebu); SPILL(); f_4e392c(); if (g_unwind) return; RELOAD();
/* 4ee1eb: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4ee1ef: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4ee1f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ee1f6: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
L_4ee1fa: /* 4ee1fa: call 0x554f00 */
  esp -= 4; W32(esp, 0x4ee1ffu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4ee1ff: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ee203: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 4ee207: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4ee209: call 0x554f00 */
  esp -= 4; W32(esp, 0x4ee20eu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4ee20e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ee212: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4ee215: call 0x554f00 */
  esp -= 4; W32(esp, 0x4ee21au); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4ee21a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4ee21d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ee21e: mov eax, esi */
  eax = esi;
/* 4ee220: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ee221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ee224: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee280(void) {
  LOAD_REGS();
L_4ee280: /* 4ee280: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 4ee283: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4ee284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee285: mov esi, 0xffff */
  esi = 0xffffu;
/* 4ee28a: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x4ee28a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4ee28c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4ee28f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ee290: mov edi, 0xffff */
  edi = 0xffffu;
/* 4ee295: mov esi, edx */
  esi = edx;
/* 4ee297: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4ee298: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x4ee298);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4ee29a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4ee29c: mov ecx, 0xffff */
  ecx = 0xffffu;
/* 4ee2a1: mov edi, edx */
  edi = edx;
/* 4ee2a3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4ee2a4: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x4ee2a4);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4ee2a6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ee2aa: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 4ee2ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ee2ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 4ee2b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ee2b2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee2b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee2d0(void) {
  LOAD_REGS();
L_4ee2d0: /* 4ee2d0: mov eax, ecx */
  eax = ecx;
/* 4ee2d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ee2d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee2d7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ee2d9: mov edx, eax */
  edx = eax;
/* 4ee2db: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ee2dd: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ee2e0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ee2e3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ee2e6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ee2e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ee2ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee300(void) {
  LOAD_REGS();
L_4ee300: /* 4ee300: mov eax, ecx */
  eax = ecx;
/* 4ee302: ret  */
  esp += 4; SPILL(); return;
}

void f_4ee320(void) {
  LOAD_REGS();
L_4ee320: /* 4ee320: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ee324: mov eax, ecx */
  eax = ecx;
/* 4ee326: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4ee328: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ee32c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee32d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4ee330: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4ee334: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ee335: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4ee338: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 4ee33b: mov ecx, 0xc */
  ecx = 0xcu;
/* 4ee340: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* 4ee344: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4ee346: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ee347: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ee348: ret 0x3c */
  esp += 64; SPILL(); return;
}

void f_4ee360(void) {
  LOAD_REGS();
L_4ee360: /* 4ee360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee361: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4ee365: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ee366: mov eax, ecx */
  eax = ecx;
/* 4ee368: mov ecx, 0xf */
  ecx = 0xfu;
/* 4ee36d: mov edi, eax */
  edi = eax;
/* 4ee36f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4ee371: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ee372: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ee373: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee390(void) {
  LOAD_REGS();
L_4ee390: /* 4ee390: mov eax, ecx */
  eax = ecx;
/* 4ee392: ret  */
  esp += 4; SPILL(); return;
}

void f_4ee3b0(void) {
  LOAD_REGS();
L_4ee3b0: /* 4ee3b0: mov eax, ecx */
  eax = ecx;
/* 4ee3b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ee3b6: mov edx, ecx */
  edx = ecx;
/* 4ee3b8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ee3ba: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4ee3bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee3d0(void) {
  LOAD_REGS();
L_4ee3d0: /* 4ee3d0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee3d2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ee3d6: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4ee3d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee3da: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee3dd: jp 0x4ee3f4 */
  if (pf) goto L_4ee3f4;
L_4ee3df: /* 4ee3df: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee3e2: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4ee3e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee3e7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee3ea: jp 0x4ee3f4 */
  if (pf) goto L_4ee3f4;
L_4ee3ec: /* 4ee3ec: mov eax, 1 */
  eax = 0x1u;
/* 4ee3f1: ret 4 */
  esp += 8; SPILL(); return;
L_4ee3f4: /* 4ee3f4: xor eax, eax */
  eax = 0;
/* 4ee3f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee410(void) {
  LOAD_REGS();
L_4ee410: /* 4ee410: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee412: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ee416: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4ee418: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee41a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee41d: jp 0x4ee431 */
  if (pf) goto L_4ee431;
L_4ee41f: /* 4ee41f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee422: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4ee425: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee427: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee42a: jp 0x4ee431 */
  if (pf) goto L_4ee431;
L_4ee42c: /* 4ee42c: xor eax, eax */
  eax = 0;
/* 4ee42e: ret 4 */
  esp += 8; SPILL(); return;
L_4ee431: /* 4ee431: mov eax, 1 */
  eax = 0x1u;
/* 4ee436: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee450(void) {
  LOAD_REGS();
L_4ee450: /* 4ee450: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ee454: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ee456: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4ee458: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ee45a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee45c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ee45f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ee463: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4ee466: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ee469: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee46b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ee46e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ee471: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee490(void) {
  LOAD_REGS();
L_4ee490: /* 4ee490: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee492: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ee496: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 4ee498: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ee49a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee49c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee49f: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 4ee4a2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ee4a6: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ee4a9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee4ab: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ee4ae: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ee4b1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee4d0(void) {
  LOAD_REGS();
L_4ee4d0: /* 4ee4d0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ee4d4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ee4d8: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4ee4da: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ee4dc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee4de: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ee4e2: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4ee4e5: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ee4e8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee4ea: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ee4ed: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ee4f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee510(void) {
  LOAD_REGS();
L_4ee510: /* 4ee510: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee512: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ee516: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4ee51a: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ee51c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee51e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee521: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4ee525: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ee528: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee52a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ee52d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ee530: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee550(void) {
  LOAD_REGS();
L_4ee550: /* 4ee550: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ee554: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ee558: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ee55a: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ee55c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee55e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ee562: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ee565: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ee568: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee56a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ee56d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ee570: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee590(void) {
  LOAD_REGS();
L_4ee590: /* 4ee590: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ee594: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ee598: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 4ee59e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ee5a0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ee5a2: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ee5a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee5a6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ee5a9: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ee5ac: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee5ae: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ee5b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ee5b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee5d0(void) {
  LOAD_REGS();
L_4ee5d0: /* 4ee5d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ee5d4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ee5d6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ee5d8: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ee5da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee5dc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ee5df: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ee5e3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ee5e6: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ee5e9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee5eb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ee5ee: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ee5f1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee610(void) {
  LOAD_REGS();
L_4ee610: /* 4ee610: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee612: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ee616: fdiv dword ptr [eax] */
  ST0 = ST0 / (F32((uint32_t)(eax)));
/* 4ee618: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4ee61a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee61d: fdiv dword ptr [eax + 4] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x4u)));
/* 4ee620: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee622: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ee626: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4ee629: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee62b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ee62e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ee631: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee650(void) {
  LOAD_REGS();
L_4ee650: /* 4ee650: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee653: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4ee655: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ee65b: ret  */
  esp += 4; SPILL(); return;
}

void f_4ee670(void) {
  LOAD_REGS();
L_4ee670: /* 4ee670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee671: mov esi, ecx */
  esi = ecx;
/* 4ee673: call 0x4e1fc3 */
  esp -= 4; W32(esp, 0x4ee678u); SPILL(); f_4e1fc3(); if (g_unwind) return; RELOAD();
/* 4ee678: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4ee67a: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 4ee67d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 4ee67f: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 4ee682: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ee683: ret  */
  esp += 4; SPILL(); return;
}

void f_4ee6a0(void) {
  LOAD_REGS();
L_4ee6a0: /* 4ee6a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee6a1: mov esi, ecx */
  esi = ecx;
/* 4ee6a3: call 0x4e37ba */
  esp -= 4; W32(esp, 0x4ee6a8u); SPILL(); f_4e37ba(); if (g_unwind) return; RELOAD();
/* 4ee6a8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4ee6aa: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 4ee6ad: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 4ee6af: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 4ee6b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ee6b3: ret  */
  esp += 4; SPILL(); return;
}

void f_4ee6d0(void) {
  LOAD_REGS();
L_4ee6d0: /* 4ee6d0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee6d2: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4ee6d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee6da: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee6dd: jp 0x4ee6f5 */
  if (pf) goto L_4ee6f5;
L_4ee6df: /* 4ee6df: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee6e2: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4ee6e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee6ea: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee6ed: jp 0x4ee6f5 */
  if (pf) goto L_4ee6f5;
L_4ee6ef: /* 4ee6ef: mov eax, 1 */
  eax = 0x1u;
/* 4ee6f4: ret  */
  esp += 4; SPILL(); return;
L_4ee6f5: /* 4ee6f5: xor eax, eax */
  eax = 0;
/* 4ee6f7: ret  */
  esp += 4; SPILL(); return;
}

void f_4ee710(void) {
  LOAD_REGS();
L_4ee710: /* 4ee710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ee714: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4ee717: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee730(void) {
  LOAD_REGS();
L_4ee730: /* 4ee730: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee732: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4ee738: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee73a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ee73d: jne 0x4ee745 */
  if (!zf) goto L_4ee745;
L_4ee73f: /* 4ee73f: mov eax, 1 */
  eax = 0x1u;
/* 4ee744: ret  */
  esp += 4; SPILL(); return;
L_4ee745: /* 4ee745: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee747: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4ee74d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee74f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee752: jnp 0x4ee764 */
  if (!pf) goto L_4ee764;
L_4ee754: /* 4ee754: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee757: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4ee75d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee75f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ee762: je 0x4ee73f */
  if (zf) goto L_4ee73f;
L_4ee764: /* 4ee764: xor eax, eax */
  eax = 0;
/* 4ee766: ret  */
  esp += 4; SPILL(); return;
}

void f_4ee780(void) {
  LOAD_REGS();
L_4ee780: /* 4ee780: mov eax, ecx */
  eax = ecx;
/* 4ee782: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ee786: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ee788: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ee78a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ee78d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ee790: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee7b0(void) {
  LOAD_REGS();
L_4ee7b0: /* 4ee7b0: mov eax, ecx */
  eax = ecx;
/* 4ee7b2: ret  */
  esp += 4; SPILL(); return;
}

void f_4ee7d0(void) {
  LOAD_REGS();
L_4ee7d0: /* 4ee7d0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ee7d4: mov eax, ecx */
  eax = ecx;
/* 4ee7d6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ee7da: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ee7dc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4ee7e0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4ee7e3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4ee7e7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4ee7ea: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4ee7ee: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4ee7f1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4ee7f5: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4ee7f8: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 4ee7fb: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_4ee810(void) {
  LOAD_REGS();
L_4ee810: /* 4ee810: mov eax, ecx */
  eax = ecx;
/* 4ee812: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ee816: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ee818: mov edx, ecx */
  edx = ecx;
/* 4ee81a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ee81e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4ee821: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4ee824: mov edx, ecx */
  edx = ecx;
/* 4ee826: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4ee82a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4ee82d: mov edx, ecx */
  edx = ecx;
/* 4ee82f: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4ee832: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 4ee835: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4ee850(void) {
  LOAD_REGS();
L_4ee850: /* 4ee850: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee852: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ee856: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4ee858: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee85a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee85d: jp 0x4ee8a8 */
  if (pf) goto L_4ee8a8;
L_4ee85f: /* 4ee85f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee862: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4ee865: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee867: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee86a: jp 0x4ee8a8 */
  if (pf) goto L_4ee8a8;
L_4ee86c: /* 4ee86c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ee86f: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 4ee872: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee874: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee877: jp 0x4ee8a8 */
  if (pf) goto L_4ee8a8;
L_4ee879: /* 4ee879: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ee87c: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 4ee87f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee881: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee884: jp 0x4ee8a8 */
  if (pf) goto L_4ee8a8;
L_4ee886: /* 4ee886: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4ee889: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 4ee88c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee88e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee891: jp 0x4ee8a8 */
  if (pf) goto L_4ee8a8;
L_4ee893: /* 4ee893: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4ee896: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 4ee899: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee89b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee89e: jp 0x4ee8a8 */
  if (pf) goto L_4ee8a8;
L_4ee8a0: /* 4ee8a0: mov eax, 1 */
  eax = 0x1u;
/* 4ee8a5: ret 4 */
  esp += 8; SPILL(); return;
L_4ee8a8: /* 4ee8a8: xor eax, eax */
  eax = 0;
/* 4ee8aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee8d0(void) {
  LOAD_REGS();
L_4ee8d0: /* 4ee8d0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ee8d2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ee8d6: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4ee8d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee8da: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee8dd: jp 0x4ee925 */
  if (pf) goto L_4ee925;
L_4ee8df: /* 4ee8df: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ee8e2: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4ee8e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee8e7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee8ea: jp 0x4ee925 */
  if (pf) goto L_4ee925;
L_4ee8ec: /* 4ee8ec: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ee8ef: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 4ee8f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee8f4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee8f7: jp 0x4ee925 */
  if (pf) goto L_4ee925;
L_4ee8f9: /* 4ee8f9: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ee8fc: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 4ee8ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee901: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee904: jp 0x4ee925 */
  if (pf) goto L_4ee925;
L_4ee906: /* 4ee906: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4ee909: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 4ee90c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee90e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee911: jp 0x4ee925 */
  if (pf) goto L_4ee925;
L_4ee913: /* 4ee913: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4ee916: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 4ee919: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ee91b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ee91e: jp 0x4ee925 */
  if (pf) goto L_4ee925;
L_4ee920: /* 4ee920: xor eax, eax */
  eax = 0;
/* 4ee922: ret 4 */
  esp += 8; SPILL(); return;
L_4ee925: /* 4ee925: mov eax, 1 */
  eax = 0x1u;
/* 4ee92a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ee950(void) {
  LOAD_REGS();
L_4ee950: /* 4ee950: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ee954: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ee956: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee957: mov esi, ecx */
  esi = ecx;
/* 4ee959: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 4ee95b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ee95c: mov ecx, 6 */
  ecx = 0x6u;
/* 4ee961: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4ee963: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ee966: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 4ee969: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4ee96c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4ee96f: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 4ee972: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4ee975: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4ee978: fadd dword ptr [esi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xcu)));
/* 4ee97b: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4ee97e: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 4ee981: fadd dword ptr [esi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x10u)));
/* 4ee984: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 4ee987: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 4ee98a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4ee98e: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 4ee991: mov edi, eax */
  edi = eax;
/* 4ee993: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 4ee996: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4ee998: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ee999: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ee99a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ee9c0(void) {
  LOAD_REGS();
L_4ee9c0: /* 4ee9c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ee9c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ee9c5: mov esi, ecx */
  esi = ecx;
/* 4ee9c7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4ee9c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ee9ca: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 4ee9cc: mov ecx, 6 */
  ecx = 0x6u;
/* 4ee9d1: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4ee9d3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4ee9d6: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 4ee9d9: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4ee9dc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4ee9df: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 4ee9e2: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4ee9e5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4ee9e8: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4ee9eb: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4ee9ee: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 4ee9f1: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* 4ee9f4: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 4ee9f7: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 4ee9fa: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* 4ee9fd: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4eea01: mov edi, eax */
  edi = eax;
/* 4eea03: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 4eea06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4eea08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4eea09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eea0a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4eea30(void) {
  LOAD_REGS();
L_4eea30: /* 4eea30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4eea34: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4eea36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eea37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eea39: mov esi, ecx */
  esi = ecx;
/* 4eea3b: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 4eea3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4eea3e: mov ecx, 6 */
  ecx = 0x6u;
/* 4eea43: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4eea45: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 4eea48: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4eea4b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4eea4e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eea50: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 4eea53: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4eea56: fadd dword ptr [esi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xcu)));
/* 4eea59: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4eea5c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4eea5f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4eea63: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eea65: mov edi, eax */
  edi = eax;
/* 4eea67: fadd dword ptr [esi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x10u)));
/* 4eea6a: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 4eea6d: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 4eea70: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 4eea73: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4eea75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4eea76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eea77: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4eeaa0(void) {
  LOAD_REGS();
L_4eeaa0: /* 4eeaa0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4eeaa4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4eeaa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eeaa7: mov esi, ecx */
  esi = ecx;
/* 4eeaa9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4eeaab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4eeaac: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4eeaae: mov ecx, 6 */
  ecx = 0x6u;
/* 4eeab3: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4eeab5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4eeab8: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4eeaba: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4eeabd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4eeabf: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4eeac2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4eeac5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4eeac7: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4eeaca: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4eeacd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4eeacf: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4eead2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4eead4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4eead7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4eeadb: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 4eeade: mov edi, eax */
  edi = eax;
/* 4eeae0: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4eeae2: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 4eeae5: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 4eeae8: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4eeaea: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 4eeaed: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4eeaef: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4eeaf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4eeaf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eeaf3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4eeb20(void) {
  LOAD_REGS();
L_4eeb20: /* 4eeb20: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4eeb24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eeb25: mov esi, ecx */
  esi = ecx;
/* 4eeb27: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4eeb29: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4eeb2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4eeb2e: mov ecx, 6 */
  ecx = 0x6u;
/* 4eeb33: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4eeb35: mov edi, eax */
  edi = eax;
/* 4eeb37: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4eeb3b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4eeb3e: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4eeb41: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4eeb45: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4eeb48: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4eeb4b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4eeb4f: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4eeb52: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4eeb55: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4eeb59: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4eeb5c: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 4eeb5f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4eeb63: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 4eeb66: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 4eeb69: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4eeb6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4eeb6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eeb6d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4eeb90(void) {
  LOAD_REGS();
L_4eeb90: /* 4eeb90: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4eeb94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eeb95: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 4eeb9b: mov esi, ecx */
  esi = ecx;
/* 4eeb9d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4eeba1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4eeba2: mov ecx, 6 */
  ecx = 0x6u;
/* 4eeba7: mov edi, eax */
  edi = eax;
/* 4eeba9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eebab: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4eebad: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4eebaf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eebb1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4eebb4: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4eebb7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eebb9: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4eebbc: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4eebbf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eebc1: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4eebc4: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4eebc7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eebc9: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4eebcc: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 4eebcf: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 4eebd2: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 4eebd5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4eebd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4eebd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eebd9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4eec00(void) {
  LOAD_REGS();
L_4eec00: /* 4eec00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4eec04: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4eec06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eec07: mov esi, ecx */
  esi = ecx;
/* 4eec09: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4eec0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4eec0c: mov ecx, 6 */
  ecx = 0x6u;
/* 4eec11: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4eec13: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4eec16: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4eec19: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4eec1c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4eec1f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4eec22: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4eec25: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4eec28: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4eec2b: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4eec2e: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 4eec31: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4eec34: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 4eec37: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 4eec3a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4eec3e: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 4eec41: mov edi, eax */
  edi = eax;
/* 4eec43: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 4eec46: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4eec48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4eec49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eec4a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4eec70(void) {
  LOAD_REGS();
L_4eec70: /* 4eec70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4eec74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eec75: mov esi, ecx */
  esi = ecx;
/* 4eec77: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4eec79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4eec7a: fdiv dword ptr [eax] */
  ST0 = ST0 / (F32((uint32_t)(eax)));
/* 4eec7c: mov ecx, 6 */
  ecx = 0x6u;
/* 4eec81: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4eec83: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4eec86: fdiv dword ptr [eax + 4] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x4u)));
/* 4eec89: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4eec8c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4eec8f: fdiv dword ptr [eax + 8] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x8u)));
/* 4eec92: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4eec95: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4eec98: fdiv dword ptr [eax + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0xcu)));
/* 4eec9b: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4eec9e: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 4eeca1: fdiv dword ptr [eax + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x10u)));
/* 4eeca4: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 4eeca7: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 4eecaa: fdiv dword ptr [eax + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x14u)));
/* 4eecad: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4eecb1: mov edi, eax */
  edi = eax;
/* 4eecb3: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 4eecb6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4eecb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4eecb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eecba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4eece0(void) {
  LOAD_REGS();
L_4eece0: /* 4eece0: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4eece3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4eece7: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 4eecea: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4eecf0: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4eecf3: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4eecf6: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4eecfc: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4eecff: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4eed01: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4eed07: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4eed09: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4eed0c: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4eed0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4eed30(void) {
  LOAD_REGS();
L_4eed30: /* 4eed30: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4eed33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eed34: mov esi, ecx */
  esi = ecx;
/* 4eed36: call 0x4e1fc3 */
  esp -= 4; W32(esp, 0x4eed3bu); SPILL(); f_4e1fc3(); if (g_unwind) return; RELOAD();
/* 4eed3b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4eed3e: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 4eed41: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 4eed43: fadd dword ptr [esi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xcu)));
/* 4eed46: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4eed4a: call 0x4e1fc3 */
  esp -= 4; W32(esp, 0x4eed4fu); SPILL(); f_4e1fc3(); if (g_unwind) return; RELOAD();
/* 4eed4f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4eed51: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 4eed54: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 4eed56: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 4eed59: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4eed5d: call 0x4e1fc3 */
  esp -= 4; W32(esp, 0x4eed62u); SPILL(); f_4e1fc3(); if (g_unwind) return; RELOAD();
/* 4eed62: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 4eed65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4eed69: fsub dword ptr [esi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x14u)));
/* 4eed6c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4eed70: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 4eed72: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 4eed75: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4eed78: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4eed7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eed7d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4eed7f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4eed82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4eed85: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4eedb0(void) {
  LOAD_REGS();
L_4eedb0: /* 4eedb0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4eedb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eedb4: mov esi, ecx */
  esi = ecx;
/* 4eedb6: call 0x4e37ba */
  esp -= 4; W32(esp, 0x4eedbbu); SPILL(); f_4e37ba(); if (g_unwind) return; RELOAD();
/* 4eedbb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4eedbe: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 4eedc1: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 4eedc3: fadd dword ptr [esi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xcu)));
/* 4eedc6: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4eedca: call 0x4e37ba */
  esp -= 4; W32(esp, 0x4eedcfu); SPILL(); f_4e37ba(); if (g_unwind) return; RELOAD();
/* 4eedcf: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4eedd1: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 4eedd4: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 4eedd6: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 4eedd9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4eeddd: call 0x4e37ba */
  esp -= 4; W32(esp, 0x4eede2u); SPILL(); f_4e37ba(); if (g_unwind) return; RELOAD();
/* 4eede2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 4eede5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4eede9: fsub dword ptr [esi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x14u)));
/* 4eedec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4eedf0: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 4eedf2: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 4eedf5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4eedf8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4eedfc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eedfd: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4eedff: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4eee02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4eee05: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4eee30(void) {
  LOAD_REGS();
L_4eee30: /* 4eee30: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4eee32: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4eee38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4eee3a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4eee3d: jp 0x4eee95 */
  if (pf) goto L_4eee95;
L_4eee3f: /* 4eee3f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4eee42: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4eee48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4eee4a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4eee4d: jp 0x4eee95 */
  if (pf) goto L_4eee95;
L_4eee4f: /* 4eee4f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4eee52: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4eee58: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4eee5a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4eee5d: jp 0x4eee95 */
  if (pf) goto L_4eee95;
L_4eee5f: /* 4eee5f: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4eee62: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4eee68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4eee6a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4eee6d: jp 0x4eee95 */
  if (pf) goto L_4eee95;
L_4eee6f: /* 4eee6f: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4eee72: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4eee78: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4eee7a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4eee7d: jp 0x4eee95 */
  if (pf) goto L_4eee95;
L_4eee7f: /* 4eee7f: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4eee82: fcomp qword ptr [0x5694c8] */
  fpu_com(ST0, F64((uint32_t)(0x5694c8u)));
  FPOP();
/* 4eee88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4eee8a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4eee8d: jp 0x4eee95 */
  if (pf) goto L_4eee95;
L_4eee8f: /* 4eee8f: mov eax, 1 */
  eax = 0x1u;
/* 4eee94: ret  */
  esp += 4; SPILL(); return;
L_4eee95: /* 4eee95: xor eax, eax */
  eax = 0;
/* 4eee97: ret  */
  esp += 4; SPILL(); return;
}

void f_4eeec0(void) {
  LOAD_REGS();
L_4eeec0: /* 4eeec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4eeec4: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 4eeec7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4eeee0(void) {
  LOAD_REGS();
L_4eeee0: /* 4eeee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eeee1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4eeee5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4eeee6: mov eax, ecx */
  eax = ecx;
/* 4eeee8: mov ecx, 6 */
  ecx = 0x6u;
/* 4eeeed: mov edi, eax */
  edi = eax;
/* 4eeeef: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4eeef1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4eeef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eeef3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4eef10(void) {
  LOAD_REGS();
L_4eef10: /* 4eef10: mov eax, ecx */
  eax = ecx;
/* 4eef12: ret  */
  esp += 4; SPILL(); return;
}

void f_4eef30(void) {
  LOAD_REGS();
L_4eef30: /* 4eef30: mov eax, ecx */
  eax = ecx;
/* 4eef32: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4eef36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eef37: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4eef39: mov edx, eax */
  edx = eax;
/* 4eef3b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4eef3d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4eef40: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4eef43: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4eef46: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4eef49: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4eef4d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4eef4f: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 4eef52: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4eef54: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4eef57: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4eef5a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4eef5d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4eef60: mov byte ptr [eax + 0x18], 1 */
  W8((uint32_t)(eax + 0x18u), 0x1u);
/* 4eef64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4eef65: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4eef80(void) {
  LOAD_REGS();
L_4eef80: /* 4eef80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4eef84: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4eef87: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4eef8a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4eefa0(void) {
  LOAD_REGS();
L_4eefa0: /* 4eefa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4eefa4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4eefa7: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4eefaa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4eefc0(void) {
  LOAD_REGS();
L_4eefc0: /* 4eefc0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4eefc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4eefc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4eefc5: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 4eefc8: mov edi, eax */
  edi = eax;
/* 4eefca: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 4eefd2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4eefd6: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 4eefd8: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 4eefe0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4eefe4: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 4eefe7: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4eefef: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 4eeff3: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 4eeff6: mov edi, ecx */
  edi = ecx;
/* 4eeff8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 4eeffa: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 4eeffd: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 4ef000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ef001: mov byte ptr [ecx + 0x18], 0 */
  W8((uint32_t)(ecx + 0x18u), 0x0u);
/* 4ef005: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef006: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef009: ret  */
  esp += 4; SPILL(); return;
}

void f_4ef030(void) {
  LOAD_REGS();
L_4ef030: /* 4ef030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef031: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4ef035: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ef038: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ef039: mov edi, ecx */
  edi = ecx;
/* 4ef03b: jg 0x4ef054 */
  if ((!zf && sf == of)) goto L_4ef054;
L_4ef03d: /* 4ef03d: push 0x760 */
  { uint32_t v = 0x760u; esp -= 4; W32(esp, v); }
/* 4ef042: push 0x5a37b0 */
  { uint32_t v = 0x5a37b0u; esp -= 4; W32(esp, v); }
/* 4ef047: push 0x5a37a8 */
  { uint32_t v = 0x5a37a8u; esp -= 4; W32(esp, v); }
/* 4ef04c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4ef051u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4ef051: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ef054: /* 4ef054: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ef057: jl 0x4ef070 */
  if ((sf != of)) goto L_4ef070;
L_4ef059: /* 4ef059: push 0x761 */
  { uint32_t v = 0x761u; esp -= 4; W32(esp, v); }
/* 4ef05e: push 0x5a37b0 */
  { uint32_t v = 0x5a37b0u; esp -= 4; W32(esp, v); }
/* 4ef063: push 0x5a3800 */
  { uint32_t v = 0x5a3800u; esp -= 4; W32(esp, v); }
/* 4ef068: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4ef06du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4ef06d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ef070: /* 4ef070: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4ef072: mov eax, edi */
  eax = edi;
/* 4ef074: je 0x4ef079 */
  if (zf) goto L_4ef079;
L_4ef076: /* 4ef076: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
L_4ef079: /* 4ef079: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ef07a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef07b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef0a0(void) {
  LOAD_REGS();
L_4ef0a0: /* 4ef0a0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ef0a3: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4ef0a7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4ef0ab: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 4ef0ae: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4ef0b2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4ef0b6: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 4ef0b9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4ef0bd: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4ef0c1: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 4ef0c4: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4ef0c8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ef0ca: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4ef0ce: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ef0d2: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4ef0d6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ef0d9: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4ef0dd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4ef0e1: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ef0e4: mov ecx, eax */
  ecx = eax;
/* 4ef0e6: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4ef0ea: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4ef0ec: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ef0f0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4ef0f3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4ef0f7: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ef0fb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4ef0fe: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4ef102: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4ef105: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4ef107: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4ef10b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4ef10e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4ef112: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4ef115: mov byte ptr [eax + 0x18], 1 */
  W8((uint32_t)(eax + 0x18u), 0x1u);
/* 4ef119: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef11c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ef140(void) {
  LOAD_REGS();
L_4ef140: /* 4ef140: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ef143: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ef146: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4ef14a: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4ef14c: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4ef14f: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4ef152: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4ef155: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4ef158: mov ecx, eax */
  ecx = eax;
/* 4ef15a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4ef15e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef160: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ef166: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ef16a: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4ef16e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4ef170: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ef176: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4ef17a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4ef17e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ef182: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ef188: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4ef18b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4ef18f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ef193: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4ef196: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef199: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef1c0(void) {
  LOAD_REGS();
L_4ef1c0: /* 4ef1c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ef1c3: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ef1c6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ef1ca: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 4ef1cc: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4ef1cf: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 4ef1d2: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4ef1d5: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 4ef1d8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4ef1dc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef1de: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ef1e4: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ef1e6: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ef1ec: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ef1ef: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4ef1f3: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ef1f9: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ef1fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef1ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef230(void) {
  LOAD_REGS();
L_4ef230: /* 4ef230: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ef233: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4ef236: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4ef23a: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 4ef23c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef23d: mov edx, eax */
  edx = eax;
/* 4ef23f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4ef243: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* 4ef247: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4ef24a: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 4ef24d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4ef251: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4ef254: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 4ef257: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ef259: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4ef25d: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ef260: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4ef264: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4ef268: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 4ef26b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4ef26d: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ef273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef274: fst dword ptr [eax] */
  WF32((uint32_t)(eax), ST0);
/* 4ef276: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4ef279: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ef27f: fst dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0);
/* 4ef282: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4ef285: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4ef28b: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 4ef28f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ef292: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ef296: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef298: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4ef29a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ef29e: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4ef2a1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4ef2a5: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4ef2a9: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ef2ad: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4ef2b0: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 4ef2b4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ef2b6: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4ef2b9: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4ef2bd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ef2c1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4ef2c4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef2c7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ef300(void) {
  LOAD_REGS();
L_4ef300: /* 4ef300: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ef302: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ef306: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 4ef309: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ef30b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ef30e: je 0x4ef355 */
  if (zf) goto L_4ef355;
L_4ef310: /* 4ef310: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4ef312: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* 4ef315: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ef317: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ef31a: je 0x4ef355 */
  if (zf) goto L_4ef355;
L_4ef31c: /* 4ef31c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ef31f: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 4ef322: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ef324: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ef327: je 0x4ef355 */
  if (zf) goto L_4ef355;
L_4ef329: /* 4ef329: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4ef32c: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 4ef32f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ef331: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ef334: je 0x4ef355 */
  if (zf) goto L_4ef355;
L_4ef336: /* 4ef336: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4ef339: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 4ef33c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ef33e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ef341: je 0x4ef355 */
  if (zf) goto L_4ef355;
L_4ef343: /* 4ef343: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4ef346: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 4ef349: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ef34b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ef34e: je 0x4ef355 */
  if (zf) goto L_4ef355;
L_4ef350: /* 4ef350: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4ef352: ret 4 */
  esp += 8; SPILL(); return;
L_4ef355: /* 4ef355: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 4ef357: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef380(void) {
  LOAD_REGS();
L_4ef380: /* 4ef380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef381: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4ef385: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ef386: mov eax, ecx */
  eax = ecx;
/* 4ef388: mov ecx, 7 */
  ecx = 0x7u;
/* 4ef38d: mov edi, eax */
  edi = eax;
/* 4ef38f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4ef391: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ef392: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef393: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef3b0(void) {
  LOAD_REGS();
L_4ef3b0: /* 4ef3b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ef3b1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 4ef3b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef3b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ef3b7: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4ef3bb: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 4ef3bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ef3be: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 4ef3c0: mov esi, ecx */
  esi = ecx;
/* 4ef3c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ef3c5: call 0x4e15aa */
  esp -= 4; W32(esp, 0x4ef3cau); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 4ef3ca: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 4ef3cd: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 4ef3d0: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 4ef3d3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ef3d6: call 0x4e15aa */
  esp -= 4; W32(esp, 0x4ef3dbu); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 4ef3db: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 4ef3df: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 4ef3e2: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 4ef3e5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ef3e8: call 0x4e15aa */
  esp -= 4; W32(esp, 0x4ef3edu); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 4ef3ed: mov word ptr [esi + 4], ax */
  W16((uint32_t)(esi + 0x4u), (eax & 0xffffu));
/* 4ef3f1: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 4ef3f4: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 4ef3f6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ef3f9: call 0x4e15aa */
  esp -= 4; W32(esp, 0x4ef3feu); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 4ef3fe: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 4ef402: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 4ef405: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 4ef408: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ef40b: call 0x4e15aa */
  esp -= 4; W32(esp, 0x4ef410u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 4ef410: mov word ptr [esi + 8], ax */
  W16((uint32_t)(esi + 0x8u), (eax & 0xffffu));
/* 4ef414: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 4ef417: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 4ef41a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4ef41d: call 0x4e15aa */
  esp -= 4; W32(esp, 0x4ef422u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 4ef422: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef425: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ef426: mov word ptr [esi + 0xa], ax */
  W16((uint32_t)(esi + 0xau), (eax & 0xffffu));
/* 4ef42a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef42b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ef42c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ef450(void) {
  LOAD_REGS();
L_4ef450: /* 4ef450: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ef451: movsx eax, word ptr [ecx] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx)));
/* 4ef454: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4ef458: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 4ef45c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ef460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef461: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4ef465: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4ef467: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ef469: movsx esi, word ptr [ecx + 2] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x2u)));
/* 4ef46d: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4ef471: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4ef475: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4ef478: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ef47b: movsx esi, word ptr [ecx + 4] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x4u)));
/* 4ef47f: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4ef483: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4ef487: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4ef48a: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ef48d: movsx esi, word ptr [ecx + 6] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x6u)));
/* 4ef491: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4ef495: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4ef499: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4ef49b: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4ef49e: movsx esi, word ptr [ecx + 8] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x8u)));
/* 4ef4a2: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4ef4a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef4a7: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ef4ab: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4ef4ae: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 4ef4b1: movsx ecx, word ptr [ecx + 0xa] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0xau)));
/* 4ef4b5: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4ef4b9: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4ef4bd: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4ef4c0: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 4ef4c3: mov byte ptr [eax + 0x18], 1 */
  W8((uint32_t)(eax + 0x18u), 0x1u);
/* 4ef4c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4ef4c8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ef4f0(void) {
  LOAD_REGS();
L_4ef4f0: /* 4ef4f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ef4f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef4f5: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 4ef4f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ef4f9: lea edx, [eax + 2] */
  edx = (uint32_t)(eax + 0x2u);
/* 4ef4fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ef4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ef4fe: lea esi, [eax + 6] */
  esi = (uint32_t)(eax + 0x6u);
/* 4ef501: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4ef505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ef506: call 0x4e40ed */
  esp -= 4; W32(esp, 0x4ef50bu); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 4ef50b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef50e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ef50f: call 0x4e40ed */
  esp -= 4; W32(esp, 0x4ef514u); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 4ef514: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef517: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ef518: call 0x4e40ed */
  esp -= 4; W32(esp, 0x4ef51du); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 4ef51d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef520: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 4ef523: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ef524: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 4ef527: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ef528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ef52a: call 0x4e40ed */
  esp -= 4; W32(esp, 0x4ef52fu); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 4ef52f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef532: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ef533: call 0x4e40ed */
  esp -= 4; W32(esp, 0x4ef538u); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 4ef538: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef53b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ef53c: call 0x4e40ed */
  esp -= 4; W32(esp, 0x4ef541u); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 4ef541: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef544: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef545: ret  */
  esp += 4; SPILL(); return;
}

void f_4ef570(void) {
  LOAD_REGS();
L_4ef570: /* 4ef570: mov eax, ecx */
  eax = ecx;
/* 4ef572: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ef576: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef577: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4ef579: mov edx, eax */
  edx = eax;
/* 4ef57b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4ef57d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4ef580: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4ef583: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4ef586: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ef589: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef58a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef5a0(void) {
  LOAD_REGS();
L_4ef5a0: /* 4ef5a0: mov eax, ecx */
  eax = ecx;
/* 4ef5a2: ret  */
  esp += 4; SPILL(); return;
}

void f_4ef5c0(void) {
  LOAD_REGS();
L_4ef5c0: /* 4ef5c0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ef5c4: mov eax, ecx */
  eax = ecx;
/* 4ef5c6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ef5ca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4ef5cc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4ef5cf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ef5f0(void) {
  LOAD_REGS();
L_4ef5f0: /* 4ef5f0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ef5f2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4ef5f6: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4ef5f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ef5fa: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ef5fd: jp 0x4ef614 */
  if (pf) goto L_4ef614;
L_4ef5ff: /* 4ef5ff: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4ef602: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4ef605: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4ef607: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4ef60a: jp 0x4ef614 */
  if (pf) goto L_4ef614;
L_4ef60c: /* 4ef60c: mov eax, 1 */
  eax = 0x1u;
/* 4ef611: ret 4 */
  esp += 8; SPILL(); return;
L_4ef614: /* 4ef614: xor eax, eax */
  eax = 0;
/* 4ef616: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef630(void) {
  LOAD_REGS();
L_4ef630: /* 4ef630: mov eax, ecx */
  eax = ecx;
/* 4ef632: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4ef636: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ef638: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4ef63a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4ef63d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4ef640: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef660(void) {
  LOAD_REGS();
L_4ef660: /* 4ef660: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ef664: fld dword ptr [ecx + eax*4 + 0x1008c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x1008cu)); FPUSH(v); }
/* 4ef66b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef680(void) {
  LOAD_REGS();
L_4ef680: /* 4ef680: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ef684: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4ef687: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4ef68c: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 4ef693: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef6b0(void) {
  LOAD_REGS();
L_4ef6b0: /* 4ef6b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ef6b4: add eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4ef6b9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4ef6bc: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4ef6c1: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 4ef6c8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef6e0(void) {
  LOAD_REGS();
L_4ef6e0: /* 4ef6e0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4ef6e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef6e5: fmul dword ptr [0x5694e4] */
  ST0 = ST0 * (F32((uint32_t)(0x5694e4u)));
/* 4ef6eb: mov esi, ecx */
  esi = ecx;
/* 4ef6ed: fmul qword ptr [0x5694d8] */
  ST0 = ST0 * (F64((uint32_t)(0x5694d8u)));
/* 4ef6f3: call 0x554f00 */
  esp -= 4; W32(esp, 0x4ef6f8u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4ef6f8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4ef6fb: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4ef700: fld dword ptr [esi + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(esi + eax*4 + 0x8cu)); FPUSH(v); }
/* 4ef707: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef708: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef720(void) {
  LOAD_REGS();
L_4ef720: /* 4ef720: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4ef724: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef725: fmul dword ptr [0x5694e4] */
  ST0 = ST0 * (F32((uint32_t)(0x5694e4u)));
/* 4ef72b: mov esi, ecx */
  esi = ecx;
/* 4ef72d: fmul qword ptr [0x5694e8] */
  ST0 = ST0 * (F64((uint32_t)(0x5694e8u)));
/* 4ef733: call 0x554f00 */
  esp -= 4; W32(esp, 0x4ef738u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 4ef738: mov ecx, 0x4000 */
  ecx = 0x4000u;
/* 4ef73d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4ef73f: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4ef742: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4ef748: fld dword ptr [esi + ecx*4 + 0x8c] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8cu)); FPUSH(v); }
/* 4ef74f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef750: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ef770(void) {
  LOAD_REGS();
L_4ef770: /* 4ef770: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ef774: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4ef779: ret  */
  esp += 4; SPILL(); return;
}

void f_4ef790(void) {
  LOAD_REGS();
L_4ef790: /* 4ef790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef791: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ef792: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 4ef796: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4ef79a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 4ef79e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4ef7a0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4ef7a3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4ef7a6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef7a8: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 4ef7aa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef7ac: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 4ef7af: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef7b1: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 4ef7b4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef7b6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ef7b8: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4ef7bb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4ef7bd: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4ef7c0: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef7c2: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4ef7c5: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 4ef7c7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ef7c9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4ef7cc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4ef7ce: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4ef7d1: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef7d3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4ef7d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef7d8: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 4ef7da: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 4ef7dc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 4ef7de: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef7e0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ef7e2: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4ef7e5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4ef7e7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4ef7ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef7ec: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4ef7ef: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef7f1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4ef7f3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4ef7f5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef7f7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef7f9: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4ef7fb: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4ef7fe: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4ef801: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ef802: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef803: ret  */
  esp += 4; SPILL(); return;
}

void f_4ef830(void) {
  LOAD_REGS();
L_4ef830: /* 4ef830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ef831: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ef832: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 4ef836: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4ef83a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 4ef83e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4ef840: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4ef843: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef845: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4ef848: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef84a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ef84c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4ef84f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4ef851: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4ef854: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef856: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4ef859: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 4ef85b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ef85d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4ef860: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4ef862: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4ef865: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef867: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4ef86a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef86c: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 4ef86e: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 4ef870: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 4ef872: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef874: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4ef876: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4ef879: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4ef87b: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4ef87e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4ef880: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4ef883: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef885: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4ef887: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4ef889: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef88b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4ef88d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4ef88f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4ef892: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4ef895: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ef896: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ef897: ret  */
  esp += 4; SPILL(); return;
}

void f_4ef8c0(void) {
  LOAD_REGS();
L_4ef8c0: /* 4ef8c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ef8c3: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 4ef8c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ef8c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ef8c9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4ef8cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ef8ce: call 0x4e1429 */
  esp -= 4; W32(esp, 0x4ef8d3u); SPILL(); f_4e1429(); if (g_unwind) return; RELOAD();
/* 4ef8d3: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4ef8d7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4ef8db: mov edx, eax */
  edx = eax;
/* 4ef8dd: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 4ef8df: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ef8e3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 4ef8e6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4ef8ea: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ef8ed: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef8f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ef910(void) {
  LOAD_REGS();
L_4ef910: /* 4ef910: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ef913: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 4ef917: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ef918: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ef919: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4ef91d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ef91e: call 0x4e24fa */
  esp -= 4; W32(esp, 0x4ef923u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 4ef923: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4ef927: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4ef92b: mov edx, eax */
  edx = eax;
/* 4ef92d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 4ef92f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ef933: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 4ef936: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4ef93a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4ef93d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ef940: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ef960(void) {
  LOAD_REGS();
L_4ef960: /* 4ef960: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4ef964: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 4ef967: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ef96a: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 4ef96d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ef96f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef971: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 4ef974: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ef977: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef979: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 4ef97c: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ef97f: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 4ef982: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ef984: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef986: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 4ef989: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ef98c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef98e: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 4ef991: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ef994: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4ef997: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4ef999: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef99b: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 4ef99e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ef9a2: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ef9a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef9a7: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4ef9a9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4ef9ac: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4ef9af: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ef9e0(void) {
  LOAD_REGS();
L_4ef9e0: /* 4ef9e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ef9e3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4ef9e7: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 4ef9ea: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4ef9ed: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 4ef9f0: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4ef9f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef9f5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4ef9f7: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 4ef9fa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4ef9fc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4efa00: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 4efa03: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4efa06: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 4efa09: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4efa0c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efa0e: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 4efa11: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4efa13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efa15: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4efa19: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 4efa1c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4efa1f: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 4efa22: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4efa25: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efa27: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 4efa2a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4efa2c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efa2e: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 4efa31: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4efa35: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 4efa38: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 4efa3c: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 4efa3e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4efa42: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4efa44: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4efa47: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4efa4a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4efa4d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4efa70(void) {
  LOAD_REGS();
L_4efa70: /* 4efa70: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4efa73: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4efa77: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4efa7a: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4efa7d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4efa7f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4efa81: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efa83: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4efa86: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4efa89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efa8b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4efa8d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4efa8f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efa91: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4efa95: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4efa97: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4efa9a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4efa9e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4efaa1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4efaa5: fsubr dword ptr [ecx + 8] */
  ST0 = (F32((uint32_t)(ecx + 0x8u))) - ST0;
/* 4efaa8: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4efaab: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 4efaaf: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4efab1: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 4efab5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4efab7: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4efaba: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4efabd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4efac0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4efaf0(void) {
  LOAD_REGS();
L_4efaf0: /* 4efaf0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4efaf3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4efaf7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4efafa: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4efafd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4efaff: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4efb01: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efb03: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4efb06: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4efb09: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efb0b: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4efb0e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4efb10: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4efb12: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efb14: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4efb18: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4efb1a: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4efb1d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4efb21: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4efb24: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4efb28: fsubr dword ptr [ecx + 8] */
  ST0 = (F32((uint32_t)(ecx + 0x8u))) - ST0;
/* 4efb2b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4efb2e: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 4efb32: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4efb34: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 4efb38: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4efb3a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4efb3d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4efb40: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4efb43: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4efb70(void) {
  LOAD_REGS();
L_4efb70: /* 4efb70: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4efb73: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 4efb77: mov edx, eax */
  edx = eax;
/* 4efb79: add eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4efb7e: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 4efb81: and edx, 0x3fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4efb87: fld dword ptr [edx*4 + 0x5b3234] */
  { double v = F32((uint32_t)(edx*4 + 0x5b3234u)); FPUSH(v); }
/* 4efb8e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4efb91: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4efb96: fld dword ptr [eax*4 + 0x5b3234] */
  { double v = F32((uint32_t)(eax*4 + 0x5b3234u)); FPUSH(v); }
/* 4efb9d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 4efba1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4efba5: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 4efba8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4efbab: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 4efbaf: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efbb1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4efbb5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4efbb8: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4efbbb: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4efbbe: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efbc0: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4efbc4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4efbc6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efbc8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4efbcc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4efbce: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4efbd1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4efbd5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4efbd7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4efbda: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4efbde: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 4efbe4: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 4efbe8: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4efbec: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 4efbf0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4efbf2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4efbf6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4efbf8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 4efbfc: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 4efc00: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4efc04: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 4efc08: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 4efc0c: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 4efc10: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* 4efc14: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4efc17: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4efc1b: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 4efc1f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4efc21: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efc23: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4efc27: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 4efc2b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4efc2e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efc30: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4efc33: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 4efc37: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 4efc3b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4efc3f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4efc41: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 4efc43: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 4efc47: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* 4efc4b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4efc4e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4efc52: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4efc56: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4efc59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efc5b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 4efc5f: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 4efc63: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4efc65: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efc67: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4efc69: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4efc6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4efc6d: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 4efc71: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4efc75: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* 4efc79: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4efc7b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4efc7f: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 4efc83: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4efc86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efc88: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 4efc8c: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 4efc90: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4efc93: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efc95: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4efc97: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4efc99: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4efc9c: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4efc9f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4efca2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4efd00(void) {
  LOAD_REGS();
L_4efd00: /* 4efd00: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4efd03: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4efd06: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 4efd09: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 4efd0c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4efd10: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4efd13: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 4efd17: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4efd1b: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 4efd1e: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 4efd22: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4efd26: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4efd29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4efd2a: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4efd2e: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4efd31: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 4efd35: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 4efd38: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4efd3c: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4efd3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4efd40: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4efd44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4efd45: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 4efd49: call 0x4e24fa */
  esp -= 4; W32(esp, 0x4efd4eu); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 4efd4e: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 4efd52: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 4efd56: fchs  */
  ST0 = -ST0;
/* 4efd58: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4efd5c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4efd60: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 4efd64: mov ecx, eax */
  ecx = eax;
/* 4efd66: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4efd68: fchs  */
  ST0 = -ST0;
/* 4efd6a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4efd6e: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 4efd72: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4efd76: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4efd79: fchs  */
  ST0 = -ST0;
/* 4efd7b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4efd7f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4efd83: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4efd86: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4efd8a: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4efd8d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4efd8f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4efd93: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4efd96: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4efd9a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4efd9d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4efda1: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 4efda4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4efda6: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4efdaa: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4efdad: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4efdb1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4efdb4: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 4efdb8: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 4efdbb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4efdbd: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 4efdc1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4efdc4: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 4efdc8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4efdcb: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4efdce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4efe20(void) {
  LOAD_REGS();
L_4efe20: /* 4efe20: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4efe23: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 4efe27: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4efe2a: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4efe2d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4efe2f: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4efe32: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efe34: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4efe37: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 4efe3a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efe3c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4efe3e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4efe40: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efe42: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4efe44: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4efe47: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4efe4b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4efe4d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4efe50: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4efe54: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4efe57: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4efe59: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4efe5d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4efe5f: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4efe62: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 4efe66: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4efe6a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4efe6d: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4efe71: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4efe75: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4efe78: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efe7a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4efe7d: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4efe80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efe82: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4efe85: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4efe88: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efe8a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4efe8c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4efe8e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efe90: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4efe92: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4efe95: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4efe99: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4efe9b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4efe9e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4efea2: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4efea5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4efea7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4efeab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4efead: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 4efeb0: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 4efeb4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4efeb8: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4efebb: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 4efebf: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4efec3: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4efec6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4efec9: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4efecc: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4efecf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efed1: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4efed4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efed6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4efed8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4efeda: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4efedc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4efede: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4efee0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4efee3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4efee7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4efee9: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4efeec: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4efef0: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4efef3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4efef5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4efef9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4efefb: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4efefe: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 4eff02: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4eff06: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4eff09: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4eff0d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4eff11: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4eff14: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4eff17: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4eff19: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4eff1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4eff1d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4eff20: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4eff23: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4eff25: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4eff27: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4eff29: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4eff2b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4eff2d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4eff30: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4eff34: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4eff36: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4eff39: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 4eff3d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4eff41: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4eff43: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4eff45: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4eff49: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4eff4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4eff4f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4eff52: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 4eff56: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4eff5a: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4eff5d: mov ecx, eax */
  ecx = eax;
/* 4eff5f: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 4eff63: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4eff65: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4eff69: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4eff6c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4eff70: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4eff74: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4eff77: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4eff7b: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4eff7e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4eff80: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4eff84: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4eff87: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4eff8b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4eff8e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4eff92: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 4eff95: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4eff97: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4eff9b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4eff9e: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4effa2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4effa5: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4effa9: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 4effac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4effae: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4effb2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4effb5: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4effb9: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4effbc: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4effbf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0040(void) {
  LOAD_REGS();
L_4f0040: /* 4f0040: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0043: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 4f0047: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f004a: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f004d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f004f: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4f0052: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f0054: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f0057: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 4f005a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f005c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f005e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f0060: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f0062: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0064: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0067: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f006b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f006d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f0070: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f0074: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f0077: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0079: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f007d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f007f: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f0082: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 4f0086: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f008a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4f008d: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4f0091: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f0095: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f0098: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f009a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f009d: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f00a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00a2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f00a5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f00a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00aa: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00ac: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00ae: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00b0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f00b2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00b5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f00b9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f00bb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00be: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f00c2: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f00c5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f00c7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f00cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f00cd: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 4f00d0: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 4f00d4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f00d8: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f00db: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 4f00df: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f00e3: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f00e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00e9: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f00ec: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f1: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f00f4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00fc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00fe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0100: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0103: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f0107: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0109: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f010c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0110: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f0113: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0115: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f0119: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f011b: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f011e: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 4f0122: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f0126: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f0129: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4f012d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f0131: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f0134: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f0137: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f0139: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f013b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f013d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f0140: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f0143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f0145: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4f0148: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f014a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f014c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f014e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0150: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0153: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f0157: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0159: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f015c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 4f0160: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f0164: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f0166: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0168: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f016c: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f0170: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f0172: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f0175: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 4f0179: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f017d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f0180: mov ecx, eax */
  ecx = eax;
/* 4f0182: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 4f0186: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f0188: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f018c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f018f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0193: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f0197: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f019a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f019e: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4f01a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01a3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f01a7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01aa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f01ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01b1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f01b5: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 4f01b8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4f01be: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01c1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f01c5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01c8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4f01cc: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 4f01cf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01d1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4f01d5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01d8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f01dc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01df: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f01e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0043(void) {
  LOAD_REGS();
L_4f0043: /* 4f0043: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 4f0047: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f004a: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f004d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f004f: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4f0052: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f0054: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f0057: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 4f005a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f005c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f005e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f0060: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f0062: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0064: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0067: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f006b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f006d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f0070: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f0074: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f0077: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0079: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f007d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f007f: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f0082: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 4f0086: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f008a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4f008d: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4f0091: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f0095: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f0098: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f009a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f009d: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f00a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00a2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f00a5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f00a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00aa: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00ac: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00ae: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00b0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f00b2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00b5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f00b9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f00bb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00be: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f00c2: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f00c5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f00c7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f00cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f00cd: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 4f00d0: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 4f00d4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f00d8: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f00db: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 4f00df: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f00e3: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f00e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00e9: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f00ec: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f1: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f00f4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00fc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00fe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0100: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0103: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f0107: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0109: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f010c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0110: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f0113: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0115: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f0119: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f011b: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f011e: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 4f0122: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f0126: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f0129: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4f012d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f0131: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f0134: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f0137: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f0139: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f013b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f013d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f0140: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f0143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f0145: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4f0148: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f014a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f014c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f014e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0150: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0153: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f0157: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0159: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f015c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 4f0160: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f0164: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f0166: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0168: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f016c: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f0170: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f0172: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f0175: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 4f0179: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f017d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f0180: mov ecx, eax */
  ecx = eax;
/* 4f0182: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 4f0186: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f0188: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f018c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f018f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0193: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f0197: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f019a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f019e: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4f01a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01a3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f01a7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01aa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f01ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01b1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f01b5: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 4f01b8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4f01be: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01c1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f01c5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01c8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4f01cc: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 4f01cf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01d1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4f01d5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01d8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f01dc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01df: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f01e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0057(void) {
  LOAD_REGS();
L_4f0057: /* 4f0057: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 4f005a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f005c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f005e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f0060: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f0062: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0064: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0067: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f006b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f006d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f0070: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f0074: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f0077: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0079: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f007d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f007f: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f0082: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 4f0086: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f008a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4f008d: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4f0091: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f0095: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f0098: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f009a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f009d: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f00a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00a2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f00a5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f00a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00aa: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00ac: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00ae: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00b0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f00b2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00b5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f00b9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f00bb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00be: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f00c2: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f00c5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f00c7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f00cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f00cd: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 4f00d0: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 4f00d4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f00d8: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f00db: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 4f00df: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f00e3: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f00e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00e9: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f00ec: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f1: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f00f4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00fc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00fe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0100: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0103: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f0107: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0109: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f010c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0110: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f0113: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0115: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f0119: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f011b: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f011e: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 4f0122: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f0126: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f0129: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4f012d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f0131: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f0134: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f0137: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f0139: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f013b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f013d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f0140: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f0143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f0145: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4f0148: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f014a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f014c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f014e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0150: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0153: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f0157: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0159: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f015c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 4f0160: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f0164: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f0166: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0168: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f016c: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f0170: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f0172: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f0175: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 4f0179: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f017d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f0180: mov ecx, eax */
  ecx = eax;
/* 4f0182: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 4f0186: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f0188: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f018c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f018f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0193: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f0197: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f019a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f019e: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4f01a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01a3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f01a7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01aa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f01ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01b1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f01b5: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 4f01b8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4f01be: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01c1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f01c5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01c8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4f01cc: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 4f01cf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01d1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4f01d5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01d8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f01dc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01df: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f01e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0064(void) {
  LOAD_REGS();
L_4f0064: /* 4f0064: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0067: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f006b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f006d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f0070: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f0074: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f0077: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0079: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f007d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f007f: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f0082: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 4f0086: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f008a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4f008d: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4f0091: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f0095: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f0098: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f009a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f009d: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f00a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00a2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f00a5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f00a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00aa: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00ac: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00ae: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00b0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f00b2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00b5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f00b9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f00bb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00be: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f00c2: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f00c5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f00c7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f00cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f00cd: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 4f00d0: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 4f00d4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f00d8: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f00db: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 4f00df: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f00e3: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f00e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00e9: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f00ec: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f1: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f00f4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00fc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00fe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0100: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0103: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f0107: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0109: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f010c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0110: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f0113: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0115: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f0119: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f011b: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f011e: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 4f0122: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f0126: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f0129: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4f012d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f0131: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f0134: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f0137: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f0139: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f013b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f013d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f0140: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f0143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f0145: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4f0148: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f014a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f014c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f014e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0150: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0153: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f0157: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0159: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f015c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 4f0160: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f0164: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f0166: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0168: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f016c: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f0170: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f0172: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f0175: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 4f0179: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f017d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f0180: mov ecx, eax */
  ecx = eax;
/* 4f0182: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 4f0186: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f0188: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f018c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f018f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0193: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f0197: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f019a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f019e: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4f01a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01a3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f01a7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01aa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f01ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01b1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f01b5: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 4f01b8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4f01be: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01c1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f01c5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01c8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4f01cc: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 4f01cf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01d1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4f01d5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01d8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f01dc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01df: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f01e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0067(void) {
  LOAD_REGS();
L_4f0067: /* 4f0067: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f006b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f006d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f0070: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f0074: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f0077: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0079: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f007d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f007f: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f0082: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 4f0086: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f008a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4f008d: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4f0091: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f0095: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f0098: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f009a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f009d: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f00a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00a2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f00a5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f00a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00aa: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00ac: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00ae: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00b0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f00b2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00b5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f00b9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f00bb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00be: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f00c2: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f00c5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f00c7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f00cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f00cd: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 4f00d0: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 4f00d4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f00d8: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f00db: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 4f00df: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f00e3: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f00e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00e9: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f00ec: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f1: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f00f4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00fc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00fe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0100: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0103: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f0107: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0109: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f010c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0110: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f0113: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0115: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f0119: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f011b: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f011e: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 4f0122: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f0126: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f0129: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4f012d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f0131: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f0134: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f0137: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f0139: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f013b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f013d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f0140: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f0143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f0145: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4f0148: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f014a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f014c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f014e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0150: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0153: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f0157: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0159: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f015c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 4f0160: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f0164: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f0166: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0168: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f016c: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f0170: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f0172: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f0175: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 4f0179: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f017d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f0180: mov ecx, eax */
  ecx = eax;
/* 4f0182: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 4f0186: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f0188: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f018c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f018f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0193: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f0197: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f019a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f019e: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4f01a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01a3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f01a7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01aa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f01ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01b1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f01b5: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 4f01b8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4f01be: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01c1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f01c5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01c8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4f01cc: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 4f01cf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01d1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4f01d5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01d8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f01dc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01df: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f01e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0074(void) {
  LOAD_REGS();
L_4f0074: /* 4f0074: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f0077: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0079: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f007d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f007f: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f0082: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 4f0086: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f008a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4f008d: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 4f0091: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f0095: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f0098: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f009a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f009d: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f00a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00a2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f00a5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f00a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00aa: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00ac: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00ae: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00b0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f00b2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00b5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f00b9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f00bb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00be: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f00c2: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f00c5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f00c7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f00cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f00cd: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 4f00d0: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 4f00d4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f00d8: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f00db: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 4f00df: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f00e3: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f00e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f00e9: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f00ec: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f00ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f1: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f00f4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f00f8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f00fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f00fc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f00fe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0100: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0103: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f0107: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0109: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f010c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0110: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f0113: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0115: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f0119: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f011b: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f011e: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 4f0122: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f0126: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f0129: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4f012d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f0131: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f0134: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f0137: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f0139: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f013b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f013d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f0140: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f0143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f0145: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4f0148: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f014a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f014c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f014e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f0150: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f0153: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f0157: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f0159: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f015c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 4f0160: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f0164: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f0166: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f0168: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f016c: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f0170: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f0172: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f0175: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 4f0179: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f017d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f0180: mov ecx, eax */
  ecx = eax;
/* 4f0182: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 4f0186: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f0188: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f018c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f018f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0193: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f0197: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f019a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f019e: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4f01a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01a3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f01a7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01aa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f01ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01b1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f01b5: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 4f01b8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4f01be: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01c1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f01c5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01c8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4f01cc: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 4f01cf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f01d1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4f01d5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f01d8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f01dc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f01df: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f01e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0260(void) {
  LOAD_REGS();
L_4f0260: /* 4f0260: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f0264: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4f0268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0269: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f026a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4f026e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f026f: mov esi, ecx */
  esi = ecx;
/* 4f0271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0272: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f0273: call 0x4e1429 */
  esp -= 4; W32(esp, 0x4f0278u); SPILL(); f_4e1429(); if (g_unwind) return; RELOAD();
/* 4f0278: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f027c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f0280: mov ecx, esi */
  ecx = esi;
/* 4f0282: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f0284: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f0288: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 4f028b: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 4f028f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f0290: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 4f0293: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0294: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f0295: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f0298: call 0x4e24fa */
  esp -= 4; W32(esp, 0x4f029du); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 4f029d: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4f02a1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4f02a5: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 4f02a9: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 4f02ab: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 4f02ae: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 4f02b2: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 4f02b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f02b6: lea edi, [esi + 0x18] */
  edi = (uint32_t)(esi + 0x18u);
/* 4f02b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f02ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f02bb: call 0x4e24fa */
  esp -= 4; W32(esp, 0x4f02c0u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 4f02c0: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 4f02c4: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 4f02c8: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 4f02cc: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 4f02ce: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 4f02d1: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 4f02d5: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 4f02d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f02d9: lea edi, [esi + 0x24] */
  edi = (uint32_t)(esi + 0x24u);
/* 4f02dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f02dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f02de: call 0x4e24fa */
  esp -= 4; W32(esp, 0x4f02e3u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 4f02e3: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f02e7: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 4f02eb: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 4f02ef: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 4f02f1: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f02f4: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 4f02f7: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 4f02fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f02fb: mov eax, esi */
  eax = esi;
/* 4f02fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f02fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f02ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0302: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f0340(void) {
  LOAD_REGS();
L_4f0340: /* 4f0340: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f0344: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0347: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0348: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0349: mov esi, ecx */
  esi = ecx;
/* 4f034b: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0350: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f0354: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f0357: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f035b: call 0x4e2d33 */
  esp -= 4; W32(esp, 0x4f0360u); SPILL(); f_4e2d33(); if (g_unwind) return; RELOAD();
/* 4f0360: mov esi, eax */
  esi = eax;
/* 4f0362: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f0366: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f036b: mov edi, eax */
  edi = eax;
/* 4f036d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f036f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f0370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f0371: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0374: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0390(void) {
  LOAD_REGS();
L_4f0390: /* 4f0390: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0393: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0394: mov esi, ecx */
  esi = ecx;
/* 4f0396: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0397: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 4f039b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4f039e: mov ecx, eax */
  ecx = eax;
/* 4f03a0: add eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f03a5: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4f03a8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f03ab: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4f03b1: fld dword ptr [ecx*4 + 0x5b3234] */
  { double v = F32((uint32_t)(ecx*4 + 0x5b3234u)); FPUSH(v); }
/* 4f03b8: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4f03bd: mov edx, dword ptr [eax*4 + 0x5b3234] */
  edx = R32((uint32_t)(eax*4 + 0x5b3234u));
/* 4f03c4: fchs  */
  ST0 = -ST0;
/* 4f03c6: lea ecx, [ecx*4 + 0x5b3234] */
  ecx = (uint32_t)(ecx*4 + 0x5b3234u);
/* 4f03cd: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f03d1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f03d3: lea eax, [eax*4 + 0x5b3234] */
  eax = (uint32_t)(eax*4 + 0x5b3234u);
/* 4f03da: mov eax, edx */
  eax = edx;
/* 4f03dc: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 4f03e0: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 4f03e4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f03e8: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 4f03f0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f03f4: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 4f03f8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f03fc: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4f0404: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f0408: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 4f040c: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 4f0410: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f0414: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 4f041c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f0420: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 4f0424: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4f0428: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 4f0430: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4f0434: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 4f0438: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 4f043c: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 4f0444: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 4f0448: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 4f044c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 4f0450: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 4f0458: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f045c: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 4f0460: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 4f0468: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f046c: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 4f0470: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 4f0474: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 4f0478: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 4f0480: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f0484: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 4f0488: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f0489: mov ecx, esi */
  ecx = esi;
/* 4f048b: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 4f048f: call 0x4e2d33 */
  esp -= 4; W32(esp, 0x4f0494u); SPILL(); f_4e2d33(); if (g_unwind) return; RELOAD();
/* 4f0494: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4f0496: mov ecx, eax */
  ecx = eax;
/* 4f0498: add eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f049d: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4f04a0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f04a3: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4f04a9: fld dword ptr [ecx*4 + 0x5b3234] */
  { double v = F32((uint32_t)(ecx*4 + 0x5b3234u)); FPUSH(v); }
/* 4f04b0: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4f04b5: mov edx, dword ptr [eax*4 + 0x5b3234] */
  edx = R32((uint32_t)(eax*4 + 0x5b3234u));
/* 4f04bc: fchs  */
  ST0 = -ST0;
/* 4f04be: lea ecx, [ecx*4 + 0x5b3234] */
  ecx = (uint32_t)(ecx*4 + 0x5b3234u);
/* 4f04c5: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f04c9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f04cb: lea eax, [eax*4 + 0x5b3234] */
  eax = (uint32_t)(eax*4 + 0x5b3234u);
/* 4f04d2: mov eax, edx */
  eax = edx;
/* 4f04d4: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 4f04dc: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 4f04e0: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f04e8: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 4f04f0: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 4f04f8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 4f04fc: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 4f0504: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 4f0508: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 4f0510: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f0514: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 4f0518: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f051c: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 4f0524: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f0528: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 4f052c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 4f0530: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 4f0534: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f0538: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 4f0540: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f0544: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 4f0548: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 4f054c: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 4f0550: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4f0554: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 4f0558: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f055c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 4f0560: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4f0564: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 4f0568: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f056c: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 4f0570: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 4f0574: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f0578: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 4f057c: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 4f0580: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f0581: mov ecx, esi */
  ecx = esi;
/* 4f0583: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 4f0587: call 0x4e2d33 */
  esp -= 4; W32(esp, 0x4f058cu); SPILL(); f_4e2d33(); if (g_unwind) return; RELOAD();
/* 4f058c: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 4f058f: mov eax, edi */
  eax = edi;
/* 4f0591: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f0594: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4f0599: mov ecx, dword ptr [eax*4 + 0x5b3234] */
  ecx = R32((uint32_t)(eax*4 + 0x5b3234u));
/* 4f05a0: fld dword ptr [eax*4 + 0x5b3234] */
  { double v = F32((uint32_t)(eax*4 + 0x5b3234u)); FPUSH(v); }
/* 4f05a7: lea eax, [eax*4 + 0x5b3234] */
  eax = (uint32_t)(eax*4 + 0x5b3234u);
/* 4f05ae: fchs  */
  ST0 = -ST0;
/* 4f05b0: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4f05b4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f05b8: lea ecx, [edi + 0x4000] */
  ecx = (uint32_t)(edi + 0x4000u);
/* 4f05be: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4f05c1: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4f05c7: mov edx, dword ptr [ecx*4 + 0x5b3234] */
  edx = R32((uint32_t)(ecx*4 + 0x5b3234u));
/* 4f05ce: lea ecx, [ecx*4 + 0x5b3234] */
  ecx = (uint32_t)(ecx*4 + 0x5b3234u);
/* 4f05d5: mov ecx, edx */
  ecx = edx;
/* 4f05d7: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 4f05db: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 4f05df: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 4f05e7: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f05eb: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 4f05f3: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f05f7: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 4f05ff: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f0603: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 4f0607: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 4f060b: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 4f060f: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 4f0617: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f061b: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 4f0623: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 4f0627: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 4f062f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 4f0633: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 4f0637: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 4f063b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4f063f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 4f0643: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4f0647: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f064f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f0653: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 4f065b: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 4f065f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f0663: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 4f0667: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f066b: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 4f066f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f0673: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 4f0677: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 4f067b: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 4f067f: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 4f0683: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f0684: mov ecx, esi */
  ecx = esi;
/* 4f0686: call 0x4e2d33 */
  esp -= 4; W32(esp, 0x4f068bu); SPILL(); f_4e2d33(); if (g_unwind) return; RELOAD();
/* 4f068b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f068c: mov eax, esi */
  eax = esi;
/* 4f068e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f068f: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0692: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f0770(void) {
  LOAD_REGS();
L_4f0770: /* 4f0770: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f0774: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0777: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0778: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0779: mov esi, ecx */
  esi = ecx;
/* 4f077b: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0780: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f0784: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0786: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f0787: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f078b: call 0x4e13e8 */
  esp -= 4; W32(esp, 0x4f0790u); SPILL(); f_4e13e8(); if (g_unwind) return; RELOAD();
/* 4f0790: mov esi, eax */
  esi = eax;
/* 4f0792: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f0796: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f079b: mov edi, eax */
  edi = eax;
/* 4f079d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f079f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f07a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f07a1: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f07a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f07c0(void) {
  LOAD_REGS();
L_4f07c0: /* 4f07c0: mov eax, ecx */
  eax = ecx;
/* 4f07c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f07c6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f07c8: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 4f07ca: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4f07cc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f07cf: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 4f07d2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f07d5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f07d8: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 4f07db: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f07de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f0800(void) {
  LOAD_REGS();
L_4f0800: /* 4f0800: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0803: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 4f0807: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0808: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0809: mov esi, ecx */
  esi = ecx;
/* 4f080b: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0810: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f0814: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0816: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f081a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 4f081c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0820: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f0824: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 4f0827: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f082b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f082f: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 4f0832: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f0836: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f083b: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 4f083f: mov edi, eax */
  edi = eax;
/* 4f0841: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f0845: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0847: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f0848: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f0849: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f084c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0870(void) {
  LOAD_REGS();
L_4f0870: /* 4f0870: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0873: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0874: mov esi, ecx */
  esi = ecx;
/* 4f0876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0877: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 4f087b: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 4f087e: mov ecx, eax */
  ecx = eax;
/* 4f0880: add eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f0885: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4f0888: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f088b: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4f0891: fld dword ptr [ecx*4 + 0x5b3234] */
  { double v = F32((uint32_t)(ecx*4 + 0x5b3234u)); FPUSH(v); }
/* 4f0898: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4f089d: mov edx, dword ptr [eax*4 + 0x5b3234] */
  edx = R32((uint32_t)(eax*4 + 0x5b3234u));
/* 4f08a4: fchs  */
  ST0 = -ST0;
/* 4f08a6: lea ecx, [ecx*4 + 0x5b3234] */
  ecx = (uint32_t)(ecx*4 + 0x5b3234u);
/* 4f08ad: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 4f08b1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f08b3: lea eax, [eax*4 + 0x5b3234] */
  eax = (uint32_t)(eax*4 + 0x5b3234u);
/* 4f08ba: mov eax, edx */
  eax = edx;
/* 4f08bc: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 4f08c0: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 4f08c4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 4f08c8: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 4f08d0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f08d4: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 4f08d8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4f08e0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f08e4: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 4f08e8: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 4f08f0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f08f4: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 4f08f8: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 4f0900: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f0904: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 4f0908: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 4f0910: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4f0914: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 4f0918: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 4f091c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 4f0924: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f0928: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4f0930: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4f0934: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 4f0938: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 4f093c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 4f0940: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 4f0948: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f094c: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 4f0950: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f0954: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 4f0958: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 4f095c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f0960: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 4f0964: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 4f0968: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f0969: mov ecx, esi */
  ecx = esi;
/* 4f096b: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 4f096f: call 0x4e2d33 */
  esp -= 4; W32(esp, 0x4f0974u); SPILL(); f_4e2d33(); if (g_unwind) return; RELOAD();
/* 4f0974: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4f0976: mov ecx, eax */
  ecx = eax;
/* 4f0978: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4f097b: add eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f0980: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4f0986: mov edx, dword ptr [ecx*4 + 0x5b3234] */
  edx = R32((uint32_t)(ecx*4 + 0x5b3234u));
/* 4f098d: fld dword ptr [ecx*4 + 0x5b3234] */
  { double v = F32((uint32_t)(ecx*4 + 0x5b3234u)); FPUSH(v); }
/* 4f0994: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f0997: fchs  */
  ST0 = -ST0;
/* 4f0999: lea ecx, [ecx*4 + 0x5b3234] */
  ecx = (uint32_t)(ecx*4 + 0x5b3234u);
/* 4f09a0: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f09a4: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4f09a9: lea eax, [eax*4 + 0x5b3234] */
  eax = (uint32_t)(eax*4 + 0x5b3234u);
/* 4f09b0: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 4f09b4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f09b6: mov eax, edx */
  eax = edx;
/* 4f09b8: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 4f09c0: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 4f09c4: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f09cc: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 4f09d4: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 4f09dc: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 4f09e0: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 4f09e8: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 4f09f0: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 4f09f4: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 4f09f8: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 4f09fc: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 4f0a00: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4f0a04: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 4f0a0c: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 4f0a10: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 4f0a18: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 4f0a1c: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 4f0a20: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4f0a24: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 4f0a28: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 4f0a2c: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 4f0a30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f0a34: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 4f0a38: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f0a3c: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 4f0a40: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f0a44: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 4f0a48: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 4f0a4c: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 4f0a50: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f0a54: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 4f0a58: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4f0a5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f0a5d: mov ecx, esi */
  ecx = esi;
/* 4f0a5f: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 4f0a63: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 4f0a67: call 0x4e2d33 */
  esp -= 4; W32(esp, 0x4f0a6cu); SPILL(); f_4e2d33(); if (g_unwind) return; RELOAD();
/* 4f0a6c: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 4f0a6f: mov edx, edi */
  edx = edi;
/* 4f0a71: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 4f0a74: and edx, 0x3fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f0a7a: mov ecx, dword ptr [edx*4 + 0x5b3234] */
  ecx = R32((uint32_t)(edx*4 + 0x5b3234u));
/* 4f0a81: fld dword ptr [edx*4 + 0x5b3234] */
  { double v = F32((uint32_t)(edx*4 + 0x5b3234u)); FPUSH(v); }
/* 4f0a88: lea eax, [edx*4 + 0x5b3234] */
  eax = (uint32_t)(edx*4 + 0x5b3234u);
/* 4f0a8f: fchs  */
  ST0 = -ST0;
/* 4f0a91: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 4f0a95: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f0a99: lea ecx, [edi + 0x4000] */
  ecx = (uint32_t)(edi + 0x4000u);
/* 4f0a9f: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4f0aa2: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4f0aa8: mov edx, dword ptr [ecx*4 + 0x5b3234] */
  edx = R32((uint32_t)(ecx*4 + 0x5b3234u));
/* 4f0aaf: lea ecx, [ecx*4 + 0x5b3234] */
  ecx = (uint32_t)(ecx*4 + 0x5b3234u);
/* 4f0ab6: mov ecx, edx */
  ecx = edx;
/* 4f0ab8: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 4f0abc: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 4f0ac0: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 4f0ac8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f0acc: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 4f0ad4: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f0ad8: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 4f0ae0: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f0ae4: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 4f0ae8: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f0aec: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 4f0af0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 4f0af4: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 4f0af8: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 4f0b00: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 4f0b04: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 4f0b08: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f0b0c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 4f0b10: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4f0b14: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 4f0b18: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 4f0b20: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4f0b24: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 4f0b2c: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 4f0b34: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
/* 4f0b3c: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 4f0b40: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f0b44: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 4f0b48: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f0b4c: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 4f0b50: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f0b54: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 4f0b58: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 4f0b5c: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 4f0b60: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 4f0b64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f0b65: mov ecx, esi */
  ecx = esi;
/* 4f0b67: call 0x4e2d33 */
  esp -= 4; W32(esp, 0x4f0b6cu); SPILL(); f_4e2d33(); if (g_unwind) return; RELOAD();
/* 4f0b6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f0b6d: mov eax, esi */
  eax = esi;
/* 4f0b6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f0b70: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0b73: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f0c50(void) {
  LOAD_REGS();
L_4f0c50: /* 4f0c50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f0c54: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0c57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0c58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0c59: mov esi, ecx */
  esi = ecx;
/* 4f0c5b: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0c60: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f0c64: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0c66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f0c67: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f0c6b: call 0x4e3a8f */
  esp -= 4; W32(esp, 0x4f0c70u); SPILL(); f_4e3a8f(); if (g_unwind) return; RELOAD();
/* 4f0c70: mov esi, eax */
  esi = eax;
/* 4f0c72: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f0c76: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0c7b: mov edi, eax */
  edi = eax;
/* 4f0c7d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0c7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f0c80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f0c81: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0c84: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0ca0(void) {
  LOAD_REGS();
L_4f0ca0: /* 4f0ca0: mov eax, ecx */
  eax = ecx;
/* 4f0ca2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f0ca6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f0ca8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 4f0caa: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4f0cac: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f0caf: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 4f0cb2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f0cb5: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f0cb8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 4f0cbb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f0cbe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f0ce0(void) {
  LOAD_REGS();
L_4f0ce0: /* 4f0ce0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0ce3: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 4f0ce7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0ce8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0ce9: mov esi, ecx */
  esi = ecx;
/* 4f0ceb: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0cf0: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f0cf4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0cf6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f0cfa: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 4f0cfc: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f0d00: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f0d04: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 4f0d07: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f0d0b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f0d0f: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 4f0d12: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f0d16: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0d1b: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 4f0d1f: mov edi, eax */
  edi = eax;
/* 4f0d21: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f0d25: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0d27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f0d28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f0d29: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0d2c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0d50(void) {
  LOAD_REGS();
L_4f0d50: /* 4f0d50: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0d53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f0d54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f0d55: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 4f0d59: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4f0d5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0d5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0d5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f0d5f: mov ebx, ecx */
  ebx = ecx;
/* 4f0d61: call 0x4e2fe5 */
  esp -= 4; W32(esp, 0x4f0d66u); SPILL(); f_4e2fe5(); if (g_unwind) return; RELOAD();
/* 4f0d66: movzx eax, byte ptr [ebp + 0x10] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0x10u)));
/* 4f0d6a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0d6d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4f0d6e: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4f0d71: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0d76: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 4f0d7b: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 4f0d7f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0d81: ja 0x4f0dae */
  if ((!cf && !zf)) goto L_4f0dae;
L_4f0d83: /* 4f0d83: jmp dword ptr [eax*4 + 0x4f0e34] */
  switch (R32((uint32_t)(eax*4 + 0x4f0e34u))) {
    case 0x4f0d8au: goto L_4f0d8a;
    case 0x4f0d90u: goto L_4f0d90;
    case 0x4f0d96u: goto L_4f0d96;
    case 0x4f0d9cu: goto L_4f0d9c;
    case 0x4f0da2u: goto L_4f0da2;
    case 0x4f0da8u: goto L_4f0da8;
    default: guest_badjump(0x4f0d83, R32((uint32_t)(eax*4 + 0x4f0e34u))); return;
  }
L_4f0d8a: /* 4f0d8a: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f0d8e: jmp 0x4f0db0 */
  goto L_4f0db0;
L_4f0d90: /* 4f0d90: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f0d94: jmp 0x4f0db0 */
  goto L_4f0db0;
L_4f0d96: /* 4f0d96: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f0d9a: jmp 0x4f0db0 */
  goto L_4f0db0;
L_4f0d9c: /* 4f0d9c: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 4f0da0: jmp 0x4f0db0 */
  goto L_4f0db0;
L_4f0da2: /* 4f0da2: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f0da6: jmp 0x4f0db0 */
  goto L_4f0db0;
L_4f0da8: /* 4f0da8: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f0dac: jmp 0x4f0db0 */
  goto L_4f0db0;
L_4f0dae: /* 4f0dae: fstp st(0) */
  STI(0) = ST0; FPOP();
L_4f0db0: /* 4f0db0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4f0db4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f0db5: mov ecx, ebx */
  ecx = ebx;
/* 4f0db7: call 0x4e2d33 */
  esp -= 4; W32(esp, 0x4f0dbcu); SPILL(); f_4e2d33(); if (g_unwind) return; RELOAD();
/* 4f0dbc: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 4f0dbf: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 4f0dc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f0dc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f0dc4: mov eax, ebx */
  eax = ebx;
/* 4f0dc6: fstp dword ptr [ebx + 0xc] */
  WF32((uint32_t)(ebx + 0xcu), ST0); FPOP();
/* 4f0dc9: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 4f0dcc: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 4f0dcf: fstp dword ptr [ebx + 0x10] */
  WF32((uint32_t)(ebx + 0x10u), ST0); FPOP();
/* 4f0dd2: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 4f0dd5: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 4f0dd8: fstp dword ptr [ebx + 0x14] */
  WF32((uint32_t)(ebx + 0x14u), ST0); FPOP();
/* 4f0ddb: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 4f0dde: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 4f0de1: fstp dword ptr [ebx + 0x18] */
  WF32((uint32_t)(ebx + 0x18u), ST0); FPOP();
/* 4f0de4: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 4f0de7: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 4f0dea: fstp dword ptr [ebx + 0x1c] */
  WF32((uint32_t)(ebx + 0x1cu), ST0); FPOP();
/* 4f0ded: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 4f0df0: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 4f0df3: fstp dword ptr [ebx + 0x20] */
  WF32((uint32_t)(ebx + 0x20u), ST0); FPOP();
/* 4f0df6: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 4f0df9: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 4f0dfc: fstp dword ptr [ebx + 0x24] */
  WF32((uint32_t)(ebx + 0x24u), ST0); FPOP();
/* 4f0dff: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 4f0e02: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 4f0e05: fstp dword ptr [ebx + 0x28] */
  WF32((uint32_t)(ebx + 0x28u), ST0); FPOP();
/* 4f0e08: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 4f0e0b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 4f0e0e: fstp dword ptr [ebx + 0x2c] */
  WF32((uint32_t)(ebx + 0x2cu), ST0); FPOP();
/* 4f0e11: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 4f0e13: fdiv dword ptr [ebp] */
  ST0 = ST0 / (F32((uint32_t)(ebp)));
/* 4f0e16: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 4f0e18: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 4f0e1b: fdiv dword ptr [ebp + 4] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x4u)));
/* 4f0e1e: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 4f0e21: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 4f0e24: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 4f0e27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f0e28: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 4f0e2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f0e2c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0e2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f0e90(void) {
  LOAD_REGS();
L_4f0e90: /* 4f0e90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f0e94: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0e97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0e98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0e99: mov esi, ecx */
  esi = ecx;
/* 4f0e9b: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0ea0: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f0ea4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0ea6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f0ea7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f0eab: call 0x4e29a0 */
  esp -= 4; W32(esp, 0x4f0eb0u); SPILL(); f_4e29a0(); if (g_unwind) return; RELOAD();
/* 4f0eb0: mov esi, eax */
  esi = eax;
/* 4f0eb2: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f0eb6: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0ebb: mov edi, eax */
  edi = eax;
/* 4f0ebd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0ebf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f0ec0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f0ec1: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0ec4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f0ee0(void) {
  LOAD_REGS();
L_4f0ee0: /* 4f0ee0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f0ee3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f0ee4: mov ebx, ecx */
  ebx = ecx;
/* 4f0ee6: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 4f0ee9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f0eea: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 4f0eee: fdiv dword ptr [ebp] */
  ST0 = ST0 / (F32((uint32_t)(ebp)));
/* 4f0ef1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f0ef2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f0ef3: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f0ef8: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 4f0efd: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 4f0f01: fstp dword ptr [ebx + 0xc] */
  WF32((uint32_t)(ebx + 0xcu), ST0); FPOP();
/* 4f0f04: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 4f0f07: fdiv dword ptr [ebp + 4] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x4u)));
/* 4f0f0a: fstp dword ptr [ebx + 0x10] */
  WF32((uint32_t)(ebx + 0x10u), ST0); FPOP();
/* 4f0f0d: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 4f0f10: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 4f0f13: fstp dword ptr [ebx + 0x14] */
  WF32((uint32_t)(ebx + 0x14u), ST0); FPOP();
/* 4f0f16: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 4f0f19: fdiv dword ptr [ebp] */
  ST0 = ST0 / (F32((uint32_t)(ebp)));
/* 4f0f1c: fstp dword ptr [ebx + 0x18] */
  WF32((uint32_t)(ebx + 0x18u), ST0); FPOP();
/* 4f0f1f: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 4f0f22: fdiv dword ptr [ebp + 4] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x4u)));
/* 4f0f25: fstp dword ptr [ebx + 0x1c] */
  WF32((uint32_t)(ebx + 0x1cu), ST0); FPOP();
/* 4f0f28: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 4f0f2b: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 4f0f2e: fstp dword ptr [ebx + 0x20] */
  WF32((uint32_t)(ebx + 0x20u), ST0); FPOP();
/* 4f0f31: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 4f0f34: fdiv dword ptr [ebp] */
  ST0 = ST0 / (F32((uint32_t)(ebp)));
/* 4f0f37: fstp dword ptr [ebx + 0x24] */
  WF32((uint32_t)(ebx + 0x24u), ST0); FPOP();
/* 4f0f3a: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 4f0f3d: fdiv dword ptr [ebp + 4] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x4u)));
/* 4f0f40: fstp dword ptr [ebx + 0x28] */
  WF32((uint32_t)(ebx + 0x28u), ST0); FPOP();
/* 4f0f43: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 4f0f46: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 4f0f49: fstp dword ptr [ebx + 0x2c] */
  WF32((uint32_t)(ebx + 0x2cu), ST0); FPOP();
/* 4f0f4c: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 4f0f4f: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 4f0f51: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 4f0f53: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 4f0f56: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 4f0f59: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 4f0f5c: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 4f0f5f: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 4f0f62: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 4f0f65: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4f0f68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f0f69: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f0f6b: call 0x4e2fe5 */
  esp -= 4; W32(esp, 0x4f0f70u); SPILL(); f_4e2fe5(); if (g_unwind) return; RELOAD();
/* 4f0f70: movzx eax, byte ptr [ebp + 0x10] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0x10u)));
/* 4f0f74: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 4f0f78: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0f7b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4f0f7c: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4f0f7f: ja 0x4f0fce */
  if ((!cf && !zf)) goto L_4f0fce;
L_4f0f81: /* 4f0f81: jmp dword ptr [eax*4 + 0x4f0fe8] */
  switch (R32((uint32_t)(eax*4 + 0x4f0fe8u))) {
    case 0x4f0f88u: goto L_4f0f88;
    case 0x4f0f94u: goto L_4f0f94;
    case 0x4f0fa0u: goto L_4f0fa0;
    case 0x4f0facu: goto L_4f0fac;
    case 0x4f0fb8u: goto L_4f0fb8;
    case 0x4f0fc4u: goto L_4f0fc4;
    default: guest_badjump(0x4f0f81, R32((uint32_t)(eax*4 + 0x4f0fe8u))); return;
  }
L_4f0f88: /* 4f0f88: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 4f0f8c: fchs  */
  ST0 = -ST0;
/* 4f0f8e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f0f92: jmp 0x4f0fce */
  goto L_4f0fce;
L_4f0f94: /* 4f0f94: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 4f0f98: fchs  */
  ST0 = -ST0;
/* 4f0f9a: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f0f9e: jmp 0x4f0fce */
  goto L_4f0fce;
L_4f0fa0: /* 4f0fa0: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 4f0fa4: fchs  */
  ST0 = -ST0;
/* 4f0fa6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f0faa: jmp 0x4f0fce */
  goto L_4f0fce;
L_4f0fac: /* 4f0fac: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 4f0fb0: fchs  */
  ST0 = -ST0;
/* 4f0fb2: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 4f0fb6: jmp 0x4f0fce */
  goto L_4f0fce;
L_4f0fb8: /* 4f0fb8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 4f0fbc: fchs  */
  ST0 = -ST0;
/* 4f0fbe: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f0fc2: jmp 0x4f0fce */
  goto L_4f0fce;
L_4f0fc4: /* 4f0fc4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 4f0fc8: fchs  */
  ST0 = -ST0;
/* 4f0fca: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_4f0fce: /* 4f0fce: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4f0fd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f0fd3: mov ecx, ebx */
  ecx = ebx;
/* 4f0fd5: call 0x4e2d33 */
  esp -= 4; W32(esp, 0x4f0fdau); SPILL(); f_4e2d33(); if (g_unwind) return; RELOAD();
/* 4f0fda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f0fdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f0fdc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f0fdd: mov eax, ebx */
  eax = ebx;
/* 4f0fdf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f0fe0: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f0fe3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f1050(void) {
  LOAD_REGS();
L_4f1050: /* 4f1050: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f1054: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f1057: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f1058: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f1059: mov esi, ecx */
  esi = ecx;
/* 4f105b: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f1060: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f1064: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f1066: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f1067: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f106b: call 0x4e32a6 */
  esp -= 4; W32(esp, 0x4f1070u); SPILL(); f_4e32a6(); if (g_unwind) return; RELOAD();
/* 4f1070: mov esi, eax */
  esi = eax;
/* 4f1072: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f1076: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f107b: mov edi, eax */
  edi = eax;
/* 4f107d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f107f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f1080: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f1081: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f1084: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f10a0(void) {
  LOAD_REGS();
L_4f10a0: /* 4f10a0: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f10a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f10a4: mov eax, ecx */
  eax = ecx;
/* 4f10a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f10a7: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f10ac: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 4f10b1: lea edi, [esp + 0x38] */
  edi = (uint32_t)(esp + 0x38u);
/* 4f10b5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f10b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f10b8: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 4f10bc: call 0x4e3a8f */
  esp -= 4; W32(esp, 0x4f10c1u); SPILL(); f_4e3a8f(); if (g_unwind) return; RELOAD();
/* 4f10c1: mov esi, eax */
  esi = eax;
/* 4f10c3: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 4f10c7: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f10cc: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f10d0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f10d2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f10d6: mov ecx, eax */
  ecx = eax;
/* 4f10d8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f10da: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f10de: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f10e1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4f10e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f10e6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f10e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f10ea: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f10ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f1110(void) {
  LOAD_REGS();
L_4f1110: /* 4f1110: mov eax, ecx */
  eax = ecx;
/* 4f1112: ret  */
  esp += 4; SPILL(); return;
}

void f_4f1130(void) {
  LOAD_REGS();
L_4f1130: /* 4f1130: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f1134: mov eax, ecx */
  eax = ecx;
/* 4f1136: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f113a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f113c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f1140: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f1143: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f1147: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f114a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4f114d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4f1160(void) {
  LOAD_REGS();
L_4f1160: /* 4f1160: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f1164: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4f1167: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 4f116a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f116d: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4f1170: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f1173: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4f1176: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f1178: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f117c: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4f117e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4f1180: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f1183: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f1186: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4f1189: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f11a0(void) {
  LOAD_REGS();
L_4f11a0: /* 4f11a0: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f11a3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f11a7: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 4f11aa: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f11ad: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 4f11b0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f11b3: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 4f11b6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f11b8: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 4f11ba: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f11be: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4f11c0: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f11c3: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f11c6: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4f11c9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f11e0(void) {
  LOAD_REGS();
L_4f11e0: /* 4f11e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f11e4: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f11e7: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 4f11ea: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f11ec: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f11ee: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f11f0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f11f3: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f11f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f11f8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f11fb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f11fe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f1200: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f1203: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f1206: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f1209: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f120b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f120d: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f1210: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f1212: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f1214: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f1217: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 4f121a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f121c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f121f: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f1222: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f1225: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f1227: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f1229: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f122c: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 4f122f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1231: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f1234: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f1236: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1238: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f123b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f123d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f123f: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 4f1242: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1244: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f1247: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f124a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f124c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f124f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f1252: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f1256: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f1258: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4f125a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f125d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f1260: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4f1263: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f12a0(void) {
  LOAD_REGS();
L_4f12a0: /* 4f12a0: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f12a3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f12a7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f12a9: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f12ac: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f12ae: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f12b1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f12b3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f12b5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f12b9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f12bb: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4f12bd: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f12c0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f12c3: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4f12c6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f12e0(void) {
  LOAD_REGS();
L_4f12e0: /* 4f12e0: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f12e3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f12e7: fchs  */
  ST0 = -ST0;
/* 4f12e9: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f12ec: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f12ef: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f12f1: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f12f4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f12f6: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f12f9: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4f12fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f1310(void) {
  LOAD_REGS();
L_4f1310: /* 4f1310: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f1312: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f1316: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 4f1318: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f131a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f131d: jp 0x4f134b */
  if (pf) goto L_4f134b;
L_4f131f: /* 4f131f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f1322: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 4f1325: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f1327: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f132a: jp 0x4f134b */
  if (pf) goto L_4f134b;
L_4f132c: /* 4f132c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f132f: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 4f1332: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f1334: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f1337: jp 0x4f134b */
  if (pf) goto L_4f134b;
L_4f1339: /* 4f1339: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f133c: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 4f133f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f1341: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f1344: jp 0x4f134b */
  if (pf) goto L_4f134b;
L_4f1346: /* 4f1346: xor eax, eax */
  eax = 0;
/* 4f1348: ret 4 */
  esp += 8; SPILL(); return;
L_4f134b: /* 4f134b: mov eax, 1 */
  eax = 0x1u;
/* 4f1350: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f1380(void) {
  LOAD_REGS();
L_4f1380: /* 4f1380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f1381: mov esi, ecx */
  esi = ecx;
/* 4f1383: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f1386: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f1389: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f138c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f138e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f1390: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f1392: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f1394: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f1396: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1398: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4f139a: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f139c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f139e: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 4f13a0: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 4f13a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f13a4: fstp st(4) */
  STI(4) = ST0; FPOP();
/* 4f13a6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f13a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f13aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f13ac: fcom dword ptr [0x5694f4] */
  fpu_com(ST0, F32((uint32_t)(0x5694f4u)));
/* 4f13b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f13b4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f13b7: jne 0x4f13f0 */
  if (!zf) goto L_4f13f0;
L_4f13b9: /* 4f13b9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f13bc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4f13bf: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x4f13c4u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 4f13c4: fdivr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) / ST0;
/* 4f13ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f13cd: mov eax, 1 */
  eax = 0x1u;
/* 4f13d2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f13d4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f13d6: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 4f13d8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f13da: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f13dd: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 4f13e0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f13e2: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f13e5: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 4f13e8: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4f13eb: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 4f13ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f13ef: ret  */
  esp += 4; SPILL(); return;
L_4f13f0: /* 4f13f0: xor eax, eax */
  eax = 0;
/* 4f13f2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f13f4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4f13f6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f13f9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f13fc: mov dword ptr [esi + 0xc], 0x3f800000 */
  W32((uint32_t)(esi + 0xcu), 0x3f800000u);
/* 4f1403: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f1404: ret  */
  esp += 4; SPILL(); return;
}

void f_4f1440(void) {
  LOAD_REGS();
L_4f1440: /* 4f1440: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f1443: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f1444: mov esi, ecx */
  esi = ecx;
/* 4f1446: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f1449: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f144c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4f144f: call 0x4e3e0e */
  esp -= 4; W32(esp, 0x4f1454u); SPILL(); f_4e3e0e(); if (g_unwind) return; RELOAD();
/* 4f1454: fcom dword ptr [0x5694f4] */
  fpu_com(ST0, F32((uint32_t)(0x5694f4u)));
/* 4f145a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f145d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f145f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f1462: jne 0x4f1499 */
  if (!zf) goto L_4f1499;
L_4f1464: /* 4f1464: fdivr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) / ST0;
/* 4f146a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f146d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f146f: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f1472: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 4f1476: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f1478: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f147b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f147f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f1483: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f1486: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4f1489: call 0x4e1212 */
  esp -= 4; W32(esp, 0x4f148eu); SPILL(); f_4e1212(); if (g_unwind) return; RELOAD();
/* 4f148e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f1490: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f1493: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f1497: jmp 0x4f14bb */
  goto L_4f14bb;
L_4f1499: /* 4f1499: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f149b: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 4f14a3: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 4f14ab: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 4f14b3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_4f14bb: /* 4f14bb: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4f14bf: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f14c3: mov ecx, eax */
  ecx = eax;
/* 4f14c5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f14c7: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f14cb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f14ce: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f14d2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f14d5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f14d9: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 4f14dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f14dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f14e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f1520(void) {
  LOAD_REGS();
L_4f1520: /* 4f1520: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f1523: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f1524: mov esi, ecx */
  esi = ecx;
/* 4f1526: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f1529: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f152c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f152e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f1530: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f1532: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f1534: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f1536: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1538: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4f153a: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f153c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f153e: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 4f1540: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f1542: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f1544: fcom dword ptr [0x5694f4] */
  fpu_com(ST0, F32((uint32_t)(0x5694f4u)));
/* 4f154a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f154c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f154f: jne 0x4f1594 */
  if (!zf) goto L_4f1594;
L_4f1551: /* 4f1551: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f1554: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4f1557: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x4f155cu); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 4f155c: fdivr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) / ST0;
/* 4f1562: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f1564: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f1566: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f156a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f156c: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f156f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f1573: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f1576: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f157a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f157d: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 4f1583: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4f1586: call 0x4e1807 */
  esp -= 4; W32(esp, 0x4f158bu); SPILL(); f_4e1807(); if (g_unwind) return; RELOAD();
/* 4f158b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f158f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f1592: jmp 0x4f15b6 */
  goto L_4f15b6;
L_4f1594: /* 4f1594: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f1596: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 4f159e: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 4f15a6: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 4f15ae: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_4f15b6: /* 4f15b6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4f15ba: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f15be: mov ecx, eax */
  ecx = eax;
/* 4f15c0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f15c2: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f15c6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f15c9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f15cd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f15d0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f15d4: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 4f15d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f15d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f15db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f1610(void) {
  LOAD_REGS();
L_4f1610: /* 4f1610: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f1613: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f1615: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f1618: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f161b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f161f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 4f1623: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f1625: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 4f1629: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 4f162d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f162f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f1633: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 4f1637: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 4f163b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f163d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f163f: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 4f1643: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f1645: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4f1647: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 4f164b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f164d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f1651: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f1654: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f1656: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f165a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f165c: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 4f1660: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f1664: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 4f1668: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 4f166c: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 4f1670: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f1673: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f1675: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f1677: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f167b: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 4f167f: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* 4f1681: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 4f1683: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1685: fld st(6) */
  { double v = STI(6); FPUSH(v); }
/* 4f1687: fmul st(7) */
  ST0 = ST0 * STI(7);
/* 4f1689: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f168b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f168d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f1691: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f1693: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 4f1697: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 4f169b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 4f169f: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 4f16a3: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 4f16a7: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 4f16ab: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f16af: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f16b1: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 4f16b5: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f16b9: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 4f16bb: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f16bf: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 4f16c3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 4f16c5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f16c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f16cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f16cd: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 4f16d1: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 4f16d5: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 4f16d9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 4f16db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f16dd: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 4f16e1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f16e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f16e5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 4f16e7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 4f16eb: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 4f16ef: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 4f16f1: mov ecx, eax */
  ecx = eax;
/* 4f16f3: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f16f7: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 4f16fb: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 4f16fd: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f1701: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 4f1705: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4f1709: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 4f170d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f1711: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f1715: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f1717: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f1719: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 4f171d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f1721: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f1725: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f1728: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 4f172c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f1730: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f1734: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f1737: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f173a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4f1790(void) {
  LOAD_REGS();
L_4f1790: /* 4f1790: mov eax, ecx */
  eax = ecx;
/* 4f1792: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f1796: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f1797: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4f1799: mov edx, eax */
  edx = eax;
/* 4f179b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4f179d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4f17a0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4f17a3: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 4f17a6: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 4f17a9: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4f17ac: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 4f17af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f17b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f17d0(void) {
  LOAD_REGS();
L_4f17d0: /* 4f17d0: mov eax, ecx */
  eax = ecx;
/* 4f17d2: ret  */
  esp += 4; SPILL(); return;
}

void f_4f17f0(void) {
  LOAD_REGS();
L_4f17f0: /* 4f17f0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f17f4: mov eax, ecx */
  eax = ecx;
/* 4f17f6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f17fa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f17fc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f1800: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f1803: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f1807: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f180a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4f180e: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4f1811: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f1815: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4f1818: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4f181c: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 4f181f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f1823: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 4f1826: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4f182a: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 4f182d: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4f1831: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 4f1834: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 4f1838: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 4f183b: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 4f183f: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 4f1842: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f1846: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 4f1849: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 4f184d: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 4f1850: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 4f1854: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 4f1857: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 4f185b: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 4f185e: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 4f1861: ret 0x40 */
  esp += 68; SPILL(); return;
}

void f_4f1890(void) {
  LOAD_REGS();
L_4f1890: /* 4f1890: ret  */
  esp += 4; SPILL(); return;
}

void f_4f18b0(void) {
  LOAD_REGS();
L_4f18b0: /* 4f18b0: xor eax, eax */
  eax = 0;
/* 4f18b2: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 4f18b7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f18b9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 4f18bc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f18bf: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 4f18c2: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 4f18c5: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 4f18c8: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* 4f18cb: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 4f18ce: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 4f18d1: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 4f18d4: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 4f18d7: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 4f18da: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 4f18dd: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 4f18e0: mov dword ptr [ecx + 0x38], eax */
  W32((uint32_t)(ecx + 0x38u), eax);
/* 4f18e3: mov dword ptr [ecx + 0x3c], edx */
  W32((uint32_t)(ecx + 0x3cu), edx);
/* 4f18e6: ret  */
  esp += 4; SPILL(); return;
}

void f_4f1900(void) {
  LOAD_REGS();
L_4f1900: /* 4f1900: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f1903: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f1907: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f1908: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f190b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f190c: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4f1910: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f1912: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1914: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 4f191b: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f191e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1920: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 4f1924: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f1927: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1929: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f192d: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 4f1931: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f1934: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4f1938: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f193a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f193c: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 4f1943: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f1946: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1948: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 4f194c: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f194f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1951: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f1955: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 4f1959: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f195c: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f1960: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f1962: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1964: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 4f196b: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f196e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1970: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 4f1974: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f1977: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1979: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f197d: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 4f1981: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f1984: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 4f1988: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f198a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f198c: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 4f1993: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f1996: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1998: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 4f199c: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f199f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f19a1: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f19a5: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 4f19ac: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f19af: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 4f19b3: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f19b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f19b8: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4f19bc: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 4f19bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f19c1: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 4f19c5: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f19c8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f19ca: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f19ce: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 4f19d5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f19d8: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 4f19dc: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f19df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f19e1: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4f19e5: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 4f19e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f19ea: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 4f19ee: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f19f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f19f3: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f19f7: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 4f19fe: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f1a01: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 4f1a05: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f1a08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a0a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f1a0e: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 4f1a11: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a13: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 4f1a17: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f1a1a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a1c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f1a20: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 4f1a27: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f1a2a: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 4f1a2e: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f1a31: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a33: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 4f1a37: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 4f1a3a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a3c: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 4f1a40: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f1a43: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a45: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f1a49: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 4f1a50: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 4f1a53: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 4f1a57: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f1a5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a5c: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4f1a60: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f1a63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a65: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 4f1a69: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4f1a6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a6e: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f1a72: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 4f1a79: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 4f1a7c: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 4f1a80: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f1a83: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a85: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4f1a89: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f1a8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a8e: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 4f1a92: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4f1a95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1a97: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f1a9b: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 4f1aa2: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 4f1aa5: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 4f1aa9: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f1aac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1aae: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f1ab2: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f1ab5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ab7: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 4f1abb: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4f1abe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ac0: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 4f1ac4: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 4f1acb: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 4f1ace: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 4f1ad2: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f1ad5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ad7: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 4f1adb: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f1ade: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ae0: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 4f1ae4: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4f1ae7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ae9: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f1aed: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 4f1af4: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* 4f1af7: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 4f1afb: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* 4f1afe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b00: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4f1b04: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 4f1b07: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b09: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 4f1b0d: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* 4f1b10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b12: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f1b16: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 4f1b1d: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* 4f1b20: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 4f1b24: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* 4f1b27: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b29: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 4f1b2d: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4f1b31: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 4f1b35: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 4f1b38: mov edi, eax */
  edi = eax;
/* 4f1b3a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b3c: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 4f1b40: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* 4f1b43: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b45: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 4f1b49: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 4f1b50: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* 4f1b53: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 4f1b57: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* 4f1b5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b5c: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f1b60: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 4f1b63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b65: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 4f1b69: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* 4f1b6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b6e: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 4f1b72: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 4f1b79: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* 4f1b7c: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 4f1b80: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* 4f1b83: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b85: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 4f1b89: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 4f1b8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b8e: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 4f1b92: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* 4f1b95: mov ecx, 0x10 */
  ecx = 0x10u;
/* 4f1b9a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1b9c: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 4f1ba0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f1ba2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f1ba3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f1ba4: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f1ba7: ret 0x44 */
  esp += 72; SPILL(); return;
}

void f_4f1c60(void) {
  LOAD_REGS();
L_4f1c60: /* 4f1c60: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f1c63: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4f1c67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f1c68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f1c69: mov edi, ecx */
  edi = ecx;
/* 4f1c6b: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 4f1c6e: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 4f1c72: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 4f1c74: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1c76: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 4f1c7a: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 4f1c7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1c7f: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 4f1c83: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 4f1c86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1c88: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f1c8c: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 4f1c90: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 4f1c93: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4f1c97: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 4f1c99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1c9b: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 4f1ca2: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 4f1ca5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ca7: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 4f1cab: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 4f1cae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1cb0: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f1cb4: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 4f1cb8: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 4f1cbb: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4f1cbf: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 4f1cc1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1cc3: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 4f1cca: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 4f1ccd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ccf: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 4f1cd3: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 4f1cd6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1cd8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f1cdc: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 4f1ce0: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 4f1ce3: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f1ce7: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 4f1ce9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ceb: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 4f1cf2: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 4f1cf5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1cf7: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 4f1cfb: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 4f1cfe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d00: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f1d04: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 4f1d08: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 4f1d0b: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 4f1d0f: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 4f1d12: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d14: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 4f1d18: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 4f1d1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d1d: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 4f1d21: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 4f1d24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d26: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f1d2a: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 4f1d31: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 4f1d34: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 4f1d38: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 4f1d3b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d3d: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4f1d41: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 4f1d44: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d46: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 4f1d4a: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 4f1d4d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d4f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f1d53: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 4f1d5a: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 4f1d5d: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 4f1d61: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 4f1d64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d66: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4f1d6a: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 4f1d6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d6f: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 4f1d73: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 4f1d76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d78: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f1d7c: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 4f1d83: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 4f1d86: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 4f1d8a: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 4f1d8d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d8f: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f1d93: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 4f1d96: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1d98: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 4f1d9c: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 4f1d9f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1da1: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f1da5: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 4f1da9: fmul dword ptr [edi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x2cu)));
/* 4f1dac: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 4f1db0: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 4f1db3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1db5: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 4f1db9: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 4f1dbc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1dbe: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 4f1dc2: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 4f1dc5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1dc7: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f1dcb: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 4f1dd2: fmul dword ptr [edi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x2cu)));
/* 4f1dd5: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 4f1dd9: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 4f1ddc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1dde: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4f1de2: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 4f1de5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1de7: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 4f1deb: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 4f1dee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1df0: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f1df4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 4f1dfb: fmul dword ptr [edi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x2cu)));
/* 4f1dfe: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 4f1e02: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 4f1e05: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e07: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4f1e0b: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 4f1e0e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e10: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 4f1e14: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 4f1e17: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e19: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 4f1e1d: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 4f1e24: fmul dword ptr [edi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x2cu)));
/* 4f1e27: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 4f1e2b: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 4f1e2e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e30: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f1e34: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 4f1e37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e39: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 4f1e3d: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 4f1e40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e42: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f1e46: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 4f1e4a: fmul dword ptr [edi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3cu)));
/* 4f1e4d: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 4f1e51: fmul dword ptr [edi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x38u)));
/* 4f1e54: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e56: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 4f1e5a: fmul dword ptr [edi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x30u)));
/* 4f1e5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e5f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 4f1e63: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 4f1e66: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e68: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f1e6c: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 4f1e73: fmul dword ptr [edi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3cu)));
/* 4f1e76: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 4f1e7a: fmul dword ptr [edi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x38u)));
/* 4f1e7d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 4f1e82: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 4f1e86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e88: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 4f1e8c: fmul dword ptr [edi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x30u)));
/* 4f1e8f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e91: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 4f1e95: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 4f1e98: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1e9a: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 4f1e9e: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 4f1ea5: fmul dword ptr [edi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3cu)));
/* 4f1ea8: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 4f1eac: fmul dword ptr [edi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x38u)));
/* 4f1eaf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1eb1: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 4f1eb5: fmul dword ptr [edi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x30u)));
/* 4f1eb8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1eba: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 4f1ebe: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 4f1ec1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ec3: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 4f1ec7: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 4f1ece: fmul dword ptr [edi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3cu)));
/* 4f1ed1: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 4f1ed5: fmul dword ptr [edi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x38u)));
/* 4f1ed8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1eda: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f1ede: fmul dword ptr [edi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x30u)));
/* 4f1ee1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1ee3: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 4f1ee7: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 4f1eea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f1eec: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 4f1ef0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f1ef2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f1ef3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f1ef4: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f1ef7: ret 0x40 */
  esp += 68; SPILL(); return;
}
