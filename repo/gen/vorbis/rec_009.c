#include "recomp.h"
#include "rec_mod.h"

void f_1007ab8(void) {
  LOAD_REGS();
L_1007ab8: /* 1007ab8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 1007abf: nop  */
L_1007ac0: /* 1007ac0: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007ac4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 1007acb: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 1007acf: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007ad1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007ad5: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1007ad9: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 1007add: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007ae1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007ae3: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 1007ae7: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1007aeb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1007aed: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007aef: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1007af3: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1007af7: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 1007afb: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 1007b02: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007b04: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007b07: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 1007b0b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007b0f: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1007b13: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 1007b17: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 1007b1b: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 1007b22: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007b26: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1007b2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1007b2c: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1007b30: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1007b34: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1007b38: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1007b3c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 1007b44: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 1007b48: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1007b4c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1007b54: jl 0x1007c71 */
  if ((sf != of)) goto L_1007c71;
L_1007b5a: /* 1007b5a: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007b61: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 1007b65: lea ecx, [edx + ecx*4 + 8] */
  ecx = (uint32_t)(edx + ecx*4 + 0x8u);
/* 1007b69: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007b6c: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007b70: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007b77: lea edx, [edx + edi*4 + 8] */
  edx = (uint32_t)(edx + edi*4 + 0x8u);
/* 1007b7b: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1007b7f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007b83: mov dword ptr [esp + 0x54], 3 */
  W32((uint32_t)(esp + 0x54u), 0x3u);
/* 1007b8b: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
L_1007b8f: /* 1007b8f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007b93: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007b97: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007b9a: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007b9e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007ba1: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007ba4: fadd dword ptr [edx - 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007ba7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007bab: fstp dword ptr [ecx - 0x18] */
  WF32((uint32_t)(ecx + 0xffffffe8u), ST0); FPOP();
/* 1007bae: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007bb2: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007bb5: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007bb9: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 1007bbc: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007bc0: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007bc3: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007bc7: fadd dword ptr [edx - 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007bca: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007bce: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1007bd1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007bd5: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007bd8: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007bdc: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1007bdf: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007be3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007be5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007be9: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1007beb: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007bef: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 1007bf2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007bf6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007bf8: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007bfc: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1007bff: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007c03: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 1007c06: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007c0a: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 1007c0d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007c11: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1007c14: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007c18: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 1007c1b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007c1f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007c22: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1007c26: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 1007c2a: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1007c2d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007c30: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 1007c34: add dword ptr [esp + 0x58], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 1007c39: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 1007c3e: add dword ptr [esp + 0x68], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x68u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x68u), r);
  }
/* 1007c43: add dword ptr [esp + 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 1007c48: add dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1007c4d: add dword ptr [esp + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1007c52: add dword ptr [esp + 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 1007c57: add dword ptr [esp + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 1007c5c: cmp dword ptr [esp + 0x54], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007c60: jl 0x1007b8f */
  if ((sf != of)) goto L_1007b8f;
L_1007c66: /* 1007c66: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007c6d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_1007c71: /* 1007c71: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007c75: jge 0x1007d2b */
  if ((sf == of)) goto L_1007d2b;
L_1007c7b: /* 1007c7b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007c7f: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 1007c86: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 1007c89: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007c90: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1007c94: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 1007c98: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 1007c9b: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 1007ca2: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1007ca6: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1007caa: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 1007cad: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1007cb1: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 1007cb5: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1007cbc: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 1007cbf: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 1007cc3: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1007cc7: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 1007cca: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007cce: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1007cd2: mov ecx, edi */
  ecx = edi;
/* 1007cd4: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_1007cd6: /* 1007cd6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007cda: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007cde: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007ce0: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 1007ce4: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1007ce6: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007cea: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1007cec: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1007cf0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007cf4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007cf6: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007cfa: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1007cfc: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1007d00: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007d03: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1007d07: add dword ptr [esp + 0x54], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1007d0c: add dword ptr [esp + 0x18], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 1007d11: add dword ptr [esp + 0x30], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1007d16: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007d1a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007d1d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1007d1e: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1007d22: jne 0x1007cd6 */
  if (!zf) goto L_1007cd6;
L_1007d24: /* 1007d24: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1007d2b: /* 1007d2b: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 1007d2f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1007d33: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1007d37: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1007d3b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1007d3f: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 1007d43: cmp dword ptr [esp + 0x60], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007d48: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1007d4c: jle 0x1007fab */
  if ((zf || sf != of)) goto L_1007fab;
L_1007d52: /* 1007d52: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007d59: lea ecx, [edx + edi*4 + 8] */
  ecx = (uint32_t)(edx + edi*4 + 0x8u);
/* 1007d5d: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1007d61: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 1007d65: lea edx, [edx + ecx*4 + 8] */
  edx = (uint32_t)(edx + ecx*4 + 0x8u);
/* 1007d69: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1007d6d: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007d70: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1007d74: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007d7b: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1007d7f: nop  */
L_1007d80: /* 1007d80: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1007d84: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 1007d88: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1007d8c: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007d8e: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007d92: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1007d96: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 1007d9a: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 1007d9e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007da0: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1007da4: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 1007da8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1007daa: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007dac: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 1007db0: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 1007db4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1007db8: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007dbc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007dbe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007dc1: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1007dc5: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 1007dc9: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1007dcd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1007dd1: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 1007dd5: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1007dd9: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007ddd: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1007de1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1007de3: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1007de7: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1007deb: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1007def: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 1007df3: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1007df7: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 1007dfb: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1007dff: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1007e07: jl 0x1007ef7 */
  if ((sf != of)) goto L_1007ef7;
L_1007e0d: /* 1007e0d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1007e11: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1007e15: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 1007e19: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 1007e1d: mov dword ptr [esp + 0x44], 3 */
  W32((uint32_t)(esp + 0x44u), 0x3u);
/* 1007e25: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007e29: jmp 0x1007e2f */
  goto L_1007e2f;
L_1007e2b: /* 1007e2b: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
L_1007e2f: /* 1007e2f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e33: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007e36: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 1007e39: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007e3c: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1007e3f: fadd dword ptr [eax - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffe8u)));
/* 1007e42: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 1007e45: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e49: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007e4c: fadd dword ptr [ecx - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffe8u)));
/* 1007e4f: fstp dword ptr [ecx - 0x18] */
  WF32((uint32_t)(ecx + 0xffffffe8u), ST0); FPOP();
/* 1007e52: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e56: fmul dword ptr [edi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xffffffecu)));
/* 1007e59: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 1007e5c: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1007e5f: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e63: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007e66: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 1007e69: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1007e6c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e70: fmul dword ptr [edi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff0u)));
/* 1007e73: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 1007e76: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1007e79: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e7d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007e7f: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 1007e82: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 1007e85: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e89: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1007e8c: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1007e8f: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1007e92: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e96: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 1007e99: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007e9d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007ea0: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1007ea4: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007ea8: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1007eab: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007eae: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1007eb2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1007eb6: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1007eb9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007ebc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 1007ec0: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 1007ec5: add dword ptr [esp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1007eca: add dword ptr [esp + 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 1007ecf: add dword ptr [esp + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1007ed4: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007ed8: cmp edx, dword ptr [esp + 0x9c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007edf: jl 0x1007e2b */
  if ((sf != of)) goto L_1007e2b;
L_1007ee5: /* 1007ee5: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1007eec: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1007ef0: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1007ef7: /* 1007ef7: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007efb: jge 0x1007fa1 */
  if ((sf == of)) goto L_1007fa1;
L_1007f01: /* 1007f01: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1007f08: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 1007f0c: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007f13: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 1007f16: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1007f1a: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 1007f1d: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1007f24: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007f28: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1007f2c: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 1007f2f: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007f36: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1007f3a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1007f3e: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 1007f41: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1007f45: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007f49: mov eax, edi */
  eax = edi;
/* 1007f4b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1007f4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1007f50: /* 1007f50: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1007f54: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007f58: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007f5a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1007f5e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007f61: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1007f63: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1007f65: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007f69: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007f6d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007f70: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007f73: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007f77: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1007f7b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007f7e: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1007f81: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1007f85: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1007f89: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007f8c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1007f8d: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 1007f90: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1007f94: jne 0x1007f50 */
  if (!zf) goto L_1007f50;
L_1007f96: /* 1007f96: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007f9d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_1007fa1: /* 1007fa1: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 1007fa5: jne 0x1007d80 */
  if (!zf) goto L_1007d80;
L_1007fab: /* 1007fab: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 1007faf: jne 0x1007ac0 */
  if (!zf) goto L_1007ac0;
L_1007fb5: /* 1007fb5: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 1007fb9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007fbc: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 1007fc4: jle 0x10080cc */
  if ((zf || sf != of)) goto L_10080cc;
L_1007fca: /* 1007fca: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1007fd1: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007fd4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1007fd5: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 1007fd9: jmp 0x1007fe0 */
  goto L_1007fe0;
L_1007fdb: /* 1007fdb: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1007fdf: nop  */
L_1007fe0: /* 1007fe0: add dword ptr [esp + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 1007fe4: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 1007feb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007fed: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007ff0: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1007ff4: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 1007ff8: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1007ffc: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008004: jl 0x1008070 */
  if ((sf != of)) goto L_1008070;
L_1008006: /* 1008006: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 100800d: mov dword ptr [esp + 0xc], 3 */
  W32((uint32_t)(esp + 0xcu), 0x3u);
/* 1008015: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1008018: /* 1008018: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 100801b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 100801f: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 1008022: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008025: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008029: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100802d: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 1008030: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008033: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008036: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 100803a: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 100803d: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1008041: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008044: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1008048: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100804c: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 100804f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1008051: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008054: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 1008056: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008059: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100805b: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 100805e: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1008061: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1008064: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1008067: jl 0x1008018 */
  if ((sf != of)) goto L_1008018;
L_1008069: /* 1008069: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1008070: /* 1008070: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008074: jge 0x10080be */
  if ((sf == of)) goto L_10080be;
L_1008076: /* 1008076: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 100807a: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1008081: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 1008084: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1008088: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100808c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008090: /* 1008090: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1008097: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 100809a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 100809e: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 10080a0: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 10080a7: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 10080aa: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10080ae: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10080b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10080b2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10080b4: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 10080b8: jl 0x1008090 */
  if ((sf != of)) goto L_1008090;
L_10080ba: /* 10080ba: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_10080be: /* 10080be: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10080c2: jne 0x1007fdb */
  if (!zf) goto L_1007fdb;
L_10080c8: /* 10080c8: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_10080cc: /* 10080cc: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10080cf: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 10080d6: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 10080de: jle 0x10081e6 */
  if ((zf || sf != of)) goto L_10081e6;
L_10080e4: /* 10080e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10080e5: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10080e9: jmp 0x10080ef */
  goto L_10080ef;
L_10080eb: /* 10080eb: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
L_10080ef: /* 10080ef: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 10080f3: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 10080f7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10080f9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10080fb: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10080fe: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 1008102: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1008106: mov eax, edi */
  eax = edi;
/* 1008108: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008110: jl 0x1008190 */
  if ((sf != of)) goto L_1008190;
L_1008116: /* 1008116: mov dword ptr [esp + 8], 3 */
  W32((uint32_t)(esp + 0x8u), 0x3u);
L_100811e: /* 100811e: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008121: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1008125: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008128: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100812b: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 100812f: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 1008133: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008136: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1008139: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 100813c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100813e: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008141: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008145: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 1008148: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100814a: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 100814d: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008150: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008153: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008156: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008158: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 100815b: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100815e: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008160: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008163: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008166: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008169: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 100816c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100816e: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008171: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 1008174: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008176: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008179: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 100817c: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 100817f: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008182: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008184: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008187: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100818a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100818c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100818e: jl 0x100811e */
  if ((sf != of)) goto L_100811e;
L_1008190: /* 1008190: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008194: jge 0x10081d1 */
  if ((sf == of)) goto L_10081d1;
L_1008196: /* 1008196: mov edi, esi */
  edi = esi;
/* 1008198: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 100819a: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 100819e: mov edi, edx */
  edi = edx;
/* 10081a0: sub edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10081a4: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 10081a7: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 10081aa: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
L_10081ae: /* 10081ae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10081b0: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 10081b4: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10081b6: fstp dword ptr [edi + eax] */
  WF32((uint32_t)(edi + eax), ST0); FPOP();
/* 10081b9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10081bb: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 10081bd: fstp dword ptr [edi + ecx] */
  WF32((uint32_t)(edi + ecx), ST0); FPOP();
/* 10081c0: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 10081c7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10081c9: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10081cb: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10081cf: jne 0x10081ae */
  if (!zf) goto L_10081ae;
L_10081d1: /* 10081d1: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10081d5: jne 0x10080eb */
  if (!zf) goto L_10080eb;
L_10081db: /* 10081db: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 10081e2: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_10081e6: /* 10081e6: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10081e9: je 0x10088be */
  if (zf) goto L_10088be;
L_10081ef: /* 10081ef: cmp dword ptr [esp + 0x70], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10081f3: jge 0x10083ff */
  if ((sf == of)) goto L_10083ff;
L_10081f9: /* 10081f9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10081fc: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 1008203: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 100820b: jle 0x100855b */
  if ((zf || sf != of)) goto L_100855b;
L_1008211: /* 1008211: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1008212: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 1008216: jmp 0x1008220 */
  goto L_1008220;
L_1008220: /* 1008220: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1008224: add eax, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008228: sub ecx, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100822c: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100822f: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1008233: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1008237: jle 0x10083f0 */
  if ((zf || sf != of)) goto L_10083f0;
L_100823d: /* 100823d: mov edi, eax */
  edi = eax;
/* 100823f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008241: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1008244: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008246: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008247: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 100824b: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 100824f: jmp 0x1008260 */
  goto L_1008260;
L_1008251: /* 1008251: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1008255: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1008259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008260: /* 1008260: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008263: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008265: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008268: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 100826c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008274: jl 0x1008354 */
  if ((sf != of)) goto L_1008354;
L_100827a: /* 100827a: mov edi, 3 */
  edi = 0x3u;
L_100827f: /* 100827f: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1008283: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008287: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 100828a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100828d: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008291: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1008298: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 100829c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100829f: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082a3: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 10082a6: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 10082aa: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082ad: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082b1: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 10082b4: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082b7: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10082b9: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082bd: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 10082c0: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10082c2: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082c6: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 10082c9: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10082cd: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082d1: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 10082d4: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 10082d8: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082db: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082df: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 10082e2: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082e5: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10082e7: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082eb: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 10082ee: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10082f0: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082f4: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 10082f7: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10082fb: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082ff: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008302: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1008306: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008309: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 100830d: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008310: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008313: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008315: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 1008319: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100831c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100831e: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1008322: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008325: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1008329: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 100832d: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008330: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1008334: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008337: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 100833b: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 100833e: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008341: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008343: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 1008347: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100834a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100834c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100834e: jl 0x100827f */
  if ((sf != of)) goto L_100827f;
L_1008354: /* 1008354: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008358: jge 0x10083db */
  if ((sf == of)) goto L_10083db;
L_100835e: /* 100835e: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 1008361: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1008365: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
/* 1008368: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 100836c: mov edx, esi */
  edx = esi;
/* 100836e: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1008370: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 1008374: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 100837b: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100837f: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 1008386: lea ecx, [ebx + ecx*4 - 4] */
  ecx = (uint32_t)(ebx + ecx*4 + 0xfffffffcu);
/* 100838a: lea eax, [ebx + eax*4 - 4] */
  eax = (uint32_t)(ebx + eax*4 + 0xfffffffcu);
/* 100838e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_1008392: /* 1008392: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1008394: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1008398: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 100839b: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 100839e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10083a0: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10083a3: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* 10083a6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10083aa: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10083ac: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 10083af: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10083b1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10083b5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10083b8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10083ba: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10083bc: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10083be: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10083c0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10083c4: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10083c6: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 10083ca: add dword ptr [esp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 10083ce: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10083d2: jne 0x1008392 */
  if (!zf) goto L_1008392;
L_10083d4: /* 10083d4: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10083db: /* 10083db: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10083df: jne 0x1008251 */
  if (!zf) goto L_1008251;
L_10083e5: /* 10083e5: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10083e9: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
L_10083f0: /* 10083f0: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10083f4: jne 0x1008220 */
  if (!zf) goto L_1008220;
L_10083fa: /* 10083fa: jmp 0x100855b */
  goto L_100855b;
L_10083ff: /* 10083ff: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008402: jle 0x100855b */
  if ((zf || sf != of)) goto L_100855b;
L_1008408: /* 1008408: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 100840f: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1008412: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1008416: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 100841d: lea ecx, [ebx + ecx*4 - 4] */
  ecx = (uint32_t)(ebx + ecx*4 + 0xfffffffcu);
/* 1008421: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1008425: lea ecx, [ebx - 4] */
  ecx = (uint32_t)(ebx + 0xfffffffcu);
/* 1008428: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1008429: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 100842d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008431: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
L_1008435: /* 1008435: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 1008439: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 100843d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1008440: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008442: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 1008446: add dword ptr [esp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 100844a: sub dword ptr [esp + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 100844e: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1008452: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008454: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008456: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 100845a: jle 0x1008551 */
  if ((zf || sf != of)) goto L_1008551;
L_1008460: /* 1008460: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1008464: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1008468: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 100846f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1008473: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1008477: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 100847b: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 100847f: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1008483: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
L_1008487: /* 1008487: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100848a: jle 0x1008519 */
  if ((zf || sf != of)) goto L_1008519;
L_1008490: /* 1008490: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 1008497: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 100849b: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 100849f: mov edx, esi */
  edx = esi;
/* 10084a1: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10084a3: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10084a7: lea edx, [ebp - 3] */
  edx = (uint32_t)(ebp + 0xfffffffdu);
/* 10084aa: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10084ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10084ad: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 10084b1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10084b5: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 10084b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10084c0: /* 10084c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10084c4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 10084c7: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 10084ca: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10084cd: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 10084d1: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 10084d5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10084d8: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10084db: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10084de: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 10084e2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10084e6: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 10084e9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10084eb: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10084ee: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* 10084f1: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10084f5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10084f7: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 10084fa: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10084fc: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 1008500: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 1008503: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 1008505: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1008507: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 100850b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 100850c: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 1008510: jne 0x10084c0 */
  if (!zf) goto L_10084c0;
L_1008512: /* 1008512: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1008519: /* 1008519: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 1008520: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 1008527: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008529: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 1008530: add dword ptr [esp + 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1008534: add dword ptr [esp + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1008538: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 100853c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100853e: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 1008542: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1008543: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1008547: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 100854b: jne 0x1008487 */
  if (!zf) goto L_1008487;
L_1008551: /* 1008551: dec dword ptr [esp + 0x74] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x74u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x74u), r);
  }
/* 1008555: jne 0x1008435 */
  if (!zf) goto L_1008435;
L_100855b: /* 100855b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100855d: jle 0x1008586 */
  if ((zf || sf != of)) goto L_1008586;
L_100855f: /* 100855f: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1008566: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 100856d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100856f: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
L_1008573: /* 1008573: mov edi, dword ptr [ecx + eax] */
  edi = R32((uint32_t)(ecx + eax));
/* 1008576: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 1008578: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 100857c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100857f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1008580: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008584: jne 0x1008573 */
  if (!zf) goto L_1008573;
L_1008586: /* 1008586: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
/* 100858d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008590: jle 0x10085e5 */
  if ((zf || sf != of)) goto L_10085e5;
L_1008592: /* 1008592: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1008593: mov eax, ebx */
  eax = ebx;
/* 1008595: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 1008599: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10085a0: /* 10085a0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 10085a4: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10085a7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10085a9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10085ab: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10085af: jle 0x10085d8 */
  if ((zf || sf != of)) goto L_10085d8;
L_10085b1: /* 10085b1: mov ecx, esi */
  ecx = esi;
/* 10085b3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10085b5: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 10085b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10085c0: /* 10085c0: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* 10085c3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 10085c5: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 10085cc: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10085ce: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10085d2: jne 0x10085c0 */
  if (!zf) goto L_10085c0;
L_10085d4: /* 10085d4: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
L_10085d8: /* 10085d8: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10085dc: jne 0x10085a0 */
  if (!zf) goto L_10085a0;
L_10085de: /* 10085de: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
L_10085e5: /* 10085e5: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 10085e9: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 10085ec: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10085ee: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10085f0: jle 0x100870b */
  if ((zf || sf != of)) goto L_100870b;
L_10085f6: /* 10085f6: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10085f9: jle 0x10088be */
  if ((zf || sf != of)) goto L_10088be;
L_10085ff: /* 10085ff: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1008603: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1008606: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 100860a: mov edi, dword ptr [esp + 0xa8] */
  edi = R32((uint32_t)(esp + 0xa8u));
/* 1008611: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1008614: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008618: lea ecx, [esi - 4] */
  ecx = (uint32_t)(esi + 0xfffffffcu);
/* 100861b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100861f: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 1008626: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1008627: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 100862e: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 1008632: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
L_1008636: /* 1008636: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100863a: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100863e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008640: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008644: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1008648: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100864a: mov dword ptr [esp + 0x70], edi */
  W32((uint32_t)(esp + 0x70u), edi);
/* 100864e: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 1008652: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1008654: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008656: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 100865a: jle 0x10086f8 */
  if ((zf || sf != of)) goto L_10086f8;
L_1008660: /* 1008660: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 1008664: mov ecx, edi */
  ecx = edi;
/* 1008666: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 100866a: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 100866e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_1008672: /* 1008672: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008675: jle 0x10086ce */
  if ((zf || sf != of)) goto L_10086ce;
L_1008677: /* 1008677: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100867b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100867f: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1008683: mov edi, ebx */
  edi = ebx;
/* 1008685: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008687: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 100868b: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 100868e: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008690: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_1008691: /* 1008691: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 1008694: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008697: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 100869a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100869d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100869f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10086a2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10086a3: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 10086a6: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 10086aa: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10086ae: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10086b0: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 10086b3: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10086b7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10086b9: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 10086bb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10086be: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10086c1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10086c3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10086c5: jne 0x1008691 */
  if (!zf) goto L_1008691;
L_10086c7: /* 10086c7: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10086ce: /* 10086ce: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10086d2: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 10086d6: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10086dd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10086df: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10086e3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10086e7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10086e9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 10086ea: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 10086ee: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 10086f2: jne 0x1008672 */
  if (!zf) goto L_1008672;
L_10086f8: /* 10086f8: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10086fc: jne 0x1008636 */
  if (!zf) goto L_1008636;
L_1008702: /* 1008702: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008703: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008704: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100870a: ret  */
  esp += 4; SPILL(); return;
L_100870b: /* 100870b: xor eax, eax */
  eax = 0;
/* 100870d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008710: jle 0x10088be */
  if ((zf || sf != of)) goto L_10088be;
L_1008716: /* 1008716: mov edi, dword ptr [esp + 0xa8] */
  edi = R32((uint32_t)(esp + 0xa8u));
/* 100871d: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1008720: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
/* 1008727: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1008728: mov dword ptr [esp + 0x74], edi */
  W32((uint32_t)(esp + 0x74u), edi);
/* 100872c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008730: /* 1008730: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 1008737: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008739: add eax, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100873d: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008740: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1008744: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1008748: jle 0x10088b4 */
  if ((zf || sf != of)) goto L_10088b4;
L_100874e: /* 100874e: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1008751: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008753: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008754: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1008758: jmp 0x1008760 */
  goto L_1008760;
L_100875a: /* 100875a: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100875e: mov edi, edi */
  edi = edi;
L_1008760: /* 1008760: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008763: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008766: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008769: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 100876d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008775: jl 0x1008831 */
  if ((sf != of)) goto L_1008831;
L_100877b: /* 100877b: mov edi, 3 */
  edi = 0x3u;
L_1008780: /* 1008780: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008783: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008787: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100878b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100878e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008790: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008794: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008797: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 100879e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10087a1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087a3: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087a7: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087aa: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087ad: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087af: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087b5: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087b8: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087ba: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087bd: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087c1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087c3: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087c6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087c8: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087cc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087cf: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087d2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087d4: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087da: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087dd: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087df: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087e2: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087e6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087e8: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087eb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087ed: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087f1: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087f4: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087f7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087f9: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087ff: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008802: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008804: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008807: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100880b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100880d: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008810: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008812: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1008816: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008819: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 100881c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100881e: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1008822: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008824: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008827: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008829: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100882b: jl 0x1008780 */
  if ((sf != of)) goto L_1008780;
L_1008831: /* 1008831: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008835: jge 0x10088a2 */
  if ((sf == of)) goto L_10088a2;
L_1008837: /* 1008837: lea edi, [ebx + eax*4] */
  edi = (uint32_t)(ebx + eax*4);
/* 100883a: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 100883e: mov edi, ebx */
  edi = ebx;
/* 1008840: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008842: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1008846: lea eax, [esi + eax*4 - 4] */
  eax = (uint32_t)(esi + eax*4 + 0xfffffffcu);
/* 100884a: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 100884e: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008852: jmp 0x1008860 */
  goto L_1008860;
L_1008854: /* 1008854: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 1008858: jmp 0x1008860 */
  goto L_1008860;
L_1008860: /* 1008860: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008863: lea edx, [ebp*4] */
  edx = (uint32_t)(ebp*4);
/* 100886a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 100886c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100886e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008871: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008873: fstp dword ptr [eax + edi] */
  WF32((uint32_t)(eax + edi), ST0); FPOP();
/* 1008876: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 100887a: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 100887d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008880: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008882: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 1008884: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008888: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 100888a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100888c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 1008890: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1008891: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008895: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008899: jne 0x1008854 */
  if (!zf) goto L_1008854;
L_100889b: /* 100889b: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10088a2: /* 10088a2: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10088a6: jne 0x100875a */
  if (!zf) goto L_100875a;
L_10088ac: /* 10088ac: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 10088b0: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_10088b4: /* 10088b4: dec dword ptr [esp + 0x74] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x74u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x74u), r);
  }
/* 10088b8: jne 0x1008730 */
  if (!zf) goto L_1008730;
L_10088be: /* 10088be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10088bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10088c0: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10088c6: ret  */
  esp += 4; SPILL(); return;
}

