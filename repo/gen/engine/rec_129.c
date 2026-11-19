#include "recomp.h"
#include "rec_mod.h"

void f_93b5f0(void) {
  LOAD_REGS();
L_93b5f0: /* 93b5f0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93b5f3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93b5f6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93b5f8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93b5fa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93b5fc: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93b5ff: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93b602: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93b604: fsqrt  */
  ST0 = sqrt(ST0);
/* 93b606: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93b60c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b60e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93b611: jnp 0x93b62f */
  if (!pf) goto L_93b62f;
L_93b613: /* 93b613: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93b619: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 93b61b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93b61d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93b61f: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 93b621: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93b623: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93b626: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 93b629: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93b62c: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
L_93b62f: /* 93b62f: ret  */
  esp += 4; SPILL(); return;
}

void f_93b630(void) {
  LOAD_REGS();
L_93b630: /* 93b630: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 93b634: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93b637: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93b63a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 93b63d: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93b640: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93b642: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93b644: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93b647: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93b649: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93b64c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93b64e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 93b651: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93b653: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93b656: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93b658: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 93b65c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93b65e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 93b660: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93b662: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93b665: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 93b668: ret 8 */
  esp += 12; SPILL(); return;
}

void f_93b670(void) {
  LOAD_REGS();
L_93b670: /* 93b670: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* 93b673: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93b674: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 93b678: mov ecx, esi */
  ecx = esi;
/* 93b67a: mov eax, 1 */
  eax = 0x1u;
/* 93b67f: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 93b681: mov edx, 1 */
  edx = 0x1u;
/* 93b686: mov dword ptr [esp + esi*4 + 4], 0 */
  W32((uint32_t)(esp + esi*4 + 0x4u), 0x0u);
/* 93b68e: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 93b691: mov ecx, eax */
  ecx = eax;
/* 93b693: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 93b695: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93b699: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 93b69c: fchs  */
  ST0 = -ST0;
/* 93b69e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 93b6a1: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 93b6a4: mov dword ptr [esp + eax*4 + 4], esi */
  W32((uint32_t)(esp + eax*4 + 0x4u), esi);
/* 93b6a8: fstp dword ptr [esp + edx*4 + 4] */
  WF32((uint32_t)(esp + edx*4 + 0x4u), ST0); FPOP();
/* 93b6ac: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 93b6b0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 93b6b4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 93b6b8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93b6ba: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 93b6be: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 93b6c1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93b6c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93b6c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b6c8: ret  */
  esp += 4; SPILL(); return;
}

void f_93b6d0(void) {
  LOAD_REGS();
L_93b6d0: /* 93b6d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* 93b6d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93b6d4: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 93b6d8: mov ecx, esi */
  ecx = esi;
/* 93b6da: mov eax, 1 */
  eax = 0x1u;
/* 93b6df: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 93b6e1: mov edx, 1 */
  edx = 0x1u;
/* 93b6e6: mov dword ptr [esp + esi*4 + 4], 0 */
  W32((uint32_t)(esp + esi*4 + 0x4u), 0x0u);
/* 93b6ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93b6ef: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 93b6f2: mov ecx, eax */
  ecx = eax;
/* 93b6f4: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 93b6f6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93b6fa: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 93b6fd: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 93b700: fchs  */
  ST0 = -ST0;
/* 93b702: fstp dword ptr [esp + eax*4] */
  WF32((uint32_t)(esp + eax*4), ST0); FPOP();
/* 93b706: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 93b709: mov dword ptr [esp + edx*4], eax */
  W32((uint32_t)(esp + edx*4), eax);
/* 93b70d: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 93b711: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 93b715: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 93b719: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93b71b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 93b71f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 93b722: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93b725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b728: ret  */
  esp += 4; SPILL(); return;
}

