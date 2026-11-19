#include "recomp.h"
#include "rec_mod.h"

void f_8eece0(void) {
  LOAD_REGS();
L_8eece0: /* 8eece0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8eece3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eece4: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 8eece8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eece9: mov edi, ecx */
  edi = ecx;
/* 8eeceb: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 8eecee: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8eecf1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8eecf4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8eecf7: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8eecfa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eecfc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8eecfe: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8eed00: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eed02: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8eed06: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 8eed09: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8eed0c: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 8eed0f: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8eed12: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eed14: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8eed16: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 8eed19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eed1b: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 8eed1e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8eed21: fld dword ptr [edi + 0x2c] */
  { double v = F32((uint32_t)(edi + 0x2cu)); FPUSH(v); }
/* 8eed24: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8eed27: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eed29: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 8eed2c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8eed2e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eed30: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8eed34: fcom dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
/* 8eed38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eed3a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8eed3d: jp 0x8eed43 */
  if (pf) goto L_8eed43;
L_8eed3f: /* 8eed3f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8eed41: jmp 0x8eed47 */
  goto L_8eed47;
L_8eed43: /* 8eed43: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
L_8eed47: /* 8eed47: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8eed4b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8eed4d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eed4f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8eed52: jp 0x8eed5a */
  if (pf) goto L_8eed5a;
L_8eed54: /* 8eed54: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eed56: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_8eed5a: /* 8eed5a: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 8eed5e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8eed62: fcom dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
/* 8eed66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eed68: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eed6b: je 0x8eed73 */
  if (zf) goto L_8eed73;
L_8eed6d: /* 8eed6d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eed6f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
L_8eed73: /* 8eed73: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8eed77: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8eed79: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eed7b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eed7e: jne 0x8eed86 */
  if (!zf) goto L_8eed86;
L_8eed80: /* 8eed80: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eed82: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_8eed86: /* 8eed86: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 8eed8a: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8eed8e: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8eed92: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 8eed96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eed98: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eed9b: jne 0x8eeeef */
  if (!zf) goto L_8eeeef;
L_8eeda1: /* 8eeda1: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8eeda5: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 8eeda9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eedab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8eedae: jp 0x8eeeef */
  if (pf) goto L_8eeeef;
L_8eedb4: /* 8eedb4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eedb5: mov ecx, esi */
  ecx = esi;
/* 8eedb7: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8eedbdu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8eedbd: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8eedc1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8eedc5: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8eedcb: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 8eedcf: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8eedd3: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8eedd7: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 8eeddb: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8eeddf: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8eede3: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 8eede6: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 8eedea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eedec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eedef: jne 0x8eee6b */
  if (!zf) goto L_8eee6b;
L_8eedf1: /* 8eedf1: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8eedf5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eedfb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eedfd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eee00: je 0x8eee16 */
  if (zf) goto L_8eee16;
L_8eee02: /* 8eee02: push 0xe5 */
  { uint32_t v = 0xe5u; esp -= 4; W32(esp, v); }
/* 8eee07: push 0xaee3dc */
  { uint32_t v = 0xaee3dcu; esp -= 4; W32(esp, v); }
/* 8eee0c: push 0xaee3c0 */
  { uint32_t v = 0xaee3c0u; esp -= 4; W32(esp, v); }
/* 8eee11: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8eee13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eee13: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8eee16: /* 8eee16: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8eee1c: mov eax, edi */
  eax = edi;
/* 8eee1e: fdiv dword ptr [esp + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x38u)));
/* 8eee22: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8eee26: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8eee28: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8eee2b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8eee2d: fchs  */
  ST0 = -ST0;
/* 8eee2f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8eee32: fchs  */
  ST0 = -ST0;
/* 8eee34: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8eee37: fchs  */
  ST0 = -ST0;
/* 8eee39: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8eee3d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eee3f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8eee41: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8eee45: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8eee49: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8eee4b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8eee4d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8eee51: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8eee55: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8eee59: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8eee5b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8eee5e: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8eee62: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8eee66: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eee68: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_8eee6b: /* 8eee6b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8eee6f: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 8eee72: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 8eee76: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eee78: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eee7b: jne 0x8eeee1 */
  if (!zf) goto L_8eeee1;
L_8eee7d: /* 8eee7d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8eee81: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eee87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eee89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eee8c: je 0x8eeea2 */
  if (zf) goto L_8eeea2;
L_8eee8e: /* 8eee8e: push 0xec */
  { uint32_t v = 0xecu; esp -= 4; W32(esp, v); }
/* 8eee93: push 0xaee3dc */
  { uint32_t v = 0xaee3dcu; esp -= 4; W32(esp, v); }
/* 8eee98: push 0xaee3c0 */
  { uint32_t v = 0xaee3c0u; esp -= 4; W32(esp, v); }
/* 8eee9d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8eee9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eee9f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8eeea2: /* 8eeea2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8eeea8: fdiv dword ptr [esp + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x38u)));
/* 8eeeac: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8eeeb0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8eeeb2: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8eeeb5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8eeeb7: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8eeeb9: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8eeebd: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8eeec1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8eeec3: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8eeec6: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8eeeca: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8eeece: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8eeed1: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8eeed3: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8eeed6: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8eeeda: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8eeede: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
L_8eeee1: /* 8eeee1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8eeee2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8eeee3: mov eax, 1 */
  eax = 0x1u;
/* 8eeee8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8eeee9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eeeec: ret 0xc */
  esp += 16; SPILL(); return;
L_8eeeef: /* 8eeeef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8eeef0: xor eax, eax */
  eax = 0;
/* 8eeef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8eeef3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eeef6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8eef90(void) {
  LOAD_REGS();
L_8eef90: /* 8eef90: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8eef94: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8eef98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eef99: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8eef9d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8eefa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eefa1: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8eefa4: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8eefa7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8eefaa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eefac: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8eefae: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8eefb0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eefb2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8eefb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eefb6: call 0x6c3562 */
  esp -= 4; W32(esp, 0x8eefbbu); SPILL(); f_6c3562(); if (g_unwind) return; RELOAD();
/* 8eefbb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8eefd0(void) {
  LOAD_REGS();
L_8eefd0: /* 8eefd0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8eefd4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8eefd8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8eefdb: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8eefde: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8eefe1: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8eefe4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eefe6: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8eefe8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8eefea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8eefec: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8eeff2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eeff4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eeff7: je 0x8eeffb */
  if (zf) goto L_8eeffb;
L_8eeff9: /* 8eeff9: fchs  */
  ST0 = -ST0;
L_8eeffb: /* 8eeffb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8eefff: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ef002: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ef005: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ef008: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ef00b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef00d: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8ef00f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ef011: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef013: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8ef019: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ef01b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef01e: je 0x8ef022 */
  if (zf) goto L_8ef022;
L_8ef020: /* 8ef020: fchs  */
  ST0 = -ST0;
L_8ef022: /* 8ef022: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8ef026: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ef029: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ef02c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ef02f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ef032: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef034: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8ef036: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ef038: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef03a: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8ef040: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ef042: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef045: je 0x8ef049 */
  if (zf) goto L_8ef049;
L_8ef047: /* 8ef047: fchs  */
  ST0 = -ST0;
L_8ef049: /* 8ef049: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8ef04d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ef050: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef052: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ef055: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef057: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef059: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ef05b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef05d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8ef061: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8ef065: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef066: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8ef06a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ef06d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef06e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ef071: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ef074: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ef077: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef079: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8ef07b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ef07d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef07f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ef082: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef083: call 0x6c3562 */
  esp -= 4; W32(esp, 0x8ef088u); SPILL(); f_6c3562(); if (g_unwind) return; RELOAD();
/* 8ef088: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8ef0c0(void) {
  LOAD_REGS();
L_8ef0c0: /* 8ef0c0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ef0c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef0c4: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 8ef0c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ef0c9: mov esi, ecx */
  esi = ecx;
/* 8ef0cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef0cc: mov ecx, ebp */
  ecx = ebp;
/* 8ef0ce: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8ef0d4u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8ef0d4: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8ef0d8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ef0da: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 8ef0de: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8ef0e2: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8ef0e5: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8ef0e9: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ef0ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef0ed: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8ef0ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef0f0: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8ef0f3: mov ecx, esi */
  ecx = esi;
/* 8ef0f5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef0f7: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 8ef0fa: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ef0fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef0ff: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ef102: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef103: call 0x6c3562 */
  esp -= 4; W32(esp, 0x8ef108u); SPILL(); f_6c3562(); if (g_unwind) return; RELOAD();
/* 8ef108: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef10a: jne 0x8ef115 */
  if (!zf) goto L_8ef115;
L_8ef10c: /* 8ef10c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ef10d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ef10e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ef10f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ef112: ret 0x14 */
  esp += 24; SPILL(); return;
L_8ef115: /* 8ef115: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef116: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 8ef11a: mov ecx, ebx */
  ecx = ebx;
/* 8ef11c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8ef122u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8ef122: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 8ef126: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ef129: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef12d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8ef12f: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 8ef133: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8ef135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef136: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8ef139: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef13a: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8ef13d: mov ecx, esi */
  ecx = esi;
/* 8ef13f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef141: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8ef144: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 8ef147: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef149: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ef14c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef14d: call 0x6c3562 */
  esp -= 4; W32(esp, 0x8ef152u); SPILL(); f_6c3562(); if (g_unwind) return; RELOAD();
/* 8ef152: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef154: jne 0x8ef162 */
  if (!zf) goto L_8ef162;
L_8ef156: /* 8ef156: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ef157: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ef158: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ef159: xor eax, eax */
  eax = 0;
/* 8ef15b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ef15c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ef15f: ret 0x14 */
  esp += 24; SPILL(); return;
L_8ef162: /* 8ef162: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 8ef166: mov ecx, edi */
  ecx = edi;
/* 8ef168: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8ef16eu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8ef16e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8ef172: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8ef175: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8ef179: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef17d: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8ef180: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 8ef184: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ef187: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef188: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ef18b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef18c: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ef18f: mov ecx, esi */
  ecx = esi;
/* 8ef191: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef193: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ef195: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ef197: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef199: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ef19c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef19d: call 0x6c3562 */
  esp -= 4; W32(esp, 0x8ef1a2u); SPILL(); f_6c3562(); if (g_unwind) return; RELOAD();
/* 8ef1a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef1a4: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef1a6: /* 8ef1a6: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 8ef1a9: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8ef1ac: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8ef1ae: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef1b2: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8ef1b5: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 8ef1b9: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8ef1bc: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8ef1bf: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8ef1c2: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef1c6: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 8ef1c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef1ca: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 8ef1cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef1ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef1cf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef1d0: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8ef1d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef1d5: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8ef1d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef1d9: fsub dword ptr [esi + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1cu)));
/* 8ef1dc: mov ecx, esi */
  ecx = esi;
/* 8ef1de: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8ef1e2: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8ef1e5: fsub dword ptr [esi + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x20u)));
/* 8ef1e8: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8ef1ec: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ef1ee: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef1f0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8ef1f2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef1f4: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef1f8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ef1fa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef1fc: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8ef200: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef202: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef206: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8ef20a: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8ef20e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ef210: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef212: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef216: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ef218: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef21du); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef21d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef21f: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef225: /* 8ef225: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 8ef228: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8ef22b: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8ef22d: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef231: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8ef234: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 8ef238: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8ef23b: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8ef23e: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8ef241: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef245: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef247: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef248: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ef24b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef24c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef24e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef24f: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 8ef252: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef253: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef254: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef255: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef257: mov ecx, esi */
  ecx = esi;
/* 8ef259: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef25d: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8ef260: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ef262: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ef265: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef267: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef26b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef26d: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 8ef270: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef272: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8ef275: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef277: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef27b: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef280u); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef280: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef282: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef288: /* 8ef288: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 8ef28b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef28f: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 8ef292: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef296: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8ef299: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef29a: fsub dword ptr [esi + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1cu)));
/* 8ef29d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef29e: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8ef2a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef2a2: fsub dword ptr [esi + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x20u)));
/* 8ef2a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef2a6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef2a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef2a9: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ef2ac: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 8ef2b0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef2b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef2b3: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 8ef2b6: mov ecx, esi */
  ecx = esi;
/* 8ef2b8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef2ba: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef2be: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8ef2c1: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ef2c3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ef2c6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef2c8: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef2cc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef2ce: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 8ef2d1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef2d3: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8ef2d6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef2d8: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef2dc: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef2e1u); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef2e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef2e3: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef2e9: /* 8ef2e9: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 8ef2ec: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ef2ee: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef2f2: fsub dword ptr [esi + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x24u)));
/* 8ef2f5: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 8ef2f9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ef2fc: fsub dword ptr [esi + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x28u)));
/* 8ef2ff: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ef302: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef306: fsub dword ptr [esi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2cu)));
/* 8ef309: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef30a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef30c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef30d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ef310: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef311: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef313: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef314: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 8ef317: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef318: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef319: mov ecx, esi */
  ecx = esi;
/* 8ef31b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef31d: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef321: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8ef324: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ef326: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ef329: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef32b: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef32f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef331: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 8ef334: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef336: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8ef339: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef33b: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef33f: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef344u); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef344: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef346: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef34c: /* 8ef34c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 8ef34f: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8ef352: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8ef354: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef358: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8ef35b: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 8ef35f: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8ef362: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8ef365: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8ef368: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef36c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef36e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef36f: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8ef372: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef373: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef375: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef376: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 8ef379: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef37a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef37b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef37c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef37e: mov ecx, esi */
  ecx = esi;
/* 8ef380: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef384: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8ef386: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ef388: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8ef38b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef38d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef391: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef393: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 8ef396: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef398: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8ef39a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef39c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef3a0: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef3a5u); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef3a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef3a7: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef3ad: /* 8ef3ad: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 8ef3b0: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef3b4: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 8ef3b7: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef3bb: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8ef3be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef3bf: fsub dword ptr [esi + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1cu)));
/* 8ef3c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef3c3: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8ef3c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef3c7: fsub dword ptr [esi + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x20u)));
/* 8ef3ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef3cb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef3cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef3ce: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8ef3d1: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 8ef3d5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef3d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef3d8: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 8ef3db: mov ecx, esi */
  ecx = esi;
/* 8ef3dd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef3df: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef3e3: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8ef3e5: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ef3e7: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8ef3ea: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef3ec: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef3f0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef3f2: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 8ef3f5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef3f7: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8ef3f9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef3fb: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef3ff: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef404u); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef404: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef406: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef40c: /* 8ef40c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 8ef40f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ef411: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef415: fsub dword ptr [esi + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x24u)));
/* 8ef418: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 8ef41c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ef41f: fsub dword ptr [esi + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x28u)));
/* 8ef422: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ef425: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef429: fsub dword ptr [esi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2cu)));
/* 8ef42c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef42d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef42f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef430: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8ef433: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef434: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef436: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef437: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 8ef43a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef43b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef43c: mov ecx, esi */
  ecx = esi;
/* 8ef43e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef440: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef444: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8ef446: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ef448: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8ef44b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef44d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef451: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef453: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 8ef456: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef458: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8ef45a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef45c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef460: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef465u); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef465: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef467: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef46d: /* 8ef46d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 8ef470: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8ef473: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8ef475: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef479: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8ef47c: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 8ef480: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8ef483: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8ef486: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8ef489: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef48d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef48f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef490: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ef493: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef494: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef496: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef497: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ef49a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef49b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef49c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef49d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef49f: mov ecx, esi */
  ecx = esi;
/* 8ef4a1: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef4a5: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ef4a7: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ef4a9: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ef4ac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef4ae: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef4b2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef4b4: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ef4b7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef4b9: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ef4bb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef4bd: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef4c1: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef4c6u); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef4c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef4c8: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef4ce: /* 8ef4ce: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 8ef4d1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef4d5: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 8ef4d8: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef4dc: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8ef4df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef4e0: fsub dword ptr [esi + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1cu)));
/* 8ef4e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef4e4: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8ef4e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef4e8: fsub dword ptr [esi + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x20u)));
/* 8ef4eb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef4ec: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef4ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef4ef: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ef4f2: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 8ef4f6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef4f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef4f9: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ef4fc: mov ecx, esi */
  ecx = esi;
/* 8ef4fe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef500: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef504: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ef506: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ef508: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ef50b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef50d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef511: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef513: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ef516: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef518: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ef51a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef51c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef520: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef525u); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef525: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef527: je 0x8ef156 */
  if (zf) goto L_8ef156;
L_8ef52d: /* 8ef52d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 8ef530: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ef532: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8ef536: fsub dword ptr [esi + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x24u)));
/* 8ef539: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 8ef53d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ef540: fsub dword ptr [esi + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x28u)));
/* 8ef543: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ef546: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ef54a: fsub dword ptr [esi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2cu)));
/* 8ef54d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef54e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef550: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef551: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ef554: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef555: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ef557: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef558: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ef55b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef55c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef55d: mov ecx, esi */
  ecx = esi;
/* 8ef55f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef561: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ef565: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ef567: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ef569: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ef56c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef56e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ef572: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef574: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ef577: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ef579: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ef57b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ef57d: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8ef581: call 0x6caa60 */
  esp -= 4; W32(esp, 0x8ef586u); SPILL(); f_6caa60(); if (g_unwind) return; RELOAD();
/* 8ef586: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ef587: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8ef589: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ef58a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8ef58c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ef58d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8ef58f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ef590: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ef593: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8ef6e0(void) {
  LOAD_REGS();
L_8ef6e0: /* 8ef6e0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8ef6e4: xor eax, eax */
  eax = 0;
/* 8ef6e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ef6e7: mov esi, ecx */
  esi = ecx;
/* 8ef6e9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8ef6ed: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 8ef6f0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8ef6f4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8ef6f6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8ef6f9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8ef6fc: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8ef6ff: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 8ef702: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ef704: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 8ef707: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8ef709: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ef70c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8ef70f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8ef712: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8ef715: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8ef719: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ef71b: lea edx, [esi + 0x24] */
  edx = (uint32_t)(esi + 0x24u);
/* 8ef71e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8ef720: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8ef723: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ef726: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ef729: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8ef72d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef72e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8ef732: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ef735: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8ef739: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8ef73d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef73e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8ef742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef743: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef744: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef745: mov ecx, esi */
  ecx = esi;
/* 8ef747: call 0x6c847c */
  esp -= 4; W32(esp, 0x8ef74cu); SPILL(); f_6c847c(); if (g_unwind) return; RELOAD();
/* 8ef74c: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8ef74f: mov eax, esi */
  eax = esi;
/* 8ef751: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ef752: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_8ef780(void) {
  LOAD_REGS();
L_8ef780: /* 8ef780: xor eax, eax */
  eax = 0;
/* 8ef782: mov edx, 0xff7fffff */
  edx = 0xff7fffffu;
/* 8ef787: jmp 0x8ef790 */
  goto L_8ef790;
L_8ef790: /* 8ef790: mov dword ptr [ecx + eax*4], 0x7f7fffff */
  W32((uint32_t)(ecx + eax*4), 0x7f7fffffu);
/* 8ef797: mov dword ptr [ecx + eax*4 + 0xc], edx */
  W32((uint32_t)(ecx + eax*4 + 0xcu), edx);
/* 8ef79b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ef79c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef79f: jl 0x8ef790 */
  if ((sf != of)) goto L_8ef790;
L_8ef7a1: /* 8ef7a1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8ef7a5: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8ef7a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef7aa: lea ebp, [eax + edx] */
  ebp = (uint32_t)(eax + edx);
/* 8ef7ad: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef7af: jge 0x8ef80b */
  if ((sf == of)) goto L_8ef80b;
L_8ef7b1: /* 8ef7b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef7b2: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 8ef7b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ef7b7: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 8ef7ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef7bb: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 8ef7bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8ef7c2: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
L_8ef7c4: /* 8ef7c4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ef7c6: movzx eax, word ptr [eax + esi] */
  eax = (uint32_t)(R16((uint32_t)(eax + esi)));
/* 8ef7ca: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ef7cd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8ef7cf: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 8ef7d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef7d3: call 0x6c3bde */
  esp -= 4; W32(esp, 0x8ef7d8u); SPILL(); f_6c3bde(); if (g_unwind) return; RELOAD();
/* 8ef7d8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ef7da: movzx eax, word ptr [eax + esi + 2] */
  eax = (uint32_t)(R16((uint32_t)(eax + esi + 0x2u)));
/* 8ef7df: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ef7e2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8ef7e4: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 8ef7e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef7e8: call 0x6c3bde */
  esp -= 4; W32(esp, 0x8ef7edu); SPILL(); f_6c3bde(); if (g_unwind) return; RELOAD();
/* 8ef7ed: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ef7ef: movzx eax, word ptr [eax + esi + 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + esi + 0x4u)));
/* 8ef7f4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ef7f7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8ef7f9: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 8ef7fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef7fd: call 0x6c3bde */
  esp -= 4; W32(esp, 0x8ef802u); SPILL(); f_6c3bde(); if (g_unwind) return; RELOAD();
/* 8ef802: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ef805: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 8ef806: jne 0x8ef7c4 */
  if (!zf) goto L_8ef7c4;
L_8ef808: /* 8ef808: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ef809: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ef80a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8ef80b: /* 8ef80b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ef80c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8ef789(void) {
  LOAD_REGS();
L_8ef789: /* 8ef789: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8ef790: /* 8ef790: mov dword ptr [ecx + eax*4], 0x7f7fffff */
  W32((uint32_t)(ecx + eax*4), 0x7f7fffffu);
/* 8ef797: mov dword ptr [ecx + eax*4 + 0xc], edx */
  W32((uint32_t)(ecx + eax*4 + 0xcu), edx);
/* 8ef79b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ef79c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef79f: jl 0x8ef790 */
  if ((sf != of)) goto L_8ef790;
L_8ef7a1: /* 8ef7a1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8ef7a5: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8ef7a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef7aa: lea ebp, [eax + edx] */
  ebp = (uint32_t)(eax + edx);
/* 8ef7ad: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef7af: jge 0x8ef80b */
  if ((sf == of)) goto L_8ef80b;
L_8ef7b1: /* 8ef7b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef7b2: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 8ef7b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ef7b7: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 8ef7ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef7bb: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 8ef7bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8ef7c2: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
L_8ef7c4: /* 8ef7c4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ef7c6: movzx eax, word ptr [eax + esi] */
  eax = (uint32_t)(R16((uint32_t)(eax + esi)));
/* 8ef7ca: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ef7cd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8ef7cf: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 8ef7d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef7d3: call 0x6c3bde */
  esp -= 4; W32(esp, 0x8ef7d8u); SPILL(); f_6c3bde(); if (g_unwind) return; RELOAD();
/* 8ef7d8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ef7da: movzx eax, word ptr [eax + esi + 2] */
  eax = (uint32_t)(R16((uint32_t)(eax + esi + 0x2u)));
/* 8ef7df: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ef7e2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8ef7e4: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 8ef7e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef7e8: call 0x6c3bde */
  esp -= 4; W32(esp, 0x8ef7edu); SPILL(); f_6c3bde(); if (g_unwind) return; RELOAD();
/* 8ef7ed: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ef7ef: movzx eax, word ptr [eax + esi + 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + esi + 0x4u)));
/* 8ef7f4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ef7f7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8ef7f9: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 8ef7fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ef7fd: call 0x6c3bde */
  esp -= 4; W32(esp, 0x8ef802u); SPILL(); f_6c3bde(); if (g_unwind) return; RELOAD();
/* 8ef802: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ef805: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 8ef806: jne 0x8ef7c4 */
  if (!zf) goto L_8ef7c4;
L_8ef808: /* 8ef808: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ef809: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ef80a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8ef80b: /* 8ef80b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ef80c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8ef840(void) {
  LOAD_REGS();
L_8ef840: /* 8ef840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ef841: mov ebp, esp */
  ebp = esp;
/* 8ef843: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ef845: push 0x9d8ed0 */
  { uint32_t v = 0x9d8ed0u; esp -= 4; W32(esp, v); }
/* 8ef84a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ef850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef851: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ef858: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ef85b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8ef85e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ef85f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ef860: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8ef863: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef864: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8ef867: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ef86a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ef86b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ef86c: mov ebx, ecx */
  ebx = ecx;
/* 8ef86e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ef871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ef872: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ef873: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8ef876: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8ef879: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ef880: call 0x6c7bee */
  esp -= 4; W32(esp, 0x8ef885u); SPILL(); f_6c7bee(); if (g_unwind) return; RELOAD();
/* 8ef885: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8ef888: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef88b: jle 0x8efafe */
  if ((zf || sf != of)) goto L_8efafe;
L_8ef891: /* 8ef891: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 8ef897: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 8ef89e: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8ef8a5: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8ef8ac: xor edx, edx */
  edx = 0;
/* 8ef8ae: mov edi, edi */
  edi = edi;
L_8ef8b0: /* 8ef8b0: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef8b3: jge 0x8ef983 */
  if ((sf == of)) goto L_8ef983;
L_8ef8b9: /* 8ef8b9: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8ef8bf: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ef8c6: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ef8c9: mov ecx, edi */
  ecx = edi;
L_8ef8cb: /* 8ef8cb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8ef8ce: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ef8d0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef8d2: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8ef8d5: jge 0x8ef90b */
  if ((sf == of)) goto L_8ef90b;
L_8ef8d7: /* 8ef8d7: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8ef8d9: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 8ef8dc: fld dword ptr [eax*4 + 0xaee378] */
  { double v = F32((uint32_t)(eax*4 + 0xaee378u)); FPUSH(v); }
/* 8ef8e3: lea eax, [eax*4 + 0xaee370] */
  eax = (uint32_t)(eax*4 + 0xaee370u);
/* 8ef8ea: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 8ef8ed: fmul dword ptr [ebx + ecx*4 + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ecx*4 + 0x10u)));
/* 8ef8f1: lea ecx, [ebx + ecx*4 + 8] */
  ecx = (uint32_t)(ebx + ecx*4 + 0x8u);
/* 8ef8f5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ef8f8: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ef8fb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef8fd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ef8ff: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8ef901: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ef904: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8ef905: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef907: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef909: jmp 0x8ef8cb */
  goto L_8ef8cb;
L_8ef90b: /* 8ef90b: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8ef90e: mov ebx, edi */
  ebx = edi;
/* 8ef910: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 8ef912: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_8ef915: /* 8ef915: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8ef918: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ef91a: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 8ef91d: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef91f: jge 0x8ef95c */
  if ((sf == of)) goto L_8ef95c;
L_8ef921: /* 8ef921: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 8ef923: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 8ef926: fld dword ptr [eax*4 + 0xaee378] */
  { double v = F32((uint32_t)(eax*4 + 0xaee378u)); FPUSH(v); }
/* 8ef92d: lea eax, [eax*4 + 0xaee370] */
  eax = (uint32_t)(eax*4 + 0xaee370u);
/* 8ef934: lea ecx, [ebx + ebx*4] */
  ecx = (uint32_t)(ebx + ebx*4);
/* 8ef937: fmul dword ptr [edi + ecx*4 + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + ecx*4 + 0x10u)));
/* 8ef93b: lea ecx, [edi + ecx*4 + 8] */
  ecx = (uint32_t)(edi + ecx*4 + 0x8u);
/* 8ef93f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ef942: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8ef945: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ef948: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8ef949: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef94b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ef94d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8ef94f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef951: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ef954: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ef956: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ef958: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8ef95a: jmp 0x8ef915 */
  goto L_8ef915;
L_8ef95c: /* 8ef95c: fidiv dword ptr [ebp + 0x10] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0x10u)));
/* 8ef95f: fcom dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8ef962: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ef964: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ef967: jne 0x8ef97b */
  if (!zf) goto L_8ef97b;
L_8ef969: /* 8ef969: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ef96c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ef96f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8ef972: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8ef975: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8ef976: jmp 0x8ef8b0 */
  goto L_8ef8b0;
L_8ef97b: /* 8ef97b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ef97d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8ef97e: jmp 0x8ef8b0 */
  goto L_8ef8b0;
L_8ef983: /* 8ef983: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8ef986: lea ebx, [edi - 1] */
  ebx = (uint32_t)(edi + 0xffffffffu);
/* 8ef989: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 8ef98c: jmp 0x8ef991 */
  goto L_8ef991;
L_8ef98e: /* 8ef98e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_8ef991: /* 8ef991: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef993: jge 0x8efa76 */
  if ((sf == of)) goto L_8efa76;
L_8ef999: /* 8ef999: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8ef9a0: /* 8ef9a0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ef9a3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 8ef9a5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8ef9a6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8ef9a9: fld dword ptr [eax*4 + 0xaee378] */
  { double v = F32((uint32_t)(eax*4 + 0xaee378u)); FPUSH(v); }
/* 8ef9b0: lea eax, [eax*4 + 0xaee370] */
  eax = (uint32_t)(eax*4 + 0xaee370u);
/* 8ef9b7: lea ecx, [ebx + ebx*4] */
  ecx = (uint32_t)(ebx + ebx*4);
/* 8ef9ba: fmul dword ptr [edi + ecx*4 + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + ecx*4 + 0x10u)));
/* 8ef9be: lea ecx, [edi + ecx*4 + 8] */
  ecx = (uint32_t)(edi + ecx*4 + 0x8u);
/* 8ef9c2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ef9c5: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ef9c8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef9ca: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ef9cc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8ef9ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ef9d0: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 8ef9d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ef9d5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ef9d8: jp 0x8ef9e0 */
  if (pf) goto L_8ef9e0;
L_8ef9da: /* 8ef9da: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ef9dc: jl 0x8ef9a0 */
  if ((sf != of)) goto L_8ef9a0;
L_8ef9de: /* 8ef9de: mov edi, edi */
  edi = edi;
L_8ef9e0: /* 8ef9e0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ef9e3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 8ef9e5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8ef9e6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8ef9e9: fld dword ptr [eax*4 + 0xaee378] */
  { double v = F32((uint32_t)(eax*4 + 0xaee378u)); FPUSH(v); }
/* 8ef9f0: lea eax, [eax*4 + 0xaee370] */
  eax = (uint32_t)(eax*4 + 0xaee370u);
/* 8ef9f7: lea ecx, [edx + edx*4] */
  ecx = (uint32_t)(edx + edx*4);
/* 8ef9fa: fmul dword ptr [edi + ecx*4 + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + ecx*4 + 0x10u)));
/* 8ef9fe: lea ecx, [edi + ecx*4 + 8] */
  ecx = (uint32_t)(edi + ecx*4 + 0x8u);
/* 8efa02: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8efa05: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8efa08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8efa0a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8efa0c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8efa0e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8efa10: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 8efa13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8efa15: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8efa18: jne 0x8efa27 */
  if (!zf) goto L_8efa27;
L_8efa1a: /* 8efa1a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8efa1c: jle 0x8efa27 */
  if ((zf || sf != of)) goto L_8efa27;
L_8efa1e: /* 8efa1e: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8efa20: jl 0x8ef9e0 */
  if ((sf != of)) goto L_8ef9e0;
L_8efa22: /* 8efa22: jmp 0x8ef98e */
  goto L_8ef98e;
L_8efa27: /* 8efa27: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8efa29: jge 0x8ef98e */
  if ((sf == of)) goto L_8ef98e;
L_8efa2f: /* 8efa2f: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 8efa31: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8efa34: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* 8efa37: lea esi, [esi + eax*4] */
  esi = (uint32_t)(esi + eax*4);
/* 8efa3a: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8efa3d: mov ecx, 5 */
  ecx = 0x5u;
/* 8efa42: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 8efa45: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8efa47: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8efa4a: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8efa4d: lea eax, [edx + edx*4] */
  eax = (uint32_t)(edx + edx*4);
/* 8efa50: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8efa53: lea esi, [eax + ecx] */
  esi = (uint32_t)(eax + ecx);
/* 8efa56: mov ecx, 5 */
  ecx = 0x5u;
/* 8efa5b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8efa5d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8efa60: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8efa62: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8efa64: mov ecx, 5 */
  ecx = 0x5u;
/* 8efa69: lea esi, [ebp - 0x44] */
  esi = (uint32_t)(ebp + 0xffffffbcu);
/* 8efa6c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8efa6e: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8efa71: jmp 0x8ef98e */
  goto L_8ef98e;
L_8efa76: /* 8efa76: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8efa79: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 8efa7c: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8efa7e: je 0x8efa84 */
  if (zf) goto L_8efa84;
L_8efa80: /* 8efa80: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8efa82: jne 0x8efa8d */
  if (!zf) goto L_8efa8d;
L_8efa84: /* 8efa84: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8efa85: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8efa87: mov ebx, eax */
  ebx = eax;
/* 8efa89: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8efa8b: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_8efa8d: /* 8efa8d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8efa90: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8efa92: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8efa94: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8efa9au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8efa9a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8efa9d: mov word ptr [ecx + 0x1c], ax */
  W16((uint32_t)(ecx + 0x1cu), (eax & 0xffffu));
/* 8efaa1: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 8efaa4: mov word ptr [ecx + 0x1e], dx */
  W16((uint32_t)(ecx + 0x1eu), (edx & 0xffffu));
/* 8efaa8: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8efaab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8efaac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8efaad: mov ecx, ebx */
  ecx = ebx;
/* 8efaaf: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8efab1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8efab2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8efab5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8efab6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8efab7: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 8efaba: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8efabc: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8efabf: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8efac1: call 0x6c4e9e */
  esp -= 4; W32(esp, 0x8efac6u); SPILL(); f_6c4e9e(); if (g_unwind) return; RELOAD();
/* 8efac6: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8efac9: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8efacc: movzx ecx, word ptr [ecx + 0x1e] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + 0x1eu)));
/* 8efad0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8efad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8efad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8efad5: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8efad8: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8efada: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8efadc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8efadd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8efade: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8efadf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8efae1: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8efae4: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8efae6: call 0x6c4e9e */
  esp -= 4; W32(esp, 0x8efaebu); SPILL(); f_6c4e9e(); if (g_unwind) return; RELOAD();
/* 8efaeb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8efaee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8efaf5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8efaf6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8efaf7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8efaf8: mov esp, ebp */
  esp = ebp;
/* 8efafa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8efafb: ret 0x14 */
  esp += 24; SPILL(); return;
L_8efafe: /* 8efafe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8efb01: mov word ptr [ebx + 0x1e], di */
  W16((uint32_t)(ebx + 0x1eu), (edi & 0xffffu));
/* 8efb05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8efb06: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* 8efb0c: mov word ptr [ebx + 0x1c], ax */
  W16((uint32_t)(ebx + 0x1cu), (eax & 0xffffu));
/* 8efb10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8efb11: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8efb18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8efb19: mov esp, ebp */
  esp = ebp;
/* 8efb1b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8efb1c: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8efb1f(void) {
  LOAD_REGS();
L_8efb1f: /* 8efb1f: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8efb22: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8efb27: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 8efb2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8efb2b: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8efb2e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8efb33u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8efb33(); return;
}

void f_8efb33(void) {
  LOAD_REGS();
L_8efb33: /* 8efb33: push 0xa1e3a4 */
  { uint32_t v = 0xa1e3a4u; esp -= 4; W32(esp, v); }
/* 8efb38: push 0xaee2d4 */
  { uint32_t v = 0xaee2d4u; esp -= 4; W32(esp, v); }
/* 8efb3d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8efb43u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8efb43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8efb46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8efb48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8efb4a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8efb4fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8efb4f: guest_badaddr(0x8efb4f); return;
}

void f_8efc20(void) {
  LOAD_REGS();
L_8efc20: /* 8efc20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8efc21: mov ebp, esp */
  ebp = esp;
/* 8efc23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8efc25: push 0x9d8f07 */
  { uint32_t v = 0x9d8f07u; esp -= 4; W32(esp, v); }
/* 8efc2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8efc30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8efc31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8efc38: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8efc3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8efc3e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8efc41: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8efc43: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efc46: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8efc49: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8efc4c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efc4f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8efc52: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8efc55: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efc58: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8efc5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8efc5c: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 8efc5f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efc62: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8efc65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8efc66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8efc67: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8efc6a: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 8efc6d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efc70: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8efc73: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8efc75: add edx, 0x94 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8efc7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8efc7c: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8efc83: call dword ptr [eax + 0xbc] */
  { uint32_t t = R32((uint32_t)(eax + 0xbcu)); esp -= 4; W32(esp, 0x8efc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8efc89: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8efc8c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efc8f: add eax, 0x108 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8efc94: mov dword ptr [ecx + 0x114], eax */
  W32((uint32_t)(ecx + 0x114u), eax);
/* 8efc9a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8efc9d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efca0: add edx, 0x108 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8efca6: mov dword ptr [eax + 0x118], edx */
  W32((uint32_t)(eax + 0x118u), edx);
/* 8efcac: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8efcaf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efcb2: add ecx, 0x114 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8efcb8: mov dword ptr [edx + 0x11c], ecx */
  W32((uint32_t)(edx + 0x11cu), ecx);
/* 8efcbe: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8efcc1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efcc4: add eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8efcc7: mov dword ptr [ecx + 0x120], eax */
  W32((uint32_t)(ecx + 0x120u), eax);
/* 8efccd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efcd0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8efcd3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8efcd6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8efcd8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8efcdb: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8efce1: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8efce4: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8efce7: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8efceb: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8efcee: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8efcf1: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8efcf4: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 8efcfb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8efcfe: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8efd01: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8efd04: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 8efd07: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8efd09: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8efd0b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8efd0d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8efd10: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8efd12: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8efd15: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8efd17: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8efd1a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8efd1d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8efd20: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8efd23: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8efd26: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8efd29: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8efd2c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8efd2f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8efd32: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8efd34: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8efd36: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efd38: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efd3a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8efd3c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8efd3f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8efd42: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8efd45: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8efd48: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8efd4b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8efd4e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8efd51: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8efd54: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8efd56: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8efd58: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efd5a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efd5c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8efd5e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8efd61: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8efd64: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8efd67: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8efd6a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8efd6d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8efd70: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8efd73: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8efd76: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8efd78: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8efd7a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efd7c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efd7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8efd80: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8efd82: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8efd84: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8efd86: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8efd89: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8efd8c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8efd8f: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efd92: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8efd95: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8efd98: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8efd9b: add esi, 0xd8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8efda1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8efda3: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8efda6: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8efda9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efdac: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 8efdaf: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8efdb2: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8efdb8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8efdbb: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8efdbe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8efdc0: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8efdc3: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 8efdc6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8efdc9: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8efdcc: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 8efdd3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8efdd6: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8efdd9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8efddc: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 8efddf: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8efde1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8efde3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8efde5: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8efde8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8efdea: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8efded: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8efdef: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8efdf2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8efdf5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8efdf8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8efdfb: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8efdfe: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8efe01: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8efe04: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8efe07: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8efe0a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8efe0c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8efe0e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efe10: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efe12: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8efe14: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8efe17: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8efe1a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8efe1d: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8efe20: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8efe23: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8efe26: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8efe29: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8efe2c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8efe2e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8efe30: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efe32: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efe34: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8efe36: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8efe39: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8efe3c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8efe3f: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8efe42: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8efe45: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8efe48: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8efe4b: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8efe4e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8efe50: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8efe52: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efe54: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8efe56: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8efe58: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8efe5a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8efe5c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8efe5e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8efe61: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8efe64: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8efe67: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efe6a: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8efe6d: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8efe70: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8efe73: add esi, 0xe4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8efe79: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8efe7b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8efe7e: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8efe81: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efe84: fld dword ptr [eax + 0xec] */
  { double v = F32((uint32_t)(eax + 0xecu)); FPUSH(v); }
/* 8efe8a: add eax, 0xf0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8efe8f: fsub dword ptr [eax - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff0u)));
/* 8efe92: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 8efe95: fsub dword ptr [eax - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xffffffecu)));
/* 8efe98: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* 8efe9b: fsub dword ptr [eax - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xffffffe8u)));
/* 8efe9e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8efea1: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8efea4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8efea6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8efea9: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8efeac: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8efeaf: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8efeb2: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8efeb5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8efeb8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efebb: fld dword ptr [ecx + 0xf0] */
  { double v = F32((uint32_t)(ecx + 0xf0u)); FPUSH(v); }
/* 8efec1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8efec7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8efec9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8efecc: jnp 0x8efedc */
  if (!pf) goto L_8efedc;
L_8efece: /* 8efece: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8efed4: fdiv dword ptr [ecx + 0xf0] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0xf0u)));
/* 8efeda: jmp 0x8efee2 */
  goto L_8efee2;
L_8efedc: /* 8efedc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8efee2: /* 8efee2: fstp dword ptr [ecx + 0xfc] */
  WF32((uint32_t)(ecx + 0xfcu), ST0); FPOP();
/* 8efee8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8efeeb: fld dword ptr [ecx + 0xf4] */
  { double v = F32((uint32_t)(ecx + 0xf4u)); FPUSH(v); }
/* 8efef1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8efef7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8efef9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8efefc: jnp 0x8eff0c */
  if (!pf) goto L_8eff0c;
L_8efefe: /* 8efefe: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8eff04: fdiv dword ptr [ecx + 0xf4] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0xf4u)));
/* 8eff0a: jmp 0x8eff12 */
  goto L_8eff12;
L_8eff0c: /* 8eff0c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8eff12: /* 8eff12: fstp dword ptr [ecx + 0x100] */
  WF32((uint32_t)(ecx + 0x100u), ST0); FPOP();
/* 8eff18: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eff1b: fld dword ptr [ecx + 0xf8] */
  { double v = F32((uint32_t)(ecx + 0xf8u)); FPUSH(v); }
/* 8eff21: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eff27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eff29: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8eff2c: jnp 0x8eff3c */
  if (!pf) goto L_8eff3c;
L_8eff2e: /* 8eff2e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8eff34: fdiv dword ptr [ecx + 0xf8] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0xf8u)));
/* 8eff3a: jmp 0x8eff42 */
  goto L_8eff42;
L_8eff3c: /* 8eff3c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8eff42: /* 8eff42: fstp dword ptr [ecx + 0x104] */
  WF32((uint32_t)(ecx + 0x104u), ST0); FPOP();
/* 8eff48: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8eff4b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8eff4d: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 8eff53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eff54: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x8eff5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eff5a: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eff5d: mov esi, eax */
  esi = eax;
/* 8eff5f: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8eff62: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8eff67: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8eff69: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8eff6f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8eff75u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8eff75: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8eff7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eff7c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eff7f: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8eff82: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x8eff88u); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 8eff88: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eff8b: mov esi, eax */
  esi = eax;
/* 8eff8d: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8eff90: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8eff95: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8eff97: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8eff9d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8effa3u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8effa3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8effa6: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8effa9: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x8effafu); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 8effaf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8effb2: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8effb5: fstp dword ptr [edx + 0xd4] */
  WF32((uint32_t)(edx + 0xd4u), ST0); FPOP();
/* 8effbb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8effbe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8effc0: mov dword ptr [ecx + 0x24], 0x7f7fffff */
  W32((uint32_t)(ecx + 0x24u), 0x7f7fffffu);
/* 8effc7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8effca: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8effcd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8effce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8effcf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8effd6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8effd7: mov esp, ebp */
  esp = ebp;
/* 8effd9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8effda: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8effdd(void) {
  LOAD_REGS();
L_8effdd: /* 8effdd: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8effe0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8effe5: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8effe8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8effe9: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8effec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8efff1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8efff1(); return;
}

void f_8efff1(void) {
  LOAD_REGS();
L_8efff1: /* 8efff1: push 0xa1e3f0 */
  { uint32_t v = 0xa1e3f0u; esp -= 4; W32(esp, v); }
/* 8efff6: push 0xaee31c */
  { uint32_t v = 0xaee31cu; esp -= 4; W32(esp, v); }
/* 8efffb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f0001u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f0001: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f0004: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f0006: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f0008: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f000du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f000d: guest_badaddr(0x8f000d); return;
}

void f_8f0110(void) {
  LOAD_REGS();
L_8f0110: /* 8f0110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f0111: mov ebp, esp */
  ebp = esp;
/* 8f0113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f0115: push 0x9d8f28 */
  { uint32_t v = 0x9d8f28u; esp -= 4; W32(esp, v); }
/* 8f011a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f0120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f0128: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f012b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8f012e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8f0131: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f0132: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0133: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f0134: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f0137: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0138: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8f013b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f013c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8f013f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0140: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f0143: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f0144: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0145: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f0148: call 0x6c3c47 */
  esp -= 4; W32(esp, 0x8f014du); SPILL(); f_6c3c47(); if (g_unwind) return; RELOAD();
/* 8f014d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f0150: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8f0153: mov dword ptr [ecx + 0x124], edx */
  W32((uint32_t)(ecx + 0x124u), edx);
/* 8f0159: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f015c: mov eax, dword ptr [ecx + 0x124] */
  eax = R32((uint32_t)(ecx + 0x124u));
/* 8f0162: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8f0165: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f016c: fchs  */
  ST0 = -ST0;
/* 8f016e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f0172: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8f0175: fchs  */
  ST0 = -ST0;
/* 8f0177: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8f0179: fchs  */
  ST0 = -ST0;
/* 8f017b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8f017e: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8f0181: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8f0184: mov eax, dword ptr [ecx + 0x124] */
  eax = R32((uint32_t)(ecx + 0x124u));
/* 8f018a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f018b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8f018e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f018f: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8f0192: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x8f0198u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 8f0198: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f019b: add edx, 0x94 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f01a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f01a2: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f01a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f01a6: mov ecx, eax */
  ecx = eax;
/* 8f01a8: call dword ptr [0xcfa638] */
  esp -= 4; W32(esp, 0x8f01aeu); SPILL(); f_4e2806(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 8f01ae: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f01b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f01b2: mov ecx, eax */
  ecx = eax;
/* 8f01b4: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x8f01bau); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 8f01ba: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8f01bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f01bf: add ecx, 0x128 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f01c5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8f01c7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8f01ca: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8f01cd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8f01d0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8f01d3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f01d6: mov edx, dword ptr [0xaee370] */
  edx = R32((uint32_t)(0xaee370u));
/* 8f01dc: mov eax, dword ptr [0xaee374] */
  eax = R32((uint32_t)(0xaee374u));
/* 8f01e1: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f01e7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8f01ea: mov ecx, dword ptr [0xaee378] */
  ecx = R32((uint32_t)(0xaee378u));
/* 8f01f0: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8f01f3: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f01f6: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8f01f9: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8f01fc: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8f0203: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8f0206: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f0209: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f020c: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* 8f020f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f0211: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8f0213: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f0215: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8f0218: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f021a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8f021d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f021f: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8f0222: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f0225: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8f0228: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f022b: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8f022e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f0231: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8f0234: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f0237: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8f023a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f023c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8f023e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0240: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0242: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0244: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0247: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8f024a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f024d: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8f0250: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0253: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8f0256: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0259: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8f025c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f025e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8f0260: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0262: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0264: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0266: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f0269: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8f026c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f026f: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8f0272: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f0275: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8f0278: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f027b: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8f027e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f0280: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8f0282: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0284: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0286: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0288: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f028a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8f028c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8f028e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8f0291: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8f0294: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8f0297: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f029a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f029d: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f02a0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f02a3: add esi, 0x134 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x134u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f02a9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8f02ab: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8f02ae: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8f02b1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f02b4: add eax, 0x94 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f02b9: mov ecx, dword ptr [0xaee37c] */
  ecx = R32((uint32_t)(0xaee37cu));
/* 8f02bf: mov edx, dword ptr [0xaee380] */
  edx = R32((uint32_t)(0xaee380u));
/* 8f02c5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f02c8: mov eax, dword ptr [0xaee384] */
  eax = R32((uint32_t)(0xaee384u));
/* 8f02cd: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8f02d0: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f02d3: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8f02d6: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8f02d9: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8f02e0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8f02e3: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f02e6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f02e9: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* 8f02ec: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f02ee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8f02f0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f02f2: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8f02f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f02f7: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8f02fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f02fc: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8f02ff: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f0302: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8f0305: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f0308: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8f030b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f030e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8f0311: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f0314: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8f0317: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f0319: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8f031b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f031d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f031f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0321: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0324: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8f0327: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f032a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8f032d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0330: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8f0333: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0336: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8f0339: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f033b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8f033d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f033f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0341: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0343: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f0346: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8f0349: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f034c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8f034f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f0352: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8f0355: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f0358: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8f035b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f035d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8f035f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0361: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0363: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0365: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f0367: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8f0369: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8f036b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8f036e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8f0371: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8f0374: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f0377: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f037a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f037d: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f0380: add esi, 0x140 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f0386: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8f0388: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8f038b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8f038e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f0391: mov eax, dword ptr [0xaee388] */
  eax = R32((uint32_t)(0xaee388u));
/* 8f0396: mov ecx, dword ptr [0xaee38c] */
  ecx = R32((uint32_t)(0xaee38cu));
/* 8f039c: add edx, 0x94 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f03a2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8f03a5: mov edx, dword ptr [0xaee390] */
  edx = R32((uint32_t)(0xaee390u));
/* 8f03ab: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8f03ae: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8f03b1: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 8f03b4: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8f03b7: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8f03be: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f03c1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f03c4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f03c7: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* 8f03ca: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f03cc: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8f03ce: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f03d0: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8f03d3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f03d5: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8f03d8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f03da: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8f03dd: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f03e0: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8f03e3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f03e6: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8f03e9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f03ec: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8f03ef: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f03f2: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8f03f5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f03f7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8f03f9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f03fb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f03fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f03ff: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0402: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8f0405: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0408: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8f040b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f040e: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8f0411: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0414: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8f0417: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f0419: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8f041b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f041d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f041f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0421: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f0424: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8f0427: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f042a: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8f042d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f0430: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8f0433: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8f0436: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8f0439: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f043b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8f043d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f043f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8f0441: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0443: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8f0445: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8f0447: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8f0449: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8f044c: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8f044f: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8f0452: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f0455: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f0458: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f045b: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f045e: add esi, 0x14c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f0464: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8f0466: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8f0469: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8f046c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f046f: mov dword ptr [ecx + 0x158], 0 */
  W32((uint32_t)(ecx + 0x158u), 0x0u);
/* 8f0479: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f047c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f047f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f0480: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f0481: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f0488: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f0489: mov esp, ebp */
  esp = ebp;
/* 8f048b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f048c: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8f048f(void) {
  LOAD_REGS();
L_8f048f: /* 8f048f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f0492: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f0497: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8f049a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f049b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8f049e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f04a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f04a3(); return;
}

void f_8f04a3(void) {
  LOAD_REGS();
L_8f04a3: /* 8f04a3: push 0xa1e468 */
  { uint32_t v = 0xa1e468u; esp -= 4; W32(esp, v); }
/* 8f04a8: push 0xaee324 */
  { uint32_t v = 0xaee324u; esp -= 4; W32(esp, v); }
/* 8f04ad: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f04b3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f04b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f04b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f04b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f04ba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f04bfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f04bf: guest_badaddr(0x8f04bf); return;
}

void f_8f05b0(void) {
  LOAD_REGS();
L_8f05b0: /* 8f05b0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8f05b4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8f05b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f05b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f05ba: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8f05be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f05bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f05c0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8f05c4: mov esi, ecx */
  esi = ecx;
/* 8f05c6: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8f05ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f05cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f05cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f05cd: mov ecx, esi */
  ecx = esi;
/* 8f05cf: call 0x6c72c0 */
  esp -= 4; W32(esp, 0x8f05d4u); SPILL(); f_6c72c0(); if (g_unwind) return; RELOAD();
/* 8f05d4: mov dword ptr [esi + 0x15c], 0x47c35000 */
  W32((uint32_t)(esi + 0x15cu), 0x47c35000u);
/* 8f05de: mov eax, esi */
  eax = esi;
/* 8f05e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f05e1: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8f0600(void) {
  LOAD_REGS();
L_8f0600: /* 8f0600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f0601: mov ebp, esp */
  ebp = esp;
/* 8f0603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f0605: push 0x9d8f40 */
  { uint32_t v = 0x9d8f40u; esp -= 4; W32(esp, v); }
/* 8f060a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f0610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f0618: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f061b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f061c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f061d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f061e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8f0621: mov esi, ecx */
  esi = ecx;
/* 8f0623: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8f0626: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f0629: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f0630: xor eax, eax */
  eax = 0;
L_8f0632: /* 8f0632: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f0635: jge 0x8f063a */
  if ((sf == of)) goto L_8f063a;
L_8f0637: /* 8f0637: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f0638: jmp 0x8f0632 */
  goto L_8f0632;
L_8f063a: /* 8f063a: lea eax, [ecx + ecx] */
  eax = (uint32_t)(ecx + ecx);
/* 8f063d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f063e: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8f0640: mov ecx, esi */
  ecx = esi;
/* 8f0642: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8f0648u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8f0648: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8f064a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f064c: mov ecx, esi */
  ecx = esi;
/* 8f064e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f0654u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f0654: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8f0657: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f065a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f065b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f065c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f065d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f065f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f0660: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f0662: call 0x6c4e9e */
  esp -= 4; W32(esp, 0x8f0667u); SPILL(); f_6c4e9e(); if (g_unwind) return; RELOAD();
/* 8f0667: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8f0669: mov ecx, esi */
  ecx = esi;
/* 8f066b: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x8f0671u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 8f0671: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8f0674: xor eax, eax */
  eax = 0;
L_8f0676: /* 8f0676: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f0679: jge 0x8f067e */
  if ((sf == of)) goto L_8f067e;
L_8f067b: /* 8f067b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f067c: jmp 0x8f0676 */
  goto L_8f0676;
L_8f067e: /* 8f067e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f0680: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f0682: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8f0688u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8f0688: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8f068b: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f068e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f0690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0691: mov ecx, esi */
  ecx = esi;
/* 8f0693: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 8f0696: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f069cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f069c: xor eax, eax */
  eax = 0;
/* 8f069e: mov edi, edi */
  edi = edi;
L_8f06a0: /* 8f06a0: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f06a3: jge 0x8f06f0 */
  if ((sf == of)) goto L_8f06f0;
L_8f06a5: /* 8f06a5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f06a7: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 8f06a9: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8f06ac: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 8f06af: mov dword ptr [esi + eax*8], ebx */
  W32((uint32_t)(esi + eax*8), ebx);
/* 8f06b2: mov edx, dword ptr [ecx + edx*4 + 4] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x4u));
/* 8f06b6: mov dword ptr [esi + eax*8 + 4], edx */
  W32((uint32_t)(esi + eax*8 + 0x4u), edx);
/* 8f06ba: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8f06bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f06be: jmp 0x8f06a0 */
  goto L_8f06a0;
L_8f06f0: /* 8f06f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f06f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f06f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f06f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f06fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f06fd: mov esp, ebp */
  esp = ebp;
/* 8f06ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f0700: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f06c0(void) {
  LOAD_REGS();
L_8f06c0: /* 8f06c0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f06c3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f06c8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f06cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f06cc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f06cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f06d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f06d4(); return;
}

void f_8f06d4(void) {
  LOAD_REGS();
L_8f06d4: /* 8f06d4: push 0xa1e4d8 */
  { uint32_t v = 0xa1e4d8u; esp -= 4; W32(esp, v); }
/* 8f06d9: push 0xaee2cc */
  { uint32_t v = 0xaee2ccu; esp -= 4; W32(esp, v); }
/* 8f06de: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f06e4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f06e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f06e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f06e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f06eb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f06f0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f06f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f06f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f06f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f06f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f06fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f06fd: mov esp, ebp */
  esp = ebp;
/* 8f06ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f0700: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f0760(void) {
  LOAD_REGS();
L_8f0760: /* 8f0760: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f0761: mov ebp, esp */
  ebp = esp;
/* 8f0763: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f0765: push 0x9d8f50 */
  { uint32_t v = 0x9d8f50u; esp -= 4; W32(esp, v); }
/* 8f076a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f0770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0771: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f0778: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f077b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8f077e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f077f: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 8f0782: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0783: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f0784: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8f0787: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8f078a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f078d: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 8f0790: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8f0793: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f079a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8f079d: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8f07a0: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 8f07a3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8f07a6: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8f07a8: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 8f07aa: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8f07ad: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8f07b0: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 8f07b3: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8f07b6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8f07b9: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 8f07bc: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8f07bf: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8f07c1: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8f07c4: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 8f07c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f07c7: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 8f07ca: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8f07cd: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8f07d0: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8f07d3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8f07d5: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8f07d8: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8f07db: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8f07de: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8f07e1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8f07e3: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8f07e6: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8f07e9: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8f07ec: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8f07ef: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8f07f1: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8f07f4: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8f07f7: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8f07fa: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8f0800u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8f0800: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f0802: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8f0805: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8f0808: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 8f080b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8f080e: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8f0811: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8f0814: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8f0817: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8f081a: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8f081d: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 8f0820: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* 8f0823: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0825: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8f0828: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8f082b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f082d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8f0830: fmul dword ptr [edi + 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xe0u)));
/* 8f0836: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8f0839: fmul dword ptr [edi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xdcu)));
/* 8f083f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0841: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8f0844: fmul dword ptr [edi + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xd8u)));
/* 8f084a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f084c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8f084e: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8f0851: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8f0854: fmul dword ptr [edi + 0xec] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xecu)));
/* 8f085a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8f085d: fmul dword ptr [edi + 0xe8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xe8u)));
/* 8f0863: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0865: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8f0868: fmul dword ptr [edi + 0xe4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xe4u)));
/* 8f086e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0870: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8f0872: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8f0875: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8f0877: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8f087a: fcomp dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
  FPOP();
/* 8f0880: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0882: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0885: jne 0x8f089b */
  if (!zf) goto L_8f089b;
L_8f0887: /* 8f0887: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8f088a: fcomp dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
  FPOP();
/* 8f0890: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0892: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0895: je 0x8f09bf */
  if (zf) goto L_8f09bf;
L_8f089b: /* 8f089b: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8f089e: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8f08a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f08a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f08a9: jp 0x8f08bf */
  if (pf) goto L_8f08bf;
L_8f08ab: /* 8f08ab: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8f08ae: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8f08b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f08b6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f08b9: jnp 0x8f09bf */
  if (!pf) goto L_8f09bf;
L_8f08bf: /* 8f08bf: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8f08c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f08c4: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 8f08c7: fdivr dword ptr [ebp + 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0x14u))) / ST0;
/* 8f08ca: fchs  */
  ST0 = -ST0;
/* 8f08cc: fcom dword ptr [ecx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x24u)));
/* 8f08cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f08d1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f08d4: je 0x8f09bd */
  if (zf) goto L_8f09bd;
L_8f08da: /* 8f08da: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8f08dc: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8f08df: fmul dword ptr [edi + 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xf8u)));
/* 8f08e5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8f08e8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8f08ea: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8f08ed: fmul dword ptr [edi + 0xf4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xf4u)));
/* 8f08f3: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8f08f6: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 8f08f9: xor eax, eax */
  eax = 0;
/* 8f08fb: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8f08fe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8f0900: fmul dword ptr [edi + 0xf0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xf0u)));
/* 8f0906: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8f0909: fadd dword ptr [edi + 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xe0u)));
/* 8f090f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8f0912: fadd dword ptr [edi + 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xdcu)));
/* 8f0918: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8f091b: fadd dword ptr [edi + 0xd8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xd8u)));
/* 8f0921: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8f0924: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8f0927: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8f092a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8f0930: /* 8f0930: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f0933: jge 0x8f09dc */
  if ((sf == of)) goto L_8f09dc;
L_8f0939: /* 8f0939: mov ecx, dword ptr [ebp + eax*4 - 0x48] */
  ecx = R32((uint32_t)(ebp + eax*4 + 0xffffffb8u));
/* 8f093d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f093e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8f0941: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8f0942: mov ebx, 3 */
  ebx = 0x3u;
/* 8f0947: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x8f0947);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8f0949: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 8f094c: mov edx, dword ptr [ebp + edx*4 - 0x48] */
  edx = R32((uint32_t)(ebp + edx*4 + 0xffffffb8u));
/* 8f0950: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8f0952: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8f0954: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8f0957: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 8f095a: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8f095d: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 8f0960: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8f0962: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8f0965: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8f0967: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8f096a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8f096c: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8f096f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8f0971: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8f0974: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8f0976: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8f0978: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8f097a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8f097d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8f097f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8f0981: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8f0984: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8f0986: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8f0988: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8f098b: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8f098e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8f0991: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f0993: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8f0996: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8f0998: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f099a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8f099c: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8f099f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8f09a2: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8f09a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f09a7: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8f09aa: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8f09ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8f09ae: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8f09b0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8f09b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f09b8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f09bb: jne 0x8f09d4 */
  if (!zf) goto L_8f09d4;
L_8f09bd: /* 8f09bd: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8f09bf: /* 8f09bf: xor eax, eax */
  eax = 0;
/* 8f09c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f09c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f09cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f09cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f09cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f09ce: mov esp, ebp */
  esp = ebp;
/* 8f09d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f09d1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8f09d4: /* 8f09d4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8f09d7: jmp 0x8f0930 */
  goto L_8f0930;
L_8f09dc: /* 8f09dc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f09de: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8f09e1: lea ecx, [edi + 0x108] */
  ecx = (uint32_t)(edi + 0x108u);
/* 8f09e7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8f09e9: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 8f09ec: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 8f09ef: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8f09f2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f09f4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8f09f7: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 8f09fa: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8f09fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f09ff: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 8f0a02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0a03: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x8f0a09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f0a09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0a0b: jne 0x8f0a34 */
  if (!zf) goto L_8f0a34;
L_8f0a0d: /* 8f0a0d: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 8f0a13: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8f0a16: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 8f0a19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0a1b: jne 0x8f0a34 */
  if (!zf) goto L_8f0a34;
L_8f0a1d: /* 8f0a1d: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8f0a22: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f0a28u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f0a28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0a29: call 0x6c449e */
  esp -= 4; W32(esp, 0x8f0a2eu); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 8f0a2e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8f0a31: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f0a34: /* 8f0a34: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f0a36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f0a39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f0a3a: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* 8f0a3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f0a3e: mov eax, 1 */
  eax = 0x1u;
/* 8f0a43: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f0a4a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f0a4b: mov esp, ebp */
  esp = ebp;
/* 8f0a4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f0a4e: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8f0a51(void) {
  LOAD_REGS();
L_8f0a51: /* 8f0a51: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f0a54: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f0a59: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f0a5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f0a5d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f0a60: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f0a65u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f0a65(); return;
}

void f_8f0a65(void) {
  LOAD_REGS();
L_8f0a65: /* 8f0a65: push 0xa1e500 */
  { uint32_t v = 0xa1e500u; esp -= 4; W32(esp, v); }
/* 8f0a6a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8f0a6f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f0a75u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f0a75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f0a78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f0a7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f0a7c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f0a81u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f0a81: guest_badaddr(0x8f0a81); return;
}

void f_8f0b60(void) {
  LOAD_REGS();
L_8f0b60: /* 8f0b60: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f0b63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0b64: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 8f0b68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f0b69: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 8f0b6d: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 8f0b71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0b72: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 8f0b76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f0b77: lea edx, [edi + 0x14c] */
  edx = (uint32_t)(edi + 0x14cu);
/* 8f0b7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f0b7e: mov edx, dword ptr [edi + 0x124] */
  edx = R32((uint32_t)(edi + 0x124u));
/* 8f0b84: lea eax, [edi + 0x140] */
  eax = (uint32_t)(edi + 0x140u);
/* 8f0b8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0b8b: lea ecx, [edi + 0x134] */
  ecx = (uint32_t)(edi + 0x134u);
/* 8f0b91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f0b92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f0b93: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 8f0b97: lea eax, [edi + 0xe4] */
  eax = (uint32_t)(edi + 0xe4u);
/* 8f0b9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0b9e: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 8f0ba2: lea ecx, [edi + 0xd8] */
  ecx = (uint32_t)(edi + 0xd8u);
/* 8f0ba8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f0ba9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f0baa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0bab: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 8f0bb3: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 8f0bbb: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8f0bc3: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 8f0bcb: call 0x8ee620 */
  esp -= 4; W32(esp, 0x8f0bd0u); SPILL(); f_8ee620(); if (g_unwind) return; RELOAD();
/* 8f0bd0: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f0bd3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f0bd6: jne 0x8f0c5f */
  if (!zf) goto L_8f0c5f;
L_8f0bdc: /* 8f0bdc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f0bde: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8f0be2: fcomp dword ptr [ecx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x24u)));
  FPOP();
/* 8f0be5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0be7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f0bea: jp 0x8f0c5f */
  if (pf) goto L_8f0c5f;
L_8f0bec: /* 8f0bec: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8f0bf0: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 8f0bf4: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 8f0bf7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8f0bfa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f0bfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f0bfd: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 8f0c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0c01: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x8f0c07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f0c07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0c09: jne 0x8f0c32 */
  if (!zf) goto L_8f0c32;
L_8f0c0b: /* 8f0c0b: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 8f0c11: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8f0c14: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 8f0c17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0c19: jne 0x8f0c32 */
  if (!zf) goto L_8f0c32;
L_8f0c1b: /* 8f0c1b: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8f0c20: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f0c26u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f0c26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0c27: call 0x6c449e */
  esp -= 4; W32(esp, 0x8f0c2cu); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 8f0c2c: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8f0c2f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f0c32: /* 8f0c32: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f0c34: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8f0c38: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 8f0c3b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8f0c3f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8f0c43: add edi, 0x108 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f0c49: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8f0c4b: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8f0c4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f0c4f: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 8f0c52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f0c53: mov eax, 1 */
  eax = 0x1u;
/* 8f0c58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f0c59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f0c5c: ret 0x14 */
  esp += 24; SPILL(); return;
L_8f0c5f: /* 8f0c5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f0c60: xor eax, eax */
  eax = 0;
/* 8f0c62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f0c63: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f0c66: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8f0cc0(void) {
  LOAD_REGS();
L_8f0cc0: /* 8f0cc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f0cc1: mov ebp, esp */
  ebp = esp;
/* 8f0cc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f0cc5: push 0x9d8f60 */
  { uint32_t v = 0x9d8f60u; esp -= 4; W32(esp, v); }
/* 8f0cca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f0cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0cd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f0cd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f0cdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f0cdc: mov ebx, ecx */
  ebx = ecx;
/* 8f0cde: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f0ce1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0ce2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f0ce3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f0ce6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f0ced: jne 0x8f0dcd */
  if (!zf) goto L_8f0dcd;
L_8f0cf3: /* 8f0cf3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f0cf6: movzx eax, word ptr [ebx + 0x1c] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x1cu)));
/* 8f0cfa: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 8f0cfd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f0cff: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f0d02: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* 8f0d05: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8f0d08: fcomp dword ptr [esi + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xcu)));
  FPOP();
/* 8f0d0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d0d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d10: je 0x8f0d58 */
  if (zf) goto L_8f0d58;
L_8f0d12: /* 8f0d12: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f0d14: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 8f0d17: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d19: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d1c: je 0x8f0d58 */
  if (zf) goto L_8f0d58;
L_8f0d1e: /* 8f0d1e: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8f0d21: fcomp dword ptr [esi + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x10u)));
  FPOP();
/* 8f0d24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d26: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d29: je 0x8f0d58 */
  if (zf) goto L_8f0d58;
L_8f0d2b: /* 8f0d2b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f0d2e: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 8f0d31: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d33: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d36: je 0x8f0d58 */
  if (zf) goto L_8f0d58;
L_8f0d38: /* 8f0d38: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 8f0d3b: fcomp dword ptr [esi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x14u)));
  FPOP();
/* 8f0d3e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d40: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d43: je 0x8f0d58 */
  if (zf) goto L_8f0d58;
L_8f0d45: /* 8f0d45: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0d48: fcomp dword ptr [ecx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18u)));
  FPOP();
/* 8f0d4b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d4d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d50: je 0x8f0d58 */
  if (zf) goto L_8f0d58;
L_8f0d52: /* 8f0d52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0d53: call 0x6cb2c1 */
  esp -= 4; W32(esp, 0x8f0d58u); SPILL(); f_6cb2c1(); if (g_unwind) return; RELOAD();
L_8f0d58: /* 8f0d58: movzx eax, word ptr [ebx + 0x1e] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x1eu)));
/* 8f0d5c: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 8f0d5f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f0d61: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f0d64: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* 8f0d67: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8f0d6a: fcomp dword ptr [esi + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xcu)));
  FPOP();
/* 8f0d6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d6f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d72: je 0x8f0dba */
  if (zf) goto L_8f0dba;
L_8f0d74: /* 8f0d74: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8f0d76: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 8f0d79: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d7b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d7e: je 0x8f0dba */
  if (zf) goto L_8f0dba;
L_8f0d80: /* 8f0d80: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8f0d83: fcomp dword ptr [esi + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x10u)));
  FPOP();
/* 8f0d86: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d88: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d8b: je 0x8f0dba */
  if (zf) goto L_8f0dba;
L_8f0d8d: /* 8f0d8d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8f0d90: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 8f0d93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0d95: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0d98: je 0x8f0dba */
  if (zf) goto L_8f0dba;
L_8f0d9a: /* 8f0d9a: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 8f0d9d: fcomp dword ptr [esi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x14u)));
  FPOP();
/* 8f0da0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0da2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0da5: je 0x8f0dba */
  if (zf) goto L_8f0dba;
L_8f0da7: /* 8f0da7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8f0daa: fcomp dword ptr [ecx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18u)));
  FPOP();
/* 8f0dad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0daf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0db2: je 0x8f0dba */
  if (zf) goto L_8f0dba;
L_8f0db4: /* 8f0db4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0db5: call 0x6cb2c1 */
  esp -= 4; W32(esp, 0x8f0dbau); SPILL(); f_6cb2c1(); if (g_unwind) return; RELOAD();
L_8f0dba: /* 8f0dba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f0dbd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f0dbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f0dbf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f0dc6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f0dc7: mov esp, ebp */
  esp = ebp;
/* 8f0dc9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f0dca: ret 4 */
  esp += 8; SPILL(); return;
L_8f0dcd: /* 8f0dcd: movzx edi, word ptr [ebx + 0x1e] */
  edi = (uint32_t)(R16((uint32_t)(ebx + 0x1eu)));
L_8f0dd1: /* 8f0dd1: movzx eax, word ptr [ebx + 0x1c] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x1cu)));
/* 8f0dd5: movzx ecx, word ptr [ebx + 0x1e] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x1eu)));
/* 8f0dd9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f0ddb: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f0ddd: jge 0x8f0dba */
  if ((sf == of)) goto L_8f0dba;
L_8f0ddf: /* 8f0ddf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f0de2: mov esi, dword ptr [edx + 0x1c] */
  esi = R32((uint32_t)(edx + 0x1cu));
/* 8f0de5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f0de7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f0de9: mov ecx, esi */
  ecx = esi;
/* 8f0deb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f0df1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f0df1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f0df3: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8f0df6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f0df7: jmp 0x8f0dd1 */
  goto L_8f0dd1;
}

void f_8f0df9(void) {
  LOAD_REGS();
L_8f0df9: /* 8f0df9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f0dfc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f0e01: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f0e04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0e05: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f0e08: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f0e0du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f0e0d(); return;
}

void f_8f0e0d(void) {
  LOAD_REGS();
L_8f0e0d: /* 8f0e0d: push 0xa1e548 */
  { uint32_t v = 0xa1e548u; esp -= 4; W32(esp, v); }
/* 8f0e12: push 0xaee2f4 */
  { uint32_t v = 0xaee2f4u; esp -= 4; W32(esp, v); }
/* 8f0e17: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f0e1du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f0e1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f0e20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f0e22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f0e24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f0e29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f0e29: guest_badaddr(0x8f0e29); return;
}

void f_8f0e90(void) {
  LOAD_REGS();
L_8f0e90: /* 8f0e90: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f0e93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0e94: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 8f0e98: mov eax, dword ptr [esi + 0x15c] */
  eax = R32((uint32_t)(esi + 0x15cu));
/* 8f0e9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0e9f: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 8f0ea5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f0ea6: mov ecx, dword ptr [esi + 0x124] */
  ecx = R32((uint32_t)(esi + 0x124u));
/* 8f0eac: lea edx, [esi + 0x140] */
  edx = (uint32_t)(esi + 0x140u);
/* 8f0eb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f0eb3: lea eax, [esi + 0x134] */
  eax = (uint32_t)(esi + 0x134u);
/* 8f0eb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0eba: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8f0ebe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f0ebf: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8f0ec3: lea edx, [esi + 0xd8] */
  edx = (uint32_t)(esi + 0xd8u);
/* 8f0ec9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f0eca: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 8f0ece: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0ecf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f0ed0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f0ed1: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 8f0ed5: call 0x6c75f9 */
  esp -= 4; W32(esp, 0x8f0edau); SPILL(); f_6c75f9(); if (g_unwind) return; RELOAD();
/* 8f0eda: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8f0ede: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0ee0: je 0x8f0f6e */
  if (zf) goto L_8f0f6e;
L_8f0ee6: /* 8f0ee6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8f0eea: fcomp dword ptr [esi + 0x15c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x15cu)));
  FPOP();
/* 8f0ef0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0ef2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f0ef5: jp 0x8f0f6e */
  if (pf) goto L_8f0f6e;
L_8f0ef7: /* 8f0ef7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f0efa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f0efc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f0efd: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 8f0f00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f0f01: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 8f0f05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f0f06: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x8f0f0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f0f0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0f0e: jne 0x8f0f37 */
  if (!zf) goto L_8f0f37;
L_8f0f10: /* 8f0f10: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 8f0f16: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8f0f19: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 8f0f1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0f1e: jne 0x8f0f37 */
  if (!zf) goto L_8f0f37;
L_8f0f20: /* 8f0f20: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8f0f25: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f0f2bu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f0f2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0f2c: call 0x6c449e */
  esp -= 4; W32(esp, 0x8f0f31u); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 8f0f31: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8f0f34: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f0f37: /* 8f0f37: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f0f39: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 8f0f3c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8f0f40: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8f0f44: lea edx, [esi + 0x108] */
  edx = (uint32_t)(esi + 0x108u);
/* 8f0f4a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8f0f4c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8f0f50: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8f0f53: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8f0f57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f0f58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f0f59: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8f0f5c: mov dword ptr [esi + 0x15c], ecx */
  W32((uint32_t)(esi + 0x15cu), ecx);
/* 8f0f62: mov eax, 1 */
  eax = 0x1u;
/* 8f0f67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f0f68: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f0f6b: ret 0x14 */
  esp += 24; SPILL(); return;
L_8f0f6e: /* 8f0f6e: xor eax, eax */
  eax = 0;
/* 8f0f70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f0f71: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f0f74: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8f0fc0(void) {
  LOAD_REGS();
L_8f0fc0: /* 8f0fc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f0fc1: mov ebp, esp */
  ebp = esp;
/* 8f0fc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f0fc5: push 0x9d8f70 */
  { uint32_t v = 0x9d8f70u; esp -= 4; W32(esp, v); }
/* 8f0fca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f0fd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f0fd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f0fd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f0fdb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f0fde: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 8f0fe1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f0fe3: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8f0fe6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f0fe7: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 8f0fea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f0feb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f0fec: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f0fef: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f0ff6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f0ff8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f0ffb: je 0x8f1043 */
  if (zf) goto L_8f1043;
L_8f0ffd: /* 8f0ffd: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8f0fff: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 8f1002: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1004: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1007: je 0x8f1043 */
  if (zf) goto L_8f1043;
L_8f1009: /* 8f1009: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8f100c: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 8f100f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1011: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1014: je 0x8f1043 */
  if (zf) goto L_8f1043;
L_8f1016: /* 8f1016: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8f1019: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 8f101c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f101e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1021: je 0x8f1043 */
  if (zf) goto L_8f1043;
L_8f1023: /* 8f1023: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 8f1026: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 8f1029: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f102b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f102e: je 0x8f1043 */
  if (zf) goto L_8f1043;
L_8f1030: /* 8f1030: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8f1033: fcomp dword ptr [ecx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18u)));
  FPOP();
/* 8f1036: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1038: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f103b: je 0x8f1043 */
  if (zf) goto L_8f1043;
L_8f103d: /* 8f103d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f103e: call 0x6cb2c1 */
  esp -= 4; W32(esp, 0x8f1043u); SPILL(); f_6cb2c1(); if (g_unwind) return; RELOAD();
L_8f1043: /* 8f1043: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f1046: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f1047: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f1048: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f104f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f1050: mov esp, ebp */
  esp = ebp;
/* 8f1052: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f1053: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f1056(void) {
  LOAD_REGS();
L_8f1056: /* 8f1056: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f1059: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f105e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f1061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f1062: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f1065: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f106au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f106a(); return;
}

void f_8f106a(void) {
  LOAD_REGS();
L_8f106a: /* 8f106a: push 0xa1e580 */
  { uint32_t v = 0xa1e580u; esp -= 4; W32(esp, v); }
/* 8f106f: push 0xaee314 */
  { uint32_t v = 0xaee314u; esp -= 4; W32(esp, v); }
/* 8f1074: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f107au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f107a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f107d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f107f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1081: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1086u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f1086: guest_badaddr(0x8f1086); return;
}

void f_8f10d0(void) {
  LOAD_REGS();
L_8f10d0: /* 8f10d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f10d1: mov ebp, esp */
  ebp = esp;
/* 8f10d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f10d5: push 0x9d8f80 */
  { uint32_t v = 0x9d8f80u; esp -= 4; W32(esp, v); }
/* 8f10da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f10e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f10e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f10e8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f10eb: movzx eax, word ptr [ecx + 0x1e] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x1eu)));
/* 8f10ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f10f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f10f1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f10f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f10f5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f10f8: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8f10fb: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8f1102: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f1109: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f110c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f1110: /* 8f1110: movzx edx, word ptr [ecx + 0x1c] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x1cu)));
/* 8f1114: movzx ecx, word ptr [ecx + 0x1e] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + 0x1eu)));
/* 8f1118: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f111a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f111c: jge 0x8f11a7 */
  if ((sf == of)) goto L_8f11a7;
L_8f1122: /* 8f1122: mov edx, dword ptr [esi + 0x11c] */
  edx = R32((uint32_t)(esi + 0x11cu));
/* 8f1128: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8f112a: mov edx, dword ptr [esi + 0x120] */
  edx = R32((uint32_t)(esi + 0x120u));
/* 8f1130: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8f1133: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8f1135: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8f1138: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8f113b: lea edi, [ecx + edx*8] */
  edi = (uint32_t)(ecx + edx*8);
/* 8f113e: movzx edx, word ptr [eax + 2] */
  edx = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 8f1142: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8f1145: lea ebx, [ecx + edx*8] */
  ebx = (uint32_t)(ecx + edx*8);
/* 8f1148: movzx edx, word ptr [eax + 4] */
  edx = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 8f114c: movzx eax, word ptr [eax + 6] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8f1150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1151: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8f1154: lea ecx, [ecx + edx*8] */
  ecx = (uint32_t)(ecx + edx*8);
/* 8f1157: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f1158: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f115b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f115c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f115d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f115e: call 0x6c9089 */
  esp -= 4; W32(esp, 0x8f1163u); SPILL(); f_6c9089(); if (g_unwind) return; RELOAD();
/* 8f1163: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f1166: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8f1168: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f116b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f116c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8f116f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f1172: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f1175: jmp 0x8f1110 */
  goto L_8f1110;
L_8f11a7: /* 8f11a7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f11aa: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f11ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f11ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f11af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f11b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f11b7: mov esp, ebp */
  esp = ebp;
/* 8f11b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f11ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f1177(void) {
  LOAD_REGS();
L_8f1177: /* 8f1177: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f117a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f117f: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f1182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f1183: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8f1186: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f118bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f118b(); return;
}

void f_8f118b(void) {
  LOAD_REGS();
L_8f118b: /* 8f118b: push 0xa1e5b8 */
  { uint32_t v = 0xa1e5b8u; esp -= 4; W32(esp, v); }
/* 8f1190: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8f1195: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f119bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f119b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f119e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f11a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f11a2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f11a7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f11a7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f11aa: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f11ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f11ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f11af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f11b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f11b7: mov esp, ebp */
  esp = ebp;
/* 8f11b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f11ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f1200(void) {
  LOAD_REGS();
L_8f1200: /* 8f1200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f1201: mov ebp, esp */
  ebp = esp;
/* 8f1203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f1205: push 0x9d8f90 */
  { uint32_t v = 0x9d8f90u; esp -= 4; W32(esp, v); }
/* 8f120a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f1210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f1218: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f121b: xor eax, eax */
  eax = 0;
/* 8f121d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f121e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8f1221: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f1224: movzx eax, word ptr [ecx + 0x1e] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x1eu)));
/* 8f1228: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1229: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f122a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8f122d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f1230: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8f1233: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8f1236: /* 8f1236: movzx edx, word ptr [ecx + 0x1c] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x1cu)));
/* 8f123a: movzx ecx, word ptr [ecx + 0x1e] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + 0x1eu)));
/* 8f123e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f1240: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f1242: jge 0x8f139c */
  if ((sf == of)) goto L_8f139c;
L_8f1248: /* 8f1248: mov edx, dword ptr [edi + 0x11c] */
  edx = R32((uint32_t)(edi + 0x11cu));
/* 8f124e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8f1250: mov edx, dword ptr [edi + 0x120] */
  edx = R32((uint32_t)(edi + 0x120u));
/* 8f1256: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8f1259: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8f125b: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8f125e: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8f1261: lea esi, [ecx + edx*8] */
  esi = (uint32_t)(ecx + edx*8);
/* 8f1264: movzx edx, word ptr [eax + 2] */
  edx = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 8f1268: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8f126b: lea ebx, [ecx + edx*8] */
  ebx = (uint32_t)(ecx + edx*8);
/* 8f126e: movzx edx, word ptr [eax + 4] */
  edx = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 8f1272: movzx eax, word ptr [eax + 6] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8f1276: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8f1279: lea ecx, [ecx + edx*8] */
  ecx = (uint32_t)(ecx + edx*8);
/* 8f127c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f127f: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 8f1282: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f1283: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8f1286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1287: lea edx, [edi + 0x14c] */
  edx = (uint32_t)(edi + 0x14cu);
/* 8f128d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f128e: lea eax, [edi + 0x140] */
  eax = (uint32_t)(edi + 0x140u);
/* 8f1294: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1295: mov eax, dword ptr [edi + 0x124] */
  eax = R32((uint32_t)(edi + 0x124u));
/* 8f129b: lea edx, [edi + 0x134] */
  edx = (uint32_t)(edi + 0x134u);
/* 8f12a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f12a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f12a3: lea edx, [edi + 0xe4] */
  edx = (uint32_t)(edi + 0xe4u);
/* 8f12a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f12aa: lea eax, [edi + 0xd8] */
  eax = (uint32_t)(edi + 0xd8u);
/* 8f12b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f12b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f12b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f12b3: mov esi, ebx */
  esi = ebx;
/* 8f12b5: mov dword ptr [ebp + 8], 0x3f800000 */
  W32((uint32_t)(ebp + 0x8u), 0x3f800000u);
/* 8f12bc: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8f12c3: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8f12ca: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8f12d1: call 0x8ee620 */
  esp -= 4; W32(esp, 0x8f12d6u); SPILL(); f_8ee620(); if (g_unwind) return; RELOAD();
/* 8f12d6: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f12d9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f12dc: jne 0x8f1353 */
  if (!zf) goto L_8f1353;
L_8f12de: /* 8f12de: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f12e0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8f12e3: fcomp dword ptr [ecx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x24u)));
  FPOP();
/* 8f12e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f12e8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f12eb: jp 0x8f1353 */
  if (pf) goto L_8f1353;
L_8f12ed: /* 8f12ed: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f12f0: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f12f3: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 8f12f6: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8f12f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f12fb: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 8f12fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f12ff: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x8f1305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f1305: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1307: jne 0x8f1330 */
  if (!zf) goto L_8f1330;
L_8f1309: /* 8f1309: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 8f130f: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8f1312: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 8f1315: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1317: jne 0x8f1330 */
  if (!zf) goto L_8f1330;
L_8f1319: /* 8f1319: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8f131e: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f1324u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f1324: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1325: call 0x6c449e */
  esp -= 4; W32(esp, 0x8f132au); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 8f132a: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8f132d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f1330: /* 8f1330: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f1332: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 8f1335: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f1338: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f133b: lea edx, [edi + 0x108] */
  edx = (uint32_t)(edi + 0x108u);
/* 8f1341: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8f1343: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f1346: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8f1349: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8f134c: mov eax, 1 */
  eax = 0x1u;
/* 8f1351: jmp 0x8f1355 */
  goto L_8f1355;
L_8f1353: /* 8f1353: xor eax, eax */
  eax = 0;
L_8f1355: /* 8f1355: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f1358: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8f135a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f135d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f135e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8f1361: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f1364: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f1367: jmp 0x8f1236 */
  goto L_8f1236;
L_8f139c: /* 8f139c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f139f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f13a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f13a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f13a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f13ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f13ac: mov esp, ebp */
  esp = ebp;
/* 8f13ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f13af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f136c(void) {
  LOAD_REGS();
L_8f136c: /* 8f136c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f136f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f1374: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8f1377: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f1378: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8f137b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1380u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f1380(); return;
}

void f_8f1380(void) {
  LOAD_REGS();
L_8f1380: /* 8f1380: push 0xa1e600 */
  { uint32_t v = 0xa1e600u; esp -= 4; W32(esp, v); }
/* 8f1385: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8f138a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f1390u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f1390: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f1393: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1395: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1397: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f139cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f139c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f139f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f13a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f13a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f13a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f13ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f13ac: mov esp, ebp */
  esp = ebp;
/* 8f13ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f13af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f1430(void) {
  LOAD_REGS();
L_8f1430: /* 8f1430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f1431: mov ebp, esp */
  ebp = esp;
/* 8f1433: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f1435: push 0x9d8fa0 */
  { uint32_t v = 0x9d8fa0u; esp -= 4; W32(esp, v); }
/* 8f143a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f1440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1441: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f1448: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f144b: xor eax, eax */
  eax = 0;
/* 8f144d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f144e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f144f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f1452: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f1455: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8f1458: movzx eax, word ptr [ecx + 0x1e] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x1eu)));
/* 8f145c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f145d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f1460: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8f1463: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8f1466: /* 8f1466: movzx edx, word ptr [ecx + 0x1c] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x1cu)));
/* 8f146a: movzx ecx, word ptr [ecx + 0x1e] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + 0x1eu)));
/* 8f146e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f1470: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f1472: jge 0x8f15e5 */
  if ((sf == of)) goto L_8f15e5;
L_8f1478: /* 8f1478: mov edx, dword ptr [esi + 0x11c] */
  edx = R32((uint32_t)(esi + 0x11cu));
/* 8f147e: fld dword ptr [esi + 0x15c] */
  { double v = F32((uint32_t)(esi + 0x15cu)); FPUSH(v); }
/* 8f1484: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8f1486: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8f1489: mov edx, dword ptr [esi + 0x120] */
  edx = R32((uint32_t)(esi + 0x120u));
/* 8f148f: movzx edi, word ptr [ecx + eax*8 + 4] */
  edi = (uint32_t)(R16((uint32_t)(ecx + eax*8 + 0x4u)));
/* 8f1494: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8f1497: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8f1499: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8f149c: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8f149f: lea ebx, [ecx + edx*8] */
  ebx = (uint32_t)(ecx + edx*8);
/* 8f14a2: movzx edx, word ptr [eax + 2] */
  edx = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 8f14a6: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8f14a9: lea edx, [ecx + edx*8] */
  edx = (uint32_t)(ecx + edx*8);
/* 8f14ac: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 8f14af: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8f14b1: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 8f14b4: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8f14b7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8f14ba: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 8f14bd: lea ecx, [ecx + edi*8] */
  ecx = (uint32_t)(ecx + edi*8);
/* 8f14c0: movzx edi, word ptr [eax + 6] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8f14c4: mov eax, dword ptr [esi + 0x124] */
  eax = R32((uint32_t)(esi + 0x124u));
/* 8f14ca: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8f14cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f14cf: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8f14d2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8f14d5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8f14d8: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8f14db: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8f14de: lea edx, [esi + 0x14c] */
  edx = (uint32_t)(esi + 0x14cu);
/* 8f14e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f14e5: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 8f14eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f14ec: lea edx, [esi + 0x134] */
  edx = (uint32_t)(esi + 0x134u);
/* 8f14f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f14f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f14f4: lea eax, [esi + 0xd8] */
  eax = (uint32_t)(esi + 0xd8u);
/* 8f14fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f14fb: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f14fe: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8f1505: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8f150c: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8f1513: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8f151a: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 8f151d: call 0x6c847c */
  esp -= 4; W32(esp, 0x8f1522u); SPILL(); f_6c847c(); if (g_unwind) return; RELOAD();
/* 8f1522: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1524: je 0x8f159c */
  if (zf) goto L_8f159c;
L_8f1526: /* 8f1526: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8f1529: fcomp dword ptr [esi + 0x15c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x15cu)));
  FPOP();
/* 8f152f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1531: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1534: jp 0x8f159c */
  if (pf) goto L_8f159c;
L_8f1536: /* 8f1536: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f1539: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f153b: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 8f153e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f153f: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x8f1545u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f1545: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1547: jne 0x8f1570 */
  if (!zf) goto L_8f1570;
L_8f1549: /* 8f1549: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 8f154f: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8f1552: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 8f1555: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1557: jne 0x8f1570 */
  if (!zf) goto L_8f1570;
L_8f1559: /* 8f1559: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8f155e: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f1564u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f1564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1565: call 0x6c449e */
  esp -= 4; W32(esp, 0x8f156au); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 8f156a: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8f156d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f1570: /* 8f1570: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f1572: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f1575: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* 8f1578: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f157b: lea eax, [esi + 0x108] */
  eax = (uint32_t)(esi + 0x108u);
/* 8f1581: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f1583: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8f1586: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f1589: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f158c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8f158f: mov dword ptr [esi + 0x15c], edx */
  W32((uint32_t)(esi + 0x15cu), edx);
/* 8f1595: mov eax, 1 */
  eax = 0x1u;
/* 8f159a: jmp 0x8f159e */
  goto L_8f159e;
L_8f159c: /* 8f159c: xor eax, eax */
  eax = 0;
L_8f159e: /* 8f159e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f15a1: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8f15a3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f15a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f15a7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8f15aa: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f15ad: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f15b0: jmp 0x8f1466 */
  goto L_8f1466;
L_8f15e5: /* 8f15e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f15e8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f15eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f15ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f15ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f15f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f15f5: mov esp, ebp */
  esp = ebp;
/* 8f15f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f15f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f15b5(void) {
  LOAD_REGS();
L_8f15b5: /* 8f15b5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f15b8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f15bd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f15c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f15c1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f15c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f15c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f15c9(); return;
}

void f_8f15c9(void) {
  LOAD_REGS();
L_8f15c9: /* 8f15c9: push 0xa1e648 */
  { uint32_t v = 0xa1e648u; esp -= 4; W32(esp, v); }
/* 8f15ce: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8f15d3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f15d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f15d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f15dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f15de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f15e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f15e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f15e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f15e8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f15eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f15ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f15ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f15f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f15f5: mov esp, ebp */
  esp = ebp;
/* 8f15f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f15f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f1680(void) {
  LOAD_REGS();
L_8f1680: /* 8f1680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f1681: mov ebp, esp */
  ebp = esp;
/* 8f1683: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f1685: push 0x9d8fb0 */
  { uint32_t v = 0x9d8fb0u; esp -= 4; W32(esp, v); }
/* 8f168a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f1690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1691: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f1698: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f169b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f169c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f169d: mov esi, ecx */
  esi = ecx;
/* 8f169f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f16a1: xor eax, eax */
  eax = 0;
/* 8f16a3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f16a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f16a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f16a9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f16ac: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8f16af: jne 0x8f17a3 */
  if (!zf) goto L_8f17a3;
L_8f16b5: /* 8f16b5: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8f16b8: movzx ecx, word ptr [esi + 0x1c] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x1cu)));
/* 8f16bc: mov edx, dword ptr [edi + 0x118] */
  edx = R32((uint32_t)(edi + 0x118u));
/* 8f16c2: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8f16c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f16c6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f16c8: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f16cb: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8f16ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f16cf: lea ecx, [ecx + eax + 4] */
  ecx = (uint32_t)(ecx + eax + 0x4u);
/* 8f16d3: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8f16d6: call 0x6c611d */
  esp -= 4; W32(esp, 0x8f16dbu); SPILL(); f_6c611d(); if (g_unwind) return; RELOAD();
/* 8f16db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f16dd: je 0x8f16e3 */
  if (zf) goto L_8f16e3;
L_8f16df: /* 8f16df: movzx ebx, word ptr [esi + 0x1c] */
  ebx = (uint32_t)(R16((uint32_t)(esi + 0x1cu)));
L_8f16e3: /* 8f16e3: movzx edx, word ptr [esi + 0x1e] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x1eu)));
/* 8f16e7: mov eax, dword ptr [edi + 0x118] */
  eax = R32((uint32_t)(edi + 0x118u));
/* 8f16ed: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f16f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f16f1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f16f3: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8f16f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f16f7: lea ecx, [edx + ecx + 4] */
  ecx = (uint32_t)(edx + ecx + 0x4u);
/* 8f16fb: call 0x6c611d */
  esp -= 4; W32(esp, 0x8f1700u); SPILL(); f_6c611d(); if (g_unwind) return; RELOAD();
/* 8f1700: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1702: je 0x8f1711 */
  if (zf) goto L_8f1711;
L_8f1704: /* 8f1704: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f1707: jne 0x8f179a */
  if (!zf) goto L_8f179a;
L_8f170d: /* 8f170d: movzx ebx, word ptr [esi + 0x1e] */
  ebx = (uint32_t)(R16((uint32_t)(esi + 0x1eu)));
L_8f1711: /* 8f1711: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_8f1714: /* 8f1714: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f1717: je 0x8f176c */
  if (zf) goto L_8f176c;
L_8f1719: /* 8f1719: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f171c: je 0x8f1740 */
  if (zf) goto L_8f1740;
L_8f171e: /* 8f171e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8f1721: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 8f1724: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1726: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1729: jp 0x8f1740 */
  if (pf) goto L_8f1740;
L_8f172b: /* 8f172b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8f172e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f1731: mov eax, ebx */
  eax = ebx;
/* 8f1733: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8f1736: mov ebx, esi */
  ebx = esi;
/* 8f1738: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f173b: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8f173e: mov esi, eax */
  esi = eax;
L_8f1740: /* 8f1740: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f1743: je 0x8f176c */
  if (zf) goto L_8f176c;
L_8f1745: /* 8f1745: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f1747: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 8f174a: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 8f174d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f174f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1752: jne 0x8f176c */
  if (!zf) goto L_8f176c;
L_8f1754: /* 8f1754: mov edx, dword ptr [edi + 0x118] */
  edx = R32((uint32_t)(edi + 0x118u));
/* 8f175a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f175c: mov ecx, ebx */
  ecx = ebx;
/* 8f175e: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f1761: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f1762: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f1764: call 0x6ca443 */
  esp -= 4; W32(esp, 0x8f1769u); SPILL(); f_6ca443(); if (g_unwind) return; RELOAD();
/* 8f1769: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8f176c: /* 8f176c: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f176f: je 0x8f17b1 */
  if (zf) goto L_8f17b1;
L_8f1771: /* 8f1771: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f1773: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 8f1776: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 8f1779: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f177b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f177e: jne 0x8f17b1 */
  if (!zf) goto L_8f17b1;
L_8f1780: /* 8f1780: mov edx, dword ptr [edi + 0x118] */
  edx = R32((uint32_t)(edi + 0x118u));
/* 8f1786: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f1788: mov ecx, esi */
  ecx = esi;
/* 8f178a: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f178d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f178e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f1790: call 0x6ca443 */
  esp -= 4; W32(esp, 0x8f1795u); SPILL(); f_6ca443(); if (g_unwind) return; RELOAD();
/* 8f1795: or dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8f1798: jmp 0x8f17b1 */
  goto L_8f17b1;
L_8f179a: /* 8f179a: movzx esi, word ptr [esi + 0x1e] */
  esi = (uint32_t)(R16((uint32_t)(esi + 0x1eu)));
/* 8f179e: jmp 0x8f1714 */
  goto L_8f1714;
L_8f17a3: /* 8f17a3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f17a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f17a7: mov ecx, esi */
  ecx = esi;
/* 8f17a9: call 0x6c4697 */
  esp -= 4; W32(esp, 0x8f17aeu); SPILL(); f_6c4697(); if (g_unwind) return; RELOAD();
/* 8f17ae: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8f17b1: /* 8f17b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f17b4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f17b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f17b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f17b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f17c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f17c1: mov esp, ebp */
  esp = ebp;
/* 8f17c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f17c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f17c7(void) {
  LOAD_REGS();
L_8f17c7: /* 8f17c7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f17ca: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f17cf: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f17d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f17d3: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8f17d6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f17dbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f17db(); return;
}

void f_8f17db(void) {
  LOAD_REGS();
L_8f17db: /* 8f17db: push 0xa1e694 */
  { uint32_t v = 0xa1e694u; esp -= 4; W32(esp, v); }
/* 8f17e0: push 0xaee2dc */
  { uint32_t v = 0xaee2dcu; esp -= 4; W32(esp, v); }
/* 8f17e5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f17ebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f17eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f17ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f17f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f17f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f17f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f17f7: guest_badaddr(0x8f17f7); return;
}

void f_8f1860(void) {
  LOAD_REGS();
L_8f1860: /* 8f1860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f1861: mov ebp, esp */
  ebp = esp;
/* 8f1863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f1865: push 0x9d8fc0 */
  { uint32_t v = 0x9d8fc0u; esp -= 4; W32(esp, v); }
/* 8f186a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f1870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f1878: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f187b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f187c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f187d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f187e: mov edi, ecx */
  edi = ecx;
/* 8f1880: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f1882: xor eax, eax */
  eax = 0;
/* 8f1884: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f1886: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f1889: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f188c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8f188f: jne 0x8f1a02 */
  if (!zf) goto L_8f1a02;
L_8f1895: /* 8f1895: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f1898: movzx eax, word ptr [edi + 0x1c] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x1cu)));
/* 8f189c: mov ecx, dword ptr [esi + 0x118] */
  ecx = R32((uint32_t)(esi + 0x118u));
/* 8f18a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f18a4: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f18a7: lea eax, [eax + edx + 4] */
  eax = (uint32_t)(eax + edx + 0x4u);
/* 8f18ab: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8f18ae: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f18b1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8f18b3: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8f18b6: fsub dword ptr [esi + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x128u)));
/* 8f18bc: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8f18bf: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8f18c2: fsub dword ptr [esi + 0x12c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x12cu)));
/* 8f18c8: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8f18cb: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8f18ce: fsub dword ptr [esi + 0x130] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x130u)));
/* 8f18d4: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8f18d7: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8f18da: fadd dword ptr [esi + 0x128] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x128u)));
/* 8f18e0: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8f18e3: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8f18e6: fadd dword ptr [esi + 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x12cu)));
/* 8f18ec: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8f18ef: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8f18f2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f18f5: fadd dword ptr [esi + 0x130] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x130u)));
/* 8f18fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f18fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f18fd: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8f1900: call 0x6c611d */
  esp -= 4; W32(esp, 0x8f1905u); SPILL(); f_6c611d(); if (g_unwind) return; RELOAD();
/* 8f1905: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1907: je 0x8f190d */
  if (zf) goto L_8f190d;
L_8f1909: /* 8f1909: movzx ebx, word ptr [edi + 0x1c] */
  ebx = (uint32_t)(R16((uint32_t)(edi + 0x1cu)));
L_8f190d: /* 8f190d: movzx ecx, word ptr [edi + 0x1e] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x1eu)));
/* 8f1911: mov edx, dword ptr [esi + 0x118] */
  edx = R32((uint32_t)(esi + 0x118u));
/* 8f1917: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f1919: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f191c: lea eax, [ecx + eax + 4] */
  eax = (uint32_t)(ecx + eax + 0x4u);
/* 8f1920: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8f1923: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f1924: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8f1926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1927: fsub dword ptr [esi + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x128u)));
/* 8f192d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f1930: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8f1933: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8f1936: fsub dword ptr [esi + 0x12c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x12cu)));
/* 8f193c: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8f193f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8f1942: fsub dword ptr [esi + 0x130] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x130u)));
/* 8f1948: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8f194b: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8f194e: fadd dword ptr [esi + 0x128] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x128u)));
/* 8f1954: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8f1957: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8f195a: fadd dword ptr [esi + 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x12cu)));
/* 8f1960: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8f1963: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8f1966: fadd dword ptr [esi + 0x130] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x130u)));
/* 8f196c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8f196f: call 0x6c611d */
  esp -= 4; W32(esp, 0x8f1974u); SPILL(); f_6c611d(); if (g_unwind) return; RELOAD();
/* 8f1974: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1976: je 0x8f1981 */
  if (zf) goto L_8f1981;
L_8f1978: /* 8f1978: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f197b: jne 0x8f19c8 */
  if (!zf) goto L_8f19c8;
L_8f197d: /* 8f197d: movzx ebx, word ptr [edi + 0x1e] */
  ebx = (uint32_t)(R16((uint32_t)(edi + 0x1eu)));
L_8f1981: /* 8f1981: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_8f1984: /* 8f1984: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f1987: je 0x8f19ce */
  if (zf) goto L_8f19ce;
L_8f1989: /* 8f1989: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f198c: je 0x8f19aa */
  if (zf) goto L_8f19aa;
L_8f198e: /* 8f198e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8f1991: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 8f1994: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1996: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1999: jp 0x8f19aa */
  if (pf) goto L_8f19aa;
L_8f199b: /* 8f199b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f199e: mov eax, ebx */
  eax = ebx;
/* 8f19a0: mov ebx, edi */
  ebx = edi;
/* 8f19a2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f19a5: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8f19a8: mov edi, eax */
  edi = eax;
L_8f19aa: /* 8f19aa: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f19ad: je 0x8f19ce */
  if (zf) goto L_8f19ce;
L_8f19af: /* 8f19af: mov eax, dword ptr [esi + 0x118] */
  eax = R32((uint32_t)(esi + 0x118u));
/* 8f19b5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8f19b7: mov ecx, ebx */
  ecx = ebx;
/* 8f19b9: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f19bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f19bd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f19bf: call 0x6c6109 */
  esp -= 4; W32(esp, 0x8f19c4u); SPILL(); f_6c6109(); if (g_unwind) return; RELOAD();
/* 8f19c4: mov ebx, eax */
  ebx = eax;
/* 8f19c6: jmp 0x8f19d1 */
  goto L_8f19d1;
L_8f19c8: /* 8f19c8: movzx edi, word ptr [edi + 0x1e] */
  edi = (uint32_t)(R16((uint32_t)(edi + 0x1eu)));
/* 8f19cc: jmp 0x8f1984 */
  goto L_8f1984;
L_8f19ce: /* 8f19ce: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_8f19d1: /* 8f19d1: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f19d4: je 0x8f1a12 */
  if (zf) goto L_8f1a12;
L_8f19d6: /* 8f19d6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f19d8: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 8f19db: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 8f19de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f19e0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f19e3: je 0x8f19e9 */
  if (zf) goto L_8f19e9;
L_8f19e5: /* 8f19e5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f19e7: jne 0x8f1a12 */
  if (!zf) goto L_8f1a12;
L_8f19e9: /* 8f19e9: mov edx, dword ptr [esi + 0x118] */
  edx = R32((uint32_t)(esi + 0x118u));
/* 8f19ef: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f19f1: mov ecx, edi */
  ecx = edi;
/* 8f19f3: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f19f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f19f7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f19f9: call 0x6c6109 */
  esp -= 4; W32(esp, 0x8f19feu); SPILL(); f_6c6109(); if (g_unwind) return; RELOAD();
/* 8f19fe: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8f1a00: jmp 0x8f1a12 */
  goto L_8f1a12;
L_8f1a02: /* 8f1a02: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f1a05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1a06: mov ecx, edi */
  ecx = edi;
/* 8f1a08: call 0x6caa38 */
  esp -= 4; W32(esp, 0x8f1a0du); SPILL(); f_6caa38(); if (g_unwind) return; RELOAD();
/* 8f1a0d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f1a10: mov ebx, eax */
  ebx = eax;
L_8f1a12: /* 8f1a12: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f1a15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f1a16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f1a17: mov eax, ebx */
  eax = ebx;
/* 8f1a19: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f1a20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f1a21: mov esp, ebp */
  esp = ebp;
/* 8f1a23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f1a24: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f1a27(void) {
  LOAD_REGS();
L_8f1a27: /* 8f1a27: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f1a2a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f1a2f: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f1a32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f1a33: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8f1a36: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1a3bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f1a3b(); return;
}

void f_8f1a3b(void) {
  LOAD_REGS();
L_8f1a3b: /* 8f1a3b: push 0xa1e6c8 */
  { uint32_t v = 0xa1e6c8u; esp -= 4; W32(esp, v); }
/* 8f1a40: push 0xaee2e4 */
  { uint32_t v = 0xaee2e4u; esp -= 4; W32(esp, v); }
/* 8f1a45: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f1a4bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f1a4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f1a4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1a50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1a52: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1a57u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f1a57: guest_badaddr(0x8f1a57); return;
}

void f_8f1ae0(void) {
  LOAD_REGS();
L_8f1ae0: /* 8f1ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f1ae1: mov ebp, esp */
  ebp = esp;
/* 8f1ae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f1ae5: push 0x9d8fd0 */
  { uint32_t v = 0x9d8fd0u; esp -= 4; W32(esp, v); }
/* 8f1aea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f1af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1af1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f1af8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f1afb: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f1afe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f1aff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1b00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f1b01: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f1b04: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8f1b0b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f1b12: jne 0x8f1ccb */
  if (!zf) goto L_8f1ccb;
L_8f1b18: /* 8f1b18: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f1b1b: movzx edx, word ptr [ecx + 0x1c] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x1cu)));
/* 8f1b1f: mov eax, dword ptr [esi + 0x118] */
  eax = R32((uint32_t)(esi + 0x118u));
/* 8f1b25: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8f1b27: mov eax, edx */
  eax = edx;
/* 8f1b29: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f1b2c: lea eax, [eax + edi + 4] */
  eax = (uint32_t)(eax + edi + 0x4u);
/* 8f1b30: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8f1b33: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8f1b36: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8f1b38: fsub dword ptr [esi + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x128u)));
/* 8f1b3e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8f1b41: fsub dword ptr [esi + 0x12c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x12cu)));
/* 8f1b47: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8f1b4a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8f1b4d: fsub dword ptr [esi + 0x130] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x130u)));
/* 8f1b53: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8f1b56: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8f1b59: fadd dword ptr [esi + 0x128] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x128u)));
/* 8f1b5f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8f1b62: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8f1b65: fadd dword ptr [esi + 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x12cu)));
/* 8f1b6b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8f1b6e: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8f1b71: fadd dword ptr [esi + 0x130] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x130u)));
/* 8f1b77: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8f1b7a: fcomp dword ptr [esi + 0xd8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd8u)));
  FPOP();
/* 8f1b80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1b82: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1b85: jp 0x8f1bd9 */
  if (pf) goto L_8f1bd9;
L_8f1b87: /* 8f1b87: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 8f1b8d: fcomp dword ptr [ebp - 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd4u)));
  FPOP();
/* 8f1b90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1b92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1b95: jp 0x8f1bd9 */
  if (pf) goto L_8f1bd9;
L_8f1b97: /* 8f1b97: fld dword ptr [esi + 0xdc] */
  { double v = F32((uint32_t)(esi + 0xdcu)); FPUSH(v); }
/* 8f1b9d: fcomp dword ptr [ebp - 0x34] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffccu)));
  FPOP();
/* 8f1ba0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1ba2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1ba5: jne 0x8f1bd9 */
  if (!zf) goto L_8f1bd9;
L_8f1ba7: /* 8f1ba7: fld dword ptr [esi + 0xdc] */
  { double v = F32((uint32_t)(esi + 0xdcu)); FPUSH(v); }
/* 8f1bad: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 8f1bb0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1bb2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1bb5: jp 0x8f1bd9 */
  if (pf) goto L_8f1bd9;
L_8f1bb7: /* 8f1bb7: fld dword ptr [esi + 0xe0] */
  { double v = F32((uint32_t)(esi + 0xe0u)); FPUSH(v); }
/* 8f1bbd: fcomp dword ptr [ebp - 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd0u)));
  FPOP();
/* 8f1bc0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1bc2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1bc5: jne 0x8f1bd9 */
  if (!zf) goto L_8f1bd9;
L_8f1bc7: /* 8f1bc7: fld dword ptr [esi + 0xe0] */
  { double v = F32((uint32_t)(esi + 0xe0u)); FPUSH(v); }
/* 8f1bcd: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 8f1bd0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1bd2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1bd5: jp 0x8f1bd9 */
  if (pf) goto L_8f1bd9;
L_8f1bd7: /* 8f1bd7: mov ebx, edx */
  ebx = edx;
L_8f1bd9: /* 8f1bd9: movzx ecx, word ptr [ecx + 0x1e] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + 0x1eu)));
/* 8f1bdd: mov edx, ecx */
  edx = ecx;
/* 8f1bdf: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8f1be2: lea eax, [edx + edi + 4] */
  eax = (uint32_t)(edx + edi + 0x4u);
/* 8f1be6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8f1be8: fsub dword ptr [esi + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x128u)));
/* 8f1bee: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8f1bf1: fsub dword ptr [esi + 0x12c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x12cu)));
/* 8f1bf7: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8f1bfa: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8f1bfd: fsub dword ptr [esi + 0x130] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x130u)));
/* 8f1c03: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8f1c06: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8f1c09: fadd dword ptr [esi + 0x128] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x128u)));
/* 8f1c0f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8f1c12: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8f1c15: fadd dword ptr [esi + 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x12cu)));
/* 8f1c1b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8f1c1e: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8f1c21: fadd dword ptr [esi + 0x130] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x130u)));
/* 8f1c27: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8f1c2a: fcomp dword ptr [esi + 0xd8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd8u)));
  FPOP();
/* 8f1c30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1c32: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1c35: jp 0x8f1c93 */
  if (pf) goto L_8f1c93;
L_8f1c37: /* 8f1c37: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 8f1c3d: fcomp dword ptr [ebp - 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd4u)));
  FPOP();
/* 8f1c40: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1c42: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1c45: jp 0x8f1c93 */
  if (pf) goto L_8f1c93;
L_8f1c47: /* 8f1c47: fld dword ptr [esi + 0xdc] */
  { double v = F32((uint32_t)(esi + 0xdcu)); FPUSH(v); }
/* 8f1c4d: fcomp dword ptr [ebp - 0x34] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffccu)));
  FPOP();
/* 8f1c50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1c52: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1c55: jne 0x8f1c93 */
  if (!zf) goto L_8f1c93;
L_8f1c57: /* 8f1c57: fld dword ptr [esi + 0xdc] */
  { double v = F32((uint32_t)(esi + 0xdcu)); FPUSH(v); }
/* 8f1c5d: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 8f1c60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1c62: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1c65: jp 0x8f1c93 */
  if (pf) goto L_8f1c93;
L_8f1c67: /* 8f1c67: fld dword ptr [esi + 0xe0] */
  { double v = F32((uint32_t)(esi + 0xe0u)); FPUSH(v); }
/* 8f1c6d: fcomp dword ptr [ebp - 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd0u)));
  FPOP();
/* 8f1c70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1c72: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1c75: jne 0x8f1c93 */
  if (!zf) goto L_8f1c93;
L_8f1c77: /* 8f1c77: fld dword ptr [esi + 0xe0] */
  { double v = F32((uint32_t)(esi + 0xe0u)); FPUSH(v); }
/* 8f1c7d: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 8f1c80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f1c82: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f1c85: jp 0x8f1c93 */
  if (pf) goto L_8f1c93;
L_8f1c87: /* 8f1c87: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f1c8a: jne 0x8f1c90 */
  if (!zf) goto L_8f1c90;
L_8f1c8c: /* 8f1c8c: mov ebx, ecx */
  ebx = ecx;
/* 8f1c8e: jmp 0x8f1c93 */
  goto L_8f1c93;
L_8f1c90: /* 8f1c90: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_8f1c93: /* 8f1c93: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f1c96: je 0x8f1ca9 */
  if (zf) goto L_8f1ca9;
L_8f1c98: /* 8f1c98: mov ecx, ebx */
  ecx = ebx;
/* 8f1c9a: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f1c9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1c9e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f1ca0: call 0x6c3062 */
  esp -= 4; W32(esp, 0x8f1ca5u); SPILL(); f_6c3062(); if (g_unwind) return; RELOAD();
/* 8f1ca5: mov edi, eax */
  edi = eax;
/* 8f1ca7: jmp 0x8f1cac */
  goto L_8f1cac;
L_8f1ca9: /* 8f1ca9: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_8f1cac: /* 8f1cac: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f1caf: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f1cb2: je 0x8f1cd9 */
  if (zf) goto L_8f1cd9;
L_8f1cb4: /* 8f1cb4: mov eax, dword ptr [esi + 0x118] */
  eax = R32((uint32_t)(esi + 0x118u));
/* 8f1cba: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8f1cbc: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f1cbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1cc0: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f1cc2: call 0x6c3062 */
  esp -= 4; W32(esp, 0x8f1cc7u); SPILL(); f_6c3062(); if (g_unwind) return; RELOAD();
/* 8f1cc7: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8f1cc9: jmp 0x8f1cd9 */
  goto L_8f1cd9;
L_8f1ccb: /* 8f1ccb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f1cce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f1ccf: call 0x6c776b */
  esp -= 4; W32(esp, 0x8f1cd4u); SPILL(); f_6c776b(); if (g_unwind) return; RELOAD();
/* 8f1cd4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f1cd7: mov edi, eax */
  edi = eax;
L_8f1cd9: /* 8f1cd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f1cdc: mov eax, edi */
  eax = edi;
/* 8f1cde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f1cdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f1ce0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f1ce7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f1ce8: mov esp, ebp */
  esp = ebp;
/* 8f1cea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f1ceb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f1cee(void) {
  LOAD_REGS();
L_8f1cee: /* 8f1cee: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f1cf1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f1cf6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f1cf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f1cfa: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f1cfd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1d02u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f1d02(); return;
}

void f_8f1d02(void) {
  LOAD_REGS();
L_8f1d02: /* 8f1d02: push 0xa1e6f8 */
  { uint32_t v = 0xa1e6f8u; esp -= 4; W32(esp, v); }
/* 8f1d07: push 0xaee2ec */
  { uint32_t v = 0xaee2ecu; esp -= 4; W32(esp, v); }
/* 8f1d0c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f1d12u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f1d12: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f1d15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1d17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1d19: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1d1eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f1d1e: guest_badaddr(0x8f1d1e); return;
}

void f_8f1db0(void) {
  LOAD_REGS();
L_8f1db0: /* 8f1db0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f1db1: mov ebp, esp */
  ebp = esp;
/* 8f1db3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f1db5: push 0x9d8fe0 */
  { uint32_t v = 0x9d8fe0u; esp -= 4; W32(esp, v); }
/* 8f1dba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f1dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1dc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f1dc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f1dcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f1dcc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8f1dcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1dd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f1dd1: mov esi, ecx */
  esi = ecx;
/* 8f1dd3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f1dd5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f1dd8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8f1ddb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1ddc: xor edi, edi */
  edi = 0;
/* 8f1dde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f1ddf: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f1de2: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8f1de5: call 0x6c611d */
  esp -= 4; W32(esp, 0x8f1deau); SPILL(); f_6c611d(); if (g_unwind) return; RELOAD();
/* 8f1dea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1dec: je 0x8f1df8 */
  if (zf) goto L_8f1df8;
L_8f1dee: /* 8f1dee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f1df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f1df1: call 0x6ca443 */
  esp -= 4; W32(esp, 0x8f1df6u); SPILL(); f_6ca443(); if (g_unwind) return; RELOAD();
/* 8f1df6: mov edi, eax */
  edi = eax;
L_8f1df8: /* 8f1df8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f1dfb: mov eax, edi */
  eax = edi;
/* 8f1dfd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f1dfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f1dff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f1e06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f1e07: mov esp, ebp */
  esp = ebp;
/* 8f1e09: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f1e0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f1e0d(void) {
  LOAD_REGS();
L_8f1e0d: /* 8f1e0d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f1e10: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f1e15: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f1e18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f1e19: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f1e1c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1e21u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f1e21(); return;
}

void f_8f1e21(void) {
  LOAD_REGS();
L_8f1e21: /* 8f1e21: push 0xa1e72c */
  { uint32_t v = 0xa1e72cu; esp -= 4; W32(esp, v); }
/* 8f1e26: push 0xaee2fc */
  { uint32_t v = 0xaee2fcu; esp -= 4; W32(esp, v); }
/* 8f1e2b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f1e31u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f1e31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f1e34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1e36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1e38: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1e3du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f1e3d: guest_badaddr(0x8f1e3d); return;
}

void f_8f1e70(void) {
  LOAD_REGS();
L_8f1e70: /* 8f1e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f1e71: mov ebp, esp */
  ebp = esp;
/* 8f1e73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f1e75: push 0x9d8ff0 */
  { uint32_t v = 0x9d8ff0u; esp -= 4; W32(esp, v); }
/* 8f1e7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f1e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1e81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f1e88: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f1e8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f1e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1e8d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f1e90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f1e91: mov edi, ecx */
  edi = ecx;
/* 8f1e93: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f1e95: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8f1e98: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f1e9b: fsub dword ptr [esi + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x128u)));
/* 8f1ea1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f1ea4: xor ebx, ebx */
  ebx = 0;
/* 8f1ea6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f1ea9: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8f1eac: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f1eaf: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8f1eb2: fsub dword ptr [esi + 0x12c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x12cu)));
/* 8f1eb8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8f1ebb: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8f1ebe: fsub dword ptr [esi + 0x130] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x130u)));
/* 8f1ec4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8f1ec7: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8f1eca: fadd dword ptr [esi + 0x128] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x128u)));
/* 8f1ed0: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8f1ed3: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8f1ed6: fadd dword ptr [esi + 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x12cu)));
/* 8f1edc: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8f1edf: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8f1ee2: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8f1ee5: fadd dword ptr [esi + 0x130] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x130u)));
/* 8f1eeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1eec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1eed: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8f1ef0: call 0x6c611d */
  esp -= 4; W32(esp, 0x8f1ef5u); SPILL(); f_6c611d(); if (g_unwind) return; RELOAD();
/* 8f1ef5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f1ef7: je 0x8f1f03 */
  if (zf) goto L_8f1f03;
L_8f1ef9: /* 8f1ef9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f1efb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1efc: call 0x6c6109 */
  esp -= 4; W32(esp, 0x8f1f01u); SPILL(); f_6c6109(); if (g_unwind) return; RELOAD();
/* 8f1f01: mov ebx, eax */
  ebx = eax;
L_8f1f03: /* 8f1f03: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f1f06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f1f07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f1f08: mov eax, ebx */
  eax = ebx;
/* 8f1f0a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f1f11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f1f12: mov esp, ebp */
  esp = ebp;
/* 8f1f14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f1f15: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f1f18(void) {
  LOAD_REGS();
L_8f1f18: /* 8f1f18: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f1f1b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f1f20: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f1f23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f1f24: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f1f27: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1f2cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f1f2c(); return;
}

void f_8f1f2c(void) {
  LOAD_REGS();
L_8f1f2c: /* 8f1f2c: push 0xa1e760 */
  { uint32_t v = 0xa1e760u; esp -= 4; W32(esp, v); }
/* 8f1f31: push 0xaee304 */
  { uint32_t v = 0xaee304u; esp -= 4; W32(esp, v); }
/* 8f1f36: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f1f3cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f1f3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f1f3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1f41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f1f43: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f1f48u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f1f48: guest_badaddr(0x8f1f48); return;
}

void f_8f1f90(void) {
  LOAD_REGS();
L_8f1f90: /* 8f1f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f1f91: mov ebp, esp */
  ebp = esp;
/* 8f1f93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f1f95: push 0x9d9000 */
  { uint32_t v = 0x9d9000u; esp -= 4; W32(esp, v); }
/* 8f1f9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f1fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f1fa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f1fa8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f1fab: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8f1fad: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f1fb0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8f1fb3: fsub dword ptr [edx + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x128u)));
/* 8f1fb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f1fba: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8f1fbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f1fbe: fsub dword ptr [edx + 0x12c] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x12cu)));
/* 8f1fc4: xor esi, esi */
  esi = 0;
/* 8f1fc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f1fc7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f1fca: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8f1fcd: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8f1fd0: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 8f1fd3: fsub dword ptr [edx + 0x130] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x130u)));
/* 8f1fd9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8f1fdc: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 8f1fdf: fadd dword ptr [edx + 0x128] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x128u)));
/* 8f1fe5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8f1fe8: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 8f1feb: fadd dword ptr [edx + 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x12cu)));
/* 8f1ff1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8f1ff4: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 8f1ff7: fadd dword ptr [edx + 0x130] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x130u)));
/* 8f1ffd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8f2000: fcomp dword ptr [edx + 0xd8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xd8u)));
  FPOP();
/* 8f2006: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f2008: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f200b: jp 0x8f2065 */
  if (pf) goto L_8f2065;
L_8f200d: /* 8f200d: fld dword ptr [edx + 0xd8] */
  { double v = F32((uint32_t)(edx + 0xd8u)); FPUSH(v); }
/* 8f2013: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 8f2016: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f2018: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f201b: jp 0x8f2065 */
  if (pf) goto L_8f2065;
L_8f201d: /* 8f201d: fld dword ptr [edx + 0xdc] */
  { double v = F32((uint32_t)(edx + 0xdcu)); FPUSH(v); }
/* 8f2023: fcomp dword ptr [ebp - 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd4u)));
  FPOP();
/* 8f2026: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f2028: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f202b: jne 0x8f2065 */
  if (!zf) goto L_8f2065;
L_8f202d: /* 8f202d: fld dword ptr [edx + 0xdc] */
  { double v = F32((uint32_t)(edx + 0xdcu)); FPUSH(v); }
/* 8f2033: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8f2036: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f2038: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f203b: jp 0x8f2065 */
  if (pf) goto L_8f2065;
L_8f203d: /* 8f203d: fld dword ptr [edx + 0xe0] */
  { double v = F32((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 8f2043: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 8f2046: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f2048: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f204b: jne 0x8f2065 */
  if (!zf) goto L_8f2065;
L_8f204d: /* 8f204d: fld dword ptr [edx + 0xe0] */
  { double v = F32((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 8f2053: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 8f2056: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f2058: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8f205b: jp 0x8f2065 */
  if (pf) goto L_8f2065;
L_8f205d: /* 8f205d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f205e: call 0x6c3062 */
  esp -= 4; W32(esp, 0x8f2063u); SPILL(); f_6c3062(); if (g_unwind) return; RELOAD();
/* 8f2063: mov esi, eax */
  esi = eax;
L_8f2065: /* 8f2065: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f2068: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2069: mov eax, esi */
  eax = esi;
/* 8f206b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f206c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f2073: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f2074: mov esp, ebp */
  esp = ebp;
/* 8f2076: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2077: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f207a(void) {
  LOAD_REGS();
L_8f207a: /* 8f207a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f207d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f2082: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f2085: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2086: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f2089: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f208eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f208e(); return;
}

void f_8f208e(void) {
  LOAD_REGS();
L_8f208e: /* 8f208e: push 0xa1e790 */
  { uint32_t v = 0xa1e790u; esp -= 4; W32(esp, v); }
/* 8f2093: push 0xaee30c */
  { uint32_t v = 0xaee30cu; esp -= 4; W32(esp, v); }
/* 8f2098: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f209eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f209e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f20a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f20a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f20a5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f20aau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f20aa: guest_badaddr(0x8f20aa); return;
}

void f_8f2100(void) {
  LOAD_REGS();
L_8f2100: /* 8f2100: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f2106: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2108: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2109: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f210a: mov esi, 0xaee3ec */
  esi = 0xaee3ecu;
/* 8f210f: je 0x8f215e */
  if (zf) goto L_8f215e;
L_8f2111: /* 8f2111: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f2113: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8f2118: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 8f211c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f211d: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x8f2120u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2120: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2122: je 0x8f215e */
  if (zf) goto L_8f215e;
L_8f2124: /* 8f2124: mov edi, dword ptr [0xcfb03c] */
  edi = R32((uint32_t)(0xcfb03cu));
/* 8f212a: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 8f212e: push 0xaee408 */
  { uint32_t v = 0xaee408u; esp -= 4; W32(esp, v); }
/* 8f2133: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2134: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f2136u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2136: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2139: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f213b: je 0x8f2150 */
  if (zf) goto L_8f2150;
L_8f213d: /* 8f213d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 8f2141: push 0xaee420 */
  { uint32_t v = 0xaee420u; esp -= 4; W32(esp, v); }
/* 8f2146: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2147: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f2149u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2149: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f214c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f214e: jne 0x8f215e */
  if (!zf) goto L_8f215e;
L_8f2150: /* 8f2150: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2151: mov eax, 0xaee438 */
  eax = 0xaee438u;
/* 8f2156: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2157: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f215d: ret  */
  esp += 4; SPILL(); return;
L_8f215e: /* 8f215e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f215f: mov eax, esi */
  eax = esi;
/* 8f2161: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2162: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2168: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2190(void) {
  LOAD_REGS();
L_8f2190: /* 8f2190: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2191: mov esi, ecx */
  esi = ecx;
/* 8f2193: call dword ptr [0xcfaff4] */
  esp -= 4; W32(esp, 0x8f2199u); SPILL(); call_ind(R32(0xcfaff4u)); if (g_unwind) return; /* IFC23!??1CImmProject@@QAE@XZ */ RELOAD();
/* 8f2199: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f219e: je 0x8f21a9 */
  if (zf) goto L_8f21a9;
L_8f21a0: /* 8f21a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f21a1: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x8f21a6u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 8f21a6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f21a9: /* 8f21a9: mov eax, esi */
  eax = esi;
/* 8f21ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f21ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f21c0(void) {
  LOAD_REGS();
L_8f21c0: /* 8f21c0: mov ecx, dword ptr [0xced69c] */
  ecx = R32((uint32_t)(0xced69cu));
/* 8f21c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f21c8: je 0x8f21de */
  if (zf) goto L_8f21de;
L_8f21ca: /* 8f21ca: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8f21ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f21d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f21d2: push 0x80000000 */
  { uint32_t v = 0x80000000u; esp -= 4; W32(esp, v); }
/* 8f21d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f21d8: call dword ptr [0xcfaff0] */
  esp -= 4; W32(esp, 0x8f21deu); SPILL(); call_ind(R32(0xcfaff0u)); if (g_unwind) return; /* IFC23!?Start@CImmProject@@QAEHPBDKKPAVCImmDevice@@@Z */ RELOAD();
L_8f21de: /* 8f21de: ret  */
  esp += 4; SPILL(); return;
}

void f_8f21f0(void) {
  LOAD_REGS();
L_8f21f0: /* 8f21f0: mov ecx, dword ptr [0xced69c] */
  ecx = R32((uint32_t)(0xced69cu));
/* 8f21f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f21f8: je 0x8f2205 */
  if (zf) goto L_8f2205;
L_8f21fa: /* 8f21fa: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8f21fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f21ff: call dword ptr [0xcfb004] */
  esp -= 4; W32(esp, 0x8f2205u); SPILL(); call_ind(R32(0xcfb004u)); if (g_unwind) return; /* IFC23!?Stop@CImmProject@@QAEHPBD@Z */ RELOAD();
L_8f2205: /* 8f2205: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2220(void) {
  LOAD_REGS();
L_8f2220: /* 8f2220: mov ecx, dword ptr [0xced69c] */
  ecx = R32((uint32_t)(0xced69cu));
/* 8f2226: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f2227: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2228: xor esi, esi */
  esi = 0;
/* 8f222a: call dword ptr [0xcfafe0] */
  esp -= 4; W32(esp, 0x8f2230u); SPILL(); call_ind(R32(0xcfafe0u)); if (g_unwind) return; /* IFC23!?GetNumEffects@CImmProject@@QAEHXZ */ RELOAD();
/* 8f2230: mov ebp, eax */
  ebp = eax;
/* 8f2232: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f2234: jle 0x8f2273 */
  if ((zf || sf != of)) goto L_8f2273;
L_8f2236: /* 8f2236: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f2237: mov ebx, dword ptr [0xcfaff8] */
  ebx = R32((uint32_t)(0xcfaff8u));
/* 8f223d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f223e: mov edi, dword ptr [0xcfaffc] */
  edi = R32((uint32_t)(0xcfaffcu));
L_8f2244: /* 8f2244: mov ecx, dword ptr [0xced69c] */
  ecx = R32((uint32_t)(0xced69cu));
/* 8f224a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f224b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f224du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f224d: mov ecx, dword ptr [0xced69c] */
  ecx = R32((uint32_t)(0xced69cu));
/* 8f2253: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2254: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f2256u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2256: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f2259: jne 0x8f226c */
  if (!zf) goto L_8f226c;
L_8f225b: /* 8f225b: mov ecx, dword ptr [0xced69c] */
  ecx = R32((uint32_t)(0xced69cu));
/* 8f2261: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2263: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2265: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2266: call dword ptr [0xcfb000] */
  esp -= 4; W32(esp, 0x8f226cu); SPILL(); call_ind(R32(0xcfb000u)); if (g_unwind) return; /* IFC23!?CreateEffectByIndex@CImmProject@@QAEPAVCImmCompoundEffect@@HPAVCImmDevice@@K@Z */ RELOAD();
L_8f226c: /* 8f226c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8f226d: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f226f: jl 0x8f2244 */
  if ((sf != of)) goto L_8f2244;
L_8f2271: /* 8f2271: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2272: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8f2273: /* 8f2273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2274: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2275: ret  */
  esp += 4; SPILL(); return;
}

void f_8f22a0(void) {
  LOAD_REGS();
L_8f22a0: /* 8f22a0: mov ecx, dword ptr [0xced69c] */
  ecx = R32((uint32_t)(0xced69cu));
/* 8f22a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f22a7: xor edi, edi */
  edi = 0;
/* 8f22a9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f22ab: je 0x8f22c6 */
  if (zf) goto L_8f22c6;
L_8f22ad: /* 8f22ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f22ae: mov esi, ecx */
  esi = ecx;
/* 8f22b0: call dword ptr [0xcfaff4] */
  esp -= 4; W32(esp, 0x8f22b6u); SPILL(); call_ind(R32(0xcfaff4u)); if (g_unwind) return; /* IFC23!??1CImmProject@@QAE@XZ */ RELOAD();
/* 8f22b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f22b7: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x8f22bcu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 8f22bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f22bf: mov dword ptr [0xced69c], edi */
  W32((uint32_t)(0xced69cu), edi);
/* 8f22c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_8f22c6: /* 8f22c6: mov ecx, dword ptr [0xced698] */
  ecx = R32((uint32_t)(0xced698u));
/* 8f22cc: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f22ce: je 0x8f22dc */
  if (zf) goto L_8f22dc;
L_8f22d0: /* 8f22d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f22d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f22d4: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8f22d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f22d6: mov dword ptr [0xced698], edi */
  W32((uint32_t)(0xced698u), edi);
L_8f22dc: /* 8f22dc: mov dword ptr [0xced694], edi */
  W32((uint32_t)(0xced694u), edi);
/* 8f22e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f22e3: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2310(void) {
  LOAD_REGS();
L_8f2310: /* 8f2310: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f2312: push 0x9d901b */
  { uint32_t v = 0x9d901bu; esp -= 4; W32(esp, v); }
/* 8f2317: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f231d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f231e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f2325: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2326: mov eax, dword ptr [0xced698] */
  eax = R32((uint32_t)(0xced698u));
/* 8f232b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f232d: jne 0x8f23c5 */
  if (!zf) goto L_8f23c5;
L_8f2333: /* 8f2333: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8f2337: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8f233b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f233c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f233d: call dword ptr [0xcfafec] */
  esp -= 4; W32(esp, 0x8f2343u); SPILL(); call_ind(R32(0xcfafecu)); if (g_unwind) return; /* IFC23!?CreateDevice@CImmDevice@@SAPAV1@PAUHINSTANCE__@@PAUHWND__@@@Z */ RELOAD();
/* 8f2343: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2346: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2348: mov dword ptr [0xced698], eax */
  W32((uint32_t)(0xced698u), eax);
/* 8f234d: je 0x8f23c5 */
  if (zf) goto L_8f23c5;
L_8f234f: /* 8f234f: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* 8f2354: call 0x6c242d */
  esp -= 4; W32(esp, 0x8f2359u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 8f2359: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f235c: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 8f2360: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2362: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 8f236a: je 0x8f2376 */
  if (zf) goto L_8f2376;
L_8f236c: /* 8f236c: mov ecx, eax */
  ecx = eax;
/* 8f236e: call dword ptr [0xcfafe8] */
  esp -= 4; W32(esp, 0x8f2374u); SPILL(); call_ind(R32(0xcfafe8u)); if (g_unwind) return; /* IFC23!??0CImmProject@@QAE@XZ */ RELOAD();
/* 8f2374: jmp 0x8f2378 */
  goto L_8f2378;
L_8f2376: /* 8f2376: xor eax, eax */
  eax = 0;
L_8f2378: /* 8f2378: mov ecx, dword ptr [0xced698] */
  ecx = R32((uint32_t)(0xced698u));
/* 8f237e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f237f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8f2387: mov dword ptr [0xced69c], eax */
  W32((uint32_t)(0xced69cu), eax);
/* 8f238c: call 0x8f2100 */
  esp -= 4; W32(esp, 0x8f2391u); SPILL(); f_8f2100(); if (g_unwind) return; RELOAD();
/* 8f2391: mov ecx, dword ptr [0xced69c] */
  ecx = R32((uint32_t)(0xced69cu));
/* 8f2397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2398: call dword ptr [0xcfafe4] */
  esp -= 4; W32(esp, 0x8f239eu); SPILL(); call_ind(R32(0xcfafe4u)); if (g_unwind) return; /* IFC23!?OpenFile@CImmProject@@QAEHPBDPAVCImmDevice@@@Z */ RELOAD();
/* 8f239e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f23a0: jne 0x8f23b6 */
  if (!zf) goto L_8f23b6;
L_8f23a2: /* 8f23a2: call 0x6c27de */
  esp -= 4; W32(esp, 0x8f23a7u); SPILL(); f_6c27de(); if (g_unwind) return; RELOAD();
/* 8f23a7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8f23ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f23b2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f23b5: ret  */
  esp += 4; SPILL(); return;
L_8f23b6: /* 8f23b6: call 0x6cc3a1 */
  esp -= 4; W32(esp, 0x8f23bbu); SPILL(); f_6cc3a1(); if (g_unwind) return; RELOAD();
/* 8f23bb: mov dword ptr [0xced694], 1 */
  W32((uint32_t)(0xced694u), 0x1u);
L_8f23c5: /* 8f23c5: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8f23c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f23d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f23d3: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2420(void) {
  LOAD_REGS();
L_8f2420: /* 8f2420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2421: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2423: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2425: mov esi, ecx */
  esi = ecx;
/* 8f2427: call dword ptr [0xcfac74] */
  esp -= 4; W32(esp, 0x8f242du); SPILL(); f_4e2441(); if (g_unwind) return; /* Core!??0FBitReader@@QAE@PAEH@Z */ RELOAD();
/* 8f242d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8f2431: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 8f2434: mov dword ptr [esi], 0xa069c8 */
  W32((uint32_t)(esi), 0xa069c8u);
/* 8f243a: mov dword ptr [esi + 0x58], 0 */
  W32((uint32_t)(esi + 0x58u), 0x0u);
/* 8f2441: mov dword ptr [esi + 0x38], 0x2710 */
  W32((uint32_t)(esi + 0x38u), 0x2710u);
/* 8f2448: mov eax, esi */
  eax = esi;
/* 8f244a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f244b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f2460(void) {
  LOAD_REGS();
L_8f2460: /* 8f2460: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f2461: mov ebp, esp */
  ebp = esp;
/* 8f2463: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f2465: push 0x9d9030 */
  { uint32_t v = 0x9d9030u; esp -= 4; W32(esp, v); }
/* 8f246a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f2470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2471: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f2478: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f247b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f247c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f247d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f247e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f2481: mov esi, ecx */
  esi = ecx;
/* 8f2483: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f248a: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x8f2490u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 8f2490: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8f2493: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 8f2496: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f249c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f249e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f249f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f24a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f24a1: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x8f24a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f24a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f24a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f24a8: mov eax, esi */
  eax = esi;
/* 8f24aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f24ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f24b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f24b3: mov esp, ebp */
  esp = ebp;
/* 8f24b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f24b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f24b9(void) {
  LOAD_REGS();
L_8f24b9: /* 8f24b9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f24bc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f24c1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f24c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f24c5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f24c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f24cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f24cd(); return;
}

void f_8f24cd(void) {
  LOAD_REGS();
L_8f24cd: /* 8f24cd: push 0xa1e7c4 */
  { uint32_t v = 0xa1e7c4u; esp -= 4; W32(esp, v); }
/* 8f24d2: push 0xaee468 */
  { uint32_t v = 0xaee468u; esp -= 4; W32(esp, v); }
/* 8f24d7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f24ddu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f24dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f24e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f24e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f24e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f24e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f24e9: guest_badaddr(0x8f24e9); return;
}

void f_8f2520(void) {
  LOAD_REGS();
L_8f2520: /* 8f2520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f2521: mov ebp, esp */
  ebp = esp;
/* 8f2523: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f2525: push 0x9d9040 */
  { uint32_t v = 0x9d9040u; esp -= 4; W32(esp, v); }
/* 8f252a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f2530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2531: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f2538: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f253b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f253c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f253d: mov esi, ecx */
  esi = ecx;
/* 8f253f: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 8f2542: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8f2548: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f254b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f254d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f254e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f2551: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2552: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2553: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f255a: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8f255du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f255d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f2560: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2561: mov eax, esi */
  eax = esi;
/* 8f2563: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2564: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f256b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f256c: mov esp, ebp */
  esp = ebp;
/* 8f256e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f256f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f2572(void) {
  LOAD_REGS();
L_8f2572: /* 8f2572: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f2575: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f257a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f257d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f257e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f2581: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2586u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f2586(); return;
}

void f_8f2586(void) {
  LOAD_REGS();
L_8f2586: /* 8f2586: push 0xa1e7f0 */
  { uint32_t v = 0xa1e7f0u; esp -= 4; W32(esp, v); }
/* 8f258b: push 0xaee470 */
  { uint32_t v = 0xaee470u; esp -= 4; W32(esp, v); }
/* 8f2590: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f2596u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f2596: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2599: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f259b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f259d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f25a2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f25a2: guest_badaddr(0x8f25a2); return;
}

void f_8f25e0(void) {
  LOAD_REGS();
L_8f25e0: /* 8f25e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f25e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f25e3: mov esi, ecx */
  esi = ecx;
/* 8f25e5: call dword ptr [0xcfac78] */
  esp -= 4; W32(esp, 0x8f25ebu); SPILL(); f_4e149c(); if (g_unwind) return; /* Core!??0FBitWriter@@QAE@H@Z */ RELOAD();
/* 8f25eb: mov dword ptr [esi], 0xa06958 */
  W32((uint32_t)(esi), 0xa06958u);
/* 8f25f1: mov eax, esi */
  eax = esi;
/* 8f25f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f25f4: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2610(void) {
  LOAD_REGS();
L_8f2610: /* 8f2610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f2611: mov ebp, esp */
  ebp = esp;
/* 8f2613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f2615: push 0x9d9059 */
  { uint32_t v = 0x9d9059u; esp -= 4; W32(esp, v); }
/* 8f261a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f2620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f2628: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f262b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f262c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f262d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f262e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8f2631: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 8f2634: mov esi, ecx */
  esi = ecx;
/* 8f2636: mov ecx, dword ptr [eax + 0xbc] */
  ecx = R32((uint32_t)(eax + 0xbcu));
/* 8f263c: lea edx, [ecx*8 - 0x51] */
  edx = (uint32_t)(ecx*8 + 0xffffffafu);
/* 8f2643: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f2646: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f2647: mov ecx, esi */
  ecx = esi;
/* 8f2649: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8f264c: call dword ptr [0xcfac78] */
  esp -= 4; W32(esp, 0x8f2652u); SPILL(); f_4e149c(); if (g_unwind) return; /* Core!??0FBitWriter@@QAE@H@Z */ RELOAD();
/* 8f2652: mov dword ptr [esi], 0xa06958 */
  W32((uint32_t)(esi), 0xa06958u);
/* 8f2658: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* 8f265b: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 8f265e: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 8f2661: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 8f2664: mov cl, byte ptr [ebp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 8f2667: xor eax, eax */
  eax = 0;
/* 8f2669: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 8f266c: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 8f266f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8f2672: mov byte ptr [esi + 0x78], al */
  W8((uint32_t)(esi + 0x78u), (eax & 0xffu));
/* 8f2675: mov byte ptr [esi + 0x7a], al */
  W8((uint32_t)(esi + 0x7au), (eax & 0xffu));
/* 8f2678: mov eax, edi */
  eax = edi;
/* 8f267a: mov byte ptr [esi + 0x79], cl */
  W8((uint32_t)(esi + 0x79u), (ecx & 0xffu));
/* 8f267d: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 8f2680: add edx, 0x7f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f2683: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f2685: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f2689: jl 0x8f2693 */
  if ((sf != of)) goto L_8f2693;
L_8f268b: /* 8f268b: mov ecx, esi */
  ecx = esi;
/* 8f268d: call dword ptr [0xcfac7c] */
  esp -= 4; W32(esp, 0x8f2693u); SPILL(); f_4e2130(); if (g_unwind) return; /* Core!?SetOverflowed@FBitWriter@@QAEXXZ */ RELOAD();
L_8f2693: /* 8f2693: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f2696: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2697: mov eax, esi */
  eax = esi;
/* 8f2699: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f269a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f26a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f26a2: mov esp, ebp */
  esp = ebp;
/* 8f26a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f26a5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f26a8(void) {
  LOAD_REGS();
L_8f26a8: /* 8f26a8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f26ab: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f26b0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f26b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f26b4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f26b7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f26bcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f26bc(); return;
}

void f_8f26bc(void) {
  LOAD_REGS();
L_8f26bc: /* 8f26bc: push 0xa1e818 */
  { uint32_t v = 0xa1e818u; esp -= 4; W32(esp, v); }
/* 8f26c1: push 0xaee478 */
  { uint32_t v = 0xaee478u; esp -= 4; W32(esp, v); }
/* 8f26c6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f26ccu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f26cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f26cf: xor eax, eax */
  eax = 0;
/* 8f26d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f26d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f26d3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f26d8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f26d8: guest_badaddr(0x8f26d8); return;
}

void f_8f2720(void) {
  LOAD_REGS();
L_8f2720: /* 8f2720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f2721: mov ebp, esp */
  ebp = esp;
/* 8f2723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f2725: push 0x9d9070 */
  { uint32_t v = 0x9d9070u; esp -= 4; W32(esp, v); }
/* 8f272a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f2730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f2738: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f273b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f273c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f273d: mov esi, ecx */
  esi = ecx;
/* 8f273f: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 8f2742: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f2745: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f2748: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f274e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f2750: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f2751: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f2754: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2755: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2756: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f275d: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8f2760u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2760: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f2763: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2764: mov eax, esi */
  eax = esi;
/* 8f2766: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2767: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f276e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f276f: mov esp, ebp */
  esp = ebp;
/* 8f2771: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2772: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f2775(void) {
  LOAD_REGS();
L_8f2775: /* 8f2775: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f2778: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f277d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f2780: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f2781: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f2784: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2789u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f2789(); return;
}

void f_8f2789(void) {
  LOAD_REGS();
L_8f2789: /* 8f2789: push 0xa1e84c */
  { uint32_t v = 0xa1e84cu; esp -= 4; W32(esp, v); }
/* 8f278e: push 0xaee480 */
  { uint32_t v = 0xaee480u; esp -= 4; W32(esp, v); }
/* 8f2793: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f2799u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f2799: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f279c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f279e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f27a0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f27a5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f27a5: guest_badaddr(0x8f27a5); return;
}

void f_8f27e0(void) {
  LOAD_REGS();
L_8f27e0: /* 8f27e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f27e1: mov ebp, esp */
  ebp = esp;
/* 8f27e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f27e5: push 0x9d9080 */
  { uint32_t v = 0x9d9080u; esp -= 4; W32(esp, v); }
/* 8f27ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f27f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f27f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f27f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f27fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f27fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f27fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f27fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f2801: mov esi, ecx */
  esi = ecx;
/* 8f2803: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f280a: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x8f2810u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 8f2810: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8f2813: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f2816: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8f2819: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8f281f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f2821: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f2822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2824: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x8f2827u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2827: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f282a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f282b: mov eax, esi */
  eax = esi;
/* 8f282d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f282e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f2835: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f2836: mov esp, ebp */
  esp = ebp;
/* 8f2838: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2839: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f283c(void) {
  LOAD_REGS();
L_8f283c: /* 8f283c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f283f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f2844: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f2847: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2848: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f284b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2850u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f2850(); return;
}

void f_8f2850(void) {
  LOAD_REGS();
L_8f2850: /* 8f2850: push 0xa1e874 */
  { uint32_t v = 0xa1e874u; esp -= 4; W32(esp, v); }
/* 8f2855: push 0xaee488 */
  { uint32_t v = 0xaee488u; esp -= 4; W32(esp, v); }
/* 8f285a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f2860u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f2860: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2863: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2865: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2867: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f286cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f286c: guest_badaddr(0x8f286c); return;
}

void f_8f28a0(void) {
  LOAD_REGS();
L_8f28a0: /* 8f28a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f28a1: mov ebp, esp */
  ebp = esp;
/* 8f28a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f28a5: push 0x9d9090 */
  { uint32_t v = 0x9d9090u; esp -= 4; W32(esp, v); }
/* 8f28aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f28b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f28b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f28b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f28bb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f28be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f28bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f28c0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8f28c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f28c4: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
/* 8f28ca: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f28cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f28ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f28cf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f28d6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f28d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f28d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f28db: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8f28de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f28df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f28e0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f28e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f28e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f28e5: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8f28e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f28e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f28ea: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f28ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f28ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f28ef: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f28f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f28f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f28f4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f28f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f28f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f28f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f28fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f28fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f28fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f2905: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f2906: mov esp, ebp */
  esp = ebp;
/* 8f2908: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2909: ret  */
  esp += 4; SPILL(); return;
}

void f_8f290a(void) {
  LOAD_REGS();
L_8f290a: /* 8f290a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f290d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f2912: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f2915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2916: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f2919: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f291eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f291e(); return;
}

void f_8f291e(void) {
  LOAD_REGS();
L_8f291e: /* 8f291e: push 0xa1e8a4 */
  { uint32_t v = 0xa1e8a4u; esp -= 4; W32(esp, v); }
/* 8f2923: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8f2928: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f292eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f292e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2931: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2933: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2935: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f293au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f293a: guest_badaddr(0x8f293a); return;
}

void f_8f2970(void) {
  LOAD_REGS();
L_8f2970: /* 8f2970: mov eax, ecx */
  eax = ecx;
/* 8f2972: mov dword ptr [eax], 0xffffffff */
  W32((uint32_t)(eax), 0xffffffffu);
/* 8f2978: mov dword ptr [eax + 4], 0xffffffff */
  W32((uint32_t)(eax + 0x4u), 0xffffffffu);
/* 8f297f: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2990(void) {
  LOAD_REGS();
L_8f2990: /* 8f2990: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f2993: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f2995: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8f2998: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 8f299b: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8f299e: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8f29a1: sar edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8f29a4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f29a6: mov byte ptr [esp + 3], al */
  W8((uint32_t)(esp + 0x3u), (eax & 0xffu));
/* 8f29aa: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8f29ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f29ae: mov byte ptr [esp + 4], al */
  W8((uint32_t)(esp + 0x4u), (eax & 0xffu));
/* 8f29b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f29b4: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 8f29b8: mov byte ptr [esp + 0xa], cl */
  W8((uint32_t)(esp + 0xau), (ecx & 0xffu));
/* 8f29bc: mov byte ptr [esp + 9], dl */
  W8((uint32_t)(esp + 0x9u), (edx & 0xffu));
/* 8f29c0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f29c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f29c3: mov ecx, esi */
  ecx = esi;
/* 8f29c5: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8f29c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f29c8: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 8f29cc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f29ce: mov ebp, dword ptr [0xcfa1b8] */
  ebp = R32((uint32_t)(0xcfa1b8u));
/* 8f29d4: je 0x8f29e3 */
  if (zf) goto L_8f29e3;
L_8f29d6: /* 8f29d6: lea ecx, [esp + 7] */
  ecx = (uint32_t)(esp + 0x7u);
/* 8f29da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f29db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f29dc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8f29deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f29de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f29e1: jmp 0x8f29e8 */
  goto L_8f29e8;
L_8f29e3: /* 8f29e3: mov byte ptr [esp + 7], 0 */
  W8((uint32_t)(esp + 0x7u), 0x0u);
L_8f29e8: /* 8f29e8: mov dl, byte ptr [esp + 6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x6u))) & 0xffu);
/* 8f29ec: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f29ee: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f29f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f29f2: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 8f29f6: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8f29f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f29fa: mov ecx, esi */
  ecx = esi;
/* 8f29fc: mov byte ptr [esp + 0xc], dl */
  W8((uint32_t)(esp + 0xcu), (edx & 0xffu));
/* 8f2a00: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x8f2a03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2a03: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 8f2a07: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2a09: je 0x8f2a18 */
  if (zf) goto L_8f2a18;
L_8f2a0b: /* 8f2a0b: lea edx, [esp + 6] */
  edx = (uint32_t)(esp + 0x6u);
/* 8f2a0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f2a10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2a11: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8f2a13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2a13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2a16: jmp 0x8f2a1d */
  goto L_8f2a1d;
L_8f2a18: /* 8f2a18: mov byte ptr [esp + 6], 0 */
  W8((uint32_t)(esp + 0x6u), 0x0u);
L_8f2a1d: /* 8f2a1d: mov cl, byte ptr [esp + 5] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5u))) & 0xffu);
/* 8f2a21: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f2a23: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2a25: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8f2a28: mov byte ptr [esp + 4], al */
  W8((uint32_t)(esp + 0x4u), (eax & 0xffu));
/* 8f2a2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f2a2e: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 8f2a32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2a33: mov ecx, esi */
  ecx = esi;
/* 8f2a35: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8f2a38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2a38: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 8f2a3c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2a3e: je 0x8f2a4d */
  if (zf) goto L_8f2a4d;
L_8f2a40: /* 8f2a40: lea ecx, [esp + 5] */
  ecx = (uint32_t)(esp + 0x5u);
/* 8f2a44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2a45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2a46: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8f2a48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2a48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2a4b: jmp 0x8f2a52 */
  goto L_8f2a52;
L_8f2a4d: /* 8f2a4d: mov byte ptr [esp + 5], 0 */
  W8((uint32_t)(esp + 0x5u), 0x0u);
L_8f2a52: /* 8f2a52: mov ecx, esi */
  ecx = esi;
/* 8f2a54: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8f2a5au); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8f2a5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2a5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2a5d: je 0x8f2a8e */
  if (zf) goto L_8f2a8e;
L_8f2a5f: /* 8f2a5f: xor edx, edx */
  edx = 0;
/* 8f2a61: mov dh, byte ptr [esp + 1] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0x1u))) & 0xffu) << 8);
/* 8f2a65: xor eax, eax */
  eax = 0;
/* 8f2a67: mov ah, byte ptr [esp + 2] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0x2u))) & 0xffu) << 8);
/* 8f2a6b: xor ecx, ecx */
  ecx = 0;
/* 8f2a6d: mov ch, byte ptr [esp + 3] */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu) << 8);
/* 8f2a71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f2a72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2a73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2a74: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8f2a78: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x8f2a7eu); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 8f2a7e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8f2a80: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8f2a82: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8f2a85: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 8f2a88: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8f2a8b: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
L_8f2a8e: /* 8f2a8e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2a91: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2af0(void) {
  LOAD_REGS();
L_8f2af0: /* 8f2af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2af1: mov esi, ecx */
  esi = ecx;
/* 8f2af3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x8f2af9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 8f2af9: mov dword ptr [esi], 0xa06b78 */
  W32((uint32_t)(esi), 0xa06b78u);
/* 8f2aff: mov eax, esi */
  eax = esi;
/* 8f2b01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2b02: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2b20(void) {
  LOAD_REGS();
L_8f2b20: /* 8f2b20: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8f2b24: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8f2b28: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 8f2b2b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8f2b2f: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 8f2b32: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 8f2b35: mov dword ptr [ecx + 0x3c], 0xffffffff */
  W32((uint32_t)(ecx + 0x3cu), 0xffffffffu);
/* 8f2b3c: mov eax, dword ptr [eax + 0xcc] */
  eax = R32((uint32_t)(eax + 0xccu));
/* 8f2b42: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 8f2b45: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8f2b60(void) {
  LOAD_REGS();
L_8f2b60: /* 8f2b60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f2b61: mov ebp, esp */
  ebp = esp;
/* 8f2b63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f2b65: push 0x9d90a0 */
  { uint32_t v = 0x9d90a0u; esp -= 4; W32(esp, v); }
/* 8f2b6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f2b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2b71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f2b78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f2b7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f2b7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2b7d: mov esi, ecx */
  esi = ecx;
/* 8f2b7f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f2b82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2b84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f2b85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f2b88: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f2b8f: je 0x8f2bd8 */
  if (zf) goto L_8f2bd8;
L_8f2b91: /* 8f2b91: call dword ptr [0xcfac80] */
  esp -= 4; W32(esp, 0x8f2b97u); SPILL(); f_4e331e(); if (g_unwind) return; /* Core!?GetFlags@UObject@@QBEKXZ */ RELOAD();
/* 8f2b97: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2b99: je 0x8f2bd8 */
  if (zf) goto L_8f2bd8;
L_8f2b9b: /* 8f2b9b: push 0x800000 */
  { uint32_t v = 0x800000u; esp -= 4; W32(esp, v); }
/* 8f2ba0: mov ecx, esi */
  ecx = esi;
/* 8f2ba2: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x8f2ba8u); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
/* 8f2ba8: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f2bab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x8f2bb1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 8f2bb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2bb3: je 0x8f2bcb */
  if (zf) goto L_8f2bcb;
L_8f2bb5: /* 8f2bb5: mov eax, 1 */
  eax = 0x1u;
/* 8f2bba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f2bbd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f2bc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2bc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2bc6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f2bc7: mov esp, ebp */
  esp = ebp;
/* 8f2bc9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2bca: ret  */
  esp += 4; SPILL(); return;
L_8f2bcb: /* 8f2bcb: push 0x800000 */
  { uint32_t v = 0x800000u; esp -= 4; W32(esp, v); }
/* 8f2bd0: mov ecx, esi */
  ecx = esi;
/* 8f2bd2: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x8f2bd8u); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
L_8f2bd8: /* 8f2bd8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f2bdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2bdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2bdd: xor eax, eax */
  eax = 0;
/* 8f2bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f2be6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f2be7: mov esp, ebp */
  esp = ebp;
/* 8f2be9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2bea: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2beb(void) {
  LOAD_REGS();
L_8f2beb: /* 8f2beb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f2bee: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f2bf3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f2bf6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2bf7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f2bfa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2bffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f2bff(); return;
}

void f_8f2bff(void) {
  LOAD_REGS();
L_8f2bff: /* 8f2bff: push 0xa1e8b8 */
  { uint32_t v = 0xa1e8b8u; esp -= 4; W32(esp, v); }
/* 8f2c04: push 0xaee4a0 */
  { uint32_t v = 0xaee4a0u; esp -= 4; W32(esp, v); }
/* 8f2c09: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f2c0fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f2c0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2c12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2c14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2c16: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2c1bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f2c1b: guest_badaddr(0x8f2c1b); return;
}

void f_8f2c50(void) {
  LOAD_REGS();
L_8f2c50: /* 8f2c50: mov dword ptr [ecx + 0x30], 1 */
  W32((uint32_t)(ecx + 0x30u), 0x1u);
/* 8f2c57: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2c70(void) {
  LOAD_REGS();
L_8f2c70: /* 8f2c70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f2c71: mov ebp, esp */
  ebp = esp;
/* 8f2c73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f2c75: push 0x9d90b0 */
  { uint32_t v = 0x9d90b0u; esp -= 4; W32(esp, v); }
/* 8f2c7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f2c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2c81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f2c88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f2c8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f2c8c: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8f2c92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2c93: mov esi, ecx */
  esi = ecx;
/* 8f2c95: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 8f2c98: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f2c9b: cmp dword ptr [ecx + eax*4 + 0xeb4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xeb4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f2ca2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f2ca3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f2ca6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f2cad: je 0x8f2cc3 */
  if (zf) goto L_8f2cc3;
L_8f2caf: /* 8f2caf: push 0xaa */
  { uint32_t v = 0xaau; esp -= 4; W32(esp, v); }
/* 8f2cb4: push 0xaee5b8 */
  { uint32_t v = 0xaee5b8u; esp -= 4; W32(esp, v); }
/* 8f2cb9: push 0xaee5c4 */
  { uint32_t v = 0xaee5c4u; esp -= 4; W32(esp, v); }
/* 8f2cbe: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f2cc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2cc0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f2cc3: /* 8f2cc3: mov edi, dword ptr [esi + 0x58] */
  edi = R32((uint32_t)(esi + 0x58u));
L_8f2cc6: /* 8f2cc6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2cc8: je 0x8f2cf2 */
  if (zf) goto L_8f2cf2;
L_8f2cca: /* 8f2cca: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 8f2ccd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2ccf: je 0x8f2cf2 */
  if (zf) goto L_8f2cf2;
L_8f2cd1: /* 8f2cd1: mov edx, dword ptr [eax + 0x70] */
  edx = R32((uint32_t)(eax + 0x70u));
/* 8f2cd4: cmp edx, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f2cd7: jg 0x8f2ced */
  if ((!zf && sf == of)) goto L_8f2ced;
L_8f2cd9: /* 8f2cd9: push 0xae */
  { uint32_t v = 0xaeu; esp -= 4; W32(esp, v); }
/* 8f2cde: push 0xaee5e8 */
  { uint32_t v = 0xaee5e8u; esp -= 4; W32(esp, v); }
/* 8f2ce3: push 0xaee5f4 */
  { uint32_t v = 0xaee5f4u; esp -= 4; W32(esp, v); }
/* 8f2ce8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f2ceau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2cea: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f2ced: /* 8f2ced: mov edi, dword ptr [edi + 0x54] */
  edi = R32((uint32_t)(edi + 0x54u));
/* 8f2cf0: jmp 0x8f2cc6 */
  goto L_8f2cc6;
L_8f2cf2: /* 8f2cf2: xor edi, edi */
  edi = 0;
L_8f2cf4: /* 8f2cf4: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8f2cf7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2cf9: je 0x8f2d1d */
  if (zf) goto L_8f2d1d;
L_8f2cfb: /* 8f2cfb: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* 8f2cfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2d00: je 0x8f2d1d */
  if (zf) goto L_8f2d1d;
L_8f2d02: /* 8f2d02: movzx eax, byte ptr [ecx + 0x79] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x79u)));
/* 8f2d06: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 8f2d09: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8f2d0b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2d0d: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 8f2d10: je 0x8f2d18 */
  if (zf) goto L_8f2d18;
L_8f2d12: /* 8f2d12: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f2d14: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f2d16: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8f2d18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f2d18: /* 8f2d18: dec dword ptr [esi + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x4cu), r);
  }
/* 8f2d1b: jmp 0x8f2cf4 */
  goto L_8f2cf4;
L_8f2d1d: /* 8f2d1d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2d1f: jne 0x8f2d2f */
  if (!zf) goto L_8f2d2f;
L_8f2d21: /* 8f2d21: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8f2d24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2d26: je 0x8f2d53 */
  if (zf) goto L_8f2d53;
L_8f2d28: /* 8f2d28: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 8f2d2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2d2d: je 0x8f2d53 */
  if (zf) goto L_8f2d53;
L_8f2d2f: /* 8f2d2f: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 8f2d32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2d34: je 0x8f2d4a */
  if (zf) goto L_8f2d4a;
L_8f2d36: /* 8f2d36: push 0xbe */
  { uint32_t v = 0xbeu; esp -= 4; W32(esp, v); }
/* 8f2d3b: push 0xaee61c */
  { uint32_t v = 0xaee61cu; esp -= 4; W32(esp, v); }
/* 8f2d40: push 0xaee628 */
  { uint32_t v = 0xaee628u; esp -= 4; W32(esp, v); }
/* 8f2d45: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f2d47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2d47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f2d4a: /* 8f2d4a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f2d4c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f2d4e: mov ecx, esi */
  ecx = esi;
/* 8f2d50: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8f2d53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f2d53: /* 8f2d53: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f2d56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2d57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2d58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f2d5f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f2d60: mov esp, ebp */
  esp = ebp;
/* 8f2d62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2d63: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2d64(void) {
  LOAD_REGS();
L_8f2d64: /* 8f2d64: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f2d67: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f2d6c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f2d6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2d70: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f2d73: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2d78u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f2d78(); return;
}

void f_8f2d78(void) {
  LOAD_REGS();
L_8f2d78: /* 8f2d78: push 0xa1e8f0 */
  { uint32_t v = 0xa1e8f0u; esp -= 4; W32(esp, v); }
/* 8f2d7d: push 0xaee630 */
  { uint32_t v = 0xaee630u; esp -= 4; W32(esp, v); }
/* 8f2d82: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f2d88u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f2d88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2d8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2d8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2d8f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2d94u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f2d94: guest_badaddr(0x8f2d94); return;
}

void f_8f2df0(void) {
  LOAD_REGS();
L_8f2df0: /* 8f2df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f2df1: mov ebp, esp */
  ebp = esp;
/* 8f2df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f2df5: push 0x9d90c0 */
  { uint32_t v = 0x9d90c0u; esp -= 4; W32(esp, v); }
/* 8f2dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f2e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f2e08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f2e0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f2e0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2e0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f2e0e: mov edi, ecx */
  edi = ecx;
/* 8f2e10: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8f2e13: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8f2e16: cmp dword ptr [ecx + eax*4 + 0xeb4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xeb4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f2e1d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f2e20: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f2e27: je 0x8f2e41 */
  if (zf) goto L_8f2e41;
L_8f2e29: /* 8f2e29: push 0xdb */
  { uint32_t v = 0xdbu; esp -= 4; W32(esp, v); }
/* 8f2e2e: push 0xaee640 */
  { uint32_t v = 0xaee640u; esp -= 4; W32(esp, v); }
/* 8f2e33: push 0xaee64c */
  { uint32_t v = 0xaee64cu; esp -= 4; W32(esp, v); }
/* 8f2e38: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f2e3eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f2e3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f2e41: /* 8f2e41: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8f2e44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2e46: jne 0x8f2f06 */
  if (!zf) goto L_8f2f06;
L_8f2e4c: /* 8f2e4c: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8f2e4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2e51: jne 0x8f2f06 */
  if (!zf) goto L_8f2f06;
L_8f2e57: /* 8f2e57: mov esi, dword ptr [edi + 0x58] */
  esi = R32((uint32_t)(edi + 0x58u));
/* 8f2e5a: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
L_8f2e60: /* 8f2e60: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2e62: je 0x8f2f06 */
  if (zf) goto L_8f2f06;
L_8f2e68: /* 8f2e68: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8f2e6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2e6d: jne 0x8f2ed1 */
  if (!zf) goto L_8f2ed1;
L_8f2e6f: /* 8f2e6f: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 8f2e72: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f2e75: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 8f2e78: fsub qword ptr [esi + 0x5c] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x5cu)));
/* 8f2e7b: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8f2e81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8f2e83: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2e86: jne 0x8f2ed1 */
  if (!zf) goto L_8f2ed1;
L_8f2e88: /* 8f2e88: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 8f2e8b: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 8f2e8e: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f2e93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2e94: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f2e96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f2e97: push 0xaee670 */
  { uint32_t v = 0xaee670u; esp -= 4; W32(esp, v); }
/* 8f2e9c: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f2ea1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f2ea2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f2ea4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2ea4: mov al, byte ptr [esi + 0x7a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x7au))) & 0xffu);
/* 8f2ea7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2eaa: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2eac: jne 0x8f2ec6 */
  if (!zf) goto L_8f2ec6;
L_8f2eae: /* 8f2eae: push 0xe8 */
  { uint32_t v = 0xe8u; esp -= 4; W32(esp, v); }
/* 8f2eb3: push 0xaee6c0 */
  { uint32_t v = 0xaee6c0u; esp -= 4; W32(esp, v); }
/* 8f2eb8: push 0xaee6cc */
  { uint32_t v = 0xaee6ccu; esp -= 4; W32(esp, v); }
/* 8f2ebd: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f2ec3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f2ec3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f2ec6: /* 8f2ec6: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8f2ec9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2ecb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2ecc: call 0x6c1ded */
  esp -= 4; W32(esp, 0x8f2ed1u); SPILL(); f_6c1ded(); if (g_unwind) return; RELOAD();
L_8f2ed1: /* 8f2ed1: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 8f2ed4: jmp 0x8f2e60 */
  goto L_8f2e60;
L_8f2f06: /* 8f2f06: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f2f09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2f0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2f0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f2f12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f2f13: mov esp, ebp */
  esp = ebp;
/* 8f2f15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2f16: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2ed6(void) {
  LOAD_REGS();
L_8f2ed6: /* 8f2ed6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f2ed9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f2ede: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f2ee1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2ee2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f2ee5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2eeau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f2eea(); return;
}

void f_8f2eea(void) {
  LOAD_REGS();
L_8f2eea: /* 8f2eea: push 0xa1e928 */
  { uint32_t v = 0xa1e928u; esp -= 4; W32(esp, v); }
/* 8f2eef: push 0xaee6dc */
  { uint32_t v = 0xaee6dcu; esp -= 4; W32(esp, v); }
/* 8f2ef4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f2efau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f2efa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2efd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2eff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2f01: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2f06u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f2f06: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f2f09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f2f0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f2f0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f2f12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f2f13: mov esp, ebp */
  esp = ebp;
/* 8f2f15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f2f16: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2f70(void) {
  LOAD_REGS();
L_8f2f70: /* 8f2f70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f2f71: mov ebp, esp */
  ebp = esp;
/* 8f2f73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f2f75: push 0x9d90d0 */
  { uint32_t v = 0x9d90d0u; esp -= 4; W32(esp, v); }
/* 8f2f7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f2f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f2f81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f2f88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f2f8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f2f8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f2f8d: mov esi, dword ptr [ecx + 0x54] */
  esi = R32((uint32_t)(ecx + 0x54u));
/* 8f2f90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f2f91: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 8f2f97: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f2f9a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_8f2fa1: /* 8f2fa1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2fa3: je 0x8f2ffd */
  if (zf) goto L_8f2ffd;
L_8f2fa5: /* 8f2fa5: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 8f2fa8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f2faa: je 0x8f2ffd */
  if (zf) goto L_8f2ffd;
L_8f2fac: /* 8f2fac: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f2faf: cmp eax, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f2fb2: jg 0x8f2fc8 */
  if ((!zf && sf == of)) goto L_8f2fc8;
L_8f2fb4: /* 8f2fb4: push 0xfa */
  { uint32_t v = 0xfau; esp -= 4; W32(esp, v); }
/* 8f2fb9: push 0xaee6e4 */
  { uint32_t v = 0xaee6e4u; esp -= 4; W32(esp, v); }
/* 8f2fbe: push 0xaee6f0 */
  { uint32_t v = 0xaee6f0u; esp -= 4; W32(esp, v); }
/* 8f2fc3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f2fc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f2fc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f2fc8: /* 8f2fc8: mov esi, dword ptr [esi + 0x58] */
  esi = R32((uint32_t)(esi + 0x58u));
/* 8f2fcb: jmp 0x8f2fa1 */
  goto L_8f2fa1;
L_8f2ffd: /* 8f2ffd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3002: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3009: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f300a: mov esp, ebp */
  esp = ebp;
/* 8f300c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f300d: ret  */
  esp += 4; SPILL(); return;
}

void f_8f2fcd(void) {
  LOAD_REGS();
L_8f2fcd: /* 8f2fcd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f2fd0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f2fd5: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f2fd8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f2fd9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f2fdc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2fe1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f2fe1(); return;
}

void f_8f2fe1(void) {
  LOAD_REGS();
L_8f2fe1: /* 8f2fe1: push 0xa1e94c */
  { uint32_t v = 0xa1e94cu; esp -= 4; W32(esp, v); }
/* 8f2fe6: push 0xaee714 */
  { uint32_t v = 0xaee714u; esp -= 4; W32(esp, v); }
/* 8f2feb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f2ff1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f2ff1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f2ff4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2ff6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f2ff8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f2ffdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f2ffd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3002: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3009: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f300a: mov esp, ebp */
  esp = ebp;
/* 8f300c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f300d: ret  */
  esp += 4; SPILL(); return;
}

void f_8f3040(void) {
  LOAD_REGS();
L_8f3040: /* 8f3040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f3041: mov ebp, esp */
  ebp = esp;
/* 8f3043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f3045: push 0x9d90e0 */
  { uint32_t v = 0x9d90e0u; esp -= 4; W32(esp, v); }
/* 8f304a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f3050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f3058: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f305b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f305c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f305d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f305e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8f3061: mov al, byte ptr [edi + 0x6e] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6eu))) & 0xffu);
/* 8f3064: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3066: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f3069: mov esi, ecx */
  esi = ecx;
/* 8f306b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f3072: je 0x8f3084 */
  if (zf) goto L_8f3084;
L_8f3074: /* 8f3074: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 8f3077: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f307a: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 8f307d: mov dword ptr [ecx + eax*4 + 0x2eac], edx */
  W32((uint32_t)(ecx + eax*4 + 0x2eacu), edx);
L_8f3084: /* 8f3084: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8f3087: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3089: jne 0x8f3093 */
  if (!zf) goto L_8f3093;
L_8f308b: /* 8f308b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f308d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f308e: mov ecx, esi */
  ecx = esi;
/* 8f3090: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8f3093u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f3093: /* 8f3093: mov al, byte ptr [edi + 0x6d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6du))) & 0xffu);
/* 8f3096: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3098: je 0x8f3133 */
  if (zf) goto L_8f3133;
L_8f309e: /* 8f309e: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 8f30a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f30a3: je 0x8f30c3 */
  if (zf) goto L_8f30c3;
L_8f30a5: /* 8f30a5: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f30a8: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 8f30ab: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f30b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f30b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f30b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f30b4: push 0xaee71c */
  { uint32_t v = 0xaee71cu; esp -= 4; W32(esp, v); }
/* 8f30b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f30ba: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f30c0u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f30c0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f30c3: /* 8f30c3: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 8f30c6: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8f30cb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f30cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f30ce: push 0xaee748 */
  { uint32_t v = 0xaee748u; esp -= 4; W32(esp, v); }
/* 8f30d3: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f30d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f30d9: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f30dfu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f30df: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f30e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f30e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f30e6: mov ecx, esi */
  ecx = esi;
/* 8f30e8: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8f30ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f30eb: mov eax, 1 */
  eax = 0x1u;
/* 8f30f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f30f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f30fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f30fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f30fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f30fd: mov esp, ebp */
  esp = ebp;
/* 8f30ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3100: ret 4 */
  esp += 8; SPILL(); return;
L_8f3133: /* 8f3133: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3136: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3137: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3138: xor eax, eax */
  eax = 0;
/* 8f313a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3141: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3142: mov esp, ebp */
  esp = ebp;
/* 8f3144: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3145: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f3103(void) {
  LOAD_REGS();
L_8f3103: /* 8f3103: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f3106: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f310b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f310e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f310f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f3112: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3117u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f3117(); return;
}

void f_8f3117(void) {
  LOAD_REGS();
L_8f3117: /* 8f3117: push 0xa1e990 */
  { uint32_t v = 0xa1e990u; esp -= 4; W32(esp, v); }
/* 8f311c: push 0xaee78c */
  { uint32_t v = 0xaee78cu; esp -= 4; W32(esp, v); }
/* 8f3121: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3127u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3127: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f312a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f312c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f312e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3133u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f3133: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3136: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3137: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3138: xor eax, eax */
  eax = 0;
/* 8f313a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3141: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3142: mov esp, ebp */
  esp = ebp;
/* 8f3144: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3145: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f31a0(void) {
  LOAD_REGS();
L_8f31a0: /* 8f31a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f31a1: mov ebp, esp */
  ebp = esp;
/* 8f31a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f31a5: push 0x9d90f0 */
  { uint32_t v = 0x9d90f0u; esp -= 4; W32(esp, v); }
/* 8f31aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f31b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f31b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f31b8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f31bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f31bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f31bd: mov esi, ecx */
  esi = ecx;
/* 8f31bf: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 8f31c2: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f31c5: mov edx, dword ptr [ecx + eax*4 + 0xeb4] */
  edx = R32((uint32_t)(ecx + eax*4 + 0xeb4u));
/* 8f31cc: xor ebx, ebx */
  ebx = 0;
/* 8f31ce: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f31d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f31d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f31d4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f31d7: je 0x8f31f1 */
  if (zf) goto L_8f31f1;
L_8f31d9: /* 8f31d9: push 0x123 */
  { uint32_t v = 0x123u; esp -= 4; W32(esp, v); }
/* 8f31de: push 0xaee794 */
  { uint32_t v = 0xaee794u; esp -= 4; W32(esp, v); }
/* 8f31e3: push 0xaee7a0 */
  { uint32_t v = 0xaee7a0u; esp -= 4; W32(esp, v); }
/* 8f31e8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f31eeu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f31ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f31f1: /* 8f31f1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8f31f4: mov al, byte ptr [edi + 0x6e] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6eu))) & 0xffu);
/* 8f31f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f31f9: je 0x8f3315 */
  if (zf) goto L_8f3315;
L_8f31ff: /* 8f31ff: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f3202: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 8f3205: mov ecx, dword ptr [eax + edx*4 + 0x2eac] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x2eacu));
/* 8f320c: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8f320f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f3210: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f3212: je 0x8f3315 */
  if (zf) goto L_8f3315;
L_8f3218: /* 8f3218: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f321b: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8f321e: cmp ecx, dword ptr [eax + edx*4 + 0x2eac] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx*4 + 0x2eacu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f3225: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f3229: jg 0x8f3243 */
  if ((!zf && sf == of)) goto L_8f3243;
L_8f322b: /* 8f322b: push 0x12d */
  { uint32_t v = 0x12du; esp -= 4; W32(esp, v); }
/* 8f3230: push 0xaee7c4 */
  { uint32_t v = 0xaee7c4u; esp -= 4; W32(esp, v); }
/* 8f3235: push 0xaee7d0 */
  { uint32_t v = 0xaee7d0u; esp -= 4; W32(esp, v); }
/* 8f323a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f3240u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f3240: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f3243: /* 8f3243: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8f3249: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f324b: push 0xaee808 */
  { uint32_t v = 0xaee808u; esp -= 4; W32(esp, v); }
/* 8f3250: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f3255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3256: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f325cu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f325c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f325f: lea ebx, [esi + 0x54] */
  ebx = (uint32_t)(esi + 0x54u);
L_8f3262: /* 8f3262: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8f3264: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3266: je 0x8f3279 */
  if (zf) goto L_8f3279;
L_8f3268: /* 8f3268: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8f326b: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f326e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f3270: je 0x8f32d2 */
  if (zf) goto L_8f32d2;
L_8f3272: /* 8f3272: jl 0x8f3279 */
  if ((sf != of)) goto L_8f3279;
L_8f3274: /* 8f3274: lea ebx, [eax + 0x58] */
  ebx = (uint32_t)(eax + 0x58u);
/* 8f3277: jmp 0x8f3262 */
  goto L_8f3262;
L_8f3279: /* 8f3279: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8f327f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8f3281: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f3283: push 0xaee868 */
  { uint32_t v = 0xaee868u; esp -= 4; W32(esp, v); }
/* 8f3288: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8f328a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8f328cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f328c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f328e: je 0x8f329a */
  if (zf) goto L_8f329a;
L_8f3290: /* 8f3290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3291: mov ecx, eax */
  ecx = eax;
/* 8f3293: call 0x6cbbe5 */
  esp -= 4; W32(esp, 0x8f3298u); SPILL(); f_6cbbe5(); if (g_unwind) return; RELOAD();
/* 8f3298: jmp 0x8f329c */
  goto L_8f329c;
L_8f329a: /* 8f329a: xor eax, eax */
  eax = 0;
L_8f329c: /* 8f329c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8f329e: mov dword ptr [eax + 0x58], ecx */
  W32((uint32_t)(eax + 0x58u), ecx);
/* 8f32a1: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 8f32a3: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 8f32a6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f32a7: mov eax, ecx */
  eax = ecx;
/* 8f32a9: cmp eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f32ae: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 8f32b1: jle 0x8f32cb */
  if ((zf || sf != of)) goto L_8f32cb;
L_8f32b3: /* 8f32b3: push 0x143 */
  { uint32_t v = 0x143u; esp -= 4; W32(esp, v); }
/* 8f32b8: push 0xaee87c */
  { uint32_t v = 0xaee87cu; esp -= 4; W32(esp, v); }
/* 8f32bd: push 0xaee888 */
  { uint32_t v = 0xaee888u; esp -= 4; W32(esp, v); }
/* 8f32c2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f32c8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f32c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f32cb: /* 8f32cb: mov ecx, esi */
  ecx = esi;
/* 8f32cd: call 0x6c79e6 */
  esp -= 4; W32(esp, 0x8f32d2u); SPILL(); f_6c79e6(); if (g_unwind) return; RELOAD();
L_8f32d2: /* 8f32d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f32d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f32d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f32d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f32de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f32df: mov esp, ebp */
  esp = ebp;
/* 8f32e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f32e2: ret 4 */
  esp += 8; SPILL(); return;
L_8f3315: /* 8f3315: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3316: mov ecx, esi */
  ecx = esi;
/* 8f3318: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f331c: call 0x6c4444 */
  esp -= 4; W32(esp, 0x8f3321u); SPILL(); f_6c4444(); if (g_unwind) return; RELOAD();
/* 8f3321: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f3323: jne 0x8f32d2 */
  if (!zf) goto L_8f32d2;
L_8f3325: /* 8f3325: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f3328: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f332c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f3330: /* 8f3330: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 8f3333: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3335: je 0x8f32d2 */
  if (zf) goto L_8f32d2;
L_8f3337: /* 8f3337: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8f333a: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 8f333d: mov ecx, dword ptr [edx + ecx*4 + 0x2eac] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x2eacu));
/* 8f3344: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f3347: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f3348: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f334a: jne 0x8f32d2 */
  if (!zf) goto L_8f32d2;
L_8f334c: /* 8f334c: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8f3352: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f3354: push 0xaee8b4 */
  { uint32_t v = 0xaee8b4u; esp -= 4; W32(esp, v); }
/* 8f3359: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f335e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f335f: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f3365u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f3365: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 8f3368: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 8f336b: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 8f336e: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 8f3371: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3374: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8f3375: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 8f3378: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3379: mov ecx, esi */
  ecx = esi;
/* 8f337b: call 0x6c4444 */
  esp -= 4; W32(esp, 0x8f3380u); SPILL(); f_6c4444(); if (g_unwind) return; RELOAD();
/* 8f3380: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3382: mov ebx, eax */
  ebx = eax;
/* 8f3384: je 0x8f338e */
  if (zf) goto L_8f338e;
L_8f3386: /* 8f3386: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f3388: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f338a: mov ecx, edi */
  ecx = edi;
/* 8f338c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8f338eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f338e: /* 8f338e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3390: jne 0x8f32d2 */
  if (!zf) goto L_8f32d2;
L_8f3396: /* 8f3396: mov ecx, esi */
  ecx = esi;
/* 8f3398: call 0x6c79e6 */
  esp -= 4; W32(esp, 0x8f339du); SPILL(); f_6c79e6(); if (g_unwind) return; RELOAD();
/* 8f339d: jmp 0x8f3330 */
  goto L_8f3330;
}

void f_8f32e5(void) {
  LOAD_REGS();
L_8f32e5: /* 8f32e5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f32e8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f32ed: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f32f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f32f1: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f32f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f32f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f32f9(); return;
}

void f_8f32f9(void) {
  LOAD_REGS();
  goto L_8f32f9;
L_8f32d2: /* 8f32d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f32d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f32d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f32d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f32de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f32df: mov esp, ebp */
  esp = ebp;
/* 8f32e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f32e2: ret 4 */
  esp += 8; SPILL(); return;
L_8f32f9: /* 8f32f9: push 0xa1ea54 */
  { uint32_t v = 0xa1ea54u; esp -= 4; W32(esp, v); }
/* 8f32fe: push 0xaee8a4 */
  { uint32_t v = 0xaee8a4u; esp -= 4; W32(esp, v); }
/* 8f3303: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3309u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3309: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f330c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f330e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3310: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3315u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f3315: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3316: mov ecx, esi */
  ecx = esi;
/* 8f3318: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f331c: call 0x6c4444 */
  esp -= 4; W32(esp, 0x8f3321u); SPILL(); f_6c4444(); if (g_unwind) return; RELOAD();
/* 8f3321: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f3323: jne 0x8f32d2 */
  if (!zf) goto L_8f32d2;
L_8f3325: /* 8f3325: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f3328: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f332c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f3330: /* 8f3330: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 8f3333: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3335: je 0x8f32d2 */
  if (zf) goto L_8f32d2;
L_8f3337: /* 8f3337: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8f333a: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 8f333d: mov ecx, dword ptr [edx + ecx*4 + 0x2eac] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x2eacu));
/* 8f3344: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f3347: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f3348: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f334a: jne 0x8f32d2 */
  if (!zf) goto L_8f32d2;
L_8f334c: /* 8f334c: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8f3352: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f3354: push 0xaee8b4 */
  { uint32_t v = 0xaee8b4u; esp -= 4; W32(esp, v); }
/* 8f3359: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f335e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f335f: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f3365u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f3365: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 8f3368: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 8f336b: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 8f336e: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 8f3371: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3374: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8f3375: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 8f3378: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3379: mov ecx, esi */
  ecx = esi;
/* 8f337b: call 0x6c4444 */
  esp -= 4; W32(esp, 0x8f3380u); SPILL(); f_6c4444(); if (g_unwind) return; RELOAD();
/* 8f3380: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3382: mov ebx, eax */
  ebx = eax;
/* 8f3384: je 0x8f338e */
  if (zf) goto L_8f338e;
L_8f3386: /* 8f3386: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f3388: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f338a: mov ecx, edi */
  ecx = edi;
/* 8f338c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8f338eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f338e: /* 8f338e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3390: jne 0x8f32d2 */
  if (!zf) goto L_8f32d2;
L_8f3396: /* 8f3396: mov ecx, esi */
  ecx = esi;
/* 8f3398: call 0x6c79e6 */
  esp -= 4; W32(esp, 0x8f339du); SPILL(); f_6c79e6(); if (g_unwind) return; RELOAD();
/* 8f339d: jmp 0x8f3330 */
  goto L_8f3330;
}

void f_8f339f(void) {
  LOAD_REGS();
L_8f339f: /* 8f339f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f33a2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f33a7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8f33aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f33ab: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f33ae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f33b3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f33b3(); return;
}

void f_8f33b3(void) {
  LOAD_REGS();
L_8f33b3: /* 8f33b3: push 0xa1ea30 */
  { uint32_t v = 0xa1ea30u; esp -= 4; W32(esp, v); }
/* 8f33b8: push 0xaee8f0 */
  { uint32_t v = 0xaee8f0u; esp -= 4; W32(esp, v); }
/* 8f33bd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f33c3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f33c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f33c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f33c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f33ca: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f33cfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f33cf(); return;
}

void f_8f33cf(void) {
  LOAD_REGS();
L_8f33cf: /* 8f33cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f33d2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f33d7: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f33da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f33db: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8f33de: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f33e3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f33e3(); return;
}

void f_8f33e3(void) {
  LOAD_REGS();
L_8f33e3: /* 8f33e3: push 0xa1ea20 */
  { uint32_t v = 0xa1ea20u; esp -= 4; W32(esp, v); }
/* 8f33e8: push 0xaee8ac */
  { uint32_t v = 0xaee8acu; esp -= 4; W32(esp, v); }
/* 8f33ed: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f33f3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f33f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f33f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f33f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f33fa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f33ffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f33ff(); return;
}

void f_8f33ff(void) {
  LOAD_REGS();
L_8f33ff: /* 8f33ff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f3402: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f3407: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f340a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f340b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8f340e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3413u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f3413(); return;
}

void f_8f3413(void) {
  LOAD_REGS();
L_8f3413: /* 8f3413: push 0xa1e9e0 */
  { uint32_t v = 0xa1e9e0u; esp -= 4; W32(esp, v); }
/* 8f3418: push 0xaee8f8 */
  { uint32_t v = 0xaee8f8u; esp -= 4; W32(esp, v); }
/* 8f341d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3423u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3423: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3426: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3428: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f342a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f342fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f342f: guest_badaddr(0x8f342f); return;
}

void f_8f34e0(void) {
  LOAD_REGS();
L_8f34e0: /* 8f34e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f34e1: mov ebp, esp */
  ebp = esp;
/* 8f34e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f34e5: push 0x9d9100 */
  { uint32_t v = 0x9d9100u; esp -= 4; W32(esp, v); }
/* 8f34ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f34f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f34f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f34f8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f34fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f34fc: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8f3502: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3503: mov esi, ecx */
  esi = ecx;
/* 8f3505: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8f3508: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f350a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f350b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f350e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f3515: je 0x8f352b */
  if (zf) goto L_8f352b;
L_8f3517: /* 8f3517: push 0x16b */
  { uint32_t v = 0x16bu; esp -= 4; W32(esp, v); }
/* 8f351c: push 0xaee900 */
  { uint32_t v = 0xaee900u; esp -= 4; W32(esp, v); }
/* 8f3521: push 0xaee90c */
  { uint32_t v = 0xaee90cu; esp -= 4; W32(esp, v); }
/* 8f3526: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f3528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f3528: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f352b: /* 8f352b: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 8f352e: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f3531: cmp dword ptr [ecx + eax*4 + 0xeb4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xeb4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f3538: je 0x8f354e */
  if (zf) goto L_8f354e;
L_8f353a: /* 8f353a: push 0x16c */
  { uint32_t v = 0x16cu; esp -= 4; W32(esp, v); }
/* 8f353f: push 0xaee918 */
  { uint32_t v = 0xaee918u; esp -= 4; W32(esp, v); }
/* 8f3544: push 0xaee924 */
  { uint32_t v = 0xaee924u; esp -= 4; W32(esp, v); }
/* 8f3549: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f354bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f354b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f354e: /* 8f354e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8f3551: mov ecx, edi */
  ecx = edi;
/* 8f3553: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f3559u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f3559: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f355b: je 0x8f3571 */
  if (zf) goto L_8f3571;
L_8f355d: /* 8f355d: push 0x16d */
  { uint32_t v = 0x16du; esp -= 4; W32(esp, v); }
/* 8f3562: push 0xaee948 */
  { uint32_t v = 0xaee948u; esp -= 4; W32(esp, v); }
/* 8f3567: push 0xaee954 */
  { uint32_t v = 0xaee954u; esp -= 4; W32(esp, v); }
/* 8f356c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f356eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f356e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f3571: /* 8f3571: cmp dword ptr [esi + 0x3c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f3575: jne 0x8f358f */
  if (!zf) goto L_8f358f;
L_8f3577: /* 8f3577: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8f357a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f357c: je 0x8f358f */
  if (zf) goto L_8f358f;
L_8f357e: /* 8f357e: mov al, byte ptr [edi + 0x7a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7au))) & 0xffu);
/* 8f3581: xor edx, edx */
  edx = 0;
/* 8f3583: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3585: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8f3588: mov byte ptr [edi + 0x78], 1 */
  W8((uint32_t)(edi + 0x78u), 0x1u);
/* 8f358c: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
L_8f358f: /* 8f358f: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8f3592: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3594: je 0x8f35b1 */
  if (zf) goto L_8f35b1;
L_8f3596: /* 8f3596: mov al, byte ptr [edi + 0x7a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7au))) & 0xffu);
/* 8f3599: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f359b: je 0x8f35b1 */
  if (zf) goto L_8f35b1;
L_8f359d: /* 8f359d: push 0x178 */
  { uint32_t v = 0x178u; esp -= 4; W32(esp, v); }
/* 8f35a2: push 0xaee968 */
  { uint32_t v = 0xaee968u; esp -= 4; W32(esp, v); }
/* 8f35a7: push 0xaee974 */
  { uint32_t v = 0xaee974u; esp -= 4; W32(esp, v); }
/* 8f35ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f35aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f35ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f35b1: /* 8f35b1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8f35b4: xor ebx, ebx */
  ebx = 0;
/* 8f35b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f35b8: je 0x8f3718 */
  if (zf) goto L_8f3718;
L_8f35be: /* 8f35be: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f35c1: mov ecx, dword ptr [eax + 0x1a8] */
  ecx = R32((uint32_t)(eax + 0x1a8u));
/* 8f35c7: cmp ecx, dword ptr [edi + 0x68] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f35ca: jne 0x8f3718 */
  if (!zf) goto L_8f3718;
L_8f35d0: /* 8f35d0: mov ecx, dword ptr [eax + 0x134] */
  ecx = R32((uint32_t)(eax + 0x134u));
/* 8f35d6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f35d8: je 0x8f3718 */
  if (zf) goto L_8f3718;
L_8f35de: /* 8f35de: lea ecx, [eax + 0x12c] */
  ecx = (uint32_t)(eax + 0x12cu);
/* 8f35e4: call dword ptr [0xcfac98] */
  esp -= 4; W32(esp, 0x8f35eau); SPILL(); f_4e43a4(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriterMark@@QAEHXZ */ RELOAD();
/* 8f35ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f35ec: je 0x8f3718 */
  if (zf) goto L_8f3718;
L_8f35f2: /* 8f35f2: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f35f5: add ecx, 0x12c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f35fb: call dword ptr [0xcfac98] */
  esp -= 4; W32(esp, 0x8f3601u); SPILL(); f_4e43a4(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriterMark@@QAEHXZ */ RELOAD();
/* 8f3601: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f3604: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f360a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8f360d: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x8f3613u); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f3613: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f3616: jne 0x8f3718 */
  if (!zf) goto L_8f3718;
L_8f361c: /* 8f361c: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f361f: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f3625: call dword ptr [0xcfac90] */
  esp -= 4; W32(esp, 0x8f362bu); SPILL(); f_4e30da(); if (g_unwind) return; /* Core!?GetNumBytes@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f362b: mov ecx, edi */
  ecx = edi;
/* 8f362d: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8f3630: call dword ptr [0xcfac90] */
  esp -= 4; W32(esp, 0x8f3636u); SPILL(); f_4e30da(); if (g_unwind) return; /* Core!?GetNumBytes@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f3636: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f3639: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f363c: lea eax, [eax + edx + 9] */
  eax = (uint32_t)(eax + edx + 0x9u);
/* 8f3640: cmp eax, dword ptr [ecx + 0xbc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f3646: jg 0x8f3718 */
  if ((!zf && sf == of)) goto L_8f3718;
L_8f364c: /* 8f364c: add ecx, 0x140 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f3652: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f3658u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f3658: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f365a: je 0x8f3674 */
  if (zf) goto L_8f3674;
L_8f365c: /* 8f365c: push 0x185 */
  { uint32_t v = 0x185u; esp -= 4; W32(esp, v); }
/* 8f3661: push 0xaee988 */
  { uint32_t v = 0xaee988u; esp -= 4; W32(esp, v); }
/* 8f3666: push 0xaee994 */
  { uint32_t v = 0xaee994u; esp -= 4; W32(esp, v); }
/* 8f366b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f3671u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f3671: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f3674: /* 8f3674: mov ecx, edi */
  ecx = edi;
/* 8f3676: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x8f367cu); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f367c: mov ecx, edi */
  ecx = edi;
/* 8f367e: mov ebx, eax */
  ebx = eax;
/* 8f3680: call dword ptr [0xcfac8c] */
  esp -= 4; W32(esp, 0x8f3686u); SPILL(); f_4e21ee(); if (g_unwind) return; /* Core!?GetData@FBitWriter@@QAEPAEXZ */ RELOAD();
/* 8f3686: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f3689: mov edx, dword ptr [ecx + 0x140] */
  edx = R32((uint32_t)(ecx + 0x140u));
/* 8f368f: add ecx, 0x140 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f3695: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f3696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3697: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8f369au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f369a: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f369d: mov cl, byte ptr [edi + 0x7a] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7au))) & 0xffu);
/* 8f36a0: or byte ptr [eax + 0x1ba], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1bau))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x1bau), r);
  }
/* 8f36a6: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f36a9: mov bl, byte ptr [eax + 0x1b8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1b8u))) & 0xffu);
/* 8f36af: mov dl, byte ptr [edi + 0x78] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x78u))) & 0xffu);
/* 8f36b2: or bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f36b4: mov byte ptr [eax + 0x1b8], bl */
  W8((uint32_t)(eax + 0x1b8u), (ebx & 0xffu));
/* 8f36ba: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f36bd: mov cl, byte ptr [edi + 0x79] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x79u))) & 0xffu);
/* 8f36c0: or byte ptr [eax + 0x1b9], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1b9u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x1b9u), r);
  }
/* 8f36c6: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f36c9: mov ebx, dword ptr [eax + 0x13c] */
  ebx = R32((uint32_t)(eax + 0x13cu));
/* 8f36cf: lea edi, [eax + 0x140] */
  edi = (uint32_t)(eax + 0x140u);
/* 8f36d5: mov ecx, edi */
  ecx = edi;
/* 8f36d7: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f36ddu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f36dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f36df: je 0x8f36f9 */
  if (zf) goto L_8f36f9;
L_8f36e1: /* 8f36e1: push 0x18c */
  { uint32_t v = 0x18cu; esp -= 4; W32(esp, v); }
/* 8f36e6: push 0xaee9b4 */
  { uint32_t v = 0xaee9b4u; esp -= 4; W32(esp, v); }
/* 8f36eb: push 0xaee9c0 */
  { uint32_t v = 0xaee9c0u; esp -= 4; W32(esp, v); }
/* 8f36f0: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f36f6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f36f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f36f9: /* 8f36f9: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f36fc: lea edx, [eax + 0x254] */
  edx = (uint32_t)(eax + 0x254u);
/* 8f3702: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f3703: lea ecx, [eax + 0x124] */
  ecx = (uint32_t)(eax + 0x124u);
/* 8f3709: call dword ptr [0xcfac88] */
  esp -= 4; W32(esp, 0x8f370fu); SPILL(); f_4e42cd(); if (g_unwind) return; /* Core!?Pop@FBitWriterMark@@QAEXAAUFBitWriter@@@Z */ RELOAD();
/* 8f370f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f3712: dec dword ptr [eax + 0x214] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x214u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x214u), r);
  }
L_8f3718: /* 8f3718: mov al, byte ptr [edi + 0x7a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7au))) & 0xffu);
/* 8f371b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f371d: je 0x8f37d2 */
  if (zf) goto L_8f37d2;
L_8f3723: /* 8f3723: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3725: jne 0x8f37b9 */
  if (!zf) goto L_8f37b9;
L_8f372b: /* 8f372b: movzx eax, byte ptr [edi + 0x79] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x79u)));
/* 8f372f: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 8f3732: add eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f3735: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f3737: jl 0x8f3751 */
  if ((sf != of)) goto L_8f3751;
L_8f3739: /* 8f3739: push 0x198 */
  { uint32_t v = 0x198u; esp -= 4; W32(esp, v); }
/* 8f373e: push 0xaee9d4 */
  { uint32_t v = 0xaee9d4u; esp -= 4; W32(esp, v); }
/* 8f3743: push 0xaee9e0 */
  { uint32_t v = 0xaee9e0u; esp -= 4; W32(esp, v); }
/* 8f3748: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f374eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f374e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f3751: /* 8f3751: mov dword ptr [edi + 0x54], 0 */
  W32((uint32_t)(edi + 0x54u), 0x0u);
/* 8f3758: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 8f375b: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8f375e: lea eax, [edx + ecx*4 + 0x1eb0] */
  eax = (uint32_t)(edx + ecx*4 + 0x1eb0u);
/* 8f3765: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 8f3767: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 8f376a: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f376d: mov edx, dword ptr [ecx + eax*4 + 0x1eb0] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x1eb0u));
/* 8f3774: mov dword ptr [edi + 0x70], edx */
  W32((uint32_t)(edi + 0x70u), edx);
/* 8f3777: inc dword ptr [esi + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4cu), r);
  }
/* 8f377a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8f377f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f3781: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f3783: push 0xaeea0c */
  { uint32_t v = 0xaeea0cu; esp -= 4; W32(esp, v); }
/* 8f3788: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 8f378a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8f378cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f378c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f378e: je 0x8f379c */
  if (zf) goto L_8f379c;
L_8f3790: /* 8f3790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3791: mov ecx, eax */
  ecx = eax;
/* 8f3793: call 0x6c27b6 */
  esp -= 4; W32(esp, 0x8f3798u); SPILL(); f_6c27b6(); if (g_unwind) return; RELOAD();
/* 8f3798: mov ebx, eax */
  ebx = eax;
/* 8f379a: jmp 0x8f379e */
  goto L_8f379e;
L_8f379c: /* 8f379c: xor ebx, ebx */
  ebx = 0;
L_8f379e: /* 8f379e: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
L_8f37a1: /* 8f37a1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f37a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f37a5: je 0x8f37ac */
  if (zf) goto L_8f37ac;
L_8f37a7: /* 8f37a7: lea ecx, [eax + 0x54] */
  ecx = (uint32_t)(eax + 0x54u);
/* 8f37aa: jmp 0x8f37a1 */
  goto L_8f37a1;
L_8f37ac: /* 8f37ac: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8f37ae: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f37b1: mov dword ptr [ecx + 0x13c], ebx */
  W32((uint32_t)(ecx + 0x13cu), ebx);
/* 8f37b7: jmp 0x8f37e1 */
  goto L_8f37e1;
L_8f37b9: /* 8f37b9: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8f37bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f37bd: mov ecx, ebx */
  ecx = ebx;
/* 8f37bf: mov dword ptr [edi + 0x54], eax */
  W32((uint32_t)(edi + 0x54u), eax);
/* 8f37c2: call 0x6ca989 */
  esp -= 4; W32(esp, 0x8f37c7u); SPILL(); f_6ca989(); if (g_unwind) return; RELOAD();
/* 8f37c7: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f37ca: mov dword ptr [ecx + 0x13c], ebx */
  W32((uint32_t)(ecx + 0x13cu), ebx);
/* 8f37d0: jmp 0x8f37e1 */
  goto L_8f37e1;
L_8f37d2: /* 8f37d2: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8f37d5: mov ebx, edi */
  ebx = edi;
/* 8f37d7: mov dword ptr [edx + 0x13c], 0 */
  W32((uint32_t)(edx + 0x13cu), 0x0u);
L_8f37e1: /* 8f37e1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f37e3: mov dword ptr [ebx + 0x64], 0 */
  W32((uint32_t)(ebx + 0x64u), 0x0u);
/* 8f37ea: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f37ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f37ee: call 0x6c1ded */
  esp -= 4; W32(esp, 0x8f37f3u); SPILL(); f_6c1ded(); if (g_unwind) return; RELOAD();
/* 8f37f3: mov edi, eax */
  edi = eax;
/* 8f37f5: cmp dword ptr [esi + 0x3c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f37f9: jne 0x8f3805 */
  if (!zf) goto L_8f3805;
L_8f37fb: /* 8f37fb: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8f37fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3800: je 0x8f3805 */
  if (zf) goto L_8f3805;
L_8f3802: /* 8f3802: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
L_8f3805: /* 8f3805: mov al, byte ptr [ebx + 0x79] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x79u))) & 0xffu);
/* 8f3808: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f380a: je 0x8f3813 */
  if (zf) goto L_8f3813;
L_8f380c: /* 8f380c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f380e: mov ecx, esi */
  ecx = esi;
/* 8f3810: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x8f3813u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f3813: /* 8f3813: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f3816: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f3817: add ecx, 0x140 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f381d: call 0x6ca989 */
  esp -= 4; W32(esp, 0x8f3822u); SPILL(); f_6ca989(); if (g_unwind) return; RELOAD();
/* 8f3822: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f3825: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f382b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f382c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f382f: call dword ptr [0xcfac84] */
  esp -= 4; W32(esp, 0x8f3835u); SPILL(); f_4e19bf(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@AAUFBitWriter@@@Z */ RELOAD();
/* 8f3835: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f3837: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8f383a: mov dword ptr [edx + 0x12c], ecx */
  W32((uint32_t)(edx + 0x12cu), ecx);
/* 8f3840: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8f3843: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3846: mov dword ptr [edx + 0x130], eax */
  W32((uint32_t)(edx + 0x130u), eax);
/* 8f384c: mov eax, edi */
  eax = edi;
/* 8f384e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f384f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3850: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3857: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3858: mov esp, ebp */
  esp = ebp;
/* 8f385a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f385b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f385e(void) {
  LOAD_REGS();
L_8f385e: /* 8f385e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f3861: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f3866: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f3869: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f386a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f386d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3872u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f3872(); return;
}

void f_8f3872(void) {
  LOAD_REGS();
L_8f3872: /* 8f3872: push 0xa1ea68 */
  { uint32_t v = 0xa1ea68u; esp -= 4; W32(esp, v); }
/* 8f3877: push 0xaeea20 */
  { uint32_t v = 0xaeea20u; esp -= 4; W32(esp, v); }
/* 8f387c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3882u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3882: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3885: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3887: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3889: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f388eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f388e: guest_badaddr(0x8f388e); return;
}

void f_8f3980(void) {
  LOAD_REGS();
L_8f3980: /* 8f3980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f3981: mov ebp, esp */
  ebp = esp;
/* 8f3983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f3985: push 0x9d9131 */
  { uint32_t v = 0x9d9131u; esp -= 4; W32(esp, v); }
/* 8f398a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f3990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f3998: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f399b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f399c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f399d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8f39a4: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 8f39a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f39a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f39aa: mov ebx, 1 */
  ebx = 0x1u;
/* 8f39af: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f39b2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f39b5: mov esi, 0xaeea38 */
  esi = 0xaeea38u;
/* 8f39ba: jne 0x8f39c1 */
  if (!zf) goto L_8f39c1;
L_8f39bc: /* 8f39bc: mov esi, 0xaeea48 */
  esi = 0xaeea48u;
L_8f39c1: /* 8f39c1: push 0xaeea28 */
  { uint32_t v = 0xaeea28u; esp -= 4; W32(esp, v); }
/* 8f39c6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8f39c9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f39cfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f39cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f39d0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f39d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f39d4: mov ecx, eax */
  ecx = eax;
/* 8f39d6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8f39da: call dword ptr [0xcfa3d0] */
  esp -= 4; W32(esp, 0x8f39e0u); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* 8f39e0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8f39e3: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8f39e6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f39e9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f39efu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f39ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f39f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f39f3: mov eax, esi */
  eax = esi;
/* 8f39f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f39f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f39fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f39fe: mov esp, ebp */
  esp = ebp;
/* 8f3a00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3a01: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f3a04(void) {
  LOAD_REGS();
L_8f3a04: /* 8f3a04: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f3a07: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f3a0c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8f3a0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f3a10: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f3a13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3a18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f3a18(); return;
}

void f_8f3a18(void) {
  LOAD_REGS();
L_8f3a18: /* 8f3a18: push 0xa1ea98 */
  { uint32_t v = 0xa1ea98u; esp -= 4; W32(esp, v); }
/* 8f3a1d: push 0xaeea54 */
  { uint32_t v = 0xaeea54u; esp -= 4; W32(esp, v); }
/* 8f3a22: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3a28u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3a28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3a2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3a2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3a2f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3a34u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f3a34: guest_badaddr(0x8f3a34); return;
}

void f_8f3a70(void) {
  LOAD_REGS();
L_8f3a70: /* 8f3a70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f3a71: mov ebp, esp */
  ebp = esp;
/* 8f3a73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f3a75: push 0x9d9150 */
  { uint32_t v = 0x9d9150u; esp -= 4; W32(esp, v); }
/* 8f3a7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f3a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3a81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f3a88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f3a8b: cmp dword ptr [ecx + 0x4c], 0x7f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4cu))); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f3a8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f3a90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3a91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3a92: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f3a95: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f3a9c: jl 0x8f3ab3 */
  if ((sf != of)) goto L_8f3ab3;
L_8f3a9e: /* 8f3a9e: xor eax, eax */
  eax = 0;
/* 8f3aa0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3aa3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3aaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3aab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3aac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3aad: mov esp, ebp */
  esp = ebp;
/* 8f3aaf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3ab0: ret 4 */
  esp += 8; SPILL(); return;
L_8f3ab3: /* 8f3ab3: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 8f3ab6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f3ab9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f3abb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f3abc: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x8f3ac2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f3ac2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3ac5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3ac6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3ac7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3ace: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3acf: mov esp, ebp */
  esp = ebp;
/* 8f3ad1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3ad2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f3ad5(void) {
  LOAD_REGS();
L_8f3ad5: /* 8f3ad5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f3ad8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f3add: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f3ae0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f3ae1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f3ae4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3ae9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f3ae9(); return;
}

void f_8f3ae9(void) {
  LOAD_REGS();
L_8f3ae9: /* 8f3ae9: push 0xa1eac8 */
  { uint32_t v = 0xa1eac8u; esp -= 4; W32(esp, v); }
/* 8f3aee: push 0xaeea5c */
  { uint32_t v = 0xaeea5cu; esp -= 4; W32(esp, v); }
/* 8f3af3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3af9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3af9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3afc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3afe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3b00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3b05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f3b05: guest_badaddr(0x8f3b05); return;
}

void f_8f3b40(void) {
  LOAD_REGS();
L_8f3b40: /* 8f3b40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8f3b44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f3b46: jl 0x8f3b5e */
  if ((sf != of)) goto L_8f3b5e;
L_8f3b48: /* 8f3b48: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f3b4b: jge 0x8f3b5e */
  if ((sf == of)) goto L_8f3b5e;
L_8f3b4d: /* 8f3b4d: mov ecx, dword ptr [eax*4 + 0xced6a8] */
  ecx = R32((uint32_t)(eax*4 + 0xced6a8u));
/* 8f3b54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3b56: je 0x8f3b5e */
  if (zf) goto L_8f3b5e;
L_8f3b58: /* 8f3b58: mov eax, 1 */
  eax = 0x1u;
/* 8f3b5d: ret  */
  esp += 4; SPILL(); return;
L_8f3b5e: /* 8f3b5e: xor eax, eax */
  eax = 0;
/* 8f3b60: ret  */
  esp += 4; SPILL(); return;
}

void f_8f3b80(void) {
  LOAD_REGS();
L_8f3b80: /* 8f3b80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f3b81: mov ebp, esp */
  ebp = esp;
/* 8f3b83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f3b85: push 0x9d9160 */
  { uint32_t v = 0x9d9160u; esp -= 4; W32(esp, v); }
/* 8f3b8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f3b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3b91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f3b98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f3b9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f3b9c: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8f3ba2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3ba3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3ba4: mov edi, ecx */
  edi = ecx;
/* 8f3ba6: mov esi, dword ptr [edi + 0x58] */
  esi = R32((uint32_t)(edi + 0x58u));
/* 8f3ba9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f3bac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_8f3bb3: /* 8f3bb3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3bb5: je 0x8f3c48 */
  if (zf) goto L_8f3c48;
L_8f3bbb: /* 8f3bbb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f3bbe: cmp dword ptr [esi + 0x74], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x74u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f3bc1: jne 0x8f3c13 */
  if (!zf) goto L_8f3c13;
L_8f3bc3: /* 8f3bc3: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8f3bc6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3bc8: jne 0x8f3c13 */
  if (!zf) goto L_8f3c13;
L_8f3bca: /* 8f3bca: mov al, byte ptr [esi + 0x7a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x7au))) & 0xffu);
/* 8f3bcd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3bcf: jne 0x8f3be5 */
  if (!zf) goto L_8f3be5;
L_8f3bd1: /* 8f3bd1: push 0x1ec */
  { uint32_t v = 0x1ecu; esp -= 4; W32(esp, v); }
/* 8f3bd6: push 0xaeea6c */
  { uint32_t v = 0xaeea6cu; esp -= 4; W32(esp, v); }
/* 8f3bdb: push 0xaeea78 */
  { uint32_t v = 0xaeea78u; esp -= 4; W32(esp, v); }
/* 8f3be0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f3be2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f3be2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f3be5: /* 8f3be5: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 8f3be8: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8f3beb: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f3bf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f3bf1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f3bf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f3bf4: push 0xaeea88 */
  { uint32_t v = 0xaeea88u; esp -= 4; W32(esp, v); }
/* 8f3bf9: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f3bfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f3bff: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f3c05u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f3c05: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8f3c08: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3c0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3c0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3c0e: call 0x6c1ded */
  esp -= 4; W32(esp, 0x8f3c13u); SPILL(); f_6c1ded(); if (g_unwind) return; RELOAD();
L_8f3c13: /* 8f3c13: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 8f3c16: jmp 0x8f3bb3 */
  goto L_8f3bb3;
L_8f3c48: /* 8f3c48: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3c4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3c4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3c4d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3c54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3c55: mov esp, ebp */
  esp = ebp;
/* 8f3c57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3c58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f3c18(void) {
  LOAD_REGS();
L_8f3c18: /* 8f3c18: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f3c1b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f3c20: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f3c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3c24: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f3c27: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3c2cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f3c2c(); return;
}

void f_8f3c2c(void) {
  LOAD_REGS();
L_8f3c2c: /* 8f3c2c: push 0xa1eafc */
  { uint32_t v = 0xa1eafcu; esp -= 4; W32(esp, v); }
/* 8f3c31: push 0xaeead4 */
  { uint32_t v = 0xaeead4u; esp -= 4; W32(esp, v); }
/* 8f3c36: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3c3cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3c3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3c3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3c41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3c43: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3c48u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f3c48: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3c4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3c4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3c4d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3c54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3c55: mov esp, ebp */
  esp = ebp;
/* 8f3c57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3c58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f3ca0(void) {
  LOAD_REGS();
L_8f3ca0: /* 8f3ca0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8f3ca4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8f3ca8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f3caa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f3cab: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8f3caeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f3cae: ret  */
  esp += 4; SPILL(); return;
}

void f_8f3cc0(void) {
  LOAD_REGS();
L_8f3cc0: /* 8f3cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3cc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3cc2: mov esi, ecx */
  esi = ecx;
/* 8f3cc4: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x8f3ccau); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 8f3cca: lea edi, [esi + 0x64] */
  edi = (uint32_t)(esi + 0x64u);
/* 8f3ccd: mov ecx, edi */
  ecx = edi;
/* 8f3ccf: mov dword ptr [esi], 0xa06b78 */
  W32((uint32_t)(esi), 0xa06b78u);
/* 8f3cd5: call dword ptr [0xcfa780] */
  esp -= 4; W32(esp, 0x8f3cdbu); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 8f3cdb: mov dword ptr [edi], 0xa06c18 */
  W32((uint32_t)(edi), 0xa06c18u);
/* 8f3ce1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3ce2: mov dword ptr [esi], 0xa06c28 */
  W32((uint32_t)(esi), 0xa06c28u);
/* 8f3ce8: mov eax, esi */
  eax = esi;
/* 8f3cea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3ceb: ret  */
  esp += 4; SPILL(); return;
}

void f_8f3d00(void) {
  LOAD_REGS();
L_8f3d00: /* 8f3d00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f3d01: mov ebp, esp */
  ebp = esp;
/* 8f3d03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f3d05: push 0x9d9170 */
  { uint32_t v = 0x9d9170u; esp -= 4; W32(esp, v); }
/* 8f3d0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f3d10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3d11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f3d18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f3d1b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8f3d1e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8f3d21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f3d22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3d23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3d24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f3d27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3d28: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f3d2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f3d2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3d2d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f3d34: call 0x6c4967 */
  esp -= 4; W32(esp, 0x8f3d39u); SPILL(); f_6c4967(); if (g_unwind) return; RELOAD();
/* 8f3d39: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3d3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3d3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3d3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3d45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3d46: mov esp, ebp */
  esp = ebp;
/* 8f3d48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3d49: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8f3d4c(void) {
  LOAD_REGS();
L_8f3d4c: /* 8f3d4c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f3d4f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f3d54: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f3d57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f3d58: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f3d5b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3d60u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f3d60(); return;
}

void f_8f3d60(void) {
  LOAD_REGS();
L_8f3d60: /* 8f3d60: push 0xa1eb30 */
  { uint32_t v = 0xa1eb30u; esp -= 4; W32(esp, v); }
/* 8f3d65: push 0xaeeaf0 */
  { uint32_t v = 0xaeeaf0u; esp -= 4; W32(esp, v); }
/* 8f3d6a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3d70u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3d70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3d73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3d75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3d77: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3d7cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f3d7c: guest_badaddr(0x8f3d7c); return;
}

void f_8f3da0(void) {
  LOAD_REGS();
L_8f3da0: /* 8f3da0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f3da1: mov ebp, esp */
  ebp = esp;
/* 8f3da3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f3da5: push 0x9d9189 */
  { uint32_t v = 0x9d9189u; esp -= 4; W32(esp, v); }
/* 8f3daa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f3db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3db1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f3db8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f3dbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f3dbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3dbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3dbe: mov edi, ecx */
  edi = ecx;
/* 8f3dc0: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8f3dc3: xor ebx, ebx */
  ebx = 0;
/* 8f3dc5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f3dc7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f3dca: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f3dcd: je 0x8f3de7 */
  if (zf) goto L_8f3de7;
L_8f3dcf: /* 8f3dcf: push 0x21d */
  { uint32_t v = 0x21du; esp -= 4; W32(esp, v); }
/* 8f3dd4: push 0xaeeb48 */
  { uint32_t v = 0xaeeb48u; esp -= 4; W32(esp, v); }
/* 8f3dd9: push 0xaeeb54 */
  { uint32_t v = 0xaeeb54u; esp -= 4; W32(esp, v); }
/* 8f3dde: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f3de4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f3de4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f3de7: /* 8f3de7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f3dea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8f3df0: /* 8f3df0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8f3df3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8f3df9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8f3df9: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8f3dfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3dfd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3dfe: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f3e02: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x8f3e08u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 8f3e08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3e0b: mov ecx, esi */
  ecx = esi;
/* 8f3e0d: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f3e13u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f3e13: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f3e15: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8f3e18: je 0x8f3e36 */
  if (zf) goto L_8f3e36;
L_8f3e1a: /* 8f3e1a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f3e1d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f3e23u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f3e23: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3e26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3e27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3e28: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3e2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3e30: mov esp, ebp */
  esp = ebp;
/* 8f3e32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3e33: ret 4 */
  esp += 8; SPILL(); return;
L_8f3e36: /* 8f3e36: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f3e3cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f3e3c: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 8f3e3f: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f3e42: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 8f3e45: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8f3e47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3e48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f3e49: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0x8f3e4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f3e4c: xor ebx, ebx */
  ebx = 0;
/* 8f3e4e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8f3e51: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f3e54: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f3e5au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f3e5a: jmp 0x8f3df0 */
  goto L_8f3df0;
}

void f_8f3e5c(void) {
  LOAD_REGS();
L_8f3e5c: /* 8f3e5c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f3e5f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f3e64: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f3e67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3e68: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f3e6b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3e70u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f3e70(); return;
}

void f_8f3e70(void) {
  LOAD_REGS();
L_8f3e70: /* 8f3e70: push 0xa1eb80 */
  { uint32_t v = 0xa1eb80u; esp -= 4; W32(esp, v); }
/* 8f3e75: push 0xaeeb60 */
  { uint32_t v = 0xaeeb60u; esp -= 4; W32(esp, v); }
/* 8f3e7a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3e80u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3e80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3e83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3e85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3e87: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3e8cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f3e8c: guest_badaddr(0x8f3e8c); return;
}

void f_8f3ed0(void) {
  LOAD_REGS();
L_8f3ed0: /* 8f3ed0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f3ed1: mov ebp, esp */
  ebp = esp;
/* 8f3ed3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f3ed5: push 0x9d91b4 */
  { uint32_t v = 0x9d91b4u; esp -= 4; W32(esp, v); }
/* 8f3eda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f3ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3ee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f3ee8: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f3eee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f3eef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3ef0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f3ef1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f3ef4: lea esi, [ecx - 0x64] */
  esi = (uint32_t)(ecx + 0xffffff9cu);
/* 8f3ef7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3ef9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f3efa: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8f3f00: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f3f07: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8f3f0cu); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8f3f0c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f3f0f: mov ebx, 1 */
  ebx = 0x1u;
/* 8f3f14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3f15: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8f3f18: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f3f1b: mov byte ptr [ebp - 0x26], bl */
  W8((uint32_t)(ebp + 0xffffffdau), (ebx & 0xffu));
/* 8f3f1e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f3f24u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f3f24: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8f3f27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f3f28: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 8f3f2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f3f2f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8f3f33: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x8f3f39u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 8f3f39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3f3c: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8f3f42: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f3f48u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f3f48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f3f4a: jne 0x8f3f5d */
  if (!zf) goto L_8f3f5d;
L_8f3f4c: /* 8f3f4c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f3f4d: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 8f3f53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f3f54: mov ecx, esi */
  ecx = esi;
/* 8f3f56: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f3f5bu); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f3f5b: jmp 0x8f3f79 */
  goto L_8f3f79;
L_8f3f5d: /* 8f3f5d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f3f63: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f3f65: push 0xaeeb68 */
  { uint32_t v = 0xaeeb68u; esp -= 4; W32(esp, v); }
/* 8f3f6a: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f3f6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f3f70: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f3f76u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f3f76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f3f79: /* 8f3f79: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8f3f7c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f3f7f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f3f85u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f3f85: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8f3f8b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f3f8f: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f3f95u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f3f95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f3f98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f3f99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f3f9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f3fa1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f3fa2: mov esp, ebp */
  esp = ebp;
/* 8f3fa4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f3fa5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f3fa8(void) {
  LOAD_REGS();
L_8f3fa8: /* 8f3fa8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f3fab: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f3fb0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f3fb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f3fb4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f3fb7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3fbcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f3fbc(); return;
}

void f_8f3fbc(void) {
  LOAD_REGS();
L_8f3fbc: /* 8f3fbc: push 0xa1ebcc */
  { uint32_t v = 0xa1ebccu; esp -= 4; W32(esp, v); }
/* 8f3fc1: push 0xaeebac */
  { uint32_t v = 0xaeebacu; esp -= 4; W32(esp, v); }
/* 8f3fc6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f3fccu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f3fcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f3fcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3fd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f3fd3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f3fd8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f3fd8: guest_badaddr(0x8f3fd8); return;
}

void f_8f4030(void) {
  LOAD_REGS();
L_8f4030: /* 8f4030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f4031: mov ebp, esp */
  ebp = esp;
/* 8f4033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f4035: push 0x9d91fa */
  { uint32_t v = 0x9d91fau; esp -= 4; W32(esp, v); }
/* 8f403a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f4040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f4048: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f404b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f404c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f404d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f404e: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8f4051: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f4054: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8f405b: mov edi, 1 */
  edi = 0x1u;
/* 8f4060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4061: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8f4064: call 0x6c1005 */
  esp -= 4; W32(esp, 0x8f4069u); SPILL(); f_6c1005(); if (g_unwind) return; RELOAD();
/* 8f4069: mov esi, eax */
  esi = eax;
/* 8f406b: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 8f406d: push 0xaeebb4 */
  { uint32_t v = 0xaeebb4u; esp -= 4; W32(esp, v); }
/* 8f4072: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8f4075: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f4078: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f407eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f407e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f407f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f4082: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4083: mov ecx, eax */
  ecx = eax;
/* 8f4085: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f4089: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x8f408fu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8f408f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8f4092: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8f4095: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f4098: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f409eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f409e: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8f40a1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f40a5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f40abu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f40ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f40ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f40af: mov eax, esi */
  eax = esi;
/* 8f40b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f40b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f40b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f40ba: mov esp, ebp */
  esp = ebp;
/* 8f40bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f40bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f40c0(void) {
  LOAD_REGS();
L_8f40c0: /* 8f40c0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f40c3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f40c8: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8f40cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f40cc: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8f40cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f40d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f40d4(); return;
}

void f_8f40d4(void) {
  LOAD_REGS();
L_8f40d4: /* 8f40d4: push 0xa1ec0c */
  { uint32_t v = 0xa1ec0cu; esp -= 4; W32(esp, v); }
/* 8f40d9: push 0xaeebc0 */
  { uint32_t v = 0xaeebc0u; esp -= 4; W32(esp, v); }
/* 8f40de: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f40e4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f40e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f40e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f40e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f40eb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f40f0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f40f0: guest_badaddr(0x8f40f0); return;
}

void f_8f4140(void) {
  LOAD_REGS();
L_8f4140: /* 8f4140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f4141: mov ebp, esp */
  ebp = esp;
/* 8f4143: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f4145: push 0x9d9220 */
  { uint32_t v = 0x9d9220u; esp -= 4; W32(esp, v); }
/* 8f414a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f4150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4151: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f4158: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f415b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8f415e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f4161: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f4162: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4163: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f4164: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f4167: mov esi, ecx */
  esi = ecx;
/* 8f4169: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8f416c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f416d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f416e: xor edi, edi */
  edi = 0;
/* 8f4170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4171: mov ecx, esi */
  ecx = esi;
/* 8f4173: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8f4176: call 0x6c4967 */
  esp -= 4; W32(esp, 0x8f417bu); SPILL(); f_6c4967(); if (g_unwind) return; RELOAD();
/* 8f417b: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f417e: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f4181: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 8f4184: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f4186: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8f4189u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4189: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 8f418c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f418f: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f4192: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 8f4195: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 8f4198: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 8f419b: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 8f419e: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f41a1: fld dword ptr [eax + 0x5c] */
  { double v = F32((uint32_t)(eax + 0x5cu)); FPUSH(v); }
/* 8f41a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f41a7: fsubr qword ptr [eax + 0x44] */
  ST0 = (F64((uint32_t)(eax + 0x44u))) - ST0;
/* 8f41aa: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* 8f41b0: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* 8f41b6: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* 8f41bc: mov dword ptr [esi + 0x94], edi */
  W32((uint32_t)(esi + 0x94u), edi);
/* 8f41c2: fstp qword ptr [esi + 0x78] */
  WF64((uint32_t)(esi + 0x78u), ST0); FPOP();
/* 8f41c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f41c6: mov dword ptr [esi + 0x84], 0xbff00000 */
  W32((uint32_t)(esi + 0x84u), 0xbff00000u);
/* 8f41d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f41d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f41d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f41d9: mov esp, ebp */
  esp = ebp;
/* 8f41db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f41dc: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8f41df(void) {
  LOAD_REGS();
L_8f41df: /* 8f41df: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f41e2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f41e7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f41ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f41eb: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f41ee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f41f3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f41f3(); return;
}

void f_8f41f3(void) {
  LOAD_REGS();
L_8f41f3: /* 8f41f3: push 0xa1ec4c */
  { uint32_t v = 0xa1ec4cu; esp -= 4; W32(esp, v); }
/* 8f41f8: push 0xaeebe8 */
  { uint32_t v = 0xaeebe8u; esp -= 4; W32(esp, v); }
/* 8f41fd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f4203u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f4203: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4206: xor edi, edi */
  edi = 0;
/* 8f4208: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f4209: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f420a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f420fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f420f: guest_badaddr(0x8f420f); return;
}

void f_8f4250(void) {
  LOAD_REGS();
L_8f4250: /* 8f4250: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f4251: mov ebp, esp */
  ebp = esp;
/* 8f4253: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f4255: push 0x9d9230 */
  { uint32_t v = 0x9d9230u; esp -= 4; W32(esp, v); }
/* 8f425a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f4260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4261: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f4268: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f426b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f426c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f426d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f426e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f4271: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f4278: call 0x6c6424 */
  esp -= 4; W32(esp, 0x8f427du); SPILL(); f_6c6424(); if (g_unwind) return; RELOAD();
/* 8f427d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f4280: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f4281: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4282: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f4289: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f428a: mov esp, ebp */
  esp = ebp;
/* 8f428c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f428d: ret  */
  esp += 4; SPILL(); return;
}

void f_8f428e(void) {
  LOAD_REGS();
L_8f428e: /* 8f428e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f4291: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f4296: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f4299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f429a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f429d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f42a2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f42a2(); return;
}

void f_8f42a2(void) {
  LOAD_REGS();
L_8f42a2: /* 8f42a2: push 0xa1ec94 */
  { uint32_t v = 0xa1ec94u; esp -= 4; W32(esp, v); }
/* 8f42a7: push 0xaeec00 */
  { uint32_t v = 0xaeec00u; esp -= 4; W32(esp, v); }
/* 8f42ac: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f42b2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f42b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f42b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f42b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f42b9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f42beu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f42be: guest_badaddr(0x8f42be); return;
}

void f_8f42e0(void) {
  LOAD_REGS();
L_8f42e0: /* 8f42e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f42e1: mov ebp, esp */
  ebp = esp;
/* 8f42e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f42e5: push 0x9d927c */
  { uint32_t v = 0x9d927cu; esp -= 4; W32(esp, v); }
/* 8f42ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f42f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f42f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f42f8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f42fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f42fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f42fd: mov esi, ecx */
  esi = ecx;
/* 8f42ff: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8f4306: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8f4309: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f430b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f430c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f430f: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f4316: jne 0x8f43ae */
  if (!zf) goto L_8f43ae;
L_8f431c: /* 8f431c: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8f431f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4321: je 0x8f43ae */
  if (zf) goto L_8f43ae;
L_8f4327: /* 8f4327: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8f432a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f432b: call 0x6c1005 */
  esp -= 4; W32(esp, 0x8f4330u); SPILL(); f_6c1005(); if (g_unwind) return; RELOAD();
/* 8f4330: mov edi, eax */
  edi = eax;
/* 8f4332: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8f4335: mov bl, 4 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
/* 8f4337: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4339: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f433c: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f4342u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f4342: mov esi, dword ptr [esi + 0x68] */
  esi = R32((uint32_t)(esi + 0x68u));
/* 8f4345: movzx ecx, byte ptr [esi + 0x90] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x90u)));
/* 8f434c: movzx edx, byte ptr [esi + 0x91] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x91u)));
/* 8f4353: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f4354: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4356: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8f4359: push 0xaef278 */
  { uint32_t v = 0xaef278u; esp -= 4; W32(esp, v); }
/* 8f435e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f435f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8f4365u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8f4365: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4368: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f436b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f436c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f436d: mov ecx, eax */
  ecx = eax;
/* 8f436f: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f4373: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x8f4379u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8f4379: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8f437c: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 8f4383: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f4386: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f438cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f438c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f4390: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
L_8f4393: /* 8f4393: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f4399u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f4399: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f439c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f439d: mov eax, esi */
  eax = esi;
/* 8f439f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f43a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f43a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f43a8: mov esp, ebp */
  esp = ebp;
/* 8f43aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f43ab: ret 4 */
  esp += 8; SPILL(); return;
L_8f43ae: /* 8f43ae: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8f43b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f43b2: mov ecx, esi */
  ecx = esi;
/* 8f43b4: call 0x6c1005 */
  esp -= 4; W32(esp, 0x8f43b9u); SPILL(); f_6c1005(); if (g_unwind) return; RELOAD();
/* 8f43b9: mov esi, eax */
  esi = eax;
/* 8f43bb: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 8f43bd: push 0xaef260 */
  { uint32_t v = 0xaef260u; esp -= 4; W32(esp, v); }
/* 8f43c2: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f43c5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f43c8: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f43ceu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f43ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f43cf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f43d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f43d3: mov ecx, eax */
  ecx = eax;
/* 8f43d5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f43d9: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x8f43dfu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8f43df: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f43e2: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 8f43e9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f43ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f43f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f43f2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f43f6: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8f43f9: jmp 0x8f4393 */
  goto L_8f4393;
}

void f_8f43fb(void) {
  LOAD_REGS();
L_8f43fb: /* 8f43fb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f43fe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f4403: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8f4406: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4407: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8f440a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f440fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f440f(); return;
}

void f_8f440f(void) {
  LOAD_REGS();
L_8f440f: /* 8f440f: push 0xa1ecc4 */
  { uint32_t v = 0xa1ecc4u; esp -= 4; W32(esp, v); }
/* 8f4414: push 0xaef2bc */
  { uint32_t v = 0xaef2bcu; esp -= 4; W32(esp, v); }
/* 8f4419: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f441fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f441f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4424: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4426: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f442bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f442b: guest_badaddr(0x8f442b); return;
}

void f_8f4490(void) {
  LOAD_REGS();
L_8f4490: /* 8f4490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4491: mov esi, ecx */
  esi = ecx;
/* 8f4493: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x8f4499u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 8f4499: mov dword ptr [esi], 0xa06cc8 */
  W32((uint32_t)(esi), 0xa06cc8u);
/* 8f449f: mov dword ptr [esi + 0x64], 0 */
  W32((uint32_t)(esi + 0x64u), 0x0u);
/* 8f44a6: mov eax, esi */
  eax = esi;
/* 8f44a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f44a9: ret  */
  esp += 4; SPILL(); return;
}

void f_8f44c0(void) {
  LOAD_REGS();
L_8f44c0: /* 8f44c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f44c1: mov ebp, esp */
  ebp = esp;
/* 8f44c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f44c5: push 0x9d92a0 */
  { uint32_t v = 0x9d92a0u; esp -= 4; W32(esp, v); }
/* 8f44ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f44d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f44d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f44d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f44db: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8f44de: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8f44e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f44e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f44e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f44e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f44e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f44e8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f44eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f44ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f44ed: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f44f4: call 0x6c4967 */
  esp -= 4; W32(esp, 0x8f44f9u); SPILL(); f_6c4967(); if (g_unwind) return; RELOAD();
/* 8f44f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f44fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f44fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f44fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f4505: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f4506: mov esp, ebp */
  esp = ebp;
/* 8f4508: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f4509: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8f450c(void) {
  LOAD_REGS();
L_8f450c: /* 8f450c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f450f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f4514: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f4517: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4518: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f451b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f4520u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f4520(); return;
}

void f_8f4520(void) {
  LOAD_REGS();
L_8f4520: /* 8f4520: push 0xa1ed00 */
  { uint32_t v = 0xa1ed00u; esp -= 4; W32(esp, v); }
/* 8f4525: push 0xaef2e0 */
  { uint32_t v = 0xaef2e0u; esp -= 4; W32(esp, v); }
/* 8f452a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f4530u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f4530: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4533: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4535: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4537: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f453cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f453c: guest_badaddr(0x8f453c); return;
}

void f_8f4560(void) {
  LOAD_REGS();
L_8f4560: /* 8f4560: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8f4564: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8f4568: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f4569: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f456a: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8f456e: imul esi, dword ptr [esp + 0x18] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x18u)));
  esi = (uint32_t)r;
  }
/* 8f4573: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f4574: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4576: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f457cu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f457c: mov edx, eax */
  edx = eax;
/* 8f457e: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8f4582: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8f4586: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8f458a: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8f458e: xor eax, eax */
  eax = 0;
/* 8f4590: mov ebx, ecx */
  ebx = ecx;
/* 8f4592: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f4595: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f4598: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f459a: mov ecx, ebx */
  ecx = ebx;
/* 8f459c: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f459e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f459f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f45a0: mov eax, edx */
  eax = edx;
/* 8f45a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f45a3: ret  */
  esp += 4; SPILL(); return;
}

void f_8f45d0(void) {
  LOAD_REGS();
L_8f45d0: /* 8f45d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f45d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8f45d6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8f45d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f45f0(void) {
  LOAD_REGS();
L_8f45f0: /* 8f45f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f45f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8f45f6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 8f45f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f4610(void) {
  LOAD_REGS();
L_8f4610: /* 8f4610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4611: mov esi, ecx */
  esi = ecx;
/* 8f4613: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f4619u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f4619: mov eax, esi */
  eax = esi;
/* 8f461b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f461c: ret  */
  esp += 4; SPILL(); return;
}

void f_8f4630(void) {
  LOAD_REGS();
L_8f4630: /* 8f4630: mov eax, ecx */
  eax = ecx;
/* 8f4632: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8f4636: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f4638: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8f463c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f463f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f4641: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8f4644: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f4660(void) {
  LOAD_REGS();
L_8f4660: /* 8f4660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4661: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8f4665: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4667: je 0x8f4680 */
  if (zf) goto L_8f4680;
L_8f4669: /* 8f4669: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x8f466fu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 8f466f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4670: mov ecx, esi */
  ecx = esi;
/* 8f4672: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f4678u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f4678: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f467a: je 0x8f4680 */
  if (zf) goto L_8f4680;
L_8f467c: /* 8f467c: mov eax, esi */
  eax = esi;
/* 8f467e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f467f: ret  */
  esp += 4; SPILL(); return;
L_8f4680: /* 8f4680: xor eax, eax */
  eax = 0;
/* 8f4682: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4683: ret  */
  esp += 4; SPILL(); return;
}

void f_8f46a0(void) {
  LOAD_REGS();
L_8f46a0: /* 8f46a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f46a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8f46a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f46a7: je 0x8f46c1 */
  if (zf) goto L_8f46c1;
L_8f46a9: /* 8f46a9: mov ecx, esi */
  ecx = esi;
/* 8f46ab: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f46b1u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f46b1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8f46b5: test dword ptr [eax + 0x498], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f46bb: je 0x8f46c1 */
  if (zf) goto L_8f46c1;
L_8f46bd: /* 8f46bd: mov eax, esi */
  eax = esi;
/* 8f46bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f46c0: ret  */
  esp += 4; SPILL(); return;
L_8f46c1: /* 8f46c1: xor eax, eax */
  eax = 0;
/* 8f46c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f46c4: ret  */
  esp += 4; SPILL(); return;
}

void f_8f46e0(void) {
  LOAD_REGS();
L_8f46e0: /* 8f46e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f46e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8f46e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f46e7: je 0x8f4701 */
  if (zf) goto L_8f4701;
L_8f46e9: /* 8f46e9: mov ecx, esi */
  ecx = esi;
/* 8f46eb: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f46f1u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f46f1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8f46f5: test dword ptr [eax + 0x498], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f46fb: je 0x8f4701 */
  if (zf) goto L_8f4701;
L_8f46fd: /* 8f46fd: mov eax, esi */
  eax = esi;
/* 8f46ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4700: ret  */
  esp += 4; SPILL(); return;
L_8f4701: /* 8f4701: xor eax, eax */
  eax = 0;
/* 8f4703: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4704: ret  */
  esp += 4; SPILL(); return;
}

void f_8f4720(void) {
  LOAD_REGS();
L_8f4720: /* 8f4720: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f4723: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f4724: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f4725: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 8f4729: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 8f472c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f472d: mov edi, dword ptr [0xcfa5d8] */
  edi = R32((uint32_t)(0xcfa5d8u));
/* 8f4733: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4734: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f4736u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4736: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 8f4739: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f473a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8f473e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f4740u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4740: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f4743: mov ebx, eax */
  ebx = eax;
/* 8f4745: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4746: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 8f474a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f474cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f474c: mov ebp, eax */
  ebp = eax;
/* 8f474e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4751: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f4753: mov ecx, ebp */
  ecx = ebp;
/* 8f4755: jge 0x8f4759 */
  if ((sf == of)) goto L_8f4759;
L_8f4757: /* 8f4757: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_8f4759: /* 8f4759: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f475b: jge 0x8f475f */
  if ((sf == of)) goto L_8f475f;
L_8f475d: /* 8f475d: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
L_8f475f: /* 8f475f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8f4763: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f4765: jge 0x8f4769 */
  if ((sf == of)) goto L_8f4769;
L_8f4767: /* 8f4767: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_8f4769: /* 8f4769: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f476b: jge 0x8f476f */
  if ((sf == of)) goto L_8f476f;
L_8f476d: /* 8f476d: mov eax, ebx */
  eax = ebx;
L_8f476f: /* 8f476f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f4771: jge 0x8f4775 */
  if ((sf == of)) goto L_8f4775;
L_8f4773: /* 8f4773: mov eax, ecx */
  eax = ecx;
L_8f4775: /* 8f4775: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f4776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4777: call dword ptr [0xcfa2b0] */
  esp -= 4; W32(esp, 0x8f477du); SPILL(); f_4e2428(); if (g_unwind) return; /* Core!?appCeilLogTwo@@YAEK@Z */ RELOAD();
/* 8f477d: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8f4780: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4783: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f4786: jae 0x8f478f */
  if (!cf) goto L_8f478f;
L_8f4788: /* 8f4788: mov eax, 1 */
  eax = 0x1u;
/* 8f478d: jmp 0x8f4799 */
  goto L_8f4799;
L_8f478f: /* 8f478f: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f4792: jb 0x8f4799 */
  if (cf) goto L_8f4799;
L_8f4794: /* 8f4794: mov eax, 0x14 */
  eax = 0x14u;
L_8f4799: /* 8f4799: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8f479a: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8f479c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8f47a0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8f47a4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f47a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f47a7: mov ecx, esi */
  ecx = esi;
/* 8f47a9: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8f47acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f47ac: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8f47b0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8f47b4: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 8f47b7: mov edi, 1 */
  edi = 0x1u;
/* 8f47bc: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* 8f47be: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 8f47c1: mov ebx, 1 */
  ebx = 0x1u;
/* 8f47c6: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8f47c8: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8f47cc: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8f47cf: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8f47d3: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 8f47d6: lea eax, [edi + ebp] */
  eax = (uint32_t)(edi + ebp);
/* 8f47d9: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8f47dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f47de: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 8f47e2: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8f47e6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f47e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f47e9: mov ecx, esi */
  ecx = esi;
/* 8f47eb: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8f47eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f47ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f47f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f47f1: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 8f47f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f47f6: mov ecx, esi */
  ecx = esi;
/* 8f47f8: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8f47fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f47fb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f47fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f47fe: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 8f4802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4803: mov ecx, esi */
  ecx = esi;
/* 8f4805: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8f4808u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4808: mov ecx, esi */
  ecx = esi;
/* 8f480a: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8f4810u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8f4810: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4812: je 0x8f4862 */
  if (zf) goto L_8f4862;
L_8f4814: /* 8f4814: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8f4818: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8f481c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8f4820: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8f4822: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 8f4826: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8f482a: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8f482c: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 8f4830: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f4832: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8f4836: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8f483a: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8f483e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8f4842: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 8f4846: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f4848: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8f484c: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8f4850: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8f4854: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f4857: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8f485b: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8f485f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_8f4862: /* 8f4862: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f4863: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f4864: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f4865: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4868: ret  */
  esp += 4; SPILL(); return;
}