void f_1008218(void) {
  LOAD_REGS();
L_1008218: /* 1008218: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 100821f: nop  */
L_1008220: /* 1008220: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1008224: add eax, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008228: sub ecx, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100822c: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100822f: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1008233: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1008237: jle 0x10083f0 */
  if ((zf || sf != of)) goto L_10083f0;
L_100823d: /* 100823d: mov edi, eax */
  edi = eax;
/* 100823f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008241: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1008244: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008246: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008247: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 100824b: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 100824f: jmp 0x1008260 */
  goto L_1008260;
L_1008251: /* 1008251: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1008255: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1008259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008260: /* 1008260: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008263: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008265: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008268: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 100826c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008274: jl 0x1008354 */
  if ((sf != of)) goto L_1008354;
L_100827a: /* 100827a: mov edi, 3 */
  edi = 0x3u;
L_100827f: /* 100827f: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1008283: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008287: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 100828a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100828d: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008291: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1008298: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 100829c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100829f: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082a3: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 10082a6: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 10082aa: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082ad: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082b1: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 10082b4: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082b7: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10082b9: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082bd: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 10082c0: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10082c2: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082c6: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 10082c9: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10082cd: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082d1: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 10082d4: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 10082d8: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082db: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082df: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 10082e2: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082e5: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10082e7: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082eb: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 10082ee: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10082f0: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082f4: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 10082f7: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10082fb: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082ff: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008302: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1008306: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008309: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 100830d: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008310: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008313: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008315: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 1008319: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100831c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100831e: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1008322: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008325: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1008329: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 100832d: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008330: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1008334: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008337: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 100833b: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 100833e: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008341: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008343: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 1008347: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100834a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100834c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100834e: jl 0x100827f */
  if ((sf != of)) goto L_100827f;
L_1008354: /* 1008354: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008358: jge 0x10083db */
  if ((sf == of)) goto L_10083db;
L_100835e: /* 100835e: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 1008361: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1008365: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
/* 1008368: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 100836c: mov edx, esi */
  edx = esi;
/* 100836e: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1008370: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 1008374: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 100837b: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100837f: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 1008386: lea ecx, [ebx + ecx*4 - 4] */
  ecx = (uint32_t)(ebx + ecx*4 + 0xfffffffcu);
/* 100838a: lea eax, [ebx + eax*4 - 4] */
  eax = (uint32_t)(ebx + eax*4 + 0xfffffffcu);
/* 100838e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_1008392: /* 1008392: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1008394: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1008398: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 100839b: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 100839e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10083a0: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10083a3: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* 10083a6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10083aa: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10083ac: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 10083af: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10083b1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10083b5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10083b8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10083ba: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10083bc: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10083be: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10083c0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10083c4: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10083c6: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 10083ca: add dword ptr [esp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 10083ce: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10083d2: jne 0x1008392 */
  if (!zf) goto L_1008392;
L_10083d4: /* 10083d4: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10083db: /* 10083db: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10083df: jne 0x1008251 */
  if (!zf) goto L_1008251;
L_10083e5: /* 10083e5: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10083e9: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
L_10083f0: /* 10083f0: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10083f4: jne 0x1008220 */
  if (!zf) goto L_1008220;
L_10083fa: /* 10083fa: jmp 0x100855b */
  goto L_100855b;
L_100855b: /* 100855b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100855d: jle 0x1008586 */
  if ((zf || sf != of)) goto L_1008586;
L_100855f: /* 100855f: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1008566: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 100856d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100856f: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
L_1008573: /* 1008573: mov edi, dword ptr [ecx + eax] */
  edi = R32((uint32_t)(ecx + eax));
/* 1008576: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 1008578: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 100857c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100857f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1008580: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008584: jne 0x1008573 */
  if (!zf) goto L_1008573;
L_1008586: /* 1008586: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
/* 100858d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008590: jle 0x10085e5 */
  if ((zf || sf != of)) goto L_10085e5;
L_1008592: /* 1008592: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1008593: mov eax, ebx */
  eax = ebx;
/* 1008595: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 1008599: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10085a0: /* 10085a0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 10085a4: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10085a7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10085a9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10085ab: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10085af: jle 0x10085d8 */
  if ((zf || sf != of)) goto L_10085d8;
L_10085b1: /* 10085b1: mov ecx, esi */
  ecx = esi;
/* 10085b3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10085b5: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 10085b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10085c0: /* 10085c0: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* 10085c3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 10085c5: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 10085cc: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10085ce: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10085d2: jne 0x10085c0 */
  if (!zf) goto L_10085c0;
L_10085d4: /* 10085d4: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
L_10085d8: /* 10085d8: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10085dc: jne 0x10085a0 */
  if (!zf) goto L_10085a0;
L_10085de: /* 10085de: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
L_10085e5: /* 10085e5: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 10085e9: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 10085ec: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10085ee: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10085f0: jle 0x100870b */
  if ((zf || sf != of)) goto L_100870b;
L_10085f6: /* 10085f6: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10085f9: jle 0x10088be */
  if ((zf || sf != of)) goto L_10088be;
L_10085ff: /* 10085ff: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1008603: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1008606: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 100860a: mov edi, dword ptr [esp + 0xa8] */
  edi = R32((uint32_t)(esp + 0xa8u));
/* 1008611: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1008614: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008618: lea ecx, [esi - 4] */
  ecx = (uint32_t)(esi + 0xfffffffcu);
/* 100861b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100861f: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 1008626: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1008627: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 100862e: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 1008632: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
L_1008636: /* 1008636: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100863a: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100863e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008640: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008644: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1008648: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100864a: mov dword ptr [esp + 0x70], edi */
  W32((uint32_t)(esp + 0x70u), edi);
/* 100864e: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 1008652: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1008654: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008656: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 100865a: jle 0x10086f8 */
  if ((zf || sf != of)) goto L_10086f8;
L_1008660: /* 1008660: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 1008664: mov ecx, edi */
  ecx = edi;
/* 1008666: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 100866a: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 100866e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_1008672: /* 1008672: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008675: jle 0x10086ce */
  if ((zf || sf != of)) goto L_10086ce;
L_1008677: /* 1008677: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100867b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100867f: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1008683: mov edi, ebx */
  edi = ebx;
/* 1008685: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008687: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 100868b: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 100868e: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008690: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_1008691: /* 1008691: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 1008694: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008697: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 100869a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100869d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100869f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10086a2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10086a3: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 10086a6: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 10086aa: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10086ae: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10086b0: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 10086b3: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10086b7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10086b9: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 10086bb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10086be: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10086c1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10086c3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10086c5: jne 0x1008691 */
  if (!zf) goto L_1008691;
L_10086c7: /* 10086c7: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10086ce: /* 10086ce: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10086d2: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 10086d6: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10086dd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10086df: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10086e3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10086e7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10086e9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 10086ea: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 10086ee: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 10086f2: jne 0x1008672 */
  if (!zf) goto L_1008672;
L_10086f8: /* 10086f8: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10086fc: jne 0x1008636 */
  if (!zf) goto L_1008636;
L_1008702: /* 1008702: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008703: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008704: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100870a: ret  */
  esp += 4; SPILL(); return;
L_100870b: /* 100870b: xor eax, eax */
  eax = 0;
/* 100870d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008710: jle 0x10088be */
  if ((zf || sf != of)) goto L_10088be;
L_1008716: /* 1008716: mov edi, dword ptr [esp + 0xa8] */
  edi = R32((uint32_t)(esp + 0xa8u));
/* 100871d: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1008720: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
/* 1008727: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1008728: mov dword ptr [esp + 0x74], edi */
  W32((uint32_t)(esp + 0x74u), edi);
/* 100872c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008730: /* 1008730: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 1008737: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008739: add eax, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100873d: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008740: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1008744: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1008748: jle 0x10088b4 */
  if ((zf || sf != of)) goto L_10088b4;
L_100874e: /* 100874e: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1008751: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008753: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008754: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1008758: jmp 0x1008760 */
  goto L_1008760;
L_100875a: /* 100875a: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100875e: mov edi, edi */
  edi = edi;
L_1008760: /* 1008760: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008763: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008766: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008769: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 100876d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008775: jl 0x1008831 */
  if ((sf != of)) goto L_1008831;
L_100877b: /* 100877b: mov edi, 3 */
  edi = 0x3u;
L_1008780: /* 1008780: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008783: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008787: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100878b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100878e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008790: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008794: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008797: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 100879e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10087a1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087a3: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087a7: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087aa: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087ad: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087af: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087b5: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087b8: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087ba: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087bd: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087c1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087c3: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087c6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087c8: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087cc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087cf: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087d2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087d4: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087da: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087dd: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087df: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087e2: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087e6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087e8: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087eb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087ed: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087f1: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087f4: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087f7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087f9: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087ff: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008802: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008804: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008807: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100880b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100880d: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008810: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008812: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1008816: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008819: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 100881c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100881e: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1008822: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008824: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008827: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008829: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100882b: jl 0x1008780 */
  if ((sf != of)) goto L_1008780;
L_1008831: /* 1008831: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008835: jge 0x10088a2 */
  if ((sf == of)) goto L_10088a2;
L_1008837: /* 1008837: lea edi, [ebx + eax*4] */
  edi = (uint32_t)(ebx + eax*4);
/* 100883a: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 100883e: mov edi, ebx */
  edi = ebx;
/* 1008840: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008842: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1008846: lea eax, [esi + eax*4 - 4] */
  eax = (uint32_t)(esi + eax*4 + 0xfffffffcu);
/* 100884a: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 100884e: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008852: jmp 0x1008860 */
  goto L_1008860;
L_1008854: /* 1008854: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 1008858: jmp 0x1008860 */
  goto L_1008860;
L_1008860: /* 1008860: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008863: lea edx, [ebp*4] */
  edx = (uint32_t)(ebp*4);
/* 100886a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 100886c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100886e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008871: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008873: fstp dword ptr [eax + edi] */
  WF32((uint32_t)(eax + edi), ST0); FPOP();
/* 1008876: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 100887a: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 100887d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008880: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008882: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 1008884: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008888: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 100888a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100888c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 1008890: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1008891: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008895: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008899: jne 0x1008854 */
  if (!zf) goto L_1008854;
L_100889b: /* 100889b: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10088a2: /* 10088a2: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10088a6: jne 0x100875a */
  if (!zf) goto L_100875a;
L_10088ac: /* 10088ac: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 10088b0: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_10088b4: /* 10088b4: dec dword ptr [esp + 0x74] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x74u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x74u), r);
  }
/* 10088b8: jne 0x1008730 */
  if (!zf) goto L_1008730;
L_10088be: /* 10088be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10088bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10088c0: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10088c6: ret  */
  esp += 4; SPILL(); return;
}

