#include "recomp.h"
#include "rec_mod.h"

void f_819c4d(void) {
  LOAD_REGS();
L_819c4d: /* 819c4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_819c50: /* 819c50: mov ecx, dword ptr [esi + 0x408] */
  ecx = R32((uint32_t)(esi + 0x408u));
/* 819c56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 819c58: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 819c5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819c5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819c61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819c63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819c65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819c66: mov ecx, esi */
  ecx = esi;
/* 819c68: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 819c72: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 819c7c: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 819c86: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x819c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 819c8c: mov eax, dword ptr [esi + 0x408] */
  eax = R32((uint32_t)(esi + 0x408u));
/* 819c92: mov ecx, dword ptr [esi + 0x40c] */
  ecx = R32((uint32_t)(esi + 0x40cu));
/* 819c98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 819c99: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819c9b: jge 0x819c9f */
  if ((sf == of)) goto L_819c9f;
L_819c9d: /* 819c9d: mov ecx, eax */
  ecx = eax;
L_819c9f: /* 819c9f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 819ca0: idiv dword ptr [esi + 0x45c] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x45cu)); if (!d) d = (int32_t)guest_divzero(0x819ca0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 819ca6: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 819ca7: mov dword ptr [esi + 0x40c], ecx */
  W32((uint32_t)(esi + 0x40cu), ecx);
/* 819cad: mov dword ptr [esi + 0x408], edx */
  W32((uint32_t)(esi + 0x408u), edx);
/* 819cb3: jne 0x819c50 */
  if (!zf) goto L_819c50;
L_819cb5: /* 819cb5: mov dword ptr [esi + 0x474], 0 */
  W32((uint32_t)(esi + 0x474u), 0x0u);
/* 819cbf: xor edi, edi */
  edi = 0;
L_819cc1: /* 819cc1: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 819cc7: mov ecx, dword ptr [esi + 0x45c] */
  ecx = R32((uint32_t)(esi + 0x45cu));
/* 819ccd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819ccf: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 819cd2: jg 0x819cd6 */
  if ((!zf && sf == of)) goto L_819cd6;
L_819cd4: /* 819cd4: mov eax, ecx */
  eax = ecx;
L_819cd6: /* 819cd6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819cd8: jge 0x81b496 */
  if ((sf == of)) goto L_81b496;
L_819cde: /* 819cde: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 819ce4: imul edi, edi, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xc8u);
  edi = (uint32_t)r;
  }
/* 819cea: mov eax, dword ptr [edi + edx + 0xbc] */
  eax = R32((uint32_t)(edi + edx + 0xbcu));
/* 819cf1: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 819cf3: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819cf5: jne 0x819d04 */
  if (!zf) goto L_819d04;
L_819cf7: /* 819cf7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 819cfa: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 819cfd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 819cfe: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 819d01: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 819d02: jmp 0x819cc1 */
  goto L_819cc1;
L_819d04: /* 819d04: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d06: je 0x819d15 */
  if (zf) goto L_819d15;
L_819d08: /* 819d08: cmp byte ptr [esi + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 819d0f: je 0x819d15 */
  if (zf) goto L_819d15;
L_819d11: /* 819d11: xor ebx, ebx */
  ebx = 0;
/* 819d13: jmp 0x819d1a */
  goto L_819d1a;
L_819d15: /* 819d15: mov ebx, 1 */
  ebx = 0x1u;
L_819d1a: /* 819d1a: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d1c: je 0x819d2b */
  if (zf) goto L_819d2b;
L_819d1e: /* 819d1e: xor ebx, ebx */
  ebx = 0;
/* 819d20: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 819d23: mov dword ptr [edi + 0xbc], eax */
  W32((uint32_t)(edi + 0xbcu), eax);
/* 819d29: jmp 0x819d3a */
  goto L_819d3a;
L_819d2b: /* 819d2b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819d2e: fadd dword ptr [edi + 0xac] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xacu)));
/* 819d34: fstp dword ptr [edi + 0xac] */
  WF32((uint32_t)(edi + 0xacu), ST0); FPOP();
L_819d3a: /* 819d3a: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 819d40: fcomp dword ptr [edi + 0xb0] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xb0u)));
  FPOP();
/* 819d46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819d48: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d4b: jne 0x819e03 */
  if (!zf) goto L_819e03;
L_819d51: /* 819d51: test byte ptr [esi + 0x104], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d58: jne 0x819d79 */
  if (!zf) goto L_819d79;
L_819d5a: /* 819d5a: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 819d60: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 819d63: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 819d66: mov dword ptr [edi + 0xbc], ecx */
  W32((uint32_t)(edi + 0xbcu), ecx);
/* 819d6c: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 819d6f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 819d70: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 819d73: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 819d74: jmp 0x819cc1 */
  goto L_819cc1;
L_819d79: /* 819d79: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 819d7f: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x819d85u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 819d85: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 819d8b: fsub dword ptr [edi + 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xb0u)));
/* 819d91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 819d93: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 819d96: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 819d9c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 819da2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819da4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 819da7: jnp 0x819dbc */
  if (!pf) goto L_819dbc;
L_819da9: /* 819da9: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 819dac: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 819db2: call 0x99cc5c */
  esp -= 4; W32(esp, 0x819db7u); SPILL(); f_99cc5c(); if (g_unwind) return; RELOAD();
/* 819db7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 819dba: jmp 0x819dc3 */
  goto L_819dc3;
L_819dbc: /* 819dbc: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_819dc3: /* 819dc3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 819dc6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 819dc8: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 819dce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819dcf: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 819dd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819dd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819dd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819dd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819dd8: mov ecx, esi */
  ecx = esi;
/* 819dda: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 819de4: mov dword ptr [ebp - 0x15c], 0 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x0u);
/* 819dee: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 819df8: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x819dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 819dfe: jmp 0x81a120 */
  goto L_81a120;
L_819e03: /* 819e03: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 819e05: je 0x81a120 */
  if (zf) goto L_81a120;
L_819e0b: /* 819e0b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819e0e: mov edx, edi */
  edx = edi;
/* 819e10: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 819e13: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 819e16: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819e19: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 819e1c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819e1f: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 819e22: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 819e28: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819e2a: fadd dword ptr [edi + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x18u)));
/* 819e2d: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 819e30: fadd dword ptr [edi + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x1cu)));
/* 819e33: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 819e36: fld dword ptr [ebp - 0x20c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdf4u)); FPUSH(v); }
/* 819e3c: fadd dword ptr [edi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x20u)));
/* 819e3f: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
/* 819e42: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 819e44: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 819e46: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 819e49: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 819e4c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 819e4f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 819e52: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 819e55: fmul dword ptr [edi + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x90u)));
/* 819e5b: fld dword ptr [edi + 0x94] */
  { double v = F32((uint32_t)(edi + 0x94u)); FPUSH(v); }
/* 819e61: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 819e64: fld dword ptr [edi + 0x98] */
  { double v = F32((uint32_t)(edi + 0x98u)); FPUSH(v); }
/* 819e6a: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 819e6d: fstp dword ptr [ebp - 0x2a8] */
  WF32((uint32_t)(ebp + 0xfffffd58u), ST0); FPOP();
/* 819e73: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819e75: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819e78: fstp dword ptr [ebp - 0x298] */
  WF32((uint32_t)(ebp + 0xfffffd68u), ST0); FPOP();
/* 819e7e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819e81: fld dword ptr [ebp - 0x2a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffd58u)); FPUSH(v); }
/* 819e87: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819e8a: fld dword ptr [ebp - 0x298] */
  { double v = F32((uint32_t)(ebp + 0xfffffd68u)); FPUSH(v); }
/* 819e90: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 819e92: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 819e95: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 819e98: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819e9a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 819e9c: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 819e9f: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 819ea5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 819ea7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 819eaa: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 819ead: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 819eb0: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 819eb3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 819eb6: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 819eb9: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 819ebc: je 0x819f79 */
  if (zf) goto L_819f79;
L_819ec2: /* 819ec2: cmp byte ptr [esi + 0x2b8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2b8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 819ec9: jne 0x819f79 */
  if (!zf) goto L_819f79;
L_819ecf: /* 819ecf: mov ecx, dword ptr [esi + 0x484] */
  ecx = R32((uint32_t)(esi + 0x484u));
/* 819ed5: fld dword ptr [esi + 0x2c0] */
  { double v = F32((uint32_t)(esi + 0x2c0u)); FPUSH(v); }
/* 819edb: mov eax, dword ptr [edi + 0xc4] */
  eax = R32((uint32_t)(edi + 0xc4u));
/* 819ee1: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 819ee4: fmul dword ptr [ecx + eax*8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*8)));
/* 819ee7: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 819eea: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 819ef0: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 819ef6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 819ef9: fmul dword ptr [esi + 0x2c4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2c4u)));
/* 819eff: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 819f05: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 819f08: mov eax, dword ptr [ebp - 0xd0] */
  eax = R32((uint32_t)(ebp + 0xffffff30u));
/* 819f0e: fmul dword ptr [esi + 0x2c8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2c8u)));
/* 819f14: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 819f1a: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 819f20: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 819f26: fsub dword ptr [edi + 0x9c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x9cu)));
/* 819f2c: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 819f32: fsub dword ptr [edi + 0xa0] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xa0u)));
/* 819f38: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 819f3e: fsub dword ptr [edi + 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xa4u)));
/* 819f44: mov dword ptr [edi + 0x9c], edx */
  W32((uint32_t)(edi + 0x9cu), edx);
/* 819f4a: mov dword ptr [edi + 0xa0], eax */
  W32((uint32_t)(edi + 0xa0u), eax);
/* 819f50: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 819f56: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819f58: mov dword ptr [edi + 0xa4], ecx */
  W32((uint32_t)(edi + 0xa4u), ecx);
/* 819f5e: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 819f61: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 819f63: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 819f66: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 819f68: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 819f6b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 819f6d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 819f70: fadd dword ptr [ebp - 0x200] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe00u)));
/* 819f76: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_819f79: /* 819f79: test byte ptr [esi + 0x1c8], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1c8u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819f80: je 0x81a120 */
  if (zf) goto L_81a120;
L_819f86: /* 819f86: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 819f88: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 819f8b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 819f8d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 819f90: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 819f93: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 819f99: fsub dword ptr [ebp - 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 819f9f: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 819fa5: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 819fab: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 819fae: lea eax, [ebp - 0x1cc] */
  eax = (uint32_t)(ebp + 0xfffffe34u);
/* 819fb4: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 819fb7: mov dword ptr [ebp - 0x1cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe34u), 0x3f800000u);
/* 819fc1: fsub dword ptr [ebp - 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff50u)));
/* 819fc7: mov dword ptr [ebp - 0x1c8], 0 */
  W32((uint32_t)(ebp + 0xfffffe38u), 0x0u);
/* 819fd1: mov dword ptr [ebp - 0x1c4], 0 */
  W32((uint32_t)(ebp + 0xfffffe3cu), 0x0u);
/* 819fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819fdc: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 819fdf: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 819fe2: fsub dword ptr [ebp - 0xac] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff54u)));
/* 819fe8: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 819feb: fld dword ptr [edi + 0x60] */
  { double v = F32((uint32_t)(edi + 0x60u)); FPUSH(v); }
/* 819fee: fmul dword ptr [edi + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x54u)));
/* 819ff1: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819ff4: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 819ffa: call 0x99c958 */
  esp -= 4; W32(esp, 0x819fffu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 819fff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a000: lea ecx, [ebp - 0x328] */
  ecx = (uint32_t)(ebp + 0xfffffcd8u);
/* 81a006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a007: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 81a00a: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x81a010u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 81a010: fld dword ptr [edi + 0x64] */
  { double v = F32((uint32_t)(edi + 0x64u)); FPUSH(v); }
/* 81a013: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a015: fmul dword ptr [edi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x58u)));
/* 81a018: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 81a01b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81a01e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81a021: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 81a024: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 81a027: lea eax, [ebp - 0x1d8] */
  eax = (uint32_t)(ebp + 0xfffffe28u);
/* 81a02d: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 81a033: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 81a036: mov dword ptr [ebp - 0x1d8], 0 */
  W32((uint32_t)(ebp + 0xfffffe28u), 0x0u);
/* 81a040: mov dword ptr [ebp - 0x1d4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe2cu), 0x3f800000u);
/* 81a04a: mov dword ptr [ebp - 0x1d0], 0 */
  W32((uint32_t)(ebp + 0xfffffe30u), 0x0u);
/* 81a054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a055: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a05au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a05a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a05b: lea ecx, [ebp - 0x2bc] */
  ecx = (uint32_t)(ebp + 0xfffffd44u);
/* 81a061: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a062: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 81a065: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x81a06bu); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 81a06b: fld dword ptr [edi + 0x68] */
  { double v = F32((uint32_t)(edi + 0x68u)); FPUSH(v); }
/* 81a06e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a070: fmul dword ptr [edi + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5cu)));
/* 81a073: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 81a076: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81a079: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81a07c: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 81a07f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 81a082: lea eax, [ebp - 0x184] */
  eax = (uint32_t)(ebp + 0xfffffe7cu);
/* 81a088: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 81a08e: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 81a091: mov dword ptr [ebp - 0x184], 0 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x0u);
/* 81a09b: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 81a0a5: mov dword ptr [ebp - 0x17c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x3f800000u);
/* 81a0af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a0b0: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a0b5u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a0b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a0b6: lea ecx, [ebp - 0x340] */
  ecx = (uint32_t)(ebp + 0xfffffcc0u);
/* 81a0bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a0bd: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 81a0c0: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x81a0c6u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 81a0c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a0c8: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 81a0cb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81a0ce: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 81a0d1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 81a0d4: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 81a0d7: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 81a0da: mov eax, edi */
  eax = edi;
/* 81a0dc: fadd dword ptr [ebp - 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 81a0e2: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 81a0e8: mov ecx, dword ptr [ebp - 0x13c] */
  ecx = R32((uint32_t)(ebp + 0xfffffec4u));
/* 81a0ee: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 81a0f1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81a0f3: fadd dword ptr [ebp - 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff50u)));
/* 81a0f9: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 81a0ff: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 81a102: mov edx, dword ptr [ebp - 0x138] */
  edx = R32((uint32_t)(ebp + 0xfffffec8u));
/* 81a108: fadd dword ptr [ebp - 0xac] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff54u)));
/* 81a10e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 81a111: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 81a117: mov ecx, dword ptr [ebp - 0x134] */
  ecx = R32((uint32_t)(ebp + 0xfffffeccu));
/* 81a11d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_81a120: /* 81a120: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a122: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 81a129: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 81a130: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 81a137: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 81a13e: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 81a145: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 81a14c: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 81a153: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a159: /* 81a159: cmp byte ptr [esi + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81a160: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a166: /* 81a166: test byte ptr [esi + 0x34], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a16a: je 0x81a30a */
  if (zf) goto L_81a30a;
L_81a170: /* 81a170: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 81a172: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 81a175: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 81a177: lea edx, [ebp - 0x2d4] */
  edx = (uint32_t)(ebp + 0xfffffd2cu);
/* 81a17d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a17e: lea ecx, [ebp - 0x1b4] */
  ecx = (uint32_t)(ebp + 0xfffffe4cu);
/* 81a184: fstp dword ptr [ebp - 0x1b4] */
  WF32((uint32_t)(ebp + 0xfffffe4cu), ST0); FPOP();
/* 81a18a: mov dword ptr [ebp - 0x260], 0 */
  W32((uint32_t)(ebp + 0xfffffda0u), 0x0u);
/* 81a194: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 81a197: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 81a19a: fstp dword ptr [ebp - 0x1b0] */
  WF32((uint32_t)(ebp + 0xfffffe50u), ST0); FPOP();
/* 81a1a0: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 81a1a3: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 81a1a6: fstp dword ptr [ebp - 0x1ac] */
  WF32((uint32_t)(ebp + 0xfffffe54u), ST0); FPOP();
/* 81a1ac: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x81a1b2u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 81a1b2: fld dword ptr [esi + 0x430] */
  { double v = F32((uint32_t)(esi + 0x430u)); FPUSH(v); }
/* 81a1b8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 81a1ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81a1bd: fld dword ptr [esi + 0x434] */
  { double v = F32((uint32_t)(esi + 0x434u)); FPUSH(v); }
/* 81a1c3: mov dword ptr [ebp - 0x154], 0 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x0u);
/* 81a1cd: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 81a1d0: mov ecx, dword ptr [ebp - 0x154] */
  ecx = R32((uint32_t)(ebp + 0xfffffeacu));
/* 81a1d6: fld dword ptr [esi + 0x438] */
  { double v = F32((uint32_t)(esi + 0x438u)); FPUSH(v); }
/* 81a1dc: mov dword ptr [ebp - 0x150], 0 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x0u);
/* 81a1e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 81a1e9: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 81a1ef: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 81a1f5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81a1f8: fstp dword ptr [ebp - 0x248] */
  WF32((uint32_t)(ebp + 0xfffffdb8u), ST0); FPOP();
/* 81a1fe: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a200: mov dword ptr [ebp - 0x14c], 0 */
  W32((uint32_t)(ebp + 0xfffffeb4u), 0x0u);
/* 81a20a: fmul dword ptr [edi + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x6cu)));
/* 81a20d: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 81a213: fmul dword ptr [edi + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x70u)));
/* 81a216: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 81a21c: fld dword ptr [ebp - 0x248] */
  { double v = F32((uint32_t)(ebp + 0xfffffdb8u)); FPUSH(v); }
/* 81a222: fmul dword ptr [edi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x74u)));
/* 81a225: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 81a22b: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 81a231: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 81a233: fstp dword ptr [ebp - 0x19c] */
  WF32((uint32_t)(ebp + 0xfffffe64u), ST0); FPOP();
/* 81a239: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 81a23f: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 81a242: fstp dword ptr [ebp - 0x198] */
  WF32((uint32_t)(ebp + 0xfffffe68u), ST0); FPOP();
/* 81a248: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 81a24e: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 81a251: fstp dword ptr [ebp - 0x194] */
  WF32((uint32_t)(ebp + 0xfffffe6cu), ST0); FPOP();
/* 81a257: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a259: mov eax, esp */
  eax = esp;
/* 81a25b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81a25d: mov ecx, dword ptr [ebp - 0x150] */
  ecx = R32((uint32_t)(ebp + 0xfffffeb0u));
/* 81a263: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 81a266: mov ecx, dword ptr [ebp - 0x14c] */
  ecx = R32((uint32_t)(ebp + 0xfffffeb4u));
/* 81a26c: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 81a271: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81a274: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81a275: lea eax, [ebp - 0x19c] */
  eax = (uint32_t)(ebp + 0xfffffe64u);
/* 81a27b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a27c: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 81a282: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a283: lea ecx, [ebp - 0x28c] */
  ecx = (uint32_t)(ebp + 0xfffffd74u);
/* 81a289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a28a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a28d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x81a293u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81a293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a295: jne 0x81a30a */
  if (!zf) goto L_81a30a;
L_81a297: /* 81a297: fld dword ptr [ebp - 0x284] */
  { double v = F32((uint32_t)(ebp + 0xfffffd7cu)); FPUSH(v); }
/* 81a29d: mov edx, dword ptr [ebp - 0x278] */
  edx = R32((uint32_t)(ebp + 0xfffffd88u));
/* 81a2a3: fsub dword ptr [ebp - 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff38u)));
/* 81a2a9: mov eax, dword ptr [ebp - 0x274] */
  eax = R32((uint32_t)(ebp + 0xfffffd8cu));
/* 81a2af: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 81a2b5: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 81a2b8: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 81a2be: mov edx, dword ptr [ebp - 0x148] */
  edx = R32((uint32_t)(ebp + 0xfffffeb8u));
/* 81a2c4: fld dword ptr [ebp - 0x280] */
  { double v = F32((uint32_t)(ebp + 0xfffffd80u)); FPUSH(v); }
/* 81a2ca: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 81a2cd: fsub dword ptr [ebp - 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff3cu)));
/* 81a2d3: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 81a2d6: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 81a2d9: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 81a2e0: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 81a2e6: fld dword ptr [ebp - 0x27c] */
  { double v = F32((uint32_t)(ebp + 0xfffffd84u)); FPUSH(v); }
/* 81a2ec: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 81a2f2: fsub dword ptr [ebp - 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff40u)));
/* 81a2f8: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 81a2fb: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 81a301: mov ecx, dword ptr [ebp - 0x140] */
  ecx = R32((uint32_t)(ebp + 0xfffffec0u));
/* 81a307: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
L_81a30a: /* 81a30a: test byte ptr [esi + 0x5c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x5cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a30e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81a311: je 0x81a426 */
  if (zf) goto L_81a426;
L_81a317: /* 81a317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a319: jne 0x81a42e */
  if (!zf) goto L_81a42e;
L_81a31f: /* 81a31f: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 81a322: xor edx, edx */
  edx = 0;
/* 81a324: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a326: jle 0x81a8e5 */
  if ((zf || sf != of)) goto L_81a8e5;
L_81a32c: /* 81a32c: mov ebx, dword ptr [esi + 0x60] */
  ebx = R32((uint32_t)(esi + 0x60u));
/* 81a32f: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
L_81a332: /* 81a332: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 81a335: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 81a338: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 81a33b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 81a33e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a340: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 81a342: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 81a344: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a346: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 81a349: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81a34f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a351: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a354: jne 0x81a361 */
  if (!zf) goto L_81a361;
L_81a356: /* 81a356: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a358: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 81a35f: jmp 0x81a37c */
  goto L_81a37c;
L_81a361: /* 81a361: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a367: mov dword ptr [ebp - 0x24], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xffffffffu);
/* 81a36e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a370: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a373: jnp 0x81a37c */
  if (!pf) goto L_81a37c;
L_81a375: /* 81a375: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_81a37c: /* 81a37c: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 81a37e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 81a380: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 81a383: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 81a386: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a388: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 81a38b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 81a38e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a390: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 81a393: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81a399: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a39b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a39e: jne 0x81a3ab */
  if (!zf) goto L_81a3ab;
L_81a3a0: /* 81a3a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a3a2: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 81a3a9: jmp 0x81a3c6 */
  goto L_81a3c6;
L_81a3ab: /* 81a3ab: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a3b1: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 81a3b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a3ba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a3bd: jnp 0x81a3c6 */
  if (!pf) goto L_81a3c6;
L_81a3bf: /* 81a3bf: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_81a3c6: /* 81a3c6: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81a3c9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81a3cc: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 81a3ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a3d0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a3d3: jp 0x81a3e9 */
  if (pf) goto L_81a3e9;
L_81a3d5: /* 81a3d5: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 81a3d8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 81a3d9: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81a3dc: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a3de: jl 0x81a332 */
  if ((sf != of)) goto L_81a332;
L_81a3e4: /* 81a3e4: jmp 0x81a8e5 */
  goto L_81a8e5;
L_81a3e9: /* 81a3e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81a3ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a3eb: lea edx, [ebp - 0x31c] */
  edx = (uint32_t)(ebp + 0xfffffce4u);
/* 81a3f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81a3f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a3f3: call 0x6c8fbc */
  esp -= 4; W32(esp, 0x81a3f8u); SPILL(); f_6c8fbc(); if (g_unwind) return; RELOAD();
/* 81a3f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81a3fa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81a3fd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81a400: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 81a403: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 81a405: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 81a408: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 81a40b: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 81a40e: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 81a411: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 81a414: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 81a417: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81a41a: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 81a41d: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 81a424: jmp 0x81a42e */
  goto L_81a42e;
L_81a426: /* 81a426: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a428: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a42e: /* 81a42e: mov al, byte ptr [esi + 0x2f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2f4u))) & 0xffu);
/* 81a434: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a436: je 0x81a5c9 */
  if (zf) goto L_81a5c9;
L_81a43c: /* 81a43c: mov ecx, dword ptr [esi + 0x3f0] */
  ecx = R32((uint32_t)(esi + 0x3f0u));
/* 81a442: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 81a448: mov ecx, dword ptr [edx + 0x40] */
  ecx = R32((uint32_t)(edx + 0x40u));
/* 81a44b: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 81a44e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a450: je 0x81a5c9 */
  if (zf) goto L_81a5c9;
L_81a456: /* 81a456: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 81a459: xor ebx, ebx */
  ebx = 0;
/* 81a45b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81a45c: je 0x81a481 */
  if (zf) goto L_81a481;
L_81a45e: /* 81a45e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81a45f: je 0x81a479 */
  if (zf) goto L_81a479;
L_81a461: /* 81a461: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81a462: jne 0x81a490 */
  if (!zf) goto L_81a490;
L_81a464: /* 81a464: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x81a46au); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 81a46a: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 81a470: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a475u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a475: mov ebx, eax */
  ebx = eax;
/* 81a477: jmp 0x81a490 */
  goto L_81a490;
L_81a479: /* 81a479: mov ebx, dword ptr [edi + 0xb8] */
  ebx = R32((uint32_t)(edi + 0xb8u));
/* 81a47f: jmp 0x81a490 */
  goto L_81a490;
L_81a481: /* 81a481: mov ebx, dword ptr [esi + 0x460] */
  ebx = R32((uint32_t)(esi + 0x460u));
/* 81a487: lea edx, [ebx + 1] */
  edx = (uint32_t)(ebx + 0x1u);
/* 81a48a: mov dword ptr [esi + 0x460], edx */
  W32((uint32_t)(esi + 0x460u), edx);
L_81a490: /* 81a490: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 81a496: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x81a49cu); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 81a49c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a4a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a4a4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a4a7: jnp 0x81a4bd */
  if (!pf) goto L_81a4bd;
L_81a4a9: /* 81a4a9: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 81a4af: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x81a4b5u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 81a4b5: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81a4bb: jmp 0x81a4c3 */
  goto L_81a4c3;
L_81a4bd: /* 81a4bd: fild dword ptr [esi + 0x2d8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
L_81a4c3: /* 81a4c3: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a4c8u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a4c8: fld dword ptr [esi + 0x2f8] */
  { double v = F32((uint32_t)(esi + 0x2f8u)); FPUSH(v); }
/* 81a4ce: mov ecx, eax */
  ecx = eax;
/* 81a4d0: mov eax, ebx */
  eax = ebx;
/* 81a4d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81a4d3: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x81a4d3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 81a4d5: mov ebx, edx */
  ebx = edx;
/* 81a4d7: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a4dcu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a4dc: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81a4de: mov eax, dword ptr [esi + 0x2d8] */
  eax = R32((uint32_t)(esi + 0x2d8u));
/* 81a4e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 81a4e5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a4e7: jge 0x81a4ed */
  if ((sf == of)) goto L_81a4ed;
L_81a4e9: /* 81a4e9: xor ebx, ebx */
  ebx = 0;
/* 81a4eb: jmp 0x81a4f3 */
  goto L_81a4f3;
L_81a4ed: /* 81a4ed: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a4ef: jl 0x81a4f3 */
  if ((sf != of)) goto L_81a4f3;
L_81a4f1: /* 81a4f1: mov ebx, eax */
  ebx = eax;
L_81a4f3: /* 81a4f3: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 81a4f9: lea ebx, [ebx + ebx*4] */
  ebx = (uint32_t)(ebx + ebx*4);
/* 81a4fc: shl ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 81a4ff: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81a501: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81a504: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x81a50au); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 81a50a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81a50d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a510: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a513: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a519u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a519: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81a51c: lea ecx, [esi + 0x300] */
  ecx = (uint32_t)(esi + 0x300u);
/* 81a522: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a528u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a528: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81a52b: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81a52e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a530: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a533: jne 0x81a5c9 */
  if (!zf) goto L_81a5c9;
L_81a539: /* 81a539: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 81a53f: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 81a545: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 81a548: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 81a54b: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 81a551: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 81a554: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 81a55a: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 81a55c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a55e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a560: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 81a563: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 81a565: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a568: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 81a56b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 81a56e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a574u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a574: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a575: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a578: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a57b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a57e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a584u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a584: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a585: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a588: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a58b: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a58e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a594u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a594: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a597: fmul dword ptr [eax + 0x2cc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2ccu)));
/* 81a59d: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 81a5a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81a5a3: mov ecx, esp */
  ecx = esp;
/* 81a5a5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 81a5a9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81a5ab: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 81a5ae: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81a5b1: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 81a5b4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81a5b7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a5ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81a5bc: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81a5bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a5c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a5c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a5c3: call dword ptr [ebx + 0x80] */
  { uint32_t t = R32((uint32_t)(ebx + 0x80u)); esp -= 4; W32(esp, 0x81a5c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81a5c9: /* 81a5c9: test byte ptr [esi + 0x6c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x6cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a5cd: je 0x81a646 */
  if (zf) goto L_81a646;
L_81a5cf: /* 81a5cf: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 81a5d2: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a5d8u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a5d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a5d9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a5dc: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x81a5e2u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 81a5e2: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 81a5e8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81a5eb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81a5ec: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a5ee: jl 0x81a646 */
  if ((sf != of)) goto L_81a646;
L_81a5f0: /* 81a5f0: test byte ptr [esi + 0x104], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a5f7: je 0x819d5a */
  if (zf) goto L_819d5a;
L_81a5fd: /* 81a5fd: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a600: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81a602: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 81a608: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 81a60e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a60f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a613: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a614: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 81a617: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a61a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a61b: mov ecx, esi */
  ecx = esi;
/* 81a61d: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 81a627: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 81a631: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 81a63b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x81a641u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81a641: jmp 0x81a789 */
  goto L_81a789;
L_81a646: /* 81a646: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a649: lea ebx, [edi + 0x18] */
  ebx = (uint32_t)(edi + 0x18u);
/* 81a64c: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 81a64f: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 81a652: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a655: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a656: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 81a659: lea eax, [ebp - 0x2ec] */
  eax = (uint32_t)(ebp + 0xfffffd14u);
/* 81a65f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a663: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 81a666: mov ecx, ebx */
  ecx = ebx;
/* 81a668: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 81a66e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a670: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81a676: fstp dword ptr [ebp - 0x2a4] */
  WF32((uint32_t)(ebp + 0xfffffd5cu), ST0); FPOP();
/* 81a67c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81a682: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 81a688: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81a68e: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 81a690: fsub dword ptr [ebp - 0x2a4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffd5cu)));
/* 81a696: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 81a698: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 81a69b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 81a69d: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 81a6a0: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 81a6a3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81a6a5: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 81a6a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a6aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a6ac: call dword ptr [0xcfaaf0] */
  esp -= 4; W32(esp, 0x81a6b2u); SPILL(); f_4e31c5(); if (g_unwind) return; /* Core!?MirrorByVector@FVector@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 81a6b2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a6b4: mov ecx, ebx */
  ecx = ebx;
/* 81a6b6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81a6b8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81a6bb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81a6be: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81a6c1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81a6c4: lea ecx, [ebp - 0x34c] */
  ecx = (uint32_t)(ebp + 0xfffffcb4u);
/* 81a6ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a6cb: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 81a6ce: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81a6d4u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81a6d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a6d5: lea edx, [ebp - 0x304] */
  edx = (uint32_t)(ebp + 0xfffffcfcu);
/* 81a6db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a6dc: mov ecx, ebx */
  ecx = ebx;
/* 81a6de: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x81a6e4u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 81a6e4: test byte ptr [esi + 0x260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a6eb: je 0x81a711 */
  if (zf) goto L_81a711;
L_81a6ed: /* 81a6ed: lea eax, [ebp - 0x334] */
  eax = (uint32_t)(ebp + 0xfffffcccu);
/* 81a6f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a6f4: lea ecx, [esi + 0x264] */
  ecx = (uint32_t)(esi + 0x264u);
/* 81a6fa: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81a700u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81a700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a701: lea ecx, [ebp - 0x2c8] */
  ecx = (uint32_t)(ebp + 0xfffffd38u);
/* 81a707: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a708: lea ecx, [edi + 0x30] */
  ecx = (uint32_t)(edi + 0x30u);
/* 81a70b: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x81a711u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
L_81a711: /* 81a711: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81a714: mov ebx, edi */
  ebx = edi;
/* 81a716: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a71c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81a71f: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a725: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 81a728: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a72e: fstp dword ptr [ebp - 0x230] */
  WF32((uint32_t)(ebp + 0xfffffdd0u), ST0); FPOP();
/* 81a734: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a736: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 81a739: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 81a73f: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* 81a745: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 81a747: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 81a74a: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 81a750: fld dword ptr [ebp - 0x230] */
  { double v = F32((uint32_t)(ebp + 0xfffffdd0u)); FPUSH(v); }
/* 81a756: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* 81a75c: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 81a75f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 81a762: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 81a768: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 81a76e: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 81a771: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 81a774: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 81a776: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 81a77c: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 81a77f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81a780: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 81a783: mov dword ptr [edi + 0xb8], eax */
  W32((uint32_t)(edi + 0xb8u), eax);
L_81a789: /* 81a789: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 81a78c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a78e: jl 0x81a8e5 */
  if ((sf != of)) goto L_81a8e5;
L_81a794: /* 81a794: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 81a79a: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 81a7a0: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 81a7a3: test byte ptr [ebx + 0x3f4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x3f4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a7aa: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a7b0: /* 81a7b0: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 81a7b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a7b8: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a7be: /* 81a7be: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a7c1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a7c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a7c9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a7cc: jnp 0x81a8e5 */
  if (!pf) goto L_81a8e5;
L_81a7d2: /* 81a7d2: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 81a7d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a7d7: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 81a7de: jle 0x81a8e5 */
  if ((zf || sf != of)) goto L_81a8e5;
L_81a7e4: /* 81a7e4: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81a7e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81a7ea: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a7f0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 81a7f2: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81a7f5: lea eax, [ebp - 0x178] */
  eax = (uint32_t)(ebp + 0xfffffe88u);
/* 81a7fb: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a801: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a802: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 81a805: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 81a80b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a811: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 81a813: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a815: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a816: fstp dword ptr [ebp - 0x1e8] */
  WF32((uint32_t)(ebp + 0xfffffe18u), ST0); FPOP();
/* 81a81c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a81e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a81f: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 81a822: mov ecx, ebx */
  ecx = ebx;
/* 81a824: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 81a82a: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 81a82d: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 81a833: fld dword ptr [ebp - 0x1e8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe18u)); FPUSH(v); }
/* 81a839: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 81a83c: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 81a842: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x81a848u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81a848: test byte ptr [esi + 0x98], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x98u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a84f: je 0x81a8af */
  if (zf) goto L_81a8af;
L_81a851: /* 81a851: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 81a857: mov ecx, dword ptr [ebx + 0x3fc] */
  ecx = R32((uint32_t)(ebx + 0x3fcu));
/* 81a85d: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 81a863: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81a865: lea ecx, [ebp - 0x2e0] */
  ecx = (uint32_t)(ebp + 0xfffffd20u);
/* 81a86b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a86c: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 81a872: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81a875: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81a87bu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81a87b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81a87e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 81a880: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81a883: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 81a886: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 81a889: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 81a88c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a88f: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 81a895: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a897: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* 81a89a: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 81a89d: fadd dword ptr [eax + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x1cu)));
/* 81a8a0: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 81a8a3: fld dword ptr [ebp - 0x1f4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe0cu)); FPUSH(v); }
/* 81a8a9: fadd dword ptr [eax + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x20u)));
/* 81a8ac: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
L_81a8af: /* 81a8af: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 81a8b5: mov ecx, dword ptr [ebx + 0x40c] */
  ecx = R32((uint32_t)(ebx + 0x40cu));
/* 81a8bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81a8bc: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a8be: jge 0x81a8c2 */
  if ((sf == of)) goto L_81a8c2;
L_81a8c0: /* 81a8c0: mov ecx, eax */
  ecx = eax;
L_81a8c2: /* 81a8c2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81a8c3: idiv dword ptr [ebx + 0x45c] */
  { int32_t d = (int32_t)R32((uint32_t)(ebx + 0x45cu)); if (!d) d = (int32_t)guest_divzero(0x81a8c3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 81a8c9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a8cc: mov dword ptr [ebx + 0x40c], ecx */
  W32((uint32_t)(ebx + 0x40cu), ecx);
/* 81a8d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81a8d3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 81a8d6: mov dword ptr [ebx + 0x408], edx */
  W32((uint32_t)(ebx + 0x408u), edx);
/* 81a8dc: cmp eax, dword ptr [esi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a8df: jl 0x81a7e4 */
  if ((sf != of)) goto L_81a7e4;
L_81a8e5: /* 81a8e5: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81a8eb: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 81a8f1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a8f7: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 81a8fe: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 81a901: mov byte ptr [ebp - 0x20], 0xff */
  W8((uint32_t)(ebp + 0xffffffe0u), 0xffu);
/* 81a905: mov byte ptr [ebp - 0x1f], 0xff */
  W8((uint32_t)(ebp + 0xffffffe1u), 0xffu);
/* 81a909: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a90b: mov byte ptr [ebp - 0x1e], 0xff */
  W8((uint32_t)(ebp + 0xffffffe2u), 0xffu);
/* 81a90f: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
/* 81a913: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a916: jnp 0x81a930 */
  if (!pf) goto L_81a930;
L_81a918: /* 81a918: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81a91b: fdiv dword ptr [edi + 0xb0] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0xb0u)));
/* 81a921: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81a927: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a929: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a92c: jp 0x81a963 */
  if (pf) goto L_81a963;
L_81a92e: /* 81a92e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81a930: /* 81a930: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_81a937: /* 81a937: mov eax, dword ptr [esi + 0x288] */
  eax = R32((uint32_t)(esi + 0x288u));
/* 81a93d: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a93f: je 0x81aa47 */
  if (zf) goto L_81aa47;
L_81a945: /* 81a945: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a947: je 0x81a980 */
  if (zf) goto L_81a980;
L_81a949: /* 81a949: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 81a94f: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81a955: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 81a95b: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 81a95e: jmp 0x81aa47 */
  goto L_81aa47;
L_81a963: /* 81a963: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 81a969: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a96b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a96e: jp 0x81a975 */
  if (pf) goto L_81a975;
L_81a970: /* 81a970: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81a973: jmp 0x81a937 */
  goto L_81a937;
L_81a975: /* 81a975: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a977: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 81a97e: jmp 0x81a937 */
  goto L_81a937;
L_81a980: /* 81a980: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81a986: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a98c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a98e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a991: jnp 0x81aa47 */
  if (!pf) goto L_81aa47;
L_81a997: /* 81a997: fld dword ptr [esi + 0x298] */
  { double v = F32((uint32_t)(esi + 0x298u)); FPUSH(v); }
/* 81a99d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a99e: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81a9a4: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81a9a7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a9aa: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81a9b0u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81a9b0: mov eax, dword ptr [esi + 0x290] */
  eax = R32((uint32_t)(esi + 0x290u));
/* 81a9b6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81a9b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81a9bc: xor ecx, ecx */
  ecx = 0;
/* 81a9be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a9c0: jle 0x81aa47 */
  if ((zf || sf != of)) goto L_81aa47;
L_81a9c6: /* 81a9c6: mov ebx, dword ptr [esi + 0x28c] */
  ebx = R32((uint32_t)(esi + 0x28cu));
/* 81a9cc: mov edx, ebx */
  edx = ebx;
/* 81a9ce: mov edi, edi */
  edi = edi;
L_81a9d0: /* 81a9d0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81a9d2: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81a9d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a9d7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a9da: je 0x81a9ec */
  if (zf) goto L_81a9ec;
L_81a9dc: /* 81a9dc: mov eax, dword ptr [esi + 0x290] */
  eax = R32((uint32_t)(esi + 0x290u));
/* 81a9e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81a9e3: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81a9e6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a9e8: jl 0x81a9d0 */
  if ((sf != of)) goto L_81a9d0;
L_81a9ea: /* 81a9ea: jmp 0x81aa47 */
  goto L_81aa47;
L_81a9ec: /* 81a9ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a9ee: fld dword ptr [ebx + ecx*8 + 4] */
  { double v = F32((uint32_t)(ebx + ecx*8 + 0x4u)); FPUSH(v); }
/* 81a9f2: fld dword ptr [ebx + ecx*8] */
  { double v = F32((uint32_t)(ebx + ecx*8)); FPUSH(v); }
/* 81a9f5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81a9f8: je 0x81aa04 */
  if (zf) goto L_81aa04;
L_81a9fa: /* 81a9fa: fld dword ptr [ebx + ecx*8 - 4] */
  { double v = F32((uint32_t)(ebx + ecx*8 + 0xfffffffcu)); FPUSH(v); }
/* 81a9fe: fld dword ptr [ebx + ecx*8 - 8] */
  { double v = F32((uint32_t)(ebx + ecx*8 + 0xfffffff8u)); FPUSH(v); }
/* 81aa02: jmp 0x81aa10 */
  goto L_81aa10;
L_81aa04: /* 81aa04: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81aa0a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_81aa10: /* 81aa10: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81aa13: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81aa19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aa1b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81aa1e: jnp 0x81aa30 */
  if (!pf) goto L_81aa30;
L_81aa20: /* 81aa20: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81aa23: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aa25: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81aa28: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 81aa2a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 81aa2c: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81aa2e: jmp 0x81aa38 */
  goto L_81aa38;
L_81aa30: /* 81aa30: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aa32: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81aa38: /* 81aa38: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81aa3a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aa3c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81aa3e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 81aa40: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 81aa43: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81aa45: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81aa47: /* 81aa47: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81aa4a: lea eax, [edi + 0x6c] */
  eax = (uint32_t)(edi + 0x6cu);
/* 81aa4d: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 81aa50: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 81aa56: mov ecx, dword ptr [ebp - 0x130] */
  ecx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 81aa5c: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81aa5f: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 81aa62: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 81aa68: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81aa6b: mov edx, dword ptr [ebp - 0x12c] */
  edx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 81aa71: fmul dword ptr [edi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x2cu)));
/* 81aa74: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81aa76: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 81aa79: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 81aa7f: mov ecx, dword ptr [ebp - 0x128] */
  ecx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 81aa85: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81aa88: test byte ptr [esi + 0x3d4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3d4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81aa8f: je 0x81ac54 */
  if (zf) goto L_81ac54;
L_81aa95: /* 81aa95: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81aa9b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81aaa1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aaa3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81aaa6: jnp 0x81ac54 */
  if (!pf) goto L_81ac54;
L_81aaac: /* 81aaac: fld dword ptr [esi + 0x3e4] */
  { double v = F32((uint32_t)(esi + 0x3e4u)); FPUSH(v); }
/* 81aab2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81aab3: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81aab9: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81aabc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81aabf: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81aac5u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81aac5: mov eax, dword ptr [esi + 0x3dc] */
  eax = R32((uint32_t)(esi + 0x3dcu));
/* 81aacb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81aace: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81aad1: xor ecx, ecx */
  ecx = 0;
/* 81aad3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81aad5: jle 0x81ac54 */
  if ((zf || sf != of)) goto L_81ac54;
L_81aadb: /* 81aadb: mov ebx, dword ptr [esi + 0x3d8] */
  ebx = R32((uint32_t)(esi + 0x3d8u));
/* 81aae1: mov edx, ebx */
  edx = ebx;
L_81aae3: /* 81aae3: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81aae5: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81aae8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aaea: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81aaed: je 0x81ab02 */
  if (zf) goto L_81ab02;
L_81aaef: /* 81aaef: mov eax, dword ptr [esi + 0x3dc] */
  eax = R32((uint32_t)(esi + 0x3dcu));
/* 81aaf5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81aaf6: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81aaf9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81aafb: jl 0x81aae3 */
  if ((sf != of)) goto L_81aae3;
L_81aafd: /* 81aafd: jmp 0x81ac54 */
  goto L_81ac54;
L_81ab02: /* 81ab02: mov edx, ecx */
  edx = ecx;
/* 81ab04: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 81ab07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ab09: fld dword ptr [edx + ebx] */
  { double v = F32((uint32_t)(edx + ebx)); FPUSH(v); }
/* 81ab0c: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* 81ab0f: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 81ab12: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 81ab14: mov dword ptr [ebp - 0xf0], ebx */
  W32((uint32_t)(ebp + 0xffffff10u), ebx);
/* 81ab1a: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 81ab1d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81ab20: mov dword ptr [ebp - 0xec], ebx */
  W32((uint32_t)(ebp + 0xffffff14u), ebx);
/* 81ab26: mov dword ptr [ebp - 0xe8], edx */
  W32((uint32_t)(ebp + 0xffffff18u), edx);
/* 81ab2c: je 0x81ab4a */
  if (zf) goto L_81ab4a;
L_81ab2e: /* 81ab2e: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 81ab31: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 81ab34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81ab36: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 81ab3c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 81ab3f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81ab42: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 81ab48: jmp 0x81ab8c */
  goto L_81ab8c;
L_81ab4a: /* 81ab4a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81ab50: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 81ab5a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 81ab60: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 81ab6a: mov eax, dword ptr [ebp - 0x114] */
  eax = R32((uint32_t)(ebp + 0xfffffeecu));
/* 81ab70: mov dword ptr [ebp - 0x110], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x3f800000u);
/* 81ab7a: mov ecx, dword ptr [ebp - 0x110] */
  ecx = R32((uint32_t)(ebp + 0xfffffef0u));
/* 81ab80: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 81ab86: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
L_81ab8c: /* 81ab8c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81ab8e: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 81ab94: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ab9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ab9c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ab9f: jnp 0x81abb0 */
  if (!pf) goto L_81abb0;
L_81aba1: /* 81aba1: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81aba4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aba6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81aba8: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81abaa: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 81abac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abae: jmp 0x81abba */
  goto L_81abba;
L_81abb0: /* 81abb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abb4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81abba: /* 81abba: fld dword ptr [ebp - 0xf0] */
  { double v = F32((uint32_t)(ebp + 0xffffff10u)); FPUSH(v); }
/* 81abc0: lea edx, [edi + 0x90] */
  edx = (uint32_t)(edi + 0x90u);
/* 81abc6: fsub dword ptr [ebp - 0x8c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff74u)));
/* 81abcc: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 81abd2: fsub dword ptr [ebp - 0x88] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff78u)));
/* 81abd8: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 81abde: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 81abe4: fstp dword ptr [ebp - 0x1dc] */
  WF32((uint32_t)(ebp + 0xfffffe24u), ST0); FPOP();
/* 81abea: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81abec: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81abee: fstp dword ptr [ebp - 0x190] */
  WF32((uint32_t)(ebp + 0xfffffe70u), ST0); FPOP();
/* 81abf4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81abf6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81abf8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81abfa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abfc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81abfe: fmul dword ptr [ebp - 0x1dc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe24u)));
/* 81ac04: fstp dword ptr [ebp - 0x188] */
  WF32((uint32_t)(ebp + 0xfffffe78u), ST0); FPOP();
/* 81ac0a: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 81ac10: fadd dword ptr [ebp - 0x8c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff74u)));
/* 81ac16: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 81ac1c: mov eax, dword ptr [ebp - 0xfc] */
  eax = R32((uint32_t)(ebp + 0xffffff04u));
/* 81ac22: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81ac24: fadd dword ptr [ebp - 0x88] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff78u)));
/* 81ac2a: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 81ac30: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 81ac36: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 81ac3c: fadd dword ptr [ebp - 0x84] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 81ac42: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81ac45: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 81ac4b: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 81ac51: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_81ac54: /* 81ac54: test byte ptr [esi + 0x1fc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1fcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ac5b: je 0x81adfd */
  if (zf) goto L_81adfd;
L_81ac61: /* 81ac61: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81ac67: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ac6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ac6f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ac72: jnp 0x81adfd */
  if (!pf) goto L_81adfd;
L_81ac78: /* 81ac78: fld dword ptr [esi + 0x20c] */
  { double v = F32((uint32_t)(esi + 0x20cu)); FPUSH(v); }
/* 81ac7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ac7f: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81ac85: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81ac88: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81ac8b: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81ac91u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81ac91: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* 81ac97: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81ac9a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ac9d: xor ecx, ecx */
  ecx = 0;
/* 81ac9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81aca1: jle 0x81adfd */
  if ((zf || sf != of)) goto L_81adfd;
L_81aca7: /* 81aca7: mov ebx, dword ptr [esi + 0x200] */
  ebx = R32((uint32_t)(esi + 0x200u));
/* 81acad: mov edx, ebx */
  edx = ebx;
/* 81acaf: nop  */
L_81acb0: /* 81acb0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81acb2: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81acb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81acb7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81acba: je 0x81accf */
  if (zf) goto L_81accf;
L_81acbc: /* 81acbc: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* 81acc2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81acc3: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81acc6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81acc8: jl 0x81acb0 */
  if ((sf != of)) goto L_81acb0;
L_81acca: /* 81acca: jmp 0x81adfd */
  goto L_81adfd;
L_81accf: /* 81accf: mov edx, ecx */
  edx = ecx;
/* 81acd1: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 81acd4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81acd6: fld dword ptr [edx + ebx] */
  { double v = F32((uint32_t)(edx + ebx)); FPUSH(v); }
/* 81acd9: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* 81acdc: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 81acdf: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 81ace1: mov dword ptr [ebp - 0x124], ebx */
  W32((uint32_t)(ebp + 0xfffffedcu), ebx);
/* 81ace7: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 81acea: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81aced: mov dword ptr [ebp - 0x120], ebx */
  W32((uint32_t)(ebp + 0xfffffee0u), ebx);
/* 81acf3: mov dword ptr [ebp - 0x11c], edx */
  W32((uint32_t)(ebp + 0xfffffee4u), edx);
/* 81acf9: je 0x81ad11 */
  if (zf) goto L_81ad11;
L_81acfb: /* 81acfb: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 81acfe: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 81ad01: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81ad03: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 81ad06: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 81ad09: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81ad0c: mov dword ptr [ebp - 0x7c], edx */
  W32((uint32_t)(ebp + 0xffffff84u), edx);
/* 81ad0f: jmp 0x81ad4d */
  goto L_81ad4d;
L_81ad11: /* 81ad11: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81ad17: mov dword ptr [ebp - 0x10c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x3f800000u);
/* 81ad21: mov edx, dword ptr [ebp - 0x10c] */
  edx = R32((uint32_t)(ebp + 0xfffffef4u));
/* 81ad27: mov dword ptr [ebp - 0x108], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x3f800000u);
/* 81ad31: mov eax, dword ptr [ebp - 0x108] */
  eax = R32((uint32_t)(ebp + 0xfffffef8u));
/* 81ad37: mov dword ptr [ebp - 0x104], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x3f800000u);
/* 81ad41: mov ecx, dword ptr [ebp - 0x104] */
  ecx = R32((uint32_t)(ebp + 0xfffffefcu));
/* 81ad47: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 81ad4a: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
L_81ad4d: /* 81ad4d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81ad4f: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 81ad52: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ad58: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ad5a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ad5d: jnp 0x81ad6e */
  if (!pf) goto L_81ad6e;
L_81ad5f: /* 81ad5f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81ad62: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81ad64: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81ad66: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81ad68: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 81ad6a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81ad6c: jmp 0x81ad78 */
  goto L_81ad78;
L_81ad6e: /* 81ad6e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81ad70: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81ad72: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81ad78: /* 81ad78: fld dword ptr [ebp - 0x124] */
  { double v = F32((uint32_t)(ebp + 0xfffffedcu)); FPUSH(v); }
/* 81ad7e: lea edx, [edi + 0x60] */
  edx = (uint32_t)(edi + 0x60u);
/* 81ad81: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 81ad84: fld dword ptr [ebp - 0x120] */
  { double v = F32((uint32_t)(ebp + 0xfffffee0u)); FPUSH(v); }
/* 81ad8a: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 81ad8d: fld dword ptr [ebp - 0x11c] */
  { double v = F32((uint32_t)(ebp + 0xfffffee4u)); FPUSH(v); }
/* 81ad93: fsub dword ptr [ebp - 0x78] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff88u)));
/* 81ad96: fstp dword ptr [ebp - 0x224] */
  WF32((uint32_t)(ebp + 0xfffffddcu), ST0); FPOP();
/* 81ad9c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81ad9e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81ada0: fstp dword ptr [ebp - 0x1a8] */
  WF32((uint32_t)(ebp + 0xfffffe58u), ST0); FPOP();
/* 81ada6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81ada8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81adaa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81adac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81adae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81adb0: fmul dword ptr [ebp - 0x224] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffddcu)));
/* 81adb6: fstp dword ptr [ebp - 0x1a0] */
  WF32((uint32_t)(ebp + 0xfffffe60u), ST0); FPOP();
/* 81adbc: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 81adc2: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 81adc5: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 81adcb: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 81add1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81add3: fadd dword ptr [ebp - 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff84u)));
/* 81add6: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 81addc: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 81ade2: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 81ade8: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 81adeb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81adee: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 81adf4: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 81adfa: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_81adfd: /* 81adfd: test byte ptr [esi + 0x98], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x98u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ae04: je 0x81af67 */
  if (zf) goto L_81af67;
L_81ae0a: /* 81ae0a: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81ae10: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ae16: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ae18: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ae1b: jnp 0x81af67 */
  if (!pf) goto L_81af67;
L_81ae21: /* 81ae21: fld dword ptr [esi + 0xa8] */
  { double v = F32((uint32_t)(esi + 0xa8u)); FPUSH(v); }
/* 81ae27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ae28: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81ae2e: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81ae31: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81ae34: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81ae3au); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81ae3a: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 81ae40: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81ae43: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ae46: xor ecx, ecx */
  ecx = 0;
/* 81ae48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81ae4a: jle 0x81af67 */
  if ((zf || sf != of)) goto L_81af67;
L_81ae50: /* 81ae50: mov edx, dword ptr [esi + 0x9c] */
  edx = R32((uint32_t)(esi + 0x9cu));
/* 81ae56: mov ebx, edx */
  ebx = edx;
L_81ae58: /* 81ae58: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 81ae5a: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 81ae5d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ae5f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ae62: je 0x81ae77 */
  if (zf) goto L_81ae77;
L_81ae64: /* 81ae64: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 81ae6a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81ae6b: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81ae6e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81ae70: jl 0x81ae58 */
  if ((sf != of)) goto L_81ae58;
L_81ae72: /* 81ae72: jmp 0x81af67 */
  goto L_81af67;
L_81ae77: /* 81ae77: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ae79: fld dword ptr [edx + ecx*8] */
  { double v = F32((uint32_t)(edx + ecx*8)); FPUSH(v); }
/* 81ae7c: mov eax, dword ptr [edx + ecx*8 + 4] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x4u));
/* 81ae80: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 81ae83: je 0x81ae8f */
  if (zf) goto L_81ae8f;
L_81ae85: /* 81ae85: mov ebx, dword ptr [edx + ecx*8 - 4] */
  ebx = R32((uint32_t)(edx + ecx*8 + 0xfffffffcu));
/* 81ae89: fld dword ptr [edx + ecx*8 - 8] */
  { double v = F32((uint32_t)(edx + ecx*8 + 0xfffffff8u)); FPUSH(v); }
/* 81ae8d: jmp 0x81aea8 */
  goto L_81aea8;
L_81ae8f: /* 81ae8f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81ae95: mov byte ptr [ebp - 0x74], 0xff */
  W8((uint32_t)(ebp + 0xffffff8cu), 0xffu);
/* 81ae99: mov byte ptr [ebp - 0x73], 0xff */
  W8((uint32_t)(ebp + 0xffffff8du), 0xffu);
/* 81ae9d: mov byte ptr [ebp - 0x72], 0xff */
  W8((uint32_t)(ebp + 0xffffff8eu), 0xffu);
/* 81aea1: mov byte ptr [ebp - 0x71], 0xff */
  W8((uint32_t)(ebp + 0xffffff8fu), 0xffu);
/* 81aea5: mov ebx, dword ptr [ebp - 0x74] */
  ebx = R32((uint32_t)(ebp + 0xffffff8cu));
L_81aea8: /* 81aea8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81aeaa: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 81aead: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81aeb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aeb5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81aeb8: jnp 0x81aec9 */
  if (!pf) goto L_81aec9;
L_81aeba: /* 81aeba: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81aebd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aebf: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81aec1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aec3: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 81aec5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aec7: jmp 0x81aed3 */
  goto L_81aed3;
L_81aec9: /* 81aec9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aecb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aecd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81aed3: /* 81aed3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81aed6: movzx ecx, byte ptr [ebp - 0x22] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffdeu)));
/* 81aeda: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81aedd: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 81aee0: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 81aee2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 81aee5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81aee8: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81aeeb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81aeed: fiadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)));
/* 81aef0: call 0x99c958 */
  esp -= 4; W32(esp, 0x81aef5u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81aef5: movzx edx, byte ptr [ebp - 0x23] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffddu)));
/* 81aef9: mov byte ptr [ebp - 0x1e], al */
  W8((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffu));
/* 81aefc: movzx eax, bh */
  eax = (uint32_t)(((ebx >> 8) & 0xffu));
/* 81aeff: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 81af01: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81af04: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81af07: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af0a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81af0c: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 81af0f: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af14u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af14: movzx ecx, byte ptr [ebp - 0x24] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffdcu)));
/* 81af18: mov byte ptr [ebp - 0x1f], al */
  W8((uint32_t)(ebp + 0xffffffe1u), (eax & 0xffu));
/* 81af1b: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 81af1e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 81af20: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81af23: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81af26: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af29: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81af2b: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 81af2e: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af33u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af33: mov byte ptr [ebp - 0x20], al */
  W8((uint32_t)(ebp + 0xffffffe0u), (eax & 0xffu));
/* 81af36: cmp byte ptr [esi + 0x314], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x314u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81af3d: jne 0x81af61 */
  if (!zf) goto L_81af61;
L_81af3f: /* 81af3f: movzx eax, byte ptr [ebp - 0x15] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 81af43: movzx edx, byte ptr [ebp - 0x21] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu)));
/* 81af47: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 81af49: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81af4c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81af4f: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af52: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81af54: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 81af57: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af5cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af5c: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
/* 81af5f: jmp 0x81af65 */
  goto L_81af65;
L_81af61: /* 81af61: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
L_81af65: /* 81af65: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81af67: /* 81af67: movzx eax, byte ptr [ebp - 0x1e] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe2u)));
/* 81af6b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81af6e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af71: fmul dword ptr [edi + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x84u)));
/* 81af77: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af7cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af7c: movzx ecx, byte ptr [ebp - 0x1f] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe1u)));
/* 81af80: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81af83: mov byte ptr [ebp - 0x1e], al */
  W8((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffu));
/* 81af86: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af89: fmul dword ptr [edi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x88u)));
/* 81af8f: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af94u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af94: movzx edx, byte ptr [ebp - 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe0u)));
/* 81af98: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81af9b: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 81af9d: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81afa0: mov byte ptr [ebp - 0x1f], bl */
  W8((uint32_t)(ebp + 0xffffffe1u), (ebx & 0xffu));
/* 81afa3: fmul dword ptr [edi + 0x8c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8cu)));
/* 81afa9: call 0x99c958 */
  esp -= 4; W32(esp, 0x81afaeu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81afae: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* 81afb4: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 81afb7: mov byte ptr [ebp - 0x20], al */
  W8((uint32_t)(ebp + 0xffffffe0u), (eax & 0xffu));
/* 81afba: je 0x81afdf */
  if (zf) goto L_81afdf;
L_81afbc: /* 81afbc: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81afbf: fcomp dword ptr [esi + 0xd4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd4u)));
  FPOP();
/* 81afc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81afc7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81afca: jne 0x81afdf */
  if (!zf) goto L_81afdf;
L_81afcc: /* 81afcc: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81afd2: fcomp dword ptr [esi + 0xd4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd4u)));
  FPOP();
/* 81afd8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81afda: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81afdd: jp 0x81b017 */
  if (pf) goto L_81b017;
L_81afdf: /* 81afdf: test byte ptr [esi + 0xf0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81afe6: je 0x81b251 */
  if (zf) goto L_81b251;
L_81afec: /* 81afec: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81afef: fcomp dword ptr [esi + 0xec] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xecu)));
  FPOP();
/* 81aff5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aff7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81affa: jp 0x81b251 */
  if (pf) goto L_81b251;
L_81b000: /* 81b000: fld dword ptr [esi + 0xec] */
  { double v = F32((uint32_t)(esi + 0xecu)); FPUSH(v); }
/* 81b006: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b00c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b00e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b011: jnp 0x81b251 */
  if (!pf) goto L_81b251;
L_81b017: /* 81b017: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81b019: je 0x81b04a */
  if (zf) goto L_81b04a;
L_81b01b: /* 81b01b: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81b01e: fcomp dword ptr [esi + 0xd4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd4u)));
  FPOP();
/* 81b024: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b026: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b029: jne 0x81b04a */
  if (!zf) goto L_81b04a;
L_81b02b: /* 81b02b: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81b02e: lea eax, [esi + 0xc4] */
  eax = (uint32_t)(esi + 0xc4u);
/* 81b034: fsub dword ptr [esi + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xd4u)));
/* 81b03a: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81b040: fsub dword ptr [esi + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xd4u)));
/* 81b046: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 81b048: jmp 0x81b05f */
  goto L_81b05f;
L_81b04a: /* 81b04a: fld dword ptr [esi + 0xec] */
  { double v = F32((uint32_t)(esi + 0xecu)); FPUSH(v); }
/* 81b050: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 81b056: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 81b059: fdiv dword ptr [esi + 0xec] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0xecu)));
L_81b05f: /* 81b05f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81b061: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81b064: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 81b06a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 81b06d: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 81b073: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 81b076: mov al, byte ptr [esi + 0x314] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x314u))) & 0xffu);
/* 81b07c: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81b07e: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 81b084: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 81b08a: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 81b090: jne 0x81b0c0 */
  if (!zf) goto L_81b0c0;
L_81b092: /* 81b092: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 81b098: mov byte ptr [ebp - 0x6c], 0x7f */
  W8((uint32_t)(ebp + 0xffffff94u), 0x7fu);
/* 81b09c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81b09e: mov byte ptr [ebp - 0x6b], 0x7f */
  W8((uint32_t)(ebp + 0xffffff95u), 0x7fu);
/* 81b0a2: mov byte ptr [ebp - 0x6a], 0x7f */
  W8((uint32_t)(ebp + 0xffffff96u), 0x7fu);
/* 81b0a6: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b0abu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b0ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b0ad: or cl, 0xff */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 81b0b0: sub cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 81b0b2: mov byte ptr [ebp - 0x69], cl */
  W8((uint32_t)(ebp + 0xffffff97u), (ecx & 0xffu));
/* 81b0b5: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 81b0b8: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 81b0bb: jmp 0x81b251 */
  goto L_81b251;
L_81b0c0: /* 81b0c0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81b0c2: jne 0x81b120 */
  if (!zf) goto L_81b120;
L_81b0c4: /* 81b0c4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81b0c7: shr eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81b0ca: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81b0cd: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b0d0: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 81b0d6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b0d8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b0da: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81b0dc: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b0e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b0e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b0e7: jp 0x81b0fe */
  if (pf) goto L_81b0fe;
L_81b0e9: /* 81b0e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b0eb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b0f1: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b0f6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b0f6: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
/* 81b0f9: jmp 0x81b251 */
  goto L_81b251;
L_81b0fe: /* 81b0fe: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b104: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b106: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b109: jnp 0x81b113 */
  if (!pf) goto L_81b113;
L_81b10b: /* 81b10b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b10d: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b113: /* 81b113: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b118u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b118: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
/* 81b11b: jmp 0x81b251 */
  goto L_81b251;
L_81b120: /* 81b120: movzx ecx, byte ptr [ebp - 0x1e] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe2u)));
/* 81b124: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81b127: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b12a: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 81b130: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b132: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b134: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b13a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b13c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b13f: jp 0x81b14b */
  if (pf) goto L_81b14b;
L_81b141: /* 81b141: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b143: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b149: jmp 0x81b160 */
  goto L_81b160;
L_81b14b: /* 81b14b: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b151: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b153: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b156: jnp 0x81b160 */
  if (!pf) goto L_81b160;
L_81b158: /* 81b158: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b15a: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b160: /* 81b160: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b165u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b165: movzx edx, bl */
  edx = (uint32_t)((ebx & 0xffu));
/* 81b168: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81b16b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81b16e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b171: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 81b177: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b179: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b17b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b181: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b183: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b186: jp 0x81b192 */
  if (pf) goto L_81b192;
L_81b188: /* 81b188: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b18a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b190: jmp 0x81b1a7 */
  goto L_81b1a7;
L_81b192: /* 81b192: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b198: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b19a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b19d: jnp 0x81b1a7 */
  if (!pf) goto L_81b1a7;
L_81b19f: /* 81b19f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b1a1: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b1a7: /* 81b1a7: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b1acu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b1ac: mov ebx, eax */
  ebx = eax;
/* 81b1ae: movzx eax, byte ptr [ebp - 0x20] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe0u)));
/* 81b1b2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81b1b5: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b1b8: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 81b1be: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b1c0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b1c2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b1c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b1ca: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b1cd: jp 0x81b1d9 */
  if (pf) goto L_81b1d9;
L_81b1cf: /* 81b1cf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b1d1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b1d7: jmp 0x81b1ee */
  goto L_81b1ee;
L_81b1d9: /* 81b1d9: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b1df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b1e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b1e4: jnp 0x81b1ee */
  if (!pf) goto L_81b1ee;
L_81b1e6: /* 81b1e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b1e8: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b1ee: /* 81b1ee: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b1f3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b1f3: movzx edx, byte ptr [ebp - 0x1d] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe3u)));
/* 81b1f7: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81b1fa: mov ecx, eax */
  ecx = eax;
/* 81b1fc: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b1ff: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 81b205: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b207: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b209: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81b20b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b211: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b213: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b216: jp 0x81b222 */
  if (pf) goto L_81b222;
L_81b218: /* 81b218: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b21a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b220: jmp 0x81b237 */
  goto L_81b237;
L_81b222: /* 81b222: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b228: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b22a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b22d: jnp 0x81b237 */
  if (!pf) goto L_81b237;
L_81b22f: /* 81b22f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b231: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b237: /* 81b237: mov al, byte ptr [ebp - 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 81b23a: mov byte ptr [ebp - 0x70], cl */
  W8((uint32_t)(ebp + 0xffffff90u), (ecx & 0xffu));
/* 81b23d: mov byte ptr [ebp - 0x6f], bl */
  W8((uint32_t)(ebp + 0xffffff91u), (ebx & 0xffu));
/* 81b240: mov byte ptr [ebp - 0x6e], al */
  W8((uint32_t)(ebp + 0xffffff92u), (eax & 0xffu));
/* 81b243: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b248u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b248: mov byte ptr [ebp - 0x6d], al */
  W8((uint32_t)(ebp + 0xffffff93u), (eax & 0xffu));
/* 81b24b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 81b24e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_81b251: /* 81b251: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81b254: mov dword ptr [edi + 0xa8], edx */
  W32((uint32_t)(edi + 0xa8u), edx);
/* 81b25a: movzx eax, byte ptr [esi + 0xf4] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xf4u)));
/* 81b261: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 81b264: je 0x81b26c */
  if (zf) goto L_81b26c;
L_81b266: /* 81b266: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81b267: je 0x81b2ce */
  if (zf) goto L_81b2ce;
L_81b269: /* 81b269: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81b26a: jne 0x81b279 */
  if (!zf) goto L_81b279;
L_81b26c: /* 81b26c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_81b26d: /* 81b26d: lea ecx, [esi + 0x414] */
  ecx = (uint32_t)(esi + 0x414u);
/* 81b273: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x81b279u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_81b279: /* 81b279: fld dword ptr [esi + 0x390] */
  { double v = F32((uint32_t)(esi + 0x390u)); FPUSH(v); }
/* 81b27f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b285: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b287: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b28a: jnp 0x81b342 */
  if (!pf) goto L_81b342;
L_81b290: /* 81b290: fld dword ptr [esi + 0x390] */
  { double v = F32((uint32_t)(esi + 0x390u)); FPUSH(v); }
/* 81b296: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 81b29c: fchs  */
  ST0 = -ST0;
/* 81b29e: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 81b2a4: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 81b2a7: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 81b2aa: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b2ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b2ae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b2b1: jnp 0x81b33f */
  if (!pf) goto L_81b33f;
L_81b2b7: /* 81b2b7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b2b9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b2bc: fcomp dword ptr [ebp - 0xbc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff44u)));
  FPOP();
/* 81b2c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b2c4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b2c7: jp 0x81b339 */
  if (pf) goto L_81b339;
L_81b2c9: /* 81b2c9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b2cc: jmp 0x81b33f */
  goto L_81b33f;
L_81b2ce: /* 81b2ce: mov ebx, dword ptr [esi + 0x3f0] */
  ebx = R32((uint32_t)(esi + 0x3f0u));
/* 81b2d4: lea eax, [ebx + 0x17c] */
  eax = (uint32_t)(ebx + 0x17cu);
/* 81b2da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b2db: lea ecx, [ebp - 0x37c] */
  ecx = (uint32_t)(ebp + 0xfffffc84u);
/* 81b2e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81b2e2: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 81b2e8: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81b2eb: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x81b2f1u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 81b2f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b2f2: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 81b2f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81b2f9: mov ecx, edi */
  ecx = edi;
/* 81b2fb: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x81b301u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 81b301: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 81b307: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 81b30a: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 81b310: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 81b313: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 81b315: lea eax, [ebp - 0x1c0] */
  eax = (uint32_t)(ebp + 0xfffffe40u);
/* 81b31b: fadd dword ptr [ebx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x170u)));
/* 81b321: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b322: fstp dword ptr [ebp - 0x1c0] */
  WF32((uint32_t)(ebp + 0xfffffe40u), ST0); FPOP();
/* 81b328: fstp dword ptr [ebp - 0x1bc] */
  WF32((uint32_t)(ebp + 0xfffffe44u), ST0); FPOP();
/* 81b32e: fstp dword ptr [ebp - 0x1b8] */
  WF32((uint32_t)(ebp + 0xfffffe48u), ST0); FPOP();
/* 81b334: jmp 0x81b26d */
  goto L_81b26d;
L_81b339: /* 81b339: fld dword ptr [ebp - 0xbc] */
  { double v = F32((uint32_t)(ebp + 0xffffff44u)); FPUSH(v); }
L_81b33f: /* 81b33f: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
L_81b342: /* 81b342: fld dword ptr [esi + 0x394] */
  { double v = F32((uint32_t)(esi + 0x394u)); FPUSH(v); }
/* 81b348: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b34e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b350: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b353: jnp 0x81b398 */
  if (!pf) goto L_81b398;
L_81b355: /* 81b355: fld dword ptr [esi + 0x394] */
  { double v = F32((uint32_t)(esi + 0x394u)); FPUSH(v); }
/* 81b35b: mov edx, dword ptr [esi + 0x394] */
  edx = R32((uint32_t)(esi + 0x394u));
/* 81b361: fchs  */
  ST0 = -ST0;
/* 81b363: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 81b369: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 81b36c: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 81b36f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b371: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b373: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b376: jnp 0x81b395 */
  if (!pf) goto L_81b395;
L_81b378: /* 81b378: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b37a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b37d: fcomp dword ptr [ebp - 0xd8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff28u)));
  FPOP();
/* 81b383: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b385: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b388: jp 0x81b38f */
  if (pf) goto L_81b38f;
L_81b38a: /* 81b38a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b38d: jmp 0x81b395 */
  goto L_81b395;
L_81b38f: /* 81b38f: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
L_81b395: /* 81b395: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
L_81b398: /* 81b398: fld dword ptr [esi + 0x398] */
  { double v = F32((uint32_t)(esi + 0x398u)); FPUSH(v); }
/* 81b39e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b3a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b3a6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b3a9: jnp 0x81b3e5 */
  if (!pf) goto L_81b3e5;
L_81b3ab: /* 81b3ab: fld dword ptr [esi + 0x398] */
  { double v = F32((uint32_t)(esi + 0x398u)); FPUSH(v); }
/* 81b3b1: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 81b3b7: fchs  */
  ST0 = -ST0;
/* 81b3b9: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 81b3bc: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 81b3bf: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 81b3c2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b3c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b3c6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b3c9: jnp 0x81b3e2 */
  if (!pf) goto L_81b3e2;
L_81b3cb: /* 81b3cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b3cd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b3d0: fcomp dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
  FPOP();
/* 81b3d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b3d5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b3d8: jp 0x81b3df */
  if (pf) goto L_81b3df;
L_81b3da: /* 81b3da: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b3dd: jmp 0x81b3e2 */
  goto L_81b3e2;
L_81b3df: /* 81b3df: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
L_81b3e2: /* 81b3e2: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
L_81b3e5: /* 81b3e5: lea ecx, [ebp - 0x310] */
  ecx = (uint32_t)(ebp + 0xfffffcf0u);
/* 81b3eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81b3ec: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 81b3f2: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81b3f8u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81b3f8: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 81b3fb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 81b3fd: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 81b400: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 81b403: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 81b406: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 81b409: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81b40c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81b40e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 81b411: fstp dword ptr [ebp - 0x23c] */
  WF32((uint32_t)(ebp + 0xfffffdc4u), ST0); FPOP();
/* 81b417: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81b419: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81b41c: fstp dword ptr [ebp - 0x25c] */
  WF32((uint32_t)(ebp + 0xfffffda4u), ST0); FPOP();
/* 81b422: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81b425: fld dword ptr [ebp - 0x23c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdc4u)); FPUSH(v); }
/* 81b42b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81b42e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 81b430: fsub dword ptr [ebp - 0x25c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffda4u)));
/* 81b436: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 81b438: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 81b43b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 81b43d: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 81b440: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 81b443: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81b445: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 81b448: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b44a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b44c: je 0x81b47b */
  if (zf) goto L_81b47b;
L_81b44e: /* 81b44e: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 81b454: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b45a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b45c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b45f: jnp 0x81b47b */
  if (!pf) goto L_81b47b;
L_81b461: /* 81b461: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x81b467u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 81b467: fcomp dword ptr [esi + 0x344] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x344u)));
  FPOP();
/* 81b46d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b46f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b472: jp 0x81b47b */
  if (pf) goto L_81b47b;
L_81b474: /* 81b474: or dword ptr [edi + 0xbc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xbcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0xbcu), r);
  }
L_81b47b: /* 81b47b: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 81b47e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81b481: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81b483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b484: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81b485: mov ecx, esi */
  ecx = esi;
/* 81b487: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x81b48du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81b48d: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 81b490: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81b491: jmp 0x819cc1 */
  goto L_819cc1;
L_81b496: /* 81b496: mov eax, dword ptr [esi + 0x288] */
  eax = R32((uint32_t)(esi + 0x288u));
/* 81b49c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81b4a2: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b4a4: je 0x81b4d9 */
  if (zf) goto L_81b4d9;
L_81b4a6: /* 81b4a6: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b4a8: jne 0x81b4d9 */
  if (!zf) goto L_81b4d9;
L_81b4aa: /* 81b4aa: mov eax, dword ptr [esi + 0x290] */
  eax = R32((uint32_t)(esi + 0x290u));
/* 81b4b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81b4b2: jle 0x81b4d9 */
  if ((zf || sf != of)) goto L_81b4d9;
L_81b4b4: /* 81b4b4: mov ecx, dword ptr [esi + 0x28c] */
  ecx = R32((uint32_t)(esi + 0x28cu));
/* 81b4ba: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81b4bd: mov edx, eax */
  edx = eax;
/* 81b4bf: nop  */
L_81b4c0: /* 81b4c0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 81b4c2: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 81b4c5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b4c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b4c9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b4cc: jne 0x81b4d3 */
  if (!zf) goto L_81b4d3;
L_81b4ce: /* 81b4ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b4d0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_81b4d3: /* 81b4d3: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81b4d6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 81b4d7: jne 0x81b4c0 */
  if (!zf) goto L_81b4c0;
L_81b4d9: /* 81b4d9: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 81b4dc: fstp dword ptr [esi + 0x46c] */
  WF32((uint32_t)(esi + 0x46cu), ST0); FPOP();
/* 81b4e2: cmp ecx, dword ptr [esi + 0x45c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x45cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81b4e8: jge 0x81b4f2 */
  if ((sf == of)) goto L_81b4f2;
L_81b4ea: /* 81b4ea: cmp dword ptr [esi + 0x40c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81b4f0: jne 0x81b52d */
  if (!zf) goto L_81b52d;
L_81b4f2: /* 81b4f2: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 81b4f5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b4fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b4fd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b500: jp 0x81b52d */
  if (pf) goto L_81b52d;
L_81b502: /* 81b502: test byte ptr [esi + 0x104], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b509: jne 0x81b52d */
  if (!zf) goto L_81b52d;
L_81b50b: /* 81b50b: or dword ptr [esi + 0x43c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x43cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x43cu), r);
  }
/* 81b512: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 81b518: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 81b51a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81b51d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81b524: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81b525: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81b526: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81b527: mov esp, ebp */
  esp = ebp;
/* 81b529: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81b52a: ret 4 */
  esp += 8; SPILL(); return;
L_81b52d: /* 81b52d: and dword ptr [esi + 0x43c], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x43cu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x43cu), r);
  }
/* 81b534: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 81b53a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 81b53c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81b53f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81b546: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81b547: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81b548: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81b549: mov esp, ebp */
  esp = ebp;
/* 81b54b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81b54c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81bc40(void) {
  LOAD_REGS();
L_81bc40: /* 81bc40: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81bc43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81bc44: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 81bc48: movzx eax, byte ptr [edi + 0x320] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x320u)));
/* 81bc4f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81bc50: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 81bc54: jne 0x81be76 */
  if (!zf) goto L_81be76;
L_81bc5a: /* 81bc5a: fld dword ptr [edi + 0x324] */
  { double v = F32((uint32_t)(edi + 0x324u)); FPUSH(v); }
/* 81bc60: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81bc66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bc68: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81bc6b: jnp 0x81be76 */
  if (!pf) goto L_81be76;
L_81bc71: /* 81bc71: fld dword ptr [edi + 0x324] */
  { double v = F32((uint32_t)(edi + 0x324u)); FPUSH(v); }
/* 81bc77: mov eax, dword ptr [ecx + 0x40c] */
  eax = R32((uint32_t)(ecx + 0x40cu));
/* 81bc7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81bc7f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 81bc81: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81bc83: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81bc84: mov ebp, dword ptr [ecx + 0x3fc] */
  ebp = R32((uint32_t)(ecx + 0x3fcu));
/* 81bc8a: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 81bc92: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 81bc96: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81bc98: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81bc9e: fdiv dword ptr [esp + 0x44] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x44u)));
/* 81bca2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 81bca6: jle 0x81be75 */
  if ((zf || sf != of)) goto L_81be75;
L_81bcac: /* 81bcac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81bcad: mov ebx, dword ptr [0xcfa578] */
  ebx = R32((uint32_t)(0xcfa578u));
/* 81bcb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81bcb4: lea esi, [ebp + 0x20] */
  esi = (uint32_t)(ebp + 0x20u);
/* 81bcb7: jmp 0x81bcc0 */
  goto L_81bcc0;
L_81bcc0: /* 81bcc0: test byte ptr [esi + 0x9c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x9cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81bcc7: je 0x81be5c */
  if (zf) goto L_81be5c;
L_81bccd: /* 81bccd: fld dword ptr [esi + 0x94] */
  { double v = F32((uint32_t)(esi + 0x94u)); FPUSH(v); }
/* 81bcd3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81bcd9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bcdb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81bcde: jnp 0x81be4c */
  if (!pf) goto L_81be4c;
L_81bce4: /* 81bce4: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 81bcea: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 81bced: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 81bcf3: fsub dword ptr [esi - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xffffffe4u)));
/* 81bcf6: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 81bcfc: fsub dword ptr [esi - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xffffffe8u)));
/* 81bcff: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 81bd01: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81bd03: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 81bd05: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 81bd07: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bd09: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 81bd0b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 81bd0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bd0f: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 81bd13: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 81bd15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81bd17: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81bd19: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 81bd1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bd1f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81bd22: jp 0x81be4c */
  if (pf) goto L_81be4c;
L_81bd28: /* 81bd28: fld dword ptr [esi - 0x18] */
  { double v = F32((uint32_t)(esi + 0xffffffe8u)); FPUSH(v); }
/* 81bd2b: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 81bd2f: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 81bd35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81bd36: fld dword ptr [esi - 0x1c] */
  { double v = F32((uint32_t)(esi + 0xffffffe4u)); FPUSH(v); }
/* 81bd39: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 81bd3d: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 81bd43: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 81bd46: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 81bd4c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 81bd50: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 81bd54: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 81bd58: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x81bd5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81bd5a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 81bd5e: lea ecx, [edi + 0x188] */
  ecx = (uint32_t)(edi + 0x188u);
/* 81bd64: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 81bd67: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 81bd6f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 81bd73: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 81bd76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bd78: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 81bd7c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 81bd7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bd80: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81bd86: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bd88: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81bd8b: je 0x81bd95 */
  if (zf) goto L_81bd95;
L_81bd8d: /* 81bd8d: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
L_81bd95: /* 81bd95: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 81bd99: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 81bd9d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81bd9f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 81bda3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 81bda7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81bda9: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 81bdad: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 81bdb1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81bdb3: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 81bdb7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81bdb9: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x81bdbfu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 81bdbf: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 81bdc3: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 81bdc5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 81bdc9: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 81bdcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bdce: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 81bdd2: fmul dword ptr [esi - 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffff8u)));
/* 81bdd5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bdd7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81bdd9: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81bddf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bde1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81bde4: jne 0x81be4a */
  if (!zf) goto L_81be4a;
L_81bde6: /* 81bde6: fmul dword ptr [edi + 0x328] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x328u)));
/* 81bdec: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 81bdf0: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81bdf6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bdf8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81bdfb: jne 0x81be4a */
  if (!zf) goto L_81be4a;
L_81bdfd: /* 81bdfd: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 81be01: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 81be05: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 81be09: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81be0b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 81be0f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81be11: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 81be15: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 81be19: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81be1b: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 81be1f: fadd dword ptr [esi - 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffff8u)));
/* 81be22: fstp dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0); FPOP();
/* 81be25: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81be27: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 81be2b: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 81be2e: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 81be31: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 81be35: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 81be37: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 81be39: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 81be3f: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81be42: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* 81be48: jmp 0x81be4c */
  goto L_81be4c;
L_81be4a: /* 81be4a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81be4c: /* 81be4c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 81be50: add ebp, 0xc8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 81be56: add esi, 0xc8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_81be5c: /* 81be5c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 81be60: mov edx, dword ptr [ecx + 0x40c] */
  edx = R32((uint32_t)(ecx + 0x40cu));
/* 81be66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81be67: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81be69: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 81be6d: jl 0x81bcc0 */
  if ((sf != of)) goto L_81bcc0;
L_81be73: /* 81be73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81be74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_81be75: /* 81be75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_81be76: /* 81be76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81be77: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81be7a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_81bcb9(void) {
  LOAD_REGS();
L_81bcb9: /* 81bcb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_81bcc0: /* 81bcc0: test byte ptr [esi + 0x9c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x9cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81bcc7: je 0x81be5c */
  if (zf) goto L_81be5c;
L_81bccd: /* 81bccd: fld dword ptr [esi + 0x94] */
  { double v = F32((uint32_t)(esi + 0x94u)); FPUSH(v); }
/* 81bcd3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81bcd9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bcdb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81bcde: jnp 0x81be4c */
  if (!pf) goto L_81be4c;
L_81bce4: /* 81bce4: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 81bcea: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 81bced: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 81bcf3: fsub dword ptr [esi - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xffffffe4u)));
/* 81bcf6: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 81bcfc: fsub dword ptr [esi - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xffffffe8u)));
/* 81bcff: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 81bd01: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81bd03: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 81bd05: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 81bd07: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bd09: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 81bd0b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 81bd0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bd0f: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 81bd13: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 81bd15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81bd17: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81bd19: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 81bd1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bd1f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81bd22: jp 0x81be4c */
  if (pf) goto L_81be4c;
L_81bd28: /* 81bd28: fld dword ptr [esi - 0x18] */
  { double v = F32((uint32_t)(esi + 0xffffffe8u)); FPUSH(v); }
/* 81bd2b: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 81bd2f: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 81bd35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81bd36: fld dword ptr [esi - 0x1c] */
  { double v = F32((uint32_t)(esi + 0xffffffe4u)); FPUSH(v); }
/* 81bd39: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 81bd3d: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 81bd43: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 81bd46: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 81bd4c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 81bd50: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 81bd54: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 81bd58: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x81bd5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81bd5a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 81bd5e: lea ecx, [edi + 0x188] */
  ecx = (uint32_t)(edi + 0x188u);
/* 81bd64: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 81bd67: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 81bd6f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 81bd73: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 81bd76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bd78: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 81bd7c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 81bd7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bd80: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81bd86: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bd88: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81bd8b: je 0x81bd95 */
  if (zf) goto L_81bd95;
L_81bd8d: /* 81bd8d: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
L_81bd95: /* 81bd95: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 81bd99: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 81bd9d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81bd9f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 81bda3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 81bda7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81bda9: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 81bdad: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 81bdb1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81bdb3: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 81bdb7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81bdb9: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x81bdbfu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 81bdbf: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 81bdc3: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 81bdc5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 81bdc9: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 81bdcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bdce: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 81bdd2: fmul dword ptr [esi - 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffff8u)));
/* 81bdd5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81bdd7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81bdd9: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81bddf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bde1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81bde4: jne 0x81be4a */
  if (!zf) goto L_81be4a;
L_81bde6: /* 81bde6: fmul dword ptr [edi + 0x328] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x328u)));
/* 81bdec: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 81bdf0: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81bdf6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81bdf8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81bdfb: jne 0x81be4a */
  if (!zf) goto L_81be4a;
L_81bdfd: /* 81bdfd: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 81be01: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 81be05: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 81be09: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81be0b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 81be0f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81be11: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 81be15: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 81be19: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81be1b: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 81be1f: fadd dword ptr [esi - 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffff8u)));
/* 81be22: fstp dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0); FPOP();
/* 81be25: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81be27: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 81be2b: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 81be2e: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 81be31: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 81be35: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 81be37: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 81be39: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 81be3f: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81be42: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* 81be48: jmp 0x81be4c */
  goto L_81be4c;
L_81be4a: /* 81be4a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81be4c: /* 81be4c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 81be50: add ebp, 0xc8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 81be56: add esi, 0xc8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_81be5c: /* 81be5c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 81be60: mov edx, dword ptr [ecx + 0x40c] */
  edx = R32((uint32_t)(ecx + 0x40cu));
/* 81be66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81be67: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81be69: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 81be6d: jl 0x81bcc0 */
  if ((sf != of)) goto L_81bcc0;
L_81be73: /* 81be73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81be74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81be75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81be76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81be77: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81be7a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_81bf10(void) {
  LOAD_REGS();
L_81bf10: /* 81bf10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 81bf14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81bf15: mov esi, ecx */
  esi = ecx;
/* 81bf17: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 81bf1a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81bf1b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 81bf1e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81bf21: jne 0x81bf38 */
  if (!zf) goto L_81bf38;
L_81bf23: /* 81bf23: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81bf24: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 81bf27: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 81bf2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81bf2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81bf2d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 81bf32: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x81bf38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81bf38: /* 81bf38: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81bf3a: mov ecx, esi */
  ecx = esi;
/* 81bf3c: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x81bf42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81bf42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81bf43: ret 8 */
  esp += 12; SPILL(); return;
}

void f_81bf60(void) {
  LOAD_REGS();
L_81bf60: /* 81bf60: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 81bf65: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81bf68: jne 0x81bf71 */
  if (!zf) goto L_81bf71;
L_81bf6a: /* 81bf6a: or dword ptr [ecx + 0x3b0], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3b0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x3b0u), r);
  }
L_81bf71: /* 81bf71: ret  */
  esp += 4; SPILL(); return;
}

void f_81bf90(void) {
  LOAD_REGS();
L_81bf90: /* 81bf90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81bf91: mov ebp, esp */
  ebp = esp;
/* 81bf93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81bf95: push 0x9d2dd0 */
  { uint32_t v = 0x9d2dd0u; esp -= 4; W32(esp, v); }
/* 81bf9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81bfa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81bfa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81bfa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81bfab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81bfac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81bfad: mov esi, ecx */
  esi = ecx;
/* 81bfaf: test byte ptr [esi + 0x3b0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3b0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81bfb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81bfb7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81bfba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81bfc1: je 0x81c00c */
  if (zf) goto L_81c00c;
L_81bfc3: /* 81bfc3: xor edi, edi */
  edi = 0;
L_81bfc5: /* 81bfc5: cmp edi, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81bfcb: jge 0x81bff1 */
  if ((sf == of)) goto L_81bff1;
L_81bfcd: /* 81bfcd: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 81bfd3: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 81bfd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81bfd8: je 0x81bfe1 */
  if (zf) goto L_81bfe1;
L_81bfda: /* 81bfda: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81bfdc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81bfde: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x81bfe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81bfe1: /* 81bfe1: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 81bfe7: mov dword ptr [eax + edi*4], 0 */
  W32((uint32_t)(eax + edi*4), 0x0u);
/* 81bfee: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81bfef: jmp 0x81bfc5 */
  goto L_81bfc5;
L_81bff1: /* 81bff1: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 81bff7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81bff9: je 0x81c002 */
  if (zf) goto L_81c002;
L_81bffb: /* 81bffb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81bffd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81bfff: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x81c002u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81c002: /* 81c002: mov dword ptr [esi + 0x3ac], 0 */
  W32((uint32_t)(esi + 0x3acu), 0x0u);
L_81c00c: /* 81c00c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81c00f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81c010: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81c011: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81c018: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81c019: mov esp, ebp */
  esp = ebp;
/* 81c01b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81c01c: ret  */
  esp += 4; SPILL(); return;
}

void f_81c01d(void) {
  LOAD_REGS();
L_81c01d: /* 81c01d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81c020: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81c025: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81c028: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81c029: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81c02c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81c031u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81c031(); return;
}

void f_81c031(void) {
  LOAD_REGS();
L_81c031: /* 81c031: push 0xa147d0 */
  { uint32_t v = 0xa147d0u; esp -= 4; W32(esp, v); }
/* 81c036: push 0xae2790 */
  { uint32_t v = 0xae2790u; esp -= 4; W32(esp, v); }
/* 81c03b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81c041u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81c041: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81c044: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c046: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c048: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81c04du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81c04d: guest_badaddr(0x81c04d); return;
}

void f_81c080(void) {
  LOAD_REGS();
L_81c080: /* 81c080: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 81c086: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81c087: xor esi, esi */
  esi = 0;
/* 81c089: xor eax, eax */
  eax = 0;
/* 81c08b: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c08d: jle 0x81c100 */
  if ((zf || sf != of)) goto L_81c100;
L_81c08f: /* 81c08f: nop  */
L_81c090: /* 81c090: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 81c096: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 81c099: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81c09b: je 0x81c0f5 */
  if (zf) goto L_81c0f5;
L_81c09d: /* 81c09d: and dword ptr [edx + 0x104], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x104u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edx + 0x104u), r);
  }
/* 81c0a4: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 81c0aa: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 81c0ad: mov dword ptr [edx + 0x30c], esi */
  W32((uint32_t)(edx + 0x30cu), esi);
/* 81c0b3: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 81c0b9: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 81c0bc: mov dword ptr [edx + 0x308], esi */
  W32((uint32_t)(edx + 0x308u), esi);
/* 81c0c2: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 81c0c8: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 81c0cb: and dword ptr [edx + 0x104], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x104u))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edx + 0x104u), r);
  }
/* 81c0d2: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 81c0d8: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 81c0db: and dword ptr [edx + 0x104], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x104u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edx + 0x104u), r);
  }
/* 81c0e2: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 81c0e8: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 81c0eb: mov dword ptr [edx + 0x470], 1 */
  W32((uint32_t)(edx + 0x470u), 0x1u);
L_81c0f5: /* 81c0f5: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 81c0fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81c0fc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c0fe: jl 0x81c090 */
  if ((sf != of)) goto L_81c090;
L_81c100: /* 81c100: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* 81c106: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81c109: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 81c10c: mov dword ptr [ecx + 0x348], eax */
  W32((uint32_t)(ecx + 0x348u), eax);
/* 81c112: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81c113: ret  */
  esp += 4; SPILL(); return;
}

void f_81c150(void) {
  LOAD_REGS();
L_81c150: /* 81c150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81c151: mov ebp, esp */
  ebp = esp;
/* 81c153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81c155: push 0x9d2de0 */
  { uint32_t v = 0x9d2de0u; esp -= 4; W32(esp, v); }
/* 81c15a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81c160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c161: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81c168: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81c16b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 81c16e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81c16f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81c170: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81c171: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81c174: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 81c177: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81c17a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c17b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81c17c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c17f: xor ebx, ebx */
  ebx = 0;
/* 81c181: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 81c184: call 0x6c9aa7 */
  esp -= 4; W32(esp, 0x81c189u); SPILL(); f_6c9aa7(); if (g_unwind) return; RELOAD();
/* 81c189: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81c18b: jne 0x81c1a2 */
  if (!zf) goto L_81c1a2;
L_81c18d: /* 81c18d: xor eax, eax */
  eax = 0;
/* 81c18f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81c192: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81c199: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81c19a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81c19b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81c19c: mov esp, ebp */
  esp = ebp;
/* 81c19e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81c19f: ret 8 */
  esp += 12; SPILL(); return;
L_81c1a2: /* 81c1a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c1a5: cmp dword ptr [ecx + 0x36c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x36cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81c1ab: jne 0x81c1b8 */
  if (!zf) goto L_81c1b8;
L_81c1ad: /* 81c1ad: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81c1af: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x81c1b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81c1b5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c1b8: /* 81c1b8: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 81c1be: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c1c1: jne 0x81c81d */
  if (!zf) goto L_81c81d;
L_81c1c7: /* 81c1c7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 81c1ca: mov edi, 1 */
  edi = 0x1u;
/* 81c1cf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81c1d1: jne 0x81c1e0 */
  if (!zf) goto L_81c1e0;
L_81c1d3: /* 81c1d3: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 81c1d8: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81c1da: je 0x81c81d */
  if (zf) goto L_81c81d;
L_81c1e0: /* 81c1e0: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 81c1e6: mov edx, dword ptr [0xce8474] */
  edx = R32((uint32_t)(0xce8474u));
/* 81c1ec: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 81c1ef: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 81c1f1: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 81c1f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c1f6: add ecx, 0x370 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c1fc: call dword ptr [0xcfa644] */
  esp -= 4; W32(esp, 0x81c202u); SPILL(); f_4e303a(); if (g_unwind) return; /* Core!?Init@FBox@@QAEXXZ */ RELOAD();
/* 81c202: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c205: and dword ptr [eax + 0x3a8], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3a8u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x3a8u), r);
  }
/* 81c20c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c20f: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 81c212: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 81c215: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
L_81c218: /* 81c218: cmp ebx, dword ptr [ecx + 0x340] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c21e: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 81c221: jge 0x81c554 */
  if ((sf == of)) goto L_81c554;
L_81c227: /* 81c227: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 81c22d: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 81c230: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c232: je 0x81c549 */
  if (zf) goto L_81c549;
L_81c238: /* 81c238: test byte ptr [esi + 0x104], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c23f: jne 0x81c549 */
  if (!zf) goto L_81c549;
L_81c245: /* 81c245: mov eax, dword ptr [ecx + 0x3a8] */
  eax = R32((uint32_t)(ecx + 0x3a8u));
/* 81c24b: mov edx, dword ptr [esi + 0x1c8] */
  edx = R32((uint32_t)(esi + 0x1c8u));
/* 81c251: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 81c253: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 81c255: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 81c257: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 81c259: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 81c25b: mov dword ptr [ecx + 0x3a8], edx */
  W32((uint32_t)(ecx + 0x3a8u), edx);
/* 81c261: test byte ptr [esi + 0x3f4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3f4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c268: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 81c26f: jne 0x81c27f */
  if (!zf) goto L_81c27f;
L_81c271: /* 81c271: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 81c277: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81c279: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81c27a: mov ecx, esi */
  ecx = esi;
/* 81c27c: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x81c27fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81c27f: /* 81c27f: test byte ptr [esi + 0x104], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c286: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c289: mov dword ptr [esi + 0x3f0], edx */
  W32((uint32_t)(esi + 0x3f0u), edx);
/* 81c28f: jne 0x81c2a1 */
  if (!zf) goto L_81c2a1;
L_81c291: /* 81c291: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c294: test byte ptr [eax + 0x348], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x348u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c29b: jne 0x81c2a1 */
  if (!zf) goto L_81c2a1;
L_81c29d: /* 81c29d: xor eax, eax */
  eax = 0;
/* 81c29f: jmp 0x81c2a3 */
  goto L_81c2a3;
L_81c2a1: /* 81c2a1: mov eax, edi */
  eax = edi;
L_81c2a3: /* 81c2a3: mov ecx, dword ptr [esi + 0x43c] */
  ecx = R32((uint32_t)(esi + 0x43cu));
/* 81c2a9: fld dword ptr [esi + 0x444] */
  { double v = F32((uint32_t)(esi + 0x444u)); FPUSH(v); }
/* 81c2af: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c2b5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 81c2b7: mov eax, dword ptr [esi + 0x43c] */
  eax = R32((uint32_t)(esi + 0x43cu));
/* 81c2bd: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 81c2bf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 81c2c1: mov dword ptr [esi + 0x43c], eax */
  W32((uint32_t)(esi + 0x43cu), eax);
/* 81c2c7: mov ecx, eax */
  ecx = eax;
/* 81c2c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c2cb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81c2ce: jnp 0x81c2fa */
  if (!pf) goto L_81c2fa;
L_81c2d0: /* 81c2d0: fld dword ptr [esi + 0x444] */
  { double v = F32((uint32_t)(esi + 0x444u)); FPUSH(v); }
/* 81c2d6: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 81c2d9: fst dword ptr [esi + 0x444] */
  WF32((uint32_t)(esi + 0x444u), ST0);
/* 81c2df: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c2e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c2e7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c2ea: je 0x81c546 */
  if (zf) goto L_81c546;
L_81c2f0: /* 81c2f0: mov dword ptr [esi + 0x444], 0 */
  W32((uint32_t)(esi + 0x444u), 0x0u);
L_81c2fa: /* 81c2fa: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c2fd: add edx, 0x398 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81c303: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c306: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 81c308: lea eax, [esi + 0x448] */
  eax = (uint32_t)(esi + 0x448u);
/* 81c30e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 81c310: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 81c313: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 81c316: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81c319: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 81c31c: jne 0x81c3b2 */
  if (!zf) goto L_81c3b2;
L_81c322: /* 81c322: fld dword ptr [esi + 0x3e8] */
  { double v = F32((uint32_t)(esi + 0x3e8u)); FPUSH(v); }
/* 81c328: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c32e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c330: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81c333: jnp 0x81c3b2 */
  if (!pf) goto L_81c3b2;
L_81c335: /* 81c335: fld dword ptr [esi + 0x3ec] */
  { double v = F32((uint32_t)(esi + 0x3ecu)); FPUSH(v); }
/* 81c33b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c341: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c343: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81c346: jnp 0x81c3b2 */
  if (!pf) goto L_81c3b2;
L_81c348: /* 81c348: lea ecx, [esi + 0x350] */
  ecx = (uint32_t)(esi + 0x350u);
/* 81c34e: call dword ptr [0xcfaaf4] */
  esp -= 4; W32(esp, 0x81c354u); SPILL(); f_4e1532(); if (g_unwind) return; /* Core!?GetCenter@FRange@@QBEMXZ */ RELOAD();
/* 81c354: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 81c357: fmul dword ptr [esi + 0x3ec] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3ecu)));
/* 81c35d: xor edi, edi */
  edi = 0;
/* 81c35f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81c362: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81c368: fdiv dword ptr [esi + 0x3e8] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x3e8u)));
/* 81c36e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81c371: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81c374: jmp 0x81c380 */
  goto L_81c380;
L_81c380: /* 81c380: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 81c383: fmul dword ptr [esi + 0x3e8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e8u)));
/* 81c389: call 0x99c958 */
  esp -= 4; W32(esp, 0x81c38eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81c38e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c390: jge 0x81c3a0 */
  if ((sf == of)) goto L_81c3a0;
L_81c392: /* 81c392: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81c394: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81c395: mov ecx, esi */
  ecx = esi;
/* 81c397: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x81c39du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81c39d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81c39e: jmp 0x81c380 */
  goto L_81c380;
L_81c3a0: /* 81c3a0: mov eax, dword ptr [esi + 0x43c] */
  eax = R32((uint32_t)(esi + 0x43cu));
/* 81c3a6: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81c3a9: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 81c3ac: mov dword ptr [esi + 0x43c], eax */
  W32((uint32_t)(esi + 0x43cu), eax);
L_81c3b2: /* 81c3b2: test byte ptr [esi + 0x43c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x43cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c3b9: jne 0x81c490 */
  if (!zf) goto L_81c490;
L_81c3bf: /* 81c3bf: test byte ptr [esi + 0x3f4], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3f4u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c3c6: je 0x81c3d9 */
  if (zf) goto L_81c3d9;
L_81c3c8: /* 81c3c8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81c3cb: fadd dword ptr [esi + 0x3f8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3f8u)));
/* 81c3d1: fstp dword ptr [esi + 0x3f8] */
  WF32((uint32_t)(esi + 0x3f8u), ST0); FPOP();
/* 81c3d7: jmp 0x81c3e3 */
  goto L_81c3e3;
L_81c3d9: /* 81c3d9: mov dword ptr [esi + 0x3f8], 0 */
  W32((uint32_t)(esi + 0x3f8u), 0x0u);
L_81c3e3: /* 81c3e3: fld dword ptr [esi + 0x340] */
  { double v = F32((uint32_t)(esi + 0x340u)); FPUSH(v); }
/* 81c3e9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c3ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c3f1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81c3f4: jnp 0x81c409 */
  if (!pf) goto L_81c409;
L_81c3f6: /* 81c3f6: fld dword ptr [esi + 0x3f8] */
  { double v = F32((uint32_t)(esi + 0x3f8u)); FPUSH(v); }
/* 81c3fc: fcomp dword ptr [esi + 0x340] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x340u)));
  FPOP();
/* 81c402: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c404: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c407: je 0x81c417 */
  if (zf) goto L_81c417;
L_81c409: /* 81c409: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81c40c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81c40e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c40f: mov ecx, esi */
  ecx = esi;
/* 81c411: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x81c417u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81c417: /* 81c417: mov edx, dword ptr [esi + 0x3f4] */
  edx = R32((uint32_t)(esi + 0x3f4u));
/* 81c41d: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 81c423: or edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 81c426: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81c428: mov dword ptr [esi + 0x3f4], edx */
  W32((uint32_t)(esi + 0x3f4u), edx);
/* 81c42e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81c431: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81c434: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 81c436: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c438: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 81c43f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 81c442: je 0x81c51a */
  if (zf) goto L_81c51a;
L_81c448: /* 81c448: xor edi, edi */
  edi = 0;
/* 81c44a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_81c450: /* 81c450: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c453: cmp edi, dword ptr [eax + 0x114] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c459: jge 0x81c51a */
  if ((sf == of)) goto L_81c51a;
L_81c45f: /* 81c45f: mov ecx, dword ptr [eax + 0x110] */
  ecx = R32((uint32_t)(eax + 0x110u));
/* 81c465: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 81c468: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c46a: je 0x81c48d */
  if (zf) goto L_81c48d;
L_81c46c: /* 81c46c: mov cl, byte ptr [eax + 0x320] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x320u))) & 0xffu);
/* 81c472: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c474: je 0x81c48d */
  if (zf) goto L_81c48d;
L_81c476: /* 81c476: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 81c47c: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c47f: jne 0x81c48d */
  if (!zf) goto L_81c48d;
L_81c481: /* 81c481: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81c484: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81c486: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81c487: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c488: mov ecx, esi */
  ecx = esi;
/* 81c48a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x81c48du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81c48d: /* 81c48d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81c48e: jmp 0x81c450 */
  goto L_81c450;
L_81c490: /* 81c490: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c493: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 81c499: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 81c49c: lea edi, [eax + ebx*4] */
  edi = (uint32_t)(eax + ebx*4);
/* 81c49f: mov eax, dword ptr [ecx + 0x104] */
  eax = R32((uint32_t)(ecx + 0x104u));
/* 81c4a5: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c4a7: je 0x81c506 */
  if (zf) goto L_81c506;
L_81c4a9: /* 81c4a9: test byte ptr [edx + 0x348], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x348u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c4b0: jne 0x81c506 */
  if (!zf) goto L_81c506;
L_81c4b2: /* 81c4b2: fld dword ptr [ecx + 0x454] */
  { double v = F32((uint32_t)(ecx + 0x454u)); FPUSH(v); }
/* 81c4b8: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 81c4bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c4c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c4c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c4c6: jne 0x81c4d9 */
  if (!zf) goto L_81c4d9;
L_81c4c8: /* 81c4c8: fld dword ptr [ecx + 0x454] */
  { double v = F32((uint32_t)(ecx + 0x454u)); FPUSH(v); }
/* 81c4ce: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 81c4d1: fstp dword ptr [ecx + 0x454] */
  WF32((uint32_t)(ecx + 0x454u), ST0); FPOP();
/* 81c4d7: jmp 0x81c51a */
  goto L_81c51a;
L_81c4d9: /* 81c4d9: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c4df: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81c4e5u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81c4e5: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81c4e8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81c4ea: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 81c4ed: mov dword ptr [ecx + 0x454], edx */
  W32((uint32_t)(ecx + 0x454u), edx);
/* 81c4f3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c4f6: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 81c4fc: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 81c4ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81c501: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x81c504u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81c504: jmp 0x81c51a */
  goto L_81c51a;
L_81c506: /* 81c506: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c508: je 0x81c51a */
  if (zf) goto L_81c51a;
L_81c50a: /* 81c50a: test byte ptr [edx + 0x348], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x348u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c511: jne 0x81c51a */
  if (!zf) goto L_81c51a;
L_81c513: /* 81c513: or dword ptr [ecx + 0x104], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x104u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x104u), r);
  }
L_81c51a: /* 81c51a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c51d: add esi, 0x414 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 81c523: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81c524: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 81c527: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c528: add ecx, 0x370 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c52e: call dword ptr [0xcfaaf8] */
  esp -= 4; W32(esp, 0x81c534u); SPILL(); f_4e31ca(); if (g_unwind) return; /* Core!??HFBox@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 81c534: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c537: add edi, 0x370 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 81c53d: mov ecx, 7 */
  ecx = 0x7u;
/* 81c542: mov esi, eax */
  esi = eax;
/* 81c544: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_81c546: /* 81c546: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c549: /* 81c549: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 81c54a: mov edi, 1 */
  edi = 0x1u;
/* 81c54f: jmp 0x81c218 */
  goto L_81c218;
L_81c554: /* 81c554: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81c557: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c559: mov al, byte ptr [ecx + 0x394] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x394u))) & 0xffu);
/* 81c55f: je 0x81c6e0 */
  if (zf) goto L_81c6e0;
L_81c565: /* 81c565: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c567: jne 0x81c576 */
  if (!zf) goto L_81c576;
L_81c569: /* 81c569: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c56b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c56d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81c56e: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x81c573u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 81c573: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c576: /* 81c576: fld dword ptr [ecx + 0x37c] */
  { double v = F32((uint32_t)(ecx + 0x37cu)); FPUSH(v); }
/* 81c57c: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 81c582: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c588: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 81c58b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c58d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c590: je 0x81c594 */
  if (zf) goto L_81c594;
L_81c592: /* 81c592: fchs  */
  ST0 = -ST0;
L_81c594: /* 81c594: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81c597: fld dword ptr [ecx + 0x370] */
  { double v = F32((uint32_t)(ecx + 0x370u)); FPUSH(v); }
/* 81c59d: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 81c5a3: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c5a9: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 81c5ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5ae: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5b1: je 0x81c5b5 */
  if (zf) goto L_81c5b5;
L_81c5b3: /* 81c5b3: fchs  */
  ST0 = -ST0;
L_81c5b5: /* 81c5b5: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 81c5b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5ba: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5bd: je 0x81c5c4 */
  if (zf) goto L_81c5c4;
L_81c5bf: /* 81c5bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c5c1: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_81c5c4: /* 81c5c4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c5c7: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c5cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5cf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5d2: je 0x81c5d6 */
  if (zf) goto L_81c5d6;
L_81c5d4: /* 81c5d4: fchs  */
  ST0 = -ST0;
L_81c5d6: /* 81c5d6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81c5d9: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81c5dc: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c5e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5e4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5e7: je 0x81c5eb */
  if (zf) goto L_81c5eb;
L_81c5e9: /* 81c5e9: fchs  */
  ST0 = -ST0;
L_81c5eb: /* 81c5eb: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 81c5ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5f0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5f3: je 0x81c5fa */
  if (zf) goto L_81c5fa;
L_81c5f5: /* 81c5f5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c5f7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_81c5fa: /* 81c5fa: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c5fd: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c603: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c605: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c608: je 0x81c60c */
  if (zf) goto L_81c60c;
L_81c60a: /* 81c60a: fchs  */
  ST0 = -ST0;
L_81c60c: /* 81c60c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81c60f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81c612: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c618: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c61a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c61d: je 0x81c621 */
  if (zf) goto L_81c621;
L_81c61f: /* 81c61f: fchs  */
  ST0 = -ST0;
L_81c621: /* 81c621: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 81c624: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c626: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c629: jne 0x81c630 */
  if (!zf) goto L_81c630;
L_81c62b: /* 81c62b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81c62e: jmp 0x81c638 */
  goto L_81c638;
L_81c630: /* 81c630: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81c633: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c635: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_81c638: /* 81c638: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 81c63a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81c63d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81c63f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 81c641: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 81c643: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81c645: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 81c648: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c64a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c64c: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x81c652u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 81c652: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c655: fst qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 81c658: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 81c65b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81c65e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c661: fcomp dword ptr [ecx + 0x38c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x38cu)));
  FPOP();
/* 81c667: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c669: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c66c: je 0x81c67e */
  if (zf) goto L_81c67e;
L_81c66e: /* 81c66e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81c671: fcomp dword ptr [ecx + 0x390] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x390u)));
  FPOP();
/* 81c677: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c679: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c67c: jne 0x81c6d8 */
  if (!zf) goto L_81c6d8;
L_81c67e: /* 81c67e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c681: fcomp dword ptr [ecx + 0x38c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x38cu)));
  FPOP();
/* 81c687: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c689: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c68c: jne 0x81c6a0 */
  if (!zf) goto L_81c6a0;
L_81c68e: /* 81c68e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c691: fmul qword ptr [0xa14820] */
  ST0 = ST0 * (F64((uint32_t)(0xa14820u)));
/* 81c697: fstp dword ptr [ecx + 0x38c] */
  WF32((uint32_t)(ecx + 0x38cu), ST0); FPOP();
/* 81c69d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c6a0: /* 81c6a0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81c6a3: fcomp dword ptr [ecx + 0x390] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x390u)));
  FPOP();
/* 81c6a9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c6ab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c6ae: jne 0x81c6c2 */
  if (!zf) goto L_81c6c2;
L_81c6b0: /* 81c6b0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81c6b3: fmul qword ptr [0xa14820] */
  ST0 = ST0 * (F64((uint32_t)(0xa14820u)));
/* 81c6b9: fstp dword ptr [ecx + 0x390] */
  WF32((uint32_t)(ecx + 0x390u), ST0); FPOP();
/* 81c6bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c6c2: /* 81c6c2: mov edx, dword ptr [ecx + 0x390] */
  edx = R32((uint32_t)(ecx + 0x390u));
/* 81c6c8: mov eax, dword ptr [ecx + 0x38c] */
  eax = R32((uint32_t)(ecx + 0x38cu));
/* 81c6ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81c6cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c6d0: call 0x6c389b */
  esp -= 4; W32(esp, 0x81c6d5u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 81c6d5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c6d8: /* 81c6d8: or dword ptr [ecx + 0x394], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x394u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x394u), r);
  }
/* 81c6de: jmp 0x81c6f9 */
  goto L_81c6f9;
L_81c6e0: /* 81c6e0: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c6e2: je 0x81c6fc */
  if (zf) goto L_81c6fc;
L_81c6e4: /* 81c6e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c6e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c6e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c6ea: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x81c6efu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 81c6ef: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c6f2: and dword ptr [eax + 0x394], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x394u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x394u), r);
  }
L_81c6f9: /* 81c6f9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c6fc: /* 81c6fc: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 81c702: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81c705: jne 0x81c76d */
  if (!zf) goto L_81c76d;
L_81c707: /* 81c707: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81c70a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c70c: je 0x81c7a1 */
  if (zf) goto L_81c7a1;
L_81c712: /* 81c712: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81c715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c717: jne 0x81c76d */
  if (!zf) goto L_81c76d;
L_81c719: /* 81c719: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* 81c71f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c721: je 0x81c76d */
  if (zf) goto L_81c76d;
L_81c723: /* 81c723: test byte ptr [ecx + 0x348], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x348u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c72a: je 0x81c76d */
  if (zf) goto L_81c76d;
L_81c72c: /* 81c72c: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 81c732: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81c734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c736: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81c737: mov ecx, eax */
  ecx = eax;
/* 81c739: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x81c73fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81c73f: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 81c744: mov ecx, dword ptr [0xce8474] */
  ecx = R32((uint32_t)(0xce8474u));
/* 81c74a: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 81c74d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
L_81c74f: /* 81c74f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81c751: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81c754: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81c756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81c758: mov eax, edi */
  eax = edi;
/* 81c75a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81c75d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81c764: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81c765: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81c766: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81c767: mov esp, ebp */
  esp = ebp;
/* 81c769: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81c76a: ret 8 */
  esp += 12; SPILL(); return;
L_81c76d: /* 81c76d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81c770: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c772: je 0x81c7a1 */
  if (zf) goto L_81c7a1;
L_81c774: /* 81c774: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* 81c77a: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c77c: je 0x81c7a1 */
  if (zf) goto L_81c7a1;
L_81c77e: /* 81c77e: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c780: jne 0x81c7a1 */
  if (!zf) goto L_81c7a1;
L_81c782: /* 81c782: fld dword ptr [ecx + 0x3a4] */
  { double v = F32((uint32_t)(ecx + 0x3a4u)); FPUSH(v); }
/* 81c788: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 81c78b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c791: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c793: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c796: jne 0x81c7b9 */
  if (!zf) goto L_81c7b9;
L_81c798: /* 81c798: fstp dword ptr [ecx + 0x3a4] */
  WF32((uint32_t)(ecx + 0x3a4u), ST0); FPOP();
/* 81c79e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c7a1: /* 81c7a1: call 0x6c1262 */
  esp -= 4; W32(esp, 0x81c7a6u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 81c7a6: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 81c7ac: mov edx, dword ptr [0xce8474] */
  edx = R32((uint32_t)(0xce8474u));
/* 81c7b2: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 81c7b5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 81c7b7: jmp 0x81c74f */
  goto L_81c74f;
L_81c7b9: /* 81c7b9: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 81c7bc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c7be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81c7bf: add ecx, 0x34c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c7c5: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81c7cbu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81c7cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c7ce: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81c7d0: add ecx, 0x398 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c7d6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81c7d8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81c7db: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81c7de: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81c7e1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81c7e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c7e7: add ecx, 0x364 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x364u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c7ed: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81c7f3u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81c7f3: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 81c7f6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c7f9: fstp dword ptr [ecx + 0x3a4] */
  WF32((uint32_t)(ecx + 0x3a4u), ST0); FPOP();
/* 81c7ff: xor esi, esi */
  esi = 0;
L_81c801: /* 81c801: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c804: cmp esi, dword ptr [ecx + 0x340] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c80a: jge 0x81c7a1 */
  if ((sf == of)) goto L_81c7a1;
L_81c80c: /* 81c80c: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 81c812: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 81c815: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81c817: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x81c81au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81c81a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81c81b: jmp 0x81c801 */
  goto L_81c801;
L_81c81d: /* 81c81d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81c820: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81c821: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81c822: mov eax, 1 */
  eax = 0x1u;
/* 81c827: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81c82e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81c82f: mov esp, ebp */
  esp = ebp;
/* 81c831: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81c832: ret 8 */
  esp += 12; SPILL(); return;
}

void f_81c376(void) {
  LOAD_REGS();
  goto L_81c376;
L_81c218: /* 81c218: cmp ebx, dword ptr [ecx + 0x340] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c21e: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 81c221: jge 0x81c554 */
  if ((sf == of)) goto L_81c554;
L_81c227: /* 81c227: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 81c22d: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 81c230: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c232: je 0x81c549 */
  if (zf) goto L_81c549;
L_81c238: /* 81c238: test byte ptr [esi + 0x104], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c23f: jne 0x81c549 */
  if (!zf) goto L_81c549;
L_81c245: /* 81c245: mov eax, dword ptr [ecx + 0x3a8] */
  eax = R32((uint32_t)(ecx + 0x3a8u));
/* 81c24b: mov edx, dword ptr [esi + 0x1c8] */
  edx = R32((uint32_t)(esi + 0x1c8u));
/* 81c251: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 81c253: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 81c255: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 81c257: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 81c259: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 81c25b: mov dword ptr [ecx + 0x3a8], edx */
  W32((uint32_t)(ecx + 0x3a8u), edx);
/* 81c261: test byte ptr [esi + 0x3f4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3f4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c268: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 81c26f: jne 0x81c27f */
  if (!zf) goto L_81c27f;
L_81c271: /* 81c271: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 81c277: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81c279: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81c27a: mov ecx, esi */
  ecx = esi;
/* 81c27c: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x81c27fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81c27f: /* 81c27f: test byte ptr [esi + 0x104], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c286: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c289: mov dword ptr [esi + 0x3f0], edx */
  W32((uint32_t)(esi + 0x3f0u), edx);
/* 81c28f: jne 0x81c2a1 */
  if (!zf) goto L_81c2a1;
L_81c291: /* 81c291: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c294: test byte ptr [eax + 0x348], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x348u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c29b: jne 0x81c2a1 */
  if (!zf) goto L_81c2a1;
L_81c29d: /* 81c29d: xor eax, eax */
  eax = 0;
/* 81c29f: jmp 0x81c2a3 */
  goto L_81c2a3;
L_81c2a1: /* 81c2a1: mov eax, edi */
  eax = edi;
L_81c2a3: /* 81c2a3: mov ecx, dword ptr [esi + 0x43c] */
  ecx = R32((uint32_t)(esi + 0x43cu));
/* 81c2a9: fld dword ptr [esi + 0x444] */
  { double v = F32((uint32_t)(esi + 0x444u)); FPUSH(v); }
/* 81c2af: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c2b5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 81c2b7: mov eax, dword ptr [esi + 0x43c] */
  eax = R32((uint32_t)(esi + 0x43cu));
/* 81c2bd: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 81c2bf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 81c2c1: mov dword ptr [esi + 0x43c], eax */
  W32((uint32_t)(esi + 0x43cu), eax);
/* 81c2c7: mov ecx, eax */
  ecx = eax;
/* 81c2c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c2cb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81c2ce: jnp 0x81c2fa */
  if (!pf) goto L_81c2fa;
L_81c2d0: /* 81c2d0: fld dword ptr [esi + 0x444] */
  { double v = F32((uint32_t)(esi + 0x444u)); FPUSH(v); }
/* 81c2d6: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 81c2d9: fst dword ptr [esi + 0x444] */
  WF32((uint32_t)(esi + 0x444u), ST0);
/* 81c2df: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c2e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c2e7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c2ea: je 0x81c546 */
  if (zf) goto L_81c546;
L_81c2f0: /* 81c2f0: mov dword ptr [esi + 0x444], 0 */
  W32((uint32_t)(esi + 0x444u), 0x0u);
L_81c2fa: /* 81c2fa: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c2fd: add edx, 0x398 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81c303: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c306: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 81c308: lea eax, [esi + 0x448] */
  eax = (uint32_t)(esi + 0x448u);
/* 81c30e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 81c310: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 81c313: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 81c316: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81c319: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 81c31c: jne 0x81c3b2 */
  if (!zf) goto L_81c3b2;
L_81c322: /* 81c322: fld dword ptr [esi + 0x3e8] */
  { double v = F32((uint32_t)(esi + 0x3e8u)); FPUSH(v); }
/* 81c328: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c32e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c330: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81c333: jnp 0x81c3b2 */
  if (!pf) goto L_81c3b2;
L_81c335: /* 81c335: fld dword ptr [esi + 0x3ec] */
  { double v = F32((uint32_t)(esi + 0x3ecu)); FPUSH(v); }
/* 81c33b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c341: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c343: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81c346: jnp 0x81c3b2 */
  if (!pf) goto L_81c3b2;
L_81c348: /* 81c348: lea ecx, [esi + 0x350] */
  ecx = (uint32_t)(esi + 0x350u);
/* 81c34e: call dword ptr [0xcfaaf4] */
  esp -= 4; W32(esp, 0x81c354u); SPILL(); f_4e1532(); if (g_unwind) return; /* Core!?GetCenter@FRange@@QBEMXZ */ RELOAD();
/* 81c354: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 81c357: fmul dword ptr [esi + 0x3ec] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3ecu)));
/* 81c35d: xor edi, edi */
  edi = 0;
/* 81c35f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81c362: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81c368: fdiv dword ptr [esi + 0x3e8] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x3e8u)));
/* 81c36e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81c371: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81c374: jmp 0x81c380 */
  goto L_81c380;
L_81c376: /* 81c376: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 81c37d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_81c380: /* 81c380: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 81c383: fmul dword ptr [esi + 0x3e8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e8u)));
/* 81c389: call 0x99c958 */
  esp -= 4; W32(esp, 0x81c38eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81c38e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c390: jge 0x81c3a0 */
  if ((sf == of)) goto L_81c3a0;
L_81c392: /* 81c392: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81c394: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81c395: mov ecx, esi */
  ecx = esi;
/* 81c397: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x81c39du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81c39d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81c39e: jmp 0x81c380 */
  goto L_81c380;
L_81c3a0: /* 81c3a0: mov eax, dword ptr [esi + 0x43c] */
  eax = R32((uint32_t)(esi + 0x43cu));
/* 81c3a6: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81c3a9: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 81c3ac: mov dword ptr [esi + 0x43c], eax */
  W32((uint32_t)(esi + 0x43cu), eax);
L_81c3b2: /* 81c3b2: test byte ptr [esi + 0x43c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x43cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c3b9: jne 0x81c490 */
  if (!zf) goto L_81c490;
L_81c3bf: /* 81c3bf: test byte ptr [esi + 0x3f4], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3f4u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c3c6: je 0x81c3d9 */
  if (zf) goto L_81c3d9;
L_81c3c8: /* 81c3c8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81c3cb: fadd dword ptr [esi + 0x3f8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3f8u)));
/* 81c3d1: fstp dword ptr [esi + 0x3f8] */
  WF32((uint32_t)(esi + 0x3f8u), ST0); FPOP();
/* 81c3d7: jmp 0x81c3e3 */
  goto L_81c3e3;
L_81c3d9: /* 81c3d9: mov dword ptr [esi + 0x3f8], 0 */
  W32((uint32_t)(esi + 0x3f8u), 0x0u);
L_81c3e3: /* 81c3e3: fld dword ptr [esi + 0x340] */
  { double v = F32((uint32_t)(esi + 0x340u)); FPUSH(v); }
/* 81c3e9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c3ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c3f1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81c3f4: jnp 0x81c409 */
  if (!pf) goto L_81c409;
L_81c3f6: /* 81c3f6: fld dword ptr [esi + 0x3f8] */
  { double v = F32((uint32_t)(esi + 0x3f8u)); FPUSH(v); }
/* 81c3fc: fcomp dword ptr [esi + 0x340] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x340u)));
  FPOP();
/* 81c402: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c404: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c407: je 0x81c417 */
  if (zf) goto L_81c417;
L_81c409: /* 81c409: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81c40c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81c40e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c40f: mov ecx, esi */
  ecx = esi;
/* 81c411: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x81c417u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81c417: /* 81c417: mov edx, dword ptr [esi + 0x3f4] */
  edx = R32((uint32_t)(esi + 0x3f4u));
/* 81c41d: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 81c423: or edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 81c426: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81c428: mov dword ptr [esi + 0x3f4], edx */
  W32((uint32_t)(esi + 0x3f4u), edx);
/* 81c42e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81c431: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81c434: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 81c436: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c438: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 81c43f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 81c442: je 0x81c51a */
  if (zf) goto L_81c51a;
L_81c448: /* 81c448: xor edi, edi */
  edi = 0;
/* 81c44a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_81c450: /* 81c450: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c453: cmp edi, dword ptr [eax + 0x114] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c459: jge 0x81c51a */
  if ((sf == of)) goto L_81c51a;
L_81c45f: /* 81c45f: mov ecx, dword ptr [eax + 0x110] */
  ecx = R32((uint32_t)(eax + 0x110u));
/* 81c465: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 81c468: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c46a: je 0x81c48d */
  if (zf) goto L_81c48d;
L_81c46c: /* 81c46c: mov cl, byte ptr [eax + 0x320] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x320u))) & 0xffu);
/* 81c472: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c474: je 0x81c48d */
  if (zf) goto L_81c48d;
L_81c476: /* 81c476: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 81c47c: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c47f: jne 0x81c48d */
  if (!zf) goto L_81c48d;
L_81c481: /* 81c481: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81c484: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81c486: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81c487: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c488: mov ecx, esi */
  ecx = esi;
/* 81c48a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x81c48du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81c48d: /* 81c48d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81c48e: jmp 0x81c450 */
  goto L_81c450;
L_81c490: /* 81c490: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c493: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 81c499: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 81c49c: lea edi, [eax + ebx*4] */
  edi = (uint32_t)(eax + ebx*4);
/* 81c49f: mov eax, dword ptr [ecx + 0x104] */
  eax = R32((uint32_t)(ecx + 0x104u));
/* 81c4a5: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c4a7: je 0x81c506 */
  if (zf) goto L_81c506;
L_81c4a9: /* 81c4a9: test byte ptr [edx + 0x348], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x348u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c4b0: jne 0x81c506 */
  if (!zf) goto L_81c506;
L_81c4b2: /* 81c4b2: fld dword ptr [ecx + 0x454] */
  { double v = F32((uint32_t)(ecx + 0x454u)); FPUSH(v); }
/* 81c4b8: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 81c4bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81c4c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c4c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c4c6: jne 0x81c4d9 */
  if (!zf) goto L_81c4d9;
L_81c4c8: /* 81c4c8: fld dword ptr [ecx + 0x454] */
  { double v = F32((uint32_t)(ecx + 0x454u)); FPUSH(v); }
/* 81c4ce: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 81c4d1: fstp dword ptr [ecx + 0x454] */
  WF32((uint32_t)(ecx + 0x454u), ST0); FPOP();
/* 81c4d7: jmp 0x81c51a */
  goto L_81c51a;
L_81c4d9: /* 81c4d9: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c4df: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81c4e5u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81c4e5: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81c4e8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81c4ea: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 81c4ed: mov dword ptr [ecx + 0x454], edx */
  W32((uint32_t)(ecx + 0x454u), edx);
/* 81c4f3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c4f6: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 81c4fc: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 81c4ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81c501: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x81c504u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81c504: jmp 0x81c51a */
  goto L_81c51a;
L_81c506: /* 81c506: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c508: je 0x81c51a */
  if (zf) goto L_81c51a;
L_81c50a: /* 81c50a: test byte ptr [edx + 0x348], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x348u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c511: jne 0x81c51a */
  if (!zf) goto L_81c51a;
L_81c513: /* 81c513: or dword ptr [ecx + 0x104], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x104u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x104u), r);
  }
L_81c51a: /* 81c51a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c51d: add esi, 0x414 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 81c523: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81c524: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 81c527: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c528: add ecx, 0x370 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c52e: call dword ptr [0xcfaaf8] */
  esp -= 4; W32(esp, 0x81c534u); SPILL(); f_4e31ca(); if (g_unwind) return; /* Core!??HFBox@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 81c534: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c537: add edi, 0x370 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 81c53d: mov ecx, 7 */
  ecx = 0x7u;
/* 81c542: mov esi, eax */
  esi = eax;
/* 81c544: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_81c546: /* 81c546: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c549: /* 81c549: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 81c54a: mov edi, 1 */
  edi = 0x1u;
/* 81c54f: jmp 0x81c218 */
  goto L_81c218;
L_81c554: /* 81c554: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81c557: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c559: mov al, byte ptr [ecx + 0x394] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x394u))) & 0xffu);
/* 81c55f: je 0x81c6e0 */
  if (zf) goto L_81c6e0;
L_81c565: /* 81c565: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c567: jne 0x81c576 */
  if (!zf) goto L_81c576;
L_81c569: /* 81c569: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c56b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c56d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81c56e: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x81c573u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 81c573: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c576: /* 81c576: fld dword ptr [ecx + 0x37c] */
  { double v = F32((uint32_t)(ecx + 0x37cu)); FPUSH(v); }
/* 81c57c: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 81c582: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c588: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 81c58b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c58d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c590: je 0x81c594 */
  if (zf) goto L_81c594;
L_81c592: /* 81c592: fchs  */
  ST0 = -ST0;
L_81c594: /* 81c594: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81c597: fld dword ptr [ecx + 0x370] */
  { double v = F32((uint32_t)(ecx + 0x370u)); FPUSH(v); }
/* 81c59d: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 81c5a3: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c5a9: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 81c5ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5ae: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5b1: je 0x81c5b5 */
  if (zf) goto L_81c5b5;
L_81c5b3: /* 81c5b3: fchs  */
  ST0 = -ST0;
L_81c5b5: /* 81c5b5: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 81c5b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5ba: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5bd: je 0x81c5c4 */
  if (zf) goto L_81c5c4;
L_81c5bf: /* 81c5bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c5c1: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_81c5c4: /* 81c5c4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c5c7: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c5cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5cf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5d2: je 0x81c5d6 */
  if (zf) goto L_81c5d6;
L_81c5d4: /* 81c5d4: fchs  */
  ST0 = -ST0;
L_81c5d6: /* 81c5d6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81c5d9: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81c5dc: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c5e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5e4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5e7: je 0x81c5eb */
  if (zf) goto L_81c5eb;
L_81c5e9: /* 81c5e9: fchs  */
  ST0 = -ST0;
L_81c5eb: /* 81c5eb: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 81c5ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c5f0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c5f3: je 0x81c5fa */
  if (zf) goto L_81c5fa;
L_81c5f5: /* 81c5f5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c5f7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_81c5fa: /* 81c5fa: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c5fd: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c603: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c605: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c608: je 0x81c60c */
  if (zf) goto L_81c60c;
L_81c60a: /* 81c60a: fchs  */
  ST0 = -ST0;
L_81c60c: /* 81c60c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81c60f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81c612: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c618: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c61a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c61d: je 0x81c621 */
  if (zf) goto L_81c621;
L_81c61f: /* 81c61f: fchs  */
  ST0 = -ST0;
L_81c621: /* 81c621: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 81c624: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c626: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c629: jne 0x81c630 */
  if (!zf) goto L_81c630;
L_81c62b: /* 81c62b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81c62e: jmp 0x81c638 */
  goto L_81c638;
L_81c630: /* 81c630: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81c633: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c635: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_81c638: /* 81c638: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 81c63a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81c63d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81c63f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 81c641: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 81c643: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81c645: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 81c648: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c64a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c64c: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x81c652u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 81c652: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c655: fst qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 81c658: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 81c65b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81c65e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c661: fcomp dword ptr [ecx + 0x38c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x38cu)));
  FPOP();
/* 81c667: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c669: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c66c: je 0x81c67e */
  if (zf) goto L_81c67e;
L_81c66e: /* 81c66e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81c671: fcomp dword ptr [ecx + 0x390] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x390u)));
  FPOP();
/* 81c677: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c679: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c67c: jne 0x81c6d8 */
  if (!zf) goto L_81c6d8;
L_81c67e: /* 81c67e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c681: fcomp dword ptr [ecx + 0x38c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x38cu)));
  FPOP();
/* 81c687: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c689: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c68c: jne 0x81c6a0 */
  if (!zf) goto L_81c6a0;
L_81c68e: /* 81c68e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81c691: fmul qword ptr [0xa14820] */
  ST0 = ST0 * (F64((uint32_t)(0xa14820u)));
/* 81c697: fstp dword ptr [ecx + 0x38c] */
  WF32((uint32_t)(ecx + 0x38cu), ST0); FPOP();
/* 81c69d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c6a0: /* 81c6a0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81c6a3: fcomp dword ptr [ecx + 0x390] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x390u)));
  FPOP();
/* 81c6a9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c6ab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c6ae: jne 0x81c6c2 */
  if (!zf) goto L_81c6c2;
L_81c6b0: /* 81c6b0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81c6b3: fmul qword ptr [0xa14820] */
  ST0 = ST0 * (F64((uint32_t)(0xa14820u)));
/* 81c6b9: fstp dword ptr [ecx + 0x390] */
  WF32((uint32_t)(ecx + 0x390u), ST0); FPOP();
/* 81c6bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c6c2: /* 81c6c2: mov edx, dword ptr [ecx + 0x390] */
  edx = R32((uint32_t)(ecx + 0x390u));
/* 81c6c8: mov eax, dword ptr [ecx + 0x38c] */
  eax = R32((uint32_t)(ecx + 0x38cu));
/* 81c6ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81c6cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81c6d0: call 0x6c389b */
  esp -= 4; W32(esp, 0x81c6d5u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 81c6d5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c6d8: /* 81c6d8: or dword ptr [ecx + 0x394], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x394u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x394u), r);
  }
/* 81c6de: jmp 0x81c6f9 */
  goto L_81c6f9;
L_81c6e0: /* 81c6e0: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c6e2: je 0x81c6fc */
  if (zf) goto L_81c6fc;
L_81c6e4: /* 81c6e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c6e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c6e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c6ea: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x81c6efu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 81c6ef: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c6f2: and dword ptr [eax + 0x394], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x394u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x394u), r);
  }
L_81c6f9: /* 81c6f9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c6fc: /* 81c6fc: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 81c702: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81c705: jne 0x81c76d */
  if (!zf) goto L_81c76d;
L_81c707: /* 81c707: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81c70a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c70c: je 0x81c7a1 */
  if (zf) goto L_81c7a1;
L_81c712: /* 81c712: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81c715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c717: jne 0x81c76d */
  if (!zf) goto L_81c76d;
L_81c719: /* 81c719: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* 81c71f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c721: je 0x81c76d */
  if (zf) goto L_81c76d;
L_81c723: /* 81c723: test byte ptr [ecx + 0x348], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x348u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c72a: je 0x81c76d */
  if (zf) goto L_81c76d;
L_81c72c: /* 81c72c: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 81c732: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81c734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c736: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81c737: mov ecx, eax */
  ecx = eax;
/* 81c739: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x81c73fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81c73f: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 81c744: mov ecx, dword ptr [0xce8474] */
  ecx = R32((uint32_t)(0xce8474u));
/* 81c74a: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 81c74d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
L_81c74f: /* 81c74f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81c751: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81c754: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81c756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81c758: mov eax, edi */
  eax = edi;
/* 81c75a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81c75d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81c764: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81c765: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81c766: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81c767: mov esp, ebp */
  esp = ebp;
/* 81c769: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81c76a: ret 8 */
  esp += 12; SPILL(); return;
L_81c76d: /* 81c76d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81c770: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81c772: je 0x81c7a1 */
  if (zf) goto L_81c7a1;
L_81c774: /* 81c774: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* 81c77a: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c77c: je 0x81c7a1 */
  if (zf) goto L_81c7a1;
L_81c77e: /* 81c77e: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c780: jne 0x81c7a1 */
  if (!zf) goto L_81c7a1;
L_81c782: /* 81c782: fld dword ptr [ecx + 0x3a4] */
  { double v = F32((uint32_t)(ecx + 0x3a4u)); FPUSH(v); }
/* 81c788: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 81c78b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81c791: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81c793: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81c796: jne 0x81c7b9 */
  if (!zf) goto L_81c7b9;
L_81c798: /* 81c798: fstp dword ptr [ecx + 0x3a4] */
  WF32((uint32_t)(ecx + 0x3a4u), ST0); FPOP();
/* 81c79e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81c7a1: /* 81c7a1: call 0x6c1262 */
  esp -= 4; W32(esp, 0x81c7a6u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 81c7a6: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 81c7ac: mov edx, dword ptr [0xce8474] */
  edx = R32((uint32_t)(0xce8474u));
/* 81c7b2: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 81c7b5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 81c7b7: jmp 0x81c74f */
  goto L_81c74f;
L_81c7b9: /* 81c7b9: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 81c7bc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81c7be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81c7bf: add ecx, 0x34c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c7c5: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81c7cbu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81c7cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c7ce: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81c7d0: add ecx, 0x398 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c7d6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81c7d8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81c7db: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81c7de: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81c7e1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81c7e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c7e7: add ecx, 0x364 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x364u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81c7ed: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81c7f3u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81c7f3: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 81c7f6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c7f9: fstp dword ptr [ecx + 0x3a4] */
  WF32((uint32_t)(ecx + 0x3a4u), ST0); FPOP();
/* 81c7ff: xor esi, esi */
  esi = 0;
L_81c801: /* 81c801: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81c804: cmp esi, dword ptr [ecx + 0x340] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81c80a: jge 0x81c7a1 */
  if ((sf == of)) goto L_81c7a1;
L_81c80c: /* 81c80c: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 81c812: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 81c815: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81c817: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x81c81au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81c81a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81c81b: jmp 0x81c801 */
  goto L_81c801;
}

void f_81c835(void) {
  LOAD_REGS();
L_81c835: /* 81c835: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 81c838: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81c83d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 81c840: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81c841: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 81c844: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81c849u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81c849(); return;
}

void f_81c849(void) {
  LOAD_REGS();
L_81c849: /* 81c849: push 0xa147fc */
  { uint32_t v = 0xa147fcu; esp -= 4; W32(esp, v); }
/* 81c84e: push 0xae27a0 */
  { uint32_t v = 0xae27a0u; esp -= 4; W32(esp, v); }
/* 81c853: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81c859u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81c859: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81c85c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c85e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81c860: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81c865u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81c865: guest_badaddr(0x81c865); return;
}

void f_81ca40(void) {
  LOAD_REGS();
L_81ca40: /* 81ca40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81ca41: mov ebp, esp */
  ebp = esp;
/* 81ca43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81ca45: push 0x9d2df8 */
  { uint32_t v = 0x9d2df8u; esp -= 4; W32(esp, v); }
/* 81ca4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81ca50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81ca51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81ca58: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ca5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81ca5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81ca5d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 81ca60: mov eax, dword ptr [ecx + 0x36c] */
  eax = R32((uint32_t)(ecx + 0x36cu));
/* 81ca66: xor esi, esi */
  esi = 0;
/* 81ca68: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81ca6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81ca6b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81ca6e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 81ca71: jne 0x81ca8e */
  if (!zf) goto L_81ca8e;
L_81ca73: /* 81ca73: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81ca75: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x81ca7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81ca7b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81ca7e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81ca85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81ca86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81ca87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81ca88: mov esp, ebp */
  esp = ebp;
/* 81ca8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81ca8b: ret 0x10 */
  esp += 20; SPILL(); return;
L_81ca8e: /* 81ca8e: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 81ca94: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ca97: jne 0x81cbc9 */
  if (!zf) goto L_81cbc9;
L_81ca9d: /* 81ca9d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 81ca9f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81caa2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 81caa5: mov al, byte ptr [ecx + 0x3a8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3a8u))) & 0xffu);
/* 81caab: xor ebx, ebx */
  ebx = 0;
/* 81caad: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81caaf: je 0x81cac0 */
  if (zf) goto L_81cac0;
L_81cab1: /* 81cab1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81cab3: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x81cab9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81cab9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81cabc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_81cac0: /* 81cac0: cmp esi, dword ptr [ecx + 0x340] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81cac6: jge 0x81cb31 */
  if ((sf == of)) goto L_81cb31;
L_81cac8: /* 81cac8: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 81cace: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 81cad1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cad3: je 0x81cb2e */
  if (zf) goto L_81cb2e;
L_81cad5: /* 81cad5: mov dword ptr [eax + 0x3f0], ecx */
  W32((uint32_t)(eax + 0x3f0u), ecx);
/* 81cadb: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 81cade: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81cae0: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x81cae2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81cae2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81cae5: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 81caeb: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 81caee: test byte ptr [ecx + 0x104], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x104u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81caf5: jne 0x81cb23 */
  if (!zf) goto L_81cb23;
L_81caf7: /* 81caf7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 81cafa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81cafd: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 81cb00: test dword ptr [edx + 0x534], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cb0a: je 0x81cb23 */
  if (zf) goto L_81cb23;
L_81cb0c: /* 81cb0c: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 81cb0f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81cb11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81cb12: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 81cb15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81cb16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81cb17: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81cb1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81cb1b: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x81cb21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81cb21: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_81cb23: /* 81cb23: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 81cb26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81cb28: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x81cb2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81cb2b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81cb2e: /* 81cb2e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81cb2f: jmp 0x81cac0 */
  goto L_81cac0;
L_81cb31: /* 81cb31: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 81cb34: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81cb37: mov eax, dword ptr [ecx + 0x104] */
  eax = R32((uint32_t)(ecx + 0x104u));
/* 81cb3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cb3f: je 0x81cba0 */
  if (zf) goto L_81cba0;
L_81cb41: /* 81cb41: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 81cb44: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81cb46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81cb47: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 81cb4a: call 0x6c460b */
  esp -= 4; W32(esp, 0x81cb4fu); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 81cb4f: mov edx, dword ptr [0xcfa350] */
  edx = R32((uint32_t)(0xcfa350u));
/* 81cb55: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 81cb58: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81cb5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81cb5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cb5d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 81cb61: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x81cb64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81cb64: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 81cb67: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 81cb69: mov byte ptr [ebp - 0x17], al */
  W8((uint32_t)(ebp + 0xffffffe9u), (eax & 0xffu));
/* 81cb6c: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 81cb6f: mov byte ptr [ebp - 0x15], al */
  W8((uint32_t)(ebp + 0xffffffebu), (eax & 0xffu));
/* 81cb72: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 81cb76: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81cb79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81cb7a: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81cb7d: mov edi, esp */
  edi = esp;
/* 81cb7f: add esi, 0x370 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 81cb85: mov ecx, 7 */
  ecx = 0x7u;
/* 81cb8a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 81cb8c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 81cb8f: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x81cb94u); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 81cb94: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 81cb97: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81cb9b: call 0x6cadcb */
  esp -= 4; W32(esp, 0x81cba0u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_81cba0: /* 81cba0: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 81cba5: mov ecx, dword ptr [0xce83e4] */
  ecx = R32((uint32_t)(0xce83e4u));
/* 81cbab: add dword ptr [eax + ecx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 81cbae: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 81cbb3: mov ecx, dword ptr [0xce83ec] */
  ecx = R32((uint32_t)(0xce83ecu));
/* 81cbb9: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 81cbbc: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 81cbbe: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81cbc1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81cbc3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 81cbc5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81cbc7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_81cbc9: /* 81cbc9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81cbcc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81cbcd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81cbce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81cbd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81cbd6: mov esp, ebp */
  esp = ebp;
/* 81cbd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81cbd9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_81cbdc(void) {
  LOAD_REGS();
L_81cbdc: /* 81cbdc: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81cbdf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81cbe4: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 81cbe7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81cbe8: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81cbeb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81cbf0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81cbf0(); return;
}

void f_81cbf0(void) {
  LOAD_REGS();
L_81cbf0: /* 81cbf0: push 0xa1482c */
  { uint32_t v = 0xa1482cu; esp -= 4; W32(esp, v); }
/* 81cbf5: push 0xae27a8 */
  { uint32_t v = 0xae27a8u; esp -= 4; W32(esp, v); }
/* 81cbfa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81cc00u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81cc00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81cc03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cc05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cc07: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81cc0cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81cc0c: guest_badaddr(0x81cc0c); return;
}

void f_81cc90(void) {
  LOAD_REGS();
L_81cc90: /* 81cc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81cc91: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 81cc95: push 0xcc6d78 */
  { uint32_t v = 0xcc6d78u; esp -= 4; W32(esp, v); }
/* 81cc9a: mov ecx, esi */
  ecx = esi;
/* 81cc9c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x81cca2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 81cca2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cca4: jne 0x81ccbe */
  if (!zf) goto L_81ccbe;
L_81cca6: /* 81cca6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 81ccab: push 0xae27b0 */
  { uint32_t v = 0xae27b0u; esp -= 4; W32(esp, v); }
/* 81ccb0: push 0xae27f4 */
  { uint32_t v = 0xae27f4u; esp -= 4; W32(esp, v); }
/* 81ccb5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x81ccbbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 81ccbb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_81ccbe: /* 81ccbe: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 81ccc2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81ccc5: jne 0x81cccd */
  if (!zf) goto L_81cccd;
L_81ccc7: /* 81ccc7: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x81cccdu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_81cccd: /* 81cccd: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 81ccd3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81ccd5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 81ccd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ccdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81ccdc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 81cce0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cce2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81cce3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81cce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81cce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81cce6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x81ccecu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 81ccec: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ccef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81ccf0: ret  */
  esp += 4; SPILL(); return;
}

void f_81cd20(void) {
  LOAD_REGS();
L_81cd20: /* 81cd20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81cd21: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 81cd25: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cd27: je 0x81cd3e */
  if (zf) goto L_81cd3e;
L_81cd29: /* 81cd29: push 0xcc8cb8 */
  { uint32_t v = 0xcc8cb8u; esp -= 4; W32(esp, v); }
/* 81cd2e: mov ecx, esi */
  ecx = esi;
/* 81cd30: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81cd36u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81cd36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cd38: je 0x81cd3e */
  if (zf) goto L_81cd3e;
L_81cd3a: /* 81cd3a: mov eax, esi */
  eax = esi;
/* 81cd3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81cd3d: ret  */
  esp += 4; SPILL(); return;
L_81cd3e: /* 81cd3e: xor eax, eax */
  eax = 0;
/* 81cd40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81cd41: ret  */
  esp += 4; SPILL(); return;
}

void f_81cd60(void) {
  LOAD_REGS();
L_81cd60: /* 81cd60: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81cd63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81cd64: mov esi, ecx */
  esi = ecx;
/* 81cd66: mov eax, dword ptr [esi + 0x36c] */
  eax = R32((uint32_t)(esi + 0x36cu));
/* 81cd6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cd6e: jne 0x81ce2a */
  if (!zf) goto L_81ce2a;
L_81cd74: /* 81cd74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cd76: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 81cd7a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81cd80u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81cd80: push 0xcc6d78 */
  { uint32_t v = 0xcc6d78u; esp -= 4; W32(esp, v); }
/* 81cd85: mov ecx, 0xcc6d78 */
  ecx = 0xcc6d78u;
/* 81cd8a: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x81cd90u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 81cd90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cd92: jne 0x81cdac */
  if (!zf) goto L_81cdac;
L_81cd94: /* 81cd94: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 81cd99: push 0xae27b0 */
  { uint32_t v = 0xae27b0u; esp -= 4; W32(esp, v); }
/* 81cd9e: push 0xae27f4 */
  { uint32_t v = 0xae27f4u; esp -= 4; W32(esp, v); }
/* 81cda3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x81cda9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 81cda9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_81cdac: /* 81cdac: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x81cdb2u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 81cdb2: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 81cdb8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81cdba: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 81cdbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cdc0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81cdc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cdc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cdc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81cdc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81cdc7: push 0xcc6d78 */
  { uint32_t v = 0xcc6d78u; esp -= 4; W32(esp, v); }
/* 81cdcc: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x81cdd2u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 81cdd2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81cdd5: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 81cdd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81cdda: lea ecx, [esi + 0x34c] */
  ecx = (uint32_t)(esi + 0x34cu);
/* 81cde0: mov dword ptr [esi + 0x3ac], eax */
  W32((uint32_t)(esi + 0x3acu), eax);
/* 81cde6: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81cdecu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81cdec: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81cdee: lea ecx, [esi + 0x398] */
  ecx = (uint32_t)(esi + 0x398u);
/* 81cdf4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81cdf6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81cdf9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81cdfc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81cdff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81ce02: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 81ce08: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81ce0eu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81ce0e: fstp dword ptr [esi + 0x3a4] */
  WF32((uint32_t)(esi + 0x3a4u), ST0); FPOP();
/* 81ce14: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 81ce1a: mov dword ptr [esi + 0x36c], 1 */
  W32((uint32_t)(esi + 0x36cu), 0x1u);
/* 81ce24: call dword ptr [0xcfa644] */
  esp -= 4; W32(esp, 0x81ce2au); SPILL(); f_4e303a(); if (g_unwind) return; /* Core!?Init@FBox@@QAEXXZ */ RELOAD();
L_81ce2a: /* 81ce2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81ce2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ce2e: ret  */
  esp += 4; SPILL(); return;
}

void f_81ce70(void) {
  LOAD_REGS();
L_81ce70: /* 81ce70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81ce71: mov ebp, esp */
  ebp = esp;
/* 81ce73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81ce75: push 0x9d2e10 */
  { uint32_t v = 0x9d2e10u; esp -= 4; W32(esp, v); }
/* 81ce7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81ce80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81ce81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81ce88: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ce8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81ce8c: mov ebx, ecx */
  ebx = ecx;
/* 81ce8e: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 81ce94: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 81ce9a: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* 81cea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81cea1: xor esi, esi */
  esi = 0;
/* 81cea3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81cea5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81cea6: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 81cea9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81ceac: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 81ceaf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 81ceb3: je 0x81d01f */
  if (zf) goto L_81d01f;
L_81ceb9: /* 81ceb9: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 81cebf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81cec0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 81cec3: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x81cec9u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 81cec9: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 81cecc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81cecd: lea ecx, [ebx + 0x370] */
  ecx = (uint32_t)(ebx + 0x370u);
/* 81ced3: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x81ced9u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 81ced9: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 81cedb: mov ecx, dword ptr [ebx + 0xb0] */
  ecx = R32((uint32_t)(ebx + 0xb0u));
/* 81cee1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81cee2: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 81cee8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81cee9: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 81ceef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81cef1: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 81cef6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81cef9: mov esi, esp */
  esi = esp;
/* 81cefb: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 81cefd: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 81cf00: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81cf03: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 81cf06: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 81cf09: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81cf0c: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 81cf12: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 81cf14: mov esi, esp */
  esi = esp;
/* 81cf16: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 81cf18: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 81cf1b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81cf1e: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 81cf21: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 81cf24: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 81cf29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81cf2a: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x81cf2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81cf2d: /* 81cf2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cf2f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 81cf32: je 0x81cfa6 */
  if (zf) goto L_81cfa6;
L_81cf34: /* 81cf34: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 81cf37: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cf39: je 0x81cf9f */
  if (zf) goto L_81cf9f;
L_81cf3b: /* 81cf3b: push 0xcc8cb8 */
  { uint32_t v = 0xcc8cb8u; esp -= 4; W32(esp, v); }
/* 81cf40: mov ecx, esi */
  ecx = esi;
/* 81cf42: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81cf48u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81cf48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cf4a: je 0x81cf9f */
  if (zf) goto L_81cf9f;
L_81cf4c: /* 81cf4c: test byte ptr [esi + 0x34c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81cf53: je 0x81cf9f */
  if (zf) goto L_81cf9f;
L_81cf55: /* 81cf55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cf57: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 81cf5a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81cf60u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81cf60: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 81cf63: lea edi, [esi + 0x350] */
  edi = (uint32_t)(esi + 0x350u);
/* 81cf69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81cf6a: mov ecx, edi */
  ecx = edi;
/* 81cf6c: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x81cf72u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 81cf72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cf74: jne 0x81cf87 */
  if (!zf) goto L_81cf87;
L_81cf76: /* 81cf76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81cf77: lea ecx, [ebx + 0x100] */
  ecx = (uint32_t)(ebx + 0x100u);
/* 81cf7d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x81cf83u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 81cf83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81cf85: je 0x81cf9f */
  if (zf) goto L_81cf9f;
L_81cf87: /* 81cf87: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81cf8a: mov ecx, dword ptr [ebx + 0x3ac] */
  ecx = R32((uint32_t)(ebx + 0x3acu));
/* 81cf90: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81cf92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81cf93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81cf94: mov ecx, esi */
  ecx = esi;
/* 81cf96: call dword ptr [edx + 0x1a0] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a0u)); esp -= 4; W32(esp, 0x81cf9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81cf9c: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_81cf9f: /* 81cf9f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81cfa2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 81cfa4: jmp 0x81cf2d */
  goto L_81cf2d;
L_81cfa6: /* 81cfa6: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 81cfa9: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x81cfafu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 81cfaf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81cfb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81cfb4: jge 0x81d01a */
  if ((sf == of)) goto L_81d01a;
L_81cfb6: /* 81cfb6: xor eax, eax */
  eax = 0;
/* 81cfb8: jmp 0x81d029 */
  goto L_81d029;
L_81d01a: /* 81d01a: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81d01d: jge 0x81d024 */
  if ((sf == of)) goto L_81d024;
L_81d01f: /* 81d01f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81d022: jmp 0x81d029 */
  goto L_81d029;
L_81d024: /* 81d024: mov eax, 4 */
  eax = 0x4u;
L_81d029: /* 81d029: mov edx, dword ptr [ebx + 0x3ac] */
  edx = R32((uint32_t)(ebx + 0x3acu));
/* 81d02f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d032: mov dword ptr [edx + 0x64], eax */
  W32((uint32_t)(edx + 0x64u), eax);
/* 81d035: mov eax, dword ptr [ebx + 0x3ac] */
  eax = R32((uint32_t)(ebx + 0x3acu));
/* 81d03b: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 81d03e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d03f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d040: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d047: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d048: mov esp, ebp */
  esp = ebp;
/* 81d04a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d04b: ret  */
  esp += 4; SPILL(); return;
}

void f_81cfba(void) {
  LOAD_REGS();
L_81cfba: /* 81cfba: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81cfbd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81cfc2: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 81cfc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81cfc6: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 81cfc9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81cfceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81cfce(); return;
}

void f_81cfce(void) {
  LOAD_REGS();
L_81cfce: /* 81cfce: push 0xa1489c */
  { uint32_t v = 0xa1489cu; esp -= 4; W32(esp, v); }
/* 81cfd3: push 0xae2780 */
  { uint32_t v = 0xae2780u; esp -= 4; W32(esp, v); }
/* 81cfd8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81cfdeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81cfde: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81cfe1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cfe3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81cfe5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81cfeau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81cfea(); return;
}

void f_81cfea(void) {
  LOAD_REGS();
L_81cfea: /* 81cfea: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 81cfed: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81cff2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 81cff5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81cff6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 81cff9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81cffeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81cffe(); return;
}

void f_81cffe(void) {
  LOAD_REGS();
L_81cffe: /* 81cffe: push 0xa14854 */
  { uint32_t v = 0xa14854u; esp -= 4; W32(esp, v); }
/* 81d003: push 0xae2788 */
  { uint32_t v = 0xae2788u; esp -= 4; W32(esp, v); }
/* 81d008: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81d00eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81d00e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81d011: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d013: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d015: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81d01au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 81d01a: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81d01d: jge 0x81d024 */
  if ((sf == of)) goto L_81d024;
L_81d01f: /* 81d01f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81d022: jmp 0x81d029 */
  goto L_81d029;
L_81d024: /* 81d024: mov eax, 4 */
  eax = 0x4u;
L_81d029: /* 81d029: mov edx, dword ptr [ebx + 0x3ac] */
  edx = R32((uint32_t)(ebx + 0x3acu));
/* 81d02f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d032: mov dword ptr [edx + 0x64], eax */
  W32((uint32_t)(edx + 0x64u), eax);
/* 81d035: mov eax, dword ptr [ebx + 0x3ac] */
  eax = R32((uint32_t)(ebx + 0x3acu));
/* 81d03b: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 81d03e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d03f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d040: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d047: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d048: mov esp, ebp */
  esp = ebp;
/* 81d04a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d04b: ret  */
  esp += 4; SPILL(); return;
}

void f_81d0d0(void) {
  LOAD_REGS();
L_81d0d0: /* 81d0d0: mov eax, 1 */
  eax = 0x1u;
/* 81d0d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81d0f0(void) {
  LOAD_REGS();
L_81d0f0: /* 81d0f0: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 81d0f6: or dword ptr [eax + 0x44c], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 81d0fd: mov eax, 1 */
  eax = 0x1u;
/* 81d102: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81d120(void) {
  LOAD_REGS();
L_81d120: /* 81d120: mov dword ptr [ecx + 0x340], 0 */
  W32((uint32_t)(ecx + 0x340u), 0x0u);
/* 81d12a: ret  */
  esp += 4; SPILL(); return;
}

void f_81d140(void) {
  LOAD_REGS();
L_81d140: /* 81d140: mov dword ptr [ecx + 0x650], 0 */
  W32((uint32_t)(ecx + 0x650u), 0x0u);
/* 81d14a: ret  */
  esp += 4; SPILL(); return;
}

void f_81d160(void) {
  LOAD_REGS();
L_81d160: /* 81d160: mov dword ptr [ecx + 0x344], 0 */
  W32((uint32_t)(ecx + 0x344u), 0x0u);
/* 81d16a: ret  */
  esp += 4; SPILL(); return;
}

void f_81d180(void) {
  LOAD_REGS();
L_81d180: /* 81d180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81d181: mov ebp, esp */
  ebp = esp;
/* 81d183: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81d185: push 0x9d2e20 */
  { uint32_t v = 0x9d2e20u; esp -= 4; W32(esp, v); }
/* 81d18a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81d190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d191: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81d198: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d19b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81d19c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81d19f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81d1a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81d1a1: mov esi, ecx */
  esi = ecx;
/* 81d1a3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 81d1a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81d1a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d1ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d1ad: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 81d1b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81d1b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d1b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d1ba: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 81d1bd: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 81d1c0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81d1c3: mov edi, esp */
  edi = esp;
/* 81d1c5: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 81d1c7: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 81d1ca: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81d1cd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 81d1cf: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 81d1d2: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 81d1d5: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 81d1d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81d1da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d1db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81d1e2: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 81d1e5: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x81d1ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81d1eb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 81d1ee: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 81d1f1: mov byte ptr [eax + 0x50], 1 */
  W8((uint32_t)(eax + 0x50u), 0x1u);
/* 81d1f5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 81d1f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81d1fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d1fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d1ff: mov eax, esp */
  eax = esp;
/* 81d201: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 81d203: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 81d206: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 81d209: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 81d20c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 81d20f: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x81d215u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81d215: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81d218: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 81d21a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81d21c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d21e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81d220: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d222: mov edi, eax */
  edi = eax;
/* 81d224: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d227: mov eax, esp */
  eax = esp;
/* 81d229: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 81d22b: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81d22e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 81d231: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81d234: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 81d237: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 81d23a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d23b: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x81d241u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81d241: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d244: mov eax, edi */
  eax = edi;
/* 81d246: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d247: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d248: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d24f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d250: mov esp, ebp */
  esp = ebp;
/* 81d252: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d253: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_81d256(void) {
  LOAD_REGS();
L_81d256: /* 81d256: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81d259: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81d25e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 81d261: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81d262: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 81d265: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81d26au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81d26a(); return;
}

void f_81d26a(void) {
  LOAD_REGS();
L_81d26a: /* 81d26a: push 0xa148c0 */
  { uint32_t v = 0xa148c0u; esp -= 4; W32(esp, v); }
/* 81d26f: push 0xae3590 */
  { uint32_t v = 0xae3590u; esp -= 4; W32(esp, v); }
/* 81d274: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81d27au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81d27a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81d27d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d27f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d281: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81d286u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81d286: guest_badaddr(0x81d286); return;
}

void f_81d2e0(void) {
  LOAD_REGS();
L_81d2e0: /* 81d2e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81d2e1: mov ebp, esp */
  ebp = esp;
/* 81d2e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81d2e5: push 0x9d2e30 */
  { uint32_t v = 0x9d2e30u; esp -= 4; W32(esp, v); }
/* 81d2ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81d2f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d2f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81d2f8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d2fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81d2fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81d2fd: mov esi, ecx */
  esi = ecx;
/* 81d2ff: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 81d302: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 81d308: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81d30a: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 81d30d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81d310: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81d313: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81d314: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 81d317: mov edx, dword ptr [ebp + 0x44] */
  edx = R32((uint32_t)(ebp + 0x44u));
/* 81d31a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81d31d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81d31e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81d321: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d323: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 81d326: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d327: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81d32a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d32d: mov edx, esp */
  edx = esp;
/* 81d32f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81d331: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 81d334: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 81d337: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 81d33a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81d341: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 81d344: call 0x6c750e */
  esp -= 4; W32(esp, 0x81d349u); SPILL(); f_6c750e(); if (g_unwind) return; RELOAD();
/* 81d349: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81d34c: jne 0x81d3d7 */
  if (!zf) goto L_81d3d7;
L_81d352: /* 81d352: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 81d355: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 81d35b: mov ecx, dword ptr [edx + 0x170] */
  ecx = R32((uint32_t)(edx + 0x170u));
/* 81d361: fadd qword ptr [0xa14938] */
  ST0 = ST0 + (F64((uint32_t)(0xa14938u)));
/* 81d367: lea eax, [edx + 0x170] */
  eax = (uint32_t)(edx + 0x170u);
/* 81d36d: fsubr dword ptr [eax + 8] */
  ST0 = (F32((uint32_t)(eax + 0x8u))) - ST0;
/* 81d370: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d373: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 81d376: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 81d379: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 81d37b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81d37e: mov dword ptr [ebp + 8], 0x41800000 */
  W32((uint32_t)(ebp + 0x8u), 0x41800000u);
/* 81d385: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81d388: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 81d38b: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 81d38d: mov ecx, esp */
  ecx = esp;
/* 81d38f: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 81d391: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 81d396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d397: mov dword ptr [ebp + 0xc], 0x41800000 */
  W32((uint32_t)(ebp + 0xcu), 0x41800000u);
/* 81d39e: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 81d3a1: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 81d3a4: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 81d3a7: mov dword ptr [ebp + 0x10], 0x3f800000 */
  W32((uint32_t)(ebp + 0x10u), 0x3f800000u);
/* 81d3ae: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 81d3b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d3b2: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 81d3b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81d3b6: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 81d3b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81d3ba: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 81d3bc: call dword ptr [edi + 0xd0] */
  { uint32_t t = R32((uint32_t)(edi + 0xd0u)); esp -= 4; W32(esp, 0x81d3c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81d3c2: fld dword ptr [ebp + 0x38] */
  { double v = F32((uint32_t)(ebp + 0x38u)); FPUSH(v); }
/* 81d3c5: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 81d3cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81d3cd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81d3d0: jp 0x81d3ea */
  if (pf) goto L_81d3ea;
L_81d3d2: /* 81d3d2: mov eax, 1 */
  eax = 0x1u;
L_81d3d7: /* 81d3d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d3da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d3e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d3e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d3e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d3e4: mov esp, ebp */
  esp = ebp;
/* 81d3e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d3e7: ret 0x40 */
  esp += 68; SPILL(); return;
L_81d3ea: /* 81d3ea: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81d3ed: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 81d3ef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81d3f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d3f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81d3f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d3f7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d3fa: mov eax, esp */
  eax = esp;
/* 81d3fc: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 81d3fe: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81d401: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 81d404: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81d407: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 81d40a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 81d40d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d40e: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x81d414u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81d414: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d417: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d418: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d419: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 81d41c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d423: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d424: mov esp, ebp */
  esp = ebp;
/* 81d426: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d427: ret 0x40 */
  esp += 68; SPILL(); return;
}

void f_81d42a(void) {
  LOAD_REGS();
L_81d42a: /* 81d42a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81d42d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81d432: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 81d435: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81d436: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 81d439: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81d43eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81d43e(); return;
}

void f_81d43e(void) {
  LOAD_REGS();
L_81d43e: /* 81d43e: push 0xa148fc */
  { uint32_t v = 0xa148fcu; esp -= 4; W32(esp, v); }
/* 81d443: push 0xae3598 */
  { uint32_t v = 0xae3598u; esp -= 4; W32(esp, v); }
/* 81d448: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81d44eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81d44e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81d451: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d453: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d455: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81d45au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81d45a: guest_badaddr(0x81d45a); return;
}

void f_81d4c0(void) {
  LOAD_REGS();
L_81d4c0: /* 81d4c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81d4c1: mov ebp, esp */
  ebp = esp;
/* 81d4c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81d4c5: push 0x9d2e40 */
  { uint32_t v = 0x9d2e40u; esp -= 4; W32(esp, v); }
/* 81d4ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81d4d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d4d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81d4d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d4db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81d4de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81d4df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81d4e0: xor esi, esi */
  esi = 0;
/* 81d4e2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81d4e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81d4e5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81d4e8: mov ebx, ecx */
  ebx = ecx;
/* 81d4ea: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 81d4ed: je 0x81d560 */
  if (zf) goto L_81d560;
L_81d4ef: /* 81d4ef: xor edi, edi */
  edi = 0;
L_81d4f1: /* 81d4f1: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 81d4f3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81d4f6: jge 0x81d5d4 */
  if ((sf == of)) goto L_81d5d4;
L_81d4fc: /* 81d4fc: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 81d4ff: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 81d502: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81d504: je 0x81d557 */
  if (zf) goto L_81d557;
L_81d506: /* 81d506: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 81d50c: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81d50f: jne 0x81d557 */
  if (!zf) goto L_81d557;
L_81d511: /* 81d511: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 81d517: mov esi, eax */
  esi = eax;
/* 81d519: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 81d51c: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  esi = r;
  }
/* 81d51f: je 0x81d550 */
  if (zf) goto L_81d550;
L_81d521: /* 81d521: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81d523: je 0x81d550 */
  if (zf) goto L_81d550;
L_81d525: /* 81d525: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81d528: jne 0x81d550 */
  if (!zf) goto L_81d550;
L_81d52a: /* 81d52a: mov edx, dword ptr [ecx + 0x8c] */
  edx = R32((uint32_t)(ecx + 0x8cu));
/* 81d530: test dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81d533: jne 0x81d550 */
  if (!zf) goto L_81d550;
L_81d535: /* 81d535: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81d538: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81d53b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d53c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81d53d: or edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 81d540: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d542: mov dword ptr [ecx + 0x8c], edx */
  W32((uint32_t)(ecx + 0x8cu), edx);
/* 81d548: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x81d54du); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 81d54d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81d54e: jmp 0x81d4f1 */
  goto L_81d4f1;
L_81d550: /* 81d550: and dword ptr [ecx + 0x8c], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8cu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x8cu), r);
  }
L_81d557: /* 81d557: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81d558: jmp 0x81d4f1 */
  goto L_81d4f1;
L_81d560: /* 81d560: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 81d562: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81d565: jge 0x81d5d4 */
  if ((sf == of)) goto L_81d5d4;
L_81d567: /* 81d567: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 81d56a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 81d56d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81d56f: je 0x81d5a1 */
  if (zf) goto L_81d5a1;
L_81d571: /* 81d571: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 81d577: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81d579: je 0x81d5a1 */
  if (zf) goto L_81d5a1;
L_81d57b: /* 81d57b: and eax, 0xffffffef */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81d57e: mov dword ptr [ecx + 0x8c], eax */
  W32((uint32_t)(ecx + 0x8cu), eax);
/* 81d584: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 81d58a: mov edx, eax */
  edx = eax;
/* 81d58c: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 81d58f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 81d592: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81d595: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81d596: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81d599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d59a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81d59c: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x81d5a1u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
L_81d5a1: /* 81d5a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81d5a2: jmp 0x81d560 */
  goto L_81d560;
L_81d5d4: /* 81d5d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d5d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d5d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d5d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d5e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d5e1: mov esp, ebp */
  esp = ebp;
/* 81d5e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d5e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81d55a(void) {
  LOAD_REGS();
L_81d55a: /* 81d55a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_81d560: /* 81d560: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 81d562: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81d565: jge 0x81d5d4 */
  if ((sf == of)) goto L_81d5d4;
L_81d567: /* 81d567: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 81d56a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 81d56d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81d56f: je 0x81d5a1 */
  if (zf) goto L_81d5a1;
L_81d571: /* 81d571: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 81d577: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81d579: je 0x81d5a1 */
  if (zf) goto L_81d5a1;
L_81d57b: /* 81d57b: and eax, 0xffffffef */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81d57e: mov dword ptr [ecx + 0x8c], eax */
  W32((uint32_t)(ecx + 0x8cu), eax);
/* 81d584: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 81d58a: mov edx, eax */
  edx = eax;
/* 81d58c: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 81d58f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 81d592: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81d595: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81d596: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81d599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d59a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81d59c: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x81d5a1u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
L_81d5a1: /* 81d5a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81d5a2: jmp 0x81d560 */
  goto L_81d560;
L_81d5d4: /* 81d5d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d5d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d5d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d5d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d5e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d5e1: mov esp, ebp */
  esp = ebp;
/* 81d5e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d5e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81d5a4(void) {
  LOAD_REGS();
L_81d5a4: /* 81d5a4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81d5a7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81d5ac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81d5af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81d5b0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81d5b3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81d5b8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81d5b8(); return;
}

void f_81d5b8(void) {
  LOAD_REGS();
L_81d5b8: /* 81d5b8: push 0xa14944 */
  { uint32_t v = 0xa14944u; esp -= 4; W32(esp, v); }
/* 81d5bd: push 0xae2bcc */
  { uint32_t v = 0xae2bccu; esp -= 4; W32(esp, v); }
/* 81d5c2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81d5c8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81d5c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81d5cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d5cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81d5cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81d5d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 81d5d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d5d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d5d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d5d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d5e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d5e1: mov esp, ebp */
  esp = ebp;
/* 81d5e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d5e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81d640(void) {
  LOAD_REGS();
L_81d640: /* 81d640: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d643: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81d644: mov ebx, ecx */
  ebx = ecx;
/* 81d646: mov eax, dword ptr [ebx + 0x280] */
  eax = R32((uint32_t)(ebx + 0x280u));
/* 81d64c: add eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81d64f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 81d657: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 81d65f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 81d667: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81d669: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 81d66c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81d66d: xor esi, esi */
  esi = 0;
/* 81d66f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81d671: jle 0x81d739 */
  if ((zf || sf != of)) goto L_81d739;
L_81d677: /* 81d677: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81d678: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81d679: xor edi, edi */
  edi = 0;
/* 81d67b: jmp 0x81d680 */
  goto L_81d680;
L_81d680: /* 81d680: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81d682: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 81d685: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81d687: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 81d68f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 81d697: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 81d69f: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* 81d6a5: xor edx, edx */
  edx = 0;
/* 81d6a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81d6a9: jle 0x81d6df */
  if ((zf || sf != of)) goto L_81d6df;
L_81d6ab: /* 81d6ab: lea ecx, [eax + 0x38] */
  ecx = (uint32_t)(eax + 0x38u);
/* 81d6ae: mov edi, edi */
  edi = edi;
L_81d6b0: /* 81d6b0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 81d6b4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 81d6b5: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 81d6b8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81d6bb: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 81d6bf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 81d6c3: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 81d6c6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 81d6ca: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 81d6ce: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 81d6d1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 81d6d5: mov ebp, dword ptr [eax + 0x100] */
  ebp = R32((uint32_t)(eax + 0x100u));
/* 81d6db: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81d6dd: jl 0x81d6b0 */
  if ((sf != of)) goto L_81d6b0;
L_81d6df: /* 81d6df: fild dword ptr [eax + 0x100] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x100u)); FPUSH(v); }
/* 81d6e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81d6e6: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 81d6ea: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 81d6ee: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81d6f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d6f2: call dword ptr [0xcfaafc] */
  esp -= 4; W32(esp, 0x81d6f8u); SPILL(); f_4e1136(); if (g_unwind) return; /* Core!??_0FVector@@QAE?AV0@M@Z */ RELOAD();
/* 81d6f8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 81d6fc: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 81d700: mov eax, dword ptr [ebx + 0x280] */
  eax = R32((uint32_t)(ebx + 0x280u));
/* 81d706: add eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81d709: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81d70a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 81d70e: add edi, 0x148 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 81d714: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 81d718: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 81d71c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 81d720: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 81d724: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 81d728: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 81d72c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81d72e: cmp esi, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81d731: jl 0x81d680 */
  if ((sf != of)) goto L_81d680;
L_81d737: /* 81d737: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d738: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_81d739: /* 81d739: mov edx, dword ptr [ebx + 0x280] */
  edx = R32((uint32_t)(ebx + 0x280u));
/* 81d73f: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 81d742: fild dword ptr [eax + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 81d745: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81d746: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 81d74a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81d74d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81d74e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 81d752: call dword ptr [0xcfaafc] */
  esp -= 4; W32(esp, 0x81d758u); SPILL(); f_4e1136(); if (g_unwind) return; /* Core!??_0FVector@@QAE?AV0@M@Z */ RELOAD();
/* 81d758: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 81d75c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 81d760: mov edx, eax */
  edx = eax;
/* 81d762: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 81d764: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 81d768: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81d76b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 81d76f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d770: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 81d773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d774: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81d777: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81d67d(void) {
  LOAD_REGS();
L_81d67d: /* 81d67d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_81d680: /* 81d680: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81d682: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 81d685: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81d687: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 81d68f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 81d697: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 81d69f: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* 81d6a5: xor edx, edx */
  edx = 0;
/* 81d6a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81d6a9: jle 0x81d6df */
  if ((zf || sf != of)) goto L_81d6df;
L_81d6ab: /* 81d6ab: lea ecx, [eax + 0x38] */
  ecx = (uint32_t)(eax + 0x38u);
/* 81d6ae: mov edi, edi */
  edi = edi;
L_81d6b0: /* 81d6b0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 81d6b4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 81d6b5: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 81d6b8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81d6bb: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 81d6bf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 81d6c3: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 81d6c6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 81d6ca: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 81d6ce: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 81d6d1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 81d6d5: mov ebp, dword ptr [eax + 0x100] */
  ebp = R32((uint32_t)(eax + 0x100u));
/* 81d6db: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81d6dd: jl 0x81d6b0 */
  if ((sf != of)) goto L_81d6b0;
L_81d6df: /* 81d6df: fild dword ptr [eax + 0x100] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x100u)); FPUSH(v); }
/* 81d6e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81d6e6: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 81d6ea: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 81d6ee: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81d6f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d6f2: call dword ptr [0xcfaafc] */
  esp -= 4; W32(esp, 0x81d6f8u); SPILL(); f_4e1136(); if (g_unwind) return; /* Core!??_0FVector@@QAE?AV0@M@Z */ RELOAD();
/* 81d6f8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 81d6fc: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 81d700: mov eax, dword ptr [ebx + 0x280] */
  eax = R32((uint32_t)(ebx + 0x280u));
/* 81d706: add eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81d709: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81d70a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 81d70e: add edi, 0x148 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 81d714: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 81d718: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 81d71c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 81d720: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 81d724: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 81d728: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 81d72c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81d72e: cmp esi, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81d731: jl 0x81d680 */
  if ((sf != of)) goto L_81d680;
L_81d737: /* 81d737: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d738: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d739: mov edx, dword ptr [ebx + 0x280] */
  edx = R32((uint32_t)(ebx + 0x280u));
/* 81d73f: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 81d742: fild dword ptr [eax + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 81d745: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81d746: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 81d74a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81d74d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81d74e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 81d752: call dword ptr [0xcfaafc] */
  esp -= 4; W32(esp, 0x81d758u); SPILL(); f_4e1136(); if (g_unwind) return; /* Core!??_0FVector@@QAE?AV0@M@Z */ RELOAD();
/* 81d758: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 81d75c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 81d760: mov edx, eax */
  edx = eax;
/* 81d762: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 81d764: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 81d768: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81d76b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 81d76f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d770: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 81d773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d774: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81d777: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81d7d0(void) {
  LOAD_REGS();
L_81d7d0: /* 81d7d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81d7d1: mov ebp, esp */
  ebp = esp;
/* 81d7d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81d7d5: push 0x9d2e50 */
  { uint32_t v = 0x9d2e50u; esp -= 4; W32(esp, v); }
/* 81d7da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81d7e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d7e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81d7e8: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d7eb: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 81d7ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81d7ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81d7f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81d7f1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 81d7f4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81d7f7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d7fa: mov esi, ecx */
  esi = ecx;
/* 81d7fc: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 81d7ff: mov eax, esp */
  eax = esp;
/* 81d801: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 81d803: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 81d806: xor ebx, ebx */
  ebx = 0;
/* 81d808: mov ecx, esi */
  ecx = esi;
/* 81d80a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 81d80d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 81d810: call 0x6c81ed */
  esp -= 4; W32(esp, 0x81d815u); SPILL(); f_6c81ed(); if (g_unwind) return; RELOAD();
/* 81d815: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81d817: je 0x81d891 */
  if (zf) goto L_81d891;
L_81d819: /* 81d819: fld dword ptr [esi + 0x460] */
  { double v = F32((uint32_t)(esi + 0x460u)); FPUSH(v); }
/* 81d81f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 81d822: fmul dword ptr [0xa0d224] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d224u)));
/* 81d828: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d82b: fld dword ptr [esi + 0x45c] */
  { double v = F32((uint32_t)(esi + 0x45cu)); FPUSH(v); }
/* 81d831: mov eax, esp */
  eax = esp;
/* 81d833: fmul dword ptr [0xa0d224] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d224u)));
/* 81d839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81d83a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81d83d: fld dword ptr [esi + 0x458] */
  { double v = F32((uint32_t)(esi + 0x458u)); FPUSH(v); }
/* 81d843: fmul dword ptr [0xa0d224] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d224u)));
/* 81d849: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 81d84c: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 81d84f: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 81d852: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81d855: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81d858: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 81d85b: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 81d85e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 81d861: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81d863: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 81d866: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 81d869: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 81d86c: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 81d86f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 81d872: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81d875: mov ecx, esi */
  ecx = esi;
/* 81d877: call 0x6c812a */
  esp -= 4; W32(esp, 0x81d87cu); SPILL(); f_6c812a(); if (g_unwind) return; RELOAD();
/* 81d87c: mov eax, edi */
  eax = edi;
/* 81d87e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d881: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d888: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d889: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d88a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d88b: mov esp, ebp */
  esp = ebp;
/* 81d88d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d88e: ret 0x10 */
  esp += 20; SPILL(); return;
L_81d891: /* 81d891: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81d893: mov ecx, esi */
  ecx = esi;
/* 81d895: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 81d898: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 81d89b: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 81d8a2: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 81d8a9: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 81d8b0: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 81d8b7: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 81d8be: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 81d8c5: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 81d8c8: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 81d8cf: mov dword ptr [ebp - 0x3c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc4u), 0xffffffffu);
/* 81d8d6: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 81d8d9: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x81d8dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81d8df: fld dword ptr [esi + 0x460] */
  { double v = F32((uint32_t)(esi + 0x460u)); FPUSH(v); }
/* 81d8e5: fmul dword ptr [0xa149c8] */
  ST0 = ST0 * (F32((uint32_t)(0xa149c8u)));
/* 81d8eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81d8ec: fld dword ptr [esi + 0x45c] */
  { double v = F32((uint32_t)(esi + 0x45cu)); FPUSH(v); }
/* 81d8f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81d8f3: fmul dword ptr [0xa149c8] */
  ST0 = ST0 * (F32((uint32_t)(0xa149c8u)));
/* 81d8f9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d8fc: mov ecx, esp */
  ecx = esp;
/* 81d8fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81d900: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81d903: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 81d90a: fld dword ptr [esi + 0x458] */
  { double v = F32((uint32_t)(esi + 0x458u)); FPUSH(v); }
/* 81d910: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81d913: fmul dword ptr [0xa149c8] */
  ST0 = ST0 * (F32((uint32_t)(0xa149c8u)));
/* 81d919: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 81d91b: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 81d922: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81d925: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 81d928: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 81d92b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d92e: fsubr dword ptr [ebp + 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0x14u))) - ST0;
/* 81d931: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 81d938: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81d93b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 81d93e: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81d941: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 81d944: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81d947: mov ecx, esp */
  ecx = esp;
/* 81d949: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 81d94c: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 81d94e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 81d951: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 81d954: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 81d957: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 81d95a: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 81d95d: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 81d960: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 81d963: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81d966: mov ecx, esp */
  ecx = esp;
/* 81d968: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81d96b: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 81d96d: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 81d970: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 81d973: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 81d976: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 81d979: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81d97a: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 81d97d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81d97e: mov ecx, eax */
  ecx = eax;
/* 81d980: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x81d983u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81d983: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81d986: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 81d989: mov edx, eax */
  edx = eax;
/* 81d98b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 81d98d: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 81d990: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81d993: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 81d996: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81d997: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 81d99a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81d99d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81d99e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81d9a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81d9a6: mov esp, ebp */
  esp = ebp;
/* 81d9a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81d9a9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_81d9ac(void) {
  LOAD_REGS();
L_81d9ac: /* 81d9ac: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81d9af: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81d9b4: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 81d9b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81d9b8: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 81d9bb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81d9c0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81d9c0(); return;
}

void f_81d9c0(void) {
  LOAD_REGS();
L_81d9c0: /* 81d9c0: push 0xa14990 */
  { uint32_t v = 0xa14990u; esp -= 4; W32(esp, v); }
/* 81d9c5: push 0xae2fd8 */
  { uint32_t v = 0xae2fd8u; esp -= 4; W32(esp, v); }
/* 81d9ca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81d9d0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81d9d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81d9d3: xor ebx, ebx */
  ebx = 0;
/* 81d9d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81d9d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81d9d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81d9dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81d9dc: guest_badaddr(0x81d9dc); return;
}

void f_81da70(void) {
  LOAD_REGS();
L_81da70: /* 81da70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81da71: mov ebp, esp */
  ebp = esp;
/* 81da73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81da75: push 0x9d2e60 */
  { uint32_t v = 0x9d2e60u; esp -= 4; W32(esp, v); }
/* 81da7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81da80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81da81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81da88: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81da8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81da8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81da8d: mov esi, ecx */
  esi = ecx;
/* 81da8f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 81da92: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 81da98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81da99: fcomp dword ptr [0xa14a00] */
  fpu_com(ST0, F32((uint32_t)(0xa14a00u)));
  FPOP();
/* 81da9f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81daa2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81daa9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81daab: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81daae: jp 0x81dac2 */
  if (pf) goto L_81dac2;
L_81dab0: /* 81dab0: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 81dab3: fadd dword ptr [0xa14a00] */
  ST0 = ST0 + (F32((uint32_t)(0xa14a00u)));
/* 81dab9: fsub dword ptr [ecx + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x2d8u)));
/* 81dabf: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
L_81dac2: /* 81dac2: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x81dac8u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 81dac8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81daca: push 0xae32b8 */
  { uint32_t v = 0xae32b8u; esp -= 4; W32(esp, v); }
/* 81dacf: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81dad1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81dad2: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x81dad8u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 81dad8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81dadb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dadd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dadf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dae1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81dae3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dae5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dae7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81daeb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 81daee: mov edi, eax */
  edi = eax;
/* 81daf0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x81daf6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 81daf6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81daf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81dafb: mov ecx, esp */
  ecx = esp;
/* 81dafd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81daff: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81db02: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81db05: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81db08: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 81db0b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81db0e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 81db11: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81db14: mov ecx, esp */
  ecx = esp;
/* 81db16: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81db18: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 81db1b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81db1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81db1f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81db22: mov ecx, esp */
  ecx = esp;
/* 81db24: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 81db27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81db29: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81db2fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81db2f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 81db31: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81db33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81db34: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x81db3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81db3a: mov esi, eax */
  esi = eax;
/* 81db3c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81db3e: jne 0x81db6c */
  if (!zf) goto L_81db6c;
L_81db40: /* 81db40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 81db46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81db48: push 0xae32cc */
  { uint32_t v = 0xae32ccu; esp -= 4; W32(esp, v); }
/* 81db4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81db4e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x81db54u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 81db54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81db57: xor eax, eax */
  eax = 0;
/* 81db59: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81db5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81db63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81db64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81db65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81db66: mov esp, ebp */
  esp = ebp;
/* 81db68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81db69: ret 0xc */
  esp += 16; SPILL(); return;
L_81db6c: /* 81db6c: mov ecx, esi */
  ecx = esi;
/* 81db6e: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x81db74u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 81db74: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 81db7a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81db7d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 81db81: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 81db87: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 81db8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81db8b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 81db90: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81db92: push 0xae32f4 */
  { uint32_t v = 0xae32f4u; esp -= 4; W32(esp, v); }
/* 81db97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81db98: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x81db9eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 81db9e: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 81dba4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81dba7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81dbaa: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 81dbaf: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 81dbb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81dbb6: mov eax, esi */
  eax = esi;
/* 81dbb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81dbb9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81dbc0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81dbc1: mov esp, ebp */
  esp = ebp;
/* 81dbc3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81dbc4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_81dbc7(void) {
  LOAD_REGS();
L_81dbc7: /* 81dbc7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81dbca: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81dbcf: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 81dbd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81dbd3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 81dbd6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81dbdbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81dbdb(); return;
}

void f_81dbdb(void) {
  LOAD_REGS();
L_81dbdb: /* 81dbdb: push 0xa149cc */
  { uint32_t v = 0xa149ccu; esp -= 4; W32(esp, v); }
/* 81dbe0: push 0xae332c */
  { uint32_t v = 0xae332cu; esp -= 4; W32(esp, v); }
/* 81dbe5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81dbebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81dbeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81dbee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dbf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dbf2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81dbf7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81dbf7: guest_badaddr(0x81dbf7); return;
}

void f_81dc70(void) {
  LOAD_REGS();
L_81dc70: /* 81dc70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81dc71: mov ebp, esp */
  ebp = esp;
/* 81dc73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81dc75: push 0x9d2e70 */
  { uint32_t v = 0x9d2e70u; esp -= 4; W32(esp, v); }
/* 81dc7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81dc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81dc81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81dc88: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81dc8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81dc8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81dc90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81dc91: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 81dc94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81dc97: xor ebx, ebx */
  ebx = 0;
/* 81dc99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81dc9a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81dc9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81dc9c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81dc9f: mov edx, esp */
  edx = esp;
/* 81dca1: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 81dca3: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 81dca6: mov esi, ecx */
  esi = ecx;
/* 81dca8: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 81dcae: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81dcb0: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 81dcb3: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 81dcb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81dcb7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 81dcba: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 81dcbd: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x81dcc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81dcc3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81dcc5: je 0x81df5c */
  if (zf) goto L_81df5c;
L_81dccb: /* 81dccb: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 81dcce: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 81dcd1: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 81dcd4: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 81dcd7: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 81dcda: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 81dcdd: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 81dce0: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 81dce3: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 81dcea: mov dword ptr [ebp - 0x38], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xffffffffu);
/* 81dcf1: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 81dcf4: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 81dcf7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 81dcfa: mov dword ptr [ebp - 0x14], 0xc2c80000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0xc2c80000u);
/* 81dd01: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 81dd04: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 81dd07: jmp 0x81dd10 */
  goto L_81dd10;
L_81dd09: /* 81dd09: xor ebx, ebx */
  ebx = 0;
/* 81dd0b: jmp 0x81dd10 */
  goto L_81dd10;
L_81dd10: /* 81dd10: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81dd13: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 81dd19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81dd1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81dd1e: jp 0x81df71 */
  if (pf) goto L_81df71;
L_81dd24: /* 81dd24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81dd25: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 81dd2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81dd2c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 81dd2e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81dd30: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81dd32: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 81dd35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81dd36: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81dd39: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 81dd3f: mov ecx, esp */
  ecx = esp;
/* 81dd41: mov edx, edi */
  edx = edi;
/* 81dd43: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 81dd45: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 81dd47: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 81dd4a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81dd4d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 81dd50: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81dd53: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81dd56: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81dd59: mov ecx, esp */
  ecx = esp;
/* 81dd5b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81dd5d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81dd60: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81dd63: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81dd66: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81dd69: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 81dd6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81dd70: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x81dd76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81dd76: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81dd79: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 81dd7f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81dd81: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81dd84: jp 0x81df30 */
  if (pf) goto L_81df30;
L_81dd8a: /* 81dd8a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81dd8d: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 81dd93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81dd95: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81dd98: jp 0x81df30 */
  if (pf) goto L_81df30;
L_81dd9e: /* 81dd9e: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81dda1: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 81dda4: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 81dda7: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 81ddaa: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81ddad: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 81ddb0: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 81ddb3: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 81ddb6: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 81ddb9: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 81ddbc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81ddbe: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81ddc1: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 81ddc4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81ddc6: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81ddc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81ddcb: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81ddce: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81ddd0: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 81ddd3: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 81ddd6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81ddd8: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 81ddde: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81dde1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81dde3: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 81dde5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81dde7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81ddea: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 81dded: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81ddf0: fsub dword ptr [ebp - 0x98] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff68u)));
/* 81ddf6: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 81ddf9: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81ddff: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 81de02: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 81de05: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81de07: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 81de0a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 81de0d: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 81de10: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 81de13: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 81de16: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 81de19: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 81de1c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 81de1f: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 81de22: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81de25: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 81de28: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81de2b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81de2d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81de2f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 81de32: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 81de35: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81de37: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81de3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81de3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81de41: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81de44: jne 0x81df30 */
  if (!zf) goto L_81df30;
L_81de4a: /* 81de4a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 81de50: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81de52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81de54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81de56: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81de58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81de5a: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 81de5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81de5e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81de61: mov eax, esp */
  eax = esp;
/* 81de63: mov ecx, edi */
  ecx = edi;
/* 81de65: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 81de67: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 81de69: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 81de6c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81de6f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 81de72: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81de75: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81de78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81de7b: mov eax, esp */
  eax = esp;
/* 81de7d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81de7f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81de82: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 81de85: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81de88: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81de8b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 81de91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81de92: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x81de98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81de98: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81de9b: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 81dea1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81dea3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81dea6: jp 0x81df30 */
  if (pf) goto L_81df30;
L_81deac: /* 81deac: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81deaf: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 81deb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81deb7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81deba: jp 0x81df30 */
  if (pf) goto L_81df30;
L_81debc: /* 81debc: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 81dec2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81dec3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 81dec6: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x81deccu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 81decc: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 81decf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81ded0: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 81ded3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ded4: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 81ded7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81ded8: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 81dedb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81dedc: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 81dee2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81dee3: mov ecx, esi */
  ecx = esi;
/* 81dee5: call 0x6c6163 */
  esp -= 4; W32(esp, 0x81deeau); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 81deea: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 81deec: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 81def2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81def4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81def6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81def8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81defa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81defc: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 81deff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81df00: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81df03: mov eax, esp */
  eax = esp;
/* 81df05: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 81df07: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 81df0a: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 81df0d: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 81df10: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 81df13: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81df16: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81df19: mov eax, esp */
  eax = esp;
/* 81df1b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 81df1d: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81df20: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 81df23: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81df26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81df27: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 81df2a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x81df30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81df30: /* 81df30: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 81df33: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81df34: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81df37: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 81df3a: jl 0x81dd09 */
  if ((sf != of)) goto L_81dd09;
L_81df40: /* 81df40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 81df46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81df48: push 0xae3364 */
  { uint32_t v = 0xae3364u; esp -= 4; W32(esp, v); }
/* 81df4d: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 81df52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81df53: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x81df59u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 81df59: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_81df5c: /* 81df5c: xor eax, eax */
  eax = 0;
/* 81df5e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81df61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81df68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81df69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81df6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81df6b: mov esp, ebp */
  esp = ebp;
/* 81df6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81df6e: ret 0xc */
  esp += 16; SPILL(); return;
L_81df71: /* 81df71: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81df74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81df75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81df76: mov eax, 1 */
  eax = 0x1u;
/* 81df7b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81df82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81df83: mov esp, ebp */
  esp = ebp;
/* 81df85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81df86: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_81dd0d(void) {
  LOAD_REGS();
  goto L_81dd0d;
L_81dd09: /* 81dd09: xor ebx, ebx */
  ebx = 0;
/* 81dd0b: jmp 0x81dd10 */
  goto L_81dd10;
L_81dd0d: /* 81dd0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_81dd10: /* 81dd10: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81dd13: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 81dd19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81dd1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81dd1e: jp 0x81df71 */
  if (pf) goto L_81df71;
L_81dd24: /* 81dd24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81dd25: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 81dd2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81dd2c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 81dd2e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81dd30: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81dd32: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 81dd35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81dd36: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81dd39: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 81dd3f: mov ecx, esp */
  ecx = esp;
/* 81dd41: mov edx, edi */
  edx = edi;
/* 81dd43: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 81dd45: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 81dd47: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 81dd4a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81dd4d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 81dd50: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81dd53: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81dd56: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81dd59: mov ecx, esp */
  ecx = esp;
/* 81dd5b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81dd5d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81dd60: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81dd63: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81dd66: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81dd69: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 81dd6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81dd70: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x81dd76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81dd76: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81dd79: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 81dd7f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81dd81: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81dd84: jp 0x81df30 */
  if (pf) goto L_81df30;
L_81dd8a: /* 81dd8a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81dd8d: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 81dd93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81dd95: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81dd98: jp 0x81df30 */
  if (pf) goto L_81df30;
L_81dd9e: /* 81dd9e: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81dda1: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 81dda4: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 81dda7: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 81ddaa: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81ddad: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 81ddb0: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 81ddb3: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 81ddb6: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 81ddb9: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 81ddbc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81ddbe: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81ddc1: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 81ddc4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81ddc6: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81ddc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81ddcb: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81ddce: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81ddd0: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 81ddd3: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 81ddd6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81ddd8: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 81ddde: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81dde1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81dde3: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 81dde5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81dde7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81ddea: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 81dded: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81ddf0: fsub dword ptr [ebp - 0x98] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff68u)));
/* 81ddf6: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 81ddf9: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81ddff: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 81de02: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 81de05: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81de07: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 81de0a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 81de0d: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 81de10: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 81de13: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 81de16: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 81de19: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 81de1c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 81de1f: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 81de22: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81de25: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 81de28: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81de2b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81de2d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81de2f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 81de32: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 81de35: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81de37: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81de3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81de3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81de41: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81de44: jne 0x81df30 */
  if (!zf) goto L_81df30;
L_81de4a: /* 81de4a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 81de50: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81de52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81de54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81de56: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81de58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81de5a: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 81de5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81de5e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81de61: mov eax, esp */
  eax = esp;
/* 81de63: mov ecx, edi */
  ecx = edi;
/* 81de65: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 81de67: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 81de69: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 81de6c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81de6f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 81de72: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81de75: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81de78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81de7b: mov eax, esp */
  eax = esp;
/* 81de7d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81de7f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81de82: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 81de85: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81de88: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81de8b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 81de91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81de92: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x81de98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81de98: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81de9b: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 81dea1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81dea3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81dea6: jp 0x81df30 */
  if (pf) goto L_81df30;
L_81deac: /* 81deac: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81deaf: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 81deb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81deb7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81deba: jp 0x81df30 */
  if (pf) goto L_81df30;
L_81debc: /* 81debc: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 81dec2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81dec3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 81dec6: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x81deccu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 81decc: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 81decf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81ded0: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 81ded3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ded4: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 81ded7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81ded8: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 81dedb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81dedc: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 81dee2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81dee3: mov ecx, esi */
  ecx = esi;
/* 81dee5: call 0x6c6163 */
  esp -= 4; W32(esp, 0x81deeau); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 81deea: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 81deec: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 81def2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81def4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81def6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81def8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81defa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81defc: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 81deff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81df00: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81df03: mov eax, esp */
  eax = esp;
/* 81df05: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 81df07: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 81df0a: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 81df0d: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 81df10: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 81df13: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81df16: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81df19: mov eax, esp */
  eax = esp;
/* 81df1b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 81df1d: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81df20: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 81df23: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81df26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81df27: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 81df2a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x81df30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81df30: /* 81df30: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 81df33: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81df34: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81df37: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 81df3a: jl 0x81dd09 */
  if ((sf != of)) goto L_81dd09;
L_81df40: /* 81df40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 81df46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81df48: push 0xae3364 */
  { uint32_t v = 0xae3364u; esp -= 4; W32(esp, v); }
/* 81df4d: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 81df52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81df53: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x81df59u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 81df59: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81df5c: xor eax, eax */
  eax = 0;
/* 81df5e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81df61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81df68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81df69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81df6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81df6b: mov esp, ebp */
  esp = ebp;
/* 81df6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81df6e: ret 0xc */
  esp += 16; SPILL(); return;
L_81df71: /* 81df71: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81df74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81df75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81df76: mov eax, 1 */
  eax = 0x1u;
/* 81df7b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81df82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81df83: mov esp, ebp */
  esp = ebp;
/* 81df85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81df86: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_81df89(void) {
  LOAD_REGS();
L_81df89: /* 81df89: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 81df8c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81df91: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 81df94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81df95: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 81df98: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81df9du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81df9d(); return;
}

void f_81df9d(void) {
  LOAD_REGS();
L_81df9d: /* 81df9d: push 0xa14a04 */
  { uint32_t v = 0xa14a04u; esp -= 4; W32(esp, v); }
/* 81dfa2: push 0xae3390 */
  { uint32_t v = 0xae3390u; esp -= 4; W32(esp, v); }
/* 81dfa7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81dfadu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81dfad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81dfb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dfb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81dfb4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81dfb9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81dfb9: guest_badaddr(0x81dfb9); return;
}

void f_81e0a0(void) {
  LOAD_REGS();
L_81e0a0: /* 81e0a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81e0a1: mov ebp, esp */
  ebp = esp;
/* 81e0a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81e0a5: push 0x9d2e80 */
  { uint32_t v = 0x9d2e80u; esp -= 4; W32(esp, v); }
/* 81e0aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81e0b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e0b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81e0b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81e0bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81e0bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e0bd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 81e0c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e0c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81e0c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81e0c6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81e0cd: je 0x81e149 */
  if (zf) goto L_81e149;
L_81e0cf: /* 81e0cf: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81e0d2: je 0x81e149 */
  if (zf) goto L_81e149;
L_81e0d4: /* 81e0d4: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 81e0da: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81e0dd: jne 0x81e149 */
  if (!zf) goto L_81e149;
L_81e0df: /* 81e0df: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 81e0e4: mov ecx, esi */
  ecx = esi;
/* 81e0e6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e0ecu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e0ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e0ee: je 0x81e149 */
  if (zf) goto L_81e149;
L_81e0f0: /* 81e0f0: push 0xb66038 */
  { uint32_t v = 0xb66038u; esp -= 4; W32(esp, v); }
/* 81e0f5: mov ecx, esi */
  ecx = esi;
/* 81e0f7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e0fdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e0fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e0ff: jne 0x81e149 */
  if (!zf) goto L_81e149;
L_81e101: /* 81e101: mov eax, 1 */
  eax = 0x1u;
/* 81e106: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81e109: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81e110: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81e111: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e112: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81e113: mov esp, ebp */
  esp = ebp;
/* 81e115: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81e116: ret 8 */
  esp += 12; SPILL(); return;
L_81e149: /* 81e149: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81e14c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81e14d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e14e: xor eax, eax */
  eax = 0;
/* 81e150: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81e157: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81e158: mov esp, ebp */
  esp = ebp;
/* 81e15a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81e15b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_81e119(void) {
  LOAD_REGS();
L_81e119: /* 81e119: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81e11c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81e121: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81e124: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e125: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81e128: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81e12du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81e12d(); return;
}

void f_81e12d(void) {
  LOAD_REGS();
L_81e12d: /* 81e12d: push 0xa14a30 */
  { uint32_t v = 0xa14a30u; esp -= 4; W32(esp, v); }
/* 81e132: push 0xae3588 */
  { uint32_t v = 0xae3588u; esp -= 4; W32(esp, v); }
/* 81e137: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81e13du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81e13d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81e140: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81e142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81e144: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81e149u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 81e149: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81e14c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81e14d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e14e: xor eax, eax */
  eax = 0;
/* 81e150: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81e157: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81e158: mov esp, ebp */
  esp = ebp;
/* 81e15a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81e15b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_81e190(void) {
  LOAD_REGS();
L_81e190: /* 81e190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81e191: mov ebp, esp */
  ebp = esp;
/* 81e193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81e195: push 0x9d2e90 */
  { uint32_t v = 0x9d2e90u; esp -= 4; W32(esp, v); }
/* 81e19a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81e1a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e1a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81e1a8: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81e1ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81e1ac: xor eax, eax */
  eax = 0;
/* 81e1ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e1af: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 81e1b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81e1b3: mov edi, ecx */
  edi = ecx;
/* 81e1b5: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 81e1b8: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 81e1bb: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 81e1be: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 81e1c1: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 81e1c4: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 81e1c7: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 81e1ca: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 81e1cd: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 81e1d0: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 81e1d3: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 81e1da: mov dword ptr [ebp - 0x54], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffacu), 0xffffffffu);
/* 81e1e1: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 81e1e4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 81e1e7: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 81e1ed: mov ecx, dword ptr [eax + 0x2d4] */
  ecx = R32((uint32_t)(eax + 0x2d4u));
/* 81e1f3: fld dword ptr [eax + 0x2d4] */
  { double v = F32((uint32_t)(eax + 0x2d4u)); FPUSH(v); }
/* 81e1f9: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 81e1fc: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81e1ff: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81e201: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81e204: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81e207: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81e20a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 81e20d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81e210: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 81e216: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81e219: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 81e21f: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 81e222: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 81e224: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 81e22a: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 81e22d: fsubr dword ptr [eax + 0x178] */
  ST0 = (F32((uint32_t)(eax + 0x178u))) - ST0;
/* 81e233: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 81e239: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 81e23c: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 81e242: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 81e245: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 81e248: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 81e24b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81e24e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81e250: mov ecx, esp */
  ecx = esp;
/* 81e252: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 81e254: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81e257: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 81e25a: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81e25d: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 81e260: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 81e265: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 81e26b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e26c: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 81e26f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e270: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81e272: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e273: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 81e276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e277: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x81e27du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81e27d: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81e280: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 81e286: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81e288: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81e28b: jnp 0x81e3f4 */
  if (!pf) goto L_81e3f4;
L_81e291: /* 81e291: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 81e294: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 81e297: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 81e29d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81e2a0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81e2a3: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 81e2a9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81e2ac: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 81e2ae: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 81e2b4: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 81e2b7: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 81e2bd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81e2bf: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 81e2c2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81e2c5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81e2c7: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 81e2cd: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81e2d0: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 81e2d6: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 81e2d9: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 81e2dc: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 81e2df: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81e2e2: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 81e2e5: mov edx, dword ptr [eax + 0x2d4] */
  edx = R32((uint32_t)(eax + 0x2d4u));
/* 81e2eb: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 81e2f1: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 81e2f4: fld dword ptr [eax + 0x2d4] */
  { double v = F32((uint32_t)(eax + 0x2d4u)); FPUSH(v); }
/* 81e2fa: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 81e2fd: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 81e300: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 81e303: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81e305: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81e308: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81e30b: fsub dword ptr [0xa14ac0] */
  ST0 = ST0 - (F32((uint32_t)(0xa14ac0u)));
/* 81e311: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81e313: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 81e316: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 81e319: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81e31b: mov ecx, esp */
  ecx = esp;
/* 81e31d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 81e31f: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 81e322: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 81e325: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 81e328: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 81e32b: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 81e330: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 81e333: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e334: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 81e337: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e338: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81e33a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e33b: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 81e33e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e33f: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x81e345u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81e345: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81e348: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 81e34e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81e350: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81e353: jnp 0x81e405 */
  if (!pf) goto L_81e405;
L_81e359: /* 81e359: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 81e35c: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 81e362: mov ecx, dword ptr [eax + 0x2d4] */
  ecx = R32((uint32_t)(eax + 0x2d4u));
/* 81e368: fld dword ptr [eax + 0x2d4] */
  { double v = F32((uint32_t)(eax + 0x2d4u)); FPUSH(v); }
/* 81e36e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81e371: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 81e374: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 81e376: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 81e379: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 81e37c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81e37f: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 81e382: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 81e385: fsub dword ptr [0xa14ac0] */
  ST0 = ST0 - (F32((uint32_t)(0xa14ac0u)));
/* 81e38b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81e38e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81e391: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 81e394: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 81e397: mov ecx, dword ptr [eax + 0x170] */
  ecx = R32((uint32_t)(eax + 0x170u));
/* 81e39d: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 81e3a3: fsub dword ptr [0xa14ac0] */
  ST0 = ST0 - (F32((uint32_t)(0xa14ac0u)));
/* 81e3a9: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 81e3af: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 81e3b2: mov ecx, esp */
  ecx = esp;
/* 81e3b4: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 81e3b7: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 81e3b9: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 81e3bc: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 81e3bf: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 81e3c1: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 81e3c4: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 81e3c7: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 81e3ca: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 81e3cf: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 81e3d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e3d3: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 81e3d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e3d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e3d8: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 81e3db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e3dc: mov ecx, edi */
  ecx = edi;
/* 81e3de: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x81e3e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81e3e4: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81e3e7: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 81e3ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81e3ef: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81e3f2: jp 0x81e405 */
  if (pf) goto L_81e405;
L_81e3f4: /* 81e3f4: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 81e3f7: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 81e3fa: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 81e3fd: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 81e3ff: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 81e402: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_81e405: /* 81e405: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81e408: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81e409: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e40a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81e411: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81e412: mov esp, ebp */
  esp = ebp;
/* 81e414: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81e415: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81e418(void) {
  LOAD_REGS();
L_81e418: /* 81e418: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81e41b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81e420: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 81e423: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81e424: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 81e427: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81e42cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81e42c(); return;
}

void f_81e42c(void) {
  LOAD_REGS();
L_81e42c: /* 81e42c: push 0xa14a70 */
  { uint32_t v = 0xa14a70u; esp -= 4; W32(esp, v); }
/* 81e431: push 0xae35a0 */
  { uint32_t v = 0xae35a0u; esp -= 4; W32(esp, v); }
/* 81e436: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81e43cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81e43c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81e43f: xor eax, eax */
  eax = 0;
/* 81e441: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e442: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e443: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81e448u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81e448: guest_badaddr(0x81e448); return;
}

void f_81e500(void) {
  LOAD_REGS();
L_81e500: /* 81e500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e501: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 81e505: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e507: je 0x81e51e */
  if (zf) goto L_81e51e;
L_81e509: /* 81e509: push 0xb62c58 */
  { uint32_t v = 0xb62c58u; esp -= 4; W32(esp, v); }
/* 81e50e: mov ecx, esi */
  ecx = esi;
/* 81e510: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e516u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e516: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e518: je 0x81e51e */
  if (zf) goto L_81e51e;
L_81e51a: /* 81e51a: mov eax, esi */
  eax = esi;
/* 81e51c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e51d: ret  */
  esp += 4; SPILL(); return;
L_81e51e: /* 81e51e: xor eax, eax */
  eax = 0;
/* 81e520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e521: ret  */
  esp += 4; SPILL(); return;
}

void f_81e540(void) {
  LOAD_REGS();
L_81e540: /* 81e540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e541: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 81e545: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e547: je 0x81e55e */
  if (zf) goto L_81e55e;
L_81e549: /* 81e549: push 0xb66038 */
  { uint32_t v = 0xb66038u; esp -= 4; W32(esp, v); }
/* 81e54e: mov ecx, esi */
  ecx = esi;
/* 81e550: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e556u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e558: je 0x81e55e */
  if (zf) goto L_81e55e;
L_81e55a: /* 81e55a: mov eax, esi */
  eax = esi;
/* 81e55c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e55d: ret  */
  esp += 4; SPILL(); return;
L_81e55e: /* 81e55e: xor eax, eax */
  eax = 0;
/* 81e560: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e561: ret  */
  esp += 4; SPILL(); return;
}

void f_81e580(void) {
  LOAD_REGS();
L_81e580: /* 81e580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e581: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 81e585: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e587: je 0x81e59e */
  if (zf) goto L_81e59e;
L_81e589: /* 81e589: push 0xb68ee8 */
  { uint32_t v = 0xb68ee8u; esp -= 4; W32(esp, v); }
/* 81e58e: mov ecx, esi */
  ecx = esi;
/* 81e590: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e596u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e596: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e598: je 0x81e59e */
  if (zf) goto L_81e59e;
L_81e59a: /* 81e59a: mov eax, esi */
  eax = esi;
/* 81e59c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e59d: ret  */
  esp += 4; SPILL(); return;
L_81e59e: /* 81e59e: xor eax, eax */
  eax = 0;
/* 81e5a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e5a1: ret  */
  esp += 4; SPILL(); return;
}

void f_81e5c0(void) {
  LOAD_REGS();
L_81e5c0: /* 81e5c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e5c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 81e5c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e5c7: je 0x81e5de */
  if (zf) goto L_81e5de;
L_81e5c9: /* 81e5c9: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 81e5ce: mov ecx, esi */
  ecx = esi;
/* 81e5d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e5d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e5d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e5d8: je 0x81e5de */
  if (zf) goto L_81e5de;
L_81e5da: /* 81e5da: mov eax, esi */
  eax = esi;
/* 81e5dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e5dd: ret  */
  esp += 4; SPILL(); return;
L_81e5de: /* 81e5de: xor eax, eax */
  eax = 0;
/* 81e5e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e5e1: ret  */
  esp += 4; SPILL(); return;
}

void f_81e600(void) {
  LOAD_REGS();
L_81e600: /* 81e600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e601: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 81e605: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e607: je 0x81e61e */
  if (zf) goto L_81e61e;
L_81e609: /* 81e609: push 0xb63be8 */
  { uint32_t v = 0xb63be8u; esp -= 4; W32(esp, v); }
/* 81e60e: mov ecx, esi */
  ecx = esi;
/* 81e610: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e616u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e616: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e618: je 0x81e61e */
  if (zf) goto L_81e61e;
L_81e61a: /* 81e61a: mov eax, esi */
  eax = esi;
/* 81e61c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e61d: ret  */
  esp += 4; SPILL(); return;
L_81e61e: /* 81e61e: xor eax, eax */
  eax = 0;
/* 81e620: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e621: ret  */
  esp += 4; SPILL(); return;
}

void f_81e640(void) {
  LOAD_REGS();
L_81e640: /* 81e640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e641: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 81e645: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e647: je 0x81e65e */
  if (zf) goto L_81e65e;
L_81e649: /* 81e649: push 0xb6c2c8 */
  { uint32_t v = 0xb6c2c8u; esp -= 4; W32(esp, v); }
/* 81e64e: mov ecx, esi */
  ecx = esi;
/* 81e650: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e656u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e656: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e658: je 0x81e65e */
  if (zf) goto L_81e65e;
L_81e65a: /* 81e65a: mov eax, esi */
  eax = esi;
/* 81e65c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e65d: ret  */
  esp += 4; SPILL(); return;
L_81e65e: /* 81e65e: xor eax, eax */
  eax = 0;
/* 81e660: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e661: ret  */
  esp += 4; SPILL(); return;
}

void f_81e680(void) {
  LOAD_REGS();
L_81e680: /* 81e680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e681: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 81e685: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e687: je 0x81e69e */
  if (zf) goto L_81e69e;
L_81e689: /* 81e689: push 0xb64118 */
  { uint32_t v = 0xb64118u; esp -= 4; W32(esp, v); }
/* 81e68e: mov ecx, esi */
  ecx = esi;
/* 81e690: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e696u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e698: je 0x81e69e */
  if (zf) goto L_81e69e;
L_81e69a: /* 81e69a: mov eax, esi */
  eax = esi;
/* 81e69c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e69d: ret  */
  esp += 4; SPILL(); return;
L_81e69e: /* 81e69e: xor eax, eax */
  eax = 0;
/* 81e6a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e6a1: ret  */
  esp += 4; SPILL(); return;
}

void f_81e6c0(void) {
  LOAD_REGS();
L_81e6c0: /* 81e6c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81e6c1: mov ebp, esp */
  ebp = esp;
/* 81e6c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81e6c5: push 0x9d2ea0 */
  { uint32_t v = 0x9d2ea0u; esp -= 4; W32(esp, v); }
/* 81e6ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81e6d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e6d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81e6d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81e6db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81e6de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81e6df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e6e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81e6e1: xor ebx, ebx */
  ebx = 0;
/* 81e6e3: mov edi, ecx */
  edi = ecx;
/* 81e6e5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81e6e8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 81e6eb: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 81e6ed: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
L_81e6f0: /* 81e6f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 81e6f2: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81e6f5: jge 0x81e760 */
  if ((sf == of)) goto L_81e760;
L_81e6f7: /* 81e6f7: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 81e6fa: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 81e6fd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e6ff: je 0x81e72d */
  if (zf) goto L_81e72d;
L_81e701: /* 81e701: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 81e706: mov ecx, esi */
  ecx = esi;
/* 81e708: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e70eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e70e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e710: je 0x81e72d */
  if (zf) goto L_81e72d;
L_81e712: /* 81e712: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 81e718: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81e71b: je 0x81e72d */
  if (zf) goto L_81e72d;
L_81e71d: /* 81e71d: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 81e720: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81e722: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81e724: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81e726: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e727: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x81e72du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81e72d: /* 81e72d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 81e72e: jmp 0x81e6f0 */
  goto L_81e6f0;
L_81e760: /* 81e760: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 81e762: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 81e765: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 81e767: and dword ptr [eax + 0x44c], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 81e76e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81e771: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81e774: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81e775: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e776: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81e77d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81e77e: mov esp, ebp */
  esp = ebp;
/* 81e780: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81e781: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81e730(void) {
  LOAD_REGS();
L_81e730: /* 81e730: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81e733: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81e738: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81e73b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e73c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81e73f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81e744u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81e744(); return;
}

void f_81e744(void) {
  LOAD_REGS();
L_81e744: /* 81e744: push 0xa14ac8 */
  { uint32_t v = 0xa14ac8u; esp -= 4; W32(esp, v); }
/* 81e749: push 0xae288c */
  { uint32_t v = 0xae288cu; esp -= 4; W32(esp, v); }
/* 81e74e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81e754u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81e754: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81e757: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81e759: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81e75b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81e760u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 81e760: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 81e762: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 81e765: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 81e767: and dword ptr [eax + 0x44c], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 81e76e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81e771: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81e774: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81e775: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e776: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81e77d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81e77e: mov esp, ebp */
  esp = ebp;
/* 81e780: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81e781: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81e7d0(void) {
  LOAD_REGS();
L_81e7d0: /* 81e7d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81e7d1: mov ebp, esp */
  ebp = esp;
/* 81e7d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81e7d5: push 0x9d2eb0 */
  { uint32_t v = 0x9d2eb0u; esp -= 4; W32(esp, v); }
/* 81e7da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81e7e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e7e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81e7e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81e7eb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81e7ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81e7ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e7f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81e7f1: mov edi, ecx */
  edi = ecx;
/* 81e7f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81e7f6: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 81e7f8: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 81e7fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81e800: push 0xae2894 */
  { uint32_t v = 0xae2894u; esp -= 4; W32(esp, v); }
/* 81e805: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 81e80a: xor ebx, ebx */
  ebx = 0;
/* 81e80c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81e80d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 81e810: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x81e816u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 81e816: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 81e818: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 81e81b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81e81d: mov dword ptr [eax + 0x510], ebx */
  W32((uint32_t)(eax + 0x510u), ebx);
/* 81e823: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 81e829: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 81e82b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81e82d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81e830: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81e832: push 0xae28c0 */
  { uint32_t v = 0xae28c0u; esp -= 4; W32(esp, v); }
/* 81e837: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x81e83au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81e83a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_81e840: /* 81e840: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81e842: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 81e845: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81e847: jge 0x81e8c8 */
  if ((sf == of)) goto L_81e8c8;
L_81e849: /* 81e849: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 81e84f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 81e851: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81e853: push 0xae28e4 */
  { uint32_t v = 0xae28e4u; esp -= 4; W32(esp, v); }
/* 81e858: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e859: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81e85a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e85b: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x81e85eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81e85e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 81e860: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 81e863: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 81e866: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81e869: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e86b: je 0x81e8ae */
  if (zf) goto L_81e8ae;
L_81e86d: /* 81e86d: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 81e872: mov ecx, esi */
  ecx = esi;
/* 81e874: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e87au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e87a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e87c: je 0x81e8ae */
  if (zf) goto L_81e8ae;
L_81e87e: /* 81e87e: mov ecx, esi */
  ecx = esi;
/* 81e880: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x81e886u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 81e886: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 81e88c: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81e88f: jne 0x81e8a1 */
  if (!zf) goto L_81e8a1;
L_81e891: /* 81e891: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81e893: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81e895: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81e897: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e898: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x81e89eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81e89e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 81e89f: jmp 0x81e840 */
  goto L_81e840;
L_81e8a1: /* 81e8a1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81e8a3: mov ecx, esi */
  ecx = esi;
/* 81e8a5: call dword ptr [eax + 0x1a4] */
  { uint32_t t = R32((uint32_t)(eax + 0x1a4u)); esp -= 4; W32(esp, 0x81e8abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81e8ab: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 81e8ac: jmp 0x81e840 */
  goto L_81e840;
L_81e8ae: /* 81e8ae: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81e8b0: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 81e8b3: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 81e8b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e8b8: je 0x81e8c2 */
  if (zf) goto L_81e8c2;
L_81e8ba: /* 81e8ba: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81e8bc: call dword ptr [eax + 0x154] */
  { uint32_t t = R32((uint32_t)(eax + 0x154u)); esp -= 4; W32(esp, 0x81e8c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81e8c2: /* 81e8c2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 81e8c3: jmp 0x81e840 */
  goto L_81e840;
L_81e8c8: /* 81e8c8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81e8ca: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 81e8cd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 81e8cf: and dword ptr [eax + 0x44c], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 81e8d6: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 81e8db: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81e8dd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81e8df: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x81e8e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81e8e2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81e8e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81e8e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e8e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81e8ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81e8ef: mov esp, ebp */
  esp = ebp;
/* 81e8f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81e8f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81e8f5(void) {
  LOAD_REGS();
L_81e8f5: /* 81e8f5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81e8f8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81e8fd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81e900: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81e901: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81e904: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81e909u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81e909(); return;
}

void f_81e909(void) {
  LOAD_REGS();
L_81e909: /* 81e909: push 0xa14b08 */
  { uint32_t v = 0xa14b08u; esp -= 4; W32(esp, v); }
/* 81e90e: push 0xae28fc */
  { uint32_t v = 0xae28fcu; esp -= 4; W32(esp, v); }
/* 81e913: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81e919u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81e919: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81e91c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81e91e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81e920: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81e925u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81e925: guest_badaddr(0x81e925); return;
}

void f_81e990(void) {
  LOAD_REGS();
L_81e990: /* 81e990: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81e991: mov ebp, esp */
  ebp = esp;
/* 81e993: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81e995: push 0x9d2ec0 */
  { uint32_t v = 0x9d2ec0u; esp -= 4; W32(esp, v); }
/* 81e99a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81e9a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81e9a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81e9a8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81e9ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81e9ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81e9ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81e9ae: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 81e9b1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e9b3: mov ebx, ecx */
  ebx = ecx;
/* 81e9b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81e9b8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 81e9bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81e9c2: je 0x81e9d5 */
  if (zf) goto L_81e9d5;
L_81e9c4: /* 81e9c4: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 81e9c9: mov ecx, edi */
  ecx = edi;
/* 81e9cb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81e9d1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81e9d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81e9d3: jne 0x81e9ea */
  if (!zf) goto L_81e9ea;
L_81e9d5: /* 81e9d5: xor eax, eax */
  eax = 0;
/* 81e9d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81e9da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81e9e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81e9e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81e9e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81e9e4: mov esp, ebp */
  esp = ebp;
/* 81e9e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81e9e7: ret 4 */
  esp += 8; SPILL(); return;
L_81e9ea: /* 81e9ea: lea esi, [ebx + 0x170] */
  esi = (uint32_t)(ebx + 0x170u);
/* 81e9f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81e9f3: mov eax, esi */
  eax = esi;
/* 81e9f5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81e9f7: mov ecx, esp */
  ecx = esp;
/* 81e9f9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81e9fb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81e9fe: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81ea01: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81ea04: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81ea07: mov ecx, edi */
  ecx = edi;
/* 81ea09: call 0x6c233d */
  esp -= 4; W32(esp, 0x81ea0eu); SPILL(); f_6c233d(); if (g_unwind) return; RELOAD();
/* 81ea0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ea10: je 0x81ea24 */
  if (zf) goto L_81ea24;
L_81ea12: /* 81ea12: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 81ea18: cmp ecx, dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81ea1e: je 0x81eaa7 */
  if (zf) goto L_81eaa7;
L_81ea24: /* 81ea24: mov edx, dword ptr [edi + 0x2d8] */
  edx = R32((uint32_t)(edi + 0x2d8u));
/* 81ea2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81ea2b: push 0x42100000 */
  { uint32_t v = 0x42100000u; esp -= 4; W32(esp, v); }
/* 81ea30: mov ecx, edi */
  ecx = edi;
/* 81ea32: call 0x6c389b */
  esp -= 4; W32(esp, 0x81ea37u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 81ea37: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ea3a: mov eax, esi */
  eax = esi;
/* 81ea3c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81ea3e: mov ecx, esp */
  ecx = esp;
/* 81ea40: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81ea42: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81ea45: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81ea48: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81ea4b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81ea4e: mov ecx, edi */
  ecx = edi;
/* 81ea50: call 0x6c233d */
  esp -= 4; W32(esp, 0x81ea55u); SPILL(); f_6c233d(); if (g_unwind) return; RELOAD();
/* 81ea55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ea57: je 0x81ea67 */
  if (zf) goto L_81ea67;
L_81ea59: /* 81ea59: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 81ea5f: cmp ecx, dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81ea65: je 0x81ea94 */
  if (zf) goto L_81ea94;
L_81ea67: /* 81ea67: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 81ea6d: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 81ea6f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81ea71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ea73: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81ea75: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81ea77: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ea7a: mov eax, esp */
  eax = esp;
/* 81ea7c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 81ea7e: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 81ea81: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 81ea84: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 81ea87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81ea88: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 81ea8b: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x81ea91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81ea91: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_81ea94: /* 81ea94: mov ecx, dword ptr [edi + 0x2d8] */
  ecx = R32((uint32_t)(edi + 0x2d8u));
/* 81ea9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ea9b: push 0x42400000 */
  { uint32_t v = 0x42400000u; esp -= 4; W32(esp, v); }
/* 81eaa0: mov ecx, edi */
  ecx = edi;
/* 81eaa2: call 0x6c389b */
  esp -= 4; W32(esp, 0x81eaa7u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
L_81eaa7: /* 81eaa7: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x81eaadu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 81eaad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81eaaf: push 0xae2f1c */
  { uint32_t v = 0xae2f1cu; esp -= 4; W32(esp, v); }
/* 81eab4: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81eab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81eab7: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x81eabdu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 81eabd: mov esi, dword ptr [ebx + 0xb4] */
  esi = R32((uint32_t)(ebx + 0xb4u));
/* 81eac3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81eac6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81eac8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81eaca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81eacc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81eace: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ead0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ead2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ead4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ead6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 81ead9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 81eadc: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x81eae2u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 81eae2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81eae4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81eae7: mov edx, esp */
  edx = esp;
/* 81eae9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 81eaeb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81eaee: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81eaf1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81eaf4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 81eaf7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81eafa: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 81eb00: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 81eb02: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 81eb05: mov ecx, esp */
  ecx = esp;
/* 81eb07: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81eb09: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 81eb0c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81eb0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81eb10: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81eb13: mov ecx, esp */
  ecx = esp;
/* 81eb15: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 81eb18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81eb1a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81eb20u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81eb20: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81eb23: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81eb25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81eb26: mov ecx, esi */
  ecx = esi;
/* 81eb28: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x81eb2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81eb2e: mov esi, eax */
  esi = eax;
/* 81eb30: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81eb32: je 0x81eb45 */
  if (zf) goto L_81eb45;
L_81eb34: /* 81eb34: push 0xb650a8 */
  { uint32_t v = 0xb650a8u; esp -= 4; W32(esp, v); }
/* 81eb39: mov ecx, esi */
  ecx = esi;
/* 81eb3b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81eb41u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81eb41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81eb43: jne 0x81eb47 */
  if (!zf) goto L_81eb47;
L_81eb45: /* 81eb45: xor esi, esi */
  esi = 0;
L_81eb47: /* 81eb47: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81eb4a: mov dword ptr [esi + 0x3a8], ebx */
  W32((uint32_t)(esi + 0x3a8u), ebx);
/* 81eb50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81eb51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81eb52: mov eax, 1 */
  eax = 0x1u;
/* 81eb57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81eb5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81eb5f: mov esp, ebp */
  esp = ebp;
/* 81eb61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81eb62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81eb65(void) {
  LOAD_REGS();
L_81eb65: /* 81eb65: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81eb68: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81eb6d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 81eb70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81eb71: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 81eb74: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81eb79u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81eb79(); return;
}

void f_81eb79(void) {
  LOAD_REGS();
L_81eb79: /* 81eb79: push 0xa14b4c */
  { uint32_t v = 0xa14b4cu; esp -= 4; W32(esp, v); }
/* 81eb7e: push 0xae2f3c */
  { uint32_t v = 0xae2f3cu; esp -= 4; W32(esp, v); }
/* 81eb83: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81eb89u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81eb89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81eb8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81eb8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81eb90: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81eb95u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81eb95: guest_badaddr(0x81eb95); return;
}

void f_81ec30(void) {
  LOAD_REGS();
L_81ec30: /* 81ec30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81ec31: mov ebp, esp */
  ebp = esp;
/* 81ec33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81ec35: push 0x9d2ed0 */
  { uint32_t v = 0x9d2ed0u; esp -= 4; W32(esp, v); }
/* 81ec3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81ec40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81ec41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81ec48: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ec4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81ec4c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81ec4f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ec51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81ec52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81ec53: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81ec56: mov edi, ecx */
  edi = ecx;
/* 81ec58: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81ec5f: je 0x81ec72 */
  if (zf) goto L_81ec72;
L_81ec61: /* 81ec61: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 81ec66: mov ecx, ebx */
  ecx = ebx;
/* 81ec68: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81ec6eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81ec6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ec70: jne 0x81ec87 */
  if (!zf) goto L_81ec87;
L_81ec72: /* 81ec72: xor eax, eax */
  eax = 0;
/* 81ec74: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81ec77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81ec7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81ec7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81ec80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81ec81: mov esp, ebp */
  esp = ebp;
/* 81ec83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81ec84: ret 4 */
  esp += 8; SPILL(); return;
L_81ec87: /* 81ec87: lea esi, [edi + 0x170] */
  esi = (uint32_t)(edi + 0x170u);
/* 81ec8d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ec90: mov eax, esi */
  eax = esi;
/* 81ec92: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81ec94: mov ecx, esp */
  ecx = esp;
/* 81ec96: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81ec98: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81ec9b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81ec9e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81eca1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81eca4: mov ecx, ebx */
  ecx = ebx;
/* 81eca6: call 0x6c233d */
  esp -= 4; W32(esp, 0x81ecabu); SPILL(); f_6c233d(); if (g_unwind) return; RELOAD();
/* 81ecab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ecad: je 0x81ecd7 */
  if (zf) goto L_81ecd7;
L_81ecaf: /* 81ecaf: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 81ecb5: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 81ecbb: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81ecc1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ecc3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ecc6: je 0x81ecca */
  if (zf) goto L_81ecca;
L_81ecc8: /* 81ecc8: fchs  */
  ST0 = -ST0;
L_81ecca: /* 81ecca: fcomp dword ptr [ebx + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x2d8u)));
  FPOP();
/* 81ecd0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ecd2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ecd5: jne 0x81ed1f */
  if (!zf) goto L_81ed1f;
L_81ecd7: /* 81ecd7: fld dword ptr [0xa13730] */
  { double v = F32((uint32_t)(0xa13730u)); FPUSH(v); }
/* 81ecdd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81ecdf: fsub dword ptr [edi + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x2d8u)));
/* 81ece5: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 81eceb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81eced: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ecef: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 81ecf2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81ecf4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81ecf7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81ecf9: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 81ecfc: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81ecff: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81ed02: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ed05: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81ed08: mov edx, esp */
  edx = esp;
/* 81ed0a: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 81ed0c: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81ed0f: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 81ed12: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81ed15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81ed16: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 81ed19: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x81ed1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81ed1f: /* 81ed1f: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x81ed25u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 81ed25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed27: push 0xae2f44 */
  { uint32_t v = 0xae2f44u; esp -= 4; W32(esp, v); }
/* 81ed2c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81ed2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81ed2f: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x81ed35u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 81ed35: mov esi, dword ptr [edi + 0xb4] */
  esi = R32((uint32_t)(edi + 0xb4u));
/* 81ed3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ed3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed4e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 81ed51: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 81ed54: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x81ed5au); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 81ed5a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81ed5c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ed5f: mov ecx, esp */
  ecx = esp;
/* 81ed61: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81ed63: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81ed66: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81ed69: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81ed6c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81ed6f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ed72: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81ed78: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 81ed7a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81ed7d: mov ecx, esp */
  ecx = esp;
/* 81ed7f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81ed81: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 81ed84: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81ed87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ed88: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81ed8b: mov ecx, esp */
  ecx = esp;
/* 81ed8d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 81ed90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ed92: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81ed98u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81ed98: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81ed9b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81ed9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ed9e: mov ecx, esi */
  ecx = esi;
/* 81eda0: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x81eda6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81eda6: mov esi, eax */
  esi = eax;
/* 81eda8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81edaa: je 0x81edc1 */
  if (zf) goto L_81edc1;
L_81edac: /* 81edac: push 0xb63be8 */
  { uint32_t v = 0xb63be8u; esp -= 4; W32(esp, v); }
/* 81edb1: mov ecx, esi */
  ecx = esi;
/* 81edb3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81edb9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81edb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81edbb: je 0x81edc1 */
  if (zf) goto L_81edc1;
L_81edbd: /* 81edbd: mov eax, esi */
  eax = esi;
/* 81edbf: jmp 0x81edc3 */
  goto L_81edc3;
L_81edc1: /* 81edc1: xor eax, eax */
  eax = 0;
L_81edc3: /* 81edc3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81edc6: mov dword ptr [edi + 0x340], eax */
  W32((uint32_t)(edi + 0x340u), eax);
/* 81edcc: mov dword ptr [eax + 0x3a8], edi */
  W32((uint32_t)(eax + 0x3a8u), edi);
/* 81edd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81edd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81edd4: mov eax, 1 */
  eax = 0x1u;
/* 81edd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81ede0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81ede1: mov esp, ebp */
  esp = ebp;
/* 81ede3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81ede4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81ede7(void) {
  LOAD_REGS();
L_81ede7: /* 81ede7: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81edea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81edef: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 81edf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81edf3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 81edf6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81edfbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81edfb(); return;
}

void f_81edfb(void) {
  LOAD_REGS();
L_81edfb: /* 81edfb: push 0xa14b8c */
  { uint32_t v = 0xa14b8cu; esp -= 4; W32(esp, v); }
/* 81ee00: push 0xae2f60 */
  { uint32_t v = 0xae2f60u; esp -= 4; W32(esp, v); }
/* 81ee05: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81ee0bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81ee0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ee0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ee10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ee12: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81ee17u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81ee17: guest_badaddr(0x81ee17); return;
}

void f_81eea0(void) {
  LOAD_REGS();
L_81eea0: /* 81eea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81eea1: mov ebp, esp */
  ebp = esp;
/* 81eea3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81eea5: push 0x9d2ee0 */
  { uint32_t v = 0x9d2ee0u; esp -= 4; W32(esp, v); }
/* 81eeaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81eeb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81eeb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81eeb8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81eebb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81eebc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81eebd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81eebe: mov edi, ecx */
  edi = ecx;
/* 81eec0: test byte ptr [edi + 0x654], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x654u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81eec7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81eeca: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81eed1: jne 0x81eee8 */
  if (!zf) goto L_81eee8;
L_81eed3: /* 81eed3: xor eax, eax */
  eax = 0;
/* 81eed5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81eed8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81eedf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81eee0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81eee1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81eee2: mov esp, ebp */
  esp = ebp;
/* 81eee4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81eee5: ret 4 */
  esp += 8; SPILL(); return;
L_81eee8: /* 81eee8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81eeeb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81eeed: je 0x81eed3 */
  if (zf) goto L_81eed3;
L_81eeef: /* 81eeef: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 81eef4: mov ecx, ebx */
  ecx = ebx;
/* 81eef6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81eefcu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81eefc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81eefe: je 0x81eed3 */
  if (zf) goto L_81eed3;
L_81ef00: /* 81ef00: lea esi, [edi + 0x170] */
  esi = (uint32_t)(edi + 0x170u);
/* 81ef06: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ef09: mov eax, esi */
  eax = esi;
/* 81ef0b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81ef0d: mov ecx, esp */
  ecx = esp;
/* 81ef0f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81ef11: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81ef14: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81ef17: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81ef1a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81ef1d: mov ecx, ebx */
  ecx = ebx;
/* 81ef1f: call 0x6c233d */
  esp -= 4; W32(esp, 0x81ef24u); SPILL(); f_6c233d(); if (g_unwind) return; RELOAD();
/* 81ef24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ef26: je 0x81ef50 */
  if (zf) goto L_81ef50;
L_81ef28: /* 81ef28: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 81ef2e: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 81ef34: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81ef3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ef3c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ef3f: je 0x81ef43 */
  if (zf) goto L_81ef43;
L_81ef41: /* 81ef41: fchs  */
  ST0 = -ST0;
L_81ef43: /* 81ef43: fcomp dword ptr [ebx + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x2d8u)));
  FPOP();
/* 81ef49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ef4b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ef4e: jne 0x81ef98 */
  if (!zf) goto L_81ef98;
L_81ef50: /* 81ef50: fld dword ptr [0xa13730] */
  { double v = F32((uint32_t)(0xa13730u)); FPUSH(v); }
/* 81ef56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81ef58: fsub dword ptr [edi + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x2d8u)));
/* 81ef5e: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 81ef64: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81ef66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ef68: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 81ef6b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81ef6d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81ef70: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81ef72: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 81ef75: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81ef78: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81ef7b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ef7e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81ef81: mov edx, esp */
  edx = esp;
/* 81ef83: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 81ef85: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81ef88: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 81ef8b: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81ef8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81ef8f: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 81ef92: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x81ef98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81ef98: /* 81ef98: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x81ef9eu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 81ef9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81efa0: push 0xae2f70 */
  { uint32_t v = 0xae2f70u; esp -= 4; W32(esp, v); }
/* 81efa5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81efa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81efa8: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x81efaeu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 81efae: mov esi, dword ptr [edi + 0xb4] */
  esi = R32((uint32_t)(edi + 0xb4u));
/* 81efb4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81efb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81efb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81efbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81efbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81efbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81efc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81efc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81efc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81efc7: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 81efca: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 81efcd: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x81efd3u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 81efd3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81efd5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81efd8: mov ecx, esp */
  ecx = esp;
/* 81efda: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81efdc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81efdf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81efe2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81efe5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81efe8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81efeb: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81eff1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 81eff3: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81eff6: mov ecx, esp */
  ecx = esp;
/* 81eff8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81effa: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 81effd: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81f000: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81f001: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81f004: mov ecx, esp */
  ecx = esp;
/* 81f006: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 81f009: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f00b: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81f011u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81f011: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81f014: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81f016: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81f017: mov ecx, esi */
  ecx = esi;
/* 81f019: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x81f01fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81f01f: mov esi, eax */
  esi = eax;
/* 81f021: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f023: je 0x81f03a */
  if (zf) goto L_81f03a;
L_81f025: /* 81f025: push 0xb6c2c8 */
  { uint32_t v = 0xb6c2c8u; esp -= 4; W32(esp, v); }
/* 81f02a: mov ecx, esi */
  ecx = esi;
/* 81f02c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81f032u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81f032: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f034: je 0x81f03a */
  if (zf) goto L_81f03a;
L_81f036: /* 81f036: mov eax, esi */
  eax = esi;
/* 81f038: jmp 0x81f03c */
  goto L_81f03c;
L_81f03a: /* 81f03a: xor eax, eax */
  eax = 0;
L_81f03c: /* 81f03c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81f03f: mov dword ptr [edi + 0x650], eax */
  W32((uint32_t)(edi + 0x650u), eax);
/* 81f045: mov dword ptr [eax + 0x3ac], edi */
  W32((uint32_t)(eax + 0x3acu), edi);
/* 81f04b: mov edx, dword ptr [edi + 0x100] */
  edx = R32((uint32_t)(edi + 0x100u));
/* 81f051: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81f052: mov dword ptr [eax + 0x3a8], edx */
  W32((uint32_t)(eax + 0x3a8u), edx);
/* 81f058: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81f059: mov eax, 1 */
  eax = 0x1u;
/* 81f05e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81f065: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81f066: mov esp, ebp */
  esp = ebp;
/* 81f068: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81f069: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81f06c(void) {
  LOAD_REGS();
L_81f06c: /* 81f06c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81f06f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81f074: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81f077: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81f078: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81f07b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81f080u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81f080(); return;
}

void f_81f080(void) {
  LOAD_REGS();
L_81f080: /* 81f080: push 0xa14bc0 */
  { uint32_t v = 0xa14bc0u; esp -= 4; W32(esp, v); }
/* 81f085: push 0xae2f84 */
  { uint32_t v = 0xae2f84u; esp -= 4; W32(esp, v); }
/* 81f08a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81f090u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81f090: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81f093: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f095: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f097: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81f09cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81f09c: guest_badaddr(0x81f09c); return;
}

void f_81f120(void) {
  LOAD_REGS();
L_81f120: /* 81f120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81f121: mov ebp, esp */
  ebp = esp;
/* 81f123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81f125: push 0x9d2ef0 */
  { uint32_t v = 0x9d2ef0u; esp -= 4; W32(esp, v); }
/* 81f12a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81f130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81f138: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f13b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f13c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81f13d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81f13e: mov edi, ecx */
  edi = ecx;
/* 81f140: test byte ptr [edi + 0x340], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x340u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81f147: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81f14a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81f151: jne 0x81f168 */
  if (!zf) goto L_81f168;
L_81f153: /* 81f153: xor eax, eax */
  eax = 0;
/* 81f155: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81f158: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81f15f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81f160: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81f161: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81f162: mov esp, ebp */
  esp = ebp;
/* 81f164: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81f165: ret 4 */
  esp += 8; SPILL(); return;
L_81f168: /* 81f168: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81f16b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f16d: je 0x81f153 */
  if (zf) goto L_81f153;
L_81f16f: /* 81f16f: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 81f174: mov ecx, ebx */
  ecx = ebx;
/* 81f176: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81f17cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81f17c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f17e: je 0x81f153 */
  if (zf) goto L_81f153;
L_81f180: /* 81f180: lea esi, [edi + 0x170] */
  esi = (uint32_t)(edi + 0x170u);
/* 81f186: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f189: mov eax, esi */
  eax = esi;
/* 81f18b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81f18d: mov ecx, esp */
  ecx = esp;
/* 81f18f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81f191: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81f194: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81f197: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81f19a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81f19d: mov ecx, ebx */
  ecx = ebx;
/* 81f19f: call 0x6c233d */
  esp -= 4; W32(esp, 0x81f1a4u); SPILL(); f_6c233d(); if (g_unwind) return; RELOAD();
/* 81f1a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f1a6: je 0x81f1d0 */
  if (zf) goto L_81f1d0;
L_81f1a8: /* 81f1a8: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 81f1ae: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 81f1b4: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81f1ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81f1bc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81f1bf: je 0x81f1c3 */
  if (zf) goto L_81f1c3;
L_81f1c1: /* 81f1c1: fchs  */
  ST0 = -ST0;
L_81f1c3: /* 81f1c3: fcomp dword ptr [ebx + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x2d8u)));
  FPOP();
/* 81f1c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81f1cb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81f1ce: jne 0x81f218 */
  if (!zf) goto L_81f218;
L_81f1d0: /* 81f1d0: fld dword ptr [0xa13730] */
  { double v = F32((uint32_t)(0xa13730u)); FPUSH(v); }
/* 81f1d6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81f1d8: fsub dword ptr [edi + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x2d8u)));
/* 81f1de: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 81f1e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81f1e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f1e8: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 81f1eb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81f1ed: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81f1f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81f1f2: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 81f1f5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81f1f8: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81f1fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f1fe: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81f201: mov edx, esp */
  edx = esp;
/* 81f203: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 81f205: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81f208: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 81f20b: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81f20e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f20f: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 81f212: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x81f218u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81f218: /* 81f218: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x81f21eu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 81f21e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f220: push 0xae2f94 */
  { uint32_t v = 0xae2f94u; esp -= 4; W32(esp, v); }
/* 81f225: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81f227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f228: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x81f22eu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 81f22e: mov esi, dword ptr [edi + 0xb4] */
  esi = R32((uint32_t)(edi + 0xb4u));
/* 81f234: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81f237: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f239: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f23b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f23d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f23f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f241: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f243: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f245: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f247: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 81f24a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 81f24d: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x81f253u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 81f253: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81f255: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f258: mov ecx, esp */
  ecx = esp;
/* 81f25a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81f25c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81f25f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81f262: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81f265: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81f268: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f26b: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81f271: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 81f273: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81f276: mov ecx, esp */
  ecx = esp;
/* 81f278: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81f27a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 81f27d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81f280: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81f281: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81f284: mov ecx, esp */
  ecx = esp;
/* 81f286: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 81f289: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f28b: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81f291u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81f291: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81f294: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81f296: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81f297: mov ecx, esi */
  ecx = esi;
/* 81f299: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x81f29fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81f29f: mov esi, eax */
  esi = eax;
/* 81f2a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f2a3: je 0x81f2ba */
  if (zf) goto L_81f2ba;
L_81f2a5: /* 81f2a5: push 0xb64118 */
  { uint32_t v = 0xb64118u; esp -= 4; W32(esp, v); }
/* 81f2aa: mov ecx, esi */
  ecx = esi;
/* 81f2ac: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81f2b2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81f2b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f2b4: je 0x81f2ba */
  if (zf) goto L_81f2ba;
L_81f2b6: /* 81f2b6: mov eax, esi */
  eax = esi;
/* 81f2b8: jmp 0x81f2bc */
  goto L_81f2bc;
L_81f2ba: /* 81f2ba: xor eax, eax */
  eax = 0;
L_81f2bc: /* 81f2bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81f2bf: mov dword ptr [edi + 0x344], eax */
  W32((uint32_t)(edi + 0x344u), eax);
/* 81f2c5: mov dword ptr [eax + 0x3a8], edi */
  W32((uint32_t)(eax + 0x3a8u), edi);
/* 81f2cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81f2cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81f2cd: mov eax, 1 */
  eax = 0x1u;
/* 81f2d2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81f2d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81f2da: mov esp, ebp */
  esp = ebp;
/* 81f2dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81f2dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81f2e0(void) {
  LOAD_REGS();
L_81f2e0: /* 81f2e0: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81f2e3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81f2e8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 81f2eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f2ec: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 81f2ef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81f2f4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81f2f4(); return;
}

void f_81f2f4(void) {
  LOAD_REGS();
L_81f2f4: /* 81f2f4: push 0xa14bf0 */
  { uint32_t v = 0xa14bf0u; esp -= 4; W32(esp, v); }
/* 81f2f9: push 0xae2fa8 */
  { uint32_t v = 0xae2fa8u; esp -= 4; W32(esp, v); }
/* 81f2fe: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81f304u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81f304: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81f307: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f309: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f30b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81f310u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81f310: guest_badaddr(0x81f310); return;
}

void f_81f3a0(void) {
  LOAD_REGS();
L_81f3a0: /* 81f3a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81f3a1: mov ebp, esp */
  ebp = esp;
/* 81f3a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81f3a5: push 0x9d2f00 */
  { uint32_t v = 0x9d2f00u; esp -= 4; W32(esp, v); }
/* 81f3aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81f3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f3b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81f3b8: sub esp, 0xb4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f3be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f3bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81f3c0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 81f3c3: mov al, byte ptr [ecx + 0x468] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x468u))) & 0xffu);
/* 81f3c9: xor ebx, ebx */
  ebx = 0;
/* 81f3cb: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81f3cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81f3ce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81f3d1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 81f3d4: je 0x81f7d4 */
  if (zf) goto L_81f7d4;
L_81f3da: /* 81f3da: cmp dword ptr [ecx + 0x280], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x280u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81f3e0: je 0x81f7d4 */
  if (zf) goto L_81f7d4;
L_81f3e6: /* 81f3e6: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 81f3e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f3ea: call 0x6c61ef */
  esp -= 4; W32(esp, 0x81f3efu); SPILL(); f_6c61ef(); if (g_unwind) return; RELOAD();
/* 81f3ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81f3f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81f3f4: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 81f3fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f3fb: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x81f401u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81f401: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 81f404: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 81f407: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 81f40a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 81f40d: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 81f410: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 81f413: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 81f416: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 81f419: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 81f420: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 81f423: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 81f426: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 81f429: lea edi, [ebp - 0x38] */
  edi = (uint32_t)(ebp + 0xffffffc8u);
/* 81f42c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 81f42e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 81f430: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 81f432: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 81f435: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 81f437: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 81f43a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 81f43c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 81f43f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81f442: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 81f445: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81f448: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 81f44b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81f44e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 81f451: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81f454: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 81f457: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 81f459: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 81f45b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 81f45d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 81f45f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81f461: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 81f464: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 81f467: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 81f46a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 81f46d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 81f470: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 81f473: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 81f476: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 81f479: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 81f47b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 81f47d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 81f47f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 81f481: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81f483: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 81f486: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 81f489: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 81f48c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 81f48f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 81f492: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 81f495: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 81f498: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 81f49b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 81f49d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 81f49f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 81f4a1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 81f4a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81f4a5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 81f4a7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 81f4a9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81f4ab: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 81f4ae: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 81f4b1: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 81f4b4: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 81f4b7: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 81f4ba: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 81f4bd: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 81f4c0: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 81f4c6: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 81f4c9: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 81f4cc: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x81f4d2u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 81f4d2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81f4d5: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81f4d7: je 0x81f7d4 */
  if (zf) goto L_81f7d4;
L_81f4dd: /* 81f4dd: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 81f4e2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81f4e8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81f4e8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81f4ea: je 0x81f7d4 */
  if (zf) goto L_81f7d4;
L_81f4f0: /* 81f4f0: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81f4f3: je 0x81f7d4 */
  if (zf) goto L_81f7d4;
L_81f4f9: /* 81f4f9: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x81f4ffu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 81f4ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f500: push 0xae2fb8 */
  { uint32_t v = 0xae2fb8u; esp -= 4; W32(esp, v); }
/* 81f505: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81f507: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f508: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x81f50eu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 81f50e: mov dword ptr [ebp - 0x7c], ebx */
  W32((uint32_t)(ebp + 0xffffff84u), ebx);
/* 81f511: mov dword ptr [ebp - 0x78], ebx */
  W32((uint32_t)(ebp + 0xffffff88u), ebx);
/* 81f514: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 81f517: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 81f51a: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 81f51d: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 81f520: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 81f523: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 81f526: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 81f529: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 81f530: mov dword ptr [ebp - 0x54], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffacu), 0xffffffffu);
/* 81f537: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 81f53a: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 81f53d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81f540: fld dword ptr [eax + 0x460] */
  { double v = F32((uint32_t)(eax + 0x460u)); FPUSH(v); }
/* 81f546: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 81f54c: fmul dword ptr [0xa149c8] */
  ST0 = ST0 * (F32((uint32_t)(0xa149c8u)));
/* 81f552: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81f555: fld dword ptr [eax + 0x45c] */
  { double v = F32((uint32_t)(eax + 0x45cu)); FPUSH(v); }
/* 81f55b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f55e: fmul dword ptr [0xa149c8] */
  ST0 = ST0 * (F32((uint32_t)(0xa149c8u)));
/* 81f564: mov esi, esp */
  esi = esp;
/* 81f566: mov edi, ebx */
  edi = ebx;
/* 81f568: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 81f56a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81f56d: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 81f570: fld dword ptr [eax + 0x458] */
  { double v = F32((uint32_t)(eax + 0x458u)); FPUSH(v); }
/* 81f576: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 81f57b: fmul dword ptr [0xa149c8] */
  ST0 = ST0 * (F32((uint32_t)(0xa149c8u)));
/* 81f581: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 81f584: lea esi, [ebp - 0x48] */
  esi = (uint32_t)(ebp + 0xffffffb8u);
/* 81f587: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81f588: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81f58b: lea esi, [ebp - 0x24] */
  esi = (uint32_t)(ebp + 0xffffffdcu);
/* 81f58e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81f58f: fsubr dword ptr [ebp - 0x40] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffc0u))) - ST0;
/* 81f592: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f593: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81f596: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 81f599: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81f59c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f59d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81f5a0: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 81f5a3: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 81f5a6: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 81f5a9: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 81f5ac: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81f5af: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81f5b2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 81f5b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81f5b7: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x81f5bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81f5bd: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81f5c0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 81f5c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81f5c8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81f5cb: jnp 0x81f7d4 */
  if (!pf) goto L_81f7d4;
L_81f5d1: /* 81f5d1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81f5d4: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 81f5d7: mov ecx, edi */
  ecx = edi;
/* 81f5d9: add esi, 0x458 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x458u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 81f5df: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x81f5e5u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 81f5e5: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 81f5eb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 81f5ed: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81f5f0: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 81f5f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f5f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f5f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f5f6: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81f5f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f5fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f5fb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 81f5fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f5fe: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 81f601: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f602: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f603: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 81f606: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 81f608: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81f60b: mov esi, dword ptr [ecx + 0xb4] */
  esi = R32((uint32_t)(ecx + 0xb4u));
/* 81f611: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 81f614: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 81f617: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81f61a: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 81f61d: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 81f620: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 81f623: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 81f626: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 81f629: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 81f62c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81f62f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x81f635u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 81f635: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81f637: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f63a: mov edx, esp */
  edx = esp;
/* 81f63c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 81f63e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81f641: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81f644: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81f647: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 81f64a: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 81f64d: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 81f650: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f653: mov ecx, esp */
  ecx = esp;
/* 81f655: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81f657: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 81f65a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81f65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81f65e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81f661: mov ecx, esp */
  ecx = esp;
/* 81f663: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 81f666: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f667: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81f66du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81f66d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81f66f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81f670: mov ecx, esi */
  ecx = esi;
/* 81f672: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x81f678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81f678: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81f67b: fld dword ptr [ecx + 0x460] */
  { double v = F32((uint32_t)(ecx + 0x460u)); FPUSH(v); }
/* 81f681: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f684: fmul dword ptr [0xa0d224] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d224u)));
/* 81f68a: mov edx, esp */
  edx = esp;
/* 81f68c: fld dword ptr [ecx + 0x45c] */
  { double v = F32((uint32_t)(ecx + 0x45cu)); FPUSH(v); }
/* 81f692: fmul dword ptr [0xa0d224] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d224u)));
/* 81f698: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81f69b: fld dword ptr [ecx + 0x458] */
  { double v = F32((uint32_t)(ecx + 0x458u)); FPUSH(v); }
/* 81f6a1: fmul dword ptr [0xa0d224] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d224u)));
/* 81f6a7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81f6aa: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 81f6ad: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81f6b0: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81f6b3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81f6b6: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 81f6b9: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81f6bc: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81f6bf: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81f6c1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81f6c4: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 81f6c7: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81f6ca: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 81f6cd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81f6d0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 81f6d3: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 81f6d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81f6d7: call 0x6c812a */
  esp -= 4; W32(esp, 0x81f6dcu); SPILL(); f_6c812a(); if (g_unwind) return; RELOAD();
/* 81f6dc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81f6de: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81f6e1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81f6e4: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 81f6e7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81f6ea: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 81f6ed: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 81f6f0: fld dword ptr [eax + 0x460] */
  { double v = F32((uint32_t)(eax + 0x460u)); FPUSH(v); }
/* 81f6f6: fmul dword ptr [0xa07fe4] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe4u)));
/* 81f6fc: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 81f702: fld dword ptr [eax + 0x45c] */
  { double v = F32((uint32_t)(eax + 0x45cu)); FPUSH(v); }
/* 81f708: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f709: fmul dword ptr [0xa07fe4] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe4u)));
/* 81f70f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f710: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f711: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f712: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81f715: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f716: fld dword ptr [eax + 0x458] */
  { double v = F32((uint32_t)(eax + 0x458u)); FPUSH(v); }
/* 81f71c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f71d: fmul dword ptr [0xa07fe4] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe4u)));
/* 81f723: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f724: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f725: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 81f728: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81f72b: fsubr dword ptr [ebp - 0x2c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd4u))) - ST0;
/* 81f72e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 81f731: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81f734: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 81f737: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 81f73a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81f73d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81f740: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 81f743: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x81f749u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 81f749: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81f74b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f74e: mov ecx, esp */
  ecx = esp;
/* 81f750: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81f752: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81f755: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81f758: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81f75b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81f75e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81f761: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81f764: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f767: mov ecx, esp */
  ecx = esp;
/* 81f769: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81f76b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81f76e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81f771: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81f772: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81f775: mov ecx, esp */
  ecx = esp;
/* 81f777: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 81f77a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f77b: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81f781u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81f781: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81f783: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81f784: mov ecx, esi */
  ecx = esi;
/* 81f786: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x81f78cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81f78c: mov eax, 2 */
  eax = 0x2u;
/* 81f791: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81f794: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81f79b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81f79c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81f79d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81f79e: mov esp, ebp */
  esp = ebp;
/* 81f7a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81f7a1: ret 4 */
  esp += 8; SPILL(); return;
L_81f7d4: /* 81f7d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81f7d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81f7d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81f7d9: xor eax, eax */
  eax = 0;
/* 81f7db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81f7e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81f7e3: mov esp, ebp */
  esp = ebp;
/* 81f7e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81f7e6: ret 4 */
  esp += 8; SPILL(); return;
}