void f_93b730(void) {
  LOAD_REGS();
L_93b730: /* 93b730: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93b734: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93b737: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93b738: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b739: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 93b73d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 93b741: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b744: call 0x9349f0 */
  esp -= 4; W32(esp, 0x93b749u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 93b749: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b74c: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 93b750: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b751: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 93b755: call 0x934970 */
  esp -= 4; W32(esp, 0x93b75au); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93b75a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93b75e: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 93b762: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93b766: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 93b768: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 93b76c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 93b76f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93b770: mov ecx, esi */
  ecx = esi;
/* 93b772: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 93b775: call 0x92e280 */
  esp -= 4; W32(esp, 0x93b77au); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93b77a: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93b780: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b782: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93b785: jp 0x93b840 */
  if (pf) goto L_93b840;
L_93b78b: /* 93b78b: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 93b78f: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 93b793: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b795: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b796: call 0x9349f0 */
  esp -= 4; W32(esp, 0x93b79bu); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 93b79b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b79e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 93b7a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b7a3: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 93b7a7: call 0x934970 */
  esp -= 4; W32(esp, 0x93b7acu); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93b7ac: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93b7b0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 93b7b4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 93b7b8: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 93b7bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93b7bc: mov ecx, esi */
  ecx = esi;
/* 93b7be: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 93b7c0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 93b7c3: call 0x92e280 */
  esp -= 4; W32(esp, 0x93b7c8u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93b7c8: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93b7ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b7d0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93b7d3: jp 0x93b840 */
  if (pf) goto L_93b840;
L_93b7d5: /* 93b7d5: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 93b7d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93b7d9: fcomp dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
  FPOP();
/* 93b7db: xor ebx, ebx */
  ebx = 0;
/* 93b7dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b7df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93b7e2: jp 0x93b7e9 */
  if (pf) goto L_93b7e9;
L_93b7e4: /* 93b7e4: mov ebx, 1 */
  ebx = 0x1u;
L_93b7e9: /* 93b7e9: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93b7ec: fcomp dword ptr [edi + ebx*4] */
  fpu_com(ST0, F32((uint32_t)(edi + ebx*4)));
  FPOP();
/* 93b7ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b7f1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 93b7f4: jp 0x93b7fb */
  if (pf) goto L_93b7fb;
L_93b7f6: /* 93b7f6: mov ebx, 2 */
  ebx = 0x2u;
L_93b7fb: /* 93b7fb: mov ecx, ebx */
  ecx = ebx;
/* 93b7fd: mov eax, 1 */
  eax = 0x1u;
/* 93b802: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 93b804: mov edx, 1 */
  edx = 0x1u;
/* 93b809: mov dword ptr [esp + ebx*4 + 0xc], 0 */
  W32((uint32_t)(esp + ebx*4 + 0xcu), 0x0u);
/* 93b811: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93b812: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 93b815: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 93b818: mov ecx, eax */
  ecx = eax;
/* 93b81a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 93b81c: fchs  */
  ST0 = -ST0;
/* 93b81e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 93b821: mov ecx, dword ptr [edi + edx*4] */
  ecx = R32((uint32_t)(edi + edx*4));
/* 93b824: mov dword ptr [esp + eax*4 + 8], ecx */
  W32((uint32_t)(esp + eax*4 + 0x8u), ecx);
/* 93b828: fstp dword ptr [esp + edx*4 + 8] */
  WF32((uint32_t)(esp + edx*4 + 0x8u), ST0); FPOP();
/* 93b82c: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 93b830: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 93b834: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93b838: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 93b83a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 93b83d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_93b840: /* 93b840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93b841: mov ecx, esi */
  ecx = esi;
/* 93b843: call 0x92e280 */
  esp -= 4; W32(esp, 0x93b848u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93b848: fsqrt  */
  ST0 = sqrt(ST0);
/* 93b84a: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93b850: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b852: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93b855: jnp 0x93b873 */
  if (!pf) goto L_93b873;
L_93b857: /* 93b857: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 93b85d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93b85f: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93b861: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 93b863: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93b865: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93b868: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 93b86b: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93b86e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 93b871: jmp 0x93b875 */
  goto L_93b875;
L_93b873: /* 93b873: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93b875: /* 93b875: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 93b878: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 93b87c: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93b87f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b880: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93b883: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 93b887: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93b88a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93b88c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93b890: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93b893: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93b895: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 93b897: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93b89a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93b89c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93b8a0: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 93b8a3: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93b8a5: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 93b8a7: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93b8aa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93b8ac: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93b8b0: call 0x934970 */
  esp -= 4; W32(esp, 0x93b8b5u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93b8b5: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 93b8b9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93b8bd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93b8c1: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93b8c3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 93b8c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93b8c8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 93b8cb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93b8ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93b8cf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b8d2: ret  */
  esp += 4; SPILL(); return;
}

void f_93b8e0(void) {
  LOAD_REGS();
L_93b8e0: /* 93b8e0: sub esp, 0x2ac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2acu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93b8e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93b8e7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93b8e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93b8e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b8ea: mov edi, dword ptr [esp + 0x2c0] */
  edi = R32((uint32_t)(esp + 0x2c0u));
/* 93b8f1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93b8f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b8f4: call 0x928730 */
  esp -= 4; W32(esp, 0x93b8f9u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93b8f9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 93b8fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b8fd: mov esi, eax */
  esi = eax;
/* 93b8ff: call 0x928730 */
  esp -= 4; W32(esp, 0x93b904u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93b904: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 93b906: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b907: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 93b90b: call 0x928610 */
  esp -= 4; W32(esp, 0x93b910u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93b910: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93b914: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 93b917: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b918: call 0x928610 */
  esp -= 4; W32(esp, 0x93b91du); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93b91d: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 93b921: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 93b923: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b924: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 93b928: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93b92du); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93b92d: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 93b930: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b931: mov ebx, eax */
  ebx = eax;
/* 93b933: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93b938u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93b938: mov ebp, eax */
  ebp = eax;
/* 93b93a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93b93c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 93b93e: mov edi, dword ptr [esp + 0x2c4] */
  edi = R32((uint32_t)(esp + 0x2c4u));
/* 93b945: xor eax, eax */
  eax = 0;
/* 93b947: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93b948: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 93b94c: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 93b94f: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 93b952: call 0x92e600 */
  esp -= 4; W32(esp, 0x93b957u); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93b957: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 93b95b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93b95c: call 0x92e620 */
  esp -= 4; W32(esp, 0x93b961u); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93b961: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 93b965: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93b966: call 0x92e600 */
  esp -= 4; W32(esp, 0x93b96bu); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93b96b: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93b96f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93b970: call 0x92e620 */
  esp -= 4; W32(esp, 0x93b975u); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93b975: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 93b979: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 93b97d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93b97e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b97f: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 93b983: call 0x93bb50 */
  esp -= 4; W32(esp, 0x93b988u); SPILL(); f_93bb50(); if (g_unwind) return; RELOAD();
/* 93b988: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93b98c: lea eax, [esp + 0x7c] */
  eax = (uint32_t)(esp + 0x7cu);
/* 93b990: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 93b994: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 93b99a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 93b99e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b99f: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 93b9a3: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93b9a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b9a8: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 93b9ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b9ad: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 93b9b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b9b2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 93b9b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b9b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b9b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b9b9: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 93b9bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b9be: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 93b9c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b9c3: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 93b9c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b9c8: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 93b9cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b9cd: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93b9d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b9d2: call 0x939210 */
  esp -= 4; W32(esp, 0x93b9d7u); SPILL(); f_939210(); if (g_unwind) return; RELOAD();
/* 93b9d7: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b9da: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93b9dc: jne 0x93b9ed */
  if (!zf) goto L_93b9ed;
L_93b9de: /* 93b9de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93b9df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93b9e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93b9e1: xor eax, eax */
  eax = 0;
/* 93b9e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93b9e4: add esp, 0x2ac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2acu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b9ea: ret 8 */
  esp += 12; SPILL(); return;
L_93b9ed: /* 93b9ed: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93b9f1: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 93b9f5: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 93b9f8: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 93b9fc: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93b9fe: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ba02: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93ba05: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ba07: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ba0b: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93ba0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ba0f: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 93ba12: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ba16: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93ba19: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93ba1d: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 93ba20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ba22: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ba26: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93ba29: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ba2b: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 93ba2e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ba32: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93ba35: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93ba39: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93ba3c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ba3e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ba42: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93ba45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ba47: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 93ba4a: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 93ba4d: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 93ba54: je 0x93bb32 */
  if (zf) goto L_93bb32;
L_93ba5a: /* 93ba5a: mov bp, word ptr [esp + 0x10] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x10u))) & 0xffffu);
/* 93ba5f: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 93ba66: lea edx, [ebx + 0x14] */
  edx = (uint32_t)(ebx + 0x14u);
/* 93ba69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93ba70: /* 93ba70: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 93ba73: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93ba76: jge 0x93bb32 */
  if ((sf == of)) goto L_93bb32;
L_93ba7c: /* 93ba7c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ba80: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 93ba83: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ba87: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93ba89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ba8b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93ba8f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93ba92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ba94: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 93ba98: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93ba9c: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 93baa2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93baa4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93baa6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93baa8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93baab: jp 0x93bb20 */
  if (pf) goto L_93bb20;
L_93baad: /* 93baad: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 93bab0: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 93bab3: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93bab5: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 93bab8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93baba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93babc: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 93babf: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93bac2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bac4: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 93bac7: fstp dword ptr [ebx - 0x28] */
  WF32((uint32_t)(ebx + 0xffffffd8u), ST0); FPOP();
/* 93baca: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93bacd: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 93bad0: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 93bad3: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93bad6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bad8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93bada: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93badd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93badf: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93bae2: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 93bae5: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93bae8: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93baeb: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 93baee: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93baf1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93baf3: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93baf5: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93baf8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bafa: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93bafd: mov word ptr [edx + 8], bp */
  W16((uint32_t)(edx + 0x8u), (ebp & 0xffffu));
/* 93bb01: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 93bb04: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 93bb07: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 93bb0a: mov dword ptr [edx - 8], eax */
  W32((uint32_t)(edx + 0xfffffff8u), eax);
/* 93bb0d: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 93bb10: mov dword ptr [edx - 4], eax */
  W32((uint32_t)(edx + 0xfffffffcu), eax);
/* 93bb13: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 93bb16: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 93bb18: inc dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0xcu), r);
  }
/* 93bb1b: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 93bb1e: jmp 0x93bb22 */
  goto L_93bb22;
L_93bb20: /* 93bb20: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93bb22: /* 93bb22: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93bb25: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 93bb28: cmp eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93bb2c: jne 0x93ba70 */
  if (!zf) goto L_93ba70;
L_93bb32: /* 93bb32: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 93bb35: xor eax, eax */
  eax = 0;
/* 93bb37: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 93bb39: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 93bb3c: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 93bb3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93bb40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93bb41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93bb42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93bb43: add esp, 0x2ac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2acu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93bb49: ret 8 */
  esp += 12; SPILL(); return;
}

void f_93bb50(void) {
  LOAD_REGS();
L_93bb50: /* 93bb50: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 93bb54: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 93bb58: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 93bb5a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93bb5c: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 93bb5f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93bb62: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bb64: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93bb67: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93bb6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bb6c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 93bb6e: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 93bb71: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 93bb74: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 93bb77: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93bb7a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bb7c: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 93bb7f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93bb81: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bb83: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 93bb86: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 93bb89: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 93bb8c: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 93bb8f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93bb92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bb94: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 93bb97: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93bb99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bb9b: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 93bb9e: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 93bba1: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93bba4: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 93bba7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93bba9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bbab: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 93bbae: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93bbb1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bbb3: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 93bbb6: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 93bbb9: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 93bbbc: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 93bbbf: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 93bbc2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bbc4: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 93bbc7: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 93bbca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bbcc: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 93bbcf: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 93bbd2: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 93bbd5: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 93bbd8: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 93bbdb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bbdd: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 93bbe0: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 93bbe3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bbe5: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 93bbe8: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 93bbeb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93bbed: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93bbf0: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 93bbf3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bbf5: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 93bbf8: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93bbfb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bbfd: fstp dword ptr [ecx + 0x20] */
  WF32((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 93bc00: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 93bc03: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 93bc06: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 93bc09: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 93bc0c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bc0e: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 93bc11: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 93bc14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bc16: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
/* 93bc19: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 93bc1c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 93bc1f: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 93bc22: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 93bc25: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bc27: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 93bc2a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 93bc2d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bc2f: fstp dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0); FPOP();
/* 93bc32: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 93bc35: fsub dword ptr [eax + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x30u)));
/* 93bc38: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* 93bc3b: fsub dword ptr [eax + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x34u)));
/* 93bc3e: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 93bc41: fsub dword ptr [eax + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x38u)));
/* 93bc44: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93bc46: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93bc49: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 93bc4b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93bc4d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bc4f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93bc51: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93bc54: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bc56: fstp dword ptr [ecx + 0x30] */
  WF32((uint32_t)(ecx + 0x30u), ST0); FPOP();
/* 93bc59: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93bc5b: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 93bc5e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93bc60: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 93bc63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bc65: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93bc67: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 93bc6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bc6c: fstp dword ptr [ecx + 0x34] */
  WF32((uint32_t)(ecx + 0x34u), ST0); FPOP();
/* 93bc6f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 93bc71: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 93bc74: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 93bc76: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 93bc79: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 93bc7b: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 93bc7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93bc80: fstp dword ptr [ecx + 0x38] */
  WF32((uint32_t)(ecx + 0x38u), ST0); FPOP();
/* 93bc83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_93bc90(void) {
  LOAD_REGS();
L_93bc90: /* 93bc90: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93bc93: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 93bc97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93bc98: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 93bc9c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93bc9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93bc9e: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 93bca2: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 93bca4: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 93bca7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 93bca9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93bcaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93bcab: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93bcb0u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93bcb0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 93bcb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93bcb4: mov edi, eax */
  edi = eax;
/* 93bcb6: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93bcbbu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93bcbb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93bcbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93bcbe: call 0x928760 */
  esp -= 4; W32(esp, 0x93bcc3u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 93bcc3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 93bcc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93bcc7: mov ebp, eax */
  ebp = eax;
/* 93bcc9: call 0x928760 */
  esp -= 4; W32(esp, 0x93bcceu); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 93bcce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93bccf: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 93bcd3: call 0x92e600 */
  esp -= 4; W32(esp, 0x93bcd8u); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93bcd8: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 93bcdc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93bcdd: call 0x92e620 */
  esp -= 4; W32(esp, 0x93bce2u); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93bce2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93bce6: fld qword ptr [0xa14fa0] */
  { double v = F64((uint32_t)(0xa14fa0u)); FPUSH(v); }
/* 93bcec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93bced: fsqrt  */
  ST0 = sqrt(ST0);
/* 93bcef: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 93bcf5: fdivr dword ptr [0xa0b130] */
  ST0 = (F32((uint32_t)(0xa0b130u))) / ST0;
/* 93bcfb: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93bcff: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 93bd03: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 93bd07: call 0x92e600 */
  esp -= 4; W32(esp, 0x93bd0cu); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93bd0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93bd0d: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 93bd11: call 0x92e620 */
  esp -= 4; W32(esp, 0x93bd16u); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93bd16: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93bd1a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93bd1e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 93bd20: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 93bd24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93bd25: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 93bd29: call 0x928730 */
  esp -= 4; W32(esp, 0x93bd2eu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93bd2e: mov edi, eax */
  edi = eax;
/* 93bd30: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 93bd33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93bd34: call 0x928730 */
  esp -= 4; W32(esp, 0x93bd39u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93bd39: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 93bd3d: mov edx, ecx */
  edx = ecx;
/* 93bd3f: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 93bd43: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 93bd47: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 93bd4b: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 93bd4f: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 93bd53: mov ecx, edx */
  ecx = edx;
/* 93bd55: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 93bd59: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 93bd5d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 93bd61: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 93bd65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93bd66: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 93bd6a: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 93bd6e: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 93bd72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93bd73: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 93bd77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93bd78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93bd79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93bd7a: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 93bd7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93bd7f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93bd80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93bd81: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 93bd85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93bd86: call 0x93fe10 */
  esp -= 4; W32(esp, 0x93bd8bu); SPILL(); f_93fe10(); if (g_unwind) return; RELOAD();
/* 93bd8b: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93bd8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93bd90: je 0x93bda3 */
  if (zf) goto L_93bda3;
L_93bd92: /* 93bd92: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 93bd96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93bd97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93bd98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93bd99: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 93bd9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93bd9d: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93bda0: ret 0xc */
  esp += 16; SPILL(); return;
L_93bda3: /* 93bda3: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 93bda7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93bda8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93bda9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93bdaa: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 93bdad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93bdae: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93bdb1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_93bdc0(void) {
  LOAD_REGS();
L_93bdc0: /* 93bdc0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93bdc3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93bdc7: xor eax, eax */
  eax = 0;
/* 93bdc9: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 93bdcd: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 93bdd1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93bdd5: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 93bdd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93bdda: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 93bddc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 93bdde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93bddf: mov dword ptr [esp + 0x18], 0x93b8e0 */
  W32((uint32_t)(esp + 0x18u), 0x93b8e0u);
/* 93bde7: mov dword ptr [esp + 0x1c], 0x93bc90 */
  W32((uint32_t)(esp + 0x1cu), 0x93bc90u);
/* 93bdef: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 93bdf7: call 0x929df0 */
  esp -= 4; W32(esp, 0x93bdfcu); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 93bdfc: mov eax, 1 */
  eax = 0x1u;
/* 93be01: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93be04: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93be10(void) {
  LOAD_REGS();
L_93be10: /* 93be10: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93be13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93be14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93be15: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 93be19: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93be1c: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93be1e: fabs  */
  ST0 = fabs(ST0);
/* 93be20: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 93be24: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 93be28: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 93be2c: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 93be30: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 93be34: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 93be38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93be3a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93be3d: jne 0x93be47 */
  if (!zf) goto L_93be47;
L_93be3f: /* 93be3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93be40: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93be42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93be43: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93be46: ret  */
  esp += 4; SPILL(); return;
L_93be47: /* 93be47: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 93be4a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 93be4c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93be4e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93be50: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93be52: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93be54: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93be56: fsqrt  */
  ST0 = sqrt(ST0);
/* 93be58: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 93be5a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93be5c: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 93be60: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 93be64: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 93be68: fcom dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
/* 93be6c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93be6e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93be71: jne 0x93be8c */
  if (!zf) goto L_93be8c;
L_93be73: /* 93be73: fst dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0);
/* 93be77: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 93be79: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 93be7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93be7f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93be82: jne 0x93be8e */
  if (!zf) goto L_93be8e;
L_93be84: /* 93be84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93be85: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93be87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93be88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93be8b: ret  */
  esp += 4; SPILL(); return;
L_93be8c: /* 93be8c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93be8e: /* 93be8e: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93be92: fchs  */
  ST0 = -ST0;
/* 93be94: fcomp dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
  FPOP();
/* 93be98: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93be9a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93be9d: jne 0x93bea7 */
  if (!zf) goto L_93bea7;
L_93be9f: /* 93be9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93bea0: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93bea2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93bea3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93bea6: ret  */
  esp += 4; SPILL(); return;
L_93bea7: /* 93bea7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93beab: fcomp dword ptr [esp + 0x44] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x44u)));
  FPOP();
/* 93beaf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93beb1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93beb4: jne 0x93bf99 */
  if (!zf) goto L_93bf99;
L_93beba: /* 93beba: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93bebe: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 93bec2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93bec4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93bec7: jne 0x93bf99 */
  if (!zf) goto L_93bf99;
L_93becd: /* 93becd: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93bed1: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 93bed5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93bed9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93bedc: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 93bee2: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93bee6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93bee8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93beeb: je 0x93beef */
  if (zf) goto L_93beef;
L_93beed: /* 93beed: fchs  */
  ST0 = -ST0;
L_93beef: /* 93beef: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93bef3: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 93bef7: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93bef9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93befa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93befe: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93bf01: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93bf05: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 93bf07: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93bf0b: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 93bf0e: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93bf12: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 93bf16: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93bf18: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 93bf1b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93bf1f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 93bf23: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 93bf27: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 93bf2b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93bf2f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 93bf33: call 0x92e280 */
  esp -= 4; W32(esp, 0x93bf38u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93bf38: fsqrt  */
  ST0 = sqrt(ST0);
/* 93bf3a: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93bf40: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93bf42: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93bf45: jnp 0x93bf6f */
  if (!pf) goto L_93bf6f;
L_93bf47: /* 93bf47: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93bf4d: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 93bf4f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93bf53: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93bf55: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93bf59: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93bf5d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93bf5f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93bf63: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93bf67: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93bf69: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93bf6d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93bf6f: /* 93bf6f: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 93bf73: fcom dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
/* 93bf77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93bf79: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93bf7c: jne 0x93bf97 */
  if (!zf) goto L_93bf97;
L_93bf7e: /* 93bf7e: fst dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0);
/* 93bf82: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 93bf84: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 93bf88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93bf8a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93bf8d: jne 0x93bf99 */
  if (!zf) goto L_93bf99;
L_93bf8f: /* 93bf8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93bf90: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93bf92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93bf93: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93bf96: ret  */
  esp += 4; SPILL(); return;
L_93bf97: /* 93bf97: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93bf99: /* 93bf99: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93bf9b: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 93bf9f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93bfa3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93bfa5: jne 0x93bfe4 */
  if (!zf) goto L_93bfe4;
L_93bfa7: /* 93bfa7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93bfaa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93bfb0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93bfb2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93bfb5: jne 0x93bfbf */
  if (!zf) goto L_93bfbf;
L_93bfb7: /* 93bfb7: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 93bfbd: jmp 0x93bfc5 */
  goto L_93bfc5;
L_93bfbf: /* 93bfbf: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_93bfc5: /* 93bfc5: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 93bfc9: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 93bfcd: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 93bfd0: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 93bfd6: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 93bfdd: mov word ptr [ecx], 0x302 */
  W16((uint32_t)(ecx), 0x302u);
/* 93bfe2: jmp 0x93c05f */
  goto L_93c05f;
L_93bfe4: /* 93bfe4: cmp bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 93bfe7: jne 0x93c03e */
  if (!zf) goto L_93c03e;
L_93bfe9: /* 93bfe9: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93bfef: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 93bff3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93bff5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93bff8: jnp 0x93c006 */
  if (!pf) goto L_93c006;
L_93bffa: /* 93bffa: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93c000: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 93c004: jmp 0x93c00c */
  goto L_93c00c;
L_93c006: /* 93c006: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93c00c: /* 93c00c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 93c010: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93c012: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93c015: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 93c019: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 93c01d: fchs  */
  ST0 = -ST0;
/* 93c01f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93c021: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93c023: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 93c02a: fchs  */
  ST0 = -ST0;
/* 93c02c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93c02e: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93c031: mov word ptr [ecx], 0x303 */
  W16((uint32_t)(ecx), 0x303u);
/* 93c036: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93c03a: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 93c03c: jmp 0x93c069 */
  goto L_93c069;
L_93c03e: /* 93c03e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 93c042: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93c046: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 93c04a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93c04c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 93c050: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 93c053: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 93c057: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93c05a: mov word ptr [ecx], 0x301 */
  W16((uint32_t)(ecx), 0x301u);
L_93c05f: /* 93c05f: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 93c063: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_93c069: /* 93c069: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93c06d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93c06f: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93c073: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93c076: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 93c07a: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93c07e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93c081: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 93c085: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93c089: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 93c08b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93c08f: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 93c092: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93c096: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 93c099: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93c09a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 93c09c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93c09e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93c09f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93c0a2: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 93c0a5: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 93c0a7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c0aa: ret  */
  esp += 4; SPILL(); return;
}

void f_93c0b0(void) {
  LOAD_REGS();
L_93c0b0: /* 93c0b0: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c0b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93c0b4: mov ebx, dword ptr [esp + 0x6c] */
  ebx = R32((uint32_t)(esp + 0x6cu));
/* 93c0b8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 93c0ba: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93c0bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93c0bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93c0bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c0be: call 0x928730 */
  esp -= 4; W32(esp, 0x93c0c3u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93c0c3: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 93c0c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c0c7: mov esi, eax */
  esi = eax;
/* 93c0c9: call 0x928730 */
  esp -= 4; W32(esp, 0x93c0ceu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93c0ce: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 93c0d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c0d1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 93c0d5: call 0x928610 */
  esp -= 4; W32(esp, 0x93c0dau); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93c0da: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 93c0de: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 93c0e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c0e2: call 0x928610 */
  esp -= 4; W32(esp, 0x93c0e7u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93c0e7: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 93c0eb: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 93c0ef: xor eax, eax */
  eax = 0;
/* 93c0f1: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 93c0f4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93c0f8: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 93c0fb: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 93c0fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c0fe: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93c103u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93c103: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 93c106: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c107: mov ebp, eax */
  ebp = eax;
/* 93c109: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93c10eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93c10e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93c10f: mov ebx, eax */
  ebx = eax;
/* 93c111: call 0x92e600 */
  esp -= 4; W32(esp, 0x93c116u); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93c116: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93c11a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93c11b: call 0x92e620 */
  esp -= 4; W32(esp, 0x93c120u); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93c120: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 93c124: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93c125: call 0x92d570 */
  esp -= 4; W32(esp, 0x93c12au); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 93c12a: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 93c12e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 93c132: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93c133: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c134: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 93c138: call 0x93bb50 */
  esp -= 4; W32(esp, 0x93c13du); SPILL(); f_93bb50(); if (g_unwind) return; RELOAD();
/* 93c13d: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 93c141: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 93c145: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 93c149: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c14a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93c14e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c14f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 93c153: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c154: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c155: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c156: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 93c15a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c15b: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 93c162: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c163: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 93c167: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c168: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 93c16c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c16d: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 93c174: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c175: call 0x93be10 */
  esp -= 4; W32(esp, 0x93c17au); SPILL(); f_93be10(); if (g_unwind) return; RELOAD();
/* 93c17a: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c17d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93c17f: jne 0x93c18d */
  if (!zf) goto L_93c18d;
L_93c181: /* 93c181: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93c182: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93c183: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93c184: xor eax, eax */
  eax = 0;
/* 93c186: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93c187: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c18a: ret 8 */
  esp += 12; SPILL(); return;
L_93c18d: /* 93c18d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 93c190: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 93c192: mov eax, 1 */
  eax = 0x1u;
/* 93c197: jle 0x93c27e */
  if ((zf || sf != of)) goto L_93c27e;
L_93c19d: /* 93c19d: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93c1a1: mov cx, word ptr [esp + 0x78] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x78u))) & 0xffffu);
/* 93c1a6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93c1a8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93c1ac: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 93c1af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c1b1: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93c1b5: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93c1b8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c1ba: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 93c1bd: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93c1c1: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 93c1c4: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93c1c8: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93c1cb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c1cd: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93c1d1: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93c1d4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c1d6: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 93c1d9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93c1dd: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93c1e0: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93c1e4: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93c1e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c1e9: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93c1ed: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93c1f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c1f2: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 93c1f5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 93c1f8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93c1fc: mov word ptr [edx + 0x1c], cx */
  W16((uint32_t)(edx + 0x1cu), (ecx & 0xffffu));
/* 93c200: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 93c203: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 93c207: mov dword ptr [edx + 0x18], ecx */
  W32((uint32_t)(edx + 0x18u), ecx);
/* 93c20a: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93c20c: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93c210: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 93c213: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 93c216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c218: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93c21c: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93c21f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c221: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 93c224: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 93c226: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93c22a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 93c22d: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93c231: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93c234: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c236: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93c23a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93c23d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c23f: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93c242: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 93c245: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93c249: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93c24c: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93c250: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93c253: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c255: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93c259: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93c25c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c25e: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93c261: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 93c264: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 93c267: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 93c26a: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93c26d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 93c26f: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 93c272: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 93c275: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 93c278: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 93c27b: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
L_93c27e: /* 93c27e: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 93c281: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93c282: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93c283: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93c284: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93c285: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c288: ret 8 */
  esp += 12; SPILL(); return;
}

void f_93c290(void) {
  LOAD_REGS();
L_93c290: /* 93c290: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c293: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 93c297: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93c298: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 93c29c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93c29d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93c29e: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 93c2a2: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 93c2a4: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 93c2a7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 93c2a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93c2aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c2ab: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93c2b0u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93c2b0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 93c2b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c2b4: mov edi, eax */
  edi = eax;
/* 93c2b6: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93c2bbu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93c2bb: mov ebp, eax */
  ebp = eax;
/* 93c2bd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93c2bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c2c0: call 0x928760 */
  esp -= 4; W32(esp, 0x93c2c5u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 93c2c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 93c2c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c2c9: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 93c2cd: call 0x928760 */
  esp -= 4; W32(esp, 0x93c2d2u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 93c2d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93c2d3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93c2d7: call 0x92e600 */
  esp -= 4; W32(esp, 0x93c2dcu); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93c2dc: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 93c2e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93c2e1: call 0x92e620 */
  esp -= 4; W32(esp, 0x93c2e6u); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93c2e6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93c2ea: fld qword ptr [0xa14fa0] */
  { double v = F64((uint32_t)(0xa14fa0u)); FPUSH(v); }
/* 93c2f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93c2f1: fsqrt  */
  ST0 = sqrt(ST0);
/* 93c2f3: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 93c2f9: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 93c2ff: fst dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0);
/* 93c303: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 93c307: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 93c309: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 93c30d: call 0x92d570 */
  esp -= 4; W32(esp, 0x93c312u); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 93c312: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 93c314: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 93c318: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c319: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 93c31b: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 93c31f: call 0x928730 */
  esp -= 4; W32(esp, 0x93c324u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93c324: mov edi, eax */
  edi = eax;
/* 93c326: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 93c329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c32a: call 0x928730 */
  esp -= 4; W32(esp, 0x93c32fu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93c32f: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 93c333: mov edx, ecx */
  edx = ecx;
/* 93c335: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 93c339: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93c33d: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 93c341: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 93c345: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 93c349: mov ecx, edx */
  ecx = edx;
/* 93c34b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 93c34f: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 93c353: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 93c357: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 93c35b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c35c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 93c360: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 93c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c365: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 93c369: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c36a: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 93c36e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c36f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c370: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 93c374: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c375: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c376: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93c377: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 93c37b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c37c: call 0x93fe10 */
  esp -= 4; W32(esp, 0x93c381u); SPILL(); f_93fe10(); if (g_unwind) return; RELOAD();
/* 93c381: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c384: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93c386: je 0x93c399 */
  if (zf) goto L_93c399;
L_93c388: /* 93c388: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 93c38c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93c38d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93c38e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93c38f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 93c392: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93c393: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c396: ret 0xc */
  esp += 16; SPILL(); return;
L_93c399: /* 93c399: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 93c39d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93c39e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93c39f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93c3a0: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 93c3a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93c3a4: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c3a7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_93c3b0(void) {
  LOAD_REGS();
L_93c3b0: /* 93c3b0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c3b3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93c3b7: xor eax, eax */
  eax = 0;
/* 93c3b9: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 93c3bd: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 93c3c1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 93c3c5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93c3c9: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 93c3cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c3ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 93c3d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 93c3d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c3d3: mov dword ptr [esp + 0x18], 0x93c0b0 */
  W32((uint32_t)(esp + 0x18u), 0x93c0b0u);
/* 93c3db: mov dword ptr [esp + 0x1c], 0x93c290 */
  W32((uint32_t)(esp + 0x1cu), 0x93c290u);
/* 93c3e3: call 0x929df0 */
  esp -= 4; W32(esp, 0x93c3e8u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 93c3e8: mov eax, 1 */
  eax = 0x1u;
/* 93c3ed: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c3f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93c400(void) {
  LOAD_REGS();
L_93c400: /* 93c400: sub esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c406: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93c407: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93c408: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93c409: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93c40a: mov edi, dword ptr [esp + 0xf8] */
  edi = R32((uint32_t)(esp + 0xf8u));
/* 93c411: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93c413: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c414: call 0x928730 */
  esp -= 4; W32(esp, 0x93c419u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93c419: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 93c41c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c41d: mov ebp, eax */
  ebp = eax;
/* 93c41f: call 0x928730 */
  esp -= 4; W32(esp, 0x93c424u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93c424: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 93c426: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c427: mov esi, eax */
  esi = eax;
/* 93c429: call 0x928610 */
  esp -= 4; W32(esp, 0x93c42eu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93c42e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93c432: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 93c435: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c436: call 0x928610 */
  esp -= 4; W32(esp, 0x93c43bu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93c43b: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 93c43f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 93c441: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c442: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93c446: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93c44bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93c44b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 93c44e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c44f: mov ebx, eax */
  ebx = eax;
/* 93c451: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93c456u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93c456: mov edi, dword ptr [esp + 0xfc] */
  edi = R32((uint32_t)(esp + 0xfcu));
/* 93c45d: xor eax, eax */
  eax = 0;
/* 93c45f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93c460: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 93c463: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 93c466: call 0x92e600 */
  esp -= 4; W32(esp, 0x93c46bu); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93c46b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 93c46f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93c470: call 0x92e620 */
  esp -= 4; W32(esp, 0x93c475u); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93c475: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93c479: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93c47a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93c47b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 93c47f: call 0x93bb50 */
  esp -= 4; W32(esp, 0x93c484u); SPILL(); f_93bb50(); if (g_unwind) return; RELOAD();
/* 93c484: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 93c488: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93c48c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c48d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 93c491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c492: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 93c496: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93c49a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 93c49e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c49f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c4a0: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 93c4a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c4a5: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 93c4a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c4aa: call 0x93c600 */
  esp -= 4; W32(esp, 0x93c4afu); SPILL(); f_93c600(); if (g_unwind) return; RELOAD();
/* 93c4af: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c4b2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93c4b4: jne 0x93c4c5 */
  if (!zf) goto L_93c4c5;
L_93c4b6: /* 93c4b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93c4b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93c4b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93c4b9: xor eax, eax */
  eax = 0;
/* 93c4bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93c4bc: add esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c4c2: ret 8 */
  esp += 12; SPILL(); return;
L_93c4c5: /* 93c4c5: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 93c4c8: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93c4cc: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 93c4d0: mov dword ptr [edi + 0x14], ecx */
  W32((uint32_t)(edi + 0x14u), ecx);
/* 93c4d3: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 93c4d6: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 93c4d9: fcom dword ptr [0xa20e1c] */
  fpu_com(ST0, F32((uint32_t)(0xa20e1cu)));
/* 93c4df: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 93c4e2: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 93c4e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93c4e7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93c4ea: jne 0x93c4f5 */
  if (!zf) goto L_93c4f5;
L_93c4ec: /* 93c4ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93c4ee: mov ebp, 2 */
  ebp = 0x2u;
/* 93c4f3: jmp 0x93c50c */
  goto L_93c50c;
L_93c4f5: /* 93c4f5: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 93c4fb: mov ebp, 3 */
  ebp = 0x3u;
/* 93c500: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93c502: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93c505: jnp 0x93c50c */
  if (!pf) goto L_93c50c;
L_93c507: /* 93c507: mov ebp, 1 */
  ebp = 0x1u;
L_93c50c: /* 93c50c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 93c510: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 93c513: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 93c517: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93c519: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 93c520: je 0x93c5df */
  if (zf) goto L_93c5df;
L_93c526: /* 93c526: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93c52a: lea edx, [ebx + 0x14] */
  edx = (uint32_t)(ebx + 0x14u);
/* 93c52d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_93c530: /* 93c530: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 93c533: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93c536: jge 0x93c5df */
  if ((sf == of)) goto L_93c5df;
L_93c53c: /* 93c53c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93c53e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93c542: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 93c548: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93c54a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93c54c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93c54e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93c551: jp 0x93c5cd */
  if (pf) goto L_93c5cd;
L_93c553: /* 93c553: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 93c556: mov eax, ebp */
  eax = ebp;
/* 93c558: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 93c55b: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 93c560: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93c562: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 93c565: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 93c568: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c56a: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 93c56d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93c56f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c571: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 93c574: fstp dword ptr [ebx - 0x28] */
  WF32((uint32_t)(ebx + 0xffffffd8u), ST0); FPOP();
/* 93c577: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 93c57a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93c57c: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 93c57f: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 93c582: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c584: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 93c587: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 93c58a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c58c: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93c58f: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 93c592: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 93c595: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93c597: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 93c59a: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 93c59d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c59f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93c5a2: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 93c5a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c5a7: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93c5aa: mov word ptr [edx + 8], ax */
  W16((uint32_t)(edx + 0x8u), (eax & 0xffffu));
/* 93c5ae: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 93c5b1: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 93c5b4: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 93c5b7: mov dword ptr [edx - 8], eax */
  W32((uint32_t)(edx + 0xfffffff8u), eax);
/* 93c5ba: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 93c5bd: mov dword ptr [edx - 4], eax */
  W32((uint32_t)(edx + 0xfffffffcu), eax);
/* 93c5c0: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 93c5c3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 93c5c5: inc dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0xcu), r);
  }
/* 93c5c8: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 93c5cb: jmp 0x93c5cf */
  goto L_93c5cf;
L_93c5cd: /* 93c5cd: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93c5cf: /* 93c5cf: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93c5d2: lea eax, [ecx - 8] */
  eax = (uint32_t)(ecx + 0xfffffff8u);
/* 93c5d5: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93c5d9: jne 0x93c530 */
  if (!zf) goto L_93c530;
L_93c5df: /* 93c5df: mov eax, 1 */
  eax = 0x1u;
/* 93c5e4: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 93c5e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93c5e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93c5e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93c5ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93c5eb: add esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c5f1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_93c600(void) {
  LOAD_REGS();
L_93c600: /* 93c600: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c603: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93c604: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93c605: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 93c609: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 93c60c: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 93c60f: lea esi, [edi + 0x20] */
  esi = (uint32_t)(edi + 0x20u);
/* 93c612: fchs  */
  ST0 = -ST0;
/* 93c614: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 93c618: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93c61c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c61d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 93c621: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 93c629: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 93c62d: call 0x934970 */
  esp -= 4; W32(esp, 0x93c632u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93c632: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 93c636: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c637: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 93c63b: call 0x92e280 */
  esp -= 4; W32(esp, 0x93c640u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93c640: fcomp qword ptr [0xa214f0] */
  fpu_com(ST0, F64((uint32_t)(0xa214f0u)));
  FPOP();
/* 93c646: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93c648: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93c64b: jp 0x93c67f */
  if (pf) goto L_93c67f;
L_93c64d: /* 93c64d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 93c655: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 93c65d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 93c665: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 93c66d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 93c675: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 93c67d: jmp 0x93c6fb */
  goto L_93c6fb;
L_93c67f: /* 93c67f: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 93c683: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c684: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 93c688: call 0x92e280 */
  esp -= 4; W32(esp, 0x93c68du); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93c68d: fsqrt  */
  ST0 = sqrt(ST0);
/* 93c68f: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93c695: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93c697: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93c69a: jnp 0x93c6c0 */
  if (!pf) goto L_93c6c0;
L_93c69c: /* 93c69c: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 93c6a2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93c6a6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93c6a8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93c6ac: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93c6b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93c6b2: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93c6b6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93c6ba: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93c6bc: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_93c6c0: /* 93c6c0: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 93c6c4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93c6c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c6c7: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 93c6cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93c6cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c6cd: call 0x9349f0 */
  esp -= 4; W32(esp, 0x93c6d2u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 93c6d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c6d5: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 93c6d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c6da: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93c6de: call 0x934970 */
  esp -= 4; W32(esp, 0x93c6e3u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93c6e3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93c6e7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 93c6eb: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 93c6ef: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 93c6f3: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 93c6f7: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_93c6fb: /* 93c6fb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93c6fe: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 93c702: fabs  */
  ST0 = fabs(ST0);
/* 93c704: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 93c708: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93c70c: fabs  */
  ST0 = fabs(ST0);
/* 93c70e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93c710: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93c712: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 93c716: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93c718: fsubr dword ptr [edi + 0x38] */
  ST0 = (F32((uint32_t)(edi + 0x38u))) - ST0;
/* 93c71b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93c71d: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 93c71f: fcomp dword ptr [esp + 0x44] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x44u)));
  FPOP();
/* 93c723: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93c725: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93c728: jne 0x93c732 */
  if (!zf) goto L_93c732;
L_93c72a: /* 93c72a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93c72b: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93c72d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93c72e: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c731: ret  */
  esp += 4; SPILL(); return;
L_93c732: /* 93c732: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 93c736: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93c737: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 93c73b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c73c: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 93c740: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 93c744: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c745: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 93c749: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c74a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c74b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93c74c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c74d: call 0x93c760 */
  esp -= 4; W32(esp, 0x93c752u); SPILL(); f_93c760(); if (g_unwind) return; RELOAD();
/* 93c752: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c755: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93c756: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 93c758: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93c759: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c75c: ret  */
  esp += 4; SPILL(); return;
}

void f_93c760(void) {
  LOAD_REGS();
L_93c760: /* 93c760: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 93c764: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93c768: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93c76b: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c76e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93c76f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93c770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93c771: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93c772: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c775: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93c779: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 93c77d: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 93c781: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93c784: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93c788: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 93c78c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93c78e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93c791: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93c796u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93c796: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 93c79a: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 93c79e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93c7a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c7a4: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 93c7a8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93c7ac: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 93c7b0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93c7b3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93c7b7: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 93c7bb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93c7bd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93c7c0: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93c7c5u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93c7c5: mov ebp, dword ptr [esp + 0x78] */
  ebp = R32((uint32_t)(esp + 0x78u));
/* 93c7c9: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 93c7cd: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 93c7d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c7d3: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 93c7d7: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93c7db: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 93c7df: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 93c7e2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93c7e6: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 93c7ea: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 93c7ed: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93c7f0: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93c7f5u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93c7f5: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93c7fb: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 93c7ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93c801: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93c804: jnp 0x93c816 */
  if (!pf) goto L_93c816;
L_93c806: /* 93c806: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93c80c: fdiv dword ptr [esp + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x28u)));
/* 93c810: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93c814: jmp 0x93c81e */
  goto L_93c81e;
L_93c816: /* 93c816: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_93c81e: /* 93c81e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93c824: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 93c828: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93c82a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93c82d: jnp 0x93c83f */
  if (!pf) goto L_93c83f;
L_93c82f: /* 93c82f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93c835: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 93c839: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 93c83d: jmp 0x93c847 */
  goto L_93c847;
L_93c83f: /* 93c83f: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
L_93c847: /* 93c847: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 93c84b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93c84f: fadd dword ptr [ecx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x38u)));
/* 93c852: mov esi, dword ptr [esp + 0x60] */
  esi = R32((uint32_t)(esp + 0x60u));
/* 93c856: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93c858: lea edi, [ecx + 0x30] */
  edi = (uint32_t)(ecx + 0x30u);
/* 93c85b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c85e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93c862: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 93c866: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93c86a: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 93c86e: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93c871: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93c875: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93c879: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93c87b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93c87e: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93c883u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93c883: mov ebx, dword ptr [esp + 0x6c] */
  ebx = R32((uint32_t)(esp + 0x6cu));
/* 93c887: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93c888: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 93c88c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c88d: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93c891: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c892: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 93c896: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c897: lea edx, [esp + 0x84] */
  edx = (uint32_t)(esp + 0x84u);
/* 93c89e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c89f: mov dword ptr [esp + 0x88], 0xbf800000 */
  W32((uint32_t)(esp + 0x88u), 0xbf800000u);
/* 93c8aa: mov dword ptr [esp + 0x84], 0x3f800000 */
  W32((uint32_t)(esp + 0x84u), 0x3f800000u);
/* 93c8b5: call 0x93cc30 */
  esp -= 4; W32(esp, 0x93c8bau); SPILL(); f_93cc30(); if (g_unwind) return; RELOAD();
/* 93c8ba: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c8bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93c8bf: je 0x93c92f */
  if (zf) goto L_93c92f;
L_93c8c1: /* 93c8c1: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 93c8c3: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 93c8c7: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 93c8cb: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 93c8ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c8cf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 93c8d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c8d2: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 93c8d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c8d7: call 0x934a30 */
  esp -= 4; W32(esp, 0x93c8dcu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93c8dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c8df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c8e0: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 93c8e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c8e5: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 93c8e9: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93c8eeu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93c8ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c8ef: mov ecx, ebp */
  ecx = ebp;
/* 93c8f1: call 0x933e40 */
  esp -= 4; W32(esp, 0x93c8f6u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93c8f6: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 93c8f8: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 93c8fc: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 93c900: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 93c903: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c904: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 93c906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c907: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 93c90b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c90c: call 0x934a30 */
  esp -= 4; W32(esp, 0x93c911u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93c911: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c915: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 93c919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c91a: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 93c91e: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93c923u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93c923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c924: mov ecx, ebp */
  ecx = ebp;
/* 93c926: call 0x933e40 */
  esp -= 4; W32(esp, 0x93c92bu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93c92b: mov ebp, dword ptr [esp + 0x78] */
  ebp = R32((uint32_t)(esp + 0x78u));
L_93c92f: /* 93c92f: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93c933: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93c936: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 93c939: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 93c93d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93c941: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93c945: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93c948: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93c94c: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93c950: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93c952: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93c955: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93c95au); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93c95a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93c95b: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 93c95f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c960: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 93c964: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c965: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93c96c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c96d: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 93c971: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c972: mov dword ptr [esp + 0x80], 0xbf800000 */
  W32((uint32_t)(esp + 0x80u), 0xbf800000u);
/* 93c97d: mov dword ptr [esp + 0x88], 0x3f800000 */
  W32((uint32_t)(esp + 0x88u), 0x3f800000u);
/* 93c988: call 0x93cc30 */
  esp -= 4; W32(esp, 0x93c98du); SPILL(); f_93cc30(); if (g_unwind) return; RELOAD();
/* 93c98d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93c992: je 0x93ca02 */
  if (zf) goto L_93ca02;
L_93c994: /* 93c994: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 93c996: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 93c99a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 93c99e: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 93c9a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c9a2: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 93c9a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c9a5: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 93c9a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c9aa: call 0x934a30 */
  esp -= 4; W32(esp, 0x93c9afu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93c9af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c9b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c9b3: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 93c9b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c9b8: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 93c9bc: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93c9c1u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93c9c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c9c2: mov ecx, ebp */
  ecx = ebp;
/* 93c9c4: call 0x933e40 */
  esp -= 4; W32(esp, 0x93c9c9u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93c9c9: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 93c9cb: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 93c9cf: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 93c9d3: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 93c9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c9d7: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 93c9d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c9da: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 93c9de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93c9df: call 0x934a30 */
  esp -= 4; W32(esp, 0x93c9e4u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93c9e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93c9e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c9e8: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 93c9ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93c9ed: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 93c9f1: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93c9f6u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93c9f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93c9f7: mov ecx, ebp */
  ecx = ebp;
/* 93c9f9: call 0x933e40 */
  esp -= 4; W32(esp, 0x93c9feu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93c9fe: mov ebp, dword ptr [esp + 0x78] */
  ebp = R32((uint32_t)(esp + 0x78u));
L_93ca02: /* 93ca02: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93ca05: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ca08: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 93ca0c: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 93ca10: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93ca14: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 93ca17: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 93ca1b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93ca1f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 93ca21: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 93ca25: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93ca28: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93ca2du); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93ca2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93ca2e: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 93ca32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ca33: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 93ca37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ca38: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 93ca3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ca40: lea eax, [esp + 0x7c] */
  eax = (uint32_t)(esp + 0x7cu);
/* 93ca44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ca45: mov dword ptr [esp + 0x80], 0xbf800000 */
  W32((uint32_t)(esp + 0x80u), 0xbf800000u);
/* 93ca50: mov dword ptr [esp + 0x88], 0x3f800000 */
  W32((uint32_t)(esp + 0x88u), 0x3f800000u);
/* 93ca5b: call 0x93cc30 */
  esp -= 4; W32(esp, 0x93ca60u); SPILL(); f_93cc30(); if (g_unwind) return; RELOAD();
/* 93ca60: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93ca63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93ca65: je 0x93cad5 */
  if (zf) goto L_93cad5;
L_93ca67: /* 93ca67: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 93ca69: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 93ca6d: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 93ca71: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 93ca74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ca75: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 93ca77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ca78: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 93ca7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ca7d: call 0x934a30 */
  esp -= 4; W32(esp, 0x93ca82u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93ca82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93ca85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ca86: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 93ca8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ca8b: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 93ca8f: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93ca94u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93ca94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ca95: mov ecx, ebp */
  ecx = ebp;
/* 93ca97: call 0x933e40 */
  esp -= 4; W32(esp, 0x93ca9cu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93ca9c: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 93ca9e: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 93caa2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 93caa6: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 93caa9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93caaa: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 93caac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93caad: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* 93cab1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cab2: call 0x934a30 */
  esp -= 4; W32(esp, 0x93cab7u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93cab7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93caba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cabb: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 93cabf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93cac0: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 93cac4: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93cac9u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93cac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93caca: mov ecx, ebp */
  ecx = ebp;
/* 93cacc: call 0x933e40 */
  esp -= 4; W32(esp, 0x93cad1u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93cad1: mov ebp, dword ptr [esp + 0x78] */
  ebp = R32((uint32_t)(esp + 0x78u));
L_93cad5: /* 93cad5: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93cad8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93cadb: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 93cadf: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 93cae3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93cae7: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 93caea: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 93caee: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93caf2: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 93caf4: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 93caf8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93cafb: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93cb00u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93cb00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93cb01: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 93cb05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93cb06: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93cb0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cb0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93cb0c: call 0x93ce20 */
  esp -= 4; W32(esp, 0x93cb11u); SPILL(); f_93ce20(); if (g_unwind) return; RELOAD();
/* 93cb11: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 93cb15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cb18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93cb19: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93cb1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93cb1e: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 93cb22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93cb23: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 93cb27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cb28: mov ecx, edi */
  ecx = edi;
/* 93cb2a: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93cb2fu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93cb2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cb30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93cb31: call 0x93ccc0 */
  esp -= 4; W32(esp, 0x93cb36u); SPILL(); f_93ccc0(); if (g_unwind) return; RELOAD();
/* 93cb36: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cb39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93cb3a: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93cb3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93cb3f: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 93cb43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93cb44: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 93cb48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cb49: mov ecx, edi */
  ecx = edi;
/* 93cb4b: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93cb50u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93cb50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cb51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93cb52: call 0x93ccc0 */
  esp -= 4; W32(esp, 0x93cb57u); SPILL(); f_93ccc0(); if (g_unwind) return; RELOAD();
/* 93cb57: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 93cb59: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 93cb5d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cb60: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93cb62: jne 0x93cbf2 */
  if (!zf) goto L_93cbf2;
L_93cb68: /* 93cb68: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 93cb6b: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 93cb6e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93cb70: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 93cb72: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93cb74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93cb75: mov ecx, ebx */
  ecx = ebx;
/* 93cb77: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 93cb7b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93cb7d: call 0x933e40 */
  esp -= 4; W32(esp, 0x93cb82u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93cb82: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 93cb86: fcomp qword ptr [0xa21508] */
  fpu_com(ST0, F64((uint32_t)(0xa21508u)));
  FPOP();
/* 93cb8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cb8e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93cb91: jne 0x93cbb7 */
  if (!zf) goto L_93cbb7;
L_93cb93: /* 93cb93: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 93cb96: mov ecx, ebx */
  ecx = ebx;
/* 93cb98: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 93cb9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cba0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93cba3: jp 0x93cbe8 */
  if (pf) goto L_93cbe8;
L_93cba5: /* 93cba5: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 93cba9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93cbaa: call 0x933e60 */
  esp -= 4; W32(esp, 0x93cbafu); SPILL(); f_933e60(); if (g_unwind) return; RELOAD();
/* 93cbaf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93cbb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93cbb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93cbb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93cbb3: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cbb6: ret  */
  esp += 4; SPILL(); return;
L_93cbb7: /* 93cbb7: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 93cbbb: fcomp dword ptr [0xa21500] */
  fpu_com(ST0, F32((uint32_t)(0xa21500u)));
  FPOP();
/* 93cbc1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cbc3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93cbc6: jp 0x93cbda */
  if (pf) goto L_93cbda;
L_93cbc8: /* 93cbc8: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 93cbcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93cbcc: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 93cbd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93cbd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93cbd2: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 93cbd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93cbd6: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cbd9: ret  */
  esp += 4; SPILL(); return;
L_93cbda: /* 93cbda: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 93cbde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93cbdf: mov ecx, ebx */
  ecx = ebx;
/* 93cbe1: call 0x93cc00 */
  esp -= 4; W32(esp, 0x93cbe6u); SPILL(); f_93cc00(); if (g_unwind) return; RELOAD();
/* 93cbe6: jmp 0x93cb93 */
  goto L_93cb93;
L_93cbe8: /* 93cbe8: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 93cbec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cbed: call 0x93cc00 */
  esp -= 4; W32(esp, 0x93cbf2u); SPILL(); f_93cc00(); if (g_unwind) return; RELOAD();
L_93cbf2: /* 93cbf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93cbf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93cbf4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93cbf5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93cbf6: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cbf9: ret  */
  esp += 4; SPILL(); return;
}

void f_93cc00(void) {
  LOAD_REGS();
L_93cc00: /* 93cc00: mov eax, ecx */
  eax = ecx;
/* 93cc02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 93cc06: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93cc08: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 93cc0a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93cc0c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 93cc0f: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 93cc12: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93cc15: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93cc18: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 93cc1b: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 93cc1e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93cc30(void) {
  LOAD_REGS();
L_93cc30: /* 93cc30: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 93cc34: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93cc37: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 93cc3b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93cc3f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 93cc43: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93cc46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93cc47: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 93cc4b: fchs  */
  ST0 = -ST0;
/* 93cc4d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93cc51: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93cc57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cc59: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93cc5c: jne 0x93cc75 */
  if (!zf) goto L_93cc75;
L_93cc5e: /* 93cc5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93cc60: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93cc64: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 93cc66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cc68: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93cc6b: jp 0x93cca7 */
  if (pf) goto L_93cca7;
L_93cc6d: /* 93cc6d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 93cc71: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 93cc73: jmp 0x93cca7 */
  goto L_93cca7;
L_93cc75: /* 93cc75: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93cc7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cc7d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93cc80: jp 0x93cc97 */
  if (pf) goto L_93cc97;
L_93cc82: /* 93cc82: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93cc86: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 93cc88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cc8a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93cc8d: jne 0x93cca7 */
  if (!zf) goto L_93cca7;
L_93cc8f: /* 93cc8f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 93cc93: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 93cc95: jmp 0x93cca7 */
  goto L_93cca7;
L_93cc97: /* 93cc97: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93cc9a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93cca0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cca2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93cca5: je 0x93ccb9 */
  if (zf) goto L_93ccb9;
L_93cca7: /* 93cca7: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 93cca9: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 93ccab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ccad: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93ccb0: jne 0x93ccb9 */
  if (!zf) goto L_93ccb9;
L_93ccb2: /* 93ccb2: mov eax, 1 */
  eax = 0x1u;
/* 93ccb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93ccb8: ret  */
  esp += 4; SPILL(); return;
L_93ccb9: /* 93ccb9: xor eax, eax */
  eax = 0;
/* 93ccbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93ccbc: ret  */
  esp += 4; SPILL(); return;
}

void f_93ccc0(void) {
  LOAD_REGS();
L_93ccc0: /* 93ccc0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ccc3: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 93ccc7: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 93ccca: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 93ccce: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93ccd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93ccd3: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93ccd6: mov dword ptr [esp + 4], 0xbf800000 */
  W32((uint32_t)(esp + 0x4u), 0xbf800000u);
/* 93ccde: mov dword ptr [esp + 8], 0x3f800000 */
  W32((uint32_t)(esp + 0x8u), 0x3f800000u);
/* 93cce6: fchs  */
  ST0 = -ST0;
/* 93cce8: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93ccec: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93ccf2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ccf4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93ccf7: jne 0x93cde6 */
  if (!zf) goto L_93cde6;
L_93ccfd: /* 93ccfd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93ccff: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93cd03: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 93cd09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cd0b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93cd0e: jp 0x93cde1 */
  if (pf) goto L_93cde1;
L_93cd14: /* 93cd14: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 93cd18: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_93cd1c: /* 93cd1c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93cd20: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 93cd24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cd26: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93cd29: jne 0x93cde1 */
  if (!zf) goto L_93cde1;
L_93cd2f: /* 93cd2f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 93cd33: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 93cd37: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 93cd3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cd3f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93cd42: jne 0x93cd8b */
  if (!zf) goto L_93cd8b;
L_93cd44: /* 93cd44: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 93cd48: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93cd4a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93cd4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93cd4d: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93cd51: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 93cd54: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93cd57: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93cd5b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93cd5f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93cd62: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93cd66: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 93cd68: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93cd6c: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 93cd6f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93cd73: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 93cd76: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 93cd78: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93cd7c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 93cd80: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93cd82: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93cd84: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 93cd87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93cd88: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_93cd8b: /* 93cd8b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93cd8f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 93cd95: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cd97: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93cd9a: jp 0x93cde1 */
  if (pf) goto L_93cde1;
L_93cd9c: /* 93cd9c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93cda0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93cda2: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93cda4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93cda8: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93cdab: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93cdaf: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93cdb3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93cdb6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93cdba: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 93cdbc: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93cdc0: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 93cdc3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93cdc7: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 93cdca: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 93cdcd: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 93cdcf: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93cdd3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 93cdd7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93cdd9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93cddb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93cdde: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_93cde1: /* 93cde1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93cde2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cde5: ret  */
  esp += 4; SPILL(); return;
L_93cde6: /* 93cde6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93cdec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cdee: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93cdf1: jp 0x93ce11 */
  if (pf) goto L_93ce11;
L_93cdf3: /* 93cdf3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93cdf7: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 93cdfd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cdff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93ce02: jne 0x93cde1 */
  if (!zf) goto L_93cde1;
L_93ce04: /* 93ce04: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 93ce08: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 93ce0c: jmp 0x93cd1c */
  goto L_93cd1c;
L_93ce11: /* 93ce11: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93ce14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93ce15: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93ce1b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93ce1e: ret  */
  esp += 4; SPILL(); return;
}

void f_93ce20(void) {
  LOAD_REGS();
L_93ce20: /* 93ce20: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ce23: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 93ce27: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 93ce2d: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 93ce30: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93ce34: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93ce38: mov dword ptr [esp], 0x3f800000 */
  W32((uint32_t)(esp), 0x3f800000u);
/* 93ce40: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93ce43: fchs  */
  ST0 = -ST0;
/* 93ce45: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93ce49: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93ce4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ce51: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93ce54: jne 0x93cf16 */
  if (!zf) goto L_93cf16;
L_93ce5a: /* 93ce5a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93ce5c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93ce60: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 93ce66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ce68: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ce6b: jp 0x93ce86 */
  if (pf) goto L_93ce86;
L_93ce6d: /* 93ce6d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 93ce71: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
L_93ce75: /* 93ce75: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 93ce79: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 93ce7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ce7d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93ce80: jne 0x93cf57 */
  if (!zf) goto L_93cf57;
L_93ce86: /* 93ce86: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93ce88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93ce89: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93ce8b: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 93ce8f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93ce91: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93ce93: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93ce96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93ce97: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 93ce9a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93ce9e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93cea0: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93cea3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93cea7: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 93cea9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93cead: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 93ceb0: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ceb4: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 93ceb7: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 93ceb9: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93cebd: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 93cec1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93cec3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93cec5: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 93cec8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93cec9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93cecc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93cece: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 93ced2: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93ced4: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 93ced8: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93cedb: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93cedf: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 93cee3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93cee6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93ceea: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 93ceec: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93cef0: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 93cef3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93cef7: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 93cefa: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 93cefd: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 93ceff: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93cf03: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 93cf07: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93cf09: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93cf0b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93cf0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93cf0f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93cf12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cf15: ret  */
  esp += 4; SPILL(); return;
L_93cf16: /* 93cf16: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93cf1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cf1e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93cf21: jp 0x93cf43 */
  if (pf) goto L_93cf43;
L_93cf23: /* 93cf23: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93cf27: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 93cf2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cf2f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93cf32: jne 0x93ce86 */
  if (!zf) goto L_93ce86;
L_93cf38: /* 93cf38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93cf3a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93cf3e: jmp 0x93ce75 */
  goto L_93ce75;
L_93cf43: /* 93cf43: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93cf46: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93cf4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93cf4e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93cf51: jne 0x93ce86 */
  if (!zf) goto L_93ce86;
L_93cf57: /* 93cf57: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93cf59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cf5c: ret  */
  esp += 4; SPILL(); return;
}

void f_93cf60(void) {
  LOAD_REGS();
L_93cf60: /* 93cf60: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93cf63: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93cf67: xor eax, eax */
  eax = 0;
/* 93cf69: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 93cf6d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 93cf71: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 93cf75: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93cf79: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 93cf7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cf7e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 93cf80: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 93cf82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93cf83: mov dword ptr [esp + 0x18], 0x93c400 */
  W32((uint32_t)(esp + 0x18u), 0x93c400u);
/* 93cf8b: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 93cf93: call 0x929df0 */
  esp -= 4; W32(esp, 0x93cf98u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 93cf98: mov eax, 1 */
  eax = 0x1u;
/* 93cf9d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93cfa0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93cfb0(void) {
  LOAD_REGS();
L_93cfb0: /* 93cfb0: sub esp, 0x1e8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1e8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93cfb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93cfb7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93cfb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93cfb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93cfba: push 0x9384b0 */
  { uint32_t v = 0x9384b0u; esp -= 4; W32(esp, v); }
/* 93cfbf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 93cfc1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 93cfc3: lea eax, [esp + 0x98] */
  eax = (uint32_t)(esp + 0x98u);
/* 93cfca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93cfcb: call 0x92c0e0 */
  esp -= 4; W32(esp, 0x93cfd0u); SPILL(); f_92c0e0(); if (g_unwind) return; RELOAD();
/* 93cfd0: mov edi, dword ptr [esp + 0x200] */
  edi = R32((uint32_t)(esp + 0x200u));
/* 93cfd7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 93cfd9: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 93cfdc: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 93cfdf: mov dword ptr [esp + 0x8c], ecx */
  W32((uint32_t)(esp + 0x8cu), ecx);
/* 93cfe6: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 93cfe9: mov dword ptr [esp + 0x90], edx */
  W32((uint32_t)(esp + 0x90u), edx);
/* 93cff0: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 93cff3: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 93cffa: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 93cffd: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 93d004: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 93d007: mov dword ptr [esp + 0xa0], edx */
  W32((uint32_t)(esp + 0xa0u), edx);
/* 93d00e: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 93d011: mov dword ptr [esp + 0xac], ecx */
  W32((uint32_t)(esp + 0xacu), ecx);
/* 93d018: mov dword ptr [esp + 0xa4], eax */
  W32((uint32_t)(esp + 0xa4u), eax);
/* 93d01f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 93d022: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 93d029: mov dword ptr [esp + 0xb0], edx */
  W32((uint32_t)(esp + 0xb0u), edx);
/* 93d030: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d031: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 93d035: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 93d038: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d039: mov ecx, edi */
  ecx = edi;
/* 93d03b: mov dword ptr [esp + 0xbc], eax */
  W32((uint32_t)(esp + 0xbcu), eax);
/* 93d042: call 0x9376d0 */
  esp -= 4; W32(esp, 0x93d047u); SPILL(); f_9376d0(); if (g_unwind) return; RELOAD();
/* 93d047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d048: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 93d04f: call 0x933f50 */
  esp -= 4; W32(esp, 0x93d054u); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 93d054: fld dword ptr [esp + 0x208] */
  { double v = F32((uint32_t)(esp + 0x208u)); FPUSH(v); }
/* 93d05b: lea eax, [esp + 0xd8] */
  eax = (uint32_t)(esp + 0xd8u);
/* 93d062: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 93d066: mov eax, dword ptr [esp + 0x210] */
  eax = R32((uint32_t)(esp + 0x210u));
/* 93d06d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93d070: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d073: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 93d07a: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d07e: fld dword ptr [esp + 0x214] */
  { double v = F32((uint32_t)(esp + 0x214u)); FPUSH(v); }
/* 93d085: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93d088: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d08c: fld dword ptr [esp + 0x214] */
  { double v = F32((uint32_t)(esp + 0x214u)); FPUSH(v); }
/* 93d093: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93d095: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d098: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93d09du); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93d09d: mov eax, dword ptr [esp + 0x214] */
  eax = R32((uint32_t)(esp + 0x214u));
/* 93d0a4: fld dword ptr [esp + 0x208] */
  { double v = F32((uint32_t)(esp + 0x208u)); FPUSH(v); }
/* 93d0ab: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93d0ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d0b1: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 93d0b5: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d0b9: fld dword ptr [esp + 0x214] */
  { double v = F32((uint32_t)(esp + 0x214u)); FPUSH(v); }
/* 93d0c0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93d0c3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d0c7: fld dword ptr [esp + 0x214] */
  { double v = F32((uint32_t)(esp + 0x214u)); FPUSH(v); }
/* 93d0ce: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93d0d0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d0d3: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93d0d8u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93d0d8: mov eax, dword ptr [esp + 0x218] */
  eax = R32((uint32_t)(esp + 0x218u));
/* 93d0df: fld dword ptr [esp + 0x20c] */
  { double v = F32((uint32_t)(esp + 0x20cu)); FPUSH(v); }
/* 93d0e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93d0e9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d0ec: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 93d0f0: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d0f4: fld dword ptr [esp + 0x218] */
  { double v = F32((uint32_t)(esp + 0x218u)); FPUSH(v); }
/* 93d0fb: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93d0fe: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d102: fld dword ptr [esp + 0x218] */
  { double v = F32((uint32_t)(esp + 0x218u)); FPUSH(v); }
/* 93d109: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93d10b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d10e: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93d113u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93d113: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93d119: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 93d11d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93d11f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93d122: jnp 0x93d130 */
  if (!pf) goto L_93d130;
L_93d124: /* 93d124: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93d12a: fdiv dword ptr [esp + 0x3c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x3cu)));
/* 93d12e: jmp 0x93d136 */
  goto L_93d136;
L_93d130: /* 93d130: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93d136: /* 93d136: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93d13c: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 93d140: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93d142: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93d145: jnp 0x93d153 */
  if (!pf) goto L_93d153;
L_93d147: /* 93d147: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93d14d: fdiv dword ptr [esp + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x38u)));
/* 93d151: jmp 0x93d159 */
  goto L_93d159;
L_93d153: /* 93d153: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93d159: /* 93d159: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93d15f: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 93d163: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93d165: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93d168: jnp 0x93d176 */
  if (!pf) goto L_93d176;
L_93d16a: /* 93d16a: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93d170: fdiv dword ptr [esp + 0x34] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x34u)));
/* 93d174: jmp 0x93d17c */
  goto L_93d17c;
L_93d176: /* 93d176: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93d17c: /* 93d17c: fstp dword ptr [esp + 0xcc] */
  WF32((uint32_t)(esp + 0xccu), ST0); FPOP();
/* 93d183: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 93d18a: fstp dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0); FPOP();
/* 93d191: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93d197: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 93d19b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93d19d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93d1a0: jnp 0x93d1ae */
  if (!pf) goto L_93d1ae;
L_93d1a2: /* 93d1a2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93d1a8: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 93d1ac: jmp 0x93d1b4 */
  goto L_93d1b4;
L_93d1ae: /* 93d1ae: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93d1b4: /* 93d1b4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93d1ba: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 93d1be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93d1c0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93d1c3: jnp 0x93d1d1 */
  if (!pf) goto L_93d1d1;
L_93d1c5: /* 93d1c5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93d1cb: fdiv dword ptr [esp + 0x2c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x2cu)));
/* 93d1cf: jmp 0x93d1d7 */
  goto L_93d1d7;
L_93d1d1: /* 93d1d1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93d1d7: /* 93d1d7: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93d1dd: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 93d1e1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93d1e3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93d1e6: jnp 0x93d1f4 */
  if (!pf) goto L_93d1f4;
L_93d1e8: /* 93d1e8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93d1ee: fdiv dword ptr [esp + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x28u)));
/* 93d1f2: jmp 0x93d1fa */
  goto L_93d1fa;
L_93d1f4: /* 93d1f4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93d1fa: /* 93d1fa: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 93d1fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d201: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93d205: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 93d20c: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 93d213: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 93d21a: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 93d21d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d221: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 93d228: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93d22b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d22f: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 93d236: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93d238: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d23b: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93d240u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93d240: fld dword ptr [esp + 0x21c] */
  { double v = F32((uint32_t)(esp + 0x21cu)); FPUSH(v); }
/* 93d247: mov ebx, dword ptr [esp + 0x204] */
  ebx = R32((uint32_t)(esp + 0x204u));
/* 93d24e: fmul dword ptr [0xa20e08] */
  ST0 = ST0 * (F32((uint32_t)(0xa20e08u)));
/* 93d254: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 93d258: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 93d25c: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 93d260: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 93d267: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 93d26f: mov esi, dword ptr [esp + 0x88] */
  esi = R32((uint32_t)(esp + 0x88u));
/* 93d276: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d277: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d278: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d279: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d27a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d27b: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93d27f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d280: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 93d284: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d285: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 93d28d: call 0x93dab0 */
  esp -= 4; W32(esp, 0x93d292u); SPILL(); f_93dab0(); if (g_unwind) return; RELOAD();
/* 93d292: mov ebp, dword ptr [esp + 0x218] */
  ebp = R32((uint32_t)(esp + 0x218u));
/* 93d299: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d29c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93d29e: je 0x93d324 */
  if (zf) goto L_93d324;
L_93d2a4: /* 93d2a4: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93d2a8: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 93d2ab: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 93d2af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d2b2: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 93d2b5: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 93d2b8: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 93d2bc: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d2c0: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93d2c4: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 93d2c8: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 93d2cc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d2d0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93d2d4: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93d2d8: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93d2dc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d2df: call 0x93da90 */
  esp -= 4; W32(esp, 0x93d2e4u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 93d2e4: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93d2e8: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 93d2eb: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 93d2ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d2f2: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 93d2f5: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 93d2f8: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 93d2fc: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d300: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93d304: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 93d308: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 93d30c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d310: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93d314: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93d318: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93d31c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d31f: call 0x93da90 */
  esp -= 4; W32(esp, 0x93d324u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
L_93d324: /* 93d324: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93d328: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d32b: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 93d32e: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93d332: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d336: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93d33a: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93d33d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d341: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93d345: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93d347: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d34a: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93d34fu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93d34f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d351: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 93d355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d356: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 93d35a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d35b: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 93d35f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d360: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 93d364: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d365: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 93d369: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d36a: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 93d372: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 93d37a: call 0x93dab0 */
  esp -= 4; W32(esp, 0x93d37fu); SPILL(); f_93dab0(); if (g_unwind) return; RELOAD();
/* 93d37f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d382: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93d384: je 0x93d40a */
  if (zf) goto L_93d40a;
L_93d38a: /* 93d38a: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93d38e: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 93d391: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 93d395: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d398: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 93d39b: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 93d39e: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 93d3a2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d3a6: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93d3aa: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 93d3ae: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 93d3b2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d3b6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93d3ba: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93d3be: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93d3c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d3c5: call 0x93da90 */
  esp -= 4; W32(esp, 0x93d3cau); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 93d3ca: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93d3ce: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 93d3d1: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 93d3d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d3d8: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 93d3db: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 93d3de: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 93d3e2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d3e6: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93d3ea: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 93d3ee: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 93d3f2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d3f6: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93d3fa: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93d3fe: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93d402: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d405: call 0x93da90 */
  esp -= 4; W32(esp, 0x93d40au); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
L_93d40a: /* 93d40a: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93d40d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d410: fsub dword ptr [esp + 0x90] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x90u)));
/* 93d417: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93d41b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d41f: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 93d422: fsub dword ptr [esp + 0x8c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8cu)));
/* 93d429: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d42d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 93d42f: fsub dword ptr [esp + 0x88] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x88u)));
/* 93d436: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d439: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93d43eu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93d43e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d43f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d440: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 93d444: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d445: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 93d449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d44a: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 93d44e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d44f: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 93d453: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d454: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 93d458: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d459: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 93d461: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 93d469: call 0x93dab0 */
  esp -= 4; W32(esp, 0x93d46eu); SPILL(); f_93dab0(); if (g_unwind) return; RELOAD();
/* 93d46e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d471: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93d473: je 0x93d4f9 */
  if (zf) goto L_93d4f9;
L_93d479: /* 93d479: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93d47d: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 93d480: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 93d484: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d487: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 93d48a: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 93d48d: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 93d491: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d495: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93d499: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 93d49d: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 93d4a1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d4a5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93d4a9: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93d4ad: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93d4b1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d4b4: call 0x93da90 */
  esp -= 4; W32(esp, 0x93d4b9u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 93d4b9: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93d4bd: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 93d4c0: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 93d4c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d4c7: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 93d4ca: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 93d4cd: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 93d4d1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d4d5: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93d4d9: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 93d4dd: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 93d4e1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d4e5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93d4e9: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93d4ed: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93d4f1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d4f4: call 0x93da90 */
  esp -= 4; W32(esp, 0x93d4f9u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
L_93d4f9: /* 93d4f9: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93d4fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d4ff: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 93d503: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93d507: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d50b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 93d50e: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 93d512: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d516: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 93d518: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 93d51c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d51f: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93d524u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93d524: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d525: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d526: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 93d52a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d52b: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 93d52f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d530: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 93d534: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d535: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 93d539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d53a: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 93d53e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d53f: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 93d547: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 93d54f: call 0x93dab0 */
  esp -= 4; W32(esp, 0x93d554u); SPILL(); f_93dab0(); if (g_unwind) return; RELOAD();
/* 93d554: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d557: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93d559: je 0x93d5df */
  if (zf) goto L_93d5df;
L_93d55f: /* 93d55f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93d563: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 93d566: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 93d56a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d56d: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 93d570: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 93d573: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 93d577: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d57b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93d57f: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 93d583: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 93d587: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d58b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93d58f: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93d593: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93d597: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d59a: call 0x93da90 */
  esp -= 4; W32(esp, 0x93d59fu); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 93d59f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93d5a3: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 93d5a6: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 93d5aa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d5ad: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 93d5b0: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 93d5b3: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 93d5b7: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d5bb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93d5bf: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 93d5c3: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 93d5c7: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d5cb: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93d5cf: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93d5d3: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93d5d7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d5da: call 0x93da90 */
  esp -= 4; W32(esp, 0x93d5dfu); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
L_93d5df: /* 93d5df: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93d5e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93d5e6: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 93d5e9: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93d5ed: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d5f1: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93d5f5: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93d5f8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d5fc: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93d600: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93d602: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d605: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93d60au); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93d60a: mov esi, dword ptr [esp + 0x21c] */
  esi = R32((uint32_t)(esp + 0x21cu));
/* 93d611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d612: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d613: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 93d61a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d61b: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 93d61f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d620: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 93d624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d625: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93d626: call 0x93db60 */
  esp -= 4; W32(esp, 0x93d62bu); SPILL(); f_93db60(); if (g_unwind) return; RELOAD();
/* 93d62b: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93d62e: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 93d632: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d635: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93d639: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93d63d: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 93d640: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 93d644: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93d648: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 93d64a: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 93d64e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93d651: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93d656u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93d656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d657: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d658: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 93d65f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d660: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 93d664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d665: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 93d669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d66a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93d66b: call 0x93db60 */
  esp -= 4; W32(esp, 0x93d670u); SPILL(); f_93db60(); if (g_unwind) return; RELOAD();
/* 93d670: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 93d672: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* 93d679: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d67a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d67b: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 93d67f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d680: call 0x934a30 */
  esp -= 4; W32(esp, 0x93d685u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93d685: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 93d688: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 93d68f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d690: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d691: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 93d695: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d696: call 0x934a30 */
  esp -= 4; W32(esp, 0x93d69bu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93d69b: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 93d69e: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 93d6a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d6a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d6a7: lea eax, [esp + 0x90] */
  eax = (uint32_t)(esp + 0x90u);
/* 93d6ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d6af: call 0x934a30 */
  esp -= 4; W32(esp, 0x93d6b4u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93d6b4: mov edi, dword ptr [esp + 0x248] */
  edi = R32((uint32_t)(esp + 0x248u));
/* 93d6bb: mov ebx, dword ptr [esp + 0x244] */
  ebx = R32((uint32_t)(esp + 0x244u));
/* 93d6c2: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d6c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d6c6: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d6cb: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d6d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d6d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d6d2: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93d6d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d6d7: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 93d6db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d6dc: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 93d6e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d6e1: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93d6e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d6e6: lea edx, [esp + 0x88] */
  edx = (uint32_t)(esp + 0x88u);
/* 93d6ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d6ee: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d6f5: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d6fau); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d6fa: mov ecx, eax */
  ecx = eax;
/* 93d6fc: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d701u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d701: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d702: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d706: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d707: call 0x93dce0 */
  esp -= 4; W32(esp, 0x93d70cu); SPILL(); f_93dce0(); if (g_unwind) return; RELOAD();
/* 93d70c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d70f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d710: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d715: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d71a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d71b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d71c: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93d720: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d721: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 93d725: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d726: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d72d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d72e: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93d732: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d733: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d737: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d738: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d73f: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d744u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d744: mov ecx, eax */
  ecx = eax;
/* 93d746: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d74bu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d74b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d74c: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d751: call 0x93dce0 */
  esp -= 4; W32(esp, 0x93d756u); SPILL(); f_93dce0(); if (g_unwind) return; RELOAD();
/* 93d756: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d759: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d75a: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d75f: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d764: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d765: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d766: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93d76a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d76b: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 93d76f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d770: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d777: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d778: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93d77c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d77d: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d782: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d789: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d78eu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d78e: mov ecx, eax */
  ecx = eax;
/* 93d790: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d795u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d796: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d79a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d79b: call 0x93dce0 */
  esp -= 4; W32(esp, 0x93d7a0u); SPILL(); f_93dce0(); if (g_unwind) return; RELOAD();
/* 93d7a0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d7a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d7a4: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d7a9: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d7ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d7af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d7b0: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93d7b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d7b5: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 93d7b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d7ba: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d7c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d7c2: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93d7c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d7c7: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d7cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d7cc: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d7d3: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d7d8u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d7d8: mov ecx, eax */
  ecx = eax;
/* 93d7da: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d7dfu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d7df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d7e0: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d7e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d7e5: call 0x93dce0 */
  esp -= 4; W32(esp, 0x93d7eau); SPILL(); f_93dce0(); if (g_unwind) return; RELOAD();
/* 93d7ea: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d7ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d7ee: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d7f3: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d7f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d7f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d7fa: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 93d7fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d7ff: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 93d803: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d804: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d80b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d80c: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 93d810: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d811: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d815: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d816: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d81d: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d822u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d822: mov ecx, eax */
  ecx = eax;
/* 93d824: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d829u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d829: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d82a: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d82e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d82f: call 0x93dce0 */
  esp -= 4; W32(esp, 0x93d834u); SPILL(); f_93dce0(); if (g_unwind) return; RELOAD();
/* 93d834: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d837: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d838: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d83d: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d842: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d843: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d844: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 93d848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d849: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 93d84d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d84e: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d856: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 93d85a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d85b: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d85f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d860: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d867: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d86cu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d86c: mov ecx, eax */
  ecx = eax;
/* 93d86e: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d873u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d874: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d878: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d879: call 0x93dce0 */
  esp -= 4; W32(esp, 0x93d87eu); SPILL(); f_93dce0(); if (g_unwind) return; RELOAD();
/* 93d87e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d882: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d887: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d88c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d88d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d88e: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 93d892: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d893: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 93d897: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d898: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d89f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d8a0: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 93d8a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d8a5: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d8a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d8aa: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d8b1: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d8b6u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d8b6: mov ecx, eax */
  ecx = eax;
/* 93d8b8: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d8bdu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d8bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d8be: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d8c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d8c3: call 0x93dce0 */
  esp -= 4; W32(esp, 0x93d8c8u); SPILL(); f_93dce0(); if (g_unwind) return; RELOAD();
/* 93d8c8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d8cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d8cc: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d8d1: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d8d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d8d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d8d8: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 93d8dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d8dd: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 93d8e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d8e2: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d8e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d8ea: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 93d8ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d8ef: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d8f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d8f4: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d8fb: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d900u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d900: mov ecx, eax */
  ecx = eax;
/* 93d902: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d907u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d908: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d90c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d90d: call 0x93dce0 */
  esp -= 4; W32(esp, 0x93d912u); SPILL(); f_93dce0(); if (g_unwind) return; RELOAD();
/* 93d912: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d915: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d916: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d91b: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d920: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d921: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d922: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93d926: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d927: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 93d92b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d92c: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d934: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93d938: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d939: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d93d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d93e: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d945: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d94au); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d94a: mov ecx, eax */
  ecx = eax;
/* 93d94c: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d951u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d952: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d956: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d957: call 0x93e150 */
  esp -= 4; W32(esp, 0x93d95cu); SPILL(); f_93e150(); if (g_unwind) return; RELOAD();
/* 93d95c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d95f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d960: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d965: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d96a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d96b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d96c: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93d970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d971: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 93d975: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d976: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d97d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d97e: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93d982: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d983: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d987: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d988: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d98f: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93d994u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93d994: mov ecx, eax */
  ecx = eax;
/* 93d996: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d99bu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d99b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d99c: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d9a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d9a1: call 0x93e150 */
  esp -= 4; W32(esp, 0x93d9a6u); SPILL(); f_93e150(); if (g_unwind) return; RELOAD();
/* 93d9a6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d9a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d9aa: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d9af: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d9b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d9b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93d9b6: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93d9ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d9bb: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 93d9bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d9c0: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93d9c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d9c8: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93d9cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93d9cd: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93d9d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93d9d2: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93d9d9: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d9deu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d9de: mov ecx, eax */
  ecx = eax;
/* 93d9e0: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93d9e5u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93d9e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d9e6: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93d9ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93d9eb: call 0x93e150 */
  esp -= 4; W32(esp, 0x93d9f0u); SPILL(); f_93e150(); if (g_unwind) return; RELOAD();
/* 93d9f0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93d9f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93d9f4: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93d9f9: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93d9fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93d9ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93da00: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93da04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93da05: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 93da09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93da0a: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 93da11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93da12: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 93da16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93da17: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93da1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93da1c: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93da23: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93da28u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93da28: mov ecx, eax */
  ecx = eax;
/* 93da2a: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93da2fu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93da2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93da30: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93da34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93da35: call 0x93e150 */
  esp -= 4; W32(esp, 0x93da3au); SPILL(); f_93e150(); if (g_unwind) return; RELOAD();
/* 93da3a: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 93da3e: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 93da45: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93da48: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93da4a: lea esi, [esp + 0xd8] */
  esi = (uint32_t)(esp + 0xd8u);
/* 93da51: je 0x93da75 */
  if (zf) goto L_93da75;
L_93da53: /* 93da53: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 93da56: mov ecx, esi */
  ecx = esi;
/* 93da58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93da59: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 93da5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93da5d: mov ecx, dword ptr [esp + 0x208] */
  ecx = R32((uint32_t)(esp + 0x208u));
/* 93da64: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 93da67: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 93da6a: call 0x933ef0 */
  esp -= 4; W32(esp, 0x93da6fu); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 93da6f: cmp esi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93da73: jne 0x93da53 */
  if (!zf) goto L_93da53;
L_93da75: /* 93da75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93da76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93da77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93da78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93da79: add esp, 0x1e8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1e8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93da7f: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_93da90(void) {
  LOAD_REGS();
L_93da90: /* 93da90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 93da94: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 93da98: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 93da9a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 93da9e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 93daa1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 93daa4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_93dab0(void) {
  LOAD_REGS();
L_93dab0: /* 93dab0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93dab4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 93dab8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93dab9: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 93dabd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93dabe: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 93dac2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93dac3: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 93dac7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93dac8: xor edi, edi */
  edi = 0;
/* 93daca: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 93dacc: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 93dace: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_93dad0: /* 93dad0: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 93dad3: fabs  */
  ST0 = fabs(ST0);
/* 93dad5: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 93dad9: fld dword ptr [esi + ecx] */
  { double v = F32((uint32_t)(esi + ecx)); FPUSH(v); }
/* 93dadc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dade: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93dae1: jp 0x93daf5 */
  if (pf) goto L_93daf5;
L_93dae3: /* 93dae3: fabs  */
  ST0 = fabs(ST0);
/* 93dae5: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 93dae7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dae9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93daec: jne 0x93db46 */
  if (!zf) goto L_93db46;
L_93daee: /* 93daee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93daef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93daf0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93daf1: xor eax, eax */
  eax = 0;
/* 93daf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93daf4: ret  */
  esp += 4; SPILL(); return;
L_93daf5: /* 93daf5: fmul dword ptr [edx + ecx] */
  ST0 = ST0 * (F32((uint32_t)(edx + ecx)));
/* 93daf8: fchs  */
  ST0 = -ST0;
/* 93dafa: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* 93dafd: fabs  */
  ST0 = fabs(ST0);
/* 93daff: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93db01: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93db03: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 93db05: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 93db09: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93db0b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93db0f: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 93db11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93db13: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93db16: jne 0x93db1e */
  if (!zf) goto L_93db1e;
L_93db18: /* 93db18: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 93db1c: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_93db1e: /* 93db1e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 93db22: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93db24: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* 93db26: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93db28: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93db2b: jp 0x93db35 */
  if (pf) goto L_93db35;
L_93db2d: /* 93db2d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 93db31: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93db33: jmp 0x93db37 */
  goto L_93db37;
L_93db35: /* 93db35: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93db37: /* 93db37: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 93db3b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93db3d: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 93db3f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93db41: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93db44: jnp 0x93daee */
  if (!pf) goto L_93daee;
L_93db46: /* 93db46: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 93db47: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93db4a: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93db4d: jl 0x93dad0 */
  if ((sf != of)) goto L_93dad0;
L_93db4f: /* 93db4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93db50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93db51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93db52: mov eax, 1 */
  eax = 0x1u;
/* 93db57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93db58: ret  */
  esp += 4; SPILL(); return;
}

void f_93db60(void) {
  LOAD_REGS();
L_93db60: /* 93db60: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93db63: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93db67: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93db6b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 93db6f: fmul dword ptr [0xa20e08] */
  ST0 = ST0 * (F32((uint32_t)(0xa20e08u)));
/* 93db75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93db76: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 93db7a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93db7b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93db7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93db80: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 93db84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93db85: mov eax, edx */
  eax = edx;
/* 93db87: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 93db89: mov edi, esi */
  edi = esi;
/* 93db8b: xor ebp, ebp */
  ebp = 0;
/* 93db8d: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 93db8f: mov dword ptr [esp + 0x10], 0xbf800000 */
  W32((uint32_t)(esp + 0x10u), 0xbf800000u);
/* 93db97: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 93db9f: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 93dba3: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 93dba5: jmp 0x93dbb0 */
  goto L_93dbb0;
L_93dba7: /* 93dba7: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 93dbab: nop  */
/* 93dbac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93dbb0: /* 93dbb0: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 93dbb3: fabs  */
  ST0 = fabs(ST0);
/* 93dbb5: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 93dbb9: fld dword ptr [edi + ecx] */
  { double v = F32((uint32_t)(edi + ecx)); FPUSH(v); }
/* 93dbbc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dbbe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93dbc1: jp 0x93dbd4 */
  if (pf) goto L_93dbd4;
L_93dbc3: /* 93dbc3: fabs  */
  ST0 = fabs(ST0);
/* 93dbc5: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 93dbc7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dbc9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93dbcc: je 0x93dcd2 */
  if (zf) goto L_93dcd2;
L_93dbd2: /* 93dbd2: jmp 0x93dc27 */
  goto L_93dc27;
L_93dbd4: /* 93dbd4: fmul dword ptr [ebx + ecx] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ecx)));
/* 93dbd7: fchs  */
  ST0 = -ST0;
/* 93dbd9: fld dword ptr [ebx + ecx] */
  { double v = F32((uint32_t)(ebx + ecx)); FPUSH(v); }
/* 93dbdc: fabs  */
  ST0 = fabs(ST0);
/* 93dbde: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93dbe0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93dbe2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 93dbe4: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 93dbe8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93dbea: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93dbee: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 93dbf2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dbf4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93dbf7: jne 0x93dc01 */
  if (!zf) goto L_93dc01;
L_93dbf9: /* 93dbf9: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 93dbfd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_93dc01: /* 93dc01: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 93dc05: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dc07: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93dc0a: jp 0x93dc12 */
  if (pf) goto L_93dc12;
L_93dc0c: /* 93dc0c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93dc10: jmp 0x93dc14 */
  goto L_93dc14;
L_93dc12: /* 93dc12: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93dc14: /* 93dc14: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93dc18: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 93dc1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dc1e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93dc21: jnp 0x93dcd2 */
  if (!pf) goto L_93dcd2;
L_93dc27: /* 93dc27: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 93dc28: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93dc2b: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93dc2e: jl 0x93dba7 */
  if ((sf != of)) goto L_93dba7;
L_93dc34: /* 93dc34: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93dc38: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93dc3c: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 93dc42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dc44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93dc47: jne 0x93dc85 */
  if (!zf) goto L_93dc85;
L_93dc49: /* 93dc49: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93dc4d: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 93dc53: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dc55: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93dc58: jp 0x93dc85 */
  if (pf) goto L_93dc85;
L_93dc5a: /* 93dc5a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93dc5e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 93dc60: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93dc63: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 93dc66: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 93dc69: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93dc6d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93dc70: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 93dc73: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93dc77: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93dc79: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 93dc7b: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 93dc7d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93dc7f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93dc82: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_93dc85: /* 93dc85: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93dc89: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 93dc8f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dc91: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93dc94: jne 0x93dcd2 */
  if (!zf) goto L_93dcd2;
L_93dc96: /* 93dc96: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93dc9a: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 93dca0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dca2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93dca5: jp 0x93dcd2 */
  if (pf) goto L_93dcd2;
L_93dca7: /* 93dca7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93dcab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 93dcad: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93dcb0: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 93dcb3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93dcb7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93dcba: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 93dcbd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93dcc1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93dcc3: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 93dcc6: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 93dcc8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 93dcca: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93dccc: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93dccf: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_93dcd2: /* 93dcd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93dcd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93dcd4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93dcd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93dcd6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93dcd9: ret  */
  esp += 4; SPILL(); return;
}

void f_93dce0(void) {
  LOAD_REGS();
L_93dce0: /* 93dce0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93dce3: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93dce7: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 93dceb: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 93dcef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93dcf0: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 93dcf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93dcf5: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 93dcf9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93dcfa: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 93dcfe: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 93dd02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93dd03: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 93dd07: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 93dd0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93dd0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93dd0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93dd0e: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 93dd12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93dd13: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 93dd17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93dd18: call 0x93dde0 */
  esp -= 4; W32(esp, 0x93dd1du); SPILL(); f_93dde0(); if (g_unwind) return; RELOAD();
/* 93dd1d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93dd20: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93dd22: je 0x93ddd4 */
  if (zf) goto L_93ddd4;
L_93dd28: /* 93dd28: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93dd2c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93dd30: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 93dd34: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dd36: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93dd39: jne 0x93dd80 */
  if (!zf) goto L_93dd80;
L_93dd3b: /* 93dd3b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93dd3f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 93dd41: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93dd43: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 93dd46: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93dd4a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93dd4d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93dd51: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93dd55: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93dd58: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93dd5c: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93dd5e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93dd62: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93dd65: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93dd69: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 93dd6c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 93dd6e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93dd72: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 93dd76: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93dd78: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93dd7a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93dd7d: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_93dd80: /* 93dd80: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93dd84: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 93dd88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dd8a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93dd8d: jp 0x93ddd4 */
  if (pf) goto L_93ddd4;
L_93dd8f: /* 93dd8f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93dd93: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 93dd95: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93dd97: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 93dd9a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93dd9e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93dda1: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93dda5: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93dda9: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93ddac: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93ddb0: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93ddb2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ddb6: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93ddb9: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ddbd: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 93ddc0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 93ddc2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93ddc6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93ddca: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93ddcc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93ddce: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 93ddd1: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_93ddd4: /* 93ddd4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93ddd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93ddd6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93ddd9: ret  */
  esp += 4; SPILL(); return;
}

void f_93dde0(void) {
  LOAD_REGS();
L_93dde0: /* 93dde0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93dde3: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 93dde7: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93ddea: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 93ddee: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93ddf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93ddf1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93ddf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93ddf4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93ddf6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93ddf8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93ddfa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ddfc: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93de00: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 93de04: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93de06: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93de0a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93de0c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93de0e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93de10: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93de12: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 93de15: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93de18: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93de1a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93de1e: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 93de21: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 93de23: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93de25: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93de27: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93de29: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93de2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93de2d: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93de31: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93de33: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93de35: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93de39: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 93de3d: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93de41: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 93de45: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93de47: fst dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0);
/* 93de4b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93de51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93de53: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93de56: jnp 0x93de8e */
  if (!pf) goto L_93de8e;
L_93de58: /* 93de58: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93de5c: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 93de60: fchs  */
  ST0 = -ST0;
/* 93de62: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93de66: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93de6a: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93de6c: fsubr dword ptr [esp + 0xc] */
  ST0 = (F32((uint32_t)(esp + 0xcu))) - ST0;
/* 93de70: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93de76: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93de78: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93de7b: jne 0x93de96 */
  if (!zf) goto L_93de96;
L_93de7d: /* 93de7d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93de7f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93de81: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 93de85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93de87: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93de89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93de8c: jne 0x93de98 */
  if (!zf) goto L_93de98;
L_93de8e: /* 93de8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93de8f: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93de91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93de92: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93de95: ret  */
  esp += 4; SPILL(); return;
L_93de96: /* 93de96: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93de98: /* 93de98: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93de9c: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 93dea0: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93dea2: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 93dea6: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93deac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93deae: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93deb1: jne 0x93decc */
  if (!zf) goto L_93decc;
L_93deb3: /* 93deb3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93deb5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93deb7: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 93debb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93debd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93debf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93dec2: jne 0x93dece */
  if (!zf) goto L_93dece;
L_93dec4: /* 93dec4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93dec5: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93dec7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93dec8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93decb: ret  */
  esp += 4; SPILL(); return;
L_93decc: /* 93decc: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93dece: /* 93dece: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93ded2: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 93ded5: fsqrt  */
  ST0 = sqrt(ST0);
/* 93ded7: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 93dedb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93dedf: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 93dee1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93dee5: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 93dee9: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93deed: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 93def0: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 93def4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93defa: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93defe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93df00: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93df03: jp 0x93df11 */
  if (pf) goto L_93df11;
L_93df05: /* 93df05: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93df09: fchs  */
  ST0 = -ST0;
/* 93df0b: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93df0f: jmp 0x93df1b */
  goto L_93df1b;
L_93df11: /* 93df11: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 93df15: fchs  */
  ST0 = -ST0;
/* 93df17: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
L_93df1b: /* 93df1b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93df1f: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 93df21: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 93df25: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93df29: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93df2b: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 93df2f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93df31: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93df34: jp 0x93df40 */
  if (pf) goto L_93df40;
L_93df36: /* 93df36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93df37: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93df39: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93df3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93df3c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93df3f: ret  */
  esp += 4; SPILL(); return;
L_93df40: /* 93df40: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 93df44: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 93df48: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93df4c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93df4e: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 93df52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93df54: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93df57: je 0x93de8e */
  if (zf) goto L_93de8e;
L_93df5d: /* 93df5d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93df61: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 93df65: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 93df69: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93df6d: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 93df71: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93df75: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93df79: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 93df7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93df7f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93df82: jnp 0x93de8e */
  if (!pf) goto L_93de8e;
L_93df88: /* 93df88: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93df8c: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 93df90: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93df94: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93df98: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 93df9c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93dfa0: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93dfa4: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 93dfa8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dfaa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93dfad: jnp 0x93de8e */
  if (!pf) goto L_93de8e;
L_93dfb3: /* 93dfb3: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93dfb7: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 93dfbb: fmul dword ptr [0xa214f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214f8u)));
/* 93dfc1: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 93dfc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dfc7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93dfca: jne 0x93e022 */
  if (!zf) goto L_93e022;
L_93dfcc: /* 93dfcc: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93dfd0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93dfd6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dfd8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93dfdb: je 0x93de8e */
  if (zf) goto L_93de8e;
L_93dfe1: /* 93dfe1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93dfe7: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 93dfeb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93dfed: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93dff0: jnp 0x93e00c */
  if (!pf) goto L_93e00c;
L_93dff2: /* 93dff2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93dff8: fdiv dword ptr [esp + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x38u)));
/* 93dffc: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93e000: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93e002: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93e006: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 93e00a: jmp 0x93e081 */
  goto L_93e081;
L_93e00c: /* 93e00c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93e012: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93e016: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93e018: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93e01c: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 93e020: jmp 0x93e081 */
  goto L_93e081;
L_93e022: /* 93e022: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93e026: fabs  */
  ST0 = fabs(ST0);
/* 93e028: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93e02c: fmul dword ptr [0xa214d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214d8u)));
/* 93e032: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93e034: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e036: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e039: jne 0x93e0ab */
  if (!zf) goto L_93e0ab;
L_93e03b: /* 93e03b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93e03f: fabs  */
  ST0 = fabs(ST0);
/* 93e041: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 93e045: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e047: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e04a: je 0x93de8e */
  if (zf) goto L_93de8e;
L_93e050: /* 93e050: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93e056: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 93e05a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e05c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e05f: jnp 0x93e06d */
  if (!pf) goto L_93e06d;
L_93e061: /* 93e061: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93e067: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 93e06b: jmp 0x93e073 */
  goto L_93e073;
L_93e06d: /* 93e06d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93e073: /* 93e073: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93e077: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93e079: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
L_93e07d: /* 93e07d: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
L_93e081: /* 93e081: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93e085: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 93e087: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e089: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e08c: jne 0x93e094 */
  if (!zf) goto L_93e094;
L_93e08e: /* 93e08e: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 93e092: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_93e094: /* 93e094: fcom dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
/* 93e096: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e098: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e09b: jp 0x93e13c */
  if (pf) goto L_93e13c;
L_93e0a1: /* 93e0a1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 93e0a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93e0a4: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 93e0a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93e0a7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93e0aa: ret  */
  esp += 4; SPILL(); return;
L_93e0ab: /* 93e0ab: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93e0b1: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 93e0b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e0b7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e0ba: jnp 0x93e0cc */
  if (!pf) goto L_93e0cc;
L_93e0bc: /* 93e0bc: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93e0c2: fdiv dword ptr [esp + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x38u)));
/* 93e0c6: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 93e0ca: jmp 0x93e0d4 */
  goto L_93e0d4;
L_93e0cc: /* 93e0cc: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
L_93e0d4: /* 93e0d4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93e0da: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 93e0de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e0e0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e0e3: jnp 0x93e0f1 */
  if (!pf) goto L_93e0f1;
L_93e0e5: /* 93e0e5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93e0eb: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 93e0ef: jmp 0x93e0f7 */
  goto L_93e0f7;
L_93e0f1: /* 93e0f1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93e0f7: /* 93e0f7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93e0fb: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 93e0ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e101: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e104: jp 0x93e110 */
  if (pf) goto L_93e110;
L_93e106: /* 93e106: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93e10a: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 93e10e: jmp 0x93e116 */
  goto L_93e116;
L_93e110: /* 93e110: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 93e114: fmul st(1) */
  ST0 = ST0 * STI(1);
L_93e116: /* 93e116: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93e11a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93e11e: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 93e122: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e124: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e127: jp 0x93e07d */
  if (pf) goto L_93e07d;
L_93e12d: /* 93e12d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93e12f: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93e133: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 93e137: jmp 0x93e081 */
  goto L_93e081;
L_93e13c: /* 93e13c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93e13d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93e13f: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 93e141: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93e142: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93e145: ret  */
  esp += 4; SPILL(); return;
}

void f_93e150(void) {
  LOAD_REGS();
L_93e150: /* 93e150: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93e153: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 93e157: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 93e15b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 93e15f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93e160: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 93e164: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93e165: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 93e169: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93e16a: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 93e16e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93e172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93e173: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 93e177: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 93e17b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93e17c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93e17d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93e17e: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 93e182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93e183: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 93e187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93e188: call 0x93dde0 */
  esp -= 4; W32(esp, 0x93e18du); SPILL(); f_93dde0(); if (g_unwind) return; RELOAD();
/* 93e18d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93e190: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e192: je 0x93e226 */
  if (zf) goto L_93e226;
L_93e198: /* 93e198: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93e19c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93e1a0: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93e1a2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 93e1a4: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93e1a8: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 93e1ab: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93e1ae: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93e1b2: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93e1b6: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93e1b9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93e1bd: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93e1bf: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93e1c3: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93e1c6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93e1ca: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 93e1cd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 93e1cf: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93e1d3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 93e1d7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e1d9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93e1db: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93e1de: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93e1e1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 93e1e3: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93e1e7: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 93e1ea: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93e1ec: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93e1f0: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93e1f3: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93e1f7: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93e1fb: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93e1fe: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93e202: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93e204: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93e208: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 93e20b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93e20f: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 93e212: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 93e214: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93e218: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93e21c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e21e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93e220: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 93e223: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_93e226: /* 93e226: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93e227: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93e228: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93e22b: ret  */
  esp += 4; SPILL(); return;
}

void f_93e230(void) {
  LOAD_REGS();
L_93e230: /* 93e230: sub esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93e236: mov eax, dword ptr [esp + 0x108] */
  eax = R32((uint32_t)(esp + 0x108u));
/* 93e23d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93e23e: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 93e245: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 93e249: lea ebx, [eax + 0x20] */
  ebx = (uint32_t)(eax + 0x20u);
/* 93e24c: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 93e24f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93e250: mov ecx, ebx */
  ecx = ebx;
/* 93e252: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 93e254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93e255: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 93e259: mov ecx, dword ptr [esp + 0x108] */
  ecx = R32((uint32_t)(esp + 0x108u));
/* 93e260: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* 93e264: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93e265: xor edi, edi */
  edi = 0;
/* 93e267: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 93e269: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 93e26b: mov byte ptr [esp + 0x12], 1 */
  W8((uint32_t)(esp + 0x12u), 0x1u);
/* 93e270: mov dword ptr [esp + 0x2c], 0xff7fffff */
  W32((uint32_t)(esp + 0x2cu), 0xff7fffffu);
/* 93e278: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 93e280: mov byte ptr [esp + 0x13], 0xf */
  W8((uint32_t)(esp + 0x13u), 0xfu);
/* 93e285: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 93e289: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 93e28d: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 93e291: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 93e295: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 93e299: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93e2a0: /* 93e2a0: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 93e2a4: mov esi, 1 */
  esi = 0x1u;
/* 93e2a9: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 93e2ab: mov eax, 1 */
  eax = 0x1u;
/* 93e2b0: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  esi = r;
  }
/* 93e2b3: fld dword ptr [ebx + esi*4] */
  { double v = F32((uint32_t)(ebx + esi*4)); FPUSH(v); }
/* 93e2b6: mov ecx, esi */
  ecx = esi;
/* 93e2b8: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 93e2ba: fchs  */
  ST0 = -ST0;
/* 93e2bc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 93e2c0: mov dword ptr [ecx + edx], 0 */
  W32((uint32_t)(ecx + edx), 0x0u);
/* 93e2c7: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 93e2cb: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 93e2ce: mov edx, dword ptr [ebx + eax*4] */
  edx = R32((uint32_t)(ebx + eax*4));
/* 93e2d1: mov dword ptr [esp + esi*4 + 0x54], edx */
  W32((uint32_t)(esp + esi*4 + 0x54u), edx);
/* 93e2d5: fstp dword ptr [esp + eax*4 + 0x54] */
  WF32((uint32_t)(esp + eax*4 + 0x54u), ST0); FPOP();
/* 93e2d9: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 93e2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93e2de: call 0x934970 */
  esp -= 4; W32(esp, 0x93e2e3u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93e2e3: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 93e2e7: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 93e2eb: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 93e2ef: lea ebp, [esp + edi + 0x7c] */
  ebp = (uint32_t)(esp + edi + 0x7cu);
/* 93e2f3: mov dword ptr [ebp], ecx */
  W32((uint32_t)(ebp), ecx);
/* 93e2f6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93e2f7: mov ecx, ebp */
  ecx = ebp;
/* 93e2f9: mov dword ptr [esp + edi + 0x84], edx */
  W32((uint32_t)(esp + edi + 0x84u), edx);
/* 93e300: mov dword ptr [esp + edi + 0x88], eax */
  W32((uint32_t)(esp + edi + 0x88u), eax);
/* 93e307: call 0x92e280 */
  esp -= 4; W32(esp, 0x93e30cu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93e30c: fcomp qword ptr [0xa214f0] */
  fpu_com(ST0, F64((uint32_t)(0xa214f0u)));
  FPOP();
/* 93e312: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e314: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e317: jp 0x93e367 */
  if (pf) goto L_93e367;
L_93e319: /* 93e319: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 93e31b: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 93e31e: mov ecx, esi */
  ecx = esi;
/* 93e320: mov ebp, 1 */
  ebp = 0x1u;
/* 93e325: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* 93e327: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 93e32b: mov eax, 0x3f800000 */
  eax = 0x3f800000u;
/* 93e330: mov dword ptr [esp + edi + 0x80], edx */
  W32((uint32_t)(esp + edi + 0x80u), edx);
/* 93e337: and ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 93e33a: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 93e33c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93e33e: mov dword ptr [esp + edi + 0x84], edx */
  W32((uint32_t)(esp + edi + 0x84u), edx);
/* 93e345: mov dword ptr [esp + edi + 0xa0], edx */
  W32((uint32_t)(esp + edi + 0xa0u), edx);
/* 93e34c: mov dword ptr [esp + edi + 0xa4], edx */
  W32((uint32_t)(esp + edi + 0xa4u), edx);
/* 93e353: mov dword ptr [esp + edi + 0xa8], edx */
  W32((uint32_t)(esp + edi + 0xa8u), edx);
/* 93e35a: mov dword ptr [esp + ebp*4 + 0x7c], eax */
  W32((uint32_t)(esp + ebp*4 + 0x7cu), eax);
/* 93e35e: mov dword ptr [esp + ecx*4 + 0xa0], eax */
  W32((uint32_t)(esp + ecx*4 + 0xa0u), eax);
/* 93e365: jmp 0x93e3d4 */
  goto L_93e3d4;
L_93e367: /* 93e367: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93e368: mov ecx, ebp */
  ecx = ebp;
/* 93e36a: call 0x92e280 */
  esp -= 4; W32(esp, 0x93e36fu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93e36f: fsqrt  */
  ST0 = sqrt(ST0);
/* 93e371: fst dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0);
/* 93e375: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93e37b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e37d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e380: jnp 0x93e38e */
  if (!pf) goto L_93e38e;
L_93e382: /* 93e382: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 93e386: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93e387: mov ecx, ebp */
  ecx = ebp;
/* 93e389: call 0x934990 */
  esp -= 4; W32(esp, 0x93e38eu); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93e38e: /* 93e38e: lea edx, [esp + 0xc4] */
  edx = (uint32_t)(esp + 0xc4u);
/* 93e395: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93e396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93e397: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93e398: call 0x9349f0 */
  esp -= 4; W32(esp, 0x93e39du); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 93e39d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93e3a0: lea eax, [esp + 0xc4] */
  eax = (uint32_t)(esp + 0xc4u);
/* 93e3a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93e3a8: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 93e3ac: call 0x934970 */
  esp -= 4; W32(esp, 0x93e3b1u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93e3b1: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93e3b5: fstp dword ptr [esp + edi + 0xa0] */
  WF32((uint32_t)(esp + edi + 0xa0u), ST0); FPOP();
/* 93e3bc: xor edx, edx */
  edx = 0;
/* 93e3be: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93e3c2: fstp dword ptr [esp + edi + 0xa4] */
  WF32((uint32_t)(esp + edi + 0xa4u), ST0); FPOP();
/* 93e3c9: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93e3cd: fstp dword ptr [esp + edi + 0xa8] */
  WF32((uint32_t)(esp + edi + 0xa8u), ST0); FPOP();
L_93e3d4: /* 93e3d4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 93e3d8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 93e3da: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 93e3de: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 93e3e2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93e3e4: fabs  */
  ST0 = fabs(ST0);
/* 93e3e6: mov ebp, dword ptr [esp + 0x78] */
  ebp = R32((uint32_t)(esp + 0x78u));
/* 93e3ea: fld dword ptr [esi + ecx] */
  { double v = F32((uint32_t)(esi + ecx)); FPUSH(v); }
/* 93e3ed: fabs  */
  ST0 = fabs(ST0);
/* 93e3ef: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e3f1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e3f3: fmul dword ptr [esp + 0x114] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x114u)));
/* 93e3fa: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93e3fc: fabs  */
  ST0 = fabs(ST0);
/* 93e3fe: fst dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0);
/* 93e402: fmul dword ptr [esp + 0x110] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x110u)));
/* 93e409: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e40b: fadd dword ptr [esi + ebp] */
  ST0 = ST0 + (F32((uint32_t)(esi + ebp)));
/* 93e40e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93e410: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93e414: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 93e418: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e41a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e41d: jne 0x93e475 */
  if (!zf) goto L_93e475;
L_93e41f: /* 93e41f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93e425: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 93e429: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 93e42d: mov dword ptr [esp + 0x18], 0xbf800000 */
  W32((uint32_t)(esp + 0x18u), 0xbf800000u);
/* 93e435: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e437: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e43a: je 0x93e444 */
  if (zf) goto L_93e444;
L_93e43c: /* 93e43c: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
L_93e444: /* 93e444: fld dword ptr [esi + ebp] */
  { double v = F32((uint32_t)(esi + ebp)); FPUSH(v); }
/* 93e447: mov cl, byte ptr [esp + 0x24] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* 93e44b: fchs  */
  ST0 = -ST0;
/* 93e44d: or cl, 0xc */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93e450: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 93e454: mov byte ptr [esp + 0x13], cl */
  W8((uint32_t)(esp + 0x13u), (ecx & 0xffu));
/* 93e458: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 93e45c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93e460: fcomp dword ptr [esp + 0x108] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x108u)));
  FPOP();
/* 93e467: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e469: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e46c: je 0x93e4ae */
  if (zf) goto L_93e4ae;
L_93e46e: /* 93e46e: mov byte ptr [esp + 0x12], 0 */
  W8((uint32_t)(esp + 0x12u), 0x0u);
/* 93e473: jmp 0x93e477 */
  goto L_93e477;
L_93e475: /* 93e475: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93e477: /* 93e477: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 93e47b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 93e47f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 93e480: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 93e484: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 93e488: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93e48b: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 93e48e: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 93e491: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 93e494: cmp edi, 0x24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93e497: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 93e49b: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 93e49f: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 93e4a3: jge 0x93e4bf */
  if ((sf == of)) goto L_93e4bf;
L_93e4a5: /* 93e4a5: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 93e4a9: jmp 0x93e2a0 */
  goto L_93e2a0;
L_93e4ae: /* 93e4ae: mov ebp, dword ptr [esp + 0x10c] */
  ebp = R32((uint32_t)(esp + 0x10cu));
/* 93e4b5: mov byte ptr [esp + 0x12], 1 */
  W8((uint32_t)(esp + 0x12u), 0x1u);
/* 93e4ba: jmp 0x93e887 */
  goto L_93e887;
L_93e4bf: /* 93e4bf: mov eax, dword ptr [esp + 0x118] */
  eax = R32((uint32_t)(esp + 0x118u));
/* 93e4c6: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 93e4c9: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* 93e4cc: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 93e4cf: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 93e4d2: mov ebp, dword ptr [esp + 0x10c] */
  ebp = R32((uint32_t)(esp + 0x10cu));
/* 93e4d9: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93e4dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e4de: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93e4e0: mov eax, dword ptr [esp + 0x118] */
  eax = R32((uint32_t)(esp + 0x118u));
/* 93e4e7: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 93e4e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e4eb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93e4ed: fabs  */
  ST0 = fabs(ST0);
/* 93e4ef: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93e4f3: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 93e4f6: fabs  */
  ST0 = fabs(ST0);
/* 93e4f8: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 93e4fb: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 93e4fe: fabs  */
  ST0 = fabs(ST0);
/* 93e500: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e502: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e504: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 93e507: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e509: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 93e50b: fabs  */
  ST0 = fabs(ST0);
/* 93e50d: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 93e511: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 93e514: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e516: fadd dword ptr [esp + 0x114] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x114u)));
/* 93e51d: fsubr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) - ST0;
/* 93e521: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93e525: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 93e529: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e52b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 93e52e: jne 0x93e59e */
  if (!zf) goto L_93e59e;
L_93e530: /* 93e530: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93e536: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 93e53a: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 93e53e: mov dword ptr [esp + 0x18], 0xbf800000 */
  W32((uint32_t)(esp + 0x18u), 0xbf800000u);
/* 93e546: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e548: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e54b: je 0x93e555 */
  if (zf) goto L_93e555;
L_93e54d: /* 93e54d: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
L_93e555: /* 93e555: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93e559: mov byte ptr [esp + 0x13], 0xb */
  W8((uint32_t)(esp + 0x13u), 0xbu);
/* 93e55e: fcomp dword ptr [esp + 0x108] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x108u)));
  FPOP();
/* 93e565: mov byte ptr [esp + 0x12], 1 */
  W8((uint32_t)(esp + 0x12u), 0x1u);
/* 93e56a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e56c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e56f: je 0x93e576 */
  if (zf) goto L_93e576;
L_93e571: /* 93e571: mov byte ptr [esp + 0x12], 0 */
  W8((uint32_t)(esp + 0x12u), 0x0u);
L_93e576: /* 93e576: fld dword ptr [esp + 0x114] */
  { double v = F32((uint32_t)(esp + 0x114u)); FPUSH(v); }
/* 93e57d: mov al, byte ptr [esp + 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 93e581: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 93e583: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 93e587: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 93e58b: jne 0x93e883 */
  if (!zf) goto L_93e883;
L_93e591: /* 93e591: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 93e595: lea esi, [esp + 0xd0] */
  esi = (uint32_t)(esp + 0xd0u);
/* 93e59c: jmp 0x93e5b1 */
  goto L_93e5b1;
L_93e59e: /* 93e59e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93e5a0: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 93e5a4: lea esi, [esp + 0xd0] */
  esi = (uint32_t)(esp + 0xd0u);
/* 93e5ab: jmp 0x93e5b1 */
  goto L_93e5b1;
L_93e5ad: /* 93e5ad: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_93e5b1: /* 93e5b1: mov ecx, edx */
  ecx = edx;
/* 93e5b3: mov eax, 1 */
  eax = 0x1u;
/* 93e5b8: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 93e5ba: mov edi, 1 */
  edi = 0x1u;
/* 93e5bf: mov dword ptr [esp + edx*4 + 0x30], 0 */
  W32((uint32_t)(esp + edx*4 + 0x30u), 0x0u);
/* 93e5c7: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 93e5ca: mov edx, dword ptr [ebx + eax*4] */
  edx = R32((uint32_t)(ebx + eax*4));
/* 93e5cd: mov ecx, eax */
  ecx = eax;
/* 93e5cf: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 93e5d1: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 93e5d5: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 93e5d8: fld dword ptr [ebx + edi*4] */
  { double v = F32((uint32_t)(ebx + edi*4)); FPUSH(v); }
/* 93e5db: fchs  */
  ST0 = -ST0;
/* 93e5dd: fstp dword ptr [esp + eax*4 + 0x30] */
  WF32((uint32_t)(esp + eax*4 + 0x30u), ST0); FPOP();
/* 93e5e1: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 93e5e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93e5e6: mov dword ptr [esp + edi*4 + 0x34], edx */
  W32((uint32_t)(esp + edi*4 + 0x34u), edx);
/* 93e5ea: call 0x934970 */
  esp -= 4; W32(esp, 0x93e5efu); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93e5ef: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 93e5f3: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 93e5f7: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 93e5fb: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 93e5fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93e5fe: mov ecx, esi */
  ecx = esi;
/* 93e600: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 93e603: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 93e606: call 0x92e280 */
  esp -= 4; W32(esp, 0x93e60bu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93e60b: fsqrt  */
  ST0 = sqrt(ST0);
/* 93e60d: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 93e611: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93e617: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e619: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e61c: jnp 0x93e62a */
  if (!pf) goto L_93e62a;
L_93e61e: /* 93e61e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93e622: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93e623: mov ecx, esi */
  ecx = esi;
/* 93e625: call 0x934990 */
  esp -= 4; W32(esp, 0x93e62au); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93e62a: /* 93e62a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93e62e: fcomp qword ptr [0xa214f0] */
  fpu_com(ST0, F64((uint32_t)(0xa214f0u)));
  FPOP();
/* 93e634: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e636: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e639: jne 0x93e70d */
  if (!zf) goto L_93e70d;
L_93e63f: /* 93e63f: mov edx, dword ptr [esp + 0x118] */
  edx = R32((uint32_t)(esp + 0x118u));
/* 93e646: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 93e649: lea eax, [edx + 0x30] */
  eax = (uint32_t)(edx + 0x30u);
/* 93e64c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93e64e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93e651: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93e654: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e656: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 93e659: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93e65c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e65e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93e660: fabs  */
  ST0 = fabs(ST0);
/* 93e662: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93e666: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93e669: fabs  */
  ST0 = fabs(ST0);
/* 93e66b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 93e66e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 93e671: fabs  */
  ST0 = fabs(ST0);
/* 93e673: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e675: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e677: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 93e67a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e67c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 93e67e: fabs  */
  ST0 = fabs(ST0);
/* 93e680: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 93e684: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 93e687: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e689: fadd dword ptr [esp + 0x110] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x110u)));
/* 93e690: fsubr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) - ST0;
/* 93e694: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93e698: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 93e69c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e69e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e6a1: jne 0x93e70b */
  if (!zf) goto L_93e70b;
L_93e6a3: /* 93e6a3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93e6a9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 93e6ad: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 93e6b1: mov dword ptr [esp + 0x18], 0xbf800000 */
  W32((uint32_t)(esp + 0x18u), 0xbf800000u);
/* 93e6b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e6bb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e6be: je 0x93e6c8 */
  if (zf) goto L_93e6c8;
L_93e6c0: /* 93e6c0: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
L_93e6c8: /* 93e6c8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93e6cc: mov al, byte ptr [esp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* 93e6d0: fcomp dword ptr [esp + 0x108] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x108u)));
  FPOP();
/* 93e6d7: or al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93e6d9: mov byte ptr [esp + 0x13], al */
  W8((uint32_t)(esp + 0x13u), (eax & 0xffu));
/* 93e6dd: mov byte ptr [esp + 0x12], 1 */
  W8((uint32_t)(esp + 0x12u), 0x1u);
/* 93e6e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e6e4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e6e7: je 0x93e6ee */
  if (zf) goto L_93e6ee;
L_93e6e9: /* 93e6e9: mov byte ptr [esp + 0x12], 0 */
  W8((uint32_t)(esp + 0x12u), 0x0u);
L_93e6ee: /* 93e6ee: fld dword ptr [esp + 0x110] */
  { double v = F32((uint32_t)(esp + 0x110u)); FPUSH(v); }
/* 93e6f5: mov al, byte ptr [esp + 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 93e6f9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e6fb: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 93e6ff: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 93e703: jne 0x93e881 */
  if (!zf) goto L_93e881;
L_93e709: /* 93e709: jmp 0x93e70d */
  goto L_93e70d;
L_93e70b: /* 93e70b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93e70d: /* 93e70d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 93e711: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 93e712: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 93e715: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93e718: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 93e71c: jl 0x93e5ad */
  if ((sf != of)) goto L_93e5ad;
L_93e722: /* 93e722: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 93e729: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 93e72c: lea esi, [ecx + 0x30] */
  esi = (uint32_t)(ecx + 0x30u);
/* 93e72f: fchs  */
  ST0 = -ST0;
/* 93e731: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 93e735: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 93e738: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93e739: fchs  */
  ST0 = -ST0;
/* 93e73b: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93e73f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93e742: fchs  */
  ST0 = -ST0;
/* 93e744: fst dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0);
/* 93e748: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 93e74b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93e74d: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 93e74f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e751: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93e753: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 93e756: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e758: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93e75a: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 93e75c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93e75e: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 93e761: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93e765: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e767: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 93e76a: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 93e76e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 93e770: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 93e772: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 93e776: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 93e778: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 93e77c: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 93e780: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 93e784: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 93e788: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 93e78c: call 0x92e280 */
  esp -= 4; W32(esp, 0x93e791u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93e791: fsqrt  */
  ST0 = sqrt(ST0);
/* 93e793: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 93e797: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93e79d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e79f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93e7a2: jnp 0x93e7b2 */
  if (!pf) goto L_93e7b2;
L_93e7a4: /* 93e7a4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 93e7a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93e7a9: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93e7ad: call 0x934990 */
  esp -= 4; W32(esp, 0x93e7b2u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93e7b2: /* 93e7b2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93e7b6: fcomp qword ptr [0xa214f0] */
  fpu_com(ST0, F64((uint32_t)(0xa214f0u)));
  FPOP();
/* 93e7bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e7be: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e7c1: jne 0x93e881 */
  if (!zf) goto L_93e881;
L_93e7c7: /* 93e7c7: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93e7cb: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93e7ce: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93e7d2: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93e7d4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e7d6: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 93e7da: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93e7dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e7df: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93e7e1: fabs  */
  ST0 = fabs(ST0);
/* 93e7e3: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93e7e7: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93e7eb: fabs  */
  ST0 = fabs(ST0);
/* 93e7ed: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 93e7f0: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 93e7f4: fabs  */
  ST0 = fabs(ST0);
/* 93e7f6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e7f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93e7fa: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 93e7fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e7ff: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93e803: fabs  */
  ST0 = fabs(ST0);
/* 93e805: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 93e809: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 93e80c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93e80e: fadd dword ptr [esp + 0x110] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x110u)));
/* 93e815: fsubr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) - ST0;
/* 93e819: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93e81d: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 93e821: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e823: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e826: jne 0x93e87f */
  if (!zf) goto L_93e87f;
L_93e828: /* 93e828: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93e82e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 93e832: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 93e836: mov dword ptr [esp + 0x18], 0xbf800000 */
  W32((uint32_t)(esp + 0x18u), 0xbf800000u);
/* 93e83e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e840: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e843: je 0x93e84d */
  if (zf) goto L_93e84d;
L_93e845: /* 93e845: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
L_93e84d: /* 93e84d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93e851: mov byte ptr [esp + 0x13], 3 */
  W8((uint32_t)(esp + 0x13u), 0x3u);
/* 93e856: fcomp dword ptr [esp + 0x108] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x108u)));
  FPOP();
/* 93e85d: mov byte ptr [esp + 0x12], 1 */
  W8((uint32_t)(esp + 0x12u), 0x1u);
/* 93e862: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93e864: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e867: je 0x93e86e */
  if (zf) goto L_93e86e;
L_93e869: /* 93e869: mov byte ptr [esp + 0x12], 0 */
  W8((uint32_t)(esp + 0x12u), 0x0u);
L_93e86e: /* 93e86e: fld dword ptr [esp + 0x110] */
  { double v = F32((uint32_t)(esp + 0x110u)); FPUSH(v); }
/* 93e875: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 93e879: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 93e87d: jmp 0x93e881 */
  goto L_93e881;
L_93e87f: /* 93e87f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93e881: /* 93e881: xor edx, edx */
  edx = 0;
L_93e883: /* 93e883: mov cl, byte ptr [esp + 0x13] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
L_93e887: /* 93e887: mov eax, dword ptr [esp + 0xf8] */
  eax = R32((uint32_t)(esp + 0xf8u));
/* 93e88e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93e892: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
/* 93e899: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93e89b: mov eax, dword ptr [esp + 0x100] */
  eax = R32((uint32_t)(esp + 0x100u));
/* 93e8a2: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 93e8a6: mov edi, dword ptr [esp + 0x118] */
  edi = R32((uint32_t)(esp + 0x118u));
/* 93e8ad: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93e8af: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93e8b1: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 93e8b5: mov al, byte ptr [esp + 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 93e8b9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93e8bb: jne 0x93eac3 */
  if (!zf) goto L_93eac3;
L_93e8c1: /* 93e8c1: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 93e8c3: and al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93e8c5: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 93e8c7: jne 0x93e929 */
  if (!zf) goto L_93e929;
L_93e8c9: /* 93e8c9: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93e8cd: and cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93e8d0: movsx ecx, cl */
  ecx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 93e8d3: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 93e8d6: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 93e8d9: mov esi, dword ptr [esp + eax + 0x7c] */
  esi = R32((uint32_t)(esp + eax + 0x7cu));
/* 93e8dd: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 93e8e1: mov esi, dword ptr [esp + eax + 0x80] */
  esi = R32((uint32_t)(esp + eax + 0x80u));
/* 93e8e8: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 93e8ec: mov esi, dword ptr [esp + eax + 0x84] */
  esi = R32((uint32_t)(esp + eax + 0x84u));
/* 93e8f3: lea eax, [esp + eax + 0xa0] */
  eax = (uint32_t)(esp + eax + 0xa0u);
/* 93e8fa: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 93e8fe: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 93e900: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 93e904: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 93e907: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 93e90a: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 93e90e: mov eax, dword ptr [esp + 0xfc] */
  eax = R32((uint32_t)(esp + 0xfcu));
/* 93e915: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 93e919: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 93e91b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 93e91e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93e921: fstp dword ptr [eax + ecx*4] */
  WF32((uint32_t)(eax + ecx*4), ST0); FPOP();
/* 93e924: jmp 0x93ea91 */
  goto L_93ea91;
L_93e929: /* 93e929: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 93e92b: and al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93e92d: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 93e92f: jne 0x93e9e2 */
  if (!zf) goto L_93e9e2;
L_93e935: /* 93e935: and cl, 0xc */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93e938: cmp cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 93e93b: jne 0x93e97f */
  if (!zf) goto L_93e97f;
L_93e93d: /* 93e93d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93e941: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 93e943: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 93e945: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 93e948: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 93e94b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93e94f: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 93e952: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 93e956: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 93e959: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93e95d: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 93e960: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 93e964: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 93e967: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 93e96b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 93e96e: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 93e972: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 93e976: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 93e97a: jmp 0x93ea80 */
  goto L_93ea80;
L_93e97f: /* 93e97f: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 93e983: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 93e987: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 93e98b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 93e98f: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 93e993: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 93e997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93e998: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 93e99c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93e99d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93e99e: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 93e9a2: call 0x9349f0 */
  esp -= 4; W32(esp, 0x93e9a7u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 93e9a7: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93e9ab: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 93e9af: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 93e9b3: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 93e9b7: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 93e9bb: mov eax, dword ptr [esp + 0x108] */
  eax = R32((uint32_t)(esp + 0x108u));
/* 93e9c2: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 93e9c6: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93e9c8: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 93e9cc: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 93e9d0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 93e9d4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93e9d7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 93e9da: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93e9dd: jmp 0x93ea91 */
  goto L_93ea91;
L_93e9e2: /* 93e9e2: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 93e9e5: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 93e9e8: mov edx, dword ptr [esp + eax*4 + 0xd4] */
  edx = R32((uint32_t)(esp + eax*4 + 0xd4u));
/* 93e9ef: mov ecx, dword ptr [esp + eax*4 + 0xd0] */
  ecx = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 93e9f6: lea esi, [esp + eax*4 + 0xd0] */
  esi = (uint32_t)(esp + eax*4 + 0xd0u);
/* 93e9fd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 93ea00: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 93ea04: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 93ea08: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93ea0c: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 93ea10: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 93ea13: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 93ea17: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93ea1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ea1c: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 93ea1f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 93ea23: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93ea25: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 93ea29: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93ea2d: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 93ea30: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93ea34: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 93ea36: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93ea38: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93ea3c: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93ea40: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 93ea42: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93ea46: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 93ea49: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93ea4b: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 93ea4f: call 0x934970 */
  esp -= 4; W32(esp, 0x93ea54u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93ea54: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ea58: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 93ea5c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93ea5e: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 93ea62: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ea66: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 93ea6a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93ea6d: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 93ea71: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ea75: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 93ea79: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93ea7c: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
L_93ea80: /* 93ea80: mov eax, dword ptr [esp + 0xfc] */
  eax = R32((uint32_t)(esp + 0xfcu));
/* 93ea87: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 93ea89: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93ea8b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93ea8e: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_93ea91: /* 93ea91: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 93ea98: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
/* 93ea9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93eaa0: mov edx, dword ptr [esp + 0x118] */
  edx = R32((uint32_t)(esp + 0x118u));
/* 93eaa7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93eaa8: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 93eaac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93eaad: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 93eab4: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93eab8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93eab9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93eaba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93eabb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93eabc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93eabd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93eabe: call 0x93cfb0 */
  esp -= 4; W32(esp, 0x93eac3u); SPILL(); f_93cfb0(); if (g_unwind) return; RELOAD();
L_93eac3: /* 93eac3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 93eac5: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 93eac9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93eaca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93eacb: xor eax, eax */
  eax = 0;
/* 93eacd: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93eacf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93ead0: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 93ead3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93ead4: add esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93eada: ret  */
  esp += 4; SPILL(); return;
}

void f_93eae0(void) {
  LOAD_REGS();
L_93eae0: /* 93eae0: sub esp, 0x2a4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2a4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93eae6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93eae7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93eae8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93eae9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93eaea: mov edi, dword ptr [esp + 0x2b8] */
  edi = R32((uint32_t)(esp + 0x2b8u));
/* 93eaf1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93eaf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93eaf4: call 0x928730 */
  esp -= 4; W32(esp, 0x93eaf9u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93eaf9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 93eafc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93eafd: mov esi, eax */
  esi = eax;
/* 93eaff: call 0x928730 */
  esp -= 4; W32(esp, 0x93eb04u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93eb04: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 93eb06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93eb07: mov ebp, eax */
  ebp = eax;
/* 93eb09: call 0x928610 */
  esp -= 4; W32(esp, 0x93eb0eu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93eb0e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93eb12: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 93eb15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93eb16: call 0x928610 */
  esp -= 4; W32(esp, 0x93eb1bu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 93eb1b: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 93eb1f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 93eb21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93eb22: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 93eb26: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93eb2bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93eb2b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 93eb2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93eb2f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 93eb33: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93eb38u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93eb38: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 93eb3c: mov ebx, eax */
  ebx = eax;
/* 93eb3e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93eb40: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 93eb42: mov edi, dword ptr [esp + 0x2bc] */
  edi = R32((uint32_t)(esp + 0x2bcu));
/* 93eb49: xor eax, eax */
  eax = 0;
/* 93eb4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93eb4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 93eb50: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 93eb53: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 93eb56: call 0x92de80 */
  esp -= 4; W32(esp, 0x93eb5bu); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 93eb5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93eb5c: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 93eb60: call 0x92e600 */
  esp -= 4; W32(esp, 0x93eb65u); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93eb65: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93eb69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93eb6a: call 0x92e620 */
  esp -= 4; W32(esp, 0x93eb6fu); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93eb6f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93eb73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93eb74: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93eb75: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 93eb79: call 0x93bb50 */
  esp -= 4; W32(esp, 0x93eb7eu); SPILL(); f_93bb50(); if (g_unwind) return; RELOAD();
/* 93eb7e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 93eb82: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* 93eb86: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 93eb8a: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 93eb90: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93eb94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93eb95: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 93eb99: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 93eb9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93eb9e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 93eba2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93eba3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 93eba7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93eba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93eba9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ebaa: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 93ebae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ebaf: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93ebb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ebb4: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 93ebb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ebb9: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 93ebbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ebbe: call 0x93e230 */
  esp -= 4; W32(esp, 0x93ebc3u); SPILL(); f_93e230(); if (g_unwind) return; RELOAD();
/* 93ebc3: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93ebc6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93ebc8: jne 0x93ebd9 */
  if (!zf) goto L_93ebd9;
L_93ebca: /* 93ebca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93ebcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93ebcc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93ebcd: xor eax, eax */
  eax = 0;
/* 93ebcf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93ebd0: add esp, 0x2a4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2a4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93ebd6: ret 8 */
  esp += 12; SPILL(); return;
L_93ebd9: /* 93ebd9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ebdd: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 93ebe3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ebe5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ebe8: jp 0x93ebf1 */
  if (pf) goto L_93ebf1;
L_93ebea: /* 93ebea: mov edx, 1 */
  edx = 0x1u;
/* 93ebef: jmp 0x93ebf3 */
  goto L_93ebf3;
L_93ebf1: /* 93ebf1: xor edx, edx */
  edx = 0;
L_93ebf3: /* 93ebf3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ebf7: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 93ebfd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ebff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ec02: jp 0x93ec0b */
  if (pf) goto L_93ec0b;
L_93ec04: /* 93ec04: mov ecx, 1 */
  ecx = 0x1u;
/* 93ec09: jmp 0x93ec0d */
  goto L_93ec0d;
L_93ec0b: /* 93ec0b: xor ecx, ecx */
  ecx = 0;
L_93ec0d: /* 93ec0d: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93ec11: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 93ec17: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ec19: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ec1c: jp 0x93ec25 */
  if (pf) goto L_93ec25;
L_93ec1e: /* 93ec1e: mov eax, 1 */
  eax = 0x1u;
/* 93ec23: jmp 0x93ec27 */
  goto L_93ec27;
L_93ec25: /* 93ec25: xor eax, eax */
  eax = 0;
L_93ec27: /* 93ec27: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 93ec2b: lea ebp, [eax + ecx] */
  ebp = (uint32_t)(eax + ecx);
/* 93ec2e: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 93ec32: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 93ec34: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93ec38: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 93ec3c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ec3e: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93ec42: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 93ec46: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ec48: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93ec4a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 93ec4c: fcom dword ptr [0xa20e1c] */
  fpu_com(ST0, F32((uint32_t)(0xa20e1cu)));
/* 93ec52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ec54: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93ec57: jne 0x93ec65 */
  if (!zf) goto L_93ec65;
L_93ec59: /* 93ec59: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93ec5b: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 93ec63: jmp 0x93ec82 */
  goto L_93ec82;
L_93ec65: /* 93ec65: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 93ec6b: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 93ec73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ec75: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ec78: jnp 0x93ec82 */
  if (!pf) goto L_93ec82;
L_93ec7a: /* 93ec7a: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_93ec82: /* 93ec82: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93ec86: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 93ec8a: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 93ec8d: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* 93ec91: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93ec93: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ec97: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93ec9a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ec9c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93eca0: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93eca2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93eca4: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 93eca7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ecab: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93ecae: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93ecb2: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 93ecb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ecb7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ecbb: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93ecbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ecc0: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 93ecc3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ecc7: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93ecca: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93ecce: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93ecd1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ecd3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ecd7: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93ecda: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ecdc: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 93ecdf: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 93ece2: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 93ece9: je 0x93edc1 */
  if (zf) goto L_93edc1;
L_93ecef: /* 93ecef: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 93ecf3: lea edx, [ebx + 0x14] */
  edx = (uint32_t)(ebx + 0x14u);
L_93ecf6: /* 93ecf6: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 93ecf9: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93ecfc: jge 0x93edc1 */
  if ((sf == of)) goto L_93edc1;
L_93ed02: /* 93ed02: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93ed06: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93ed09: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93ed0d: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 93ed10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ed12: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ed16: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93ed18: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ed1a: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 93ed1e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93ed22: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 93ed28: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93ed2a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93ed2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ed2e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ed31: jp 0x93edaf */
  if (pf) goto L_93edaf;
L_93ed33: /* 93ed33: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 93ed35: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 93ed39: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 93ed3c: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 93ed3f: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 93ed42: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 93ed44: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93ed46: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 93ed49: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ed4b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93ed4e: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 93ed51: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ed53: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 93ed56: fstp dword ptr [ebx - 0x28] */
  WF32((uint32_t)(ebx + 0xffffffd8u), ST0); FPOP();
/* 93ed59: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93ed5c: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 93ed5f: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 93ed62: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93ed64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ed66: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 93ed69: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 93ed6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ed6e: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93ed71: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 93ed74: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93ed77: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93ed7a: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 93ed7d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93ed7f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ed81: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93ed84: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 93ed87: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ed89: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93ed8c: mov word ptr [edx + 8], ax */
  W16((uint32_t)(edx + 0x8u), (eax & 0xffffu));
/* 93ed90: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 93ed93: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 93ed96: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 93ed99: mov dword ptr [edx - 8], eax */
  W32((uint32_t)(edx + 0xfffffff8u), eax);
/* 93ed9c: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 93ed9f: mov dword ptr [edx - 4], eax */
  W32((uint32_t)(edx + 0xfffffffcu), eax);
/* 93eda2: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 93eda5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 93eda7: inc dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0xcu), r);
  }
/* 93edaa: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 93edad: jmp 0x93edb1 */
  goto L_93edb1;
L_93edaf: /* 93edaf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93edb1: /* 93edb1: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93edb4: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 93edb7: cmp eax, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93edbb: jne 0x93ecf6 */
  if (!zf) goto L_93ecf6;
L_93edc1: /* 93edc1: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 93edc4: xor eax, eax */
  eax = 0;
/* 93edc6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 93edc8: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 93edcb: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 93edce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93edcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93edd0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93edd1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93edd2: add esp, 0x2a4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2a4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93edd8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_93ede0(void) {
  LOAD_REGS();
L_93ede0: /* 93ede0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ede3: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93ede7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93ede8: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 93edec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93eded: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93edee: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 93edf2: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 93edf4: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 93edf7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 93edf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93edfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93edfb: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93ee00u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93ee00: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 93ee03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ee04: mov ebp, eax */
  ebp = eax;
/* 93ee06: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93ee0bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93ee0b: mov edi, eax */
  edi = eax;
/* 93ee0d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93ee0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ee10: call 0x928760 */
  esp -= 4; W32(esp, 0x93ee15u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 93ee15: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 93ee18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ee19: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93ee1d: call 0x928760 */
  esp -= 4; W32(esp, 0x93ee22u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 93ee22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93ee23: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 93ee27: call 0x92e600 */
  esp -= 4; W32(esp, 0x93ee2cu); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 93ee2c: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93ee30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93ee31: call 0x92e620 */
  esp -= 4; W32(esp, 0x93ee36u); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93ee36: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93ee3a: fld qword ptr [0xa14fa0] */
  { double v = F64((uint32_t)(0xa14fa0u)); FPUSH(v); }
/* 93ee40: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 93ee42: fsqrt  */
  ST0 = sqrt(ST0);
/* 93ee44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ee45: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 93ee4b: fdivr dword ptr [0xa0b130] */
  ST0 = (F32((uint32_t)(0xa0b130u))) / ST0;
/* 93ee51: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 93ee55: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 93ee59: call 0x928730 */
  esp -= 4; W32(esp, 0x93ee5eu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93ee5e: mov edi, eax */
  edi = eax;
/* 93ee60: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 93ee63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ee64: call 0x928730 */
  esp -= 4; W32(esp, 0x93ee69u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93ee69: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93ee6a: mov esi, eax */
  esi = eax;
/* 93ee6c: call 0x92de80 */
  esp -= 4; W32(esp, 0x93ee71u); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 93ee71: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 93ee75: mov edx, ecx */
  edx = ecx;
/* 93ee77: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 93ee7b: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 93ee7f: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 93ee83: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 93ee87: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 93ee8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ee8c: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 93ee90: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 93ee94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ee95: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93ee99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ee9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ee9b: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 93ee9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93eea0: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 93eea4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93eea5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93eea6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93eea7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93eea8: call 0x93fe10 */
  esp -= 4; W32(esp, 0x93eeadu); SPILL(); f_93fe10(); if (g_unwind) return; RELOAD();
/* 93eead: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93eeb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93eeb2: je 0x93eec5 */
  if (zf) goto L_93eec5;
L_93eeb4: /* 93eeb4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 93eeb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93eeb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93eeba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93eebb: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 93eebe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93eebf: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93eec2: ret 0xc */
  esp += 16; SPILL(); return;
L_93eec5: /* 93eec5: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 93eec9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93eeca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93eecb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93eecc: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 93eecf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93eed0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93eed3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_93eee0(void) {
  LOAD_REGS();
L_93eee0: /* 93eee0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93eee3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93eee7: xor eax, eax */
  eax = 0;
/* 93eee9: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 93eeed: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 93eef1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93eef5: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 93eef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93eefa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 93eefc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 93eefe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93eeff: mov dword ptr [esp + 0x18], 0x93eae0 */
  W32((uint32_t)(esp + 0x18u), 0x93eae0u);
/* 93ef07: mov dword ptr [esp + 0x1c], 0x93ede0 */
  W32((uint32_t)(esp + 0x1cu), 0x93ede0u);
/* 93ef0f: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 93ef17: call 0x929df0 */
  esp -= 4; W32(esp, 0x93ef1cu); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 93ef1c: mov eax, 1 */
  eax = 0x1u;
/* 93ef21: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93ef24: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93ef30(void) {
  LOAD_REGS();
L_93ef30: /* 93ef30: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ef33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93ef34: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93ef35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93ef36: mov esi, dword ptr [esp + 0x6c] */
  esi = R32((uint32_t)(esp + 0x6cu));
/* 93ef3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93ef3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93ef3c: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93ef41u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93ef41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93ef42: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 93ef46: call 0x928730 */
  esp -= 4; W32(esp, 0x93ef4bu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93ef4b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 93ef4f: mov esi, eax */
  esi = eax;
/* 93ef51: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* 93ef54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93ef55: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 93ef59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ef5a: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93ef5fu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93ef5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93ef60: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93ef64: call 0x92e280 */
  esp -= 4; W32(esp, 0x93ef69u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93ef69: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93ef6d: lea ebx, [esi + 0x10] */
  ebx = (uint32_t)(esi + 0x10u);
/* 93ef70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93ef71: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93ef75: call 0x92e280 */
  esp -= 4; W32(esp, 0x93ef7au); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93ef7a: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 93ef7e: lea ebp, [esi + 0x20] */
  ebp = (uint32_t)(esi + 0x20u);
/* 93ef81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93ef82: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93ef86: call 0x92e280 */
  esp -= 4; W32(esp, 0x93ef8bu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93ef8b: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93ef8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93ef90: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93ef94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ef95: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 93ef9c: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93efa1u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93efa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93efa2: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93efa6: call 0x92e280 */
  esp -= 4; W32(esp, 0x93efabu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93efab: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 93efaf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93efb0: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93efb4: call 0x92e280 */
  esp -= 4; W32(esp, 0x93efb9u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93efb9: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93efbd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93efbe: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 93efc2: call 0x92e280 */
  esp -= 4; W32(esp, 0x93efc7u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93efc7: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 93efcb: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 93efcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93efd0: call 0x92de80 */
  esp -= 4; W32(esp, 0x93efd5u); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 93efd5: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 93efd9: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 93efdb: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 93efdf: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 93efe3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 93efe5: mov dword ptr [esp + 0x70], 3 */
  W32((uint32_t)(esp + 0x70u), 0x3u);
/* 93efed: jmp 0x93eff3 */
  goto L_93eff3;
L_93efef: /* 93efef: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
L_93eff3: /* 93eff3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93eff5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 93eff8: fchs  */
  ST0 = -ST0;
/* 93effa: fstp dword ptr [edx + eax - 4] */
  WF32((uint32_t)(edx + eax + 0xfffffffcu), ST0); FPOP();
/* 93effe: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 93f001: mov dword ptr [ecx + eax - 4], edx */
  W32((uint32_t)(ecx + eax + 0xfffffffcu), edx);
/* 93f005: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 93f009: jne 0x93efef */
  if (!zf) goto L_93efef;
L_93f00b: /* 93f00b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93f00f: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 93f013: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93f017: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 93f01b: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 93f01f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93f023: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 93f027: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 93f02b: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 93f02f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93f031: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93f035: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 93f039: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93f03b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93f03d: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93f041: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 93f045: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f047: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93f049: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93f04b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f04d: fsqrt  */
  ST0 = sqrt(ST0);
/* 93f04f: fst dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0);
/* 93f053: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 93f059: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f05b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f05e: jp 0x93f070 */
  if (pf) goto L_93f070;
L_93f060: /* 93f060: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f062: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93f064: /* 93f064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f065: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f066: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f067: xor eax, eax */
  eax = 0;
/* 93f069: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f06a: add esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f06d: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f070: /* 93f070: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93f076: fcomp dword ptr [esp + 0x70] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x70u)));
  FPOP();
/* 93f07a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f07c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f07f: jnp 0x93f08d */
  if (!pf) goto L_93f08d;
L_93f081: /* 93f081: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93f087: fdiv dword ptr [esp + 0x70] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x70u)));
/* 93f08b: jmp 0x93f093 */
  goto L_93f093;
L_93f08d: /* 93f08d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93f093: /* 93f093: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 93f095: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 93f099: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 93f09b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93f09c: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 93f0a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93f0a1: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 93f0a5: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 93f0a9: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93f0ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93f0ae: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 93f0b0: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 93f0b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93f0b5: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 93f0b9: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93f0bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93f0be: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 93f0c2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93f0c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93f0c5: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 93f0c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93f0ca: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 93f0ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f0d0: call 0x93f1b0 */
  esp -= 4; W32(esp, 0x93f0d5u); SPILL(); f_93f1b0(); if (g_unwind) return; RELOAD();
/* 93f0d5: mov ecx, eax */
  ecx = eax;
/* 93f0d7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f0da: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93f0dc: je 0x93f064 */
  if (zf) goto L_93f064;
L_93f0de: /* 93f0de: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93f0e2: fcomp dword ptr [esp + 0x70] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x70u)));
  FPOP();
/* 93f0e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f0e8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f0eb: je 0x93f064 */
  if (zf) goto L_93f064;
L_93f0f1: /* 93f0f1: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93f0f4: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f0f8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93f0fa: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 93f0fe: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93f102: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 93f105: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f107: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93f10b: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 93f10d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f10f: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93f111: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93f114: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93f118: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 93f11b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93f11f: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93f122: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f124: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f128: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93f12b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f12d: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93f130: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 93f133: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93f137: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93f13a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93f13e: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93f141: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f143: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f147: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93f14a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f14c: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93f14f: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 93f152: jne 0x93f190 */
  if (!zf) goto L_93f190;
L_93f154: /* 93f154: movzx ecx, word ptr [esp + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(esp + 0x10u)));
/* 93f159: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 93f15c: mov edx, dword ptr [ecx + esi] */
  edx = R32((uint32_t)(ecx + esi));
/* 93f15f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93f161: cmp word ptr [esp + 0x12], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x12u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 93f167: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 93f16a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 93f16d: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 93f170: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 93f173: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 93f176: je 0x93f190 */
  if (zf) goto L_93f190;
L_93f178: /* 93f178: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 93f17b: fchs  */
  ST0 = -ST0;
/* 93f17d: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 93f180: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 93f183: fchs  */
  ST0 = -ST0;
/* 93f185: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 93f188: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 93f18b: fchs  */
  ST0 = -ST0;
/* 93f18d: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
L_93f190: /* 93f190: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 93f194: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f195: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f196: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f197: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 93f19a: mov eax, 1 */
  eax = 0x1u;
/* 93f19f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f1a0: add esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f1a3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_93f1b0(void) {
  LOAD_REGS();
L_93f1b0: /* 93f1b0: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93f1b3: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 93f1b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93f1b8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93f1b9: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 93f1bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f1be: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 93f1c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93f1c3: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 93f1c7: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 93f1c9: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 93f1cb: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 93f1cd: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 93f1d1: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 93f1d3: mov ecx, esi */
  ecx = esi;
/* 93f1d5: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 93f1d9: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 93f1dd: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 93f1e1: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 93f1e3: mov dword ptr [esp + 0x3c], 3 */
  W32((uint32_t)(esp + 0x3cu), 0x3u);
/* 93f1eb: nop  */
/* 93f1ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93f1f0: /* 93f1f0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93f1f2: fcomp dword ptr [ecx + ebp] */
  fpu_com(ST0, F32((uint32_t)(ecx + ebp)));
  FPOP();
/* 93f1f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f1f7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f1fa: jp 0x93f20d */
  if (pf) goto L_93f20d;
L_93f1fc: /* 93f1fc: mov eax, dword ptr [ecx + ebp] */
  eax = R32((uint32_t)(ecx + ebp));
/* 93f1ff: mov dword ptr [edx + ecx], 1 */
  W32((uint32_t)(edx + ecx), 0x1u);
/* 93f206: mov dword ptr [edi + ecx], eax */
  W32((uint32_t)(edi + ecx), eax);
/* 93f209: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93f20b: jmp 0x93f239 */
  goto L_93f239;
L_93f20d: /* 93f20d: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 93f211: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93f213: fcomp dword ptr [eax + ecx] */
  fpu_com(ST0, F32((uint32_t)(eax + ecx)));
  FPOP();
/* 93f216: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f218: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f21b: jne 0x93f232 */
  if (!zf) goto L_93f232;
L_93f21d: /* 93f21d: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 93f221: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 93f224: mov dword ptr [edx + ecx], 0 */
  W32((uint32_t)(edx + ecx), 0x0u);
/* 93f22b: mov dword ptr [edi + ecx], eax */
  W32((uint32_t)(edi + ecx), eax);
/* 93f22e: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93f230: jmp 0x93f239 */
  goto L_93f239;
L_93f232: /* 93f232: mov dword ptr [edx + ecx], 2 */
  W32((uint32_t)(edx + ecx), 0x2u);
L_93f239: /* 93f239: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 93f23d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93f240: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 93f241: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 93f245: jne 0x93f1f0 */
  if (!zf) goto L_93f1f0;
L_93f247: /* 93f247: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f249: je 0x93f278 */
  if (zf) goto L_93f278;
L_93f24b: /* 93f24b: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 93f24f: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 93f251: mov ecx, 3 */
  ecx = 0x3u;
L_93f256: /* 93f256: mov edx, dword ptr [esi + eax] */
  edx = R32((uint32_t)(esi + eax));
/* 93f259: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 93f25b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 93f25e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 93f25f: jne 0x93f256 */
  if (!zf) goto L_93f256;
L_93f261: /* 93f261: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 93f265: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f266: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f267: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f268: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 93f26e: mov eax, 2 */
  eax = 0x2u;
/* 93f273: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f274: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f277: ret  */
  esp += 4; SPILL(); return;
L_93f278: /* 93f278: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 93f27c: xor ecx, ecx */
  ecx = 0;
/* 93f27e: mov edx, 0xbf800000 */
  edx = 0xbf800000u;
L_93f283: /* 93f283: cmp dword ptr [esp + ecx + 0x20], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx + 0x20u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93f288: je 0x93f2aa */
  if (zf) goto L_93f2aa;
L_93f28a: /* 93f28a: fld dword ptr [ecx + ebx] */
  { double v = F32((uint32_t)(ecx + ebx)); FPUSH(v); }
/* 93f28d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93f293: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f295: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f298: jnp 0x93f2aa */
  if (!pf) goto L_93f2aa;
L_93f29a: /* 93f29a: fld dword ptr [esp + ecx + 0x2c] */
  { double v = F32((uint32_t)(esp + ecx + 0x2cu)); FPUSH(v); }
/* 93f29e: fsub dword ptr [ecx + esi] */
  ST0 = ST0 - (F32((uint32_t)(ecx + esi)));
/* 93f2a1: fdiv dword ptr [ecx + ebx] */
  ST0 = ST0 / (F32((uint32_t)(ecx + ebx)));
/* 93f2a4: fstp dword ptr [esp + ecx + 0x14] */
  WF32((uint32_t)(esp + ecx + 0x14u), ST0); FPOP();
/* 93f2a8: jmp 0x93f2ae */
  goto L_93f2ae;
L_93f2aa: /* 93f2aa: mov dword ptr [esp + ecx + 0x14], edx */
  W32((uint32_t)(esp + ecx + 0x14u), edx);
L_93f2ae: /* 93f2ae: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93f2b1: cmp ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93f2b4: jl 0x93f283 */
  if ((sf != of)) goto L_93f283;
L_93f2b6: /* 93f2b6: xor ebp, ebp */
  ebp = 0;
/* 93f2b8: mov ecx, 1 */
  ecx = 0x1u;
/* 93f2bd: xor edi, edi */
  edi = 0;
/* 93f2bf: nop  */
L_93f2c0: /* 93f2c0: fld dword ptr [esp + edi + 0x14] */
  { double v = F32((uint32_t)(esp + edi + 0x14u)); FPUSH(v); }
/* 93f2c4: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 93f2cb: fcomp dword ptr [esp + edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + edx + 0x14u)));
  FPOP();
/* 93f2cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f2d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f2d4: jp 0x93f2da */
  if (pf) goto L_93f2da;
L_93f2d6: /* 93f2d6: mov ebp, ecx */
  ebp = ecx;
/* 93f2d8: mov edi, edx */
  edi = edx;
L_93f2da: /* 93f2da: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 93f2db: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93f2de: jl 0x93f2c0 */
  if ((sf != of)) goto L_93f2c0;
L_93f2e0: /* 93f2e0: fld dword ptr [esp + ebp*4 + 0x14] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x14u)); FPUSH(v); }
/* 93f2e4: lea eax, [esp + ebp*4 + 0x14] */
  eax = (uint32_t)(esp + ebp*4 + 0x14u);
/* 93f2e8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93f2ee: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 93f2f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f2f4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f2f7: jp 0x93f303 */
  if (pf) goto L_93f303;
L_93f2f9: /* 93f2f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f2fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f2fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f2fc: xor eax, eax */
  eax = 0;
/* 93f2fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f2ff: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f302: ret  */
  esp += 4; SPILL(); return;
L_93f303: /* 93f303: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 93f307: xor edi, edi */
  edi = 0;
/* 93f309: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 93f30b: mov ecx, esi */
  ecx = esi;
/* 93f30d: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 93f30f: nop  */
L_93f310: /* 93f310: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93f312: je 0x93f34c */
  if (zf) goto L_93f34c;
L_93f314: /* 93f314: fld dword ptr [ebx + ecx] */
  { double v = F32((uint32_t)(ebx + ecx)); FPUSH(v); }
/* 93f317: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 93f31b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93f31d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 93f321: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 93f323: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 93f327: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* 93f32a: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93f32e: fcomp dword ptr [ecx + eax] */
  fpu_com(ST0, F32((uint32_t)(ecx + eax)));
  FPOP();
/* 93f331: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f333: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f336: jnp 0x93f2f9 */
  if (!pf) goto L_93f2f9;
L_93f338: /* 93f338: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 93f33c: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93f340: fcomp dword ptr [ecx + eax] */
  fpu_com(ST0, F32((uint32_t)(ecx + eax)));
  FPOP();
/* 93f343: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f345: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f348: je 0x93f2f9 */
  if (zf) goto L_93f2f9;
L_93f34a: /* 93f34a: jmp 0x93f356 */
  goto L_93f356;
L_93f34c: /* 93f34c: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 93f350: mov eax, dword ptr [ecx + eax] */
  eax = R32((uint32_t)(ecx + eax));
/* 93f353: mov dword ptr [edx + ecx], eax */
  W32((uint32_t)(edx + ecx), eax);
L_93f356: /* 93f356: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 93f357: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93f35a: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93f35d: jl 0x93f310 */
  if ((sf != of)) goto L_93f310;
L_93f35f: /* 93f35f: mov edx, dword ptr [esp + ebp*4 + 0x20] */
  edx = R32((uint32_t)(esp + ebp*4 + 0x20u));
/* 93f363: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 93f367: xor ecx, ecx */
  ecx = 0;
/* 93f369: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93f36c: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 93f370: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 93f373: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f374: mov word ptr [eax], bp */
  W16((uint32_t)(eax), (ebp & 0xffffu));
/* 93f377: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f378: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f379: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f37a: mov word ptr [eax + 2], cx */
  W16((uint32_t)(eax + 0x2u), (ecx & 0xffffu));
/* 93f37e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 93f380: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 93f384: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 93f386: mov eax, 1 */
  eax = 0x1u;
/* 93f38b: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f38e: ret  */
  esp += 4; SPILL(); return;
}

void f_93f390(void) {
  LOAD_REGS();
L_93f390: /* 93f390: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93f393: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f394: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 93f398: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93f399: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f39a: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93f39fu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93f39f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f3a0: mov edi, eax */
  edi = eax;
/* 93f3a2: call 0x928730 */
  esp -= 4; W32(esp, 0x93f3a7u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93f3a7: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 93f3aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93f3ab: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 93f3af: call 0x933e40 */
  esp -= 4; W32(esp, 0x93f3b4u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93f3b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93f3b5: call 0x92d570 */
  esp -= 4; W32(esp, 0x93f3bau); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 93f3ba: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 93f3be: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 93f3c2: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 93f3c6: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 93f3ca: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 93f3ce: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93f3d2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93f3d4: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 93f3d6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93f3da: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 93f3dd: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 93f3e0: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93f3e4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93f3e7: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 93f3eb: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 93f3ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93f3ef: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93f3f3: call 0x92e280 */
  esp -= 4; W32(esp, 0x93f3f8u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93f3f8: fsqrt  */
  ST0 = sqrt(ST0);
/* 93f3fa: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 93f3fe: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 93f404: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f406: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f409: jp 0x93f415 */
  if (pf) goto L_93f415;
L_93f40b: /* 93f40b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f40c: xor eax, eax */
  eax = 0;
/* 93f40e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f40f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f412: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f415: /* 93f415: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93f41b: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 93f41f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f421: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f424: jnp 0x93f432 */
  if (!pf) goto L_93f432;
L_93f426: /* 93f426: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93f42c: fdiv dword ptr [esp + 0x3c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x3cu)));
/* 93f430: jmp 0x93f438 */
  goto L_93f438;
L_93f432: /* 93f432: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93f438: /* 93f438: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93f43c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93f43e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93f442: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93f446: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93f448: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93f44c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f450: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93f452: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93f456: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f458: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93f45c: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 93f45e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93f462: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 93f465: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93f469: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 93f46c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93f46e: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 93f472: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93f474: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 93f478: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f47a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93f47c: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 93f480: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f482: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93f486: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93f488: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93f48a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93f48c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93f48e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f490: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 93f492: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 93f494: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f496: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93f49a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f49c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f49e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f4a0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93f4a4: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 93f4a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f4aa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f4ad: jp 0x93f4d8 */
  if (pf) goto L_93f4d8;
L_93f4af: /* 93f4af: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 93f4b3: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 93f4ba: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 93f4bc: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 93f4bf: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 93f4c2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93f4c5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 93f4c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f4c9: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 93f4cc: mov eax, 1 */
  eax = 0x1u;
/* 93f4d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f4d2: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f4d5: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f4d8: /* 93f4d8: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93f4dc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93f4e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f4e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f4e7: jp 0x93f502 */
  if (pf) goto L_93f502;
L_93f4e9: /* 93f4e9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93f4ed: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 93f4f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f4f3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f4f6: jne 0x93f502 */
  if (!zf) goto L_93f502;
L_93f4f8: /* 93f4f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f4f9: xor eax, eax */
  eax = 0;
/* 93f4fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f4fc: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f4ff: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f502: /* 93f502: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93f506: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 93f50a: fsubr dword ptr [esp + 0xc] */
  ST0 = (F32((uint32_t)(esp + 0xcu))) - ST0;
/* 93f50e: fcom dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
/* 93f512: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f514: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f517: jne 0x93f525 */
  if (!zf) goto L_93f525;
L_93f519: /* 93f519: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f51a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f51c: xor eax, eax */
  eax = 0;
/* 93f51e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f51f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f522: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f525: /* 93f525: fsubr dword ptr [esp + 0x38] */
  ST0 = (F32((uint32_t)(esp + 0x38u))) - ST0;
/* 93f529: fsqrt  */
  ST0 = sqrt(ST0);
/* 93f52b: fsubr dword ptr [esp + 0x40] */
  ST0 = (F32((uint32_t)(esp + 0x40u))) - ST0;
/* 93f52f: fcom dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
/* 93f533: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f535: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f538: jne 0x93f546 */
  if (!zf) goto L_93f546;
L_93f53a: /* 93f53a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f53b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f53d: xor eax, eax */
  eax = 0;
/* 93f53f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f540: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f543: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f546: /* 93f546: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93f54a: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 93f54e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93f550: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93f554: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 93f556: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 93f55a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f55e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 93f560: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93f564: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 93f566: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93f56a: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 93f56d: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93f571: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 93f574: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93f578: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 93f57c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93f57e: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 93f581: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 93f584: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 93f587: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93f58d: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 93f591: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f593: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f596: jnp 0x93f5a4 */
  if (!pf) goto L_93f5a4;
L_93f598: /* 93f598: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 93f59e: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 93f5a2: jmp 0x93f5aa */
  goto L_93f5aa;
L_93f5a4: /* 93f5a4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93f5aa: /* 93f5aa: xor eax, eax */
  eax = 0;
/* 93f5ac: lea ecx, [edx + 0x10] */
  ecx = (uint32_t)(edx + 0x10u);
/* 93f5af: nop  */
L_93f5b0: /* 93f5b0: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 93f5b3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 93f5b4: fsub dword ptr [esp + eax*4 + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + eax*4 + 0x18u)));
/* 93f5b8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 93f5bb: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 93f5be: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93f5c0: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 93f5c3: jl 0x93f5b0 */
  if ((sf != of)) goto L_93f5b0;
L_93f5c5: /* 93f5c5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f5c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f5c8: fstp dword ptr [edx + 0x1c] */
  WF32((uint32_t)(edx + 0x1cu), ST0); FPOP();
/* 93f5cb: mov eax, 1 */
  eax = 0x1u;
/* 93f5d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f5d1: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f5d4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_93f5e0(void) {
  LOAD_REGS();
L_93f5e0: /* 93f5e0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93f5e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93f5e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93f5e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f5e6: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 93f5ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93f5eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f5ec: call 0x9287f0 */
  esp -= 4; W32(esp, 0x93f5f1u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 93f5f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f5f2: call 0x928730 */
  esp -= 4; W32(esp, 0x93f5f7u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 93f5f7: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 93f5fb: mov esi, eax */
  esi = eax;
/* 93f5fd: lea ebp, [esi + 0x30] */
  ebp = (uint32_t)(esi + 0x30u);
/* 93f600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93f601: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 93f605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93f606: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93f60bu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93f60b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f60c: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 93f610: call 0x92e280 */
  esp -= 4; W32(esp, 0x93f615u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93f615: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93f619: lea ebx, [esi + 0x10] */
  ebx = (uint32_t)(esi + 0x10u);
/* 93f61c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93f61d: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 93f621: call 0x92e280 */
  esp -= 4; W32(esp, 0x93f626u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93f626: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93f62a: lea edi, [esi + 0x20] */
  edi = (uint32_t)(esi + 0x20u);
/* 93f62d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93f62e: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 93f632: call 0x92e280 */
  esp -= 4; W32(esp, 0x93f637u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93f637: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93f63b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93f63c: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 93f640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93f641: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 93f645: call 0x933ec0 */
  esp -= 4; W32(esp, 0x93f64au); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 93f64a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f64b: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 93f64f: call 0x92e280 */
  esp -= 4; W32(esp, 0x93f654u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93f654: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93f658: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93f659: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 93f65d: call 0x92e280 */
  esp -= 4; W32(esp, 0x93f662u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93f662: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 93f666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93f667: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 93f66b: call 0x92e280 */
  esp -= 4; W32(esp, 0x93f670u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93f670: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93f674: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f678: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93f67e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f680: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f683: jne 0x93f6a2 */
  if (!zf) goto L_93f6a2;
L_93f685: /* 93f685: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93f689: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93f68f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f691: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f694: jne 0x93f6a2 */
  if (!zf) goto L_93f6a2;
L_93f696: /* 93f696: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f697: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f698: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f699: xor eax, eax */
  eax = 0;
/* 93f69b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f69c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f69f: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f6a2: /* 93f6a2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f6a6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93f6ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f6ae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f6b1: jp 0x93f6f3 */
  if (pf) goto L_93f6f3;
L_93f6b3: /* 93f6b3: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 93f6b7: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 93f6bb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 93f6bd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 93f6c0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 93f6c3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 93f6c6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 93f6c9: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 93f6cc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 93f6ce: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 93f6d1: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 93f6d4: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 93f6d7: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 93f6da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f6db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f6dc: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 93f6df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f6e0: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 93f6e7: mov eax, 1 */
  eax = 0x1u;
/* 93f6ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f6ed: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f6f0: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f6f3: /* 93f6f3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93f6f7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93f6fa: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 93f6fe: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 93f702: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93f706: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93f70a: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 93f70e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93f712: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93f716: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 93f71a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93f71d: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93f722u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93f722: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93f726: fabs  */
  ST0 = fabs(ST0);
/* 93f728: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 93f72e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f730: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f733: jp 0x93f752 */
  if (pf) goto L_93f752;
L_93f735: /* 93f735: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f739: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93f73f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f741: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f744: jne 0x93f752 */
  if (!zf) goto L_93f752;
L_93f746: /* 93f746: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f747: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f748: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f749: xor eax, eax */
  eax = 0;
/* 93f74b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f74c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f74f: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f752: /* 93f752: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f756: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 93f75a: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 93f75e: fchs  */
  ST0 = -ST0;
/* 93f760: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 93f764: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93f768: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 93f76c: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 93f770: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93f774: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 93f778: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 93f77c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93f77e: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93f781: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93f783: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93f785: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f787: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 93f789: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 93f78f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f791: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 93f794: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 93f797: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93f799: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93f79c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93f79e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93f7a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f7a3: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 93f7a6: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 93f7ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f7ae: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93f7b1: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 93f7b4: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93f7b7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93f7b9: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93f7bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f7be: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 93f7c1: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 93f7c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93f7c9: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93f7cc: fstp dword ptr [ebx + 0xc] */
  WF32((uint32_t)(ebx + 0xcu), ST0); FPOP();
/* 93f7cf: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93f7d1: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 93f7d4: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 93f7d7: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 93f7da: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 93f7dd: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 93f7e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93f7e2: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 93f7e6: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 93f7e9: call 0x92e280 */
  esp -= 4; W32(esp, 0x93f7eeu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93f7ee: fsqrt  */
  ST0 = sqrt(ST0);
/* 93f7f0: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 93f7f4: fst dword ptr [ebx + 0x1c] */
  WF32((uint32_t)(ebx + 0x1cu), ST0);
/* 93f7f7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93f7fb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93f801: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f803: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f806: jp 0x93f81c */
  if (pf) goto L_93f81c;
L_93f808: /* 93f808: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f809: fchs  */
  ST0 = -ST0;
/* 93f80b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f80c: fstp dword ptr [ebx + 0x1c] */
  WF32((uint32_t)(ebx + 0x1cu), ST0); FPOP();
/* 93f80f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f810: mov eax, 1 */
  eax = 0x1u;
/* 93f815: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f816: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f819: ret 0x10 */
  esp += 20; SPILL(); return;
L_93f81c: /* 93f81c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93f81d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93f81f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f820: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93f821: mov eax, 1 */
  eax = 0x1u;
/* 93f826: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93f827: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f82a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_93f830(void) {
  LOAD_REGS();
L_93f830: /* 93f830: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 93f834: push 0x93ef30 */
  { uint32_t v = 0x93ef30u; esp -= 4; W32(esp, v); }
/* 93f839: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 93f83b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93f83c: call 0x929ec0 */
  esp -= 4; W32(esp, 0x93f841u); SPILL(); f_929ec0(); if (g_unwind) return; RELOAD();
/* 93f841: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93f850(void) {
  LOAD_REGS();
L_93f850: /* 93f850: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 93f854: push 0x93f390 */
  { uint32_t v = 0x93f390u; esp -= 4; W32(esp, v); }
/* 93f859: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 93f85b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93f85c: call 0x929ec0 */
  esp -= 4; W32(esp, 0x93f861u); SPILL(); f_929ec0(); if (g_unwind) return; RELOAD();
/* 93f861: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93f870(void) {
  LOAD_REGS();
L_93f870: /* 93f870: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 93f874: push 0x93f5e0 */
  { uint32_t v = 0x93f5e0u; esp -= 4; W32(esp, v); }
/* 93f879: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 93f87b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93f87c: call 0x929ec0 */
  esp -= 4; W32(esp, 0x93f881u); SPILL(); f_929ec0(); if (g_unwind) return; RELOAD();
/* 93f881: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93f890(void) {
  LOAD_REGS();
L_93f890: /* 93f890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f891: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 93f895: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f896: call 0x944d40 */
  esp -= 4; W32(esp, 0x93f89bu); SPILL(); f_944d40(); if (g_unwind) return; RELOAD();
/* 93f89b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f89c: call 0x9448f0 */
  esp -= 4; W32(esp, 0x93f8a1u); SPILL(); f_9448f0(); if (g_unwind) return; RELOAD();
/* 93f8a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f8a2: call 0x942480 */
  esp -= 4; W32(esp, 0x93f8a7u); SPILL(); f_942480(); if (g_unwind) return; RELOAD();
/* 93f8a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f8a8: call 0x941770 */
  esp -= 4; W32(esp, 0x93f8adu); SPILL(); f_941770(); if (g_unwind) return; RELOAD();
/* 93f8ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f8ae: call 0x941310 */
  esp -= 4; W32(esp, 0x93f8b3u); SPILL(); f_941310(); if (g_unwind) return; RELOAD();
/* 93f8b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f8b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93f8c0(void) {
  LOAD_REGS();
L_93f8c0: /* 93f8c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f8c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 93f8c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f8c6: call 0x92d4f0 */
  esp -= 4; W32(esp, 0x93f8cbu); SPILL(); f_92d4f0(); if (g_unwind) return; RELOAD();
/* 93f8cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f8cc: call 0x92dd60 */
  esp -= 4; W32(esp, 0x93f8d1u); SPILL(); f_92dd60(); if (g_unwind) return; RELOAD();
/* 93f8d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f8d2: call 0x944da0 */
  esp -= 4; W32(esp, 0x93f8d7u); SPILL(); f_944da0(); if (g_unwind) return; RELOAD();
/* 93f8d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93f8d8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_93f8e0(void) {
  LOAD_REGS();
L_93f8e0: /* 93f8e0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93f8e4: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93f8e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93f8e9: je 0x93f915 */
  if (zf) goto L_93f915;
L_93f8eb: /* 93f8eb: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 93f8ef: nop  */
L_93f8f0: /* 93f8f0: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 93f8f3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93f8f9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f8fb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f8fe: jp 0x93f90d */
  if (pf) goto L_93f90d;
L_93f900: /* 93f900: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 93f901: jne 0x93f8f0 */
  if (!zf) goto L_93f8f0;
L_93f903: /* 93f903: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 93f907: xor eax, eax */
  eax = 0;
/* 93f909: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f90c: ret  */
  esp += 4; SPILL(); return;
L_93f90d: /* 93f90d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93f90f: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 93f913: jne 0x93f91b */
  if (!zf) goto L_93f91b;
L_93f915: /* 93f915: xor eax, eax */
  eax = 0;
/* 93f917: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93f91a: ret  */
  esp += 4; SPILL(); return;
L_93f91b: /* 93f91b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93f91c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93f91d: mov ebx, 1 */
  ebx = 0x1u;
/* 93f922: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 93f925: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 93f927: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93f928: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93f929: jb 0x93f973 */
  if (cf) goto L_93f973;
L_93f92b: /* 93f92b: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 93f92f: lea ebp, [eax*4 + 4] */
  ebp = (uint32_t)(eax*4 + 0x4u);
L_93f936: /* 93f936: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 93f93a: mov ecx, edx */
  ecx = edx;
/* 93f93c: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 93f93e: xor eax, eax */
  eax = 0;
/* 93f940: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 93f942: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_93f945: /* 93f945: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 93f948: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 93f94c: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 93f954: fild qword ptr [esp + 0x3c] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93f958: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 93f95b: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 93f95e: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
/* 93f961: mov eax, ecx */
  eax = ecx;
/* 93f963: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 93f965: jbe 0x93f945 */
  if ((cf | zf)) goto L_93f945;
L_93f967: /* 93f967: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 93f96b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 93f96c: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 93f96f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 93f971: jbe 0x93f936 */
  if ((cf | zf)) goto L_93f936;
L_93f973: /* 93f973: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 93f975: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 93f979: fdiv dword ptr [edx + 4] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x4u)));
/* 93f97c: xor ebp, ebp */
  ebp = 0;
/* 93f97e: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 93f982: fchs  */
  ST0 = -ST0;
/* 93f984: fcom dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
/* 93f988: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f98a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93f98d: jne 0x93f9a7 */
  if (!zf) goto L_93f9a7;
L_93f98f: /* 93f98f: fcom dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
/* 93f993: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93f995: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93f998: jp 0x93f9a7 */
  if (pf) goto L_93f9a7;
L_93f99a: /* 93f99a: mov ebp, 1 */
  ebp = 0x1u;
/* 93f99f: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 93f9a1: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 93f9a5: jmp 0x93f9a9 */
  goto L_93f9a9;
L_93f9a7: /* 93f9a7: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93f9a9: /* 93f9a9: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 93f9ad: mov ecx, 2 */
  ecx = 0x2u;
/* 93f9b2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 93f9b4: jb 0x93fdc7 */
  if (cf) goto L_93fdc7;
L_93f9ba: /* 93f9ba: lea eax, [eax*4 + 4] */
  eax = (uint32_t)(eax*4 + 0x4u);
/* 93f9c1: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_93f9c5: /* 93f9c5: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 93f9c9: mov ebx, edx */
  ebx = edx;
/* 93f9cb: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 93f9cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93f9cf: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 93f9d2: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 93f9d6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93f9da: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 93f9e2: mov eax, ecx */
  eax = ecx;
/* 93f9e4: je 0x93f9f0 */
  if (zf) goto L_93f9f0;
L_93f9e6: /* 93f9e6: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 93f9ea: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 93f9eb: fadd dword ptr [edx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax*4)));
/* 93f9ee: jne 0x93f9e6 */
  if (!zf) goto L_93f9e6;
L_93f9f0: /* 93f9f0: xor edi, edi */
  edi = 0;
/* 93f9f2: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 93f9f6: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 93f9f8: jbe 0x93fbf7 */
  if ((cf | zf)) goto L_93fbf7;
L_93f9fe: /* 93f9fe: mov edi, edi */
  edi = edi;
L_93fa00: /* 93fa00: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93fa02: fld dword ptr [esi + edi*4] */
  { double v = F32((uint32_t)(esi + edi*4)); FPUSH(v); }
/* 93fa05: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93fa09: mov eax, ecx */
  eax = ecx;
/* 93fa0b: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 93fa0e: je 0x93fa1a */
  if (zf) goto L_93fa1a;
L_93fa10: /* 93fa10: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 93fa14: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 93fa15: fadd dword ptr [edx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax*4)));
/* 93fa18: jne 0x93fa10 */
  if (!zf) goto L_93fa10;
L_93fa1a: /* 93fa1a: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93fa20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fa22: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93fa25: jp 0x93fa37 */
  if (pf) goto L_93fa37;
L_93fa27: /* 93fa27: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93fa2b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 93fa2f: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 93fa32: jmp 0x93fbdd */
  goto L_93fbdd;
L_93fa37: /* 93fa37: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93fa3b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fa3d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fa43: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fa45: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93fa48: jp 0x93fbe2 */
  if (pf) goto L_93fbe2;
L_93fa4e: /* 93fa4e: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 93fa52: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 93fa56: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93fa5a: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 93fa5e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fa60: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 93fa64: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93fa68: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 93fa6c: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 93fa70: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 93fa74: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 93fa78: mov ebp, 0x17 */
  ebp = 0x17u;
/* 93fa7d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93fa7f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93fa81: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 93fa85: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 93fa87: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 93fa8b: nop  */
/* 93fa8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93fa90: /* 93fa90: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93fa92: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 93fa95: mov eax, ecx */
  eax = ecx;
/* 93fa97: je 0x93faaa */
  if (zf) goto L_93faaa;
L_93fa99: /* 93fa99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93faa0: /* 93faa0: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 93faa4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 93faa5: fadd dword ptr [edx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax*4)));
/* 93faa8: jne 0x93faa0 */
  if (!zf) goto L_93faa0;
L_93faaa: /* 93faaa: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93faae: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fab0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fab6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fab8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93fabb: jp 0x93facb */
  if (pf) goto L_93facb;
L_93fabd: /* 93fabd: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 93fac1: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 93fac5: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 93fac9: jmp 0x93faee */
  goto L_93faee;
L_93facb: /* 93facb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93facf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fad1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fad7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fad9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93fadc: jp 0x93fbc8 */
  if (pf) goto L_93fbc8;
L_93fae2: /* 93fae2: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 93fae6: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 93faea: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_93faee: /* 93faee: fld dword ptr [ebx + ecx*4 - 4] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 93faf2: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 93faf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93faf7: je 0x93fb0a */
  if (zf) goto L_93fb0a;
L_93faf9: /* 93faf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93fb00: /* 93fb00: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 93fb04: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 93fb05: fadd dword ptr [ebx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4)));
/* 93fb08: jne 0x93fb00 */
  if (!zf) goto L_93fb00;
L_93fb0a: /* 93fb0a: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93fb10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fb12: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93fb15: jne 0x93fb1e */
  if (!zf) goto L_93fb1e;
L_93fb17: /* 93fb17: mov esi, 1 */
  esi = 0x1u;
/* 93fb1c: jmp 0x93fb20 */
  goto L_93fb20;
L_93fb1e: /* 93fb1e: xor esi, esi */
  esi = 0;
L_93fb20: /* 93fb20: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93fb24: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 93fb28: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fb2a: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 93fb2c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fb32: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fb34: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93fb37: jne 0x93fb40 */
  if (!zf) goto L_93fb40;
L_93fb39: /* 93fb39: mov eax, 1 */
  eax = 0x1u;
/* 93fb3e: jmp 0x93fb42 */
  goto L_93fb42;
L_93fb40: /* 93fb40: xor eax, eax */
  eax = 0;
L_93fb42: /* 93fb42: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93fb44: jne 0x93fb78 */
  if (!zf) goto L_93fb78;
L_93fb46: /* 93fb46: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93fb4a: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 93fb4e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fb50: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 93fb52: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fb58: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fb5a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93fb5d: jne 0x93fb66 */
  if (!zf) goto L_93fb66;
L_93fb5f: /* 93fb5f: mov eax, 1 */
  eax = 0x1u;
/* 93fb64: jmp 0x93fb68 */
  goto L_93fb68;
L_93fb66: /* 93fb66: xor eax, eax */
  eax = 0;
L_93fb68: /* 93fb68: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93fb6a: jne 0x93fb78 */
  if (!zf) goto L_93fb78;
L_93fb6c: /* 93fb6c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93fb6e: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 93fb70: fsubr dword ptr [esp + 0x58] */
  ST0 = (F32((uint32_t)(esp + 0x58u))) - ST0;
/* 93fb74: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 93fb76: jmp 0x93fb98 */
  goto L_93fb98;
L_93fb78: /* 93fb78: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93fb7a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93fb7c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93fb80: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 93fb84: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93fb88: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 93fb8c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93fb8e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93fb92: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 93fb96: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_93fb98: /* 93fb98: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93fb9c: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 93fb9e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93fba0: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 93fba4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93fba6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fba8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93fbaa: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93fbac: fmul dword ptr [0xa214e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa214e4u)));
/* 93fbb2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93fbb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fbb6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93fbb8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93fbbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93fbbd: je 0x93fbca */
  if (zf) goto L_93fbca;
L_93fbbf: /* 93fbbf: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 93fbc0: jne 0x93fa90 */
  if (!zf) goto L_93fa90;
L_93fbc6: /* 93fbc6: jmp 0x93fbca */
  goto L_93fbca;
L_93fbc8: /* 93fbc8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93fbca: /* 93fbca: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93fbce: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 93fbd2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 93fbd6: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 93fbda: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
L_93fbdd: /* 93fbdd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 93fbde: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_93fbe2: /* 93fbe2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 93fbe6: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 93fbea: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 93fbeb: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 93fbed: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 93fbf1: jb 0x93fa00 */
  if (cf) goto L_93fa00;
L_93fbf7: /* 93fbf7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93fbf9: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 93fbfc: mov eax, ecx */
  eax = ecx;
/* 93fbfe: je 0x93fc0a */
  if (zf) goto L_93fc0a;
L_93fc00: /* 93fc00: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 93fc04: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 93fc05: fadd dword ptr [edx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax*4)));
/* 93fc08: jne 0x93fc00 */
  if (!zf) goto L_93fc00;
L_93fc0a: /* 93fc0a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93fc0e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fc10: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fc16: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fc18: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93fc1b: jp 0x93fdb0 */
  if (pf) goto L_93fdb0;
L_93fc21: /* 93fc21: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 93fc25: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 93fc29: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93fc2d: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 93fc31: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fc33: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 93fc37: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93fc3b: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 93fc3f: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 93fc43: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 93fc47: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 93fc4b: mov edi, 0x17 */
  edi = 0x17u;
/* 93fc50: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93fc52: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93fc54: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 93fc58: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 93fc5a: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 93fc5e: mov edi, edi */
  edi = edi;
L_93fc60: /* 93fc60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93fc62: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 93fc65: mov eax, ecx */
  eax = ecx;
/* 93fc67: je 0x93fc7a */
  if (zf) goto L_93fc7a;
L_93fc69: /* 93fc69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93fc70: /* 93fc70: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 93fc74: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 93fc75: fadd dword ptr [edx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax*4)));
/* 93fc78: jne 0x93fc70 */
  if (!zf) goto L_93fc70;
L_93fc7a: /* 93fc7a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93fc7e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fc80: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fc86: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fc88: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93fc8b: jp 0x93fc9b */
  if (pf) goto L_93fc9b;
L_93fc8d: /* 93fc8d: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 93fc91: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 93fc95: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 93fc99: jmp 0x93fcbe */
  goto L_93fcbe;
L_93fc9b: /* 93fc9b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93fc9f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fca1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fca7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fca9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93fcac: jp 0x93fd98 */
  if (pf) goto L_93fd98;
L_93fcb2: /* 93fcb2: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 93fcb6: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 93fcba: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_93fcbe: /* 93fcbe: fld dword ptr [ebx + ecx*4 - 4] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 93fcc2: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 93fcc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 93fcc7: je 0x93fcda */
  if (zf) goto L_93fcda;
L_93fcc9: /* 93fcc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93fcd0: /* 93fcd0: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 93fcd4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 93fcd5: fadd dword ptr [ebx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4)));
/* 93fcd8: jne 0x93fcd0 */
  if (!zf) goto L_93fcd0;
L_93fcda: /* 93fcda: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93fce0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fce2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93fce5: jne 0x93fcee */
  if (!zf) goto L_93fcee;
L_93fce7: /* 93fce7: mov esi, 1 */
  esi = 0x1u;
/* 93fcec: jmp 0x93fcf0 */
  goto L_93fcf0;
L_93fcee: /* 93fcee: xor esi, esi */
  esi = 0;
L_93fcf0: /* 93fcf0: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93fcf4: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 93fcf8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fcfa: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 93fcfc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fd02: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fd04: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93fd07: jne 0x93fd10 */
  if (!zf) goto L_93fd10;
L_93fd09: /* 93fd09: mov eax, 1 */
  eax = 0x1u;
/* 93fd0e: jmp 0x93fd12 */
  goto L_93fd12;
L_93fd10: /* 93fd10: xor eax, eax */
  eax = 0;
L_93fd12: /* 93fd12: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93fd14: jne 0x93fd48 */
  if (!zf) goto L_93fd48;
L_93fd16: /* 93fd16: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93fd1a: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 93fd1e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fd20: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 93fd22: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93fd28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fd2a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93fd2d: jne 0x93fd36 */
  if (!zf) goto L_93fd36;
L_93fd2f: /* 93fd2f: mov eax, 1 */
  eax = 0x1u;
/* 93fd34: jmp 0x93fd38 */
  goto L_93fd38;
L_93fd36: /* 93fd36: xor eax, eax */
  eax = 0;
L_93fd38: /* 93fd38: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93fd3a: jne 0x93fd48 */
  if (!zf) goto L_93fd48;
L_93fd3c: /* 93fd3c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93fd3e: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 93fd40: fsubr dword ptr [esp + 0x58] */
  ST0 = (F32((uint32_t)(esp + 0x58u))) - ST0;
/* 93fd44: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 93fd46: jmp 0x93fd68 */
  goto L_93fd68;
L_93fd48: /* 93fd48: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93fd4a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93fd4c: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93fd50: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 93fd54: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93fd58: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 93fd5c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93fd5e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93fd62: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 93fd66: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_93fd68: /* 93fd68: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93fd6c: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 93fd6e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93fd70: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 93fd74: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93fd76: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93fd78: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93fd7a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93fd7c: fmul dword ptr [0xa214e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa214e4u)));
/* 93fd82: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93fd84: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93fd86: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93fd88: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93fd8b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93fd8d: je 0x93fd9a */
  if (zf) goto L_93fd9a;
L_93fd8f: /* 93fd8f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 93fd90: jne 0x93fc60 */
  if (!zf) goto L_93fc60;
L_93fd96: /* 93fd96: jmp 0x93fd9a */
  goto L_93fd9a;
L_93fd98: /* 93fd98: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93fd9a: /* 93fd9a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 93fd9e: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93fda2: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 93fda6: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 93fda9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 93fdaa: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 93fdae: jmp 0x93fdb2 */
  goto L_93fdb2;
L_93fdb0: /* 93fdb0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93fdb2: /* 93fdb2: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 93fdb6: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 93fdba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 93fdbb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 93fdbd: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 93fdc1: jbe 0x93f9c5 */
  if ((cf | zf)) goto L_93f9c5;
L_93fdc7: /* 93fdc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93fdc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93fdc9: mov eax, ebp */
  eax = ebp;
/* 93fdcb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93fdcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93fdcd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93fdd0: ret  */
  esp += 4; SPILL(); return;
}

void f_93fde0(void) {
  LOAD_REGS();
L_93fde0: /* 93fde0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 93fde4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93fde7: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93fdea: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93fdee: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 93fdf1: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93fdf5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93fdf7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 93fdfb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 93fdfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93fdff: push 0xaf3fd4 */
  { uint32_t v = 0xaf3fd4u; esp -= 4; W32(esp, v); }
/* 93fe04: call dword ptr [0xcfb070] */
  esp -= 4; W32(esp, 0x93fe0au); SPILL(); f_42d092(); if (g_unwind) return; /* MSVCR70!printf */ RELOAD();
/* 93fe0a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93fe0d: ret  */
  esp += 4; SPILL(); return;
}

void f_93fe10(void) {
  LOAD_REGS();
L_93fe10: /* 93fe10: sub esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93fe16: mov eax, dword ptr [esp + 0xb4] */
  eax = R32((uint32_t)(esp + 0xb4u));
/* 93fe1d: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 93fe24: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93fe26: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 93fe2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93fe2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93fe2f: mov esi, dword ptr [esp + 0xb0] */
  esi = R32((uint32_t)(esp + 0xb0u));
/* 93fe36: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 93fe38: mov ebx, dword ptr [esp + 0xc4] */
  ebx = R32((uint32_t)(esp + 0xc4u));
/* 93fe3f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 93fe42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93fe43: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 93fe46: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93fe49: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 93fe4c: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 93fe53: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 93fe56: fsub dword ptr [ecx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x30u)));
/* 93fe59: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93fe5d: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* 93fe60: fsub dword ptr [ecx + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x34u)));
/* 93fe63: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 93fe67: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 93fe6a: fsub dword ptr [ecx + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x38u)));
/* 93fe6d: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 93fe73: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 93fe77: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93fe79: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 93fe80: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 93fe84: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 93fe88: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 93fe8f: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 93fe93: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 93fe97: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 93fe9e: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 93fea5: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 93fea9: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 93fead: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 93feaf: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93feb1: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93feb4: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93feb7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93feb9: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93febc: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93febf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93fec1: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 93fec5: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93fec8: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 93fecb: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93fece: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 93fed1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93fed3: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93fed5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 93fed8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93feda: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93fede: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93fee1: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 93fee4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93fee7: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 93feea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93feec: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 93feef: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93fef1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93fef3: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 93fef7: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93fefb: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93fefe: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93ff02: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93ff05: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ff07: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93ff0b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93ff0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ff0f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93ff13: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 93ff17: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93ff1a: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 93ff1e: mov esi, dword ptr [esp + 0xb8] */
  esi = R32((uint32_t)(esp + 0xb8u));
/* 93ff25: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93ff28: mov edi, dword ptr [esp + 0xac] */
  edi = R32((uint32_t)(esp + 0xacu));
/* 93ff2f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ff31: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 93ff35: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93ff37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ff39: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93ff3d: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93ff41: fabs  */
  ST0 = fabs(ST0);
/* 93ff43: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 93ff47: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93ff4b: fabs  */
  ST0 = fabs(ST0);
/* 93ff4d: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 93ff51: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93ff55: fabs  */
  ST0 = fabs(ST0);
/* 93ff57: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 93ff5e: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 93ff62: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93ff64: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 93ff6b: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93ff6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ff70: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 93ff74: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93ff77: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ff79: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 93ff7b: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 93ff7f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93ff83: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 93ff87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ff89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93ff8c: jne 0x93ffc4 */
  if (!zf) goto L_93ffc4;
L_93ff8e: /* 93ff8e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ff92: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 93ff96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ff98: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93ff9b: jne 0x93ffa9 */
  if (!zf) goto L_93ffa9;
L_93ff9d: /* 93ff9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93ff9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93ff9f: xor eax, eax */
  eax = 0;
/* 93ffa1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93ffa2: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93ffa8: ret  */
  esp += 4; SPILL(); return;
L_93ffa9: /* 93ffa9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93ffad: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 93ffb1: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 93ffb8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ffbc: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 93ffc0: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 93ffc2: jmp 0x94000d */
  goto L_94000d;
L_93ffc4: /* 93ffc4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93ffc8: fchs  */
  ST0 = -ST0;
/* 93ffca: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93ffce: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 93ffd0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ffd2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ffd5: jp 0x94001e */
  if (pf) goto L_94001e;
L_93ffd7: /* 93ffd7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93ffdb: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 93ffdd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ffdf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93ffe1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ffe4: jp 0x93fff2 */
  if (pf) goto L_93fff2;
L_93ffe6: /* 93ffe6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93ffe7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93ffe8: xor eax, eax */
  eax = 0;
/* 93ffea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93ffeb: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93fff1: ret  */
  esp += 4; SPILL(); return;
L_93fff2: /* 93fff2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 93fff6: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93fffa: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940001: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 940005: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 940009: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 94000b: fchs  */
  ST0 = -ST0;
L_94000d: /* 94000d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 940013: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940015: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940018: jne 0x94001e */
  if (!zf) goto L_94001e;
L_94001a: /* 94001a: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 94001c: jmp 0x940020 */
  goto L_940020;
L_94001e: /* 94001e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_940020: /* 940020: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 940022: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 940025: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 940028: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94002b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94002d: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 940030: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 940033: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940035: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 940039: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 94003c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 94003f: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 940042: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 940045: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940047: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 94004a: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 94004d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94004f: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 940053: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 940056: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 940059: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 94005c: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 94005f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940061: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 940064: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 940067: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940069: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 94006d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 940071: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 940074: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 940078: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 94007b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94007d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 940081: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 940084: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940086: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 94008a: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 94008e: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 940091: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 940095: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 940098: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94009a: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 94009e: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 9400a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9400a3: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9400a7: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 9400ab: fabs  */
  ST0 = fabs(ST0);
/* 9400ad: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 9400b4: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 9400b8: fabs  */
  ST0 = fabs(ST0);
/* 9400ba: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 9400c1: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 9400c5: fabs  */
  ST0 = fabs(ST0);
/* 9400c7: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 9400ce: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9400d5: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9400d7: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 9400de: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9400e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9400e3: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 9400ea: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9400ed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9400ef: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 9400f2: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9400f6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9400fa: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 9400fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940100: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940103: jne 0x940146 */
  if (!zf) goto L_940146;
L_940105: /* 940105: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 940109: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 94010d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94010f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940112: jne 0x940120 */
  if (!zf) goto L_940120;
L_940114: /* 940114: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940115: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940116: xor eax, eax */
  eax = 0;
/* 940118: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940119: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94011f: ret  */
  esp += 4; SPILL(); return;
L_940120: /* 940120: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940124: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 940128: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 94012f: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 940133: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 940137: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940139: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 94013b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94013d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940140: jne 0x94019c */
  if (!zf) goto L_94019c;
L_940142: /* 940142: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940144: jmp 0x94019e */
  goto L_94019e;
L_940146: /* 940146: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94014a: fchs  */
  ST0 = -ST0;
/* 94014c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 940150: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 940152: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940154: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940157: jp 0x94019c */
  if (pf) goto L_94019c;
L_940159: /* 940159: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94015d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94015f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940161: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940163: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940166: jp 0x940174 */
  if (pf) goto L_940174;
L_940168: /* 940168: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940169: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94016a: xor eax, eax */
  eax = 0;
/* 94016c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94016d: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940173: ret  */
  esp += 4; SPILL(); return;
L_940174: /* 940174: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 940178: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 94017c: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940183: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 940187: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 94018b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 94018d: fchs  */
  ST0 = -ST0;
/* 94018f: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940191: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940193: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940196: jne 0x94019c */
  if (!zf) goto L_94019c;
L_940198: /* 940198: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 94019a: jmp 0x94019e */
  goto L_94019e;
L_94019c: /* 94019c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94019e: /* 94019e: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9401a0: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 9401a3: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9401a6: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 9401a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9401ab: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9401ae: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 9401b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9401b3: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 9401b7: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 9401ba: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 9401bd: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 9401c0: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 9401c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9401c5: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 9401c8: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 9401cb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9401cd: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 9401d1: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 9401d4: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 9401d7: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 9401da: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 9401dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9401df: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 9401e2: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 9401e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9401e7: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 9401eb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9401ef: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 9401f2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9401f6: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 9401f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9401fb: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9401ff: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 940202: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940204: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 940208: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 94020c: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 94020f: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 940213: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 940216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940218: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 94021c: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 94021f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940221: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 940225: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 940229: fabs  */
  ST0 = fabs(ST0);
/* 94022b: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 940232: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 940236: fabs  */
  ST0 = fabs(ST0);
/* 940238: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 94023f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 940243: fabs  */
  ST0 = fabs(ST0);
/* 940245: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 94024c: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 940253: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 940255: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 94025c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94025f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940261: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 940268: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94026b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94026d: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 940270: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 940274: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 940278: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 94027c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94027e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940281: jne 0x9402c4 */
  if (!zf) goto L_9402c4;
L_940283: /* 940283: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 940287: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 94028b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94028d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940290: jne 0x94029e */
  if (!zf) goto L_94029e;
L_940292: /* 940292: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940293: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940294: xor eax, eax */
  eax = 0;
/* 940296: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940297: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94029d: ret  */
  esp += 4; SPILL(); return;
L_94029e: /* 94029e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9402a2: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 9402a6: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9402ad: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9402b1: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 9402b5: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 9402b7: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 9402b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9402bb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9402be: jne 0x94031a */
  if (!zf) goto L_94031a;
L_9402c0: /* 9402c0: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9402c2: jmp 0x94031c */
  goto L_94031c;
L_9402c4: /* 9402c4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9402c8: fchs  */
  ST0 = -ST0;
/* 9402ca: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9402ce: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9402d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9402d2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9402d5: jp 0x94031a */
  if (pf) goto L_94031a;
L_9402d7: /* 9402d7: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9402db: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9402dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9402df: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9402e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9402e4: jp 0x9402f2 */
  if (pf) goto L_9402f2;
L_9402e6: /* 9402e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9402e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9402e8: xor eax, eax */
  eax = 0;
/* 9402ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9402eb: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9402f1: ret  */
  esp += 4; SPILL(); return;
L_9402f2: /* 9402f2: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9402f6: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 9402fa: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940301: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 940305: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 940309: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 94030b: fchs  */
  ST0 = -ST0;
/* 94030d: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 94030f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940311: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940314: jne 0x94031a */
  if (!zf) goto L_94031a;
L_940316: /* 940316: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940318: jmp 0x94031c */
  goto L_94031c;
L_94031a: /* 94031a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94031c: /* 94031c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 940320: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 940323: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 940327: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94032a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94032c: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 940330: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 940332: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940334: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 940338: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 94033c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94033e: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 940342: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 940345: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940347: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 94034b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94034e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940350: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 940357: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 94035e: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 940361: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 940368: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 94036b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94036d: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 940371: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 940373: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940375: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 940377: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 94037b: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 94037f: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 940383: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940385: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940388: jne 0x9403d1 */
  if (!zf) goto L_9403d1;
L_94038a: /* 94038a: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 940391: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 940395: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940397: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94039a: jne 0x9403a8 */
  if (!zf) goto L_9403a8;
L_94039c: /* 94039c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94039d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94039e: xor eax, eax */
  eax = 0;
/* 9403a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9403a1: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9403a7: ret  */
  esp += 4; SPILL(); return;
L_9403a8: /* 9403a8: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9403ac: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 9403b0: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9403b7: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 9403be: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 9403c2: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 9403c4: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 9403c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9403c8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9403cb: jne 0x94042d */
  if (!zf) goto L_94042d;
L_9403cd: /* 9403cd: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9403cf: jmp 0x94042f */
  goto L_94042f;
L_9403d1: /* 9403d1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9403d5: fchs  */
  ST0 = -ST0;
/* 9403d7: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9403db: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9403dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9403df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9403e2: jp 0x94042d */
  if (pf) goto L_94042d;
L_9403e4: /* 9403e4: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 9403eb: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9403ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9403ef: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9403f1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9403f4: jp 0x940402 */
  if (pf) goto L_940402;
L_9403f6: /* 9403f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9403f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9403f8: xor eax, eax */
  eax = 0;
/* 9403fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9403fb: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940401: ret  */
  esp += 4; SPILL(); return;
L_940402: /* 940402: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 940406: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 94040a: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940411: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 940418: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 94041c: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 94041e: fchs  */
  ST0 = -ST0;
/* 940420: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940422: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940424: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940427: jne 0x94042d */
  if (!zf) goto L_94042d;
L_940429: /* 940429: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 94042b: jmp 0x94042f */
  goto L_94042f;
L_94042d: /* 94042d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94042f: /* 94042f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 940433: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 940436: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94043a: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 94043d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94043f: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 940443: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 940446: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940448: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 94044c: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 940450: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 940453: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 940457: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 94045a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94045c: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 940460: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 940463: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940465: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 94046c: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 940473: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 940476: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 94047d: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 940480: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940482: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 940486: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 940488: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94048a: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 94048d: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 940491: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 940495: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 940499: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94049b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94049e: jne 0x9404e7 */
  if (!zf) goto L_9404e7;
L_9404a0: /* 9404a0: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 9404a7: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 9404ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9404ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9404b0: jne 0x9404be */
  if (!zf) goto L_9404be;
L_9404b2: /* 9404b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9404b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9404b4: xor eax, eax */
  eax = 0;
/* 9404b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9404b7: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9404bd: ret  */
  esp += 4; SPILL(); return;
L_9404be: /* 9404be: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9404c2: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 9404c6: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9404cd: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 9404d4: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 9404d8: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 9404da: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 9404dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9404de: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9404e1: jne 0x940543 */
  if (!zf) goto L_940543;
L_9404e3: /* 9404e3: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9404e5: jmp 0x940545 */
  goto L_940545;
L_9404e7: /* 9404e7: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9404eb: fchs  */
  ST0 = -ST0;
/* 9404ed: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 9404f1: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9404f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9404f5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9404f8: jp 0x940543 */
  if (pf) goto L_940543;
L_9404fa: /* 9404fa: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 940501: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 940503: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940505: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940507: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94050a: jp 0x940518 */
  if (pf) goto L_940518;
L_94050c: /* 94050c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94050d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94050e: xor eax, eax */
  eax = 0;
/* 940510: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940511: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940517: ret  */
  esp += 4; SPILL(); return;
L_940518: /* 940518: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 94051c: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 940520: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940527: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 94052e: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 940532: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940534: fchs  */
  ST0 = -ST0;
/* 940536: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940538: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94053a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94053d: jne 0x940543 */
  if (!zf) goto L_940543;
L_94053f: /* 94053f: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940541: jmp 0x940545 */
  goto L_940545;
L_940543: /* 940543: fstp st(0) */
  STI(0) = ST0; FPOP();
L_940545: /* 940545: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 940549: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 94054c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 940550: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 940553: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940555: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 940559: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 94055c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94055e: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 940562: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 940566: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 940569: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 94056d: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 940570: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940572: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 940576: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 940579: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94057b: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 940582: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 940589: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 94058c: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 940593: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 940596: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940598: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 94059f: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9405a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9405a3: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 9405a6: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9405aa: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9405ae: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 9405b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9405b4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9405b7: jne 0x940600 */
  if (!zf) goto L_940600;
L_9405b9: /* 9405b9: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 9405c0: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 9405c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9405c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9405c9: jne 0x9405d7 */
  if (!zf) goto L_9405d7;
L_9405cb: /* 9405cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9405cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9405cd: xor eax, eax */
  eax = 0;
/* 9405cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9405d0: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9405d6: ret  */
  esp += 4; SPILL(); return;
L_9405d7: /* 9405d7: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9405db: fsub dword ptr [esp + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x68u)));
/* 9405df: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9405e6: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 9405ed: fsub dword ptr [esp + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x68u)));
/* 9405f1: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 9405f3: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 9405f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9405f7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9405fa: jne 0x94065c */
  if (!zf) goto L_94065c;
L_9405fc: /* 9405fc: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9405fe: jmp 0x94065e */
  goto L_94065e;
L_940600: /* 940600: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940604: fchs  */
  ST0 = -ST0;
/* 940606: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 94060a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94060c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94060e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940611: jp 0x94065c */
  if (pf) goto L_94065c;
L_940613: /* 940613: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 94061a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94061c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94061e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940620: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940623: jp 0x940631 */
  if (pf) goto L_940631;
L_940625: /* 940625: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940626: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940627: xor eax, eax */
  eax = 0;
/* 940629: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94062a: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940630: ret  */
  esp += 4; SPILL(); return;
L_940631: /* 940631: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 940635: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 940639: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940640: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 940647: fsub dword ptr [esp + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x68u)));
/* 94064b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 94064d: fchs  */
  ST0 = -ST0;
/* 94064f: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940651: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940653: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940656: jne 0x94065c */
  if (!zf) goto L_94065c;
L_940658: /* 940658: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 94065a: jmp 0x94065e */
  goto L_94065e;
L_94065c: /* 94065c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94065e: /* 94065e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 940662: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 940666: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 94066a: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 94066e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940670: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 940674: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 94067b: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 94067e: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 940685: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 940688: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94068a: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 940691: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 940694: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 940698: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94069b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94069d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94069f: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9406a3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9406a7: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 9406ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9406ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9406b0: jne 0x940701 */
  if (!zf) goto L_940701;
L_9406b2: /* 9406b2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9406b6: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 9406ba: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9406be: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9406c2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9406c4: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 9406c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9406ca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9406cd: jne 0x9406dd */
  if (!zf) goto L_9406dd;
L_9406cf: /* 9406cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9406d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9406d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9406d3: xor eax, eax */
  eax = 0;
/* 9406d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9406d6: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9406dc: ret  */
  esp += 4; SPILL(); return;
L_9406dd: /* 9406dd: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9406e1: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 9406e5: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9406ec: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9406ee: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 9406f2: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 9406f4: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 9406f6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9406f8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9406fb: jne 0x94076b */
  if (!zf) goto L_94076b;
L_9406fd: /* 9406fd: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9406ff: jmp 0x94076d */
  goto L_94076d;
L_940701: /* 940701: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940705: fchs  */
  ST0 = -ST0;
/* 940707: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94070b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94070f: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 940713: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940715: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940718: jp 0x94076d */
  if (pf) goto L_94076d;
L_94071a: /* 94071a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94071e: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 940722: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 940726: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 94072a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94072c: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 940730: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940732: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940735: jp 0x940745 */
  if (pf) goto L_940745;
L_940737: /* 940737: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940738: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94073a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94073b: xor eax, eax */
  eax = 0;
/* 94073d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94073e: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940744: ret  */
  esp += 4; SPILL(); return;
L_940745: /* 940745: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940749: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 94074d: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940754: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940756: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 94075a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 94075c: fchs  */
  ST0 = -ST0;
/* 94075e: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940760: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940762: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940765: jne 0x94076b */
  if (!zf) goto L_94076b;
L_940767: /* 940767: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940769: jmp 0x94076d */
  goto L_94076d;
L_94076b: /* 94076b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94076d: /* 94076d: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 940771: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 940775: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 940779: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 94077d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94077f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 940783: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 94078a: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 94078d: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 940794: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 940797: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940799: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 9407a0: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9407a2: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9407a6: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9407a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9407ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9407ad: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9407b1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9407b5: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 9407b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9407bb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9407be: jne 0x94080f */
  if (!zf) goto L_94080f;
L_9407c0: /* 9407c0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9407c4: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 9407c8: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9407cc: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9407d0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9407d2: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 9407d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9407d8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9407db: jne 0x9407eb */
  if (!zf) goto L_9407eb;
L_9407dd: /* 9407dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9407de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9407e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9407e1: xor eax, eax */
  eax = 0;
/* 9407e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9407e4: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9407ea: ret  */
  esp += 4; SPILL(); return;
L_9407eb: /* 9407eb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9407ef: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 9407f3: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9407fa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9407fc: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940800: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940802: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940804: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940806: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940809: jne 0x940879 */
  if (!zf) goto L_940879;
L_94080b: /* 94080b: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 94080d: jmp 0x94087b */
  goto L_94087b;
L_94080f: /* 94080f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940813: fchs  */
  ST0 = -ST0;
/* 940815: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 940819: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94081d: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 940821: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940823: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940826: jp 0x94087b */
  if (pf) goto L_94087b;
L_940828: /* 940828: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94082c: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 940830: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 940834: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 940838: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94083a: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 94083e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940840: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940843: jp 0x940853 */
  if (pf) goto L_940853;
L_940845: /* 940845: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940846: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940848: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940849: xor eax, eax */
  eax = 0;
/* 94084b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94084c: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940852: ret  */
  esp += 4; SPILL(); return;
L_940853: /* 940853: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940857: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 94085b: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940862: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940864: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940868: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 94086a: fchs  */
  ST0 = -ST0;
/* 94086c: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 94086e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940870: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940873: jne 0x940879 */
  if (!zf) goto L_940879;
L_940875: /* 940875: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940877: jmp 0x94087b */
  goto L_94087b;
L_940879: /* 940879: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94087b: /* 94087b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94087f: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 940883: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 940887: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 94088b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94088d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 940891: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 940898: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 94089b: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 9408a2: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9408a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9408a7: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9408ab: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9408ad: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9408b1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9408b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9408b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9408b8: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9408bc: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9408c0: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 9408c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9408c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9408c9: jne 0x94091a */
  if (!zf) goto L_94091a;
L_9408cb: /* 9408cb: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9408cf: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 9408d3: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9408d7: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9408db: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9408dd: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 9408e1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9408e3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9408e6: jne 0x9408f6 */
  if (!zf) goto L_9408f6;
L_9408e8: /* 9408e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9408e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9408eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9408ec: xor eax, eax */
  eax = 0;
/* 9408ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9408ef: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9408f5: ret  */
  esp += 4; SPILL(); return;
L_9408f6: /* 9408f6: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9408fa: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 9408fe: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940905: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940907: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 94090b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 94090d: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 94090f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940911: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940914: jne 0x940984 */
  if (!zf) goto L_940984;
L_940916: /* 940916: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940918: jmp 0x940986 */
  goto L_940986;
L_94091a: /* 94091a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94091e: fchs  */
  ST0 = -ST0;
/* 940920: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 940924: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940928: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 94092c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94092e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940931: jp 0x940986 */
  if (pf) goto L_940986;
L_940933: /* 940933: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 940937: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 94093b: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 94093f: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 940943: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940945: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 940949: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94094b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94094e: jp 0x94095e */
  if (pf) goto L_94095e;
L_940950: /* 940950: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940951: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940953: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940954: xor eax, eax */
  eax = 0;
/* 940956: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940957: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94095d: ret  */
  esp += 4; SPILL(); return;
L_94095e: /* 94095e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940962: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 940966: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 94096d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94096f: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940973: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940975: fchs  */
  ST0 = -ST0;
/* 940977: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940979: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94097b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94097e: jne 0x940984 */
  if (!zf) goto L_940984;
L_940980: /* 940980: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940982: jmp 0x940986 */
  goto L_940986;
L_940984: /* 940984: fstp st(0) */
  STI(0) = ST0; FPOP();
L_940986: /* 940986: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 94098a: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 94098e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 940992: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 940996: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940998: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94099c: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 9409a3: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9409a5: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9409a9: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9409ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9409ae: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 9409b5: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9409b8: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 9409bf: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9409c2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9409c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9409c6: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9409ca: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9409ce: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 9409d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9409d4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9409d7: jne 0x940a28 */
  if (!zf) goto L_940a28;
L_9409d9: /* 9409d9: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9409dd: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 9409e1: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9409e5: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 9409e9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9409eb: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 9409ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9409f1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9409f4: jne 0x940a04 */
  if (!zf) goto L_940a04;
L_9409f6: /* 9409f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9409f7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9409f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9409fa: xor eax, eax */
  eax = 0;
/* 9409fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9409fd: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940a03: ret  */
  esp += 4; SPILL(); return;
L_940a04: /* 940a04: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940a08: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940a0c: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940a13: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940a15: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940a19: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940a1b: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940a1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940a1f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940a22: jne 0x940a92 */
  if (!zf) goto L_940a92;
L_940a24: /* 940a24: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940a26: jmp 0x940a94 */
  goto L_940a94;
L_940a28: /* 940a28: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940a2c: fchs  */
  ST0 = -ST0;
/* 940a2e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 940a32: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940a36: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 940a3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940a3c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940a3f: jp 0x940a94 */
  if (pf) goto L_940a94;
L_940a41: /* 940a41: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 940a45: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940a49: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 940a4d: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 940a51: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940a53: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 940a57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940a59: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940a5c: jp 0x940a6c */
  if (pf) goto L_940a6c;
L_940a5e: /* 940a5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940a5f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940a61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940a62: xor eax, eax */
  eax = 0;
/* 940a64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940a65: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940a6b: ret  */
  esp += 4; SPILL(); return;
L_940a6c: /* 940a6c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940a70: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 940a74: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940a7b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940a7d: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940a81: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940a83: fchs  */
  ST0 = -ST0;
/* 940a85: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940a87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940a89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940a8c: jne 0x940a92 */
  if (!zf) goto L_940a92;
L_940a8e: /* 940a8e: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940a90: jmp 0x940a94 */
  goto L_940a94;
L_940a92: /* 940a92: fstp st(0) */
  STI(0) = ST0; FPOP();
L_940a94: /* 940a94: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 940a98: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 940a9c: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 940aa0: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 940aa4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940aa6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 940aaa: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 940ab1: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 940ab3: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 940ab7: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 940aba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940abc: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 940ac3: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 940ac5: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 940acc: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 940acf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940ad1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940ad3: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 940ad7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940adb: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 940adf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940ae1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940ae4: jne 0x940b35 */
  if (!zf) goto L_940b35;
L_940ae6: /* 940ae6: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 940aea: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940aee: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 940af2: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 940af6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940af8: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 940afc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940afe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940b01: jne 0x940b11 */
  if (!zf) goto L_940b11;
L_940b03: /* 940b03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940b04: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940b06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940b07: xor eax, eax */
  eax = 0;
/* 940b09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940b0a: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940b10: ret  */
  esp += 4; SPILL(); return;
L_940b11: /* 940b11: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940b15: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940b19: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940b20: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940b22: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940b26: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940b28: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940b2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940b2c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940b2f: jne 0x940b9f */
  if (!zf) goto L_940b9f;
L_940b31: /* 940b31: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940b33: jmp 0x940ba1 */
  goto L_940ba1;
L_940b35: /* 940b35: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940b39: fchs  */
  ST0 = -ST0;
/* 940b3b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 940b3f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940b43: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 940b47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940b49: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940b4c: jp 0x940ba1 */
  if (pf) goto L_940ba1;
L_940b4e: /* 940b4e: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 940b52: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940b56: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 940b5a: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 940b5e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940b60: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 940b64: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940b66: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940b69: jp 0x940b79 */
  if (pf) goto L_940b79;
L_940b6b: /* 940b6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940b6c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940b6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940b6f: xor eax, eax */
  eax = 0;
/* 940b71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940b72: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940b78: ret  */
  esp += 4; SPILL(); return;
L_940b79: /* 940b79: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940b7d: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 940b81: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940b88: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940b8a: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940b8e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940b90: fchs  */
  ST0 = -ST0;
/* 940b92: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940b94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940b96: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940b99: jne 0x940b9f */
  if (!zf) goto L_940b9f;
L_940b9b: /* 940b9b: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940b9d: jmp 0x940ba1 */
  goto L_940ba1;
L_940b9f: /* 940b9f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_940ba1: /* 940ba1: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 940ba5: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 940ba9: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 940bad: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 940bb1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940bb3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 940bb7: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 940bbe: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 940bc0: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 940bc7: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 940bca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940bcc: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 940bd3: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 940bd5: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 940bdc: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 940bdf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940be1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940be3: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 940be7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940beb: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 940bef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940bf1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940bf4: jne 0x940c45 */
  if (!zf) goto L_940c45;
L_940bf6: /* 940bf6: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 940bfa: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940bfe: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 940c02: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 940c06: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940c08: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 940c0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940c0e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940c11: jne 0x940c21 */
  if (!zf) goto L_940c21;
L_940c13: /* 940c13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940c14: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940c16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940c17: xor eax, eax */
  eax = 0;
/* 940c19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940c1a: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940c20: ret  */
  esp += 4; SPILL(); return;
L_940c21: /* 940c21: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940c25: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940c29: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940c30: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940c32: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940c36: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940c38: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940c3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940c3c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940c3f: jne 0x940caf */
  if (!zf) goto L_940caf;
L_940c41: /* 940c41: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940c43: jmp 0x940cb1 */
  goto L_940cb1;
L_940c45: /* 940c45: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940c49: fchs  */
  ST0 = -ST0;
/* 940c4b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 940c4f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940c53: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 940c57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940c59: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940c5c: jp 0x940cb1 */
  if (pf) goto L_940cb1;
L_940c5e: /* 940c5e: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 940c62: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940c66: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 940c6a: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 940c6e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940c70: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 940c74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940c76: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940c79: jp 0x940c89 */
  if (pf) goto L_940c89;
L_940c7b: /* 940c7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940c7c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940c7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940c7f: xor eax, eax */
  eax = 0;
/* 940c81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940c82: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940c88: ret  */
  esp += 4; SPILL(); return;
L_940c89: /* 940c89: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940c8d: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 940c91: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940c98: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940c9a: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940c9e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940ca0: fchs  */
  ST0 = -ST0;
/* 940ca2: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940ca4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940ca6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940ca9: jne 0x940caf */
  if (!zf) goto L_940caf;
L_940cab: /* 940cab: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940cad: jmp 0x940cb1 */
  goto L_940cb1;
L_940caf: /* 940caf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_940cb1: /* 940cb1: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 940cb5: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 940cb9: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 940cbd: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 940cc1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940cc3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 940cc7: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 940cce: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 940cd1: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 940cd8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 940cdb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940cdd: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 940ce1: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 940ce4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 940ceb: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 940ced: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940cef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940cf1: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 940cf5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940cf9: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 940cfd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940cff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940d02: jne 0x940d53 */
  if (!zf) goto L_940d53;
L_940d04: /* 940d04: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 940d08: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 940d0c: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 940d10: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940d14: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940d16: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 940d1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940d1c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940d1f: jne 0x940d2f */
  if (!zf) goto L_940d2f;
L_940d21: /* 940d21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940d22: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940d24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940d25: xor eax, eax */
  eax = 0;
/* 940d27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940d28: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940d2e: ret  */
  esp += 4; SPILL(); return;
L_940d2f: /* 940d2f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940d33: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940d37: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940d3e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940d40: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940d44: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940d46: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940d48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940d4a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940d4d: jne 0x940dbd */
  if (!zf) goto L_940dbd;
L_940d4f: /* 940d4f: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940d51: jmp 0x940dbf */
  goto L_940dbf;
L_940d53: /* 940d53: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940d57: fchs  */
  ST0 = -ST0;
/* 940d59: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 940d5d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940d61: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 940d65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940d67: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940d6a: jp 0x940dbf */
  if (pf) goto L_940dbf;
L_940d6c: /* 940d6c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 940d70: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 940d74: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 940d78: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940d7c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940d7e: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 940d82: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940d84: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940d87: jp 0x940d97 */
  if (pf) goto L_940d97;
L_940d89: /* 940d89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940d8a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940d8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940d8d: xor eax, eax */
  eax = 0;
/* 940d8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940d90: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940d96: ret  */
  esp += 4; SPILL(); return;
L_940d97: /* 940d97: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940d9b: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 940d9f: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940da6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940da8: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940dac: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940dae: fchs  */
  ST0 = -ST0;
/* 940db0: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940db2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940db4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940db7: jne 0x940dbd */
  if (!zf) goto L_940dbd;
L_940db9: /* 940db9: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940dbb: jmp 0x940dbf */
  goto L_940dbf;
L_940dbd: /* 940dbd: fstp st(0) */
  STI(0) = ST0; FPOP();
L_940dbf: /* 940dbf: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 940dc3: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 940dc7: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 940dcb: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 940dcf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940dd1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 940dd5: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 940ddc: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 940dde: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 940de5: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 940de8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940dea: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 940dee: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 940df1: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 940df8: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 940dfa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940dfc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940dfe: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 940e02: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940e06: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 940e0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940e0c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940e0f: jne 0x940e60 */
  if (!zf) goto L_940e60;
L_940e11: /* 940e11: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 940e15: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 940e19: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 940e1d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940e21: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940e23: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 940e27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940e29: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940e2c: jne 0x940e3c */
  if (!zf) goto L_940e3c;
L_940e2e: /* 940e2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940e2f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940e31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940e32: xor eax, eax */
  eax = 0;
/* 940e34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940e35: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940e3b: ret  */
  esp += 4; SPILL(); return;
L_940e3c: /* 940e3c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940e40: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940e44: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940e4b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940e4d: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940e51: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940e53: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940e55: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940e57: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940e5a: jne 0x940eca */
  if (!zf) goto L_940eca;
L_940e5c: /* 940e5c: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940e5e: jmp 0x940ecc */
  goto L_940ecc;
L_940e60: /* 940e60: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940e64: fchs  */
  ST0 = -ST0;
/* 940e66: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 940e6a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940e6e: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 940e72: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940e74: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940e77: jp 0x940ecc */
  if (pf) goto L_940ecc;
L_940e79: /* 940e79: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 940e7d: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 940e81: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 940e85: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940e89: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940e8b: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 940e8f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940e91: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940e94: jp 0x940ea4 */
  if (pf) goto L_940ea4;
L_940e96: /* 940e96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940e97: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940e99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940e9a: xor eax, eax */
  eax = 0;
/* 940e9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940e9d: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940ea3: ret  */
  esp += 4; SPILL(); return;
L_940ea4: /* 940ea4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940ea8: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 940eac: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940eb3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940eb5: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940eb9: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940ebb: fchs  */
  ST0 = -ST0;
/* 940ebd: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940ebf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940ec1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940ec4: jne 0x940eca */
  if (!zf) goto L_940eca;
L_940ec6: /* 940ec6: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940ec8: jmp 0x940ecc */
  goto L_940ecc;
L_940eca: /* 940eca: fstp st(0) */
  STI(0) = ST0; FPOP();
L_940ecc: /* 940ecc: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 940ed0: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 940ed4: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 940ed8: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 940edc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940ede: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 940ee2: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 940ee9: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 940eeb: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 940ef2: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 940ef5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940ef7: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 940efe: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 940f01: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 940f08: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 940f0a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940f0c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 940f0e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 940f12: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940f16: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 940f1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940f1c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940f1f: jne 0x940f81 */
  if (!zf) goto L_940f81;
L_940f21: /* 940f21: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 940f25: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 940f29: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 940f2d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940f31: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940f33: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 940f37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940f39: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940f3c: jne 0x940f4c */
  if (!zf) goto L_940f4c;
L_940f3e: /* 940f3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940f3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940f41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940f42: xor eax, eax */
  eax = 0;
/* 940f44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940f45: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940f4b: ret  */
  esp += 4; SPILL(); return;
L_940f4c: /* 940f4c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940f50: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940f54: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940f5b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940f5d: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940f61: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940f63: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940f65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940f67: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940f6a: jne 0x940ff8 */
  if (!zf) goto L_940ff8;
L_940f70: /* 940f70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940f71: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940f73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940f74: mov eax, 1 */
  eax = 0x1u;
/* 940f79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940f7a: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940f80: ret  */
  esp += 4; SPILL(); return;
L_940f81: /* 940f81: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 940f85: fchs  */
  ST0 = -ST0;
/* 940f87: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 940f8b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940f8f: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 940f93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940f95: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940f98: jp 0x940ffa */
  if (pf) goto L_940ffa;
L_940f9a: /* 940f9a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 940f9e: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 940fa2: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 940fa6: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 940faa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 940fac: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 940fb0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940fb2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 940fb5: jp 0x940fc5 */
  if (pf) goto L_940fc5;
L_940fb7: /* 940fb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940fb8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 940fba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940fbb: xor eax, eax */
  eax = 0;
/* 940fbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940fbe: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940fc4: ret  */
  esp += 4; SPILL(); return;
L_940fc5: /* 940fc5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 940fc9: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 940fcd: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 940fd4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 940fd6: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 940fda: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 940fdc: fchs  */
  ST0 = -ST0;
/* 940fde: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 940fe0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 940fe2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 940fe5: jne 0x940ff8 */
  if (!zf) goto L_940ff8;
L_940fe7: /* 940fe7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940fe8: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 940fea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940feb: mov eax, 1 */
  eax = 0x1u;
/* 940ff0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 940ff1: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 940ff7: ret  */
  esp += 4; SPILL(); return;
L_940ff8: /* 940ff8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_940ffa: /* 940ffa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 940ffb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 940ffc: mov eax, 1 */
  eax = 0x1u;
/* 941001: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 941002: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941008: ret  */
  esp += 4; SPILL(); return;
}