void f_100885a(void) {
  LOAD_REGS();
  goto L_100885a;
L_1008730: /* 1008730: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 1008737: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008739: add eax, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100873d: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008740: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1008744: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1008748: jle 0x10088b4 */
  if ((zf || sf != of)) goto L_10088b4;
L_100874e: /* 100874e: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1008751: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008753: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008754: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1008758: jmp 0x1008760 */
  goto L_1008760;
L_100875a: /* 100875a: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100875e: mov edi, edi */
  edi = edi;
L_1008760: /* 1008760: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008763: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008766: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008769: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 100876d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008775: jl 0x1008831 */
  if ((sf != of)) goto L_1008831;
L_100877b: /* 100877b: mov edi, 3 */
  edi = 0x3u;
L_1008780: /* 1008780: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008783: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008787: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100878b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100878e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008790: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008794: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008797: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 100879e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10087a1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087a3: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087a7: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087aa: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087ad: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087af: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087b5: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087b8: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087ba: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087bd: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087c1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087c3: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087c6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087c8: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087cc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087cf: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087d2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087d4: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087da: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087dd: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087df: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087e2: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087e6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087e8: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087eb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087ed: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087f1: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087f4: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087f7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087f9: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087ff: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008802: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008804: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008807: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100880b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100880d: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008810: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008812: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1008816: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008819: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 100881c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100881e: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1008822: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008824: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008827: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008829: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100882b: jl 0x1008780 */
  if ((sf != of)) goto L_1008780;
L_1008831: /* 1008831: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008835: jge 0x10088a2 */
  if ((sf == of)) goto L_10088a2;
L_1008837: /* 1008837: lea edi, [ebx + eax*4] */
  edi = (uint32_t)(ebx + eax*4);
/* 100883a: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 100883e: mov edi, ebx */
  edi = ebx;
/* 1008840: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008842: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1008846: lea eax, [esi + eax*4 - 4] */
  eax = (uint32_t)(esi + eax*4 + 0xfffffffcu);
/* 100884a: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 100884e: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008852: jmp 0x1008860 */
  goto L_1008860;
L_1008854: /* 1008854: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 1008858: jmp 0x1008860 */
  goto L_1008860;
L_100885a: /* 100885a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1008860: /* 1008860: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008863: lea edx, [ebp*4] */
  edx = (uint32_t)(ebp*4);
/* 100886a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 100886c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100886e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008871: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008873: fstp dword ptr [eax + edi] */
  WF32((uint32_t)(eax + edi), ST0); FPOP();
/* 1008876: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 100887a: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 100887d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008880: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008882: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 1008884: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008888: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 100888a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100888c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 1008890: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1008891: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008895: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008899: jne 0x1008854 */
  if (!zf) goto L_1008854;
L_100889b: /* 100889b: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10088a2: /* 10088a2: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10088a6: jne 0x100875a */
  if (!zf) goto L_100875a;
L_10088ac: /* 10088ac: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 10088b0: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_10088b4: /* 10088b4: dec dword ptr [esp + 0x74] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x74u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x74u), r);
  }
/* 10088b8: jne 0x1008730 */
  if (!zf) goto L_1008730;
L_10088be: /* 10088be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10088bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10088c0: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10088c6: ret  */
  esp += 4; SPILL(); return;
}

