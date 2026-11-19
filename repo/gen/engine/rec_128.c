#include "recomp.h"
#include "rec_mod.h"

void f_934a30(void) {
  LOAD_REGS();
L_934a30: /* 934a30: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 934a34: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 934a38: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 934a3b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 934a3f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 934a42: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 934a46: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 934a48: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 934a4c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 934a4e: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 934a51: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 934a54: ret  */
  esp += 4; SPILL(); return;
}

void f_934a60(void) {
  LOAD_REGS();
L_934a60: /* 934a60: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 934a63: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 934a67: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 934a6a: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 934a6e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 934a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 934a71: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 934a73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 934a74: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 934a76: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 934a78: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 934a7a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934a7c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934a80: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934a84: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934a86: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 934a8a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934a8c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934a8e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 934a90: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 934a92: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 934a95: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 934a98: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934a9a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 934a9e: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 934aa1: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 934aa3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 934aa5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 934aa7: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 934aa9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 934aab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934aad: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 934ab1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934ab3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934ab5: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934ab9: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934abd: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 934ac1: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 934ac5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934ac7: fst dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0);
/* 934acb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 934ad1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934ad3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934ad6: jnp 0x934b0e */
  if (!pf) goto L_934b0e;
L_934ad8: /* 934ad8: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934adc: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 934ae0: fchs  */
  ST0 = -ST0;
/* 934ae2: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 934ae6: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 934aea: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 934aec: fsubr dword ptr [esp + 0xc] */
  ST0 = (F32((uint32_t)(esp + 0xcu))) - ST0;
/* 934af0: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 934af6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934af8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934afb: jne 0x934b16 */
  if (!zf) goto L_934b16;
L_934afd: /* 934afd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 934aff: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 934b01: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 934b05: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934b07: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934b09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934b0c: jne 0x934b18 */
  if (!zf) goto L_934b18;
L_934b0e: /* 934b0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 934b0f: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 934b11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 934b12: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934b15: ret  */
  esp += 4; SPILL(); return;
L_934b16: /* 934b16: fstp st(0) */
  STI(0) = ST0; FPOP();
L_934b18: /* 934b18: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 934b1c: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 934b20: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 934b22: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 934b26: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 934b2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934b2e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934b31: jne 0x934b4c */
  if (!zf) goto L_934b4c;
L_934b33: /* 934b33: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 934b35: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 934b37: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 934b3b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934b3d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934b3f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934b42: jne 0x934b4e */
  if (!zf) goto L_934b4e;
L_934b44: /* 934b44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 934b45: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 934b47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 934b48: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934b4b: ret  */
  esp += 4; SPILL(); return;
L_934b4c: /* 934b4c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_934b4e: /* 934b4e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 934b52: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 934b55: fsqrt  */
  ST0 = sqrt(ST0);
/* 934b57: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 934b5b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 934b5f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 934b61: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 934b65: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 934b69: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 934b6d: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 934b70: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 934b74: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 934b7a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 934b7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934b80: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934b83: jp 0x934b91 */
  if (pf) goto L_934b91;
L_934b85: /* 934b85: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934b89: fchs  */
  ST0 = -ST0;
/* 934b8b: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 934b8f: jmp 0x934b9b */
  goto L_934b9b;
L_934b91: /* 934b91: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 934b95: fchs  */
  ST0 = -ST0;
/* 934b97: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
L_934b9b: /* 934b9b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 934b9f: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 934ba1: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 934ba5: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934ba9: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 934bab: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 934baf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934bb1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934bb4: jp 0x934bc0 */
  if (pf) goto L_934bc0;
L_934bb6: /* 934bb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 934bb7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934bb9: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 934bbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 934bbc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934bbf: ret  */
  esp += 4; SPILL(); return;
L_934bc0: /* 934bc0: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 934bc4: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 934bc8: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934bcc: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 934bce: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 934bd2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934bd4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934bd7: je 0x934b0e */
  if (zf) goto L_934b0e;
L_934bdd: /* 934bdd: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934be1: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 934be5: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 934be9: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 934bed: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 934bf1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 934bf5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 934bf9: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 934bfd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934bff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934c02: jnp 0x934b0e */
  if (!pf) goto L_934b0e;
L_934c08: /* 934c08: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 934c0c: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 934c10: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 934c14: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934c18: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 934c1c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 934c20: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 934c24: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 934c28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934c2a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934c2d: jnp 0x934b0e */
  if (!pf) goto L_934b0e;
L_934c33: /* 934c33: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 934c37: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 934c3b: fmul dword ptr [0xa214f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214f8u)));
/* 934c41: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 934c45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934c47: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934c4a: jne 0x934ca2 */
  if (!zf) goto L_934ca2;
L_934c4c: /* 934c4c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 934c50: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 934c56: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934c58: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934c5b: je 0x934b0e */
  if (zf) goto L_934b0e;
L_934c61: /* 934c61: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 934c67: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 934c6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934c6d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934c70: jnp 0x934c8c */
  if (!pf) goto L_934c8c;
L_934c72: /* 934c72: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 934c78: fdiv dword ptr [esp + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x38u)));
/* 934c7c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 934c80: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 934c82: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 934c86: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 934c8a: jmp 0x934d01 */
  goto L_934d01;
L_934c8c: /* 934c8c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 934c92: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 934c96: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 934c98: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 934c9c: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 934ca0: jmp 0x934d01 */
  goto L_934d01;
L_934ca2: /* 934ca2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 934ca6: fabs  */
  ST0 = fabs(ST0);
/* 934ca8: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 934cac: fmul dword ptr [0xa214d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214d8u)));
/* 934cb2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 934cb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934cb6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934cb9: jne 0x934d2b */
  if (!zf) goto L_934d2b;
L_934cbb: /* 934cbb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 934cbf: fabs  */
  ST0 = fabs(ST0);
/* 934cc1: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 934cc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934cc7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934cca: je 0x934b0e */
  if (zf) goto L_934b0e;
L_934cd0: /* 934cd0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 934cd6: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 934cda: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934cdc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934cdf: jnp 0x934ced */
  if (!pf) goto L_934ced;
L_934ce1: /* 934ce1: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 934ce7: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 934ceb: jmp 0x934cf3 */
  goto L_934cf3;
L_934ced: /* 934ced: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_934cf3: /* 934cf3: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 934cf7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 934cf9: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
L_934cfd: /* 934cfd: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
L_934d01: /* 934d01: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 934d05: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 934d07: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934d09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934d0c: jne 0x934d14 */
  if (!zf) goto L_934d14;
L_934d0e: /* 934d0e: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 934d12: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_934d14: /* 934d14: fcom dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
/* 934d16: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934d18: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934d1b: jp 0x934dbc */
  if (pf) goto L_934dbc;
L_934d21: /* 934d21: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 934d23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 934d24: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 934d26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 934d27: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934d2a: ret  */
  esp += 4; SPILL(); return;
L_934d2b: /* 934d2b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 934d31: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 934d35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934d37: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934d3a: jnp 0x934d4c */
  if (!pf) goto L_934d4c;
L_934d3c: /* 934d3c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 934d42: fdiv dword ptr [esp + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x38u)));
/* 934d46: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 934d4a: jmp 0x934d54 */
  goto L_934d54;
L_934d4c: /* 934d4c: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
L_934d54: /* 934d54: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 934d5a: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 934d5e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934d60: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934d63: jnp 0x934d71 */
  if (!pf) goto L_934d71;
L_934d65: /* 934d65: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 934d6b: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 934d6f: jmp 0x934d77 */
  goto L_934d77;
L_934d71: /* 934d71: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_934d77: /* 934d77: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 934d7b: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 934d7f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934d81: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934d84: jp 0x934d90 */
  if (pf) goto L_934d90;
L_934d86: /* 934d86: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 934d8a: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 934d8e: jmp 0x934d96 */
  goto L_934d96;
L_934d90: /* 934d90: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 934d94: fmul st(1) */
  ST0 = ST0 * STI(1);
L_934d96: /* 934d96: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 934d9a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 934d9e: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 934da2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934da4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934da7: jp 0x934cfd */
  if (pf) goto L_934cfd;
L_934dad: /* 934dad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934daf: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 934db3: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 934db7: jmp 0x934d01 */
  goto L_934d01;
L_934dbc: /* 934dbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 934dbd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934dbf: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 934dc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 934dc2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934dc5: ret  */
  esp += 4; SPILL(); return;
}

void f_934dd0(void) {
  LOAD_REGS();
L_934dd0: /* 934dd0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 934dd3: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 934dd7: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 934ddb: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 934ddf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 934de0: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 934de4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 934de5: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 934de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 934dea: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 934dee: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 934df2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 934df3: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 934df7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 934dfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 934dfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 934dfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 934dfe: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 934e02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 934e03: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 934e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 934e08: call 0x934a60 */
  esp -= 4; W32(esp, 0x934e0du); SPILL(); f_934a60(); if (g_unwind) return; RELOAD();
/* 934e0d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934e10: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 934e12: je 0x934eb5 */
  if (zf) goto L_934eb5;
L_934e18: /* 934e18: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 934e1c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 934e20: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 934e22: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 934e24: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 934e28: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 934e2b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 934e2e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 934e32: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 934e36: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 934e39: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 934e3d: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 934e3f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 934e43: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 934e46: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 934e4a: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 934e4d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 934e4f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 934e53: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 934e57: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 934e59: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 934e5b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 934e5e: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 934e61: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 934e65: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 934e69: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934e6b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934e6e: jp 0x934eb5 */
  if (pf) goto L_934eb5;
L_934e70: /* 934e70: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 934e74: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 934e76: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 934e78: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 934e7b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 934e7f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 934e82: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 934e86: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 934e8a: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 934e8d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 934e91: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 934e93: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 934e97: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 934e9a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 934e9e: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 934ea1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 934ea3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 934ea7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 934eab: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 934ead: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 934eaf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 934eb2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_934eb5: /* 934eb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 934eb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 934eb7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 934eba: ret  */
  esp += 4; SPILL(); return;
}

void f_934ec0(void) {
  LOAD_REGS();
L_934ec0: /* 934ec0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 934ec3: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 934ec7: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 934eca: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 934ecd: mov byte ptr [esp + 3], 1 */
  W8((uint32_t)(esp + 0x3u), 0x1u);
/* 934ed2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 934ed8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934eda: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934edd: jnp 0x934ee4 */
  if (!pf) goto L_934ee4;
L_934edf: /* 934edf: mov byte ptr [esp + 3], 0 */
  W8((uint32_t)(esp + 0x3u), 0x0u);
L_934ee4: /* 934ee4: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 934eea: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 934eee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 934eef: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 934ef3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 934ef4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 934ef5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934ef7: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 934efb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934efe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 934eff: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 934f03: jnp 0x9352aa */
  if (!pf) goto L_9352aa;
L_934f09: /* 934f09: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 934f0f: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 934f13: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 934f15: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 934f19: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 934f1b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 934f1d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 934f20: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 934f23: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 934f25: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934f27: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934f2b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 934f2d: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 934f30: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 934f33: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 934f36: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934f38: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934f3c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 934f40: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 934f43: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 934f45: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 934f48: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 934f4b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934f4d: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934f51: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 934f55: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 934f58: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 934f5b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 934f5d: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 934f60: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934f62: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934f66: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 934f6a: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 934f6d: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 934f70: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 934f73: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 934f76: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934f78: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934f7c: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 934f80: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 934f83: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 934f86: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 934f89: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 934f8c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 934f8e: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934f92: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 934f96: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 934f99: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 934f9c: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 934f9f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 934fa2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934fa4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 934fa6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 934fa8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934faa: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934fae: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 934fb2: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 934fb5: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 934fb8: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 934fbb: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 934fbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934fc0: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 934fc3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 934fc5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 934fc7: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 934fcb: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 934fcf: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 934fd2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 934fd4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 934fda: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 934fdc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 934fdf: jp 0x934fe8 */
  if (pf) goto L_934fe8;
L_934fe1: /* 934fe1: mov eax, 1 */
  eax = 0x1u;
/* 934fe6: jmp 0x934fea */
  goto L_934fea;
L_934fe8: /* 934fe8: xor eax, eax */
  eax = 0;
L_934fea: /* 934fea: movzx edx, byte ptr [esp + 0x13] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x13u)));
/* 934fef: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 934ff1: jne 0x935087 */
  if (!zf) goto L_935087;
L_934ff7: /* 934ff7: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 934ffa: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 934ffe: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935004: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935006: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935009: jp 0x935012 */
  if (pf) goto L_935012;
L_93500b: /* 93500b: mov eax, 1 */
  eax = 0x1u;
/* 935010: jmp 0x935014 */
  goto L_935014;
L_935012: /* 935012: xor eax, eax */
  eax = 0;
L_935014: /* 935014: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 935016: jne 0x935087 */
  if (!zf) goto L_935087;
L_935018: /* 935018: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 93501b: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 93501f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935025: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935027: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93502a: jp 0x935033 */
  if (pf) goto L_935033;
L_93502c: /* 93502c: mov eax, 1 */
  eax = 0x1u;
/* 935031: jmp 0x935035 */
  goto L_935035;
L_935033: /* 935033: xor eax, eax */
  eax = 0;
L_935035: /* 935035: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 935037: jne 0x935087 */
  if (!zf) goto L_935087;
L_935039: /* 935039: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93503d: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 935041: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 935045: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 935049: fchs  */
  ST0 = -ST0;
/* 93504b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93504d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93504f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935051: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935054: jne 0x935085 */
  if (!zf) goto L_935085;
L_935056: /* 935056: fcom dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
/* 93505a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93505c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93505f: jp 0x935085 */
  if (pf) goto L_935085;
L_935061: /* 935061: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 935065: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935067: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 935069: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93506b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93506d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 935071: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 935074: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 935077: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935079: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 93507c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93507e: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 935081: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 935083: jmp 0x935087 */
  goto L_935087;
L_935085: /* 935085: fstp st(0) */
  STI(0) = ST0; FPOP();
L_935087: /* 935087: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 93508a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935090: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935092: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935095: jp 0x93509e */
  if (pf) goto L_93509e;
L_935097: /* 935097: mov eax, 1 */
  eax = 0x1u;
/* 93509c: jmp 0x9350a0 */
  goto L_9350a0;
L_93509e: /* 93509e: xor eax, eax */
  eax = 0;
L_9350a0: /* 9350a0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9350a2: jne 0x93513c */
  if (!zf) goto L_93513c;
L_9350a8: /* 9350a8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9350ac: fadd dword ptr [ebx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x14u)));
/* 9350af: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9350b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9350b7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9350ba: jp 0x9350c3 */
  if (pf) goto L_9350c3;
L_9350bc: /* 9350bc: mov eax, 1 */
  eax = 0x1u;
/* 9350c1: jmp 0x9350c5 */
  goto L_9350c5;
L_9350c3: /* 9350c3: xor eax, eax */
  eax = 0;
L_9350c5: /* 9350c5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9350c7: jne 0x93513c */
  if (!zf) goto L_93513c;
L_9350c9: /* 9350c9: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9350cd: fadd dword ptr [ebx + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x20u)));
/* 9350d0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9350d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9350d8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9350db: jp 0x9350e4 */
  if (pf) goto L_9350e4;
L_9350dd: /* 9350dd: mov eax, 1 */
  eax = 0x1u;
/* 9350e2: jmp 0x9350e6 */
  goto L_9350e6;
L_9350e4: /* 9350e4: xor eax, eax */
  eax = 0;
L_9350e6: /* 9350e6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9350e8: jne 0x93513c */
  if (!zf) goto L_93513c;
L_9350ea: /* 9350ea: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 9350ee: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 9350f2: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 9350f6: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9350fa: fchs  */
  ST0 = -ST0;
/* 9350fc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9350fe: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 935100: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935102: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935105: jne 0x93513a */
  if (!zf) goto L_93513a;
L_935107: /* 935107: fcom dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
/* 93510b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93510d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935110: jp 0x93513a */
  if (pf) goto L_93513a;
L_935112: /* 935112: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 935116: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935118: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93511a: fchs  */
  ST0 = -ST0;
/* 93511c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 93511e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935120: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 935124: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 935127: fchs  */
  ST0 = -ST0;
/* 935129: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93512c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93512e: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 935131: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935133: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 935136: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 935138: jmp 0x93513c */
  goto L_93513c;
L_93513a: /* 93513a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93513c: /* 93513c: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 93513f: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 935143: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935149: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93514b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93514e: jp 0x935157 */
  if (pf) goto L_935157;
L_935150: /* 935150: mov eax, 1 */
  eax = 0x1u;
/* 935155: jmp 0x935159 */
  goto L_935159;
L_935157: /* 935157: xor eax, eax */
  eax = 0;
L_935159: /* 935159: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93515b: jne 0x9351f2 */
  if (!zf) goto L_9351f2;
L_935161: /* 935161: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 935164: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 935168: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93516e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935170: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935173: jp 0x93517c */
  if (pf) goto L_93517c;
L_935175: /* 935175: mov eax, 1 */
  eax = 0x1u;
/* 93517a: jmp 0x93517e */
  goto L_93517e;
L_93517c: /* 93517c: xor eax, eax */
  eax = 0;
L_93517e: /* 93517e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 935180: jne 0x9351f2 */
  if (!zf) goto L_9351f2;
L_935182: /* 935182: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 935185: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 935189: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93518f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935191: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935194: jp 0x93519d */
  if (pf) goto L_93519d;
L_935196: /* 935196: mov eax, 1 */
  eax = 0x1u;
/* 93519b: jmp 0x93519f */
  goto L_93519f;
L_93519d: /* 93519d: xor eax, eax */
  eax = 0;
L_93519f: /* 93519f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9351a1: jne 0x9351f2 */
  if (!zf) goto L_9351f2;
L_9351a3: /* 9351a3: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9351a7: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 9351ab: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 9351af: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9351b3: fchs  */
  ST0 = -ST0;
/* 9351b5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9351b7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9351b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9351bb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9351be: jne 0x9351f0 */
  if (!zf) goto L_9351f0;
L_9351c0: /* 9351c0: fcom dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
/* 9351c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9351c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9351c9: jp 0x9351f0 */
  if (pf) goto L_9351f0;
L_9351cb: /* 9351cb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9351cf: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9351d1: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 9351d4: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9351d6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9351d8: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9351dc: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 9351df: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9351e2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9351e4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9351e7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9351e9: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9351ec: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 9351ee: jmp 0x9351f2 */
  goto L_9351f2;
L_9351f0: /* 9351f0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9351f2: /* 9351f2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9351f6: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 9351f9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9351ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935201: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935204: jp 0x93520d */
  if (pf) goto L_93520d;
L_935206: /* 935206: mov eax, 1 */
  eax = 0x1u;
/* 93520b: jmp 0x93520f */
  goto L_93520f;
L_93520d: /* 93520d: xor eax, eax */
  eax = 0;
L_93520f: /* 93520f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 935211: jne 0x9352ac */
  if (!zf) goto L_9352ac;
L_935217: /* 935217: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93521b: fadd dword ptr [ebx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x14u)));
/* 93521e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935224: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935226: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935229: jp 0x935232 */
  if (pf) goto L_935232;
L_93522b: /* 93522b: mov eax, 1 */
  eax = 0x1u;
/* 935230: jmp 0x935234 */
  goto L_935234;
L_935232: /* 935232: xor eax, eax */
  eax = 0;
L_935234: /* 935234: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 935236: jne 0x9352ac */
  if (!zf) goto L_9352ac;
L_935238: /* 935238: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93523c: fadd dword ptr [ebx + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x20u)));
/* 93523f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935245: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935247: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93524a: jp 0x935253 */
  if (pf) goto L_935253;
L_93524c: /* 93524c: mov eax, 1 */
  eax = 0x1u;
/* 935251: jmp 0x935255 */
  goto L_935255;
L_935253: /* 935253: xor eax, eax */
  eax = 0;
L_935255: /* 935255: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 935257: jne 0x9352ac */
  if (!zf) goto L_9352ac;
L_935259: /* 935259: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93525d: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 935261: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 935265: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 935269: fchs  */
  ST0 = -ST0;
/* 93526b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93526d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93526f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935271: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935274: jne 0x9352aa */
  if (!zf) goto L_9352aa;
L_935276: /* 935276: fcom dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
/* 93527a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93527c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93527f: jp 0x9352aa */
  if (pf) goto L_9352aa;
L_935281: /* 935281: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 935285: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 935287: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 93528a: fchs  */
  ST0 = -ST0;
/* 93528c: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 93528e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935290: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 935294: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 935297: fchs  */
  ST0 = -ST0;
/* 935299: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93529c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 93529e: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9352a1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9352a3: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9352a6: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 9352a8: jmp 0x9352ac */
  goto L_9352ac;
L_9352aa: /* 9352aa: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9352ac: /* 9352ac: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 9352b0: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 9352b3: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9352b6: mov byte ptr [esp + 0x48], 1 */
  W8((uint32_t)(esp + 0x48u), 0x1u);
/* 9352bb: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9352be: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9352c1: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9352c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9352c6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9352c8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9352ca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9352cc: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9352d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9352d4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9352d7: jnp 0x9352de */
  if (!pf) goto L_9352de;
L_9352d9: /* 9352d9: mov byte ptr [esp + 0x48], 0 */
  W8((uint32_t)(esp + 0x48u), 0x0u);
L_9352de: /* 9352de: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9352e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9352e6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9352e9: jnp 0x935541 */
  if (!pf) goto L_935541;
L_9352ef: /* 9352ef: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9352f5: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 9352f7: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9352fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9352fd: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 935300: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 935303: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 935306: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 935309: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93530b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93530d: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 93530f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935311: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 935314: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 935317: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 93531a: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93531d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93531f: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 935322: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 935324: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935326: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 93532a: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 93532d: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 935330: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 935333: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 935336: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935338: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93533a: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 93533d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93533f: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 935343: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 935346: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 935348: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 93534b: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93534d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93534f: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 935353: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 935356: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 935358: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 93535b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93535e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 935360: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 935364: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 935368: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 93536b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93536d: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 935370: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 935373: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 935375: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 935379: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 93537d: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 935380: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 935384: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 935388: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93538a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 93538c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935392: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935394: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935397: jp 0x9353a0 */
  if (pf) goto L_9353a0;
L_935399: /* 935399: mov eax, 1 */
  eax = 0x1u;
/* 93539e: jmp 0x9353a2 */
  goto L_9353a2;
L_9353a0: /* 9353a0: xor eax, eax */
  eax = 0;
L_9353a2: /* 9353a2: movzx edx, byte ptr [esp + 0x48] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x48u)));
/* 9353a7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9353a9: jne 0x935462 */
  if (!zf) goto L_935462;
L_9353af: /* 9353af: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 9353b3: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 9353b7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9353bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9353bf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9353c2: jp 0x9353cb */
  if (pf) goto L_9353cb;
L_9353c4: /* 9353c4: mov eax, 1 */
  eax = 0x1u;
/* 9353c9: jmp 0x9353cd */
  goto L_9353cd;
L_9353cb: /* 9353cb: xor eax, eax */
  eax = 0;
L_9353cd: /* 9353cd: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9353cf: jne 0x935462 */
  if (!zf) goto L_935462;
L_9353d5: /* 9353d5: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9353d9: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 9353dd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9353e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9353e5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9353e8: jp 0x9353f1 */
  if (pf) goto L_9353f1;
L_9353ea: /* 9353ea: mov eax, 1 */
  eax = 0x1u;
/* 9353ef: jmp 0x9353f3 */
  goto L_9353f3;
L_9353f1: /* 9353f1: xor eax, eax */
  eax = 0;
L_9353f3: /* 9353f3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9353f5: jne 0x935462 */
  if (!zf) goto L_935462;
L_9353f7: /* 9353f7: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9353fb: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 9353ff: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 935403: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 935407: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93540b: fchs  */
  ST0 = -ST0;
/* 93540d: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 935411: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935413: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935416: jp 0x935462 */
  if (pf) goto L_935462;
L_935418: /* 935418: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93541c: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 935420: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935422: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935425: jp 0x935462 */
  if (pf) goto L_935462;
L_935427: /* 935427: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93542b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93542d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93542f: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 935433: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 935436: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93543a: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93543d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 935441: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 935445: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 935447: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 935449: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 93544c: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93544f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935451: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 935455: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 935458: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 93545b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93545d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 935460: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_935462: /* 935462: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 935464: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 935466: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93546c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93546e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935470: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935473: jp 0x93547c */
  if (pf) goto L_93547c;
L_935475: /* 935475: mov eax, 1 */
  eax = 0x1u;
/* 93547a: jmp 0x93547e */
  goto L_93547e;
L_93547c: /* 93547c: xor eax, eax */
  eax = 0;
L_93547e: /* 93547e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 935480: jne 0x935543 */
  if (!zf) goto L_935543;
L_935486: /* 935486: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 93548a: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 93548e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935494: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935496: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935499: jp 0x9354a2 */
  if (pf) goto L_9354a2;
L_93549b: /* 93549b: mov eax, 1 */
  eax = 0x1u;
/* 9354a0: jmp 0x9354a4 */
  goto L_9354a4;
L_9354a2: /* 9354a2: xor eax, eax */
  eax = 0;
L_9354a4: /* 9354a4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9354a6: jne 0x935543 */
  if (!zf) goto L_935543;
L_9354ac: /* 9354ac: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9354b0: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 9354b4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9354ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9354bc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9354bf: jp 0x9354c8 */
  if (pf) goto L_9354c8;
L_9354c1: /* 9354c1: mov eax, 1 */
  eax = 0x1u;
/* 9354c6: jmp 0x9354ca */
  goto L_9354ca;
L_9354c8: /* 9354c8: xor eax, eax */
  eax = 0;
L_9354ca: /* 9354ca: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9354cc: jne 0x935543 */
  if (!zf) goto L_935543;
L_9354ce: /* 9354ce: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9354d2: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 9354d6: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9354da: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 9354de: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9354e2: fchs  */
  ST0 = -ST0;
/* 9354e4: fcomp dword ptr [esp + 0x54] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x54u)));
  FPOP();
/* 9354e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9354ea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9354ed: jp 0x935543 */
  if (pf) goto L_935543;
L_9354ef: /* 9354ef: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9354f3: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 9354f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9354f9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9354fc: jp 0x935543 */
  if (pf) goto L_935543;
L_9354fe: /* 9354fe: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 935502: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935504: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 935506: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93550a: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93550d: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 935511: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 935514: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 935518: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 93551c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93551e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 935520: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 935523: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 935526: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935528: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93552b: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 93552f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 935532: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935534: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 935537: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 935539: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93553a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93553b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93553c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93553d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 935540: ret  */
  esp += 4; SPILL(); return;
L_935541: /* 935541: fstp st(0) */
  STI(0) = ST0; FPOP();
L_935543: /* 935543: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 935544: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 935545: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 935546: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 935547: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93554a: ret  */
  esp += 4; SPILL(); return;
}