void f_10088d0(void) {
  LOAD_REGS();
L_10088d0: /* 10088d0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10088d3: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 10088d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10088d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10088d9: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 10088dd: mov ecx, 1 */
  ecx = 0x1u;
/* 10088e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10088e3: mov esi, ecx */
  esi = ecx;
/* 10088e5: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 10088ed: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 10088f1: jle 0x1008abb */
  if ((zf || sf != of)) goto L_1008abb;
L_10088f7: /* 10088f7: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10088fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10088fb: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 10088ff: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1008903: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_1008904: /* 1008904: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1008908: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 100890a: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 100890e: mov edi, ebx */
  edi = ebx;
/* 1008910: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 1008913: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1008914: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x1008914);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1008916: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 100891a: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 100891e: mov edi, eax */
  edi = eax;
/* 1008920: mov edx, edi */
  edx = edi;
/* 1008922: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 1008925: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008928: je 0x1008a1e */
  if (zf) goto L_1008a1e;
L_100892e: /* 100892e: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008931: je 0x10089dd */
  if (zf) goto L_10089dd;
L_1008937: /* 1008937: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100893a: je 0x100898d */
  if (zf) goto L_100898d;
L_100893c: /* 100893c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1008940: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008942: lea eax, [ebp + esi*4 - 4] */
  eax = (uint32_t)(ebp + esi*4 + 0xfffffffcu);
/* 1008946: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008947: je 0x1008953 */
  if (zf) goto L_1008953;
L_1008949: /* 1008949: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 100894d: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 1008951: jmp 0x100895b */
  goto L_100895b;
L_1008953: /* 1008953: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 1008957: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
L_100895b: /* 100895b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 100895c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100895d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100895e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100895f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008960: mov ebx, eax */
  ebx = eax;
/* 1008962: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008963: call 0x1007380 */
  esp -= 4; W32(esp, 0x1008968u); SPILL(); f_1007380(); if (g_unwind) return; RELOAD();
/* 1008968: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 100896c: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 1008970: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008973: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008976: jne 0x1008a67 */
  if (!zf) goto L_1008a67;
L_100897c: /* 100897c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1008980: mov ecx, edi */
  ecx = edi;
/* 1008982: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008984: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 1008988: jmp 0x1008a67 */
  goto L_1008a67;
L_100898d: /* 100898d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008991: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008993: lea eax, [edi + esi] */
  eax = (uint32_t)(edi + esi);
/* 1008996: je 0x10089ad */
  if (zf) goto L_10089ad;
L_1008998: /* 1008998: lea edx, [ebp + eax*4 - 4] */
  edx = (uint32_t)(ebp + eax*4 + 0xfffffffcu);
/* 100899c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100899d: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10089a1: lea eax, [ebp + esi*4 - 4] */
  eax = (uint32_t)(ebp + esi*4 + 0xfffffffcu);
/* 10089a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10089a6: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 10089aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10089ab: jmp 0x10089c0 */
  goto L_10089c0;
L_10089ad: /* 10089ad: lea eax, [ebp + eax*4 - 4] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffffcu);
/* 10089b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10089b2: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 10089b6: lea edx, [ebp + esi*4 - 4] */
  edx = (uint32_t)(ebp + esi*4 + 0xfffffffcu);
/* 10089ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10089bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10089bc: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_10089c0: /* 10089c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10089c1: call 0x1006350 */
  esp -= 4; W32(esp, 0x10089c6u); SPILL(); f_1006350(); if (g_unwind) return; RELOAD();
/* 10089c6: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10089ca: mov ecx, 1 */
  ecx = 0x1u;
/* 10089cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10089d2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10089d4: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10089d8: jmp 0x1008a67 */
  goto L_1008a67;
L_10089dd: /* 10089dd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10089e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10089e3: je 0x10089f5 */
  if (zf) goto L_10089f5;
L_10089e5: /* 10089e5: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10089e9: lea edx, [ebp + esi*4 - 4] */
  edx = (uint32_t)(ebp + esi*4 + 0xfffffffcu);
/* 10089ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10089ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10089ef: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 10089f3: jmp 0x1008a03 */
  goto L_1008a03;
L_10089f5: /* 10089f5: lea eax, [ebp + esi*4 - 4] */
  eax = (uint32_t)(ebp + esi*4 + 0xfffffffcu);
/* 10089f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10089fa: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10089fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10089ff: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
L_1008a03: /* 1008a03: mov edx, edi */
  edx = edi;
/* 1008a05: call 0x1006070 */
  esp -= 4; W32(esp, 0x1008a0au); SPILL(); f_1006070(); if (g_unwind) return; RELOAD();
/* 1008a0a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1008a0e: mov ecx, 1 */
  ecx = 0x1u;
/* 1008a13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008a16: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008a18: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 1008a1c: jmp 0x1008a67 */
  goto L_1008a67;
L_1008a1e: /* 1008a1e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008a22: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008a24: lea eax, [edi + esi] */
  eax = (uint32_t)(edi + esi);
/* 1008a27: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 1008a2a: lea edx, [ebp + edx*4 - 4] */
  edx = (uint32_t)(ebp + edx*4 + 0xfffffffcu);
/* 1008a2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1008a2f: lea eax, [ebp + eax*4 - 4] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffffcu);
/* 1008a33: lea edx, [ebp + esi*4 - 4] */
  edx = (uint32_t)(ebp + esi*4 + 0xfffffffcu);
/* 1008a37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008a38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1008a39: mov edx, edi */
  edx = edi;
/* 1008a3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008a3c: je 0x1008a48 */
  if (zf) goto L_1008a48;
L_1008a3e: /* 1008a3e: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1008a42: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 1008a46: jmp 0x1008a50 */
  goto L_1008a50;
L_1008a48: /* 1008a48: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 1008a4c: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
L_1008a50: /* 1008a50: call 0x10068a0 */
  esp -= 4; W32(esp, 0x1008a55u); SPILL(); f_10068a0(); if (g_unwind) return; RELOAD();
/* 1008a55: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1008a59: mov eax, 1 */
  eax = 0x1u;
/* 1008a5e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008a61: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1008a63: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_1008a67: /* 1008a67: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1008a6b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1008a6f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 1008a73: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 1008a74: imul ebx, edi */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edi);
  ebx = (uint32_t)r;
  }
/* 1008a77: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1008a79: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008a7c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1008a7d: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 1008a81: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 1008a85: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1008a89: jne 0x1008904 */
  if (!zf) goto L_1008904;
L_1008a8f: /* 1008a8f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1008a93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008a95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008a96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008a97: je 0x1008abb */
  if (zf) goto L_1008abb;
L_1008a99: /* 1008a99: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1008a9d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008a9f: jle 0x1008abb */
  if ((zf || sf != of)) goto L_1008abb;
L_1008aa1: /* 1008aa1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1008aa5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 1008aa9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008aab: jmp 0x1008ab0 */
  goto L_1008ab0;
L_1008ab0: /* 1008ab0: mov esi, dword ptr [ecx + eax] */
  esi = R32((uint32_t)(ecx + eax));
/* 1008ab3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 1008ab5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008ab8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1008ab9: jne 0x1008ab0 */
  if (!zf) goto L_1008ab0;
L_1008abb: /* 1008abb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008abc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008abd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008ac0: ret  */
  esp += 4; SPILL(); return;
}

void f_1008aad(void) {
  LOAD_REGS();
L_1008aad: /* 1008aad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1008ab0: /* 1008ab0: mov esi, dword ptr [ecx + eax] */
  esi = R32((uint32_t)(ecx + eax));
/* 1008ab3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 1008ab5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008ab8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1008ab9: jne 0x1008ab0 */
  if (!zf) goto L_1008ab0;
L_1008abb: /* 1008abb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008abc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008abd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008ac0: ret  */
  esp += 4; SPILL(); return;
}

void f_1008ad0(void) {
  LOAD_REGS();
L_1008ad0: /* 1008ad0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 1008ad4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1008ad6: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008ad9: je 0x1008af5 */
  if (zf) goto L_1008af5;
L_1008adb: /* 1008adb: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 1008ade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008adf: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 1008ae2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008ae3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008ae4: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 1008ae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008ae8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1008aec: call 0x1005ec0 */
  esp -= 4; W32(esp, 0x1008af1u); SPILL(); f_1005ec0(); if (g_unwind) return; RELOAD();
/* 1008af1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008af4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_1008af5: /* 1008af5: ret  */
  esp += 4; SPILL(); return;
}

void f_1008b00(void) {
  LOAD_REGS();
L_1008b00: /* 1008b00: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 1008b04: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1008b06: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008b09: je 0x1008b26 */
  if (zf) goto L_1008b26;
L_1008b0b: /* 1008b0b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 1008b0e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 1008b11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008b12: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 1008b15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008b16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008b17: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1008b1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008b1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008b1d: call 0x10088d0 */
  esp -= 4; W32(esp, 0x1008b22u); SPILL(); f_10088d0(); if (g_unwind) return; RELOAD();
/* 1008b22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008b25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_1008b26: /* 1008b26: ret  */
  esp += 4; SPILL(); return;
}

void f_1008b30(void) {
  LOAD_REGS();
L_1008b30: /* 1008b30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008b31: mov ebx, dword ptr [0x100a038] */
  ebx = R32((uint32_t)(0x100a038u));
/* 1008b37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008b38: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 1008b3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008b3d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1008b41: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 1008b44: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1008b46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008b47: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 1008b49: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1008b4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1008b4b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1008b4d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 1008b4f: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 1008b52: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1008b54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1008b54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008b57: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008b5a: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 1008b5d: je 0x1008b70 */
  if (zf) goto L_1008b70;
L_1008b5f: /* 1008b5f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 1008b62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008b63: lea edx, [ecx + esi*4] */
  edx = (uint32_t)(ecx + esi*4);
/* 1008b66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1008b67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008b68: call 0x1003bf0 */
  esp -= 4; W32(esp, 0x1008b6du); SPILL(); f_1003bf0(); if (g_unwind) return; RELOAD();
/* 1008b6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1008b70: /* 1008b70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008b71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008b72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008b73: ret  */
  esp += 4; SPILL(); return;
}

void f_1008b80(void) {
  LOAD_REGS();
L_1008b80: /* 1008b80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008b81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 1008b85: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008b87: je 0x1008bb5 */
  if (zf) goto L_1008bb5;
L_1008b89: /* 1008b89: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1008b8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008b8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008b8f: mov edi, dword ptr [0x100a040] */
  edi = R32((uint32_t)(0x100a040u));
/* 1008b95: je 0x1008b9d */
  if (zf) goto L_1008b9d;
L_1008b97: /* 1008b97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008b98: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1008b9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1008b9a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1008b9d: /* 1008b9d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1008ba0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008ba2: je 0x1008baa */
  if (zf) goto L_1008baa;
L_1008ba4: /* 1008ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008ba5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1008ba7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1008ba7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1008baa: /* 1008baa: xor eax, eax */
  eax = 0;
/* 1008bac: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1008bae: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1008bb1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 1008bb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_1008bb5: /* 1008bb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008bb6: ret  */
  esp += 4; SPILL(); return;
}

void f_1008bc0(void) {
  LOAD_REGS();
L_1008bc0: /* 1008bc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008bc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008bc2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1008bc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008bc4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 1008bc8: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 1008bcb: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 1008bce: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 1008bd1: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 1008bd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008bd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008bd6: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008bda: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1008bde: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 1008be1: call 0xff28b0 */
  esp -= 4; W32(esp, 0x1008be6u); SPILL(); f_ff28b0(); if (g_unwind) return; RELOAD();
/* 1008be6: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 1008bea: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1008bed: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 1008bef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008bf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008bf1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008bf2: call 0x1009166 */
  esp -= 4; W32(esp, 0x1008bf7u); SPILL(); f_1009166(); if (g_unwind) return; RELOAD();
/* 1008bf7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1008bf9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008bfa: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008bffu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008bff: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008c02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008c04: je 0x1008c11 */
  if (zf) goto L_1008c11;
L_1008c06: /* 1008c06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008c07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008c08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008c09: mov eax, 0xffffff79 */
  eax = 0xffffff79u;
/* 1008c0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008c0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1008c10: ret  */
  esp += 4; SPILL(); return;
L_1008c11: /* 1008c11: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008c15: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 1008c18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008c19: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008c1a: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008c1fu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008c1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008c22: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008c25: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1008c29: je 0x1008c5f */
  if (zf) goto L_1008c5f;
L_1008c2b: /* 1008c2b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1008c2f: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 1008c32: mov edx, dword ptr [ecx + eax*4 + 0x24] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x24u));
/* 1008c36: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1008c38: xor ecx, ecx */
  ecx = 0;
/* 1008c3a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008c3c: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 1008c3f: je 0x1008c6a */
  if (zf) goto L_1008c6a;
L_1008c41: /* 1008c41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1008c43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008c44: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008c49u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008c49: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1008c4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008c4c: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 1008c4f: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008c54u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008c54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008c57: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008c5a: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 1008c5d: jne 0x1008c70 */
  if (!zf) goto L_1008c70;
L_1008c5f: /* 1008c5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008c60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008c61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008c62: mov eax, 0xffffff78 */
  eax = 0xffffff78u;
/* 1008c67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008c68: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1008c69: ret  */
  esp += 4; SPILL(); return;
L_1008c6a: /* 1008c6a: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 1008c6d: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
L_1008c70: /* 1008c70: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 1008c73: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 1008c76: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 1008c79: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 1008c7c: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 1008c7f: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 1008c82: sub edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edx = r;
  }
/* 1008c85: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1008c88: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 1008c8b: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 1008c8e: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 1008c91: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 1008c94: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1008c98: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 1008c9b: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 1008c9e: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 1008ca1: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 1008ca4: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1008ca7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1008ca8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008ca9: call 0xff2840 */
  esp -= 4; W32(esp, 0x1008caeu); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 1008cae: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1008cb0: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 1008cb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008cb6: xor edi, edi */
  edi = 0;
/* 1008cb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008cba: jle 0x1008cdd */
  if ((zf || sf != of)) goto L_1008cdd;
L_1008cbc: /* 1008cbc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008cc0: /* 1008cc0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 1008cc3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1008cc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008cc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008cc8: call 0xff2840 */
  esp -= 4; W32(esp, 0x1008ccdu); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 1008ccd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1008ccf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008cd2: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 1008cd5: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 1008cd8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008cd9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008cdb: jl 0x1008cc0 */
  if ((sf != of)) goto L_1008cc0;
L_1008cdd: /* 1008cdd: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1008ce1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1008ce5: mov edx, dword ptr [eax + ecx*4 + 0x24] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x24u));
/* 1008ce9: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 1008cec: mov eax, dword ptr [eax + edx*4 + 0x124] */
  eax = R32((uint32_t)(eax + edx*4 + 0x124u));
/* 1008cf3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008cf7: mov edx, dword ptr [edx + 0x1c] */
  edx = R32((uint32_t)(edx + 0x1cu));
/* 1008cfa: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 1008cfd: mov eax, dword ptr [eax*4 + 0x100d108] */
  eax = R32((uint32_t)(eax*4 + 0x100d108u));
/* 1008d04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008d05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008d06: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x1008d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1008d09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008d0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008d0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008d0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008d0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008d10: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1008d11: ret  */
  esp += 4; SPILL(); return;
}

void f_1008d20(void) {
  LOAD_REGS();
L_1008d20: /* 1008d20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008d21: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1008d22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008d23: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 1008d27: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 1008d2a: mov ebp, dword ptr [eax + 0x68] */
  ebp = R32((uint32_t)(eax + 0x68u));
/* 1008d2d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 1008d30: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 1008d33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008d34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008d35: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1008d39: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 1008d3c: call 0xff28b0 */
  esp -= 4; W32(esp, 0x1008d41u); SPILL(); f_ff28b0(); if (g_unwind) return; RELOAD();
/* 1008d41: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 1008d45: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 1008d48: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1008d4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1008d4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008d4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008d4d: call 0x1009166 */
  esp -= 4; W32(esp, 0x1008d52u); SPILL(); f_1009166(); if (g_unwind) return; RELOAD();
/* 1008d52: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1008d54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008d55: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008d5au); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008d5a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008d5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008d5f: je 0x1008d6b */
  if (zf) goto L_1008d6b;
L_1008d61: /* 1008d61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008d62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008d63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008d64: mov eax, 0xffffff79 */
  eax = 0xffffff79u;
/* 1008d69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008d6a: ret  */
  esp += 4; SPILL(); return;
L_1008d6b: /* 1008d6b: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 1008d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008d6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008d70: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008d75u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008d75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008d78: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008d7b: je 0x1008db1 */
  if (zf) goto L_1008db1;
L_1008d7d: /* 1008d7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1008d81: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 1008d84: mov eax, dword ptr [edx + eax*4 + 0x24] */
  eax = R32((uint32_t)(edx + eax*4 + 0x24u));
/* 1008d88: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1008d8a: xor ebp, ebp */
  ebp = 0;
/* 1008d8c: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008d8e: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 1008d91: je 0x1008dbb */
  if (zf) goto L_1008dbb;
L_1008d93: /* 1008d93: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1008d95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008d96: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008d9bu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008d9b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1008d9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008d9e: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 1008da1: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008da6u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008da6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008da9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008dac: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 1008daf: jne 0x1008dc1 */
  if (!zf) goto L_1008dc1;
L_1008db1: /* 1008db1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008db2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008db3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008db4: mov eax, 0xffffff78 */
  eax = 0xffffff78u;
/* 1008db9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008dba: ret  */
  esp += 4; SPILL(); return;
L_1008dbb: /* 1008dbb: mov dword ptr [esi + 0x18], ebp */
  W32((uint32_t)(esi + 0x18u), ebp);
/* 1008dbe: mov dword ptr [esi + 0x20], ebp */
  W32((uint32_t)(esi + 0x20u), ebp);
L_1008dc1: /* 1008dc1: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 1008dc4: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 1008dc7: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 1008dca: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 1008dcd: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 1008dd0: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 1008dd3: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 1008dd6: sbb ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 1008dd8: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 1008ddb: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 1008dde: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 1008de1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008de2: mov dword ptr [esi + 0x24], ebp */
  W32((uint32_t)(esi + 0x24u), ebp);
/* 1008de5: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 1008de7: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 1008dea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008deb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008dec: xor eax, eax */
  eax = 0;
/* 1008dee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008def: ret  */
  esp += 4; SPILL(); return;
}