void f_935550(void) {
  LOAD_REGS();
L_935550: /* 935550: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 935553: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 935557: xor eax, eax */
  eax = 0;
/* 935559: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 93555d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 935561: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 935565: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 935569: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 93556d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93556e: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 935570: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 935572: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 935573: mov dword ptr [esp + 0x18], 0x9338c0 */
  W32((uint32_t)(esp + 0x18u), 0x9338c0u);
/* 93557b: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 935583: call 0x929df0 */
  esp -= 4; W32(esp, 0x935588u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 935588: mov eax, 1 */
  eax = 0x1u;
/* 93558d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 935590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9355a0(void) {
  LOAD_REGS();
L_9355a0: /* 9355a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9355a1: mov ebp, esp */
  ebp = esp;
/* 9355a3: sub esp, 0x1e0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1e0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9355a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9355aa: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 9355ad: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9355af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9355b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9355b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9355b2: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9355b7u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9355b7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9355ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9355bb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9355be: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9355c3u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9355c3: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9355c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9355c7: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 9355ca: call 0x928610 */
  esp -= 4; W32(esp, 0x9355cfu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 9355cf: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 9355d2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9355d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9355d5: call 0x928610 */
  esp -= 4; W32(esp, 0x9355dau); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 9355da: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* 9355dd: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 9355df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9355e0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 9355e3: call 0x928730 */
  esp -= 4; W32(esp, 0x9355e8u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9355e8: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9355eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9355ec: mov esi, eax */
  esi = eax;
/* 9355ee: call 0x928730 */
  esp -= 4; W32(esp, 0x9355f3u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9355f3: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9355f6: mov edi, eax */
  edi = eax;
/* 9355f8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9355fa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9355fc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9355ff: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 935602: xor ecx, ecx */
  ecx = 0;
/* 935604: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 935605: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 935608: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 93560b: call 0x92de80 */
  esp -= 4; W32(esp, 0x935610u); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 935610: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 935613: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 935616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 935617: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 93561a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 93561d: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 935620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 935621: call 0x933ec0 */
  esp -= 4; W32(esp, 0x935626u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 935626: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 935629: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93562c: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 93562f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 935632: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 935633: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 935635: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 935638: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93563a: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 93563d: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 935640: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935642: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 935645: call 0x92e280 */
  esp -= 4; W32(esp, 0x93564au); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93564a: lea eax, [edi + 0x20] */
  eax = (uint32_t)(edi + 0x20u);
/* 93564d: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 935650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 935651: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 935654: call 0x92e280 */
  esp -= 4; W32(esp, 0x935659u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 935659: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 93565c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 93565f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 935662: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 935663: lea edx, [ebp - 0x108] */
  edx = (uint32_t)(ebp + 0xfffffef8u);
/* 935669: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93566a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93566b: call 0x92e130 */
  esp -= 4; W32(esp, 0x935670u); SPILL(); f_92e130(); if (g_unwind) return; RELOAD();
/* 935670: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 935673: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 935676: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 935679: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 93567c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 93567f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 935682: call 0x99cc00 */
  esp -= 4; W32(esp, 0x935687u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 935687: mov ecx, esp */
  ecx = esp;
/* 935689: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 93568c: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 93568f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 935690: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 935693: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 935696: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 935699: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93569a: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 93569d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9356a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9356a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9356a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9356a3: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x9356a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9356a6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9356a9: xor edx, edx */
  edx = 0;
/* 9356ab: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9356ad: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9356b0: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 9356b3: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 9356b6: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 9356b9: jne 0x9356cc */
  if (!zf) goto L_9356cc;
L_9356bb: /* 9356bb: xor eax, eax */
  eax = 0;
/* 9356bd: lea esp, [ebp - 0x1ec] */
  esp = (uint32_t)(ebp + 0xfffffe14u);
/* 9356c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9356c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9356c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9356c6: mov esp, ebp */
  esp = ebp;
/* 9356c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9356c9: ret 8 */
  esp += 12; SPILL(); return;
L_9356cc: /* 9356cc: lea eax, [ebp - 0xfc] */
  eax = (uint32_t)(ebp + 0xffffff04u);
/* 9356d2: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 9356d5: lea edx, [ebp - 0xf0] */
  edx = (uint32_t)(ebp + 0xffffff10u);
/* 9356db: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 9356de: lea eax, [ebp - 0xe4] */
  eax = (uint32_t)(ebp + 0xffffff1cu);
/* 9356e4: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 9356e7: lea edx, [ebp - 0xd8] */
  edx = (uint32_t)(ebp + 0xffffff28u);
/* 9356ed: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 9356f0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9356f2: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9356f4: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 9356f7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9356fa: lea eax, [edi + 0x20] */
  eax = (uint32_t)(edi + 0x20u);
/* 9356fd: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 935700: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935702: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 935705: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 935708: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93570a: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 935710: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 935713: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 935716: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 935719: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93571b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93571d: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 935720: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 935723: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935725: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 93572b: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 93572e: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 935731: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 935734: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 935736: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935738: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 93573b: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93573e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935740: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 935746: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 935749: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93574b: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 93574e: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 935751: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935753: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 935756: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 935759: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93575b: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 935761: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 935764: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 935767: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 93576a: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93576d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93576f: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 935772: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 935775: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935777: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 93577d: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 935780: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 935783: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 935786: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 935789: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93578b: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 93578e: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 935791: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935793: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 935796: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 935799: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93579c: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 93579f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9357a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9357a4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9357a6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9357a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9357aa: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 9357ad: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 9357b0: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 9357b3: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 9357b6: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 9357b9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9357bb: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9357bd: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 9357c0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9357c2: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9357c5: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 9357c8: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 9357cb: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 9357ce: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 9357d1: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 9357d4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9357d6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9357d8: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 9357db: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 9357de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9357df: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 9357e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9357e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9357e5: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 9357e8: call 0x933ec0 */
  esp -= 4; W32(esp, 0x9357edu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 9357ed: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 9357f0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9357f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9357f5: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9357f8: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 9357fb: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9357fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935800: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 935803: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 935805: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935807: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 93580a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 93580d: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 935810: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 935813: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 935816: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935818: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 93581b: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93581e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935820: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 935823: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 935826: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 935829: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 93582c: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 93582f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935831: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 935834: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 935837: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935839: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 93583c: jle 0x9359db */
  if ((zf || sf != of)) goto L_9359db;
L_935842: /* 935842: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 935849: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 93584c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_935850: /* 935850: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 935853: mov edi, dword ptr [ecx + 0x34] */
  edi = R32((uint32_t)(ecx + 0x34u));
/* 935856: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 935859: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 93585c: mov eax, dword ptr [edi + ecx] */
  eax = R32((uint32_t)(edi + ecx));
/* 93585f: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 935861: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 935862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 935863: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 935869: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 93586c: call 0x933ef0 */
  esp -= 4; W32(esp, 0x935871u); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 935871: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 935874: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 935877: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 935878: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 935879: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 93587f: call 0x933ef0 */
  esp -= 4; W32(esp, 0x935884u); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 935884: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 935887: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 93588a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93588b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93588c: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 935892: call 0x933ef0 */
  esp -= 4; W32(esp, 0x935897u); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 935897: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 93589a: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 93589d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93589e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93589f: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 9358a5: call 0x933f50 */
  esp -= 4; W32(esp, 0x9358aau); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 9358aa: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 9358ad: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 9358b0: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 9358b3: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 9358b6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 9358b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9358ba: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 9358bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9358be: lea edx, [ebp - 0xcc] */
  edx = (uint32_t)(ebp + 0xffffff34u);
/* 9358c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9358c5: call 0x935a30 */
  esp -= 4; W32(esp, 0x9358cau); SPILL(); f_935a30(); if (g_unwind) return; RELOAD();
/* 9358ca: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 9358cd: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 9358d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9358d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9358d2: lea edx, [ebp - 0xc0] */
  edx = (uint32_t)(ebp + 0xffffff40u);
/* 9358d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9358d9: call 0x935a30 */
  esp -= 4; W32(esp, 0x9358deu); SPILL(); f_935a30(); if (g_unwind) return; RELOAD();
/* 9358de: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 9358e1: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 9358e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9358e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9358e6: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 9358ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9358ed: call 0x935a30 */
  esp -= 4; W32(esp, 0x9358f2u); SPILL(); f_935a30(); if (g_unwind) return; RELOAD();
/* 9358f2: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 9358f5: lea eax, [ebp - 0x1e0] */
  eax = (uint32_t)(ebp + 0xfffffe20u);
/* 9358fb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 9358fe: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 935904: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 935905: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 935908: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 93590e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93590f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 935912: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 935915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 935916: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 935917: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 935918: lea ecx, [ebp + 0xa] */
  ecx = (uint32_t)(ebp + 0xau);
/* 93591b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93591c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 93591f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 935920: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 935926: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 935927: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 93592d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93592e: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 935931: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 935932: call 0x935ad0 */
  esp -= 4; W32(esp, 0x935937u); SPILL(); f_935ad0(); if (g_unwind) return; RELOAD();
/* 935937: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93593a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93593c: je 0x9359c5 */
  if (zf) goto L_9359c5;
L_935942: /* 935942: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 935945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 935946: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 93594c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93594d: mov ecx, esi */
  ecx = esi;
/* 93594f: call 0x933f50 */
  esp -= 4; W32(esp, 0x935954u); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 935954: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 935957: lea edx, [ebp - 0x1e0] */
  edx = (uint32_t)(ebp + 0xfffffe20u);
/* 93595d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93595f: lea edi, [ebp - 0x1e0] */
  edi = (uint32_t)(ebp + 0xfffffe20u);
/* 935965: je 0x9359b6 */
  if (zf) goto L_9359b6;
L_935967: /* 935967: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 93596a: cmp dword ptr [eax + 0xc], 0x190 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x190u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 935971: jge 0x9359b6 */
  if ((sf == of)) goto L_9359b6;
L_935973: /* 935973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 935974: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 935975: mov ecx, esi */
  ecx = esi;
/* 935977: call 0x933ef0 */
  esp -= 4; W32(esp, 0x93597cu); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 93597c: mov cx, word ptr [ebp + 0xa] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xau))) & 0xffffu);
/* 935980: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 935983: mov word ptr [ebx + 0x1c], cx */
  W16((uint32_t)(ebx + 0x1cu), (ecx & 0xffffu));
/* 935987: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 93598a: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 93598d: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 935990: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 935993: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* 935996: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 935997: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 93599a: call 0x933e40 */
  esp -= 4; W32(esp, 0x93599fu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93599f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9359a2: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 9359a5: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9359a8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9359a9: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9359ac: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9359af: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9359b2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9359b4: jne 0x935967 */
  if (!zf) goto L_935967;
L_9359b6: /* 9359b6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9359b9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 9359bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9359bd: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9359c0: call 0x933e60 */
  esp -= 4; W32(esp, 0x9359c5u); SPILL(); f_933e60(); if (g_unwind) return; RELOAD();
L_9359c5: /* 9359c5: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9359c8: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9359cb: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9359ce: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9359cf: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 9359d2: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 9359d5: jne 0x935850 */
  if (!zf) goto L_935850;
L_9359db: /* 9359db: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 9359de: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9359e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9359e3: jle 0x935a09 */
  if ((zf || sf != of)) goto L_935a09;
L_9359e5: /* 9359e5: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 9359e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9359e9: call 0x935a60 */
  esp -= 4; W32(esp, 0x9359eeu); SPILL(); f_935a60(); if (g_unwind) return; RELOAD();
/* 9359ee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9359f0: mov dword ptr [esi + 0x10], 1 */
  W32((uint32_t)(esi + 0x10u), 0x1u);
/* 9359f7: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 9359fa: lea esp, [ebp - 0x1ec] */
  esp = (uint32_t)(ebp + 0xfffffe14u);
/* 935a00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 935a01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 935a02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 935a03: mov esp, ebp */
  esp = ebp;
/* 935a05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 935a06: ret 8 */
  esp += 12; SPILL(); return;
L_935a09: /* 935a09: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 935a10: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 935a13: lea esp, [ebp - 0x1ec] */
  esp = (uint32_t)(ebp + 0xfffffe14u);
/* 935a19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 935a1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 935a1b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 935a1c: mov esp, ebp */
  esp = ebp;
/* 935a1e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 935a1f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_935a30(void) {
  LOAD_REGS();
L_935a30: /* 935a30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 935a34: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 935a36: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 935a3a: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 935a3c: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 935a40: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 935a42: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 935a45: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 935a48: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 935a4b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 935a4e: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 935a51: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 935a54: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_935a60(void) {
  LOAD_REGS();
L_935a60: /* 935a60: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 935a66: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 935a6a: xor edx, edx */
  edx = 0;
/* 935a6c: xor eax, eax */
  eax = 0;
/* 935a6e: mov edi, edi */
  edi = edi;
L_935a70: /* 935a70: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 935a73: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 935a74: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 935a77: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 935a79: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 935a7b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 935a7d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935a7f: jl 0x935a70 */
  if ((sf != of)) goto L_935a70;
L_935a81: /* 935a81: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 935a87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935a89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935a8c: jne 0x935aaf */
  if (!zf) goto L_935aaf;
L_935a8e: /* 935a8e: fsqrt  */
  ST0 = sqrt(ST0);
/* 935a90: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 935a96: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 935a98: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 935a9a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 935a9c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 935a9e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 935aa0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 935aa3: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 935aa6: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 935aa9: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 935aac: ret 4 */
  esp += 8; SPILL(); return;
L_935aaf: /* 935aaf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935ab1: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 935ab7: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 935abd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 935ac0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 935ac3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_935ad0(void) {
  LOAD_REGS();
L_935ad0: /* 935ad0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 935ad4: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 935ada: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935ae0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935ae2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935ae5: jp 0x935af1 */
  if (pf) goto L_935af1;
L_935ae7: /* 935ae7: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 935aef: jmp 0x935afc */
  goto L_935afc;
L_935af1: /* 935af1: mov eax, dword ptr [esp + 0xa8] */
  eax = R32((uint32_t)(esp + 0xa8u));
/* 935af8: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_935afc: /* 935afc: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 935b00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 935b01: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 935b05: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 935b06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 935b07: mov esi, dword ptr [esp + 0xb8] */
  esi = R32((uint32_t)(esp + 0xb8u));
/* 935b0e: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 935b12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 935b13: mov edi, dword ptr [esp + 0xc0] */
  edi = R32((uint32_t)(esp + 0xc0u));
/* 935b1a: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 935b1d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 935b1f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935b21: fabs  */
  ST0 = fabs(ST0);
/* 935b23: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 935b27: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 935b2a: mov dword ptr [esp + 0x4c], 0x3f800000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f800000u);
/* 935b32: fabs  */
  ST0 = fabs(ST0);
/* 935b34: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 935b38: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 935b3b: mov dword ptr [esp + 0x10], 0xbf800000 */
  W32((uint32_t)(esp + 0x10u), 0xbf800000u);
/* 935b43: fabs  */
  ST0 = fabs(ST0);
/* 935b45: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 935b49: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 935b4d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 935b50: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 935b54: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 935b57: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935b59: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 935b5d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 935b5f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935b61: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 935b65: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 935b68: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 935b6b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 935b6e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 935b71: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935b73: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 935b75: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 935b77: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935b79: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 935b7b: fabs  */
  ST0 = fabs(ST0);
/* 935b7d: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 935b81: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 935b83: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 935b87: fchs  */
  ST0 = -ST0;
/* 935b89: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 935b8d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935b93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935b95: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935b98: je 0x935ba2 */
  if (zf) goto L_935ba2;
L_935b9a: /* 935b9a: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
L_935ba2: /* 935ba2: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 935ba6: mov byte ptr [esp + 0x17], 3 */
  W8((uint32_t)(esp + 0x17u), 0x3u);
/* 935bab: fcomp dword ptr [esp + 0xb8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xb8u)));
  FPOP();
/* 935bb2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935bb4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935bb7: jne 0x935bc6 */
  if (!zf) goto L_935bc6;
L_935bb9: /* 935bb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 935bba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 935bbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 935bbc: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 935bbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 935bbf: add esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 935bc5: ret  */
  esp += 4; SPILL(); return;
L_935bc6: /* 935bc6: test byte ptr [edi + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935bca: jne 0x935bf7 */
  if (!zf) goto L_935bf7;
L_935bcc: /* 935bcc: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 935bd0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935bd6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935bd8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935bdb: jp 0x935bf7 */
  if (pf) goto L_935bf7;
L_935bdd: /* 935bdd: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 935be1: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
/* 935be9: fchs  */
  ST0 = -ST0;
/* 935beb: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 935bef: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 935bf1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 935bf3: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
L_935bf7: /* 935bf7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 935bfb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 935bfe: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 935c01: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 935c05: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 935c09: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 935c0c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 935c10: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 935c14: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 935c16: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 935c1a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 935c1d: call 0x92ec40 */
  esp -= 4; W32(esp, 0x935c22u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 935c22: mov eax, dword ptr [esp + 0xa8] */
  eax = R32((uint32_t)(esp + 0xa8u));
/* 935c29: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 935c2d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 935c31: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 935c33: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 935c37: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 935c3b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 935c3e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 935c41: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935c43: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 935c46: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 935c4a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 935c4d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935c4f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 935c53: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 935c55: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 935c5c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935c5e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 935c60: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 935c64: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 935c6a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935c6c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935c6f: jp 0x935c78 */
  if (pf) goto L_935c78;
L_935c71: /* 935c71: mov edx, 1 */
  edx = 0x1u;
/* 935c76: jmp 0x935c7a */
  goto L_935c7a;
L_935c78: /* 935c78: xor edx, edx */
  edx = 0;
L_935c7a: /* 935c7a: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 935c7e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 935c84: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935c86: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935c89: jp 0x935c92 */
  if (pf) goto L_935c92;
L_935c8b: /* 935c8b: mov ecx, 1 */
  ecx = 0x1u;
/* 935c90: jmp 0x935c94 */
  goto L_935c94;
L_935c92: /* 935c92: xor ecx, ecx */
  ecx = 0;
L_935c94: /* 935c94: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 935c98: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 935c9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935ca0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935ca3: jp 0x935cac */
  if (pf) goto L_935cac;
L_935ca5: /* 935ca5: mov eax, 1 */
  eax = 0x1u;
/* 935caa: jmp 0x935cae */
  goto L_935cae;
L_935cac: /* 935cac: xor eax, eax */
  eax = 0;
L_935cae: /* 935cae: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 935cb4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 935cb6: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 935cbd: fsub dword ptr [esp + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xb8u)));
/* 935cc4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 935cc6: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 935ccb: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 935cce: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 935cd2: mov ebp, dword ptr [edi + 0xc] */
  ebp = R32((uint32_t)(edi + 0xcu));
/* 935cd5: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 935cd9: mov ebx, esi */
  ebx = esi;
/* 935cdb: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 935cdf: xor edx, edx */
  edx = 0;
/* 935ce1: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 935ce3: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_935ce5: /* 935ce5: lea ecx, [esp + edx*4 + 0x34] */
  ecx = (uint32_t)(esp + edx*4 + 0x34u);
/* 935ce9: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 935cec: fabs  */
  ST0 = fabs(ST0);
/* 935cee: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 935cf2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935cf4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935cf7: je 0x935dc8 */
  if (zf) goto L_935dc8;
L_935cfd: /* 935cfd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 935cff: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 935d02: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 935d05: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 935d08: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 935d0b: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 935d0e: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 935d10: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 935d12: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 935d15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935d17: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935d1a: jp 0x935d20 */
  if (pf) goto L_935d20;
L_935d1c: /* 935d1c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 935d1e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_935d20: /* 935d20: fcom dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
/* 935d22: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935d24: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935d27: jp 0x935d2d */
  if (pf) goto L_935d2d;
L_935d29: /* 935d29: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935d2b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
L_935d2d: /* 935d2d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 935d30: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 935d33: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 935d36: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 935d38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935d3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935d3d: jp 0x935d43 */
  if (pf) goto L_935d43;
L_935d3f: /* 935d3f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 935d41: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_935d43: /* 935d43: fcom dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
/* 935d45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935d47: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935d4a: jp 0x935d50 */
  if (pf) goto L_935d50;
L_935d4c: /* 935d4c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935d4e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
L_935d50: /* 935d50: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 935d52: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 935d54: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 935d5a: fst dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0);
/* 935d5e: fabs  */
  ST0 = fabs(ST0);
/* 935d60: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 935d62: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 935d64: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 935d6a: fadd dword ptr [ecx + ebx] */
  ST0 = ST0 + (F32((uint32_t)(ecx + ebx)));
/* 935d6d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 935d6f: fcom dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
/* 935d73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935d75: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935d78: jne 0x935dc6 */
  if (!zf) goto L_935dc6;
L_935d7a: /* 935d7a: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 935d7e: mov dword ptr [esp + 0x10], 0xbf800000 */
  W32((uint32_t)(esp + 0x10u), 0xbf800000u);
/* 935d86: fld dword ptr [ecx + ebx] */
  { double v = F32((uint32_t)(ecx + ebx)); FPUSH(v); }
/* 935d89: fchs  */
  ST0 = -ST0;
/* 935d8b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 935d8d: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 935d91: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 935d95: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 935d9b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935d9d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935da0: je 0x935daa */
  if (zf) goto L_935daa;
L_935da2: /* 935da2: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
L_935daa: /* 935daa: fcomp dword ptr [esp + 0xb8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xb8u)));
  FPOP();
/* 935db1: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 935db3: or al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 935db5: mov byte ptr [esp + 0x17], al */
  W8((uint32_t)(esp + 0x17u), (eax & 0xffu));
/* 935db9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935dbb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935dbe: je 0x936064 */
  if (zf) goto L_936064;
L_935dc4: /* 935dc4: jmp 0x935dc8 */
  goto L_935dc8;
L_935dc6: /* 935dc6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_935dc8: /* 935dc8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 935dc9: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 935dcc: jl 0x935ce5 */
  if ((sf != of)) goto L_935ce5;
L_935dd2: /* 935dd2: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 935dd9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 935ddb: fabs  */
  ST0 = fabs(ST0);
/* 935ddd: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 935de0: fabs  */
  ST0 = fabs(ST0);
/* 935de2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 935de5: fabs  */
  ST0 = fabs(ST0);
/* 935de7: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 935deb: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 935def: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 935df1: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 935df5: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 935df9: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 935dfd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 935e00: fabs  */
  ST0 = fabs(ST0);
/* 935e02: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 935e05: fabs  */
  ST0 = fabs(ST0);
/* 935e07: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 935e0a: fabs  */
  ST0 = fabs(ST0);
/* 935e0c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 935e10: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 935e14: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 935e16: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 935e1a: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 935e1e: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 935e25: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 935e28: fabs  */
  ST0 = fabs(ST0);
/* 935e2a: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 935e2d: fabs  */
  ST0 = fabs(ST0);
/* 935e2f: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 935e32: fabs  */
  ST0 = fabs(ST0);
/* 935e34: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 935e38: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 935e3a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 935e3e: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 935e45: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 935e4c: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 935e53: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 935e56: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 935e59: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 935e5b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 935e5d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 935e5f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 935e61: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 935e63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935e65: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 935e67: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 935e69: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935e6b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 935e6f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935e71: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935e73: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935e75: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 935e78: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 935e7b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 935e7e: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 935e82: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 935e84: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 935e88: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 935e8a: xor ecx, ecx */
  ecx = 0;
/* 935e8c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 935e8e: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 935e92: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 935e94: xor ebp, ebp */
  ebp = 0;
/* 935e96: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 935e9a: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  edi = r;
  }
/* 935e9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935e9e: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 935ea2: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 935ea4: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 935ea8: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 935eaa: mov dword ptr [esp + 0x9c], edi */
  W32((uint32_t)(esp + 0x9cu), edi);
/* 935eb1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935eb3: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 935eb7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935eb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935ebb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935ebd: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 935ec0: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 935ec3: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 935ec6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 935ec8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 935eca: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 935ecc: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 935ece: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935ed0: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 935ed2: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 935ed4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935ed6: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 935eda: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935edc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935ede: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935ee0: jmp 0x935ef0 */
  goto L_935ef0;
L_935ee2: /* 935ee2: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 935ee9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_935ef0: /* 935ef0: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 935ef4: mov eax, 1 */
  eax = 0x1u;
/* 935ef9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 935efb: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 935efd: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 935f00: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 935f03: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 935f07: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 935f0a: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 935f0e: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 935f10: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 935f14: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 935f18: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 935f1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_935f20: /* 935f20: mov ebx, dword ptr [esp + 0x68] */
  ebx = R32((uint32_t)(esp + 0x68u));
/* 935f24: mov eax, 1 */
  eax = 0x1u;
/* 935f29: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 935f2b: mov edx, 1 */
  edx = 0x1u;
/* 935f30: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 935f33: mov ecx, eax */
  ecx = eax;
/* 935f35: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 935f37: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 935f39: fld dword ptr [esi + ebx*4] */
  { double v = F32((uint32_t)(esi + ebx*4)); FPUSH(v); }
/* 935f3c: mov ebx, dword ptr [esp + 0x68] */
  ebx = R32((uint32_t)(esp + 0x68u));
/* 935f40: lea edi, [eax + ebp] */
  edi = (uint32_t)(eax + ebp);
/* 935f43: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 935f46: lea ecx, [edx + ebp] */
  ecx = (uint32_t)(edx + ebp);
/* 935f49: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 935f4c: fmul dword ptr [ecx + esi] */
  ST0 = ST0 * (F32((uint32_t)(ecx + esi)));
/* 935f4f: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 935f51: fld dword ptr [esi + ebx*4] */
  { double v = F32((uint32_t)(esi + ebx*4)); FPUSH(v); }
/* 935f54: mov ebx, dword ptr [esp + 0xbc] */
  ebx = R32((uint32_t)(esp + 0xbcu));
/* 935f5b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 935f5e: fmul dword ptr [edi + esi] */
  ST0 = ST0 * (F32((uint32_t)(edi + esi)));
/* 935f61: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 935f63: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 935f69: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 935f6b: fabs  */
  ST0 = fabs(ST0);
/* 935f6d: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 935f71: fld dword ptr [ebx + edx*4] */
  { double v = F32((uint32_t)(ebx + edx*4)); FPUSH(v); }
/* 935f74: fmul dword ptr [esp + edi + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + edi + 0x6cu)));
/* 935f78: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 935f7b: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 935f7f: fmul dword ptr [esp + ecx + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + ecx + 0x6cu)));
/* 935f83: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 935f85: fadd dword ptr [esp + 0x64] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x64u)));
/* 935f89: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 935f8d: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 935f90: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 935f94: fmul dword ptr [ecx + esi] */
  ST0 = ST0 * (F32((uint32_t)(ecx + esi)));
/* 935f97: fld dword ptr [ebx + edx*4] */
  { double v = F32((uint32_t)(ebx + edx*4)); FPUSH(v); }
/* 935f9a: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 935f9e: fmul dword ptr [edi + esi] */
  ST0 = ST0 * (F32((uint32_t)(edi + esi)));
/* 935fa1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 935fa3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 935fa5: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 935fa9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935fab: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 935fad: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 935faf: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 935fb1: fsubr dword ptr [edx] */
  ST0 = (F32((uint32_t)(edx))) - ST0;
/* 935fb3: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 935fb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935fb7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 935fba: jne 0x936073 */
  if (!zf) goto L_936073;
L_935fc0: /* 935fc0: fsqrt  */
  ST0 = sqrt(ST0);
/* 935fc2: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 935fc8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 935fca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935fcc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 935fcf: jnp 0x935fd9 */
  if (!pf) goto L_935fd9;
L_935fd1: /* 935fd1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 935fd7: jmp 0x935fe1 */
  goto L_935fe1;
L_935fd9: /* 935fd9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 935fdb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_935fe1: /* 935fe1: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 935fe5: fabs  */
  ST0 = fabs(ST0);
/* 935fe7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 935fe9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 935feb: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 935fef: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 935ff1: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 935ff5: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 935ff9: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 935ffd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 935fff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 936002: jne 0x936071 */
  if (!zf) goto L_936071;
L_936004: /* 936004: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 936008: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93600a: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 93600e: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 936012: mov dword ptr [esp + 0x10], 0xbf800000 */
  W32((uint32_t)(esp + 0x10u), 0xbf800000u);
/* 93601a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 93601c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 936020: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 936022: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 936026: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93602c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93602e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 936031: je 0x93603b */
  if (zf) goto L_93603b;
L_936033: /* 936033: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
L_93603b: /* 93603b: mov bl, byte ptr [esp + 0x60] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x60u))) & 0xffu);
/* 93603f: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 936043: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 936047: mov al, byte ptr [esp + 0x54] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x54u))) & 0xffu);
/* 93604b: fcomp dword ptr [esp + 0xb8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xb8u)));
  FPOP();
/* 936052: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 936055: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 936057: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 93605b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93605d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 936060: jne 0x936079 */
  if (!zf) goto L_936079;
L_936062: /* 936062: fstp st(0) */
  STI(0) = ST0; FPOP();
L_936064: /* 936064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 936065: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 936066: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 936067: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 936069: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93606a: add esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 936070: ret  */
  esp += 4; SPILL(); return;
L_936071: /* 936071: fstp st(0) */
  STI(0) = ST0; FPOP();
L_936073: /* 936073: mov bl, byte ptr [esp + 0x17] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 936077: fstp st(0) */
  STI(0) = ST0; FPOP();
L_936079: /* 936079: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 93607d: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 936081: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 936082: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 936085: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 936088: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 93608c: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 936090: jl 0x935f20 */
  if ((sf != of)) goto L_935f20;
L_936096: /* 936096: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 93609a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93609c: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 9360a0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9360a1: add ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9360a4: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9360a7: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9360aa: cmp ebp, 9 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9360ad: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 9360b1: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 9360b5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 9360b9: jl 0x935ee2 */
  if ((sf != of)) goto L_935ee2;
L_9360bf: /* 9360bf: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9360c3: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 9360ca: mov ebp, dword ptr [esp + 0xc0] */
  ebp = R32((uint32_t)(esp + 0xc0u));
/* 9360d1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9360d3: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9360d7: je 0x9362a5 */
  if (zf) goto L_9362a5;
L_9360dd: /* 9360dd: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 9360df: and al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 9360e1: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9360e3: jne 0x9361a1 */
  if (!zf) goto L_9361a1;
L_9360e9: /* 9360e9: mov edx, dword ptr [esp + 0xa8] */
  edx = R32((uint32_t)(esp + 0xa8u));
/* 9360f0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9360f4: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 9360f6: and al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 9360f8: movsx ecx, al */
  ecx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 9360fb: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 936102: xor edi, edi */
  edi = 0;
/* 936104: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 936106: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 936109: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 93610c: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 93610f: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 936117: fstp dword ptr [ecx + edx] */
  WF32((uint32_t)(ecx + edx), ST0); FPOP();
/* 93611a: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 936121: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* 936124: lea edx, [esp + ecx + 0x34] */
  edx = (uint32_t)(esp + ecx + 0x34u);
/* 936128: fchs  */
  ST0 = -ST0;
/* 93612a: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 93612e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 936130: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 936133: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* 936136: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 936138: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 93613c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93613e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936141: jnp 0x936147 */
  if (!pf) goto L_936147;
L_936143: /* 936143: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
L_936147: /* 936147: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 93614a: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 93614d: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 93614f: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 936153: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936155: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936158: jp 0x936161 */
  if (pf) goto L_936161;
L_93615a: /* 93615a: mov edi, 1 */
  edi = 0x1u;
/* 93615f: jmp 0x936163 */
  goto L_936163;
L_936161: /* 936161: xor edi, edi */
  edi = 0;
L_936163: /* 936163: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 936166: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 936169: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 93616b: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 93616f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936171: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936174: jp 0x93617d */
  if (pf) goto L_93617d;
L_936176: /* 936176: mov eax, 1 */
  eax = 0x1u;
/* 93617b: jmp 0x93617f */
  goto L_93617f;
L_93617d: /* 93617d: xor eax, eax */
  eax = 0;
L_93617f: /* 93617f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 936183: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936185: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936187: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 93618e: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 936191: sub eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 936196: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 936199: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 93619c: jmp 0x9362a5 */
  goto L_9362a5;
L_9361a1: /* 9361a1: cmp bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9361a4: je 0x9362aa */
  if (zf) goto L_9362aa;
L_9361aa: /* 9361aa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9361ae: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9361b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9361b6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9361b9: jne 0x93620a */
  if (!zf) goto L_93620a;
L_9361bb: /* 9361bb: xor eax, eax */
  eax = 0;
/* 9361bd: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 9361bf: mov edi, eax */
  edi = eax;
/* 9361c1: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 9361c4: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9361c7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9361ca: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 9361cd: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 9361d0: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 9361d4: mov ecx, edi */
  ecx = edi;
/* 9361d6: mov eax, 1 */
  eax = 0x1u;
/* 9361db: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 9361dd: mov edx, 1 */
  edx = 0x1u;
/* 9361e2: mov dword ptr [esp + edi*4 + 0x18], 0 */
  W32((uint32_t)(esp + edi*4 + 0x18u), 0x0u);
/* 9361ea: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 9361ed: mov ecx, eax */
  ecx = eax;
/* 9361ef: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 9361f1: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 9361f5: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 9361f8: fchs  */
  ST0 = -ST0;
/* 9361fa: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9361fd: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* 936200: mov dword ptr [esp + eax*4 + 0x18], edi */
  W32((uint32_t)(esp + eax*4 + 0x18u), edi);
/* 936204: fstp dword ptr [esp + edx*4 + 0x18] */
  WF32((uint32_t)(esp + edx*4 + 0x18u), ST0); FPOP();
/* 936208: jmp 0x936255 */
  goto L_936255;
L_93620a: /* 93620a: xor ecx, ecx */
  ecx = 0;
/* 93620c: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 93620e: mov eax, ecx */
  eax = ecx;
/* 936210: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 936213: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 936216: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 936219: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 93621c: mov eax, 1 */
  eax = 0x1u;
/* 936221: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 936223: lea edi, [esi + edx*4] */
  edi = (uint32_t)(esi + edx*4);
/* 936226: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 93622a: mov edx, 1 */
  edx = 0x1u;
/* 93622f: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 936232: mov ecx, eax */
  ecx = eax;
/* 936234: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 936236: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 93623a: mov dword ptr [esp + ecx*4 + 0x18], 0 */
  W32((uint32_t)(esp + ecx*4 + 0x18u), 0x0u);
/* 936242: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 936245: fld dword ptr [edi + edx*4] */
  { double v = F32((uint32_t)(edi + edx*4)); FPUSH(v); }
/* 936248: fchs  */
  ST0 = -ST0;
/* 93624a: fstp dword ptr [esp + eax*4 + 0x18] */
  WF32((uint32_t)(esp + eax*4 + 0x18u), ST0); FPOP();
/* 93624e: mov eax, dword ptr [edi + eax*4] */
  eax = R32((uint32_t)(edi + eax*4));
/* 936251: mov dword ptr [esp + edx*4 + 0x18], eax */
  W32((uint32_t)(esp + edx*4 + 0x18u), eax);
L_936255: /* 936255: mov eax, dword ptr [esp + 0xa8] */
  eax = R32((uint32_t)(esp + 0xa8u));
/* 93625c: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 936260: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 936264: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 936268: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 93626a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93626e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 936271: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 936275: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 936278: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* 93627f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 936281: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* 936288: mov word ptr [edx], 0x101 */
  W16((uint32_t)(edx), 0x101u);
/* 93628d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93628f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 936291: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 936295: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 936298: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93629b: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93629f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9362a2: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_9362a5: /* 9362a5: cmp bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9362a8: jne 0x9362b9 */
  if (!zf) goto L_9362b9;
L_9362aa: /* 9362aa: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 9362b1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9362b3: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 9362b7: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
L_9362b9: /* 9362b9: mov edi, dword ptr [esp + 0xb0] */
  edi = R32((uint32_t)(esp + 0xb0u));
/* 9362c0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9362c2: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 9362c6: test byte ptr [ebp + 0x14], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9362ca: je 0x93640f */
  if (zf) goto L_93640f;
L_9362d0: /* 9362d0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9362d3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9362d9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9362db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9362dd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9362e0: jnp 0x9362ea */
  if (!pf) goto L_9362ea;
L_9362e2: /* 9362e2: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9362e8: jmp 0x9362f2 */
  goto L_9362f2;
L_9362ea: /* 9362ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9362ec: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_9362f2: /* 9362f2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9362f5: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9362fb: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9362fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9362ff: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936302: jnp 0x93630c */
  if (!pf) goto L_93630c;
L_936304: /* 936304: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 93630a: jmp 0x936314 */
  goto L_936314;
L_93630c: /* 93630c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93630e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_936314: /* 936314: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 936316: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93631c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 93631e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936320: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936323: jnp 0x93632d */
  if (!pf) goto L_93632d;
L_936325: /* 936325: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 93632b: jmp 0x936335 */
  goto L_936335;
L_93632d: /* 93632d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93632f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_936335: /* 936335: mov ebx, dword ptr [ebp] */
  ebx = R32((uint32_t)(ebp));
/* 936338: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93633c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93633d: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* 936344: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 936348: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 93634c: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 936350: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 936354: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 93635b: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 936363: fmul dword ptr [0xa20e08] */
  ST0 = ST0 * (F32((uint32_t)(0xa20e08u)));
/* 936369: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 936371: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 936374: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936375: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 936376: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 936377: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 936378: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936379: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 93637d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93637e: call 0x936840 */
  esp -= 4; W32(esp, 0x936383u); SPILL(); f_936840(); if (g_unwind) return; RELOAD();
/* 936383: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 936386: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 936388: je 0x93640f */
  if (zf) goto L_93640f;
L_93638e: /* 93638e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 936390: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 936394: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 936398: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 93639b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93639c: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 93639e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93639f: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 9363a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9363a4: call 0x934a30 */
  esp -= 4; W32(esp, 0x9363a9u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 9363a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9363ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9363ad: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 9363b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9363b5: mov ecx, ebx */
  ecx = ebx;
/* 9363b7: call 0x9349c0 */
  esp -= 4; W32(esp, 0x9363bcu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 9363bc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9363c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9363c1: call 0x933e40 */
  esp -= 4; W32(esp, 0x9363c6u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 9363c6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9363ca: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 9363d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9363d2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9363d5: jp 0x93640f */
  if (pf) goto L_93640f;
L_9363d7: /* 9363d7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9363d9: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9363dd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9363e1: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9363e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9363e5: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 9363e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9363e8: lea eax, [esp + 0x98] */
  eax = (uint32_t)(esp + 0x98u);
/* 9363ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9363f0: call 0x934a30 */
  esp -= 4; W32(esp, 0x9363f5u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 9363f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9363f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9363f9: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 9363fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9363fe: mov ecx, ebx */
  ecx = ebx;
/* 936400: call 0x9349c0 */
  esp -= 4; W32(esp, 0x936405u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 936405: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 936409: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93640a: call 0x933e40 */
  esp -= 4; W32(esp, 0x93640fu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_93640f: /* 93640f: test byte ptr [ebp + 0x14], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 936413: je 0x936562 */
  if (zf) goto L_936562;
L_936419: /* 936419: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 93641c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 936422: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 936424: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936426: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936429: jnp 0x936433 */
  if (!pf) goto L_936433;
L_93642b: /* 93642b: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 936431: jmp 0x93643b */
  goto L_93643b;
L_936433: /* 936433: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 936435: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93643b: /* 93643b: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 93643e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 936444: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 936446: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936448: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93644b: jnp 0x936455 */
  if (!pf) goto L_936455;
L_93644d: /* 93644d: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 936453: jmp 0x93645d */
  goto L_93645d;
L_936455: /* 936455: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 936457: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93645d: /* 93645d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 936460: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 936466: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 936468: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93646a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93646d: jnp 0x936477 */
  if (!pf) goto L_936477;
L_93646f: /* 93646f: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 936475: jmp 0x93647f */
  goto L_93647f;
L_936477: /* 936477: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 936479: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93647f: /* 93647f: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 936486: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93648a: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 93648d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 936491: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936492: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 936496: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93649a: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 93649e: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 9364a5: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 9364ad: fmul dword ptr [0xa20e08] */
  ST0 = ST0 * (F32((uint32_t)(0xa20e08u)));
/* 9364b3: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 9364bb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9364be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9364bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9364c0: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 9364c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9364c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9364c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9364c6: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 9364ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9364cb: call 0x936840 */
  esp -= 4; W32(esp, 0x9364d0u); SPILL(); f_936840(); if (g_unwind) return; RELOAD();
/* 9364d0: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9364d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9364d5: je 0x936562 */
  if (zf) goto L_936562;
L_9364db: /* 9364db: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9364dd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9364e1: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9364e4: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 9364e6: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 9364e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9364ea: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9364ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9364ef: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 9364f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9364f7: call 0x934a30 */
  esp -= 4; W32(esp, 0x9364fcu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 9364fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9364ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936500: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 936504: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 936505: mov ecx, ebx */
  ecx = ebx;
/* 936507: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93650cu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93650c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 936510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936511: call 0x933e40 */
  esp -= 4; W32(esp, 0x936516u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 936516: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93651a: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 936520: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936522: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936525: jp 0x936562 */
  if (pf) goto L_936562;
L_936527: /* 936527: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 936529: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 93652d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936530: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 936532: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 936535: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936536: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93653a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93653b: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 936542: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936543: call 0x934a30 */
  esp -= 4; W32(esp, 0x936548u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 936548: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93654b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93654c: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 936550: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 936551: mov ecx, ebx */
  ecx = ebx;
/* 936553: call 0x9349c0 */
  esp -= 4; W32(esp, 0x936558u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 936558: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93655c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93655d: call 0x933e40 */
  esp -= 4; W32(esp, 0x936562u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_936562: /* 936562: test byte ptr [ebp + 0x14], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 936566: je 0x9366b5 */
  if (zf) goto L_9366b5;
L_93656c: /* 93656c: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 93656f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 936575: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 936577: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936579: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93657c: jnp 0x936586 */
  if (!pf) goto L_936586;
L_93657e: /* 93657e: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 936584: jmp 0x93658e */
  goto L_93658e;
L_936586: /* 936586: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 936588: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_93658e: /* 93658e: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 936591: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 936597: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 936599: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93659b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93659e: jnp 0x9365a8 */
  if (!pf) goto L_9365a8;
L_9365a0: /* 9365a0: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9365a6: jmp 0x9365b0 */
  goto L_9365b0;
L_9365a8: /* 9365a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9365aa: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_9365b0: /* 9365b0: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 9365b3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9365b9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9365bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9365bd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9365c0: jnp 0x9365ca */
  if (!pf) goto L_9365ca;
L_9365c2: /* 9365c2: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9365c8: jmp 0x9365d2 */
  goto L_9365d2;
L_9365ca: /* 9365ca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9365cc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_9365d2: /* 9365d2: mov eax, dword ptr [esp + 0xbc] */
  eax = R32((uint32_t)(esp + 0xbcu));
/* 9365d9: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9365dd: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 9365e0: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9365e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9365e5: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 9365e9: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9365ed: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 9365f1: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 9365f8: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 936600: fmul dword ptr [0xa20e08] */
  ST0 = ST0 * (F32((uint32_t)(0xa20e08u)));
/* 936606: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 93660e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 936611: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936612: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936613: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 936616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936617: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 936618: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 936619: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 93661d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93661e: call 0x936840 */
  esp -= 4; W32(esp, 0x936623u); SPILL(); f_936840(); if (g_unwind) return; RELOAD();
/* 936623: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 936626: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 936628: je 0x9366b5 */
  if (zf) goto L_9366b5;
L_93662e: /* 93662e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 936630: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 936634: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 936638: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 93663b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 93663d: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 936640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936641: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936642: lea edx, [esp + 0x98] */
  edx = (uint32_t)(esp + 0x98u);
/* 936649: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93664a: call 0x934a30 */
  esp -= 4; W32(esp, 0x93664fu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93664f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 936652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936653: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 936657: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936658: mov ecx, ebx */
  ecx = ebx;
/* 93665a: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93665fu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93665f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 936663: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936664: call 0x933e40 */
  esp -= 4; W32(esp, 0x936669u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 936669: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93666d: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 936673: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936675: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936678: jp 0x9366b5 */
  if (pf) goto L_9366b5;
L_93667a: /* 93667a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 93667c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 936680: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 936684: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936687: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 936689: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 93668c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93668d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93668e: lea edx, [esp + 0x98] */
  edx = (uint32_t)(esp + 0x98u);
/* 936695: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 936696: call 0x934a30 */
  esp -= 4; W32(esp, 0x93669bu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93669b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93669e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93669f: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 9366a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9366a4: mov ecx, ebx */
  ecx = ebx;
/* 9366a6: call 0x9349c0 */
  esp -= 4; W32(esp, 0x9366abu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 9366ab: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9366af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9366b0: call 0x933e40 */
  esp -= 4; W32(esp, 0x9366b5u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_9366b5: /* 9366b5: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 9366b8: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9366bb: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 9366bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9366c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9366c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9366c2: call 0x9349f0 */
  esp -= 4; W32(esp, 0x9366c7u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 9366c7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9366ca: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 9366ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9366cf: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 9366d3: call 0x934970 */
  esp -= 4; W32(esp, 0x9366d8u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 9366d8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9366dc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9366e0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9366e4: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 9366e8: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 9366ec: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 9366f0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9366f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9366f4: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 9366f8: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 9366fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9366fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9366fd: call 0x9349f0 */
  esp -= 4; W32(esp, 0x936702u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 936702: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 936705: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 936709: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93670a: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 93670e: call 0x934970 */
  esp -= 4; W32(esp, 0x936713u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 936713: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 936717: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 93671b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 93671f: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 936723: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 936727: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 93672b: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 93672e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93672f: mov dword ptr [esp + 0x84], edx */
  W32((uint32_t)(esp + 0x84u), edx);
/* 936736: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 936739: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93673a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93673b: call 0x9349f0 */
  esp -= 4; W32(esp, 0x936740u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 936740: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 936743: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 936747: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936748: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 93674c: call 0x934970 */
  esp -= 4; W32(esp, 0x936751u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 936751: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 936755: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 936759: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 93675d: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 936764: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 936767: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 93676e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 936771: mov dword ptr [esp + 0x88], edx */
  W32((uint32_t)(esp + 0x88u), edx);
/* 936778: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 93677b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93677e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 936781: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 936784: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 936786: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 936788: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93678a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93678c: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 936790: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 936792: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 936796: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93679c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93679e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9367a1: jnp 0x9367c2 */
  if (!pf) goto L_9367c2;
L_9367a3: /* 9367a3: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 9367aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9367ab: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 9367af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9367b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9367b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9367b2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 9367b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9367b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9367b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9367b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9367ba: call 0x9368f0 */
  esp -= 4; W32(esp, 0x9367bfu); SPILL(); f_9368f0(); if (g_unwind) return; RELOAD();
/* 9367bf: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9367c2: /* 9367c2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9367c5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9367c8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9367ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9367d0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9367d3: jnp 0x9367f4 */
  if (!pf) goto L_9367f4;
L_9367d5: /* 9367d5: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 9367dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9367dd: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 9367e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9367e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9367e3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9367e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9367e6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 9367e8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9367ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9367eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9367ec: call 0x9368f0 */
  esp -= 4; W32(esp, 0x9367f1u); SPILL(); f_9368f0(); if (g_unwind) return; RELOAD();
/* 9367f1: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9367f4: /* 9367f4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9367f7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9367fa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936800: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936802: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936805: jnp 0x936826 */
  if (!pf) goto L_936826;
L_936807: /* 936807: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 93680e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93680f: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 936813: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936814: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 936815: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 936816: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 936818: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93681a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 93681c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93681d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93681e: call 0x9368f0 */
  esp -= 4; W32(esp, 0x936823u); SPILL(); f_9368f0(); if (g_unwind) return; RELOAD();
/* 936823: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_936826: /* 936826: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 936828: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 93682c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93682d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93682e: xor eax, eax */
  eax = 0;
/* 936830: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936832: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 936833: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 936836: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 936837: add esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93683d: ret  */
  esp += 4; SPILL(); return;
}

void f_936840(void) {
  LOAD_REGS();
L_936840: /* 936840: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 936844: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 936848: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 936849: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 93684d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 93684e: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 936852: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 936853: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 936857: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 936858: xor edi, edi */
  edi = 0;
/* 93685a: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 93685c: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 93685e: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_936860: /* 936860: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 936863: fabs  */
  ST0 = fabs(ST0);
/* 936865: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 936869: fld dword ptr [esi + ecx] */
  { double v = F32((uint32_t)(esi + ecx)); FPUSH(v); }
/* 93686c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93686e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936871: jp 0x936885 */
  if (pf) goto L_936885;
L_936873: /* 936873: fabs  */
  ST0 = fabs(ST0);
/* 936875: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 936877: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936879: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93687c: jne 0x9368d6 */
  if (!zf) goto L_9368d6;
L_93687e: /* 93687e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93687f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 936880: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 936881: xor eax, eax */
  eax = 0;
/* 936883: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 936884: ret  */
  esp += 4; SPILL(); return;
L_936885: /* 936885: fmul dword ptr [edx + ecx] */
  ST0 = ST0 * (F32((uint32_t)(edx + ecx)));
/* 936888: fchs  */
  ST0 = -ST0;
/* 93688a: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* 93688d: fabs  */
  ST0 = fabs(ST0);
/* 93688f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 936891: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 936893: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 936895: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 936899: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93689b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93689f: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 9368a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9368a3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9368a6: jne 0x9368ae */
  if (!zf) goto L_9368ae;
L_9368a8: /* 9368a8: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9368ac: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_9368ae: /* 9368ae: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9368b2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9368b4: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* 9368b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9368b8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9368bb: jp 0x9368c5 */
  if (pf) goto L_9368c5;
L_9368bd: /* 9368bd: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9368c1: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9368c3: jmp 0x9368c7 */
  goto L_9368c7;
L_9368c5: /* 9368c5: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9368c7: /* 9368c7: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9368cb: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9368cd: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 9368cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9368d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9368d4: jnp 0x93687e */
  if (!pf) goto L_93687e;
L_9368d6: /* 9368d6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9368d7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9368da: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9368dd: jl 0x936860 */
  if ((sf != of)) goto L_936860;
L_9368df: /* 9368df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9368e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9368e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9368e2: mov eax, 1 */
  eax = 0x1u;
/* 9368e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9368e8: ret  */
  esp += 4; SPILL(); return;
}

void f_9368f0(void) {
  LOAD_REGS();
L_9368f0: /* 9368f0: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9368f3: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 9368f7: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 9368fb: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9368fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9368ff: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 936903: fld dword ptr [ebx + edx*4] */
  { double v = F32((uint32_t)(ebx + edx*4)); FPUSH(v); }
/* 936906: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 936907: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93690b: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 93690f: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 936912: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 936913: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 936919: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93691a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 93691c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93691e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936921: jnp 0x936931 */
  if (!pf) goto L_936931;
L_936923: /* 936923: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 936929: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 93692b: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 93692f: jmp 0x936939 */
  goto L_936939;
L_936931: /* 936931: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
L_936939: /* 936939: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93693f: mov byte ptr [esp + 0x5c], 1 */
  W8((uint32_t)(esp + 0x5cu), 0x1u);
/* 936944: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936946: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 936949: jnp 0x936950 */
  if (!pf) goto L_936950;
L_93694b: /* 93694b: mov byte ptr [esp + 0x5c], 0 */
  W8((uint32_t)(esp + 0x5cu), 0x0u);
L_936950: /* 936950: mov ecx, edx */
  ecx = edx;
/* 936952: mov esi, 1 */
  esi = 0x1u;
/* 936957: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 936959: mov eax, 1 */
  eax = 0x1u;
/* 93695e: mov dword ptr [esp + edx*4 + 0x18], 0 */
  W32((uint32_t)(esp + edx*4 + 0x18u), 0x0u);
/* 936966: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  esi = r;
  }
/* 936969: mov ecx, esi */
  ecx = esi;
/* 93696b: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 93696d: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 936971: fld dword ptr [ecx + esi*4] */
  { double v = F32((uint32_t)(ecx + esi*4)); FPUSH(v); }
/* 936974: fchs  */
  ST0 = -ST0;
/* 936976: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 936979: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 93697c: mov dword ptr [esp + esi*4 + 0x18], edx */
  W32((uint32_t)(esp + esi*4 + 0x18u), edx);
/* 936980: fstp dword ptr [esp + eax*4 + 0x18] */
  WF32((uint32_t)(esp + eax*4 + 0x18u), ST0); FPOP();
/* 936984: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 936988: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936989: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 93698d: call 0x934970 */
  esp -= 4; W32(esp, 0x936992u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 936992: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 936996: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 93699a: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93699e: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 9369a2: fld dword ptr [ebx + edi*4] */
  { double v = F32((uint32_t)(ebx + edi*4)); FPUSH(v); }
/* 9369a5: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
/* 9369a9: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 9369ad: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 9369b1: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 9369b5: fmul dword ptr [esp + edi*4 + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + edi*4 + 0x30u)));
/* 9369b9: mov ecx, esi */
  ecx = esi;
/* 9369bb: mov eax, 1 */
  eax = 0x1u;
/* 9369c0: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 9369c2: fstp dword ptr [esp + edi*4 + 0x30] */
  WF32((uint32_t)(esp + edi*4 + 0x30u), ST0); FPOP();
/* 9369c6: fld dword ptr [ebx + ebp*4] */
  { double v = F32((uint32_t)(ebx + ebp*4)); FPUSH(v); }
/* 9369c9: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 9369cd: fmul dword ptr [esp + ebp*4 + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + ebp*4 + 0x30u)));
/* 9369d1: mov dword ptr [esp + ecx*4 + 0x24], 0 */
  W32((uint32_t)(esp + ecx*4 + 0x24u), 0x0u);
/* 9369d9: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 9369dd: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9369e0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9369e3: fstp dword ptr [esp + ebp*4 + 0x30] */
  WF32((uint32_t)(esp + ebp*4 + 0x30u), ST0); FPOP();
/* 9369e7: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 9369eb: fld dword ptr [ecx + esi*4 + 0xc] */
  { double v = F32((uint32_t)(ecx + esi*4 + 0xcu)); FPUSH(v); }
/* 9369ef: mov dword ptr [esp + esi*4 + 0x24], edx */
  W32((uint32_t)(esp + esi*4 + 0x24u), edx);
/* 9369f3: fchs  */
  ST0 = -ST0;
/* 9369f5: fstp dword ptr [esp + eax + 0x24] */
  WF32((uint32_t)(esp + eax + 0x24u), ST0); FPOP();
/* 9369f9: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9369fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9369fe: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 936a02: call 0x934970 */
  esp -= 4; W32(esp, 0x936a07u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 936a07: fld dword ptr [ebx + edi*4] */
  { double v = F32((uint32_t)(ebx + edi*4)); FPUSH(v); }
/* 936a0a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 936a0e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 936a12: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 936a16: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 936a1a: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 936a1e: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 936a22: fmul dword ptr [esp + edi*4 + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + edi*4 + 0x3cu)));
/* 936a26: mov ecx, esi */
  ecx = esi;
/* 936a28: mov eax, 1 */
  eax = 0x1u;
/* 936a2d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 936a2f: fstp dword ptr [esp + edi*4 + 0x3c] */
  WF32((uint32_t)(esp + edi*4 + 0x3cu), ST0); FPOP();
/* 936a33: fld dword ptr [ebx + ebp*4] */
  { double v = F32((uint32_t)(ebx + ebp*4)); FPUSH(v); }
/* 936a36: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 936a3a: fmul dword ptr [esp + ebp*4 + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + ebp*4 + 0x3cu)));
/* 936a3e: mov dword ptr [esp + ecx*4 + 0x24], 0 */
  W32((uint32_t)(esp + ecx*4 + 0x24u), 0x0u);
/* 936a46: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 936a4a: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 936a4d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 936a50: fstp dword ptr [esp + ebp*4 + 0x3c] */
  WF32((uint32_t)(esp + ebp*4 + 0x3cu), ST0); FPOP();
/* 936a54: mov edx, dword ptr [eax + ecx + 0x18] */
  edx = R32((uint32_t)(eax + ecx + 0x18u));
/* 936a58: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 936a5b: fld dword ptr [esi + ecx + 0x18] */
  { double v = F32((uint32_t)(esi + ecx + 0x18u)); FPUSH(v); }
/* 936a5f: mov dword ptr [esp + esi + 0x24], edx */
  W32((uint32_t)(esp + esi + 0x24u), edx);
/* 936a63: fchs  */
  ST0 = -ST0;
/* 936a65: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 936a69: fstp dword ptr [esp + eax + 0x24] */
  WF32((uint32_t)(esp + eax + 0x24u), ST0); FPOP();
/* 936a6d: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 936a71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936a72: call 0x934970 */
  esp -= 4; W32(esp, 0x936a77u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 936a77: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 936a7b: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 936a7f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 936a83: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 936a87: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 936a8b: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 936a8f: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 936a93: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 936a97: fld dword ptr [esp + edi*4 + 0x48] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x48u)); FPUSH(v); }
/* 936a9b: fmul dword ptr [ebx + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + edi*4)));
/* 936a9e: mov dword ptr [esp + ecx*4 + 0x18], 0 */
  W32((uint32_t)(esp + ecx*4 + 0x18u), 0x0u);
/* 936aa6: fstp dword ptr [esp + edi*4 + 0x48] */
  WF32((uint32_t)(esp + edi*4 + 0x48u), ST0); FPOP();
/* 936aaa: fld dword ptr [esp + ebp*4 + 0x48] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x48u)); FPUSH(v); }
/* 936aae: fmul dword ptr [ebx + ebp*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ebp*4)));
/* 936ab1: fstp dword ptr [esp + ebp*4 + 0x48] */
  WF32((uint32_t)(esp + ebp*4 + 0x48u), ST0); FPOP();
/* 936ab5: fld dword ptr [eax + edi*4] */
  { double v = F32((uint32_t)(eax + edi*4)); FPUSH(v); }
/* 936ab8: fmul dword ptr [ebx + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + edi*4)));
/* 936abb: fstp dword ptr [esp + edi*4 + 0x18] */
  WF32((uint32_t)(esp + edi*4 + 0x18u), ST0); FPOP();
/* 936abf: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 936ac2: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936ac6: fmul dword ptr [ebx + ebp*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ebp*4)));
/* 936ac9: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 936acd: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 936ad0: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 936ad4: fsub dword ptr [esp + edi*4 + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi*4 + 0x30u)));
/* 936ad8: mov dword ptr [esp + ebp*4 + 0x18], edx */
  W32((uint32_t)(esp + ebp*4 + 0x18u), edx);
/* 936adc: fsub dword ptr [esp + ebp*4 + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebp*4 + 0x30u)));
/* 936ae0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936ae6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936ae8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936aeb: jp 0x936af4 */
  if (pf) goto L_936af4;
L_936aed: /* 936aed: mov eax, 1 */
  eax = 0x1u;
/* 936af2: jmp 0x936af6 */
  goto L_936af6;
L_936af4: /* 936af4: xor eax, eax */
  eax = 0;
L_936af6: /* 936af6: movzx esi, byte ptr [esp + 0x5c] */
  esi = (uint32_t)(R8((uint32_t)(esp + 0x5cu)));
/* 936afb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936afd: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 936b01: jne 0x936ba3 */
  if (!zf) goto L_936ba3;
L_936b07: /* 936b07: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936b0b: fld dword ptr [eax + ecx*4 + 0xc] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xcu)); FPUSH(v); }
/* 936b0f: fsub dword ptr [esp + edi*4 + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi*4 + 0x3cu)));
/* 936b13: fsub dword ptr [esp + ebp*4 + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebp*4 + 0x3cu)));
/* 936b17: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936b1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936b1f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936b22: jp 0x936b2b */
  if (pf) goto L_936b2b;
L_936b24: /* 936b24: mov eax, 1 */
  eax = 0x1u;
/* 936b29: jmp 0x936b2d */
  goto L_936b2d;
L_936b2b: /* 936b2b: xor eax, eax */
  eax = 0;
L_936b2d: /* 936b2d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936b2f: jne 0x936ba3 */
  if (!zf) goto L_936ba3;
L_936b31: /* 936b31: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936b35: fld dword ptr [eax + ecx*4 + 0x18] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0x18u)); FPUSH(v); }
/* 936b39: fsub dword ptr [esp + edi*4 + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi*4 + 0x48u)));
/* 936b3d: fsub dword ptr [esp + ebp*4 + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebp*4 + 0x48u)));
/* 936b41: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936b47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936b49: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936b4c: jp 0x936b55 */
  if (pf) goto L_936b55;
L_936b4e: /* 936b4e: mov eax, 1 */
  eax = 0x1u;
/* 936b53: jmp 0x936b57 */
  goto L_936b57;
L_936b55: /* 936b55: xor eax, eax */
  eax = 0;
L_936b57: /* 936b57: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936b59: jne 0x936ba3 */
  if (!zf) goto L_936ba3;
L_936b5b: /* 936b5b: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 936b5f: fsub dword ptr [esp + edi*4 + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi*4 + 0x18u)));
/* 936b63: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 936b67: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 936b6b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 936b6f: fchs  */
  ST0 = -ST0;
/* 936b71: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 936b73: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 936b75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936b77: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 936b7a: jne 0x936ba1 */
  if (!zf) goto L_936ba1;
L_936b7c: /* 936b7c: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 936b80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936b82: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936b85: jp 0x936ba1 */
  if (pf) goto L_936ba1;
L_936b87: /* 936b87: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936b89: fstp dword ptr [eax + ecx*4] */
  WF32((uint32_t)(eax + ecx*4), ST0); FPOP();
/* 936b8c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936b8e: mov esi, dword ptr [ebx + edi*4] */
  esi = R32((uint32_t)(ebx + edi*4));
/* 936b91: mov dword ptr [eax + edi*4], esi */
  W32((uint32_t)(eax + edi*4), esi);
/* 936b94: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936b96: mov esi, dword ptr [ebx + ebp*4] */
  esi = R32((uint32_t)(ebx + ebp*4));
/* 936b99: mov dword ptr [eax + ebp*4], esi */
  W32((uint32_t)(eax + ebp*4), esi);
/* 936b9c: add dword ptr [edx], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* 936b9f: jmp 0x936ba3 */
  goto L_936ba3;
L_936ba1: /* 936ba1: fstp st(0) */
  STI(0) = ST0; FPOP();
L_936ba3: /* 936ba3: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936ba7: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 936baa: fsub dword ptr [esp + edi*4 + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi*4 + 0x30u)));
/* 936bae: fadd dword ptr [esp + ebp*4 + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + ebp*4 + 0x30u)));
/* 936bb2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936bb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936bba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936bbd: jp 0x936bc6 */
  if (pf) goto L_936bc6;
L_936bbf: /* 936bbf: mov eax, 1 */
  eax = 0x1u;
/* 936bc4: jmp 0x936bc8 */
  goto L_936bc8;
L_936bc6: /* 936bc6: xor eax, eax */
  eax = 0;
L_936bc8: /* 936bc8: movzx esi, byte ptr [esp + 0x5c] */
  esi = (uint32_t)(R8((uint32_t)(esp + 0x5cu)));
/* 936bcd: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936bcf: jne 0x936c77 */
  if (!zf) goto L_936c77;
L_936bd5: /* 936bd5: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936bd9: fld dword ptr [eax + ecx*4 + 0xc] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xcu)); FPUSH(v); }
/* 936bdd: fsub dword ptr [esp + edi*4 + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi*4 + 0x3cu)));
/* 936be1: fadd dword ptr [esp + ebp*4 + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + ebp*4 + 0x3cu)));
/* 936be5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936beb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936bed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936bf0: jp 0x936bf9 */
  if (pf) goto L_936bf9;
L_936bf2: /* 936bf2: mov eax, 1 */
  eax = 0x1u;
/* 936bf7: jmp 0x936bfb */
  goto L_936bfb;
L_936bf9: /* 936bf9: xor eax, eax */
  eax = 0;
L_936bfb: /* 936bfb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936bfd: jne 0x936c77 */
  if (!zf) goto L_936c77;
L_936bff: /* 936bff: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936c03: fld dword ptr [eax + ecx*4 + 0x18] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0x18u)); FPUSH(v); }
/* 936c07: fsub dword ptr [esp + edi*4 + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi*4 + 0x48u)));
/* 936c0b: fadd dword ptr [esp + ebp*4 + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + ebp*4 + 0x48u)));
/* 936c0f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936c15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936c17: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936c1a: jp 0x936c23 */
  if (pf) goto L_936c23;
L_936c1c: /* 936c1c: mov eax, 1 */
  eax = 0x1u;
/* 936c21: jmp 0x936c25 */
  goto L_936c25;
L_936c23: /* 936c23: xor eax, eax */
  eax = 0;
L_936c25: /* 936c25: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936c27: jne 0x936c77 */
  if (!zf) goto L_936c77;
L_936c29: /* 936c29: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 936c2d: fsub dword ptr [esp + edi*4 + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi*4 + 0x18u)));
/* 936c31: fadd dword ptr [esp + ebp*4 + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + ebp*4 + 0x18u)));
/* 936c35: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 936c39: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 936c3d: fchs  */
  ST0 = -ST0;
/* 936c3f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 936c41: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 936c43: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936c45: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 936c48: jne 0x936c75 */
  if (!zf) goto L_936c75;
L_936c4a: /* 936c4a: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 936c4e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936c50: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936c53: jp 0x936c75 */
  if (pf) goto L_936c75;
L_936c55: /* 936c55: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936c57: fstp dword ptr [eax + ecx*4] */
  WF32((uint32_t)(eax + ecx*4), ST0); FPOP();
/* 936c5a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936c5c: mov esi, dword ptr [ebx + edi*4] */
  esi = R32((uint32_t)(ebx + edi*4));
/* 936c5f: mov dword ptr [eax + edi*4], esi */
  W32((uint32_t)(eax + edi*4), esi);
/* 936c62: fld dword ptr [ebx + ebp*4] */
  { double v = F32((uint32_t)(ebx + ebp*4)); FPUSH(v); }
/* 936c65: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936c67: fchs  */
  ST0 = -ST0;
/* 936c69: fstp dword ptr [eax + ebp*4] */
  WF32((uint32_t)(eax + ebp*4), ST0); FPOP();
/* 936c6c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936c6e: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936c71: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 936c73: jmp 0x936c77 */
  goto L_936c77;
L_936c75: /* 936c75: fstp st(0) */
  STI(0) = ST0; FPOP();
L_936c77: /* 936c77: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936c7b: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 936c7e: fadd dword ptr [esp + edi*4 + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + edi*4 + 0x30u)));
/* 936c82: fadd dword ptr [esp + ebp*4 + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + ebp*4 + 0x30u)));
/* 936c86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936c8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936c8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936c91: jp 0x936c9a */
  if (pf) goto L_936c9a;
L_936c93: /* 936c93: mov eax, 1 */
  eax = 0x1u;
/* 936c98: jmp 0x936c9c */
  goto L_936c9c;
L_936c9a: /* 936c9a: xor eax, eax */
  eax = 0;
L_936c9c: /* 936c9c: movzx esi, byte ptr [esp + 0x5c] */
  esi = (uint32_t)(R8((uint32_t)(esp + 0x5cu)));
/* 936ca1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936ca3: jne 0x936d4d */
  if (!zf) goto L_936d4d;
L_936ca9: /* 936ca9: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936cad: fld dword ptr [eax + ecx*4 + 0xc] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xcu)); FPUSH(v); }
/* 936cb1: fadd dword ptr [esp + edi*4 + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + edi*4 + 0x3cu)));
/* 936cb5: fadd dword ptr [esp + ebp*4 + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + ebp*4 + 0x3cu)));
/* 936cb9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936cbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936cc1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936cc4: jp 0x936ccd */
  if (pf) goto L_936ccd;
L_936cc6: /* 936cc6: mov eax, 1 */
  eax = 0x1u;
/* 936ccb: jmp 0x936ccf */
  goto L_936ccf;
L_936ccd: /* 936ccd: xor eax, eax */
  eax = 0;
L_936ccf: /* 936ccf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936cd1: jne 0x936d4d */
  if (!zf) goto L_936d4d;
L_936cd3: /* 936cd3: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936cd7: fld dword ptr [eax + ecx*4 + 0x18] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0x18u)); FPUSH(v); }
/* 936cdb: fadd dword ptr [esp + edi*4 + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + edi*4 + 0x48u)));
/* 936cdf: fadd dword ptr [esp + ebp*4 + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + ebp*4 + 0x48u)));
/* 936ce3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936ce9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936ceb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936cee: jp 0x936cf7 */
  if (pf) goto L_936cf7;
L_936cf0: /* 936cf0: mov eax, 1 */
  eax = 0x1u;
/* 936cf5: jmp 0x936cf9 */
  goto L_936cf9;
L_936cf7: /* 936cf7: xor eax, eax */
  eax = 0;
L_936cf9: /* 936cf9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936cfb: jne 0x936d4d */
  if (!zf) goto L_936d4d;
L_936cfd: /* 936cfd: fld dword ptr [esp + ebp*4 + 0x18] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x18u)); FPUSH(v); }
/* 936d01: fadd dword ptr [esp + edi*4 + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + edi*4 + 0x18u)));
/* 936d05: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 936d09: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 936d0d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 936d11: fchs  */
  ST0 = -ST0;
/* 936d13: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 936d15: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 936d17: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936d19: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 936d1c: jne 0x936d4b */
  if (!zf) goto L_936d4b;
L_936d1e: /* 936d1e: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 936d22: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936d24: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936d27: jp 0x936d4b */
  if (pf) goto L_936d4b;
L_936d29: /* 936d29: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936d2b: fstp dword ptr [eax + ecx*4] */
  WF32((uint32_t)(eax + ecx*4), ST0); FPOP();
/* 936d2e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936d30: fld dword ptr [ebx + edi*4] */
  { double v = F32((uint32_t)(ebx + edi*4)); FPUSH(v); }
/* 936d33: fchs  */
  ST0 = -ST0;
/* 936d35: fstp dword ptr [eax + edi*4] */
  WF32((uint32_t)(eax + edi*4), ST0); FPOP();
/* 936d38: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936d3a: fld dword ptr [ebx + ebp*4] */
  { double v = F32((uint32_t)(ebx + ebp*4)); FPUSH(v); }
/* 936d3d: fchs  */
  ST0 = -ST0;
/* 936d3f: fstp dword ptr [eax + ebp*4] */
  WF32((uint32_t)(eax + ebp*4), ST0); FPOP();
/* 936d42: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936d44: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936d47: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 936d49: jmp 0x936d4d */
  goto L_936d4d;
L_936d4b: /* 936d4b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_936d4d: /* 936d4d: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936d51: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 936d54: fadd dword ptr [esp + edi*4 + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + edi*4 + 0x30u)));
/* 936d58: fsub dword ptr [esp + ebp*4 + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebp*4 + 0x30u)));
/* 936d5c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936d62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936d64: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936d67: jp 0x936d70 */
  if (pf) goto L_936d70;
L_936d69: /* 936d69: mov eax, 1 */
  eax = 0x1u;
/* 936d6e: jmp 0x936d72 */
  goto L_936d72;
L_936d70: /* 936d70: xor eax, eax */
  eax = 0;
L_936d72: /* 936d72: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936d74: jne 0x936e22 */
  if (!zf) goto L_936e22;
L_936d7a: /* 936d7a: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936d7e: fld dword ptr [eax + ecx*4 + 0xc] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xcu)); FPUSH(v); }
/* 936d82: fadd dword ptr [esp + edi*4 + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + edi*4 + 0x3cu)));
/* 936d86: fsub dword ptr [esp + ebp*4 + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebp*4 + 0x3cu)));
/* 936d8a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936d90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936d92: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936d95: jp 0x936d9e */
  if (pf) goto L_936d9e;
L_936d97: /* 936d97: mov eax, 1 */
  eax = 0x1u;
/* 936d9c: jmp 0x936da0 */
  goto L_936da0;
L_936d9e: /* 936d9e: xor eax, eax */
  eax = 0;
L_936da0: /* 936da0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936da2: jne 0x936e22 */
  if (!zf) goto L_936e22;
L_936da4: /* 936da4: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 936da8: fld dword ptr [eax + ecx*4 + 0x18] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0x18u)); FPUSH(v); }
/* 936dac: fadd dword ptr [esp + edi*4 + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + edi*4 + 0x48u)));
/* 936db0: fsub dword ptr [esp + ebp*4 + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebp*4 + 0x48u)));
/* 936db4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 936dba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936dbc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936dbf: jp 0x936dc8 */
  if (pf) goto L_936dc8;
L_936dc1: /* 936dc1: mov eax, 1 */
  eax = 0x1u;
/* 936dc6: jmp 0x936dca */
  goto L_936dca;
L_936dc8: /* 936dc8: xor eax, eax */
  eax = 0;
L_936dca: /* 936dca: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936dcc: jne 0x936e22 */
  if (!zf) goto L_936e22;
L_936dce: /* 936dce: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 936dd2: fadd dword ptr [esp + edi*4 + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + edi*4 + 0x18u)));
/* 936dd6: fsub dword ptr [esp + ebp*4 + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebp*4 + 0x18u)));
/* 936dda: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 936dde: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 936de2: fchs  */
  ST0 = -ST0;
/* 936de4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 936de6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 936de8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936dea: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 936ded: jne 0x936e20 */
  if (!zf) goto L_936e20;
L_936def: /* 936def: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 936df3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 936df5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 936df8: jp 0x936e20 */
  if (pf) goto L_936e20;
L_936dfa: /* 936dfa: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936dfc: fstp dword ptr [eax + ecx*4] */
  WF32((uint32_t)(eax + ecx*4), ST0); FPOP();
/* 936dff: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 936e01: fld dword ptr [ebx + edi*4] */
  { double v = F32((uint32_t)(ebx + edi*4)); FPUSH(v); }
/* 936e04: fchs  */
  ST0 = -ST0;
/* 936e06: fstp dword ptr [ecx + edi*4] */
  WF32((uint32_t)(ecx + edi*4), ST0); FPOP();
/* 936e09: mov ecx, dword ptr [ebx + ebp*4] */
  ecx = R32((uint32_t)(ebx + ebp*4));
/* 936e0c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936e0e: mov dword ptr [eax + ebp*4], ecx */
  W32((uint32_t)(eax + ebp*4), ecx);
/* 936e11: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936e13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 936e14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 936e15: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936e18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 936e19: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 936e1b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 936e1c: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 936e1f: ret  */
  esp += 4; SPILL(); return;
L_936e20: /* 936e20: fstp st(0) */
  STI(0) = ST0; FPOP();
L_936e22: /* 936e22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 936e23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 936e24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 936e25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 936e26: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 936e29: ret  */
  esp += 4; SPILL(); return;
}

void f_936e30(void) {
  LOAD_REGS();
L_936e30: /* 936e30: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 936e33: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 936e37: xor eax, eax */
  eax = 0;
/* 936e39: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 936e3d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 936e41: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 936e45: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 936e49: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 936e4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936e4e: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 936e50: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 936e52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936e53: mov dword ptr [esp + 0x18], 0x9355a0 */
  W32((uint32_t)(esp + 0x18u), 0x9355a0u);
/* 936e5b: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 936e63: call 0x929df0 */
  esp -= 4; W32(esp, 0x936e68u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 936e68: mov eax, 1 */
  eax = 0x1u;
/* 936e6d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 936e70: ret 4 */
  esp += 8; SPILL(); return;
}

void f_936e80(void) {
  LOAD_REGS();
L_936e80: /* 936e80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 936e81: mov ebp, esp */
  ebp = esp;
/* 936e83: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 936e89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 936e8a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 936e8d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 936e8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 936e90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 936e91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936e92: call 0x9287f0 */
  esp -= 4; W32(esp, 0x936e97u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 936e97: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 936e9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936e9b: mov esi, eax */
  esi = eax;
/* 936e9d: call 0x9287f0 */
  esp -= 4; W32(esp, 0x936ea2u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 936ea2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 936ea4: mov edi, eax */
  edi = eax;
/* 936ea6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 936ea8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 936ea9: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 936eaf: call 0x92d570 */
  esp -= 4; W32(esp, 0x936eb4u); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 936eb4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 936eb7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 936eb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936eba: call 0x928730 */
  esp -= 4; W32(esp, 0x936ebfu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 936ebf: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 936ec2: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936ec5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 936ec6: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 936ec9: call 0x928730 */
  esp -= 4; W32(esp, 0x936eceu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 936ece: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 936ed1: mov esi, eax */
  esi = eax;
/* 936ed3: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 936ed6: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 936ed8: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 936edb: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 936ede: mov dword ptr [ebp - 0xc], 4 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x4u);
/* 936ee5: jmp 0x936ef0 */
  goto L_936ef0;
L_936ee7: /* 936ee7: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 936eea: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 936eed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_936ef0: /* 936ef0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936ef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936ef3: call 0x937350 */
  esp -= 4; W32(esp, 0x936ef8u); SPILL(); f_937350(); if (g_unwind) return; RELOAD();
/* 936ef8: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 936efb: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 936efe: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 936f01: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 936f02: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 936f05: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 936f08: jne 0x936ee7 */
  if (!zf) goto L_936ee7;
L_936f0a: /* 936f0a: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 936f0d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 936f10: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 936f12: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 936f15: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 936f18: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 936f1b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 936f1e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 936f21: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 936f24: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 936f26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936f27: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 936f2a: call 0x928610 */
  esp -= 4; W32(esp, 0x936f2fu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 936f2f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 936f32: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 936f35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936f36: call 0x928610 */
  esp -= 4; W32(esp, 0x936f3bu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 936f3b: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* 936f3e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 936f41: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 936f44: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 936f47: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 936f4a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 936f4d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 936f50: call 0x99cc00 */
  esp -= 4; W32(esp, 0x936f55u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 936f55: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 936f58: mov eax, esp */
  eax = esp;
/* 936f5a: lea edx, [esi + 0x30] */
  edx = (uint32_t)(esi + 0x30u);
/* 936f5d: mov dword ptr [edi + 0x34], eax */
  W32((uint32_t)(edi + 0x34u), eax);
/* 936f60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 936f61: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 936f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936f65: call 0x933ec0 */
  esp -= 4; W32(esp, 0x936f6au); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 936f6a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 936f6d: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 936f70: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 936f73: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 936f76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936f77: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 936f7a: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 936f7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 936f7f: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 936f82: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 936f84: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 936f86: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 936f8c: call 0x92e280 */
  esp -= 4; W32(esp, 0x936f91u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 936f91: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 936f94: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 936f9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 936f9b: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 936f9e: call 0x92e280 */
  esp -= 4; W32(esp, 0x936fa3u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 936fa3: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 936fa9: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 936fac: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 936faf: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 936fb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 936fb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936fb4: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 936fb7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 936fba: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 936fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 936fc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 936fc2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 936fc3: call dword ptr [edi + 0x30] */
  { uint32_t t = R32((uint32_t)(edi + 0x30u)); esp -= 4; W32(esp, 0x936fc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 936fc6: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 936fc9: xor esi, esi */
  esi = 0;
/* 936fcb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 936fcd: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* 936fd0: mov dword ptr [ebx + 0x10], esi */
  W32((uint32_t)(ebx + 0x10u), esi);
/* 936fd3: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 936fd6: mov dword ptr [ebx + 0x14], esi */
  W32((uint32_t)(ebx + 0x14u), esi);
/* 936fd9: mov dword ptr [ebx + 0x18], esi */
  W32((uint32_t)(ebx + 0x18u), esi);
/* 936fdc: mov dword ptr [ebx + 0x1c], esi */
  W32((uint32_t)(ebx + 0x1cu), esi);
/* 936fdf: jne 0x936ff2 */
  if (!zf) goto L_936ff2;
L_936fe1: /* 936fe1: xor eax, eax */
  eax = 0;
/* 936fe3: lea esp, [ebp - 0x10c] */
  esp = (uint32_t)(ebp + 0xfffffef4u);
/* 936fe9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 936fea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 936feb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 936fec: mov esp, ebp */
  esp = ebp;
/* 936fee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 936fef: ret 8 */
  esp += 12; SPILL(); return;
L_936ff2: /* 936ff2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 936ff4: lea edx, [ebp - 0x100] */
  edx = (uint32_t)(ebp + 0xffffff00u);
/* 936ffa: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 936ffd: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 937003: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 937006: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 93700c: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 93700f: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 937012: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 937018: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 93701b: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 93701e: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 937021: jle 0x937285 */
  if ((zf || sf != of)) goto L_937285;
L_937027: /* 937027: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 93702a: jmp 0x937030 */
  goto L_937030;
L_93702c: /* 93702c: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 93702f: nop  */
L_937030: /* 937030: cmp dword ptr [ebx + 0xc], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xcu))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 937037: jge 0x937285 */
  if ((sf == of)) goto L_937285;
L_93703d: /* 93703d: mov esi, dword ptr [edi + 0x34] */
  esi = R32((uint32_t)(edi + 0x34u));
/* 937040: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 937043: add esi, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 937046: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 937048: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93704b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 93704e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 937051: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937053: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 937056: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 937058: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93705a: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 93705d: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 93705f: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 937062: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 937064: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 937067: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 93706a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93706c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 93706f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 937072: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937074: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 937077: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 93707a: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 93707d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93707f: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 937082: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 937085: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937087: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 93708a: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93708d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93708f: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 937092: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 937095: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 937098: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 93709b: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 93709e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9370a0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 9370a3: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9370a6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9370a8: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 9370ab: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9370ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9370b0: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 9370b3: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9370b5: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 9370b8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9370ba: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 9370bd: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9370c0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9370c2: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 9370c5: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9370c8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9370ca: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 9370cd: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 9370d0: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 9370d3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9370d5: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 9370d8: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9370db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9370dd: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 9370e0: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9370e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9370e5: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 9370e8: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 9370eb: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9370ee: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 9370f1: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 9370f4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9370f6: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 9370f9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9370fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9370fe: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 937101: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 937104: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937106: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 937109: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 93710b: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 93710e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 937111: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 937114: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 937117: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937119: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 93711c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93711e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937120: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 937123: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 937126: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 937129: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 93712c: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 93712f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 937132: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937134: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 937137: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 937139: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93713b: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 93713e: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 937141: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 937144: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 937147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937148: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937149: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 93714c: call 0x933f50 */
  esp -= 4; W32(esp, 0x937151u); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 937151: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 937154: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 937157: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 93715a: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 93715d: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 937160: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 937163: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 937166: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 937168: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 937169: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 93716b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93716c: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 937172: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 937175: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 937178: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 93717e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 937181: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 937184: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 93718a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93718b: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 937191: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 937193: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 937195: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 93719b: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 93719e: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9371a1: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 9371a7: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9371aa: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 9371ad: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 9371b3: call 0x9372b0 */
  esp -= 4; W32(esp, 0x9371b8u); SPILL(); f_9372b0(); if (g_unwind) return; RELOAD();
/* 9371b8: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 9371be: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 9371c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9371c5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9371c8: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 9371ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9371cf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 9371d2: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 9371d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9371d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9371d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9371d8: lea edx, [ebp + 0xa] */
  edx = (uint32_t)(ebp + 0xau);
/* 9371db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9371dc: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 9371e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9371e3: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 9371e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9371ea: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 9371f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9371f1: call 0x937370 */
  esp -= 4; W32(esp, 0x9371f6u); SPILL(); f_937370(); if (g_unwind) return; RELOAD();
/* 9371f6: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9371f9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9371fb: je 0x937265 */
  if (zf) goto L_937265;
L_9371fd: /* 9371fd: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 937200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937201: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 937204: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937205: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 93720b: call 0x9349c0 */
  esp -= 4; W32(esp, 0x937210u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 937210: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 937213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937214: mov ecx, ebx */
  ecx = ebx;
/* 937216: call 0x933e40 */
  esp -= 4; W32(esp, 0x93721bu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93721b: mov dx, word ptr [ebp + 0xa] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xau))) & 0xffffu);
/* 93721f: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 937225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937226: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 937229: mov word ptr [ebx + 0x1c], dx */
  W16((uint32_t)(ebx + 0x1cu), (edx & 0xffffu));
/* 93722d: call 0x933e40 */
  esp -= 4; W32(esp, 0x937232u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 937232: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 937238: mov dword ptr [ebx + 0x18], ecx */
  W32((uint32_t)(ebx + 0x18u), ecx);
/* 93723b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 93723e: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 937244: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 937245: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 937248: call 0x933e60 */
  esp -= 4; W32(esp, 0x93724du); SPILL(); f_933e60(); if (g_unwind) return; RELOAD();
/* 93724d: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 937250: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 937253: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 937256: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 937259: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 93725a: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 93725d: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 937260: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 937263: jmp 0x937268 */
  goto L_937268;
L_937265: /* 937265: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_937268: /* 937268: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 93726b: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 93726e: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 937271: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 937272: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 937275: xor esi, esi */
  esi = 0;
/* 937277: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 937279: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 93727c: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* 93727f: jl 0x93702c */
  if ((sf != of)) goto L_93702c;
L_937285: /* 937285: lea eax, [ebx + 0x14] */
  eax = (uint32_t)(ebx + 0x14u);
/* 937288: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937289: call 0x9372e0 */
  esp -= 4; W32(esp, 0x93728eu); SPILL(); f_9372e0(); if (g_unwind) return; RELOAD();
/* 93728e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937290: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 937293: xor eax, eax */
  eax = 0;
/* 937295: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 937297: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 93729a: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 93729d: lea esp, [ebp - 0x10c] */
  esp = (uint32_t)(ebp + 0xfffffef4u);
/* 9372a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9372a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9372a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9372a6: mov esp, ebp */
  esp = ebp;
/* 9372a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9372a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9372b0(void) {
  LOAD_REGS();
L_9372b0: /* 9372b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9372b4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9372b6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9372ba: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 9372bc: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9372c0: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9372c2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9372c5: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 9372c8: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 9372cb: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9372ce: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 9372d1: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9372d4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9372e0(void) {
  LOAD_REGS();
L_9372e0: /* 9372e0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9372e6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9372ea: xor edx, edx */
  edx = 0;
/* 9372ec: xor eax, eax */
  eax = 0;
/* 9372ee: mov edi, edi */
  edi = edi;
L_9372f0: /* 9372f0: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 9372f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9372f4: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9372f7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9372f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9372fb: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9372fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9372ff: jl 0x9372f0 */
  if ((sf != of)) goto L_9372f0;
L_937301: /* 937301: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 937307: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937309: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93730c: jne 0x93732f */
  if (!zf) goto L_93732f;
L_93730e: /* 93730e: fsqrt  */
  ST0 = sqrt(ST0);
/* 937310: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 937316: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 937318: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93731a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93731c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 93731e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 937320: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 937323: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 937326: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 937329: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 93732c: ret 4 */
  esp += 8; SPILL(); return;
L_93732f: /* 93732f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937331: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 937337: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93733d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 937340: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 937343: ret 4 */
  esp += 8; SPILL(); return;
}

void f_937350(void) {
  LOAD_REGS();
L_937350: /* 937350: mov eax, ecx */
  eax = ecx;
/* 937352: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 937356: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 937358: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 93735a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 93735d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 937360: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 937363: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 937366: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 937369: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 93736c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_937370(void) {
  LOAD_REGS();
L_937370: /* 937370: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 937373: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 937377: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 937378: fmul dword ptr [0xa20e08] */
  ST0 = ST0 * (F32((uint32_t)(0xa20e08u)));
/* 93737e: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 937382: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 937385: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 937388: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 93738c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93738d: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 937390: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 937393: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 937396: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 937397: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 93739a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 93739d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9373a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9373a2: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9373a4: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9373a6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9373a8: fst dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0);
/* 9373ac: fabs  */
  ST0 = fabs(ST0);
/* 9373ae: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 9373b2: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 9373b6: fcomp dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
  FPOP();
/* 9373ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9373bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9373bf: jne 0x9373ca */
  if (!zf) goto L_9373ca;
L_9373c1: /* 9373c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9373c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9373c3: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 9373c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9373c6: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9373c9: ret  */
  esp += 4; SPILL(); return;
L_9373ca: /* 9373ca: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9373cc: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9373cf: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9373d2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9373d4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9373d6: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 9373d9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9373dc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9373de: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9373e0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9373e3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9373e5: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 9373e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9373ea: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9373ed: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9373f0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9373f3: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9373f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9373f8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9373fa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9373fc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9373ff: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 937401: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 937403: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 937406: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 937408: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 93740b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 93740d: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 937410: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 937413: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 937415: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 937417: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93741a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93741c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 93741f: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 937422: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 937425: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 937428: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93742a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 93742c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93742e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 937432: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 937434: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 937437: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 937439: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 93743c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93743e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 937441: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 937443: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 937446: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 937448: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93744b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93744d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 937450: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937452: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 937455: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 937458: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93745b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 93745e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 937460: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 937462: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937464: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 937468: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 93746c: fchs  */
  ST0 = -ST0;
/* 93746e: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 937472: fcom dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
/* 937476: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937478: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93747b: jne 0x93749f */
  if (!zf) goto L_93749f;
L_93747d: /* 93747d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 937481: fcomp dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
  FPOP();
/* 937485: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937487: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93748a: jne 0x93749f */
  if (!zf) goto L_93749f;
L_93748c: /* 93748c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 937490: fcomp dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
  FPOP();
/* 937494: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937496: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937499: je 0x93755e */
  if (zf) goto L_93755e;
L_93749f: /* 93749f: fcomp dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
  FPOP();
/* 9374a3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9374a5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9374a8: jp 0x9374cc */
  if (pf) goto L_9374cc;
L_9374aa: /* 9374aa: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9374ae: fcomp dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
  FPOP();
/* 9374b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9374b4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9374b7: jp 0x9374cc */
  if (pf) goto L_9374cc;
L_9374b9: /* 9374b9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9374bd: fcomp dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
  FPOP();
/* 9374c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9374c3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9374c6: jnp 0x937560 */
  if (!pf) goto L_937560;
L_9374cc: /* 9374cc: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 9374d0: mov dword ptr [esp + 0x58], 0x7f7fffff */
  W32((uint32_t)(esp + 0x58u), 0x7f7fffffu);
/* 9374d8: xor esi, esi */
  esi = 0;
/* 9374da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9374db: nop  */
/* 9374dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9374e0: /* 9374e0: mov eax, dword ptr [ebp + esi*4] */
  eax = R32((uint32_t)(ebp + esi*4));
/* 9374e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9374e6: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9374ea: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9374ed: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 9374f1: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 9374f5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9374f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9374f9: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 9374fd: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 937501: call 0x9376d0 */
  esp -= 4; W32(esp, 0x937506u); SPILL(); f_9376d0(); if (g_unwind) return; RELOAD();
/* 937506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 937508: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 93750c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93750d: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 937511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937512: call 0x9376f0 */
  esp -= 4; W32(esp, 0x937517u); SPILL(); f_9376f0(); if (g_unwind) return; RELOAD();
/* 937517: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93751a: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 93751e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93751f: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 937523: mov ebx, eax */
  ebx = eax;
/* 937525: call 0x92e280 */
  esp -= 4; W32(esp, 0x93752au); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93752a: fcom dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
/* 93752e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937530: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937533: jp 0x937620 */
  if (pf) goto L_937620;
L_937539: /* 937539: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 93753d: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 937541: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 937545: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 937546: call 0x933e40 */
  esp -= 4; W32(esp, 0x93754bu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93754b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 93754f: xor eax, eax */
  eax = 0;
/* 937551: mov ah, bl */
  eax = (eax & 0xffff00ffu) | (((uint32_t)((ebx & 0xffu)) & 0xffu) << 8);
/* 937553: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 937556: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 937559: jmp 0x937622 */
  goto L_937622;
L_93755e: /* 93755e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_937560: /* 937560: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 937564: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 937567: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 93756a: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93756e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 937572: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 937576: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 937579: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93757d: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 937581: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 937583: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 937586: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93758bu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93758b: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 93758f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 937593: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 937597: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 937599: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 93759d: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9375a1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9375a4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 9375a7: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 9375ab: mov word ptr [eax], 0x203 */
  W16((uint32_t)(eax), 0x203u);
/* 9375b0: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9375b4: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 9375b7: je 0x9375f6 */
  if (zf) goto L_9375f6;
L_9375b9: /* 9375b9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9375bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9375c1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9375c4: jne 0x9375f0 */
  if (!zf) goto L_9375f0;
L_9375c6: /* 9375c6: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 9375c9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9375cc: fchs  */
  ST0 = -ST0;
/* 9375ce: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 9375d2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9375d6: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 9375d9: fchs  */
  ST0 = -ST0;
/* 9375db: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9375df: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 9375e2: fchs  */
  ST0 = -ST0;
/* 9375e4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9375e7: call 0x92ec40 */
  esp -= 4; W32(esp, 0x9375ecu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 9375ec: lea ebp, [esp + 0x18] */
  ebp = (uint32_t)(esp + 0x18u);
L_9375f0: /* 9375f0: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9375f4: jmp 0x9375fc */
  goto L_9375fc;
L_9375f6: /* 9375f6: fchs  */
  ST0 = -ST0;
/* 9375f8: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
L_9375fc: /* 9375fc: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 9375ff: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 937603: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 937605: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 937608: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 93760b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 93760e: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 937612: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 937613: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 937616: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 937618: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 937619: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 93761b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 93761c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93761f: ret  */
  esp += 4; SPILL(); return;
L_937620: /* 937620: fstp st(0) */
  STI(0) = ST0; FPOP();
L_937622: /* 937622: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 937623: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 937626: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 937629: jl 0x9374e0 */
  if ((sf != of)) goto L_9374e0;
L_93762f: /* 93762f: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 937633: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 937634: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 937638: fcomp dword ptr [esp + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x58u)));
  FPOP();
/* 93763c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93763e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937641: jp 0x93764c */
  if (pf) goto L_93764c;
L_937643: /* 937643: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 937644: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 937645: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 937647: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 937648: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93764b: ret  */
  esp += 4; SPILL(); return;
L_93764c: /* 93764c: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 937650: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 937654: fsqrt  */
  ST0 = sqrt(ST0);
/* 937656: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 93765a: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 93765e: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 937662: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 937663: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937664: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937665: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 937669: call 0x9376d0 */
  esp -= 4; W32(esp, 0x93766eu); SPILL(); f_9376d0(); if (g_unwind) return; RELOAD();
/* 93766e: mov ecx, eax */
  ecx = eax;
/* 937670: call 0x9376a0 */
  esp -= 4; W32(esp, 0x937675u); SPILL(); f_9376a0(); if (g_unwind) return; RELOAD();
/* 937675: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 937679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93767a: call 0x933e40 */
  esp -= 4; W32(esp, 0x93767fu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93767f: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 937683: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 937687: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 93768b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93768c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93768d: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 93768f: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 937691: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 937692: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 937695: ret  */
  esp += 4; SPILL(); return;
}

void f_9376a0(void) {
  LOAD_REGS();
L_9376a0: /* 9376a0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9376a6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9376aa: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 9376ae: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 9376b2: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9376b5: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9376b9: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9376bc: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9376c0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9376c2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9376c4: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9376c7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9376ca: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9376d0(void) {
  LOAD_REGS();
L_9376d0: /* 9376d0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9376d3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9376d7: fchs  */
  ST0 = -ST0;
/* 9376d9: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9376dc: fchs  */
  ST0 = -ST0;
/* 9376de: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9376e0: fchs  */
  ST0 = -ST0;
/* 9376e2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9376e4: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9376e7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9376ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9376f0(void) {
  LOAD_REGS();
L_9376f0: /* 9376f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9376f3: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9376f7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9376fb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9376fe: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 937701: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 937704: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 937707: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937709: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 93770b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 93770d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93770f: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 937713: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 937719: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93771b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93771e: jp 0x93773f */
  if (pf) goto L_93773f;
L_937720: /* 937720: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 937724: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 937726: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 93772a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 93772c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 93772f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 937732: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 937735: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 937738: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 93773b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93773e: ret  */
  esp += 4; SPILL(); return;
L_93773f: /* 93773f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 937742: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 937745: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 937747: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 937749: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93774b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93774d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93774f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937751: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 937753: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 937755: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937757: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 937759: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93775b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93775d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 937761: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 937763: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937765: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937768: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 93776c: jne 0x937795 */
  if (!zf) goto L_937795;
L_93776e: /* 93776e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937770: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 937772: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 937774: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 937777: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 93777a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 93777d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 937781: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 937784: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 937786: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 937788: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 93778b: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 93778e: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 937791: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 937794: ret  */
  esp += 4; SPILL(); return;
L_937795: /* 937795: fdivr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) / ST0;
/* 937799: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93779b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 93779d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93779f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9377a2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9377a6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9377a8: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9377ab: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9377af: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9377b1: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 9377b3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9377b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9377b7: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 9377bb: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 9377be: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9377c2: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 9377c5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9377c9: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9377cb: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9377cd: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9377d0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9377d3: mov ax, 1 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x1u) & 0xffffu);
/* 9377d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9377da: ret  */
  esp += 4; SPILL(); return;
}

void f_9377e0(void) {
  LOAD_REGS();
L_9377e0: /* 9377e0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9377e3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9377e7: xor eax, eax */
  eax = 0;
/* 9377e9: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 9377ed: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 9377f1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9377f5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9377f9: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 9377fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9377fe: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 937800: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 937802: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937803: mov dword ptr [esp + 0x18], 0x936e80 */
  W32((uint32_t)(esp + 0x18u), 0x936e80u);
/* 93780b: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 937813: call 0x929df0 */
  esp -= 4; W32(esp, 0x937818u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 937818: mov eax, 1 */
  eax = 0x1u;
/* 93781d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 937820: ret 4 */
  esp += 8; SPILL(); return;
}

void f_937830(void) {
  LOAD_REGS();
L_937830: /* 937830: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 937833: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 937834: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 937835: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 937836: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 937837: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 93783b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93783c: call 0x928730 */
  esp -= 4; W32(esp, 0x937841u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 937841: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 937842: mov esi, eax */
  esi = eax;
/* 937844: call 0x9287f0 */
  esp -= 4; W32(esp, 0x937849u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 937849: mov edi, eax */
  edi = eax;
/* 93784b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93784c: call 0x92e600 */
  esp -= 4; W32(esp, 0x937851u); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 937851: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 937855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 937856: call 0x92e620 */
  esp -= 4; W32(esp, 0x93785bu); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 93785b: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 93785f: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 937865: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937867: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93786a: jnp 0x937d6a */
  if (!pf) goto L_937d6a;
L_937870: /* 937870: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 937874: lea ebp, [esi + 0x30] */
  ebp = (uint32_t)(esi + 0x30u);
/* 937877: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 937878: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 93787c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93787d: call 0x933ec0 */
  esp -= 4; W32(esp, 0x937882u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 937882: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 937883: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 937887: call 0x92e280 */
  esp -= 4; W32(esp, 0x93788cu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93788c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 937890: lea edi, [esi + 0x10] */
  edi = (uint32_t)(esi + 0x10u);
/* 937893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 937894: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 937898: call 0x92e280 */
  esp -= 4; W32(esp, 0x93789du); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93789d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9378a1: lea ebx, [esi + 0x20] */
  ebx = (uint32_t)(esi + 0x20u);
/* 9378a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9378a5: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9378a9: call 0x92e280 */
  esp -= 4; W32(esp, 0x9378aeu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9378ae: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9378b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9378b3: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9378b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9378b8: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 9378bc: call 0x933ec0 */
  esp -= 4; W32(esp, 0x9378c1u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 9378c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9378c2: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9378c6: call 0x92e280 */
  esp -= 4; W32(esp, 0x9378cbu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9378cb: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9378cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9378d0: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9378d4: call 0x92e280 */
  esp -= 4; W32(esp, 0x9378d9u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9378d9: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9378dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9378de: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9378e2: call 0x92e280 */
  esp -= 4; W32(esp, 0x9378e7u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9378e7: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9378eb: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 9378ef: mov dword ptr [esp + 0x60], 0x7f7fffff */
  W32((uint32_t)(esp + 0x60u), 0x7f7fffffu);
/* 9378f7: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 9378ff: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 937907: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93790b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93790f: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 937913: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 937917: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 93791b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93791f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 937925: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 937929: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 93792d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 937931: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 937935: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937937: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93793b: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 93793f: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 937943: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 937947: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93794b: fcomp dword ptr [esp + 0x64] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x64u)));
  FPOP();
/* 93794f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937951: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937954: jp 0x93798b */
  if (pf) goto L_93798b;
L_937956: /* 937956: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93795a: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 93795e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937960: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937963: jp 0x93798b */
  if (pf) goto L_93798b;
L_937965: /* 937965: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 937969: fchs  */
  ST0 = -ST0;
/* 93796b: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 93796f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937971: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937974: jp 0x93798b */
  if (pf) goto L_93798b;
L_937976: /* 937976: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937978: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 937980: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 937986: jmp 0x937bfb */
  goto L_937bfb;
L_93798b: /* 93798b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93798f: fabs  */
  ST0 = fabs(ST0);
/* 937991: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 937997: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937999: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93799c: jne 0x937a8e */
  if (!zf) goto L_937a8e;
L_9379a2: /* 9379a2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9379a8: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* 9379ac: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9379b0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9379b4: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 9379b8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9379bc: fst dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0);
/* 9379c0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9379c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9379c8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9379cb: jne 0x937a1f */
  if (!zf) goto L_937a1f;
L_9379cd: /* 9379cd: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9379d1: fcomp dword ptr [0xa13bbc] */
  fpu_com(ST0, F32((uint32_t)(0xa13bbcu)));
  FPOP();
/* 9379d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9379d9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9379dc: jp 0x937a1f */
  if (pf) goto L_937a1f;
L_9379de: /* 9379de: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9379e2: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 9379e6: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 9379ea: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9379ee: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 9379f2: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 9379f6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9379f8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9379fa: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9379fc: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9379fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937a00: fcomp dword ptr [esp + 0x64] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x64u)));
  FPOP();
/* 937a04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937a06: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937a08: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937a0b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937a0d: jp 0x937a1f */
  if (pf) goto L_937a1f;
L_937a0f: /* 937a0f: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 937a13: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937a15: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 937a1b: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
L_937a1f: /* 937a1f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 937a23: fchs  */
  ST0 = -ST0;
/* 937a25: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 937a29: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 937a2d: fst dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0);
/* 937a31: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 937a37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937a39: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937a3c: jne 0x937a8e */
  if (!zf) goto L_937a8e;
L_937a3e: /* 937a3e: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 937a42: fcomp dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
  FPOP();
/* 937a46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937a48: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937a4b: jp 0x937a8e */
  if (pf) goto L_937a8e;
L_937a4d: /* 937a4d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 937a51: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 937a55: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 937a59: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 937a5d: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 937a61: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 937a65: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 937a67: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 937a69: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 937a6b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 937a6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937a6f: fcomp dword ptr [esp + 0x64] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x64u)));
  FPOP();
/* 937a73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937a75: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937a77: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937a7a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937a7c: jp 0x937a8e */
  if (pf) goto L_937a8e;
L_937a7e: /* 937a7e: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 937a82: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937a84: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 937a8a: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
L_937a8e: /* 937a8e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 937a92: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 937a96: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 937a9a: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 937a9e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937aa0: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 937aa4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 937aa8: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 937aac: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 937ab0: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 937ab4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937ab6: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 937ab8: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 937abc: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 937ac0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 937ac4: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 937ac8: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 937acc: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 937ad2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 937ad4: fst dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0);
/* 937ad8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 937ade: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937ae0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937ae3: jne 0x937be6 */
  if (!zf) goto L_937be6;
L_937ae9: /* 937ae9: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 937aed: fabs  */
  ST0 = fabs(ST0);
/* 937aef: fcomp dword ptr [0xa20e04] */
  fpu_com(ST0, F32((uint32_t)(0xa20e04u)));
  FPOP();
/* 937af5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937af7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937afa: jne 0x937be6 */
  if (!zf) goto L_937be6;
L_937b00: /* 937b00: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 937b04: fsqrt  */
  ST0 = sqrt(ST0);
/* 937b06: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 937b0a: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 937b0e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 937b10: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 937b14: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 937b18: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 937b1c: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 937b20: fst dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0);
/* 937b24: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 937b2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937b2c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937b2f: jne 0x937b7c */
  if (!zf) goto L_937b7c;
L_937b31: /* 937b31: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 937b35: fcomp dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
  FPOP();
/* 937b39: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937b3b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937b3e: jp 0x937b7c */
  if (pf) goto L_937b7c;
L_937b40: /* 937b40: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 937b44: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 937b48: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 937b4c: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 937b50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937b52: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937b55: jp 0x937b7a */
  if (pf) goto L_937b7a;
L_937b57: /* 937b57: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 937b5b: fchs  */
  ST0 = -ST0;
/* 937b5d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 937b5f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 937b61: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937b63: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937b66: jne 0x937b7c */
  if (!zf) goto L_937b7c;
L_937b68: /* 937b68: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 937b6c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937b6e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 937b74: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 937b78: jmp 0x937b7c */
  goto L_937b7c;
L_937b7a: /* 937b7a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_937b7c: /* 937b7c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 937b80: fchs  */
  ST0 = -ST0;
/* 937b82: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 937b86: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 937b8a: fst dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0);
/* 937b8e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 937b94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937b96: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937b99: jne 0x937be6 */
  if (!zf) goto L_937be6;
L_937b9b: /* 937b9b: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 937b9f: fcomp dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
  FPOP();
/* 937ba3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937ba5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937ba8: jp 0x937be6 */
  if (pf) goto L_937be6;
L_937baa: /* 937baa: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 937bae: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 937bb2: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 937bb6: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 937bba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937bbc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937bbf: jp 0x937be4 */
  if (pf) goto L_937be4;
L_937bc1: /* 937bc1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 937bc5: fchs  */
  ST0 = -ST0;
/* 937bc7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 937bc9: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 937bcb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937bcd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937bd0: jne 0x937be6 */
  if (!zf) goto L_937be6;
L_937bd2: /* 937bd2: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 937bd6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 937bd8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 937bde: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 937be2: jmp 0x937be6 */
  goto L_937be6;
L_937be4: /* 937be4: fstp st(0) */
  STI(0) = ST0; FPOP();
L_937be6: /* 937be6: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 937bea: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 937bf0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937bf2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937bf5: jp 0x937d68 */
  if (pf) goto L_937d68;
L_937bfb: /* 937bfb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 937bff: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 937c03: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 937c07: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 937c0b: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 937c0f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 937c13: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 937c17: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 937c1b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 937c1d: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 937c21: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 937c25: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 937c29: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 937c2d: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 937c31: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 937c35: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 937c39: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 937c3b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 937c3d: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 937c3f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937c41: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 937c45: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 937c47: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937c49: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 937c4c: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 937c4f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 937c51: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 937c54: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 937c58: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 937c5b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937c5d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 937c61: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 937c64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937c66: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 937c69: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 937c6c: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 937c6f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 937c73: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 937c76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937c78: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 937c7c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 937c7f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937c81: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 937c84: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 937c87: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 937c8b: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 937c8f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 937c93: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 937c97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937c99: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 937c9d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 937ca1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937ca3: fsqrt  */
  ST0 = sqrt(ST0);
/* 937ca5: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 937ca9: fstp dword ptr [ecx + 0x1c] */
  WF32((uint32_t)(ecx + 0x1cu), ST0); FPOP();
/* 937cac: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 937cb2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937cb4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937cb7: jp 0x937d10 */
  if (pf) goto L_937d10;
L_937cb9: /* 937cb9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 937cbb: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 937cbf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 937cc1: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 937cc5: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 937cc9: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 937ccd: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 937cd1: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 937cd5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937cd7: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 937cdb: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 937cdf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937ce1: fsqrt  */
  ST0 = sqrt(ST0);
/* 937ce3: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 937ce9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937ceb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937cee: jnp 0x937d0e */
  if (!pf) goto L_937d0e;
L_937cf0: /* 937cf0: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 937cf6: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 937cfa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 937cfc: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 937d00: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 937d04: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 937d06: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 937d0a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 937d0c: jmp 0x937d10 */
  goto L_937d10;
L_937d0e: /* 937d0e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_937d10: /* 937d10: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 937d14: mov eax, 1 */
  eax = 0x1u;
/* 937d19: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 937d1b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 937d1d: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 937d1f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937d21: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 937d25: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 937d27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 937d28: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937d2a: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 937d2d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 937d2f: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 937d32: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 937d36: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 937d39: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937d3b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 937d3f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 937d42: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937d44: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 937d47: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 937d4a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 937d4e: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 937d51: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937d53: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 937d57: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 937d5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 937d5b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 937d5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 937d5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 937d5f: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 937d62: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 937d65: ret 0x10 */
  esp += 20; SPILL(); return;
L_937d68: /* 937d68: fstp st(0) */
  STI(0) = ST0; FPOP();
L_937d6a: /* 937d6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 937d6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 937d6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 937d6d: xor eax, eax */
  eax = 0;
/* 937d6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 937d70: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 937d73: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_937d80(void) {
  LOAD_REGS();
L_937d80: /* 937d80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 937d84: push 0x937830 */
  { uint32_t v = 0x937830u; esp -= 4; W32(esp, v); }
/* 937d89: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 937d8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937d8c: call 0x929ec0 */
  esp -= 4; W32(esp, 0x937d91u); SPILL(); f_929ec0(); if (g_unwind) return; RELOAD();
/* 937d91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_937da0(void) {
  LOAD_REGS();
L_937da0: /* 937da0: sub esp, 0x124 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x124u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 937da6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 937da7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 937da8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 937da9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 937daa: push 0x9384b0 */
  { uint32_t v = 0x9384b0u; esp -= 4; W32(esp, v); }
/* 937daf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 937db1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 937db3: lea eax, [esp + 0x70] */
  eax = (uint32_t)(esp + 0x70u);
/* 937db7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937db8: call 0x92c0e0 */
  esp -= 4; W32(esp, 0x937dbdu); SPILL(); f_92c0e0(); if (g_unwind) return; RELOAD();
/* 937dbd: mov edi, dword ptr [esp + 0x13c] */
  edi = R32((uint32_t)(esp + 0x13cu));
/* 937dc4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 937dc6: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 937dc9: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 937dcc: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 937dd0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 937dd3: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 937dd7: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 937dda: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 937dde: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 937de1: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 937de5: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 937de8: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 937dec: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 937def: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 937df6: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 937dfd: mov dword ptr [esp + 0x88], edx */
  W32((uint32_t)(esp + 0x88u), edx);
/* 937e04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937e05: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 937e0c: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 937e0f: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 937e13: lea esi, [edi + 0x30] */
  esi = (uint32_t)(edi + 0x30u);
/* 937e16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 937e17: mov ecx, esi */
  ecx = esi;
/* 937e19: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 937e20: call 0x9376d0 */
  esp -= 4; W32(esp, 0x937e25u); SPILL(); f_9376d0(); if (g_unwind) return; RELOAD();
/* 937e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937e26: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 937e2a: call 0x933f50 */
  esp -= 4; W32(esp, 0x937e2fu); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 937e2f: mov al, byte ptr [esp + 0x164] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x164u))) & 0xffu);
/* 937e36: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937e38: mov ebx, dword ptr [esp + 0x168] */
  ebx = R32((uint32_t)(esp + 0x168u));
/* 937e3f: mov ebp, dword ptr [esp + 0x138] */
  ebp = R32((uint32_t)(esp + 0x138u));
/* 937e46: je 0x938273 */
  if (zf) goto L_938273;
L_937e4c: /* 937e4c: mov eax, dword ptr [esp + 0x15c] */
  eax = R32((uint32_t)(esp + 0x15cu));
/* 937e53: fld dword ptr [esp + 0x154] */
  { double v = F32((uint32_t)(esp + 0x154u)); FPUSH(v); }
/* 937e5a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 937e5d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 937e60: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 937e64: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 937e68: fld dword ptr [esp + 0x160] */
  { double v = F32((uint32_t)(esp + 0x160u)); FPUSH(v); }
/* 937e6f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 937e72: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 937e76: fld dword ptr [esp + 0x160] */
  { double v = F32((uint32_t)(esp + 0x160u)); FPUSH(v); }
/* 937e7d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 937e7f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 937e82: call 0x92ec40 */
  esp -= 4; W32(esp, 0x937e87u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 937e87: mov eax, dword ptr [esp + 0x160] */
  eax = R32((uint32_t)(esp + 0x160u));
/* 937e8e: fld dword ptr [esp + 0x154] */
  { double v = F32((uint32_t)(esp + 0x154u)); FPUSH(v); }
/* 937e95: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 937e98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 937e9b: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 937e9f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 937ea3: fld dword ptr [esp + 0x160] */
  { double v = F32((uint32_t)(esp + 0x160u)); FPUSH(v); }
/* 937eaa: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 937ead: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 937eb1: fld dword ptr [esp + 0x160] */
  { double v = F32((uint32_t)(esp + 0x160u)); FPUSH(v); }
/* 937eb8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 937eba: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 937ebd: call 0x92ec40 */
  esp -= 4; W32(esp, 0x937ec2u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 937ec2: fld dword ptr [esp + 0x158] */
  { double v = F32((uint32_t)(esp + 0x158u)); FPUSH(v); }
/* 937ec9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 937ecc: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 937ecf: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 937ed3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 937ed7: fld dword ptr [esp + 0x164] */
  { double v = F32((uint32_t)(esp + 0x164u)); FPUSH(v); }
/* 937ede: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 937ee1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 937ee5: fld dword ptr [esp + 0x164] */
  { double v = F32((uint32_t)(esp + 0x164u)); FPUSH(v); }
/* 937eec: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 937eef: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 937ef2: call 0x92ec40 */
  esp -= 4; W32(esp, 0x937ef7u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 937ef7: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 937efb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 937efe: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 937f01: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 937f05: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 937f09: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 937f0d: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 937f10: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 937f14: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 937f18: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 937f1a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 937f1d: call 0x92ec40 */
  esp -= 4; W32(esp, 0x937f22u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 937f22: mov eax, dword ptr [esp + 0x144] */
  eax = R32((uint32_t)(esp + 0x144u));
/* 937f29: mov ecx, dword ptr [esp + 0x140] */
  ecx = R32((uint32_t)(esp + 0x140u));
/* 937f30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 937f31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937f32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937f33: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 937f37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 937f38: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 937f3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937f3d: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 937f41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937f42: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 937f46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 937f47: mov dword ptr [esp + 0x34], 0xbf800000 */
  W32((uint32_t)(esp + 0x34u), 0xbf800000u);
/* 937f4f: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 937f57: call 0x9384c0 */
  esp -= 4; W32(esp, 0x937f5cu); SPILL(); f_9384c0(); if (g_unwind) return; RELOAD();
/* 937f5c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 937f5f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937f61: je 0x938003 */
  if (zf) goto L_938003;
L_937f67: /* 937f67: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 937f6b: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 937f71: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937f73: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 937f76: jne 0x937fb5 */
  if (!zf) goto L_937fb5;
L_937f78: /* 937f78: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 937f7b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 937f7f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 937f83: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 937f86: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 937f89: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 937f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937f8f: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 937f93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 937f94: call 0x934a30 */
  esp -= 4; W32(esp, 0x937f99u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 937f99: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 937f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937f9d: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 937fa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937fa2: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 937fa6: call 0x9349c0 */
  esp -= 4; W32(esp, 0x937fabu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 937fab: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 937faf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937fb0: call 0x933e40 */
  esp -= 4; W32(esp, 0x937fb5u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_937fb5: /* 937fb5: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 937fb9: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 937fbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 937fc1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 937fc4: jp 0x938003 */
  if (pf) goto L_938003;
L_937fc6: /* 937fc6: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 937fc9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 937fcd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 937fd1: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 937fd4: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 937fd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937fd9: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 937fdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 937fdd: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 937fe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937fe2: call 0x934a30 */
  esp -= 4; W32(esp, 0x937fe7u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 937fe7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 937fea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937feb: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 937fef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 937ff0: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 937ff4: call 0x9349c0 */
  esp -= 4; W32(esp, 0x937ff9u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 937ff9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 937ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 937ffe: call 0x933e40 */
  esp -= 4; W32(esp, 0x938003u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_938003: /* 938003: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 938006: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 938009: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 93800d: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 938011: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 938015: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 938018: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 93801c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 938020: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 938022: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 938026: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 938029: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93802eu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93802e: mov edx, dword ptr [esp + 0x144] */
  edx = R32((uint32_t)(esp + 0x144u));
/* 938035: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* 93803c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93803d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93803e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93803f: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 938043: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 938044: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 938048: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 938049: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 93804d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93804e: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 938052: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 938053: mov dword ptr [esp + 0x30], 0xbf800000 */
  W32((uint32_t)(esp + 0x30u), 0xbf800000u);
/* 93805b: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 938063: call 0x9384c0 */
  esp -= 4; W32(esp, 0x938068u); SPILL(); f_9384c0(); if (g_unwind) return; RELOAD();
/* 938068: mov ebp, dword ptr [esp + 0x154] */
  ebp = R32((uint32_t)(esp + 0x154u));
/* 93806f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938072: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938074: je 0x938116 */
  if (zf) goto L_938116;
L_93807a: /* 93807a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93807e: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 938084: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938086: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938089: jne 0x9380c8 */
  if (!zf) goto L_9380c8;
L_93808b: /* 93808b: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 93808e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 938092: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 938095: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 938099: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 93809c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9380a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9380a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9380a2: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 9380a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9380a7: call 0x934a30 */
  esp -= 4; W32(esp, 0x9380acu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 9380ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9380af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9380b0: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 9380b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9380b5: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 9380b9: call 0x9349c0 */
  esp -= 4; W32(esp, 0x9380beu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 9380be: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9380c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9380c3: call 0x933e40 */
  esp -= 4; W32(esp, 0x9380c8u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_9380c8: /* 9380c8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9380cc: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 9380d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9380d4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9380d7: jp 0x938116 */
  if (pf) goto L_938116;
L_9380d9: /* 9380d9: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9380dc: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9380e0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9380e4: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9380e7: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 9380ea: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 9380ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9380ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9380f0: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 9380f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9380f5: call 0x934a30 */
  esp -= 4; W32(esp, 0x9380fau); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 9380fa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9380fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9380fe: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 938102: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938103: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 938107: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93810cu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93810c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 938110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938111: call 0x933e40 */
  esp -= 4; W32(esp, 0x938116u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_938116: /* 938116: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93811a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93811d: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 938120: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 938124: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 938128: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 93812c: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 93812f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 938133: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 938137: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 938139: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93813c: call 0x92ec40 */
  esp -= 4; W32(esp, 0x938141u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 938141: mov ecx, dword ptr [esp + 0x144] */
  ecx = R32((uint32_t)(esp + 0x144u));
/* 938148: mov edx, dword ptr [esp + 0x140] */
  edx = R32((uint32_t)(esp + 0x140u));
/* 93814f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 938150: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 938155: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93815a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93815b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93815c: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 938160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938161: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 938165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 938166: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 938167: call 0x938c80 */
  esp -= 4; W32(esp, 0x93816cu); SPILL(); f_938c80(); if (g_unwind) return; RELOAD();
/* 93816c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93816f: fsub dword ptr [esp + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x68u)));
/* 938173: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938176: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 93817a: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93817e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 938181: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 938185: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 938189: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 93818b: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 93818f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 938192: call 0x92ec40 */
  esp -= 4; W32(esp, 0x938197u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 938197: mov edx, dword ptr [esp + 0x144] */
  edx = R32((uint32_t)(esp + 0x144u));
/* 93819e: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* 9381a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9381a6: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 9381ab: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 9381b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9381b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9381b2: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 9381b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9381b7: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 9381bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9381bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9381bd: call 0x938c80 */
  esp -= 4; W32(esp, 0x9381c2u); SPILL(); f_938c80(); if (g_unwind) return; RELOAD();
/* 9381c2: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9381c6: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 9381c9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9381cc: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 9381d0: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9381d4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9381d8: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 9381db: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9381df: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9381e3: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 9381e5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9381e8: call 0x92ec40 */
  esp -= 4; W32(esp, 0x9381edu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 9381ed: mov eax, dword ptr [esp + 0x144] */
  eax = R32((uint32_t)(esp + 0x144u));
/* 9381f4: mov ecx, dword ptr [esp + 0x140] */
  ecx = R32((uint32_t)(esp + 0x140u));
/* 9381fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9381fc: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 938201: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 938206: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938207: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 938208: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 93820c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93820d: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 938211: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938212: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 938213: call 0x938c80 */
  esp -= 4; W32(esp, 0x938218u); SPILL(); f_938c80(); if (g_unwind) return; RELOAD();
/* 938218: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 93821b: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 93821f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938222: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 938226: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 938229: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 93822d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 938231: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 938235: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 938237: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 93823b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93823e: call 0x92ec40 */
  esp -= 4; W32(esp, 0x938243u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 938243: mov ecx, dword ptr [esp + 0x144] */
  ecx = R32((uint32_t)(esp + 0x144u));
/* 93824a: mov esi, dword ptr [esp + 0x140] */
  esi = R32((uint32_t)(esp + 0x140u));
/* 938251: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 938252: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 938257: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93825c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93825d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93825e: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 938262: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 938263: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 938267: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938268: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 938269: call 0x938c80 */
  esp -= 4; W32(esp, 0x93826eu); SPILL(); f_938c80(); if (g_unwind) return; RELOAD();
/* 93826e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938271: jmp 0x93827a */
  goto L_93827a;
L_938273: /* 938273: mov esi, dword ptr [esp + 0x140] */
  esi = R32((uint32_t)(esp + 0x140u));
L_93827a: /* 93827a: mov al, byte ptr [esp + 0x150] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x150u))) & 0xffu);
/* 938281: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938283: je 0x93849d */
  if (zf) goto L_93849d;
L_938289: /* 938289: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 938290: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 938294: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* 93829b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93829c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9382a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9382a1: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 9382a5: call 0x933f50 */
  esp -= 4; W32(esp, 0x9382aau); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 9382aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9382ab: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 9382af: call 0x933e90 */
  esp -= 4; W32(esp, 0x9382b4u); SPILL(); f_933e90(); if (g_unwind) return; RELOAD();
/* 9382b4: mov edx, dword ptr [esp + 0x14c] */
  edx = R32((uint32_t)(esp + 0x14cu));
/* 9382bb: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 9382bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9382c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9382c1: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 9382c5: call 0x933f50 */
  esp -= 4; W32(esp, 0x9382cau); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 9382ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9382cb: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 9382cf: call 0x933e90 */
  esp -= 4; W32(esp, 0x9382d4u); SPILL(); f_933e90(); if (g_unwind) return; RELOAD();
/* 9382d4: mov ecx, dword ptr [esp + 0x144] */
  ecx = R32((uint32_t)(esp + 0x144u));
/* 9382db: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 9382e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9382e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9382e4: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 9382e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9382e9: call 0x934a30 */
  esp -= 4; W32(esp, 0x9382eeu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 9382ee: mov esi, dword ptr [esp + 0x164] */
  esi = R32((uint32_t)(esp + 0x164u));
/* 9382f5: mov eax, dword ptr [esp + 0x160] */
  eax = R32((uint32_t)(esp + 0x160u));
/* 9382fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9382ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 938300: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 938305: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93830a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93830b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93830c: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 938310: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 938311: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 938315: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 938316: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 93831a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93831b: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 938322: call 0x9349c0 */
  esp -= 4; W32(esp, 0x938327u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 938327: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938328: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 93832c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93832d: call 0x938830 */
  esp -= 4; W32(esp, 0x938332u); SPILL(); f_938830(); if (g_unwind) return; RELOAD();
/* 938332: mov edx, dword ptr [esp + 0x174] */
  edx = R32((uint32_t)(esp + 0x174u));
/* 938339: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93833c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93833d: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 938342: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 938347: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 938348: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 938349: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 93834d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93834e: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 938352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 938353: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 938357: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 938358: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 93835f: call 0x933ec0 */
  esp -= 4; W32(esp, 0x938364u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 938364: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938365: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 938369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93836a: call 0x938830 */
  esp -= 4; W32(esp, 0x93836fu); SPILL(); f_938830(); if (g_unwind) return; RELOAD();
/* 93836f: mov ecx, dword ptr [esp + 0x174] */
  ecx = R32((uint32_t)(esp + 0x174u));
/* 938376: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938379: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93837a: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93837f: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 938384: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 938385: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 938386: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 93838a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93838b: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 93838f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938390: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 938394: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 938395: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 93839c: call 0x9349c0 */
  esp -= 4; W32(esp, 0x9383a1u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 9383a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9383a2: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 9383a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9383a7: call 0x938c80 */
  esp -= 4; W32(esp, 0x9383acu); SPILL(); f_938c80(); if (g_unwind) return; RELOAD();
/* 9383ac: mov eax, dword ptr [esp + 0x174] */
  eax = R32((uint32_t)(esp + 0x174u));
/* 9383b3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9383b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9383b7: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 9383bc: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 9383c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9383c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9383c3: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 9383c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9383c8: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 9383cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9383cd: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 9383d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9383d2: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 9383d9: call 0x933ec0 */
  esp -= 4; W32(esp, 0x9383deu); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 9383de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9383df: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 9383e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9383e4: call 0x938c80 */
  esp -= 4; W32(esp, 0x9383e9u); SPILL(); f_938c80(); if (g_unwind) return; RELOAD();
/* 9383e9: mov edx, dword ptr [esp + 0x174] */
  edx = R32((uint32_t)(esp + 0x174u));
/* 9383f0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9383f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9383f4: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 9383f9: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 9383fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9383ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 938400: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 938404: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938405: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 938409: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93840a: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 93840e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93840f: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 938416: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93841bu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93841b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93841c: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 938420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938421: call 0x938c80 */
  esp -= 4; W32(esp, 0x938426u); SPILL(); f_938c80(); if (g_unwind) return; RELOAD();
/* 938426: mov ecx, dword ptr [esp + 0x174] */
  ecx = R32((uint32_t)(esp + 0x174u));
/* 93842d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938430: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 938431: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 938436: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 93843b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93843c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93843d: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 938441: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 938442: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 938446: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938447: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 93844b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93844c: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 938453: call 0x933ec0 */
  esp -= 4; W32(esp, 0x938458u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 938458: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938459: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 93845d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93845e: call 0x938c80 */
  esp -= 4; W32(esp, 0x938463u); SPILL(); f_938c80(); if (g_unwind) return; RELOAD();
/* 938463: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 938467: lea eax, [esp + 0xc4] */
  eax = (uint32_t)(esp + 0xc4u);
/* 93846e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938471: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 938473: lea esi, [esp + 0xa4] */
  esi = (uint32_t)(esp + 0xa4u);
/* 93847a: je 0x93849d */
  if (zf) goto L_93849d;
L_93847c: /* 93847c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_938480: /* 938480: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 938483: mov ecx, esi */
  ecx = esi;
/* 938485: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938486: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 938489: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93848a: mov ecx, edi */
  ecx = edi;
/* 93848c: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 93848f: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 938492: call 0x933ef0 */
  esp -= 4; W32(esp, 0x938497u); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 938497: cmp esi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 93849b: jne 0x938480 */
  if (!zf) goto L_938480;
L_93849d: /* 93849d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93849e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93849f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9384a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9384a1: add esp, 0x124 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x124u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9384a7: ret  */
  esp += 4; SPILL(); return;
}

void f_9384b0(void) {
  LOAD_REGS();
L_9384b0: /* 9384b0: mov eax, ecx */
  eax = ecx;
/* 9384b2: ret  */
  esp += 4; SPILL(); return;
}

void f_9384c0(void) {
  LOAD_REGS();
L_9384c0: /* 9384c0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9384c3: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9384c7: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9384ca: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9384ce: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9384d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9384d1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9384d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9384d4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9384d6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9384d8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9384da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9384dc: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9384e0: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 9384e4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9384e6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9384ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9384ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9384ee: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9384f0: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9384f2: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9384f5: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9384f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9384fa: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9384fe: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 938501: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 938503: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 938505: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938507: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 938509: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93850b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93850d: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 938511: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938513: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938515: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 938519: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 93851d: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 938521: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 938525: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 938527: fst dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0);
/* 93852b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 938531: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938533: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938536: jnp 0x93856e */
  if (!pf) goto L_93856e;
L_938538: /* 938538: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93853c: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 938540: fchs  */
  ST0 = -ST0;
/* 938542: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 938546: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93854a: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93854c: fsubr dword ptr [esp + 0xc] */
  ST0 = (F32((uint32_t)(esp + 0xcu))) - ST0;
/* 938550: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 938556: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938558: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93855b: jne 0x938576 */
  if (!zf) goto L_938576;
L_93855d: /* 93855d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93855f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938561: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 938565: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938567: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938569: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93856c: jne 0x938578 */
  if (!zf) goto L_938578;
L_93856e: /* 93856e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93856f: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 938571: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 938572: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938575: ret  */
  esp += 4; SPILL(); return;
L_938576: /* 938576: fstp st(0) */
  STI(0) = ST0; FPOP();
L_938578: /* 938578: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93857c: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 938580: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 938582: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 938586: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93858c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93858e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938591: jne 0x9385ac */
  if (!zf) goto L_9385ac;
L_938593: /* 938593: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 938595: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938597: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 93859b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93859d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93859f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9385a2: jne 0x9385ae */
  if (!zf) goto L_9385ae;
L_9385a4: /* 9385a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9385a5: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 9385a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9385a8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9385ab: ret  */
  esp += 4; SPILL(); return;
L_9385ac: /* 9385ac: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9385ae: /* 9385ae: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9385b2: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9385b5: fsqrt  */
  ST0 = sqrt(ST0);
/* 9385b7: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 9385bb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9385bf: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9385c1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9385c5: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 9385c9: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9385cd: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9385d0: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 9385d4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9385da: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9385de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9385e0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9385e3: jp 0x9385f1 */
  if (pf) goto L_9385f1;
L_9385e5: /* 9385e5: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9385e9: fchs  */
  ST0 = -ST0;
/* 9385eb: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9385ef: jmp 0x9385fb */
  goto L_9385fb;
L_9385f1: /* 9385f1: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9385f5: fchs  */
  ST0 = -ST0;
/* 9385f7: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
L_9385fb: /* 9385fb: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9385ff: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 938601: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 938605: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 938609: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93860b: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 93860f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938611: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938614: jp 0x938620 */
  if (pf) goto L_938620;
L_938616: /* 938616: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 938617: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938619: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93861b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93861c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93861f: ret  */
  esp += 4; SPILL(); return;
L_938620: /* 938620: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 938624: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 938628: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93862c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93862e: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 938632: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938634: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938637: je 0x93856e */
  if (zf) goto L_93856e;
L_93863d: /* 93863d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 938641: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 938645: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 938649: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93864d: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 938651: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 938655: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 938659: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 93865d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93865f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938662: jnp 0x93856e */
  if (!pf) goto L_93856e;
L_938668: /* 938668: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93866c: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 938670: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 938674: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 938678: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 93867c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 938680: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 938684: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 938688: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93868a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93868d: jnp 0x93856e */
  if (!pf) goto L_93856e;
L_938693: /* 938693: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 938697: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 93869b: fmul dword ptr [0xa214f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214f8u)));
/* 9386a1: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 9386a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9386a7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9386aa: jne 0x938702 */
  if (!zf) goto L_938702;
L_9386ac: /* 9386ac: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9386b0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9386b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9386b8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9386bb: je 0x93856e */
  if (zf) goto L_93856e;
L_9386c1: /* 9386c1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9386c7: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 9386cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9386cd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9386d0: jnp 0x9386ec */
  if (!pf) goto L_9386ec;
L_9386d2: /* 9386d2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9386d8: fdiv dword ptr [esp + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x38u)));
/* 9386dc: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9386e0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9386e2: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9386e6: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9386ea: jmp 0x938761 */
  goto L_938761;
L_9386ec: /* 9386ec: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9386f2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9386f6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9386f8: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9386fc: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 938700: jmp 0x938761 */
  goto L_938761;
L_938702: /* 938702: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 938706: fabs  */
  ST0 = fabs(ST0);
/* 938708: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93870c: fmul dword ptr [0xa214d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214d8u)));
/* 938712: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 938714: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938716: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938719: jne 0x93878b */
  if (!zf) goto L_93878b;
L_93871b: /* 93871b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93871f: fabs  */
  ST0 = fabs(ST0);
/* 938721: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 938725: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938727: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93872a: je 0x93856e */
  if (zf) goto L_93856e;
L_938730: /* 938730: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938736: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 93873a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93873c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93873f: jnp 0x93874d */
  if (!pf) goto L_93874d;
L_938741: /* 938741: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 938747: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 93874b: jmp 0x938753 */
  goto L_938753;
L_93874d: /* 93874d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_938753: /* 938753: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 938757: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938759: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
L_93875d: /* 93875d: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
L_938761: /* 938761: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 938765: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 938767: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938769: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93876c: jne 0x938774 */
  if (!zf) goto L_938774;
L_93876e: /* 93876e: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 938772: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_938774: /* 938774: fcom dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
/* 938776: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938778: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93877b: jp 0x93881c */
  if (pf) goto L_93881c;
L_938781: /* 938781: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 938783: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 938784: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 938786: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 938787: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93878a: ret  */
  esp += 4; SPILL(); return;
L_93878b: /* 93878b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938791: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 938795: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938797: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93879a: jnp 0x9387ac */
  if (!pf) goto L_9387ac;
L_93879c: /* 93879c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9387a2: fdiv dword ptr [esp + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x38u)));
/* 9387a6: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 9387aa: jmp 0x9387b4 */
  goto L_9387b4;
L_9387ac: /* 9387ac: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
L_9387b4: /* 9387b4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9387ba: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 9387be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9387c0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9387c3: jnp 0x9387d1 */
  if (!pf) goto L_9387d1;
L_9387c5: /* 9387c5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9387cb: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 9387cf: jmp 0x9387d7 */
  goto L_9387d7;
L_9387d1: /* 9387d1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_9387d7: /* 9387d7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9387db: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 9387df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9387e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9387e4: jp 0x9387f0 */
  if (pf) goto L_9387f0;
L_9387e6: /* 9387e6: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9387ea: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 9387ee: jmp 0x9387f6 */
  goto L_9387f6;
L_9387f0: /* 9387f0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9387f4: fmul st(1) */
  ST0 = ST0 * STI(1);
L_9387f6: /* 9387f6: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9387fa: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9387fe: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 938802: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938804: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938807: jp 0x93875d */
  if (pf) goto L_93875d;
L_93880d: /* 93880d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93880f: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 938813: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 938817: jmp 0x938761 */
  goto L_938761;
L_93881c: /* 93881c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93881d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93881f: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 938821: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 938822: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938825: ret  */
  esp += 4; SPILL(); return;
}

void f_938830(void) {
  LOAD_REGS();
L_938830: /* 938830: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 938833: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 938834: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 938835: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 938839: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 93883c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93883d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 93883f: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 938843: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 938845: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 938849: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 93884b: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 93884f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 938851: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 938855: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 938857: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 93885b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93885d: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 938861: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 938865: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 938867: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93886b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93886d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93886f: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 938872: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 938875: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 938877: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 938879: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93887b: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 93887f: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 938882: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 938884: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 938886: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938888: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 93888a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93888c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93888e: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 938892: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938894: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938896: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 93889a: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 93889e: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9388a2: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9388a6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9388a8: fst dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0);
/* 9388ac: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9388b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9388b4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9388b7: jnp 0x938c6b */
  if (!pf) goto L_938c6b;
L_9388bd: /* 9388bd: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9388c1: fchs  */
  ST0 = -ST0;
/* 9388c3: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9388c7: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9388cb: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 9388cf: fsubr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) - ST0;
/* 9388d3: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9388d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9388db: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9388de: jne 0x9388f7 */
  if (!zf) goto L_9388f7;
L_9388e0: /* 9388e0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9388e2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9388e4: fcomp dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
  FPOP();
/* 9388e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9388ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9388ec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9388ef: je 0x938c6b */
  if (zf) goto L_938c6b;
L_9388f5: /* 9388f5: jmp 0x9388f9 */
  goto L_9388f9;
L_9388f7: /* 9388f7: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9388f9: /* 9388f9: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9388fd: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 938901: fadd dword ptr [esp + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x60u)));
/* 938905: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 93890b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93890d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938910: jne 0x938929 */
  if (!zf) goto L_938929;
L_938912: /* 938912: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 938914: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938916: fcomp dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
  FPOP();
/* 93891a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93891c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93891e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938921: je 0x938c6b */
  if (zf) goto L_938c6b;
L_938927: /* 938927: jmp 0x93892b */
  goto L_93892b;
L_938929: /* 938929: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93892b: /* 93892b: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 93892f: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 938932: fsqrt  */
  ST0 = sqrt(ST0);
/* 938934: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 938938: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93893c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 93893e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 938942: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 938946: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 93894a: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93894d: fst dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0);
/* 938951: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 938957: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 93895b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93895d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938960: jp 0x93896e */
  if (pf) goto L_93896e;
L_938962: /* 938962: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 938966: fchs  */
  ST0 = -ST0;
/* 938968: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 93896c: jmp 0x938978 */
  goto L_938978;
L_93896e: /* 93896e: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 938972: fchs  */
  ST0 = -ST0;
/* 938974: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
L_938978: /* 938978: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 93897c: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 93897e: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 938982: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 938986: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 93898a: fcomp dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
  FPOP();
/* 93898e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938990: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938993: jnp 0x938c69 */
  if (!pf) goto L_938c69;
L_938999: /* 938999: fadd dword ptr [esp + 0x64] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x64u)));
/* 93899d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9389a1: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9389a5: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 9389a9: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 9389ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9389af: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9389b2: je 0x938c6b */
  if (zf) goto L_938c6b;
L_9389b8: /* 9389b8: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9389bc: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9389c0: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9389c4: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9389c8: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 9389cc: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9389d0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9389d4: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 9389d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9389da: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9389dd: jnp 0x938c6b */
  if (!pf) goto L_938c6b;
L_9389e3: /* 9389e3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9389e7: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 9389eb: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9389ef: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9389f3: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 9389f7: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9389fb: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9389ff: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 938a03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938a05: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938a08: jnp 0x938c6b */
  if (!pf) goto L_938c6b;
L_938a0e: /* 938a0e: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 938a12: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 938a16: fmul dword ptr [0xa214f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214f8u)));
/* 938a1c: fcomp dword ptr [esp + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x58u)));
  FPOP();
/* 938a20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938a22: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938a25: jne 0x938a7d */
  if (!zf) goto L_938a7d;
L_938a27: /* 938a27: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 938a2b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 938a31: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938a33: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938a36: je 0x938c6b */
  if (zf) goto L_938c6b;
L_938a3c: /* 938a3c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938a42: fcomp dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
  FPOP();
/* 938a46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938a48: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938a4b: jnp 0x938a67 */
  if (!pf) goto L_938a67;
L_938a4d: /* 938a4d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 938a53: fdiv dword ptr [esp + 0x60] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x60u)));
/* 938a57: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938a5b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938a5d: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 938a61: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 938a65: jmp 0x938adc */
  goto L_938adc;
L_938a67: /* 938a67: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938a6d: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938a71: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938a73: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 938a77: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 938a7b: jmp 0x938adc */
  goto L_938adc;
L_938a7d: /* 938a7d: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 938a81: fabs  */
  ST0 = fabs(ST0);
/* 938a83: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 938a87: fmul dword ptr [0xa214d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214d8u)));
/* 938a8d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 938a8f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938a91: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938a94: jne 0x938b0b */
  if (!zf) goto L_938b0b;
L_938a96: /* 938a96: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 938a9a: fabs  */
  ST0 = fabs(ST0);
/* 938a9c: fcomp dword ptr [esp + 0x64] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x64u)));
  FPOP();
/* 938aa0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938aa2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938aa5: je 0x938c6b */
  if (zf) goto L_938c6b;
L_938aab: /* 938aab: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938ab1: fcomp dword ptr [esp + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x58u)));
  FPOP();
/* 938ab5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938ab7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938aba: jnp 0x938ac8 */
  if (!pf) goto L_938ac8;
L_938abc: /* 938abc: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 938ac2: fdiv dword ptr [esp + 0x58] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x58u)));
/* 938ac6: jmp 0x938ace */
  goto L_938ace;
L_938ac8: /* 938ac8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_938ace: /* 938ace: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 938ad2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938ad4: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
L_938ad8: /* 938ad8: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
L_938adc: /* 938adc: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 938ae0: fcomp dword ptr [esp + 0x68] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x68u)));
  FPOP();
/* 938ae4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938ae6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938ae9: jne 0x938af3 */
  if (!zf) goto L_938af3;
L_938aeb: /* 938aeb: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 938aef: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
L_938af3: /* 938af3: fcom dword ptr [esp + 0x6c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x6cu)));
/* 938af7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938af9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938afc: jp 0x938b9c */
  if (pf) goto L_938b9c;
L_938b02: /* 938b02: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 938b06: jmp 0x938b9e */
  goto L_938b9e;
L_938b0b: /* 938b0b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938b11: fcomp dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
  FPOP();
/* 938b15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938b17: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938b1a: jnp 0x938b2c */
  if (!pf) goto L_938b2c;
L_938b1c: /* 938b1c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 938b22: fdiv dword ptr [esp + 0x60] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x60u)));
/* 938b26: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 938b2a: jmp 0x938b34 */
  goto L_938b34;
L_938b2c: /* 938b2c: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
L_938b34: /* 938b34: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938b3a: fcomp dword ptr [esp + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x58u)));
  FPOP();
/* 938b3e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938b40: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938b43: jnp 0x938b51 */
  if (!pf) goto L_938b51;
L_938b45: /* 938b45: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 938b4b: fdiv dword ptr [esp + 0x58] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x58u)));
/* 938b4f: jmp 0x938b57 */
  goto L_938b57;
L_938b51: /* 938b51: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_938b57: /* 938b57: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 938b5b: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 938b5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938b61: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938b64: jp 0x938b70 */
  if (pf) goto L_938b70;
L_938b66: /* 938b66: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 938b6a: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 938b6e: jmp 0x938b76 */
  goto L_938b76;
L_938b70: /* 938b70: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 938b74: fmul st(1) */
  ST0 = ST0 * STI(1);
L_938b76: /* 938b76: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 938b7a: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 938b7e: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 938b82: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938b84: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938b87: jp 0x938ad8 */
  if (pf) goto L_938ad8;
L_938b8d: /* 938b8d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938b8f: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 938b93: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 938b97: jmp 0x938adc */
  goto L_938adc;
L_938b9c: /* 938b9c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_938b9e: /* 938b9e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 938ba2: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 938ba6: fcomp dword ptr [esp + 0x68] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x68u)));
  FPOP();
/* 938baa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938bac: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938baf: jne 0x938c22 */
  if (!zf) goto L_938c22;
L_938bb1: /* 938bb1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 938bb5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 938bb8: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 938bbb: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 938bbf: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 938bc3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 938bc7: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 938bca: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 938bce: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 938bd2: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 938bd4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 938bd7: call 0x92ec40 */
  esp -= 4; W32(esp, 0x938bdcu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 938bdc: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 938be0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 938be3: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 938be6: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 938bea: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 938bee: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 938bf2: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 938bf5: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 938bf9: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 938bfd: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 938bff: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 938c02: call 0x92ec40 */
  esp -= 4; W32(esp, 0x938c07u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 938c07: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 938c09: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 938c0d: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 938c10: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 938c12: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 938c14: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 938c18: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 938c1b: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 938c1f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_938c22: /* 938c22: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 938c26: fcomp dword ptr [esp + 0x6c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x6cu)));
  FPOP();
/* 938c2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938c2c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938c2f: jp 0x938c6b */
  if (pf) goto L_938c6b;
L_938c31: /* 938c31: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 938c35: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 938c36: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 938c38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 938c39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938c3a: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 938c3e: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 938c41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 938c42: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 938c44: call 0x934a30 */
  esp -= 4; W32(esp, 0x938c49u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 938c49: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938c4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938c4d: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 938c51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 938c52: mov ecx, esi */
  ecx = esi;
/* 938c54: call 0x9349c0 */
  esp -= 4; W32(esp, 0x938c59u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 938c59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 938c5a: mov ecx, ebp */
  ecx = ebp;
/* 938c5c: call 0x933e40 */
  esp -= 4; W32(esp, 0x938c61u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 938c61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 938c62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 938c63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 938c64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 938c65: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938c68: ret  */
  esp += 4; SPILL(); return;
L_938c69: /* 938c69: fstp st(0) */
  STI(0) = ST0; FPOP();
L_938c6b: /* 938c6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 938c6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 938c6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 938c6e: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 938c71: ret  */
  esp += 4; SPILL(); return;
}

void f_938c80(void) {
  LOAD_REGS();
L_938c80: /* 938c80: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 938c83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 938c84: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 938c88: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 938c8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 938c8c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 938c8e: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 938c92: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 938c94: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 938c98: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938c9a: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 938c9e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 938ca0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 938ca4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 938ca6: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 938caa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 938cac: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938cb0: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 938cb4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 938cb6: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 938cba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938cbc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938cbe: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 938cc1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 938cc4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 938cc6: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 938cc8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 938cca: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 938cce: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 938cd1: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 938cd3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 938cd5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938cd7: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 938cd9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 938cdb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 938cdd: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 938ce1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938ce3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938ce5: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938ce9: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 938ced: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 938cf1: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 938cf5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 938cf7: fst dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0);
/* 938cfb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 938d01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938d03: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938d06: jnp 0x93909b */
  if (!pf) goto L_93909b;
L_938d0c: /* 938d0c: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938d10: fchs  */
  ST0 = -ST0;
/* 938d12: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 938d16: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 938d1a: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 938d1e: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* 938d22: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 938d28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938d2a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938d2d: jne 0x938d46 */
  if (!zf) goto L_938d46;
L_938d2f: /* 938d2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 938d31: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938d33: fcomp dword ptr [esp + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x58u)));
  FPOP();
/* 938d37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938d39: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938d3b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938d3e: je 0x93909b */
  if (zf) goto L_93909b;
L_938d44: /* 938d44: jmp 0x938d48 */
  goto L_938d48;
L_938d46: /* 938d46: fstp st(0) */
  STI(0) = ST0; FPOP();
L_938d48: /* 938d48: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 938d4c: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 938d50: fadd dword ptr [esp + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x5cu)));
/* 938d54: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 938d5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938d5c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938d5f: jne 0x938d78 */
  if (!zf) goto L_938d78;
L_938d61: /* 938d61: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 938d63: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938d65: fcomp dword ptr [esp + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x58u)));
  FPOP();
/* 938d69: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938d6b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938d6d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938d70: je 0x93909b */
  if (zf) goto L_93909b;
L_938d76: /* 938d76: jmp 0x938d7a */
  goto L_938d7a;
L_938d78: /* 938d78: fstp st(0) */
  STI(0) = ST0; FPOP();
L_938d7a: /* 938d7a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 938d7e: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 938d81: fsqrt  */
  ST0 = sqrt(ST0);
/* 938d83: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 938d87: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 938d8b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 938d8d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 938d91: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 938d95: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 938d99: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 938d9c: fst dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0);
/* 938da0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 938da6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 938daa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938dac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938daf: jp 0x938dbd */
  if (pf) goto L_938dbd;
L_938db1: /* 938db1: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938db5: fchs  */
  ST0 = -ST0;
/* 938db7: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 938dbb: jmp 0x938dc7 */
  goto L_938dc7;
L_938dbd: /* 938dbd: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 938dc1: fchs  */
  ST0 = -ST0;
/* 938dc3: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
L_938dc7: /* 938dc7: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 938dcb: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 938dcd: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 938dd1: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938dd5: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 938dd9: fcomp dword ptr [esp + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x58u)));
  FPOP();
/* 938ddd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938ddf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938de2: jnp 0x939099 */
  if (!pf) goto L_939099;
L_938de8: /* 938de8: fadd dword ptr [esp + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x60u)));
/* 938dec: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 938df0: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938df4: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 938df8: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 938dfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938dfe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938e01: je 0x93909b */
  if (zf) goto L_93909b;
L_938e07: /* 938e07: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938e0b: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 938e0f: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 938e13: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 938e17: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 938e1b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 938e1f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 938e23: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 938e27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938e29: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938e2c: jnp 0x93909b */
  if (!pf) goto L_93909b;
L_938e32: /* 938e32: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 938e36: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 938e3a: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 938e3e: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938e42: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 938e46: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 938e4a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 938e4e: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 938e52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938e54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938e57: jnp 0x93909b */
  if (!pf) goto L_93909b;
L_938e5d: /* 938e5d: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 938e61: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 938e65: fmul dword ptr [0xa214f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214f8u)));
/* 938e6b: fcomp dword ptr [esp + 0x54] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x54u)));
  FPOP();
/* 938e6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938e71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938e74: jne 0x938ecc */
  if (!zf) goto L_938ecc;
L_938e76: /* 938e76: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 938e7a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 938e80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938e82: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938e85: je 0x93909b */
  if (zf) goto L_93909b;
L_938e8b: /* 938e8b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938e91: fcomp dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
  FPOP();
/* 938e95: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938e97: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938e9a: jnp 0x938eb6 */
  if (!pf) goto L_938eb6;
L_938e9c: /* 938e9c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 938ea2: fdiv dword ptr [esp + 0x5c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x5cu)));
/* 938ea6: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 938eaa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938eac: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 938eb0: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 938eb4: jmp 0x938f2b */
  goto L_938f2b;
L_938eb6: /* 938eb6: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938ebc: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 938ec0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938ec2: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 938ec6: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 938eca: jmp 0x938f2b */
  goto L_938f2b;
L_938ecc: /* 938ecc: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 938ed0: fabs  */
  ST0 = fabs(ST0);
/* 938ed2: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 938ed6: fmul dword ptr [0xa214d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa214d8u)));
/* 938edc: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 938ede: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938ee0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938ee3: jne 0x938f5a */
  if (!zf) goto L_938f5a;
L_938ee5: /* 938ee5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 938ee9: fabs  */
  ST0 = fabs(ST0);
/* 938eeb: fcomp dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
  FPOP();
/* 938eef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938ef1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938ef4: je 0x93909b */
  if (zf) goto L_93909b;
L_938efa: /* 938efa: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938f00: fcomp dword ptr [esp + 0x54] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x54u)));
  FPOP();
/* 938f04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938f06: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938f09: jnp 0x938f17 */
  if (!pf) goto L_938f17;
L_938f0b: /* 938f0b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 938f11: fdiv dword ptr [esp + 0x54] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x54u)));
/* 938f15: jmp 0x938f1d */
  goto L_938f1d;
L_938f17: /* 938f17: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_938f1d: /* 938f1d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 938f21: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 938f23: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
L_938f27: /* 938f27: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
L_938f2b: /* 938f2b: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 938f2f: fcomp dword ptr [esp + 0x64] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x64u)));
  FPOP();
/* 938f33: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938f35: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 938f38: jne 0x938f42 */
  if (!zf) goto L_938f42;
L_938f3a: /* 938f3a: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 938f3e: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
L_938f42: /* 938f42: fcom dword ptr [esp + 0x68] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x68u)));
/* 938f46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938f48: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938f4b: jp 0x938feb */
  if (pf) goto L_938feb;
L_938f51: /* 938f51: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 938f55: jmp 0x938fed */
  goto L_938fed;
L_938f5a: /* 938f5a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938f60: fcomp dword ptr [esp + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x5cu)));
  FPOP();
/* 938f64: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938f66: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938f69: jnp 0x938f7b */
  if (!pf) goto L_938f7b;
L_938f6b: /* 938f6b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 938f71: fdiv dword ptr [esp + 0x5c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x5cu)));
/* 938f75: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 938f79: jmp 0x938f83 */
  goto L_938f83;
L_938f7b: /* 938f7b: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
L_938f83: /* 938f83: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 938f89: fcomp dword ptr [esp + 0x54] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x54u)));
  FPOP();
/* 938f8d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938f8f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938f92: jnp 0x938fa0 */
  if (!pf) goto L_938fa0;
L_938f94: /* 938f94: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 938f9a: fdiv dword ptr [esp + 0x54] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x54u)));
/* 938f9e: jmp 0x938fa6 */
  goto L_938fa6;
L_938fa0: /* 938fa0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_938fa6: /* 938fa6: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 938faa: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 938fae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938fb0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938fb3: jp 0x938fbf */
  if (pf) goto L_938fbf;
L_938fb5: /* 938fb5: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 938fb9: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 938fbd: jmp 0x938fc5 */
  goto L_938fc5;
L_938fbf: /* 938fbf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 938fc3: fmul st(1) */
  ST0 = ST0 * STI(1);
L_938fc5: /* 938fc5: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 938fc9: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 938fcd: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 938fd1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 938fd3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 938fd6: jp 0x938f27 */
  if (pf) goto L_938f27;
L_938fdc: /* 938fdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 938fde: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 938fe2: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 938fe6: jmp 0x938f2b */
  goto L_938f2b;
L_938feb: /* 938feb: fstp st(0) */
  STI(0) = ST0; FPOP();
L_938fed: /* 938fed: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 938ff1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 938ff2: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 938ff5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 938ff8: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 938ffc: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 939000: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 939004: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 939007: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93900b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93900f: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 939011: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 939014: call 0x92ec40 */
  esp -= 4; W32(esp, 0x939019u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 939019: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93901d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 939020: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 939023: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 939027: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93902b: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93902f: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 939032: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 939036: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93903a: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 93903c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93903f: call 0x92ec40 */
  esp -= 4; W32(esp, 0x939044u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 939044: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 939048: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 93904a: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 93904d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 93904f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 939053: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 939055: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 939059: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 93905c: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 939060: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 939063: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 939065: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 939068: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 93906a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 93906e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93906f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 939070: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 939074: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939075: call 0x934a30 */
  esp -= 4; W32(esp, 0x93907au); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93907a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93907d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93907e: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 939082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 939083: mov ecx, esi */
  ecx = esi;
/* 939085: call 0x9349c0 */
  esp -= 4; W32(esp, 0x93908au); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 93908a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93908b: mov ecx, ebx */
  ecx = ebx;
/* 93908d: call 0x933e40 */
  esp -= 4; W32(esp, 0x939092u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 939092: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 939093: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 939094: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 939095: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 939098: ret  */
  esp += 4; SPILL(); return;
L_939099: /* 939099: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93909b: /* 93909b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93909c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93909d: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9390a0: ret  */
  esp += 4; SPILL(); return;
}

void f_9390b0(void) {
  LOAD_REGS();
L_9390b0: /* 9390b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9390b4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9390b6: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 9390b8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9390ba: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 9390bc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9390bf: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 9390c1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9390c4: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 9390c6: fld dword ptr [0xcf2ec4] */
  { double v = F32((uint32_t)(0xcf2ec4u)); FPUSH(v); }
/* 9390cc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9390ce: fld dword ptr [0xcf2ec0] */
  { double v = F32((uint32_t)(0xcf2ec0u)); FPUSH(v); }
/* 9390d4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9390d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9390d8: fmul dword ptr [0xcf2edc] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2edcu)));
/* 9390de: fld dword ptr [0xcf2ebc] */
  { double v = F32((uint32_t)(0xcf2ebcu)); FPUSH(v); }
/* 9390e4: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9390e6: fld dword ptr [0xcf2eb8] */
  { double v = F32((uint32_t)(0xcf2eb8u)); FPUSH(v); }
/* 9390ec: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9390ee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9390f0: fmul dword ptr [0xcf2ed8] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2ed8u)));
/* 9390f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9390f8: fld dword ptr [0xcf2ed4] */
  { double v = F32((uint32_t)(0xcf2ed4u)); FPUSH(v); }
/* 9390fe: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 939100: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 939102: fld dword ptr [0xcf2ed0] */
  { double v = F32((uint32_t)(0xcf2ed0u)); FPUSH(v); }
/* 939108: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 93910a: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 93910c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93910e: fld dword ptr [0xcf2ecc] */
  { double v = F32((uint32_t)(0xcf2eccu)); FPUSH(v); }
/* 939114: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 939116: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 939118: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93911a: fld dword ptr [0xcf2ec8] */
  { double v = F32((uint32_t)(0xcf2ec8u)); FPUSH(v); }
/* 939120: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 939122: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 939124: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939126: fmul dword ptr [0xcf2ed8] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2ed8u)));
/* 93912c: fmul dword ptr [0xcf2edc] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2edcu)));
/* 939132: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 939134: fstp st(4) */
  STI(4) = ST0; FPOP();
/* 939136: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 939138: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93913a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93913c: ret  */
  esp += 4; SPILL(); return;
}

void f_939140(void) {
  LOAD_REGS();
L_939140: /* 939140: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 939144: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 939146: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 939148: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 93914a: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 93914c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 93914f: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 939151: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 939154: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 939156: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 93915a: fld dword ptr [0xcf2ebc] */
  { double v = F32((uint32_t)(0xcf2ebcu)); FPUSH(v); }
/* 939160: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 939162: fld dword ptr [0xcf2eb8] */
  { double v = F32((uint32_t)(0xcf2eb8u)); FPUSH(v); }
/* 939168: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 93916a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93916c: fmul dword ptr [0xcf2ed8] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2ed8u)));
/* 939172: fchs  */
  ST0 = -ST0;
/* 939174: fld dword ptr [0xcf2ed4] */
  { double v = F32((uint32_t)(0xcf2ed4u)); FPUSH(v); }
/* 93917a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 93917c: fld dword ptr [0xcf2ed0] */
  { double v = F32((uint32_t)(0xcf2ed0u)); FPUSH(v); }
/* 939182: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 939184: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939186: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 939188: fld dword ptr [0xcf2ec8] */
  { double v = F32((uint32_t)(0xcf2ec8u)); FPUSH(v); }
/* 93918e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 939190: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 939192: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 939194: fld dword ptr [0xcf2ecc] */
  { double v = F32((uint32_t)(0xcf2eccu)); FPUSH(v); }
/* 93919a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 93919c: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 93919e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9391a0: fmul dword ptr [0xcf2edc] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2edcu)));
/* 9391a6: fmul dword ptr [0xcf2ed8] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2ed8u)));
/* 9391ac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9391ae: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9391b0: fld dword ptr [0xcf2ec4] */
  { double v = F32((uint32_t)(0xcf2ec4u)); FPUSH(v); }
/* 9391b6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9391b8: fld dword ptr [0xcf2ec0] */
  { double v = F32((uint32_t)(0xcf2ec0u)); FPUSH(v); }
/* 9391be: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9391c0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9391c2: fmul dword ptr [0xcf2edc] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2edcu)));
/* 9391c8: fld dword ptr [0xcf2ed4] */
  { double v = F32((uint32_t)(0xcf2ed4u)); FPUSH(v); }
/* 9391ce: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9391d0: fld dword ptr [0xcf2ecc] */
  { double v = F32((uint32_t)(0xcf2eccu)); FPUSH(v); }
/* 9391d6: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9391d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9391da: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9391dc: fld dword ptr [0xcf2ec8] */
  { double v = F32((uint32_t)(0xcf2ec8u)); FPUSH(v); }
/* 9391e2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9391e4: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9391e6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9391e8: fld dword ptr [0xcf2ed0] */
  { double v = F32((uint32_t)(0xcf2ed0u)); FPUSH(v); }
/* 9391ee: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9391f0: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9391f2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9391f4: fmul dword ptr [0xcf2edc] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2edcu)));
/* 9391fa: fmul dword ptr [0xcf2ed8] */
  ST0 = ST0 * (F32((uint32_t)(0xcf2ed8u)));
/* 939200: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 939202: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 939205: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 939207: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 939209: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93920b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93920d: ret  */
  esp += 4; SPILL(); return;
}

void f_939210(void) {
  LOAD_REGS();
L_939210: /* 939210: sub esp, 0x1b8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 939216: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 939217: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 939218: mov esi, dword ptr [esp + 0x1ec] */
  esi = R32((uint32_t)(esp + 0x1ecu));
/* 93921f: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 939222: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 939225: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 939226: fchs  */
  ST0 = -ST0;
/* 939228: lea edi, [esi + 0x20] */
  edi = (uint32_t)(esi + 0x20u);
/* 93922b: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93922f: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 939233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 939234: lea ecx, [esp + 0x158] */
  ecx = (uint32_t)(esp + 0x158u);
/* 93923b: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 939243: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 939247: call 0x934970 */
  esp -= 4; W32(esp, 0x93924cu); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93924c: fld dword ptr [esp + 0x15c] */
  { double v = F32((uint32_t)(esp + 0x15cu)); FPUSH(v); }
/* 939253: fchs  */
  ST0 = -ST0;
/* 939255: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 939258: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93925c: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 939260: fld dword ptr [esp + 0x164] */
  { double v = F32((uint32_t)(esp + 0x164u)); FPUSH(v); }
/* 939267: fchs  */
  ST0 = -ST0;
/* 939269: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93926d: fld dword ptr [esp + 0x160] */
  { double v = F32((uint32_t)(esp + 0x160u)); FPUSH(v); }
/* 939274: fchs  */
  ST0 = -ST0;
/* 939276: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 939279: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93927eu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93927e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 939282: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 939286: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 93928a: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 939291: lea edx, [esp + 0xe8] */
  edx = (uint32_t)(esp + 0xe8u);
/* 939298: mov dword ptr [esp + 0xf0], ecx */
  W32((uint32_t)(esp + 0xf0u), ecx);
/* 93929f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9392a0: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 9392a7: mov dword ptr [esp + 0xf0], eax */
  W32((uint32_t)(esp + 0xf0u), eax);
/* 9392ae: call 0x92e280 */
  esp -= 4; W32(esp, 0x9392b3u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9392b3: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 9392b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9392bb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9392be: jp 0x939307 */
  if (pf) goto L_939307;
L_9392c0: /* 9392c0: mov dword ptr [esp + 0xe8], 0 */
  W32((uint32_t)(esp + 0xe8u), 0x0u);
/* 9392cb: mov dword ptr [esp + 0xec], 0x3f800000 */
  W32((uint32_t)(esp + 0xecu), 0x3f800000u);
/* 9392d6: mov dword ptr [esp + 0xf0], 0 */
  W32((uint32_t)(esp + 0xf0u), 0x0u);
/* 9392e1: mov dword ptr [esp + 0x130], 0x3f800000 */
  W32((uint32_t)(esp + 0x130u), 0x3f800000u);
/* 9392ec: mov dword ptr [esp + 0x134], 0 */
  W32((uint32_t)(esp + 0x134u), 0x0u);
/* 9392f7: mov dword ptr [esp + 0x138], 0 */
  W32((uint32_t)(esp + 0x138u), 0x0u);
/* 939302: jmp 0x93938a */
  goto L_93938a;
L_939307: /* 939307: lea eax, [esp + 0xe8] */
  eax = (uint32_t)(esp + 0xe8u);
/* 93930e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93930f: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 939316: call 0x92e280 */
  esp -= 4; W32(esp, 0x93931bu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93931b: fsqrt  */
  ST0 = sqrt(ST0);
/* 93931d: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 939321: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 939327: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939329: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93932c: jnp 0x93933f */
  if (!pf) goto L_93933f;
L_93932e: /* 93932e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 939332: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 939333: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 93933a: call 0x934990 */
  esp -= 4; W32(esp, 0x93933fu); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93933f: /* 93933f: lea edx, [esp + 0x84] */
  edx = (uint32_t)(esp + 0x84u);
/* 939346: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939347: lea eax, [esp + 0xec] */
  eax = (uint32_t)(esp + 0xecu);
/* 93934e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93934f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 939350: call 0x9349f0 */
  esp -= 4; W32(esp, 0x939355u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 939355: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 939358: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 93935f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 939360: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 939364: call 0x934970 */
  esp -= 4; W32(esp, 0x939369u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 939369: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 93936d: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 939371: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 939375: mov dword ptr [esp + 0x130], edx */
  W32((uint32_t)(esp + 0x130u), edx);
/* 93937c: mov dword ptr [esp + 0x134], eax */
  W32((uint32_t)(esp + 0x134u), eax);
/* 939383: mov dword ptr [esp + 0x138], ecx */
  W32((uint32_t)(esp + 0x138u), ecx);
L_93938a: /* 93938a: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 93938d: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 939395: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 939397: fabs  */
  ST0 = fabs(ST0);
/* 939399: fld dword ptr [esp + 0x138] */
  { double v = F32((uint32_t)(esp + 0x138u)); FPUSH(v); }
/* 9393a0: fabs  */
  ST0 = fabs(ST0);
/* 9393a2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9393a4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9393a6: fmul dword ptr [esp + 0x1e8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e8u)));
/* 9393ad: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 9393b0: fabs  */
  ST0 = fabs(ST0);
/* 9393b2: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 9393b6: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 9393bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9393bf: fadd dword ptr [esp + 0x1e4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1e4u)));
/* 9393c6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9393c8: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 9393cc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9393d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9393d4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9393d7: je 0x9393e1 */
  if (zf) goto L_9393e1;
L_9393d9: /* 9393d9: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
L_9393e1: /* 9393e1: fld dword ptr [esp + 0x1e4] */
  { double v = F32((uint32_t)(esp + 0x1e4u)); FPUSH(v); }
/* 9393e8: mov byte ptr [esp + 0x1f], 0xc */
  W8((uint32_t)(esp + 0x1fu), 0xcu);
/* 9393ed: fchs  */
  ST0 = -ST0;
/* 9393ef: fst dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0);
/* 9393f6: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 9393fa: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 939401: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 939405: fcomp dword ptr [esp + 0x1dc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1dcu)));
  FPOP();
/* 93940c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93940e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939411: jne 0x93941d */
  if (!zf) goto L_93941d;
L_939413: /* 939413: mov byte ptr [esp + 0xf], 1 */
  W8((uint32_t)(esp + 0xfu), 0x1u);
/* 939418: jmp 0x93af88 */
  goto L_93af88;
L_93941d: /* 93941d: mov edx, dword ptr [esp + 0x154] */
  edx = R32((uint32_t)(esp + 0x154u));
/* 939424: mov ecx, dword ptr [esp + 0x15c] */
  ecx = R32((uint32_t)(esp + 0x15cu));
/* 93942b: mov eax, dword ptr [esp + 0x158] */
  eax = R32((uint32_t)(esp + 0x158u));
/* 939432: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 939439: lea edx, [esp + 0xf4] */
  edx = (uint32_t)(esp + 0xf4u);
/* 939440: mov dword ptr [esp + 0xfc], ecx */
  W32((uint32_t)(esp + 0xfcu), ecx);
/* 939447: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939448: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 93944f: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* 939454: mov dword ptr [esp + 0xfc], eax */
  W32((uint32_t)(esp + 0xfcu), eax);
/* 93945b: call 0x92e280 */
  esp -= 4; W32(esp, 0x939460u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 939460: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 939466: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939468: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93946b: jp 0x9394ad */
  if (pf) goto L_9394ad;
L_93946d: /* 93946d: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 939470: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 939473: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 939476: mov dword ptr [esp + 0xf4], eax */
  W32((uint32_t)(esp + 0xf4u), eax);
/* 93947d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 93947f: mov dword ptr [esp + 0xf8], ecx */
  W32((uint32_t)(esp + 0xf8u), ecx);
/* 939486: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 939489: mov dword ptr [esp + 0xfc], edx */
  W32((uint32_t)(esp + 0xfcu), edx);
/* 939490: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 939493: mov dword ptr [esp + 0x16c], eax */
  W32((uint32_t)(esp + 0x16cu), eax);
/* 93949a: mov dword ptr [esp + 0x170], ecx */
  W32((uint32_t)(esp + 0x170u), ecx);
/* 9394a1: mov dword ptr [esp + 0x174], edx */
  W32((uint32_t)(esp + 0x174u), edx);
/* 9394a8: jmp 0x939534 */
  goto L_939534;
L_9394ad: /* 9394ad: lea eax, [esp + 0xf4] */
  eax = (uint32_t)(esp + 0xf4u);
/* 9394b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9394b5: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 9394bc: call 0x92e280 */
  esp -= 4; W32(esp, 0x9394c1u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9394c1: fsqrt  */
  ST0 = sqrt(ST0);
/* 9394c3: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 9394c7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9394cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9394cf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9394d2: jnp 0x9394e5 */
  if (!pf) goto L_9394e5;
L_9394d4: /* 9394d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9394d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9394d9: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 9394e0: call 0x934990 */
  esp -= 4; W32(esp, 0x9394e5u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_9394e5: /* 9394e5: fld dword ptr [esp + 0xf4] */
  { double v = F32((uint32_t)(esp + 0xf4u)); FPUSH(v); }
/* 9394ec: mov edx, dword ptr [esp + 0xf8] */
  edx = R32((uint32_t)(esp + 0xf8u));
/* 9394f3: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 9394f7: fchs  */
  ST0 = -ST0;
/* 9394f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9394fa: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9394fe: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 939502: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 93950a: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 93950e: call 0x934970 */
  esp -= 4; W32(esp, 0x939513u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 939513: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 939517: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 93951b: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 93951f: mov dword ptr [esp + 0x16c], ecx */
  W32((uint32_t)(esp + 0x16cu), ecx);
/* 939526: mov dword ptr [esp + 0x170], edx */
  W32((uint32_t)(esp + 0x170u), edx);
/* 93952d: mov dword ptr [esp + 0x174], eax */
  W32((uint32_t)(esp + 0x174u), eax);
L_939534: /* 939534: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 939537: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93953a: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 93953d: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 939540: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939542: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 939545: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 939547: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939549: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93954b: fabs  */
  ST0 = fabs(ST0);
/* 93954d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 939551: fld dword ptr [esp + 0x170] */
  { double v = F32((uint32_t)(esp + 0x170u)); FPUSH(v); }
/* 939558: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93955b: fld dword ptr [esp + 0x174] */
  { double v = F32((uint32_t)(esp + 0x174u)); FPUSH(v); }
/* 939562: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 939565: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939567: fld dword ptr [esp + 0x16c] */
  { double v = F32((uint32_t)(esp + 0x16cu)); FPUSH(v); }
/* 93956e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 939570: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939572: fabs  */
  ST0 = fabs(ST0);
/* 939574: fmul dword ptr [esp + 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e0u)));
/* 93957b: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 93957e: fabs  */
  ST0 = fabs(ST0);
/* 939580: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 939582: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 939584: fmul dword ptr [esp + 0x1e4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e4u)));
/* 93958b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93958d: fadd dword ptr [esp + 0x1ec] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1ecu)));
/* 939594: fsubr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) - ST0;
/* 939598: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 93959c: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 9395a0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9395a2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9395a5: jne 0x939606 */
  if (!zf) goto L_939606;
L_9395a7: /* 9395a7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9395ad: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9395b1: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 9395b5: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 9395bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9395bf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9395c2: je 0x9395cc */
  if (zf) goto L_9395cc;
L_9395c4: /* 9395c4: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
L_9395cc: /* 9395cc: fld dword ptr [esp + 0x1ec] */
  { double v = F32((uint32_t)(esp + 0x1ecu)); FPUSH(v); }
/* 9395d3: mov byte ptr [esp + 0x1f], 3 */
  W8((uint32_t)(esp + 0x1fu), 0x3u);
/* 9395d8: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 9395dc: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 9395e3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9395e7: fcomp dword ptr [esp + 0x1dc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1dcu)));
  FPOP();
/* 9395ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9395f0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9395f3: jne 0x9395ff */
  if (!zf) goto L_9395ff;
L_9395f5: /* 9395f5: mov byte ptr [esp + 0xf], 1 */
  W8((uint32_t)(esp + 0xfu), 0x1u);
/* 9395fa: jmp 0x93af88 */
  goto L_93af88;
L_9395ff: /* 9395ff: mov byte ptr [esp + 0xf], 0 */
  W8((uint32_t)(esp + 0xfu), 0x0u);
/* 939604: jmp 0x939608 */
  goto L_939608;
L_939606: /* 939606: fstp st(0) */
  STI(0) = ST0; FPOP();
L_939608: /* 939608: mov edx, dword ptr [esp + 0x154] */
  edx = R32((uint32_t)(esp + 0x154u));
/* 93960f: mov ecx, dword ptr [esp + 0x15c] */
  ecx = R32((uint32_t)(esp + 0x15cu));
/* 939616: mov eax, dword ptr [esp + 0x158] */
  eax = R32((uint32_t)(esp + 0x158u));
/* 93961d: mov dword ptr [esp + 0xc4], edx */
  W32((uint32_t)(esp + 0xc4u), edx);
/* 939624: lea edx, [esp + 0xc4] */
  edx = (uint32_t)(esp + 0xc4u);
/* 93962b: mov dword ptr [esp + 0xcc], ecx */
  W32((uint32_t)(esp + 0xccu), ecx);
/* 939632: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939633: lea ecx, [esp + 0xc8] */
  ecx = (uint32_t)(esp + 0xc8u);
/* 93963a: mov dword ptr [esp + 0xcc], eax */
  W32((uint32_t)(esp + 0xccu), eax);
/* 939641: call 0x92e280 */
  esp -= 4; W32(esp, 0x939646u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 939646: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93964c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93964e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 939651: jp 0x939672 */
  if (pf) goto L_939672;
L_939653: /* 939653: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 939656: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 939659: mov dword ptr [esp + 0xc4], eax */
  W32((uint32_t)(esp + 0xc4u), eax);
/* 939660: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 939667: mov dword ptr [esp + 0xcc], 0 */
  W32((uint32_t)(esp + 0xccu), 0x0u);
L_939672: /* 939672: lea edx, [esp + 0xc4] */
  edx = (uint32_t)(esp + 0xc4u);
/* 939679: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93967a: lea ecx, [esp + 0xc8] */
  ecx = (uint32_t)(esp + 0xc8u);
/* 939681: call 0x92e280 */
  esp -= 4; W32(esp, 0x939686u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 939686: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93968c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93968e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939691: jne 0x939777 */
  if (!zf) goto L_939777;
L_939697: /* 939697: lea eax, [esp + 0xc4] */
  eax = (uint32_t)(esp + 0xc4u);
/* 93969e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93969f: lea ecx, [esp + 0xc8] */
  ecx = (uint32_t)(esp + 0xc8u);
/* 9396a6: call 0x92e280 */
  esp -= 4; W32(esp, 0x9396abu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9396ab: fsqrt  */
  ST0 = sqrt(ST0);
/* 9396ad: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 9396b1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9396b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9396b9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9396bc: jnp 0x9396cf */
  if (!pf) goto L_9396cf;
L_9396be: /* 9396be: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9396c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9396c3: lea ecx, [esp + 0xc8] */
  ecx = (uint32_t)(esp + 0xc8u);
/* 9396ca: call 0x934990 */
  esp -= 4; W32(esp, 0x9396cfu); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_9396cf: /* 9396cf: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 9396d6: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 9396d9: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 9396e0: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 9396e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9396e5: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 9396ec: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 9396ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9396f1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9396f3: fabs  */
  ST0 = fabs(ST0);
/* 9396f5: fld dword ptr [esp + 0x1e0] */
  { double v = F32((uint32_t)(esp + 0x1e0u)); FPUSH(v); }
/* 9396fc: fadd dword ptr [esp + 0x1e8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1e8u)));
/* 939703: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 939705: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 939709: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 93970d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93970f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939712: jne 0x939775 */
  if (!zf) goto L_939775;
L_939714: /* 939714: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93971a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 93971e: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 939722: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 93972a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93972c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93972f: je 0x939739 */
  if (zf) goto L_939739;
L_939731: /* 939731: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
L_939739: /* 939739: fld dword ptr [esp + 0x1e0] */
  { double v = F32((uint32_t)(esp + 0x1e0u)); FPUSH(v); }
/* 939740: mov byte ptr [esp + 0x1f], 0xa */
  W8((uint32_t)(esp + 0x1fu), 0xau);
/* 939745: fchs  */
  ST0 = -ST0;
/* 939747: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 93974b: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 939752: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 939756: fcomp dword ptr [esp + 0x1dc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1dcu)));
  FPOP();
/* 93975d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93975f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939762: jne 0x93976e */
  if (!zf) goto L_93976e;
L_939764: /* 939764: mov byte ptr [esp + 0xf], 1 */
  W8((uint32_t)(esp + 0xfu), 0x1u);
/* 939769: jmp 0x93af88 */
  goto L_93af88;
L_93976e: /* 93976e: mov byte ptr [esp + 0xf], 0 */
  W8((uint32_t)(esp + 0xfu), 0x0u);
/* 939773: jmp 0x939777 */
  goto L_939777;
L_939775: /* 939775: fstp st(0) */
  STI(0) = ST0; FPOP();
L_939777: /* 939777: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 93977a: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 93977d: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 939780: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 939784: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 939787: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 93978a: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93978d: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 939790: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 939793: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 939796: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939798: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 93979c: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 93979f: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 9397a3: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9397a5: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 9397a9: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 9397ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9397af: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9397b3: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 9397ba: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 9397bd: fsubr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) - ST0;
/* 9397c1: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 9397c7: fld dword ptr [esp + 0x1f8] */
  { double v = F32((uint32_t)(esp + 0x1f8u)); FPUSH(v); }
/* 9397ce: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9397d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9397d3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9397d7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9397da: fld dword ptr [esp + 0x1f8] */
  { double v = F32((uint32_t)(esp + 0x1f8u)); FPUSH(v); }
/* 9397e1: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 9397e4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9397e8: fld dword ptr [esp + 0x1f8] */
  { double v = F32((uint32_t)(esp + 0x1f8u)); FPUSH(v); }
/* 9397ef: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9397f1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9397f4: jne 0x939828 */
  if (!zf) goto L_939828;
L_9397f6: /* 9397f6: call 0x92ec40 */
  esp -= 4; W32(esp, 0x9397fbu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 9397fb: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9397ff: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 939803: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 939807: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 93980b: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93980f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 939813: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 939817: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 93981b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93981f: fsub dword ptr [esp + 0x1ec] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1ecu)));
/* 939826: jmp 0x939858 */
  goto L_939858;
L_939828: /* 939828: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93982du); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93982d: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 939831: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 939835: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 939839: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 93983d: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 939841: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 939845: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 939849: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 93984d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 939851: fadd dword ptr [esp + 0x1ec] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1ecu)));
L_939858: /* 939858: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93985c: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 939860: fabs  */
  ST0 = fabs(ST0);
/* 939862: fst dword ptr [esp + 0x10c] */
  WF32((uint32_t)(esp + 0x10cu), ST0);
/* 939869: fcomp qword ptr [0xa1a808] */
  fpu_com(ST0, F64((uint32_t)(0xa1a808u)));
  FPOP();
/* 93986f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939871: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939874: jne 0x939b63 */
  if (!zf) goto L_939b63;
L_93987a: /* 93987a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93987e: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 939882: fdiv dword ptr [esp + 0x7c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x7cu)));
/* 939886: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 939887: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93988b: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 93988f: fchs  */
  ST0 = -ST0;
/* 939891: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 939895: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 939899: fchs  */
  ST0 = -ST0;
/* 93989b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 93989f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9398a3: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 9398a7: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9398ab: call 0x92e280 */
  esp -= 4; W32(esp, 0x9398b0u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9398b0: fsqrt  */
  ST0 = sqrt(ST0);
/* 9398b2: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 9398b6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9398bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9398be: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9398c1: jnp 0x9398d1 */
  if (!pf) goto L_9398d1;
L_9398c3: /* 9398c3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9398c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9398c8: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 9398cc: call 0x934990 */
  esp -= 4; W32(esp, 0x9398d1u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_9398d1: /* 9398d1: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9398d5: lea eax, [esp + 0x9c] */
  eax = (uint32_t)(esp + 0x9cu);
/* 9398dc: fmul dword ptr [esp + 0x1e8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e8u)));
/* 9398e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9398e4: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 9398eb: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 9398f3: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 9398f7: mov dword ptr [esp + 0xa8], 0 */
  W32((uint32_t)(esp + 0xa8u), 0x0u);
/* 939902: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 939906: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 93990d: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 939911: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 939913: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 93991a: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 939921: call 0x92e280 */
  esp -= 4; W32(esp, 0x939926u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 939926: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93992c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93992e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939931: jne 0x939b65 */
  if (!zf) goto L_939b65;
L_939937: /* 939937: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 93993e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93993f: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 939946: call 0x92e280 */
  esp -= 4; W32(esp, 0x93994bu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93994b: fsqrt  */
  ST0 = sqrt(ST0);
/* 93994d: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 939951: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 939957: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939959: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93995c: jnp 0x93996f */
  if (!pf) goto L_93996f;
L_93995e: /* 93995e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 939962: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939963: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 93996a: call 0x934990 */
  esp -= 4; W32(esp, 0x93996fu); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93996f: /* 93996f: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 939976: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 939977: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 93997e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93997f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 939980: call 0x9349f0 */
  esp -= 4; W32(esp, 0x939985u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 939985: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 939988: lea edx, [esp + 0x84] */
  edx = (uint32_t)(esp + 0x84u);
/* 93998f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939990: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 939994: call 0x934970 */
  esp -= 4; W32(esp, 0x939999u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 939999: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 93999d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 9399a1: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9399a5: mov dword ptr [esp + 0x160], eax */
  W32((uint32_t)(esp + 0x160u), eax);
/* 9399ac: lea eax, [esp + 0x160] */
  eax = (uint32_t)(esp + 0x160u);
/* 9399b3: mov dword ptr [esp + 0x164], ecx */
  W32((uint32_t)(esp + 0x164u), ecx);
/* 9399ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9399bb: lea ecx, [esp + 0x164] */
  ecx = (uint32_t)(esp + 0x164u);
/* 9399c2: mov dword ptr [esp + 0x16c], edx */
  W32((uint32_t)(esp + 0x16cu), edx);
/* 9399c9: call 0x92e280 */
  esp -= 4; W32(esp, 0x9399ceu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9399ce: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 9399d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9399d6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9399d9: jne 0x939b65 */
  if (!zf) goto L_939b65;
L_9399df: /* 9399df: lea ecx, [esp + 0x160] */
  ecx = (uint32_t)(esp + 0x160u);
/* 9399e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9399e7: lea ecx, [esp + 0x164] */
  ecx = (uint32_t)(esp + 0x164u);
/* 9399ee: call 0x92e280 */
  esp -= 4; W32(esp, 0x9399f3u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9399f3: fsqrt  */
  ST0 = sqrt(ST0);
/* 9399f5: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 9399f9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9399ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939a01: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 939a04: jnp 0x939a17 */
  if (!pf) goto L_939a17;
L_939a06: /* 939a06: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 939a0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939a0b: lea ecx, [esp + 0x164] */
  ecx = (uint32_t)(esp + 0x164u);
/* 939a12: call 0x934990 */
  esp -= 4; W32(esp, 0x939a17u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_939a17: /* 939a17: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 939a1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 939a1f: lea ecx, [esp + 0x164] */
  ecx = (uint32_t)(esp + 0x164u);
/* 939a26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 939a27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 939a28: call 0x9349f0 */
  esp -= 4; W32(esp, 0x939a2du); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 939a2d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 939a30: lea edx, [esp + 0x84] */
  edx = (uint32_t)(esp + 0x84u);
/* 939a37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939a38: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 939a3c: call 0x934970 */
  esp -= 4; W32(esp, 0x939a41u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 939a41: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 939a48: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 939a4b: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 939a4f: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 939a56: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 939a5a: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 939a5d: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 939a61: mov dword ptr [esp + 0x1b8], eax */
  W32((uint32_t)(esp + 0x1b8u), eax);
/* 939a68: mov dword ptr [esp + 0x1bc], ecx */
  W32((uint32_t)(esp + 0x1bcu), ecx);
/* 939a6f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939a71: mov dword ptr [esp + 0x1c0], edx */
  W32((uint32_t)(esp + 0x1c0u), edx);
/* 939a78: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 939a7f: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 939a82: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939a84: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 939a86: fabs  */
  ST0 = fabs(ST0);
/* 939a88: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 939a8f: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 939a92: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 939a99: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 939a9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939a9e: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 939aa5: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 939aa7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939aa9: fabs  */
  ST0 = fabs(ST0);
/* 939aab: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 939aad: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 939aaf: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 939ab6: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 939abd: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 939ac1: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 939ac8: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 939acc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939ace: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 939ad5: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 939ad9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939adb: fabs  */
  ST0 = fabs(ST0);
/* 939add: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 939ae1: fmul dword ptr [esp + 0x1e8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e8u)));
/* 939ae8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939aea: fadd dword ptr [esp + 0x1e0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1e0u)));
/* 939af1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 939af3: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 939af7: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 939afb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939afd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939b00: jne 0x939b63 */
  if (!zf) goto L_939b63;
L_939b02: /* 939b02: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 939b08: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 939b0c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 939b10: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 939b18: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939b1a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939b1d: je 0x939b27 */
  if (zf) goto L_939b27;
L_939b1f: /* 939b1f: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
L_939b27: /* 939b27: fld dword ptr [esp + 0x1e0] */
  { double v = F32((uint32_t)(esp + 0x1e0u)); FPUSH(v); }
/* 939b2e: mov byte ptr [esp + 0x1f], 6 */
  W8((uint32_t)(esp + 0x1fu), 0x6u);
/* 939b33: fchs  */
  ST0 = -ST0;
/* 939b35: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 939b39: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 939b40: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 939b44: fcomp dword ptr [esp + 0x1dc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1dcu)));
  FPOP();
/* 939b4b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939b4d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939b50: jne 0x939b5c */
  if (!zf) goto L_939b5c;
L_939b52: /* 939b52: mov byte ptr [esp + 0xf], 1 */
  W8((uint32_t)(esp + 0xfu), 0x1u);
/* 939b57: jmp 0x93af88 */
  goto L_93af88;
L_939b5c: /* 939b5c: mov byte ptr [esp + 0xf], 0 */
  W8((uint32_t)(esp + 0xfu), 0x0u);
/* 939b61: jmp 0x939b65 */
  goto L_939b65;
L_939b63: /* 939b63: fstp st(0) */
  STI(0) = ST0; FPOP();
L_939b65: /* 939b65: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 939b69: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 939b6d: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 939b70: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 939b76: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939b78: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939b7b: jne 0x939b8a */
  if (!zf) goto L_939b8a;
L_939b7d: /* 939b7d: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* 939b84: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 939b88: jmp 0x939b95 */
  goto L_939b95;
L_939b8a: /* 939b8a: mov edx, dword ptr [esp + 0x1e4] */
  edx = R32((uint32_t)(esp + 0x1e4u));
/* 939b91: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
L_939b95: /* 939b95: fld dword ptr [esp + 0x10c] */
  { double v = F32((uint32_t)(esp + 0x10cu)); FPUSH(v); }
/* 939b9c: fcomp qword ptr [0xa1a808] */
  fpu_com(ST0, F64((uint32_t)(0xa1a808u)));
  FPOP();
/* 939ba2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939ba4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939ba7: jne 0x939f39 */
  if (!zf) goto L_939f39;
L_939bad: /* 939bad: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 939bb1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 939bb4: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 939bb7: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 939bbb: fdiv dword ptr [esp + 0x88] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x88u)));
/* 939bc2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 939bc4: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 939bc7: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 939bcb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 939bcd: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 939bd0: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 939bd4: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 939bd6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 939bd9: call 0x92ec40 */
  esp -= 4; W32(esp, 0x939bdeu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 939bde: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 939be2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 939be5: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 939be8: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 939bec: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 939bf0: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 939bf4: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 939bf7: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 939bfb: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 939bff: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 939c02: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 939c05: call 0x92ec40 */
  esp -= 4; W32(esp, 0x939c0au); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 939c0a: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 939c0e: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 939c12: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 939c16: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 939c1a: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 939c1e: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 939c22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939c23: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 939c27: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 939c2b: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 939c2f: call 0x92e280 */
  esp -= 4; W32(esp, 0x939c34u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 939c34: fsqrt  */
  ST0 = sqrt(ST0);
/* 939c36: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 939c3a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 939c40: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939c42: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 939c45: jnp 0x939c55 */
  if (!pf) goto L_939c55;
L_939c47: /* 939c47: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 939c4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 939c4c: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 939c50: call 0x934990 */
  esp -= 4; W32(esp, 0x939c55u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_939c55: /* 939c55: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 939c59: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 939c5c: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 939c63: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 939c67: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 939c6b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 939c6f: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 939c76: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 939c7a: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 939c7e: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 939c85: fst dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0);
/* 939c89: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 939c8c: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 939c90: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 939c93: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939c95: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 939c99: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 939c9b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939c9d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 939c9f: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 939ca2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 939ca6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 939ca8: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 939cab: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 939caf: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 939cb1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 939cb4: call 0x92ec40 */
  esp -= 4; W32(esp, 0x939cb9u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 939cb9: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 939cbd: lea edx, [esp + 0xa8] */
  edx = (uint32_t)(esp + 0xa8u);
/* 939cc4: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 939cc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939cc9: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 939ccd: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 939cd1: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 939cd5: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 939cd9: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 939cdd: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 939ce1: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 939ce5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 939ce9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 939ceb: mov dword ptr [esp + 0xb4], ecx */
  W32((uint32_t)(esp + 0xb4u), ecx);
/* 939cf2: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 939cf9: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 939d00: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 939d07: call 0x92e280 */
  esp -= 4; W32(esp, 0x939d0cu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 939d0c: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 939d12: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939d14: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939d17: jne 0x939f39 */
  if (!zf) goto L_939f39;
L_939d1d: /* 939d1d: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 939d24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 939d25: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 939d2c: call 0x92e280 */
  esp -= 4; W32(esp, 0x939d31u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 939d31: fsqrt  */
  ST0 = sqrt(ST0);
/* 939d33: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 939d37: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 939d3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939d3f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 939d42: jnp 0x939d55 */
  if (!pf) goto L_939d55;
L_939d44: /* 939d44: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 939d48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 939d49: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 939d50: call 0x934990 */
  esp -= 4; W32(esp, 0x939d55u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_939d55: /* 939d55: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 939d5c: mov edx, dword ptr [esp + 0xa8] */
  edx = R32((uint32_t)(esp + 0xa8u));
/* 939d63: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 939d67: fchs  */
  ST0 = -ST0;
/* 939d69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 939d6a: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 939d6e: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 939d72: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 939d7a: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 939d7e: call 0x934970 */
  esp -= 4; W32(esp, 0x939d83u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 939d83: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 939d87: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 939d8b: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 939d8f: mov dword ptr [esp + 0x110], ecx */
  W32((uint32_t)(esp + 0x110u), ecx);
/* 939d96: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 939d9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 939d9e: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 939da5: mov dword ptr [esp + 0x118], edx */
  W32((uint32_t)(esp + 0x118u), edx);
/* 939dac: mov dword ptr [esp + 0x11c], eax */
  W32((uint32_t)(esp + 0x11cu), eax);
/* 939db3: call 0x92e280 */
  esp -= 4; W32(esp, 0x939db8u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 939db8: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 939dbe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939dc0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939dc3: jne 0x939f39 */
  if (!zf) goto L_939f39;
L_939dc9: /* 939dc9: lea edx, [esp + 0x110] */
  edx = (uint32_t)(esp + 0x110u);
/* 939dd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939dd1: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 939dd8: call 0x92e280 */
  esp -= 4; W32(esp, 0x939dddu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 939ddd: fsqrt  */
  ST0 = sqrt(ST0);
/* 939ddf: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 939de3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 939de9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939deb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 939dee: jnp 0x939e01 */
  if (!pf) goto L_939e01;
L_939df0: /* 939df0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 939df4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 939df5: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 939dfc: call 0x934990 */
  esp -= 4; W32(esp, 0x939e01u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_939e01: /* 939e01: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 939e08: fld dword ptr [esp + 0x110] */
  { double v = F32((uint32_t)(esp + 0x110u)); FPUSH(v); }
/* 939e0f: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 939e13: fchs  */
  ST0 = -ST0;
/* 939e15: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 939e19: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 939e1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 939e1e: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 939e22: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 939e2a: call 0x934970 */
  esp -= 4; W32(esp, 0x939e2fu); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 939e2f: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 939e36: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 939e39: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 939e3d: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 939e44: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 939e48: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 939e4b: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 939e4f: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 939e56: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 939e5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939e5f: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
/* 939e66: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 939e6d: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 939e70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939e72: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 939e74: fabs  */
  ST0 = fabs(ST0);
/* 939e76: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 939e7a: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 939e81: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 939e85: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 939e8c: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 939e90: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939e92: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 939e99: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 939e9d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939e9f: fabs  */
  ST0 = fabs(ST0);
/* 939ea1: fmul dword ptr [esp + 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e0u)));
/* 939ea8: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 939eaf: fabs  */
  ST0 = fabs(ST0);
/* 939eb1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 939eb3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 939eb5: fmul dword ptr [esp + 0x1e4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e4u)));
/* 939ebc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939ebe: fadd dword ptr [esp + 0x1e8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1e8u)));
/* 939ec5: fsubr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) - ST0;
/* 939ec9: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 939ecd: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 939ed1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939ed3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939ed6: jne 0x939f37 */
  if (!zf) goto L_939f37;
L_939ed8: /* 939ed8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 939ede: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 939ee2: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 939ee6: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 939eee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939ef0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939ef3: je 0x939efd */
  if (zf) goto L_939efd;
L_939ef5: /* 939ef5: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
L_939efd: /* 939efd: fld dword ptr [esp + 0x1e8] */
  { double v = F32((uint32_t)(esp + 0x1e8u)); FPUSH(v); }
/* 939f04: mov byte ptr [esp + 0x1f], 9 */
  W8((uint32_t)(esp + 0x1fu), 0x9u);
/* 939f09: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 939f0d: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 939f14: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 939f18: fcomp dword ptr [esp + 0x1dc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1dcu)));
  FPOP();
/* 939f1f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939f21: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939f24: jne 0x939f30 */
  if (!zf) goto L_939f30;
L_939f26: /* 939f26: mov byte ptr [esp + 0xf], 1 */
  W8((uint32_t)(esp + 0xfu), 0x1u);
/* 939f2b: jmp 0x93af88 */
  goto L_93af88;
L_939f30: /* 939f30: mov byte ptr [esp + 0xf], 0 */
  W8((uint32_t)(esp + 0xfu), 0x0u);
/* 939f35: jmp 0x939f39 */
  goto L_939f39;
L_939f37: /* 939f37: fstp st(0) */
  STI(0) = ST0; FPOP();
L_939f39: /* 939f39: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 939f3c: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 939f3f: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 939f42: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 939f45: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 939f48: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 939f4b: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 939f4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 939f51: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 939f55: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 939f59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939f5b: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 939f5f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 939f61: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 939f65: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 939f68: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 939f6a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 939f6e: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 939f75: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 939f78: fsubr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) - ST0;
/* 939f7c: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 939f82: fld dword ptr [esp + 0x1f8] */
  { double v = F32((uint32_t)(esp + 0x1f8u)); FPUSH(v); }
/* 939f89: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 939f8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 939f8e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 939f92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 939f95: fld dword ptr [esp + 0x1f8] */
  { double v = F32((uint32_t)(esp + 0x1f8u)); FPUSH(v); }
/* 939f9c: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 939f9f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 939fa3: fld dword ptr [esp + 0x1f8] */
  { double v = F32((uint32_t)(esp + 0x1f8u)); FPUSH(v); }
/* 939faa: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 939fac: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 939faf: jne 0x939fe3 */
  if (!zf) goto L_939fe3;
L_939fb1: /* 939fb1: call 0x92ec40 */
  esp -= 4; W32(esp, 0x939fb6u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 939fb6: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 939fba: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 939fbe: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 939fc2: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 939fc6: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 939fca: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 939fce: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 939fd2: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 939fd6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 939fda: fsub dword ptr [esp + 0x1ec] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1ecu)));
/* 939fe1: jmp 0x93a013 */
  goto L_93a013;
L_939fe3: /* 939fe3: call 0x92ec40 */
  esp -= 4; W32(esp, 0x939fe8u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 939fe8: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 939fec: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 939ff0: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 939ff4: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 939ff8: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 939ffc: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 93a000: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93a004: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 93a008: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93a00c: fadd dword ptr [esp + 0x1ec] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1ecu)));
L_93a013: /* 93a013: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93a017: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93a01a: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 93a01e: fchs  */
  ST0 = -ST0;
/* 93a020: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93a024: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93a028: fchs  */
  ST0 = -ST0;
/* 93a02a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93a02e: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93a032: fchs  */
  ST0 = -ST0;
/* 93a034: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93a037: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93a03cu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93a03c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93a040: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93a043: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a046: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 93a04a: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 93a04e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a050: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a052: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 93a055: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 93a05b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a05d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93a05f: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93a062: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93a066: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93a068: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a06b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93a06f: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a071: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93a074: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93a079u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93a079: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93a07d: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 93a081: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 93a085: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93a086: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93a08a: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93a08e: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93a092: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 93a096: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 93a09a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93a09e: fchs  */
  ST0 = -ST0;
/* 93a0a0: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 93a0a4: call 0x92e280 */
  esp -= 4; W32(esp, 0x93a0a9u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93a0a9: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93a0af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a0b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a0b4: jne 0x93a30b */
  if (!zf) goto L_93a30b;
L_93a0ba: /* 93a0ba: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 93a0be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93a0bf: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93a0c3: call 0x92e280 */
  esp -= 4; W32(esp, 0x93a0c8u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93a0c8: fsqrt  */
  ST0 = sqrt(ST0);
/* 93a0ca: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93a0ce: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93a0d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a0d6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93a0d9: jnp 0x93a0e9 */
  if (!pf) goto L_93a0e9;
L_93a0db: /* 93a0db: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 93a0df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93a0e0: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93a0e4: call 0x934990 */
  esp -= 4; W32(esp, 0x93a0e9u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93a0e9: /* 93a0e9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93a0ed: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 93a0f1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 93a0f5: mov dword ptr [esp + 0x184], ecx */
  W32((uint32_t)(esp + 0x184u), ecx);
/* 93a0fc: lea ecx, [esp + 0x1ac] */
  ecx = (uint32_t)(esp + 0x1acu);
/* 93a103: mov dword ptr [esp + 0x188], edx */
  W32((uint32_t)(esp + 0x188u), edx);
/* 93a10a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93a10b: lea edx, [esp + 0x188] */
  edx = (uint32_t)(esp + 0x188u);
/* 93a112: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93a113: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93a114: mov dword ptr [esp + 0x198], eax */
  W32((uint32_t)(esp + 0x198u), eax);
/* 93a11b: call 0x9349f0 */
  esp -= 4; W32(esp, 0x93a120u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 93a120: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93a123: lea eax, [esp + 0x1ac] */
  eax = (uint32_t)(esp + 0x1acu);
/* 93a12a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93a12b: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 93a12f: call 0x934970 */
  esp -= 4; W32(esp, 0x93a134u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93a134: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93a138: fmul dword ptr [esp + 0x1e8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e8u)));
/* 93a13f: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 93a143: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93a147: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 93a14b: fmul dword ptr [esp + 0x1e8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e8u)));
/* 93a152: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 93a156: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a158: mov dword ptr [esp + 0x1ac], ecx */
  W32((uint32_t)(esp + 0x1acu), ecx);
/* 93a15f: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 93a163: mov dword ptr [esp + 0x1b0], edx */
  W32((uint32_t)(esp + 0x1b0u), edx);
/* 93a16a: lea edx, [esp + 0xb4] */
  edx = (uint32_t)(esp + 0xb4u);
/* 93a171: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93a172: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93a176: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 93a17a: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 93a181: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 93a185: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 93a18c: mov dword ptr [esp + 0x1b8], eax */
  W32((uint32_t)(esp + 0x1b8u), eax);
/* 93a193: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 93a19b: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 93a19f: mov dword ptr [esp + 0xc0], 0 */
  W32((uint32_t)(esp + 0xc0u), 0x0u);
/* 93a1aa: fstp dword ptr [esp + 0xbc] */
  WF32((uint32_t)(esp + 0xbcu), ST0); FPOP();
/* 93a1b1: call 0x92e280 */
  esp -= 4; W32(esp, 0x93a1b6u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93a1b6: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93a1bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a1be: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a1c1: jne 0x93a30b */
  if (!zf) goto L_93a30b;
L_93a1c7: /* 93a1c7: lea eax, [esp + 0xb4] */
  eax = (uint32_t)(esp + 0xb4u);
/* 93a1ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93a1cf: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 93a1d6: call 0x92e280 */
  esp -= 4; W32(esp, 0x93a1dbu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93a1db: fsqrt  */
  ST0 = sqrt(ST0);
/* 93a1dd: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93a1e1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93a1e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a1e9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93a1ec: jnp 0x93a1ff */
  if (!pf) goto L_93a1ff;
L_93a1ee: /* 93a1ee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 93a1f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93a1f3: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 93a1fa: call 0x934990 */
  esp -= 4; W32(esp, 0x93a1ffu); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93a1ff: /* 93a1ff: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 93a206: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 93a209: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 93a210: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 93a213: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a215: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 93a21c: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 93a21f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a221: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93a223: fabs  */
  ST0 = fabs(ST0);
/* 93a225: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 93a22c: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93a22f: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 93a236: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a239: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a23b: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 93a242: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a244: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a246: fabs  */
  ST0 = fabs(ST0);
/* 93a248: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a24a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a24c: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 93a253: fld dword ptr [esp + 0x18c] */
  { double v = F32((uint32_t)(esp + 0x18cu)); FPUSH(v); }
/* 93a25a: fmul dword ptr [esp + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xbcu)));
/* 93a261: fld dword ptr [esp + 0x188] */
  { double v = F32((uint32_t)(esp + 0x188u)); FPUSH(v); }
/* 93a268: fmul dword ptr [esp + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb8u)));
/* 93a26f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a271: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 93a278: fmul dword ptr [esp + 0x184] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x184u)));
/* 93a27f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a281: fabs  */
  ST0 = fabs(ST0);
/* 93a283: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93a287: fmul dword ptr [esp + 0x1e8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e8u)));
/* 93a28e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a290: fadd dword ptr [esp + 0x1e0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1e0u)));
/* 93a297: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 93a299: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 93a29d: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 93a2a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a2a3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a2a6: jne 0x93a309 */
  if (!zf) goto L_93a309;
L_93a2a8: /* 93a2a8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93a2ae: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 93a2b2: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 93a2b6: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 93a2be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a2c0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a2c3: je 0x93a2cd */
  if (zf) goto L_93a2cd;
L_93a2c5: /* 93a2c5: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
L_93a2cd: /* 93a2cd: fld dword ptr [esp + 0x1e0] */
  { double v = F32((uint32_t)(esp + 0x1e0u)); FPUSH(v); }
/* 93a2d4: mov byte ptr [esp + 0x1f], 8 */
  W8((uint32_t)(esp + 0x1fu), 0x8u);
/* 93a2d9: fchs  */
  ST0 = -ST0;
/* 93a2db: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 93a2df: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 93a2e6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93a2ea: fcomp dword ptr [esp + 0x1dc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1dcu)));
  FPOP();
/* 93a2f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a2f3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a2f6: jne 0x93a302 */
  if (!zf) goto L_93a302;
L_93a2f8: /* 93a2f8: mov byte ptr [esp + 0xf], 1 */
  W8((uint32_t)(esp + 0xfu), 0x1u);
/* 93a2fd: jmp 0x93af88 */
  goto L_93af88;
L_93a302: /* 93a302: mov byte ptr [esp + 0xf], 0 */
  W8((uint32_t)(esp + 0xfu), 0x0u);
/* 93a307: jmp 0x93a30b */
  goto L_93a30b;
L_93a309: /* 93a309: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93a30b: /* 93a30b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93a30f: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 93a313: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 93a316: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 93a31c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a31e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a321: jne 0x93a337 */
  if (!zf) goto L_93a337;
L_93a323: /* 93a323: mov eax, dword ptr [esp + 0xc0] */
  eax = R32((uint32_t)(esp + 0xc0u));
/* 93a32a: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 93a331: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 93a335: jmp 0x93a349 */
  goto L_93a349;
L_93a337: /* 93a337: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* 93a33e: fld dword ptr [esp + 0x1e4] */
  { double v = F32((uint32_t)(esp + 0x1e4u)); FPUSH(v); }
/* 93a345: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_93a349: /* 93a349: fsubr dword ptr [esi + 0x38] */
  ST0 = (F32((uint32_t)(esi + 0x38u))) - ST0;
/* 93a34c: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 93a34f: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 93a352: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 93a356: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93a359: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 93a35d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93a361: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93a364: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a367: lea ecx, [esp + 0x1a8] */
  ecx = (uint32_t)(esp + 0x1a8u);
/* 93a36e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a370: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93a374: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a376: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a378: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93a37a: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93a37d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93a381: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93a383: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a386: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93a38a: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a38c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93a38f: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93a394u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93a394: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93a398: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 93a39c: fsub dword ptr [esp + 0x19c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x19cu)));
/* 93a3a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93a3a4: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93a3a8: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 93a3b0: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 93a3b4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93a3b8: fsub dword ptr [esp + 0x1a4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1a4u)));
/* 93a3bf: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 93a3c3: call 0x92e280 */
  esp -= 4; W32(esp, 0x93a3c8u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93a3c8: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93a3ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a3d0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a3d3: jne 0x93a69a */
  if (!zf) goto L_93a69a;
L_93a3d9: /* 93a3d9: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 93a3dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93a3de: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93a3e2: call 0x92e280 */
  esp -= 4; W32(esp, 0x93a3e7u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93a3e7: fsqrt  */
  ST0 = sqrt(ST0);
/* 93a3e9: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93a3ed: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93a3f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a3f5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93a3f8: jnp 0x93a408 */
  if (!pf) goto L_93a408;
L_93a3fa: /* 93a3fa: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 93a3fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93a3ff: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 93a403: call 0x934990 */
  esp -= 4; W32(esp, 0x93a408u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93a408: /* 93a408: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 93a40c: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93a410: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 93a414: fchs  */
  ST0 = -ST0;
/* 93a416: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 93a41a: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 93a41e: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 93a422: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 93a426: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 93a42a: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 93a42e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93a42f: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93a433: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 93a437: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 93a43f: call 0x934970 */
  esp -= 4; W32(esp, 0x93a444u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93a444: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93a448: fmul dword ptr [esp + 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e0u)));
/* 93a44f: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 93a453: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 93a457: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 93a45b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 93a45f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93a462: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93a466: mov dword ptr [esp + 0x1ac], ecx */
  W32((uint32_t)(esp + 0x1acu), ecx);
/* 93a46d: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 93a474: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 93a478: mov dword ptr [esp + 0x1a8], eax */
  W32((uint32_t)(esp + 0x1a8u), eax);
/* 93a47f: mov dword ptr [esp + 0x1b0], edx */
  W32((uint32_t)(esp + 0x1b0u), edx);
/* 93a486: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93a48a: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93a48e: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 93a495: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 93a499: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 93a49d: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 93a4a0: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93a4a4: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 93a4a7: fchs  */
  ST0 = -ST0;
/* 93a4a9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93a4ad: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 93a4b0: fchs  */
  ST0 = -ST0;
/* 93a4b2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93a4b5: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93a4bau); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93a4ba: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93a4be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93a4c1: fadd dword ptr [esp + 0x68] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x68u)));
/* 93a4c5: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 93a4c9: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 93a4cd: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 93a4d1: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 93a4d5: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 93a4d9: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 93a4dd: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 93a4e1: fst dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0);
/* 93a4e5: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93a4e8: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 93a4ec: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a4ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a4f1: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 93a4f5: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a4f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a4f9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93a4fb: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93a4fe: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93a502: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93a504: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a507: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93a50b: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a50d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93a510: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93a515u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93a515: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 93a519: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 93a51d: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 93a521: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 93a525: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 93a529: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 93a52d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 93a531: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 93a535: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 93a539: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a53b: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 93a542: fstp dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0); FPOP();
/* 93a549: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 93a54d: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 93a554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93a555: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 93a55c: mov dword ptr [esp + 0xdc], eax */
  W32((uint32_t)(esp + 0xdcu), eax);
/* 93a563: call 0x92e280 */
  esp -= 4; W32(esp, 0x93a568u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93a568: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93a56e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a570: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a573: jne 0x93a69a */
  if (!zf) goto L_93a69a;
L_93a579: /* 93a579: lea edx, [esp + 0xd0] */
  edx = (uint32_t)(esp + 0xd0u);
/* 93a580: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93a581: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 93a588: call 0x92e280 */
  esp -= 4; W32(esp, 0x93a58du); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93a58d: fsqrt  */
  ST0 = sqrt(ST0);
/* 93a58f: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93a593: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93a599: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a59b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93a59e: jnp 0x93a5b1 */
  if (!pf) goto L_93a5b1;
L_93a5a0: /* 93a5a0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 93a5a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93a5a5: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 93a5ac: call 0x934990 */
  esp -= 4; W32(esp, 0x93a5b1u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93a5b1: /* 93a5b1: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 93a5b8: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 93a5bb: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 93a5c2: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 93a5c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a5c7: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 93a5ce: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 93a5d1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a5d3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93a5d5: fabs  */
  ST0 = fabs(ST0);
/* 93a5d7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93a5db: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 93a5e2: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 93a5e6: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 93a5ea: fmul dword ptr [esp + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xd8u)));
/* 93a5f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a5f3: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 93a5f7: fmul dword ptr [esp + 0xd4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xd4u)));
/* 93a5fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a600: fabs  */
  ST0 = fabs(ST0);
/* 93a602: fmul dword ptr [esp + 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e0u)));
/* 93a609: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 93a610: fabs  */
  ST0 = fabs(ST0);
/* 93a612: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a614: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a616: fmul dword ptr [esp + 0x1e4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e4u)));
/* 93a61d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a61f: fadd dword ptr [esp + 0x1e8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1e8u)));
/* 93a626: fsubr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) - ST0;
/* 93a62a: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 93a62e: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 93a632: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a634: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a637: jne 0x93a698 */
  if (!zf) goto L_93a698;
L_93a639: /* 93a639: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93a63f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 93a643: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 93a647: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 93a64f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a651: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a654: je 0x93a65e */
  if (zf) goto L_93a65e;
L_93a656: /* 93a656: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
L_93a65e: /* 93a65e: fld dword ptr [esp + 0x1e8] */
  { double v = F32((uint32_t)(esp + 0x1e8u)); FPUSH(v); }
/* 93a665: mov byte ptr [esp + 0x1f], 2 */
  W8((uint32_t)(esp + 0x1fu), 0x2u);
/* 93a66a: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 93a66e: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 93a675: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93a679: fcomp dword ptr [esp + 0x1dc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1dcu)));
  FPOP();
/* 93a680: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a682: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a685: jne 0x93a691 */
  if (!zf) goto L_93a691;
L_93a687: /* 93a687: mov byte ptr [esp + 0xf], 1 */
  W8((uint32_t)(esp + 0xfu), 0x1u);
/* 93a68c: jmp 0x93af88 */
  goto L_93af88;
L_93a691: /* 93a691: mov byte ptr [esp + 0xf], 0 */
  W8((uint32_t)(esp + 0xfu), 0x0u);
/* 93a696: jmp 0x93a69a */
  goto L_93a69a;
L_93a698: /* 93a698: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93a69a: /* 93a69a: fld dword ptr [esp + 0x1ec] */
  { double v = F32((uint32_t)(esp + 0x1ecu)); FPUSH(v); }
/* 93a6a1: mov byte ptr [esp + 0x6f], 0 */
  W8((uint32_t)(esp + 0x6fu), 0x0u);
/* 93a6a6: fchs  */
  ST0 = -ST0;
/* 93a6a8: mov byte ptr [esp + 0x5a], 0 */
  W8((uint32_t)(esp + 0x5au), 0x0u);
/* 93a6ad: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93a6b1: mov dword ptr [esp + 0x14], 0x7f7fffff */
  W32((uint32_t)(esp + 0x14u), 0x7f7fffffu);
/* 93a6b9: fld dword ptr [esp + 0x1e4] */
  { double v = F32((uint32_t)(esp + 0x1e4u)); FPUSH(v); }
/* 93a6c0: mov byte ptr [esp + 0x5b], 0 */
  W8((uint32_t)(esp + 0x5bu), 0x0u);
/* 93a6c5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 93a6c7: fstp dword ptr [esp + 0x1a8] */
  WF32((uint32_t)(esp + 0x1a8u), ST0); FPOP();
/* 93a6ce: fld dword ptr [esp + 0x1ec] */
  { double v = F32((uint32_t)(esp + 0x1ecu)); FPUSH(v); }
/* 93a6d5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 93a6d7: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 93a6db: nop  */
/* 93a6dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_93a6e0: /* 93a6e0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93a6e4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93a6e7: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93a6ea: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 93a6ee: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93a6f2: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93a6f6: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a6f9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93a6fd: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93a701: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a703: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93a706: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93a70bu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93a70b: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 93a70f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93a712: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93a715: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 93a719: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93a71d: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 93a721: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93a724: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93a728: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 93a72c: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 93a72f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93a732: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93a737u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93a737: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 93a73b: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 93a73f: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* 93a746: mov dword ptr [0xcf2eb8], edx */
  W32((uint32_t)(0xcf2eb8u), edx);
/* 93a74c: mov dword ptr [0xcf2ebc], eax */
  W32((uint32_t)(0xcf2ebcu), eax);
/* 93a751: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93a753: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_93a757: /* 93a757: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93a75b: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 93a75f: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 93a763: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 93a767: lea ecx, [esp + 0x100] */
  ecx = (uint32_t)(esp + 0x100u);
/* 93a76e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93a76f: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 93a776: fstp dword ptr [esp + 0x10c] */
  WF32((uint32_t)(esp + 0x10cu), ST0); FPOP();
/* 93a77d: mov dword ptr [esp + 0x104], edx */
  W32((uint32_t)(esp + 0x104u), edx);
/* 93a784: mov dword ptr [esp + 0x108], eax */
  W32((uint32_t)(esp + 0x108u), eax);
/* 93a78b: call 0x92e280 */
  esp -= 4; W32(esp, 0x93a790u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93a790: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 93a794: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a796: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93a799: jp 0x93a7ad */
  if (pf) goto L_93a7ad;
L_93a79b: /* 93a79b: mov dl, byte ptr [esp + 0x5b] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5bu))) & 0xffu);
/* 93a79f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 93a7a3: mov byte ptr [esp + 0x5a], bl */
  W8((uint32_t)(esp + 0x5au), (ebx & 0xffu));
/* 93a7a7: mov byte ptr [esp + 0x6f], dl */
  W8((uint32_t)(esp + 0x6fu), (edx & 0xffu));
/* 93a7ab: jmp 0x93a7af */
  goto L_93a7af;
L_93a7ad: /* 93a7ad: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93a7af: /* 93a7af: fld dword ptr [esp + 0x1a8] */
  { double v = F32((uint32_t)(esp + 0x1a8u)); FPUSH(v); }
/* 93a7b6: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93a7b8: cmp bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 93a7bb: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 93a7bf: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93a7c3: jl 0x93a757 */
  if ((sf != of)) goto L_93a757;
L_93a7c5: /* 93a7c5: mov al, byte ptr [esp + 0x5b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5bu))) & 0xffu);
/* 93a7c9: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 93a7cd: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 93a7d1: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93a7d3: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 93a7d5: mov byte ptr [esp + 0x5b], al */
  W8((uint32_t)(esp + 0x5bu), (eax & 0xffu));
/* 93a7d9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93a7dd: jl 0x93a6e0 */
  if ((sf != of)) goto L_93a6e0;
L_93a7e3: /* 93a7e3: movsx eax, byte ptr [esp + 0x5a] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esp + 0x5au)));
/* 93a7e8: mov bl, byte ptr [esp + 0x6f] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x6fu))) & 0xffu);
/* 93a7ec: lea ecx, [eax + eax - 1] */
  ecx = (uint32_t)(eax + eax + 0xffffffffu);
/* 93a7f0: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 93a7f4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 93a7f6: movsx edx, bl */
  edx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 93a7f9: fild dword ptr [esp + 0x68] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 93a7fd: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 93a801: fmul dword ptr [esp + 0x1e4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e4u)));
/* 93a808: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 93a80c: mov dword ptr [0xcf2ec8], ecx */
  W32((uint32_t)(0xcf2ec8u), ecx);
/* 93a812: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 93a815: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 93a819: mov dword ptr [0xcf2ecc], edx */
  W32((uint32_t)(0xcf2eccu), edx);
/* 93a81f: fild dword ptr [esp + 0x68] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 93a823: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 93a826: mov edx, dword ptr [esp + 0x1e0] */
  edx = R32((uint32_t)(esp + 0x1e0u));
/* 93a82d: mov dword ptr [0xcf2ed0], eax */
  W32((uint32_t)(0xcf2ed0u), eax);
/* 93a832: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 93a839: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 93a83c: mov eax, dword ptr [esp + 0x1e8] */
  eax = R32((uint32_t)(esp + 0x1e8u));
/* 93a843: mov dword ptr [0xcf2ed4], ecx */
  W32((uint32_t)(0xcf2ed4u), ecx);
/* 93a849: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93a84d: mov dword ptr [0xcf2ed8], edx */
  W32((uint32_t)(0xcf2ed8u), edx);
/* 93a853: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93a857: mov dword ptr [0xcf2edc], eax */
  W32((uint32_t)(0xcf2edcu), eax);
/* 93a85c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93a85f: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93a862: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 93a866: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93a86a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93a86e: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a871: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93a875: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93a879: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a87b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93a87e: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93a883u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93a883: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 93a887: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93a88a: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93a88d: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 93a891: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93a895: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 93a899: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93a89c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93a8a0: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 93a8a4: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 93a8a7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93a8aa: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93a8afu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93a8af: fld dword ptr [esp + 0x10c] */
  { double v = F32((uint32_t)(esp + 0x10cu)); FPUSH(v); }
/* 93a8b6: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 93a8bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a8be: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a8c1: jne 0x93a8cb */
  if (!zf) goto L_93a8cb;
L_93a8c3: /* 93a8c3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 93a8c9: jmp 0x93a8db */
  goto L_93a8db;
L_93a8cb: /* 93a8cb: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 93a8cf: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 93a8d3: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 93a8d9: fsqrt  */
  ST0 = sqrt(ST0);
L_93a8db: /* 93a8db: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93a8df: fabs  */
  ST0 = fabs(ST0);
/* 93a8e1: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93a8e5: fabs  */
  ST0 = fabs(ST0);
/* 93a8e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a8e9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a8eb: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93a8ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a8ef: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a8f2: je 0x93af86 */
  if (zf) goto L_93af86;
L_93a8f8: /* 93a8f8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93a8fc: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 93a900: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 93a904: fabs  */
  ST0 = fabs(ST0);
/* 93a906: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93a908: fmul dword ptr [esp + 0x1e8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e8u)));
/* 93a90f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93a911: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a913: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a916: je 0x93af86 */
  if (zf) goto L_93af86;
L_93a91c: /* 93a91c: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 93a91f: fchs  */
  ST0 = -ST0;
/* 93a921: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 93a924: fchs  */
  ST0 = -ST0;
/* 93a926: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93a92a: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 93a92d: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93a930: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a932: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93a935: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a937: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a939: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93a93b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a93d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93a93f: fabs  */
  ST0 = fabs(ST0);
/* 93a941: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 93a945: fabs  */
  ST0 = fabs(ST0);
/* 93a947: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a949: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a94b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93a94d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a94f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a952: je 0x93af84 */
  if (zf) goto L_93af84;
L_93a958: /* 93a958: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 93a95c: fabs  */
  ST0 = fabs(ST0);
/* 93a95e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93a960: fmul dword ptr [esp + 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e0u)));
/* 93a967: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 93a969: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93a96b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93a96e: je 0x93af88 */
  if (zf) goto L_93af88;
L_93a974: /* 93a974: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 93a978: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 93a97c: mov dword ptr [0xcf2eb8], ecx */
  W32((uint32_t)(0xcf2eb8u), ecx);
/* 93a982: mov dword ptr [0xcf2ebc], edx */
  W32((uint32_t)(0xcf2ebcu), edx);
/* 93a988: mov eax, ecx */
  eax = ecx;
/* 93a98a: mov ecx, edx */
  ecx = edx;
/* 93a98c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 93a990: mov dword ptr [esp + 0x108], edx */
  W32((uint32_t)(esp + 0x108u), edx);
/* 93a997: fld dword ptr [esp + 0x108] */
  { double v = F32((uint32_t)(esp + 0x108u)); FPUSH(v); }
/* 93a99e: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93a9a1: push 0x939140 */
  { uint32_t v = 0x939140u; esp -= 4; W32(esp, v); }
/* 93a9a6: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93a9aa: push 0x9390b0 */
  { uint32_t v = 0x9390b0u; esp -= 4; W32(esp, v); }
/* 93a9af: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93a9b2: push 0x3a83126f */
  { uint32_t v = 0x3a83126fu; esp -= 4; W32(esp, v); }
/* 93a9b7: mov dword ptr [esp + 0x10c], eax */
  W32((uint32_t)(esp + 0x10cu), eax);
/* 93a9be: push 0x3a83126f */
  { uint32_t v = 0x3a83126fu; esp -= 4; W32(esp, v); }
/* 93a9c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a9c5: lea eax, [esp + 0x12c] */
  eax = (uint32_t)(esp + 0x12cu);
/* 93a9cc: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93a9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93a9d1: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93a9d3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 93a9d5: mov dword ptr [esp + 0x11c], ecx */
  W32((uint32_t)(esp + 0x11cu), ecx);
/* 93a9dc: mov dword ptr [esp + 0x138], 0 */
  W32((uint32_t)(esp + 0x138u), 0x0u);
/* 93a9e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93a9e9: mov dword ptr [esp + 0x134], 0 */
  W32((uint32_t)(esp + 0x134u), 0x0u);
/* 93a9f4: fstp dword ptr [0xcf2ec0] */
  WF32((uint32_t)(0xcf2ec0u), ST0); FPOP();
/* 93a9fa: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93a9fe: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93aa01: fld dword ptr [esp + 0x120] */
  { double v = F32((uint32_t)(esp + 0x120u)); FPUSH(v); }
/* 93aa08: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93aa0b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93aa0d: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93aa11: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93aa14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93aa16: fstp dword ptr [0xcf2ec4] */
  WF32((uint32_t)(0xcf2ec4u), ST0); FPOP();
/* 93aa1c: call 0x99c3c0 */
  esp -= 4; W32(esp, 0x93aa21u); SPILL(); f_99c3c0(); if (g_unwind) return; RELOAD();
/* 93aa21: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93aa24: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93aa26: lea ecx, [esp + 0x100] */
  ecx = (uint32_t)(esp + 0x100u);
/* 93aa2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93aa2e: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 93aa35: call 0x92e280 */
  esp -= 4; W32(esp, 0x93aa3au); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93aa3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93aa3c: fld dword ptr [esp + 0x11c] */
  { double v = F32((uint32_t)(esp + 0x11cu)); FPUSH(v); }
/* 93aa43: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93aa46: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 93aa48: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 93aa4c: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 93aa53: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 93aa57: fld dword ptr [esp + 0x128] */
  { double v = F32((uint32_t)(esp + 0x128u)); FPUSH(v); }
/* 93aa5e: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 93aa60: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 93aa67: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 93aa6b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93aa6f: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93aa72: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93aa76: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93aa7a: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93aa7d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93aa81: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 93aa85: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93aa87: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93aa8a: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93aa8fu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93aa8f: fld dword ptr [esp + 0x120] */
  { double v = F32((uint32_t)(esp + 0x120u)); FPUSH(v); }
/* 93aa96: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93aa99: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 93aa9b: fmul dword ptr [esp + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1f4u)));
/* 93aaa2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93aaa4: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 93aaa7: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93aaab: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93aaad: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 93aab1: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 93aab4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93aab8: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 93aabb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93aabe: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93aac3u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93aac3: fld dword ptr [esp + 0x120] */
  { double v = F32((uint32_t)(esp + 0x120u)); FPUSH(v); }
/* 93aaca: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93aacd: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 93aacf: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 93aad3: fmul dword ptr [esp + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1f4u)));
/* 93aada: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93aadc: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 93aadf: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93aae3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93aae5: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 93aae8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93aaec: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 93aaee: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93aaf1: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93aaf6u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93aaf6: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 93aafa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93aafd: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 93ab00: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 93ab04: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93ab08: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 93ab0c: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 93ab0f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93ab13: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 93ab17: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 93ab1a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93ab1d: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93ab22u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93ab22: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93ab26: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ab29: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 93ab2d: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 93ab31: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93ab35: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 93ab39: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 93ab3d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93ab41: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93ab45: fadd dword ptr [esp + 0x68] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x68u)));
/* 93ab49: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93ab4c: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93ab51u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93ab51: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 93ab55: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ab58: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 93ab5c: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 93ab60: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93ab64: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 93ab6b: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 93ab6f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93ab73: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 93ab77: fadd dword ptr [esp + 0x68] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x68u)));
/* 93ab7b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93ab7e: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93ab83u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93ab83: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93ab87: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ab8a: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 93ab8e: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 93ab92: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93ab96: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 93ab9a: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 93ab9e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93aba2: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93aba6: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 93abaa: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93abad: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93abb2u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93abb2: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 93abb6: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 93abba: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 93abbe: mov dword ptr [esp + 0x90], edx */
  W32((uint32_t)(esp + 0x90u), edx);
/* 93abc5: lea edx, [esp + 0x90] */
  edx = (uint32_t)(esp + 0x90u);
/* 93abcc: mov dword ptr [esp + 0x98], ecx */
  W32((uint32_t)(esp + 0x98u), ecx);
/* 93abd3: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 93abda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93abdb: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 93abe2: call 0x92e280 */
  esp -= 4; W32(esp, 0x93abe7u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93abe7: fsqrt  */
  ST0 = sqrt(ST0);
/* 93abe9: fst dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0);
/* 93abed: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93abf3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93abf5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93abf8: jnp 0x93ac0b */
  if (!pf) goto L_93ac0b;
L_93abfa: /* 93abfa: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 93abfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93abff: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 93ac06: call 0x934990 */
  esp -= 4; W32(esp, 0x93ac0bu); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93ac0b: /* 93ac0b: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 93ac0f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ac12: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 93ac16: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 93ac1a: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93ac1e: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 93ac22: fadd dword ptr [esp + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x5cu)));
/* 93ac26: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93ac2a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 93ac2e: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 93ac32: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93ac35: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93ac3au); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93ac3a: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 93ac3e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 93ac41: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 93ac47: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 93ac4b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 93ac4f: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 93ac56: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 93ac5c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 93ac60: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 93ac64: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 93ac6a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 93ac6d: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93ac72u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93ac72: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 93ac76: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 93ac7d: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 93ac81: fchs  */
  ST0 = -ST0;
/* 93ac83: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 93ac87: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 93ac8b: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 93ac8f: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 93ac96: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 93ac9a: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 93ac9e: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 93aca2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93aca3: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93aca7: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 93acab: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 93acb3: call 0x934970 */
  esp -= 4; W32(esp, 0x93acb8u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93acb8: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 93acbc: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 93acc0: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 93acc4: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 93accb: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 93acd2: mov dword ptr [esp + 0x14c], ecx */
  W32((uint32_t)(esp + 0x14cu), ecx);
/* 93acd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93acda: lea ecx, [esp + 0x14c] */
  ecx = (uint32_t)(esp + 0x14cu);
/* 93ace1: mov dword ptr [esp + 0x154], edx */
  W32((uint32_t)(esp + 0x154u), edx);
/* 93ace8: call 0x92e280 */
  esp -= 4; W32(esp, 0x93acedu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93aced: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93acf3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93acf5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93acf8: jp 0x93ad0a */
  if (pf) goto L_93ad0a;
L_93acfa: /* 93acfa: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* 93ad01: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 93ad05: jmp 0x93adb8 */
  goto L_93adb8;
L_93ad0a: /* 93ad0a: lea edx, [esp + 0x148] */
  edx = (uint32_t)(esp + 0x148u);
/* 93ad11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ad12: lea ecx, [esp + 0x14c] */
  ecx = (uint32_t)(esp + 0x14cu);
/* 93ad19: call 0x92e280 */
  esp -= 4; W32(esp, 0x93ad1eu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93ad1e: fsqrt  */
  ST0 = sqrt(ST0);
/* 93ad20: fst dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0);
/* 93ad24: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93ad2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ad2c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ad2f: jnp 0x93ad42 */
  if (!pf) goto L_93ad42;
L_93ad31: /* 93ad31: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 93ad35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ad36: lea ecx, [esp + 0x14c] */
  ecx = (uint32_t)(esp + 0x14cu);
/* 93ad3d: call 0x934990 */
  esp -= 4; W32(esp, 0x93ad42u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93ad42: /* 93ad42: mov ecx, dword ptr [esp + 0x14c] */
  ecx = R32((uint32_t)(esp + 0x14cu));
/* 93ad49: fld dword ptr [esp + 0x148] */
  { double v = F32((uint32_t)(esp + 0x148u)); FPUSH(v); }
/* 93ad50: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 93ad54: fchs  */
  ST0 = -ST0;
/* 93ad56: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 93ad5a: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 93ad5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ad5f: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 93ad63: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 93ad6b: call 0x934970 */
  esp -= 4; W32(esp, 0x93ad70u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93ad70: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 93ad74: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* 93ad7b: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 93ad7f: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 93ad86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ad88: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 93ad8c: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 93ad93: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ad95: fabs  */
  ST0 = fabs(ST0);
/* 93ad97: fmul dword ptr [esp + 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e0u)));
/* 93ad9e: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 93ada5: fabs  */
  ST0 = fabs(ST0);
/* 93ada7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93ada9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93adab: fmul dword ptr [esp + 0x1e4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e4u)));
/* 93adb2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93adb4: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_93adb8: /* 93adb8: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 93adbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93adbd: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 93adc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93adc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93adc6: call 0x9349f0 */
  esp -= 4; W32(esp, 0x93adcbu); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 93adcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93adce: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 93add2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93add3: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 93add7: call 0x934970 */
  esp -= 4; W32(esp, 0x93addcu); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93addc: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 93ade0: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 93ade4: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 93ade8: mov dword ptr [esp + 0x178], eax */
  W32((uint32_t)(esp + 0x178u), eax);
/* 93adef: lea eax, [esp + 0x178] */
  eax = (uint32_t)(esp + 0x178u);
/* 93adf6: mov dword ptr [esp + 0x17c], ecx */
  W32((uint32_t)(esp + 0x17cu), ecx);
/* 93adfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93adfe: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* 93ae05: mov dword ptr [esp + 0x184], edx */
  W32((uint32_t)(esp + 0x184u), edx);
/* 93ae0c: call 0x92e280 */
  esp -= 4; W32(esp, 0x93ae11u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93ae11: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93ae17: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ae19: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ae1c: jp 0x93ae2a */
  if (pf) goto L_93ae2a;
L_93ae1e: /* 93ae1e: fld dword ptr [esp + 0x1ec] */
  { double v = F32((uint32_t)(esp + 0x1ecu)); FPUSH(v); }
/* 93ae25: jmp 0x93aee4 */
  goto L_93aee4;
L_93ae2a: /* 93ae2a: lea ecx, [esp + 0x178] */
  ecx = (uint32_t)(esp + 0x178u);
/* 93ae31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ae32: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* 93ae39: call 0x92e280 */
  esp -= 4; W32(esp, 0x93ae3eu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93ae3e: fsqrt  */
  ST0 = sqrt(ST0);
/* 93ae40: fst dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0);
/* 93ae44: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93ae4a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93ae4c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93ae4f: jnp 0x93ae62 */
  if (!pf) goto L_93ae62;
L_93ae51: /* 93ae51: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 93ae55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ae56: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* 93ae5d: call 0x934990 */
  esp -= 4; W32(esp, 0x93ae62u); SPILL(); f_934990(); if (g_unwind) return; RELOAD();
L_93ae62: /* 93ae62: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 93ae66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93ae67: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* 93ae6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93ae6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93ae70: call 0x9349f0 */
  esp -= 4; W32(esp, 0x93ae75u); SPILL(); f_9349f0(); if (g_unwind) return; RELOAD();
/* 93ae75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93ae78: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 93ae7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93ae7d: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 93ae81: call 0x934970 */
  esp -= 4; W32(esp, 0x93ae86u); SPILL(); f_934970(); if (g_unwind) return; RELOAD();
/* 93ae86: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 93ae8d: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 93ae90: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 93ae97: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 93ae9a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93ae9c: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 93aea3: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 93aea5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93aea7: fabs  */
  ST0 = fabs(ST0);
/* 93aea9: fmul dword ptr [esp + 0x1ec] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1ecu)));
/* 93aeb0: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 93aeb4: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 93aebb: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 93aebf: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* 93aec6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93aec8: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 93aecc: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 93aed3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93aed5: fabs  */
  ST0 = fabs(ST0);
/* 93aed7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93aed9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 93aedb: fmul dword ptr [esp + 0x1e8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1e8u)));
/* 93aee2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_93aee4: /* 93aee4: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 93aeeb: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 93aeee: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 93aef5: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 93aef8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93aefa: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 93af01: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 93af04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 93af06: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 93af08: fabs  */
  ST0 = fabs(ST0);
/* 93af0a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 93af0e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 93af10: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 93af14: fsubr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) - ST0;
/* 93af18: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 93af1c: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 93af20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93af22: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93af25: jne 0x93af84 */
  if (!zf) goto L_93af84;
L_93af27: /* 93af27: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 93af2d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 93af31: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 93af35: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 93af3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93af3f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93af42: je 0x93af4c */
  if (zf) goto L_93af4c;
L_93af44: /* 93af44: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
L_93af4c: /* 93af4c: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 93af50: mov al, byte ptr [esp + 0x5a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5au))) & 0xffu);
/* 93af54: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93af57: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93af59: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 93af60: mov byte ptr [esp + 0x1f], bl */
  W8((uint32_t)(esp + 0x1fu), (ebx & 0xffu));
/* 93af64: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 93af68: fcomp dword ptr [esp + 0x1dc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1dcu)));
  FPOP();
/* 93af6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93af71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93af74: jne 0x93af7d */
  if (!zf) goto L_93af7d;
L_93af76: /* 93af76: mov byte ptr [esp + 0xf], 1 */
  W8((uint32_t)(esp + 0xfu), 0x1u);
/* 93af7b: jmp 0x93af88 */
  goto L_93af88;
L_93af7d: /* 93af7d: mov byte ptr [esp + 0xf], 0 */
  W8((uint32_t)(esp + 0xfu), 0x0u);
/* 93af82: jmp 0x93af88 */
  goto L_93af88;
L_93af84: /* 93af84: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93af86: /* 93af86: fstp st(0) */
  STI(0) = ST0; FPOP();
L_93af88: /* 93af88: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 93af8c: mov ecx, dword ptr [esp + 0x1c8] */
  ecx = R32((uint32_t)(esp + 0x1c8u));
/* 93af93: mov al, byte ptr [esp + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* 93af97: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 93af99: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93af9b: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 93afa2: mov edx, dword ptr [esp + 0x1d0] */
  edx = R32((uint32_t)(esp + 0x1d0u));
/* 93afa9: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 93afab: je 0x93afb9 */
  if (zf) goto L_93afb9;
L_93afad: /* 93afad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93afae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93afaf: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 93afb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93afb2: add esp, 0x1b8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93afb8: ret  */
  esp += 4; SPILL(); return;
L_93afb9: /* 93afb9: mov cl, byte ptr [esp + 0x1f] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1fu))) & 0xffu);
/* 93afbd: cmp cl, 0xc */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 93afc0: jne 0x93b166 */
  if (!zf) goto L_93b166;
L_93afc6: /* 93afc6: mov eax, dword ptr [esp + 0x1cc] */
  eax = R32((uint32_t)(esp + 0x1ccu));
/* 93afcd: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 93afd1: mov edx, dword ptr [esp + 0x1d8] */
  edx = R32((uint32_t)(esp + 0x1d8u));
/* 93afd8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 93afdb: mov ecx, dword ptr [esp + 0xec] */
  ecx = R32((uint32_t)(esp + 0xecu));
/* 93afe2: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 93afe8: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 93afef: mov eax, dword ptr [esp + 0xe8] */
  eax = R32((uint32_t)(esp + 0xe8u));
/* 93aff6: mov dword ptr [esp + 0x13c], eax */
  W32((uint32_t)(esp + 0x13cu), eax);
/* 93affd: mov eax, dword ptr [esp + 0x130] */
  eax = R32((uint32_t)(esp + 0x130u));
/* 93b004: mov word ptr [edx], 2 */
  W16((uint32_t)(edx), 0x2u);
/* 93b009: mov edx, dword ptr [esp + 0xf0] */
  edx = R32((uint32_t)(esp + 0xf0u));
/* 93b010: mov dword ptr [esp + 0x140], ecx */
  W32((uint32_t)(esp + 0x140u), ecx);
/* 93b017: mov ecx, dword ptr [esp + 0x134] */
  ecx = R32((uint32_t)(esp + 0x134u));
/* 93b01e: mov dword ptr [esp + 0x124], eax */
  W32((uint32_t)(esp + 0x124u), eax);
/* 93b025: mov dword ptr [esp + 0x144], edx */
  W32((uint32_t)(esp + 0x144u), edx);
/* 93b02c: mov edx, dword ptr [esp + 0x138] */
  edx = R32((uint32_t)(esp + 0x138u));
/* 93b033: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b034: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 93b03b: mov dword ptr [esp + 0x12c], ecx */
  W32((uint32_t)(esp + 0x12cu), ecx);
/* 93b042: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b043: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 93b047: mov dword ptr [esp + 0x134], edx */
  W32((uint32_t)(esp + 0x134u), edx);
/* 93b04e: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 93b056: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 93b05e: mov dword ptr [esp + 0x4c], 0x3f800000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f800000u);
/* 93b066: call 0x93b630 */
  esp -= 4; W32(esp, 0x93b06bu); SPILL(); f_93b630(); if (g_unwind) return; RELOAD();
/* 93b06b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b06c: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 93b073: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b078u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b078: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 93b07f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b080: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 93b087: call 0x92e280 */
  esp -= 4; W32(esp, 0x93b08cu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93b08c: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93b092: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b094: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93b097: jp 0x93b12d */
  if (pf) goto L_93b12d;
L_93b09d: /* 93b09d: lea edx, [esi + 0x30] */
  edx = (uint32_t)(esi + 0x30u);
/* 93b0a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b0a1: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 93b0a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b0a9: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 93b0ad: call 0x93b630 */
  esp -= 4; W32(esp, 0x93b0b2u); SPILL(); f_93b630(); if (g_unwind) return; RELOAD();
/* 93b0b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b0b3: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 93b0ba: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b0bfu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b0bf: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 93b0c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b0c7: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 93b0ce: call 0x92e280 */
  esp -= 4; W32(esp, 0x93b0d3u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 93b0d3: fcomp dword ptr [0xa214fc] */
  fpu_com(ST0, F32((uint32_t)(0xa214fcu)));
  FPOP();
/* 93b0d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b0db: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93b0de: jp 0x93b12d */
  if (pf) goto L_93b12d;
L_93b0e0: /* 93b0e0: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 93b0e4: xor ecx, ecx */
  ecx = 0;
/* 93b0e6: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 93b0ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b0ec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93b0ef: jp 0x93b0f6 */
  if (pf) goto L_93b0f6;
L_93b0f1: /* 93b0f1: mov ecx, 1 */
  ecx = 0x1u;
L_93b0f6: /* 93b0f6: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 93b0fa: fcomp dword ptr [esp + ecx*4 + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + ecx*4 + 0x3cu)));
  FPOP();
/* 93b0fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 93b100: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 93b103: jp 0x93b10a */
  if (pf) goto L_93b10a;
L_93b105: /* 93b105: mov ecx, 2 */
  ecx = 0x2u;
L_93b10a: /* 93b10a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b10b: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 93b10f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b110: lea eax, [esp + 0x8c] */
  eax = (uint32_t)(esp + 0x8cu);
/* 93b117: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b118: call 0x93b670 */
  esp -= 4; W32(esp, 0x93b11du); SPILL(); f_93b670(); if (g_unwind) return; RELOAD();
/* 93b11d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b121: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 93b128: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b12du); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_93b12d: /* 93b12d: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 93b134: call 0x93b5f0 */
  esp -= 4; W32(esp, 0x93b139u); SPILL(); f_93b5f0(); if (g_unwind) return; RELOAD();
/* 93b139: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 93b13b: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 93b13f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b140: lea edx, [esp + 0x88] */
  edx = (uint32_t)(esp + 0x88u);
/* 93b147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b148: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93b14f: call 0x93b630 */
  esp -= 4; W32(esp, 0x93b154u); SPILL(); f_93b630(); if (g_unwind) return; RELOAD();
/* 93b154: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b155: lea ecx, [esp + 0x194] */
  ecx = (uint32_t)(esp + 0x194u);
/* 93b15c: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b161u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b161: jmp 0x93b522 */
  goto L_93b522;
L_93b166: /* 93b166: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 93b169: jne 0x93b1fe */
  if (!zf) goto L_93b1fe;
L_93b16f: /* 93b16f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93b173: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b174: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b175: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 93b17c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b17d: call 0x934a30 */
  esp -= 4; W32(esp, 0x93b182u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93b182: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* 93b189: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b18c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b18d: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b192u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b192: mov edx, dword ptr [esp + 0x1d8] */
  edx = R32((uint32_t)(esp + 0x1d8u));
/* 93b199: lea eax, [esp + 0xf4] */
  eax = (uint32_t)(esp + 0xf4u);
/* 93b1a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b1a1: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 93b1a8: mov word ptr [edx], 0x200 */
  W16((uint32_t)(edx), 0x200u);
/* 93b1ad: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b1b2u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b1b2: lea ecx, [esp + 0x16c] */
  ecx = (uint32_t)(esp + 0x16cu);
/* 93b1b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b1ba: lea ecx, [esp + 0x194] */
  ecx = (uint32_t)(esp + 0x194u);
/* 93b1c1: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b1c6u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b1c6: lea edx, [esi + 0x30] */
  edx = (uint32_t)(esi + 0x30u);
/* 93b1c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b1ca: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93b1cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93b1d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93b1d3: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 93b1da: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93b1dfu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93b1df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b1e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b1e1: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 93b1e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b1e9: lea ecx, [esp + 0x134] */
  ecx = (uint32_t)(esp + 0x134u);
/* 93b1f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b1f1: call 0x93b730 */
  esp -= 4; W32(esp, 0x93b1f6u); SPILL(); f_93b730(); if (g_unwind) return; RELOAD();
/* 93b1f6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b1f9: jmp 0x93b522 */
  goto L_93b522;
L_93b1fe: /* 93b1fe: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 93b200: sar cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((int32_t)(int8_t)a >> c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93b203: and al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93b205: and cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 93b208: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 93b20a: jne 0x93b3de */
  if (!zf) goto L_93b3de;
L_93b210: /* 93b210: cmp cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 93b212: jne 0x93b2b6 */
  if (!zf) goto L_93b2b6;
L_93b218: /* 93b218: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93b21c: lea edx, [esp + 0xc4] */
  edx = (uint32_t)(esp + 0xc4u);
/* 93b223: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b225: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 93b22c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b22d: call 0x934a30 */
  esp -= 4; W32(esp, 0x93b232u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93b232: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* 93b239: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b23c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b23d: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b242u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b242: mov edx, dword ptr [esp + 0x1d8] */
  edx = R32((uint32_t)(esp + 0x1d8u));
/* 93b249: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* 93b24c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93b24d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b24e: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93b253: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93b255: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93b257: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 93b25e: mov word ptr [edx], 0x303 */
  W16((uint32_t)(edx), 0x303u);
/* 93b263: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93b268u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93b268: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b269: lea eax, [esp + 0xe8] */
  eax = (uint32_t)(esp + 0xe8u);
/* 93b270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b271: lea ecx, [esp + 0x1a0] */
  ecx = (uint32_t)(esp + 0x1a0u);
/* 93b278: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b279: call 0x93b730 */
  esp -= 4; W32(esp, 0x93b27eu); SPILL(); f_93b730(); if (g_unwind) return; RELOAD();
/* 93b27e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b281: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 93b282: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93b287: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93b289: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93b28b: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 93b292: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93b297u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93b297: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b298: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b299: lea edx, [esp + 0x148] */
  edx = (uint32_t)(esp + 0x148u);
/* 93b2a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b2a1: lea eax, [esp + 0x134] */
  eax = (uint32_t)(esp + 0x134u);
/* 93b2a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b2a9: call 0x93b730 */
  esp -= 4; W32(esp, 0x93b2aeu); SPILL(); f_93b730(); if (g_unwind) return; RELOAD();
/* 93b2ae: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b2b1: jmp 0x93b522 */
  goto L_93b522;
L_93b2b6: /* 93b2b6: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93b2b8: jne 0x93b340 */
  if (!zf) goto L_93b340;
L_93b2be: /* 93b2be: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 93b2c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b2c3: lea ecx, [esp + 0x194] */
  ecx = (uint32_t)(esp + 0x194u);
/* 93b2ca: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b2cfu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b2cf: lea edx, [esp + 0x19c] */
  edx = (uint32_t)(esp + 0x19cu);
/* 93b2d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b2d7: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 93b2de: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b2e3u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b2e3: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 93b2e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b2e7: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 93b2ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b2ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 93b2f0: lea edx, [esp + 0x148] */
  edx = (uint32_t)(esp + 0x148u);
/* 93b2f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b2f8: lea eax, [esp + 0x134] */
  eax = (uint32_t)(esp + 0x134u);
/* 93b2ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b300: call 0x93b730 */
  esp -= 4; W32(esp, 0x93b305u); SPILL(); f_93b730(); if (g_unwind) return; RELOAD();
/* 93b305: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 93b309: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 93b310: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b311: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b312: lea eax, [esp + 0xa0] */
  eax = (uint32_t)(esp + 0xa0u);
/* 93b319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b31a: call 0x934a30 */
  esp -= 4; W32(esp, 0x93b31fu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93b31f: mov ecx, dword ptr [esp + 0x1ec] */
  ecx = R32((uint32_t)(esp + 0x1ecu));
/* 93b326: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b32a: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b32fu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b32f: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* 93b336: mov word ptr [ecx], 0x301 */
  W16((uint32_t)(ecx), 0x301u);
/* 93b33b: jmp 0x93b522 */
  goto L_93b522;
L_93b340: /* 93b340: lea edx, [esp + 0x9c] */
  edx = (uint32_t)(esp + 0x9cu);
/* 93b347: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b348: lea ecx, [esp + 0x194] */
  ecx = (uint32_t)(esp + 0x194u);
/* 93b34f: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b354u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b354: lea eax, [esp + 0x9c] */
  eax = (uint32_t)(esp + 0x9cu);
/* 93b35b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b35c: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 93b363: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 93b365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b366: call 0x93b6d0 */
  esp -= 4; W32(esp, 0x93b36bu); SPILL(); f_93b6d0(); if (g_unwind) return; RELOAD();
/* 93b36b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b36e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b36f: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 93b376: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b37bu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b37b: lea edx, [esp + 0x1b8] */
  edx = (uint32_t)(esp + 0x1b8u);
/* 93b382: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b383: lea ecx, [esp + 0x128] */
  ecx = (uint32_t)(esp + 0x128u);
/* 93b38a: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b38fu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b38f: lea eax, [esp + 0x160] */
  eax = (uint32_t)(esp + 0x160u);
/* 93b396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b397: lea ecx, [esp + 0x140] */
  ecx = (uint32_t)(esp + 0x140u);
/* 93b39e: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b3a3u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b3a3: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 93b3a7: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 93b3ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b3af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b3b0: lea eax, [esp + 0x8c] */
  eax = (uint32_t)(esp + 0x8cu);
/* 93b3b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b3b8: call 0x934a30 */
  esp -= 4; W32(esp, 0x93b3bdu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93b3bd: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* 93b3c4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b3c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b3c8: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b3cdu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b3cd: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* 93b3d4: mov word ptr [ecx], 0x303 */
  W16((uint32_t)(ecx), 0x303u);
/* 93b3d9: jmp 0x93b522 */
  goto L_93b522;
L_93b3de: /* 93b3de: cmp cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 93b3e1: jne 0x93b58b */
  if (!zf) goto L_93b58b;
L_93b3e7: /* 93b3e7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 93b3e9: jne 0x93b48c */
  if (!zf) goto L_93b48c;
L_93b3ef: /* 93b3ef: lea edx, [esi + 0x30] */
  edx = (uint32_t)(esi + 0x30u);
/* 93b3f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b3f3: lea eax, [esp + 0xb8] */
  eax = (uint32_t)(esp + 0xb8u);
/* 93b3fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b3fb: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 93b400: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93b402: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 93b404: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 93b40b: call 0x92ec40 */
  esp -= 4; W32(esp, 0x93b410u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 93b410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b411: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 93b418: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b419: lea edx, [esp + 0x1a0] */
  edx = (uint32_t)(esp + 0x1a0u);
/* 93b420: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b421: call 0x93b730 */
  esp -= 4; W32(esp, 0x93b426u); SPILL(); f_93b730(); if (g_unwind) return; RELOAD();
/* 93b426: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b429: lea eax, [esp + 0x184] */
  eax = (uint32_t)(esp + 0x184u);
/* 93b430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b431: lea ecx, [esp + 0x128] */
  ecx = (uint32_t)(esp + 0x128u);
/* 93b438: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b43du); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b43d: lea ecx, [esp + 0x1ac] */
  ecx = (uint32_t)(esp + 0x1acu);
/* 93b444: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b445: lea ecx, [esp + 0x140] */
  ecx = (uint32_t)(esp + 0x140u);
/* 93b44c: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b451u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b451: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93b455: lea edx, [esp + 0xb4] */
  edx = (uint32_t)(esp + 0xb4u);
/* 93b45c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b45d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b45e: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 93b465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b466: call 0x934a30 */
  esp -= 4; W32(esp, 0x93b46bu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93b46b: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* 93b472: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b475: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b476: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b47bu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b47b: mov edx, dword ptr [esp + 0x1d8] */
  edx = R32((uint32_t)(esp + 0x1d8u));
/* 93b482: mov word ptr [edx], 0x103 */
  W16((uint32_t)(edx), 0x103u);
/* 93b487: jmp 0x93b522 */
  goto L_93b522;
L_93b48c: /* 93b48c: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 93b493: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b494: lea ecx, [esp + 0x194] */
  ecx = (uint32_t)(esp + 0x194u);
/* 93b49b: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b4a0u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b4a0: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 93b4a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b4a8: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 93b4af: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b4b4u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b4b4: lea edx, [esp + 0xa8] */
  edx = (uint32_t)(esp + 0xa8u);
/* 93b4bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b4bc: lea ecx, [esp + 0x128] */
  ecx = (uint32_t)(esp + 0x128u);
/* 93b4c3: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b4c8u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b4c8: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 93b4cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b4d0: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 93b4d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b4d8: mov ecx, edi */
  ecx = edi;
/* 93b4da: call 0x93b630 */
  esp -= 4; W32(esp, 0x93b4dfu); SPILL(); f_93b630(); if (g_unwind) return; RELOAD();
/* 93b4df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b4e0: lea ecx, [esp + 0x140] */
  ecx = (uint32_t)(esp + 0x140u);
/* 93b4e7: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b4ecu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b4ec: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 93b4f0: lea edx, [esp + 0xa8] */
  edx = (uint32_t)(esp + 0xa8u);
/* 93b4f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b4f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b4f9: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 93b500: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b501: call 0x934a30 */
  esp -= 4; W32(esp, 0x93b506u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93b506: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* 93b50d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b511: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b516u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b516: mov edx, dword ptr [esp + 0x1d8] */
  edx = R32((uint32_t)(esp + 0x1d8u));
/* 93b51d: mov word ptr [edx], 0x303 */
  W16((uint32_t)(edx), 0x303u);
L_93b522: /* 93b522: mov eax, dword ptr [esp + 0x1f4] */
  eax = R32((uint32_t)(esp + 0x1f4u));
/* 93b529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b52a: mov eax, dword ptr [esp + 0x1f0] */
  eax = R32((uint32_t)(esp + 0x1f0u));
/* 93b531: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 93b533: lea ecx, [esp + 0x144] */
  ecx = (uint32_t)(esp + 0x144u);
/* 93b53a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b53b: mov ecx, dword ptr [esp + 0x1f4] */
  ecx = R32((uint32_t)(esp + 0x1f4u));
/* 93b542: lea edx, [esp + 0x130] */
  edx = (uint32_t)(esp + 0x130u);
/* 93b549: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b54a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b54b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b54c: mov ecx, dword ptr [esp + 0x1fc] */
  ecx = R32((uint32_t)(esp + 0x1fcu));
/* 93b553: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 93b555: lea edx, [esp + 0xf8] */
  edx = (uint32_t)(esp + 0xf8u);
/* 93b55c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b55d: mov edx, dword ptr [esp + 0x200] */
  edx = R32((uint32_t)(esp + 0x200u));
/* 93b564: lea eax, [esp + 0x1b0] */
  eax = (uint32_t)(esp + 0x1b0u);
/* 93b56b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b56c: mov eax, dword ptr [esp + 0x1f8] */
  eax = R32((uint32_t)(esp + 0x1f8u));
/* 93b573: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b574: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 93b576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b577: call 0x937da0 */
  esp -= 4; W32(esp, 0x93b57cu); SPILL(); f_937da0(); if (g_unwind) return; RELOAD();
/* 93b57c: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b57f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93b580: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93b581: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 93b583: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93b584: add esp, 0x1b8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b58a: ret  */
  esp += 4; SPILL(); return;
L_93b58b: /* 93b58b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 93b58f: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 93b596: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 93b597: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 93b598: lea eax, [esp + 0x8c] */
  eax = (uint32_t)(esp + 0x8cu);
/* 93b59f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b5a0: call 0x934a30 */
  esp -= 4; W32(esp, 0x93b5a5u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 93b5a5: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* 93b5ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b5af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b5b0: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b5b5u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b5b5: mov eax, dword ptr [esp + 0x1d4] */
  eax = R32((uint32_t)(esp + 0x1d4u));
/* 93b5bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 93b5be: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 93b5c1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 93b5c3: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 93b5c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 93b5c8: call 0x933e40 */
  esp -= 4; W32(esp, 0x93b5cdu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 93b5cd: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* 93b5d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 93b5d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 93b5d6: mov word ptr [ecx], 0 */
  W16((uint32_t)(ecx), 0x0u);
/* 93b5db: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 93b5dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 93b5de: add esp, 0x1b8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 93b5e4: ret  */
  esp += 4; SPILL(); return;
}