void f_1008df0(void) {
  LOAD_REGS();
L_1008df0: /* 1008df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 1008df4: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1008df7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008df8: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 1008dfb: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1008dff: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1008e02: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1008e04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008e05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1008e06: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 1008e0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1008e0b: call 0x1009166 */
  esp -= 4; W32(esp, 0x1008e10u); SPILL(); f_1009166(); if (g_unwind) return; RELOAD();
/* 1008e10: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 1008e14: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1008e16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008e17: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008e1cu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008e1c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008e1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008e21: je 0x1008e2d */
  if (zf) goto L_1008e2d;
L_1008e23: /* 1008e23: mov eax, 0xffffff79 */
  eax = 0xffffff79u;
/* 1008e28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008e29: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008e2c: ret  */
  esp += 4; SPILL(); return;
L_1008e2d: /* 1008e2d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1008e30: xor ecx, ecx */
  ecx = 0;
/* 1008e32: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008e35: jle 0x1008e3f */
  if ((zf || sf != of)) goto L_1008e3f;
L_1008e37: /* 1008e37: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1008e39: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1008e3a: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008e3d: jg 0x1008e37 */
  if ((!zf && sf == of)) goto L_1008e37;
L_1008e3f: /* 1008e3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1008e40: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 1008e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1008e45: call 0x1009154 */
  esp -= 4; W32(esp, 0x1008e4au); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1008e4a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008e4d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1008e50: jne 0x1008e5c */
  if (!zf) goto L_1008e5c;
L_1008e52: /* 1008e52: mov eax, 0xffffff78 */
  eax = 0xffffff78u;
/* 1008e57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008e58: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008e5b: ret  */
  esp += 4; SPILL(); return;
L_1008e5c: /* 1008e5c: mov eax, dword ptr [esi + eax*4 + 0x24] */
  eax = R32((uint32_t)(esi + eax*4 + 0x24u));
/* 1008e60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1008e62: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
/* 1008e65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008e66: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008e69: ret  */
  esp += 4; SPILL(); return;
}

void f_1008e70(void) {
  LOAD_REGS();
L_1008e70: /* 1008e70: mov eax, 0x100a6b8 */
  eax = 0x100a6b8u;
/* 1008e75: ret  */
  esp += 4; SPILL(); return;
}

void f_1008e80(void) {
  LOAD_REGS();
L_1008e80: /* 1008e80: ret  */
  esp += 4; SPILL(); return;
}

void f_1008e90(void) {
  LOAD_REGS();
L_1008e90: /* 1008e90: xor eax, eax */
  eax = 0;
/* 1008e92: ret  */
  esp += 4; SPILL(); return;
}

void f_1008ea0(void) {
  LOAD_REGS();
L_1008ea0: /* 1008ea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1008ea1: mov ebp, esp */
  ebp = esp;
/* 1008ea3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1008ea6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1008ea9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008eaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008eab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008eac: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 1008eaf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1008eb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008eb2: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0x1008eb8u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* 1008eb8: mov ebx, eax */
  ebx = eax;
/* 1008eba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1008ebd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008ec0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1008ec2: je 0x1008ed7 */
  if (zf) goto L_1008ed7;
L_1008ec4: /* 1008ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008ec5: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0x1008ecbu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 1008ecb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008ece: xor eax, eax */
  eax = 0;
/* 1008ed0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008ed1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008ed2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008ed3: mov esp, ebp */
  esp = ebp;
/* 1008ed5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008ed6: ret  */
  esp += 4; SPILL(); return;
L_1008ed7: /* 1008ed7: xor esi, esi */
  esi = 0;
/* 1008ed9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008edb: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 1008edf: jle 0x1008f5e */
  if ((zf || sf != of)) goto L_1008f5e;
L_1008ee1: /* 1008ee1: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1008ee4: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1008ee8: jmp 0x1008ef0 */
  goto L_1008ef0;
L_1008ef0: /* 1008ef0: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1008ef4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1008ef7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008efb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008eff: fadd dword ptr [0x100a1ac] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1acu)));
/* 1008f05: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 1008f09: fmul dword ptr [0x100a168] */
  ST0 = ST0 * (F32((uint32_t)(0x100a168u)));
/* 1008f0f: fdiv qword ptr [0x100a678] */
  ST0 = ST0 / (F64((uint32_t)(0x100a678u)));
/* 1008f15: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008f19: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008f1d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1008f20: call 0x100923e */
  esp -= 4; W32(esp, 0x1008f25u); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* 1008f25: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008f29: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008f2d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 1008f31: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008f35: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008f39: fmul dword ptr [0x100a6bc] */
  ST0 = ST0 * (F32((uint32_t)(0x100a6bcu)));
/* 1008f3f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008f43: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008f47: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1008f4a: call 0x100923e */
  esp -= 4; W32(esp, 0x1008f4fu); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* 1008f4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008f52: fstp dword ptr [ebx + esi*4] */
  WF32((uint32_t)(ebx + esi*4), ST0); FPOP();
/* 1008f55: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1008f56: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008f58: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 1008f5c: jl 0x1008ef0 */
  if ((sf != of)) goto L_1008ef0;
L_1008f5e: /* 1008f5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008f60: mov eax, ebx */
  eax = ebx;
/* 1008f62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008f63: mov esp, ebp */
  esp = ebp;
/* 1008f65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008f66: ret  */
  esp += 4; SPILL(); return;
}

void f_1008eea(void) {
  LOAD_REGS();
L_1008eea: /* 1008eea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1008ef0: /* 1008ef0: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1008ef4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1008ef7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008efb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008eff: fadd dword ptr [0x100a1ac] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1acu)));
/* 1008f05: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 1008f09: fmul dword ptr [0x100a168] */
  ST0 = ST0 * (F32((uint32_t)(0x100a168u)));
/* 1008f0f: fdiv qword ptr [0x100a678] */
  ST0 = ST0 / (F64((uint32_t)(0x100a678u)));
/* 1008f15: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008f19: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008f1d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1008f20: call 0x100923e */
  esp -= 4; W32(esp, 0x1008f25u); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* 1008f25: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008f29: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008f2d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 1008f31: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008f35: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008f39: fmul dword ptr [0x100a6bc] */
  ST0 = ST0 * (F32((uint32_t)(0x100a6bcu)));
/* 1008f3f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1008f43: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1008f47: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1008f4a: call 0x100923e */
  esp -= 4; W32(esp, 0x1008f4fu); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* 1008f4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1008f52: fstp dword ptr [ebx + esi*4] */
  WF32((uint32_t)(ebx + esi*4), ST0); FPOP();
/* 1008f55: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1008f56: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008f58: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 1008f5c: jl 0x1008ef0 */
  if ((sf != of)) goto L_1008ef0;
L_1008f5e: /* 1008f5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1008f60: mov eax, ebx */
  eax = ebx;
/* 1008f62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1008f63: mov esp, ebp */
  esp = ebp;
/* 1008f65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008f66: ret  */
  esp += 4; SPILL(); return;
}

void f_1008f70(void) {
  LOAD_REGS();
L_1008f70: /* 1008f70: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1008f73: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1008f77: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1008f7b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1008f7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1008f80: mov ebx, eax */
  ebx = eax;
/* 1008f82: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1008f83: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 1008f87: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ebx = r;
  }
/* 1008f89: sbb ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 1008f8b: and ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 1008f8d: mov ebp, dword ptr [ecx + eax*4] */
  ebp = R32((uint32_t)(ecx + eax*4));
/* 1008f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1008f91: mov esi, eax */
  esi = eax;
/* 1008f93: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 1008f95: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 1008f97: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 1008f99: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 1008f9c: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 1008fa0: mov eax, ebp */
  eax = ebp;
/* 1008fa2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1008fa3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1008fa6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008fa8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1008fa9: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 1008fac: mov ecx, eax */
  ecx = eax;
/* 1008fae: mov eax, edi */
  eax = edi;
/* 1008fb0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1008fb1: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1008fb4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008fb6: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1008fb9: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 1008fbc: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 1008fc0: mov edi, ecx */
  edi = ecx;
/* 1008fc2: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008fc4: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1008fc8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1008fc9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1008fcb: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 1008fcf: mov ecx, eax */
  ecx = eax;
/* 1008fd1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1008fd5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1008fd6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1008fd9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008fdb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1008fde: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 1008fe2: mov eax, ebp */
  eax = ebp;
/* 1008fe4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1008fe5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1008fe7: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1008feb: mov ebp, eax */
  ebp = eax;
/* 1008fed: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1008ff1: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 1008ff3: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1008ff5: add ebp, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1008ff9: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1008ffd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1008ffe: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1009000: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1009002: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 1009004: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* 1009007: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1009009: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100900b: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 100900f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1009013: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 1009017: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 100901b: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 100901f: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 1009027: jle 0x1009041 */
  if ((zf || sf != of)) goto L_1009041;
L_1009029: /* 1009029: mov ecx, edi */
  ecx = edi;
/* 100902b: xor eax, eax */
  eax = 0;
/* 100902d: mov edi, edx */
  edi = edx;
/* 100902f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1009031: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1009035: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1009039: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 100903d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_1009041: /* 1009041: cmp dword ptr [esp + 0x30], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1009045: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1009049: jge 0x1009086 */
  if ((sf == of)) goto L_1009086;
L_100904b: /* 100904b: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
L_1009053: /* 1009053: mov edx, dword ptr [edi + ebx*4] */
  edx = R32((uint32_t)(edi + ebx*4));
/* 1009056: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 100905a: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 100905d: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1009061: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1009065: fmul dword ptr [edx + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edx + eax*4)));
/* 1009068: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1009069: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 100906d: fstp dword ptr [edx + eax*4 - 4] */
  WF32((uint32_t)(edx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1009071: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1009075: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1009078: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 100907c: cmp dword ptr [esp + 0x30], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1009080: jl 0x1009053 */
  if ((sf != of)) goto L_1009053;
L_1009082: /* 1009082: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_1009086: /* 1009086: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 1009089: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 100908d: mov ebx, eax */
  ebx = eax;
/* 100908f: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1009091: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1009094: jl 0x10090f6 */
  if ((sf != of)) goto L_10090f6;
L_1009096: /* 1009096: lea eax, [ebp + 3] */
  eax = (uint32_t)(ebp + 0x3u);
/* 1009099: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 100909d: lea eax, [edx + ebp*4 + 8] */
  eax = (uint32_t)(edx + ebp*4 + 0x8u);
L_10090a1: /* 10090a1: mov edx, dword ptr [edi + esi*4] */
  edx = R32((uint32_t)(edi + esi*4));
/* 10090a4: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 10090a7: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 10090ab: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10090ae: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10090b1: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10090b4: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10090b7: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 10090ba: mov edx, dword ptr [edi + esi*4] */
  edx = R32((uint32_t)(edi + esi*4));
/* 10090bd: fld dword ptr [edx + ecx*4 + 0xc] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0xcu)); FPUSH(v); }
/* 10090c1: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 10090c4: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10090c7: mov edx, dword ptr [edi + esi*4] */
  edx = R32((uint32_t)(edi + esi*4));
/* 10090ca: fld dword ptr [edx + ecx*4 + 8] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0x8u)); FPUSH(v); }
/* 10090ce: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 10090d1: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10090d4: mov edx, dword ptr [edi + esi*4] */
  edx = R32((uint32_t)(edi + esi*4));
/* 10090d7: fld dword ptr [edx + ecx*4 + 4] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0x4u)); FPUSH(v); }
/* 10090db: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10090df: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 10090e2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10090e5: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10090e7: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 10090eb: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 10090ee: jl 0x10090a1 */
  if ((sf != of)) goto L_10090a1;
L_10090f0: /* 10090f0: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10090f4: mov eax, ebx */
  eax = ebx;
L_10090f6: /* 10090f6: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10090f8: jge 0x1009115 */
  if ((sf == of)) goto L_1009115;
L_10090fa: /* 10090fa: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10090fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1009100: /* 1009100: mov ebx, dword ptr [edi + esi*4] */
  ebx = R32((uint32_t)(edi + esi*4));
/* 1009103: fld dword ptr [ecx + ebx] */
  { double v = F32((uint32_t)(ecx + ebx)); FPUSH(v); }
/* 1009106: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1009109: fmul dword ptr [edx + ebp*4] */
  ST0 = ST0 * (F32((uint32_t)(edx + ebp*4)));
/* 100910c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 100910d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100910f: fstp dword ptr [edx + ebp*4 - 4] */
  WF32((uint32_t)(edx + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* 1009113: jl 0x1009100 */
  if ((sf != of)) goto L_1009100;
L_1009115: /* 1009115: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1009119: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100911b: jge 0x1009126 */
  if ((sf == of)) goto L_1009126;
L_100911d: /* 100911d: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100911f: lea edi, [edx + ebp*4] */
  edi = (uint32_t)(edx + ebp*4);
/* 1009122: xor eax, eax */
  eax = 0;
/* 1009124: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_1009126: /* 1009126: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1009127: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1009128: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1009129: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100912a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100912d: ret  */
  esp += 4; SPILL(); return;
}

void f_1009130(void) {
  LOAD_REGS();
L_1009130: /* 1009130: jmp dword ptr [0x100a090] */
  SPILL(); f_fe13d0(); return; /* ogg!oggpack_bytes */
}

void f_1009136(void) {
  LOAD_REGS();
L_1009136: /* 1009136: jmp dword ptr [0x100a08c] */
  SPILL(); f_fe1400(); return; /* ogg!oggpack_get_buffer */
}

void f_100913c(void) {
  LOAD_REGS();
L_100913c: /* 100913c: jmp dword ptr [0x100a088] */
  SPILL(); f_fe10c0(); return; /* ogg!oggpack_write */
}

void f_1009142(void) {
  LOAD_REGS();
L_1009142: /* 1009142: jmp dword ptr [0x100a084] */
  SPILL(); f_fe1040(); return; /* ogg!oggpack_reset */
}

void f_1009148(void) {
  LOAD_REGS();
L_1009148: /* 1009148: jmp dword ptr [0x100a080] */
  SPILL(); f_fe1000(); return; /* ogg!oggpack_writeinit */
}

void f_100914e(void) {
  LOAD_REGS();
L_100914e: /* 100914e: jmp dword ptr [0x100a07c] */
  SPILL(); f_fe1060(); return; /* ogg!oggpack_writeclear */
}

void f_1009154(void) {
  LOAD_REGS();
L_1009154: /* 1009154: jmp dword ptr [0x100a078] */
  SPILL(); f_fe12d0(); return; /* ogg!oggpack_read */
}

void f_100915a(void) {
  LOAD_REGS();
L_100915a: /* 100915a: jmp dword ptr [0x100a074] */
  SPILL(); f_fe1280(); return; /* ogg!oggpack_adv */
}

void f_1009160(void) {
  LOAD_REGS();
L_1009160: /* 1009160: jmp dword ptr [0x100a070] */
  SPILL(); f_fe11c0(); return; /* ogg!oggpack_look */
}

void f_1009166(void) {
  LOAD_REGS();
L_1009166: /* 1009166: jmp dword ptr [0x100a06c] */
  SPILL(); f_fe1090(); return; /* ogg!oggpack_readinit */
}

void f_100916c(void) {
  LOAD_REGS();
L_100916c: /* 100916c: jmp dword ptr [0x100a068] */
  SPILL(); f_fe13f0(); return; /* ogg!oggpack_bits */
}

void f_1009172(void) {
  LOAD_REGS();
L_1009172: /* 1009172: jmp dword ptr [0x100a02c] */
  SPILL(); f_4082f7(); return; /* MSVCR70!log */
}

void f_1009178(void) {
  LOAD_REGS();
L_1009178: /* 1009178: jmp dword ptr [0x100a030] */
  SPILL(); f_40802a(); return; /* MSVCR70!atan */
}

void f_1009180(void) {
  LOAD_REGS();
L_1009180: /* 1009180: jmp dword ptr [0x100a034] */
  SPILL(); f_408593(); return; /* MSVCR70!pow */
}

void f_1009188(void) {
  LOAD_REGS();
L_1009188: /* 1009188: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1009189: mov ebp, esp */
  ebp = esp;
/* 100918b: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 100918e: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1009191: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 1009193: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 1009197: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* 100919b: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100919f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10091a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10091a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10091a9: je 0x10091e7 */
  if (zf) goto L_10091e7;
L_10091ab: /* 10091ab: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10091ad: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 10091af: jns 0x10091cf */
  if (!sf) goto L_10091cf;
L_10091b1: /* 10091b1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 10091b4: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 10091b7: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 10091bd: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 10091c3: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* 10091c6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10091ca: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 10091cd: jmp 0x10091fb */
  goto L_10091fb;
L_10091cf: /* 10091cf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 10091d2: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 10091d5: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 10091db: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 10091de: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10091e2: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 10091e5: jmp 0x10091fb */
  goto L_10091fb;
L_10091e7: /* 10091e7: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10091eb: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10091f1: jne 0x10091ab */
  if (!zf) goto L_10091ab;
L_10091f3: /* 10091f3: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10091f7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_10091fb: /* 10091fb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 10091fc: ret  */
  esp += 4; SPILL(); return;
}

void f_1009200(void) {
  LOAD_REGS();
L_1009200: /* 1009200: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1009205: jae 0x1009215 */
  if (!cf) goto L_1009215;
L_1009207: /* 1009207: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1009209: add eax, esp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100920b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100920e: test dword ptr [eax], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 1009210: xchg esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  esp = b;
  eax = a;
  }
/* 1009211: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1009213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1009214: ret  */
  esp += 4; SPILL(); return;
L_1009215: /* 1009215: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1009216: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
L_100921a: /* 100921a: sub ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1009220: sub eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1009225: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 1009227: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 100922c: jae 0x100921a */
  if (!cf) goto L_100921a;
L_100922e: /* 100922e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1009230: mov eax, esp */
  eax = esp;
/* 1009232: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 1009234: mov esp, ecx */
  esp = ecx;
/* 1009236: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1009238: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 100923b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100923c: ret  */
  esp += 4; SPILL(); return;
}

void f_100923e(void) {
  LOAD_REGS();
L_100923e: /* 100923e: jmp dword ptr [0x100a04c] */
  SPILL(); f_40882f(); return; /* MSVCR70!sin */
}

void f_1009244(void) {
  LOAD_REGS();
L_1009244: /* 1009244: jmp dword ptr [0x100a050] */
  SPILL(); f_408165(); return; /* MSVCR70!cos */
}

void f_100924a(void) {
  LOAD_REGS();
L_100924a: /* 100924a: jmp dword ptr [0x100a058] */
  SPILL(); f_4088dd(); return; /* MSVCR70!sqrt */
}

void f_1009250(void) {
  LOAD_REGS();
L_1009250: /* 1009250: jmp dword ptr [0x100a028] */
  SPILL(); f_40823b(); return; /* MSVCR70!exp */
}

void f_1009256(void) {
  LOAD_REGS();
L_1009256: /* 1009256: jmp dword ptr [0x100a024] */
  SPILL(); f_433ed6(); return; /* MSVCR70!fabs */
}

void f_100925c(void) {
  LOAD_REGS();
L_100925c: /* 100925c: jmp dword ptr [0x100a020] */
  SPILL(); f_407ea8(); return; /* MSVCR70!acos */
}

void f_1009262(void) {
  LOAD_REGS();
L_1009262: /* 1009262: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1009266: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1009268: jne 0x1009278 */
  if (!zf) goto L_1009278;
L_100926a: /* 100926a: cmp dword ptr [0x100d1f4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1f4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1009270: jle 0x10092a0 */
  if ((zf || sf != of)) goto L_10092a0;
L_1009272: /* 1009272: dec dword ptr [0x100d1f4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1f4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x100d1f4u), r);
  }
L_1009278: /* 1009278: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100927b: mov ecx, dword ptr [0x100a014] */
  ecx = R32((uint32_t)(0x100a014u));
/* 1009281: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1009283: mov dword ptr [0x100d1f8], ecx */
  W32((uint32_t)(0x100d1f8u), ecx);
/* 1009289: jne 0x10092da */
  if (!zf) goto L_10092da;
L_100928b: /* 100928b: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 1009290: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1009296u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1009296: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1009298: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1009299: mov dword ptr [0x100d200], eax */
  W32((uint32_t)(0x100d200u), eax);
/* 100929e: jne 0x10092a4 */
  if (!zf) goto L_10092a4;
L_10092a0: /* 10092a0: xor eax, eax */
  eax = 0;
/* 10092a2: jmp 0x100931d */
  goto L_100931d;
L_10092a4: /* 10092a4: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 10092a7: mov eax, dword ptr [0x100d200] */
  eax = R32((uint32_t)(0x100d200u));
/* 10092ac: mov dword ptr [0x100d1fc], eax */
  W32((uint32_t)(0x100d1fcu), eax);
/* 10092b1: call 0x10093fc */
  esp -= 4; W32(esp, 0x10092b6u); SPILL(); f_10093fc(); if (g_unwind) return; RELOAD();
/* 10092b6: push 0x1009440 */
  { uint32_t v = 0x1009440u; esp -= 4; W32(esp, v); }
/* 10092bb: call 0x10093ea */
  esp -= 4; W32(esp, 0x10092c0u); SPILL(); f_10093ea(); if (g_unwind) return; RELOAD();
/* 10092c0: mov dword ptr [esp], 0x100b004 */
  W32((uint32_t)(esp), 0x100b004u);
/* 10092c7: push 0x100b000 */
  { uint32_t v = 0x100b000u; esp -= 4; W32(esp, v); }
/* 10092cc: call 0x10093be */
  esp -= 4; W32(esp, 0x10092d1u); SPILL(); f_10093be(); if (g_unwind) return; RELOAD();
/* 10092d1: inc dword ptr [0x100d1f4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1f4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x100d1f4u), r);
  }
/* 10092d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10092d8: jmp 0x1009319 */
  goto L_1009319;
L_10092da: /* 10092da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10092dc: jne 0x100931a */
  if (!zf) goto L_100931a;
L_10092de: /* 10092de: mov eax, dword ptr [0x100d200] */
  eax = R32((uint32_t)(0x100d200u));
/* 10092e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10092e5: je 0x100931a */
  if (zf) goto L_100931a;
L_10092e7: /* 10092e7: jmp 0x10092fc */
  goto L_10092fc;
L_10092e9: /* 10092e9: mov ecx, dword ptr [0x100d1fc] */
  ecx = R32((uint32_t)(0x100d1fcu));
/* 10092ef: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10092f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10092f3: je 0x10092fc */
  if (zf) goto L_10092fc;
L_10092f5: /* 10092f5: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0x10092f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10092f7: mov eax, dword ptr [0x100d200] */
  eax = R32((uint32_t)(0x100d200u));
L_10092fc: /* 10092fc: sub dword ptr [0x100d1fc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1fcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0x100d1fcu), r);
  }
/* 1009303: cmp dword ptr [0x100d1fc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1fcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1009309: jae 0x10092e9 */
  if (!cf) goto L_10092e9;
L_100930b: /* 100930b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100930c: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0x1009312u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 1009312: and dword ptr [0x100d200], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d200u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x100d200u), r);
  }
L_1009319: /* 1009319: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_100931a: /* 100931a: xor eax, eax */
  eax = 0;
/* 100931c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_100931d: /* 100931d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_1009320(void) {
  LOAD_REGS();
L_1009320: /* 1009320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1009321: mov ebp, esp */
  ebp = esp;
/* 1009323: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1009324: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1009327: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1009328: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 100932b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100932d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 100932e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 1009331: jne 0x100933c */
  if (!zf) goto L_100933c;
L_1009333: /* 1009333: cmp dword ptr [0x100d1f4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1f4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100933a: jmp 0x1009362 */
  goto L_1009362;
L_100933c: /* 100933c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100933f: je 0x1009346 */
  if (zf) goto L_1009346;
L_1009341: /* 1009341: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1009344: jne 0x1009368 */
  if (!zf) goto L_1009368;
L_1009346: /* 1009346: mov eax, dword ptr [0x100d204] */
  eax = R32((uint32_t)(0x100d204u));
/* 100934b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100934d: je 0x1009358 */
  if (zf) goto L_1009358;
L_100934f: /* 100934f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1009350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1009351: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1009352: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x1009354u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1009354: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1009356: je 0x1009364 */
  if (zf) goto L_1009364;
L_1009358: /* 1009358: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1009359: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 100935a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 100935b: call 0x1009262 */
  esp -= 4; W32(esp, 0x1009360u); SPILL(); f_1009262(); if (g_unwind) return; RELOAD();
/* 1009360: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_1009362: /* 1009362: jne 0x1009368 */
  if (!zf) goto L_1009368;
L_1009364: /* 1009364: xor eax, eax */
  eax = 0;
/* 1009366: jmp 0x10093b6 */
  goto L_10093b6;
L_1009368: /* 1009368: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1009369: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 100936a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 100936b: call 0x1009484 */
  esp -= 4; W32(esp, 0x1009370u); SPILL(); f_1009484(); if (g_unwind) return; RELOAD();
/* 1009370: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1009373: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 1009376: jne 0x1009384 */
  if (!zf) goto L_1009384;
L_1009378: /* 1009378: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100937a: jne 0x10093b3 */
  if (!zf) goto L_10093b3;
L_100937c: /* 100937c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 100937d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100937e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 100937f: call 0x1009262 */
  esp -= 4; W32(esp, 0x1009384u); SPILL(); f_1009262(); if (g_unwind) return; RELOAD();
L_1009384: /* 1009384: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1009386: je 0x100938d */
  if (zf) goto L_100938d;
L_1009388: /* 1009388: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100938b: jne 0x10093b3 */
  if (!zf) goto L_10093b3;
L_100938d: /* 100938d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 100938e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 100938f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1009390: call 0x1009262 */
  esp -= 4; W32(esp, 0x1009395u); SPILL(); f_1009262(); if (g_unwind) return; RELOAD();
/* 1009395: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1009397: jne 0x100939c */
  if (!zf) goto L_100939c;
L_1009399: /* 1009399: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_100939c: /* 100939c: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10093a0: je 0x10093b3 */
  if (zf) goto L_10093b3;
L_10093a2: /* 10093a2: mov eax, dword ptr [0x100d204] */
  eax = R32((uint32_t)(0x100d204u));
/* 10093a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10093a9: je 0x10093b3 */
  if (zf) goto L_10093b3;
L_10093ab: /* 10093ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10093ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10093ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10093ae: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x10093b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10093b0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_10093b3: /* 10093b3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_10093b6: /* 10093b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10093b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10093b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10093b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10093ba: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_10093be(void) {
  LOAD_REGS();
L_10093be: /* 10093be: jmp dword ptr [0x100a018] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_10093c4(void) {
  LOAD_REGS();
L_10093c4: /* 10093c4: cmp dword ptr [0x100d200], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d200u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10093cb: jne 0x10093d3 */
  if (!zf) goto L_10093d3;
L_10093cd: /* 10093cd: jmp dword ptr [0x100a00c] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_10093d3: /* 10093d3: push 0x100d1fc */
  { uint32_t v = 0x100d1fcu; esp -= 4; W32(esp, v); }
/* 10093d8: push 0x100d200 */
  { uint32_t v = 0x100d200u; esp -= 4; W32(esp, v); }
/* 10093dd: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 10093e1: call 0x10094a4 */
  esp -= 4; W32(esp, 0x10093e6u); SPILL(); f_10094a4(); if (g_unwind) return; RELOAD();
/* 10093e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10093e9: ret  */
  esp += 4; SPILL(); return;
}

void f_10093ea(void) {
  LOAD_REGS();
L_10093ea: /* 10093ea: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 10093ee: call 0x10093c4 */
  esp -= 4; W32(esp, 0x10093f3u); SPILL(); f_10093c4(); if (g_unwind) return; RELOAD();
/* 10093f3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 10093f5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 10093f7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 10093f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10093fa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10093fb: ret  */
  esp += 4; SPILL(); return;
}

void f_10093fc(void) {
  LOAD_REGS();
L_10093fc: /* 10093fc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 10093fe: push 0x100a6c0 */
  { uint32_t v = 0x100a6c0u; esp -= 4; W32(esp, v); }
/* 1009403: call 0x10094ac */
  esp -= 4; W32(esp, 0x1009408u); SPILL(); f_10094ac(); if (g_unwind) return; RELOAD();
/* 1009408: mov dword ptr [ebp - 0x1c], 0x100a6e0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x100a6e0u);
L_100940f: /* 100940f: cmp dword ptr [ebp - 0x1c], 0x100a6e0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x100a6e0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1009416: jae 0x100943a */
  if (!cf) goto L_100943a;
L_1009418: /* 1009418: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 100941c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 100941f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1009421: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1009423: je 0x1009430 */
  if (zf) goto L_1009430;
L_1009425: /* 1009425: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x1009427u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1009427: jmp 0x1009430 */
  goto L_1009430;
L_1009430: /* 1009430: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1009434: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 1009438: jmp 0x100940f */
  goto L_100940f;
L_100943a: /* 100943a: call 0x10094e7 */
  esp -= 4; W32(esp, 0x100943fu); SPILL(); f_10094e7(); if (g_unwind) return; RELOAD();
/* 100943f: ret  */
  esp += 4; SPILL(); return;
}

void f_1009429(void) {
  LOAD_REGS();
L_1009429: /* 1009429: xor eax, eax */
  eax = 0;
/* 100942b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 100942c: ret  */
  esp += 4; SPILL(); return;
}

void f_100942d(void) {
  LOAD_REGS();
  goto L_100942d;
L_100940f: /* 100940f: cmp dword ptr [ebp - 0x1c], 0x100a6e0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x100a6e0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1009416: jae 0x100943a */
  if (!cf) goto L_100943a;
L_1009418: /* 1009418: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 100941c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 100941f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1009421: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1009423: je 0x1009430 */
  if (zf) goto L_1009430;
L_1009425: /* 1009425: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x1009427u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1009427: jmp 0x1009430 */
  goto L_1009430;
L_100942d: /* 100942d: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_1009430: /* 1009430: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1009434: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 1009438: jmp 0x100940f */
  goto L_100940f;
L_100943a: /* 100943a: call 0x10094e7 */
  esp -= 4; W32(esp, 0x100943fu); SPILL(); f_10094e7(); if (g_unwind) return; RELOAD();
/* 100943f: ret  */
  esp += 4; SPILL(); return;
}

void f_1009440(void) {
  LOAD_REGS();
L_1009440: /* 1009440: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1009442: push 0x100a6d0 */
  { uint32_t v = 0x100a6d0u; esp -= 4; W32(esp, v); }
/* 1009447: call 0x10094ac */
  esp -= 4; W32(esp, 0x100944cu); SPILL(); f_10094ac(); if (g_unwind) return; RELOAD();
/* 100944c: mov dword ptr [ebp - 0x1c], 0x100a6e8 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x100a6e8u);
L_1009453: /* 1009453: cmp dword ptr [ebp - 0x1c], 0x100a6e8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x100a6e8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 100945a: jae 0x100947e */
  if (!cf) goto L_100947e;
L_100945c: /* 100945c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1009460: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1009463: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1009465: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1009467: je 0x1009474 */
  if (zf) goto L_1009474;
L_1009469: /* 1009469: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x100946bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 100946b: jmp 0x1009474 */
  goto L_1009474;
L_1009474: /* 1009474: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1009478: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 100947c: jmp 0x1009453 */
  goto L_1009453;
L_100947e: /* 100947e: call 0x10094e7 */
  esp -= 4; W32(esp, 0x1009483u); SPILL(); f_10094e7(); if (g_unwind) return; RELOAD();
/* 1009483: ret  */
  esp += 4; SPILL(); return;
}

void f_100946d(void) {
  LOAD_REGS();
L_100946d: /* 100946d: xor eax, eax */
  eax = 0;
/* 100946f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1009470: ret  */
  esp += 4; SPILL(); return;
}

void f_1009471(void) {
  LOAD_REGS();
  goto L_1009471;
L_1009453: /* 1009453: cmp dword ptr [ebp - 0x1c], 0x100a6e8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x100a6e8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 100945a: jae 0x100947e */
  if (!cf) goto L_100947e;
L_100945c: /* 100945c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1009460: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1009463: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1009465: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1009467: je 0x1009474 */
  if (zf) goto L_1009474;
L_1009469: /* 1009469: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x100946bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 100946b: jmp 0x1009474 */
  goto L_1009474;
L_1009471: /* 1009471: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_1009474: /* 1009474: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1009478: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 100947c: jmp 0x1009453 */
  goto L_1009453;
L_100947e: /* 100947e: call 0x10094e7 */
  esp -= 4; W32(esp, 0x1009483u); SPILL(); f_10094e7(); if (g_unwind) return; RELOAD();
/* 1009483: ret  */
  esp += 4; SPILL(); return;
}

void f_1009484(void) {
  LOAD_REGS();
L_1009484: /* 1009484: cmp dword ptr [esp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1009489: jne 0x100949e */
  if (!zf) goto L_100949e;
L_100948b: /* 100948b: cmp dword ptr [0x100d204], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d204u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1009492: jne 0x100949e */
  if (!zf) goto L_100949e;
L_1009494: /* 1009494: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 1009498: call dword ptr [0x100a000] */
  esp -= 4; W32(esp, 0x100949eu); SPILL(); call_ind(R32(0x100a000u)); if (g_unwind) return; /* KERNEL32!DisableThreadLibraryCalls */ RELOAD();
L_100949e: /* 100949e: xor eax, eax */
  eax = 0;
/* 10094a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10094a1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_10094a4(void) {
  LOAD_REGS();
L_10094a4: /* 10094a4: jmp dword ptr [0x100a010] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_10094ac(void) {
  LOAD_REGS();
L_10094ac: /* 10094ac: push 0x10094f8 */
  { uint32_t v = 0x10094f8u; esp -= 4; W32(esp, v); }
/* 10094b1: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10094b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10094b8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10094bc: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 10094c0: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* 10094c4: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10094c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10094c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10094c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10094c9: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 10094cc: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 10094cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10094d0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10094d3: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 10094da: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 10094dd: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 10094e0: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 10094e6: ret  */
  esp += 4; SPILL(); return;
}

void f_10094e7(void) {
  LOAD_REGS();
L_10094e7: /* 10094e7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 10094ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10094f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10094f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10094f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10094f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10094f5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 10094f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10094f7: ret  */
  esp += 4; SPILL(); return;
}

void f_10094f8(void) {
  LOAD_REGS();
L_10094f8: /* 10094f8: jmp dword ptr [0x100a008] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}
