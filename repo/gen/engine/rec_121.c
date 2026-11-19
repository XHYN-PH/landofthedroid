#include "recomp.h"
#include "rec_mod.h"

void f_913a30(void) {
  LOAD_REGS();
L_913a30: /* 913a30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 913a34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913a35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913a36: lea edi, [eax + 0x34] */
  edi = (uint32_t)(eax + 0x34u);
/* 913a39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913a3a: call 0x972710 */
  esp -= 4; W32(esp, 0x913a3fu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 913a3f: mov esi, eax */
  esi = eax;
/* 913a41: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 913a44: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 913a46: je 0x913a6b */
  if (zf) goto L_913a6b;
L_913a48: /* 913a48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913a49: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 913a4d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 913a4e: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_913a52: /* 913a52: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 913a55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913a56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913a57: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x913a59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 913a59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913a5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913a5b: call 0x972770 */
  esp -= 4; W32(esp, 0x913a60u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 913a60: mov esi, eax */
  esi = eax;
/* 913a62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 913a65: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 913a67: jne 0x913a52 */
  if (!zf) goto L_913a52;
L_913a69: /* 913a69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 913a6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_913a6b: /* 913a6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 913a6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 913a6d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_913a70(void) {
  LOAD_REGS();
L_913a70: /* 913a70: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 913a73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913a74: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 913a78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913a79: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 913a7d: xor edx, edx */
  edx = 0;
/* 913a7f: xor eax, eax */
  eax = 0;
/* 913a81: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913a83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913a84: je 0x913b34 */
  if (zf) goto L_913b34;
L_913a8a: /* 913a8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_913a90: /* 913a90: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* 913a93: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913a97: fmul dword ptr [ecx + 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xc0u)));
/* 913a9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 913a9e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913aa0: fadd dword ptr [ecx + 0x90] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x90u)));
/* 913aa6: fstp dword ptr [ecx + 0x90] */
  WF32((uint32_t)(ecx + 0x90u), ST0); FPOP();
/* 913aac: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913ab0: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913ab4: fmul dword ptr [ecx + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xc4u)));
/* 913aba: fadd dword ptr [ecx + 0x94] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x94u)));
/* 913ac0: fstp dword ptr [ecx + 0x94] */
  WF32((uint32_t)(ecx + 0x94u), ST0); FPOP();
/* 913ac6: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913aca: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913ace: fmul dword ptr [ecx + 0xc8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xc8u)));
/* 913ad4: fadd dword ptr [ecx + 0x98] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x98u)));
/* 913ada: fstp dword ptr [ecx + 0x98] */
  WF32((uint32_t)(ecx + 0x98u), ST0); FPOP();
/* 913ae0: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913ae4: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913ae8: fmul dword ptr [ecx + 0xd0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xd0u)));
/* 913aee: fadd dword ptr [ecx + 0xa0] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xa0u)));
/* 913af4: fstp dword ptr [ecx + 0xa0] */
  WF32((uint32_t)(ecx + 0xa0u), ST0); FPOP();
/* 913afa: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913afe: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913b02: fmul dword ptr [ecx + 0xd4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xd4u)));
/* 913b08: fadd dword ptr [ecx + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xa4u)));
/* 913b0e: fstp dword ptr [ecx + 0xa4] */
  WF32((uint32_t)(ecx + 0xa4u), ST0); FPOP();
/* 913b14: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913b18: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913b1c: fmul dword ptr [ecx + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xd8u)));
/* 913b22: fadd dword ptr [ecx + 0xa8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xa8u)));
/* 913b28: fstp dword ptr [ecx + 0xa8] */
  WF32((uint32_t)(ecx + 0xa8u), ST0); FPOP();
/* 913b2e: jne 0x913a90 */
  if (!zf) goto L_913a90;
L_913b34: /* 913b34: xor edi, edi */
  edi = 0;
/* 913b36: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913b38: je 0x913f2a */
  if (zf) goto L_913f2a;
L_913b3e: /* 913b3e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 913b42: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 913b43: lea ebp, [eax + 0x34] */
  ebp = (uint32_t)(eax + 0x34u);
L_913b46: /* 913b46: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 913b49: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 913b4d: fmul dword ptr [ecx + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x90u)));
/* 913b53: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 913b56: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 913b59: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913b5c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 913b60: fmul dword ptr [eax + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x94u)));
/* 913b66: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 913b69: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 913b6c: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 913b6f: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 913b73: fmul dword ptr [ecx + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x98u)));
/* 913b79: mov dword ptr [ebp + 8], 0x3f800000 */
  W32((uint32_t)(ebp + 0x8u), 0x3f800000u);
/* 913b80: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 913b83: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 913b86: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913b89: mov ecx, dword ptr [eax + 0xa0] */
  ecx = R32((uint32_t)(eax + 0xa0u));
/* 913b8f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 913b93: mov ecx, dword ptr [eax + 0xa4] */
  ecx = R32((uint32_t)(eax + 0xa4u));
/* 913b99: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 913b9d: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 913ba3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 913ba7: test byte ptr [eax + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 913bab: je 0x913c1e */
  if (zf) goto L_913c1e;
L_913bad: /* 913bad: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 913bb1: lea ecx, [eax + 0xe0] */
  ecx = (uint32_t)(eax + 0xe0u);
/* 913bb7: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 913bba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913bbb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 913bbf: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 913bc4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 913bc7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913bc9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 913bcd: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 913bcf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913bd1: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 913bd5: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 913bd9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 913bdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 913bdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 913bde: call 0x972e60 */
  esp -= 4; W32(esp, 0x913be3u); SPILL(); f_972e60(); if (g_unwind) return; RELOAD();
/* 913be3: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913be7: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913bea: fmul dword ptr [eax + 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xe0u)));
/* 913bf0: xor edx, edx */
  edx = 0;
/* 913bf2: fsubr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) - ST0;
/* 913bf6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 913bfa: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913bfe: fmul dword ptr [eax + 0xe4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xe4u)));
/* 913c04: fsubr dword ptr [esp + 0x14] */
  ST0 = (F32((uint32_t)(esp + 0x14u))) - ST0;
/* 913c08: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 913c0c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913c10: fmul dword ptr [eax + 0xe8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xe8u)));
/* 913c16: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* 913c1a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_913c1e: /* 913c1e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 913c24: mov ecx, 4 */
  ecx = 0x4u;
/* 913c29: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 913c2d: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 913c33: fchs  */
  ST0 = -ST0;
/* 913c35: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 913c39: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 913c3f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913c41: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 913c45: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 913c4b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913c4d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 913c53: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 913c57: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 913c5d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 913c61: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913c67: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913c69: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 913c6d: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 913c73: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913c75: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 913c7b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 913c7f: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 913c85: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 913c89: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 913c8f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913c91: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 913c95: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913c9b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913c9d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 913ca3: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 913ca7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 913cab: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 913cb1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 913cb5: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 913cbb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913cbd: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 913cc1: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913cc7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913cc9: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 913ccf: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 913cd3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 913cd5: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 913cd9: fadd dword ptr [eax + 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xb0u)));
/* 913cdf: fstp dword ptr [eax + 0xb0] */
  WF32((uint32_t)(eax + 0xb0u), ST0); FPOP();
/* 913ce5: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913ce8: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 913cec: fadd dword ptr [eax + 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xb4u)));
/* 913cf2: fstp dword ptr [eax + 0xb4] */
  WF32((uint32_t)(eax + 0xb4u), ST0); FPOP();
/* 913cf8: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913cfb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 913cff: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 913d03: fadd dword ptr [eax + 0xb8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xb8u)));
/* 913d09: fstp dword ptr [eax + 0xb8] */
  WF32((uint32_t)(eax + 0xb8u), ST0); FPOP();
/* 913d0f: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913d12: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 913d16: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 913d1a: fadd dword ptr [eax + 0xbc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xbcu)));
/* 913d20: fstp dword ptr [eax + 0xbc] */
  WF32((uint32_t)(eax + 0xbcu), ST0); FPOP();
/* 913d26: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913d29: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 913d2e: mov edi, edi */
  edi = edi;
L_913d30: /* 913d30: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 913d32: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 913d35: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 913d36: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 913d38: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 913d3a: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 913d3c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913d3e: jne 0x913d30 */
  if (!zf) goto L_913d30;
L_913d40: /* 913d40: fsqrt  */
  ST0 = sqrt(ST0);
/* 913d42: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 913d45: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 913d48: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 913d4b: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913d4e: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 913d54: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 913d56: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913d5c: fstp dword ptr [eax + 0xb0] */
  WF32((uint32_t)(eax + 0xb0u), ST0); FPOP();
/* 913d62: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913d65: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 913d67: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 913d6d: fstp dword ptr [eax + 0xb4] */
  WF32((uint32_t)(eax + 0xb4u), ST0); FPOP();
/* 913d73: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913d76: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 913d78: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 913d7e: fstp dword ptr [eax + 0xb8] */
  WF32((uint32_t)(eax + 0xb8u), ST0); FPOP();
/* 913d84: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913d87: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 913d8d: fstp dword ptr [eax + 0xbc] */
  WF32((uint32_t)(eax + 0xbcu), ST0); FPOP();
/* 913d93: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913d96: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 913d9c: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 913da2: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 913da8: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 913dae: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 913db0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 913db2: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 913db4: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 913db6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913db8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 913dba: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 913dbc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913dbe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 913dc0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 913dc2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913dc4: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 913dc7: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913dca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913dcc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913dce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913dd0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913dd2: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 913dd8: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 913dde: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 913de0: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 913de6: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913dec: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 913dee: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913df0: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 913df3: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913df6: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 913dfc: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 913e02: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 913e08: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913e0e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913e10: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 913e12: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 913e15: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913e18: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 913e1e: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 913e24: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 913e2a: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913e30: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913e32: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 913e34: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 913e37: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 913e3a: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 913e40: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 913e46: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 913e4c: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 913e52: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 913e54: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 913e56: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 913e58: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 913e5a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913e5c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 913e5e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 913e60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913e62: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 913e64: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 913e65: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 913e67: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 913e6a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913e6c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913e6e: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 913e71: mov eax, dword ptr [esi + edi*4 - 4] */
  eax = R32((uint32_t)(esi + edi*4 + 0xfffffffcu));
/* 913e75: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913e77: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913e79: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913e7b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913e7d: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 913e83: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 913e89: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 913e8b: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 913e91: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913e97: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 913e99: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913e9b: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 913e9e: mov eax, dword ptr [esi + edi*4 - 4] */
  eax = R32((uint32_t)(esi + edi*4 + 0xfffffffcu));
/* 913ea2: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 913ea8: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 913eae: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 913eb0: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 913eb6: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913ebc: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 913ebe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913ec0: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 913ec3: mov eax, dword ptr [esi + edi*4 - 4] */
  eax = R32((uint32_t)(esi + edi*4 + 0xfffffffcu));
/* 913ec7: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 913ecd: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 913ed3: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 913ed9: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 913edf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913ee1: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 913ee3: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 913ee6: mov eax, dword ptr [esi + edi*4 - 4] */
  eax = R32((uint32_t)(esi + edi*4 + 0xfffffffcu));
/* 913eea: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 913ef0: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 913ef6: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 913efc: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 913f02: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 913f04: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 913f06: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 913f08: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 913f0a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913f0c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 913f0e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 913f10: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 913f12: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 913f14: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 913f16: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 913f18: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 913f1b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913f1d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913f1f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913f21: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 913f23: jne 0x913b46 */
  if (!zf) goto L_913b46;
L_913f29: /* 913f29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_913f2a: /* 913f2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 913f2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 913f2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 913f2d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 913f30: ret 0x58 */
  esp += 92; SPILL(); return;
}

void f_913f40(void) {
  LOAD_REGS();
L_913f40: /* 913f40: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 913f43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 913f44: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 913f48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 913f49: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 913f4d: xor edx, edx */
  edx = 0;
/* 913f4f: xor eax, eax */
  eax = 0;
/* 913f51: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913f53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 913f54: je 0x914004 */
  if (zf) goto L_914004;
L_913f5a: /* 913f5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_913f60: /* 913f60: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* 913f63: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913f67: fmul dword ptr [ecx + 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xc0u)));
/* 913f6d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 913f6e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 913f70: fadd dword ptr [ecx + 0x90] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x90u)));
/* 913f76: fstp dword ptr [ecx + 0x90] */
  WF32((uint32_t)(ecx + 0x90u), ST0); FPOP();
/* 913f7c: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913f80: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913f84: fmul dword ptr [ecx + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xc4u)));
/* 913f8a: fadd dword ptr [ecx + 0x94] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x94u)));
/* 913f90: fstp dword ptr [ecx + 0x94] */
  WF32((uint32_t)(ecx + 0x94u), ST0); FPOP();
/* 913f96: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913f9a: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913f9e: fmul dword ptr [ecx + 0xc8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xc8u)));
/* 913fa4: fadd dword ptr [ecx + 0x98] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x98u)));
/* 913faa: fstp dword ptr [ecx + 0x98] */
  WF32((uint32_t)(ecx + 0x98u), ST0); FPOP();
/* 913fb0: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913fb4: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913fb8: fmul dword ptr [ecx + 0xd0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xd0u)));
/* 913fbe: fadd dword ptr [ecx + 0xa0] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xa0u)));
/* 913fc4: fstp dword ptr [ecx + 0xa0] */
  WF32((uint32_t)(ecx + 0xa0u), ST0); FPOP();
/* 913fca: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913fce: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913fd2: fmul dword ptr [ecx + 0xd4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xd4u)));
/* 913fd8: fadd dword ptr [ecx + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xa4u)));
/* 913fde: fstp dword ptr [ecx + 0xa4] */
  WF32((uint32_t)(ecx + 0xa4u), ST0); FPOP();
/* 913fe4: mov ecx, dword ptr [esi + eax*4 - 4] */
  ecx = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 913fe8: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 913fec: fmul dword ptr [ecx + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xd8u)));
/* 913ff2: fadd dword ptr [ecx + 0xa8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xa8u)));
/* 913ff8: fstp dword ptr [ecx + 0xa8] */
  WF32((uint32_t)(ecx + 0xa8u), ST0); FPOP();
/* 913ffe: jne 0x913f60 */
  if (!zf) goto L_913f60;
L_914004: /* 914004: xor edi, edi */
  edi = 0;
/* 914006: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 914008: je 0x9143fa */
  if (zf) goto L_9143fa;
L_91400e: /* 91400e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 914012: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 914013: lea ebp, [eax + 0x34] */
  ebp = (uint32_t)(eax + 0x34u);
L_914016: /* 914016: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 914019: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 91401d: fmul dword ptr [ecx + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x90u)));
/* 914023: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 914026: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 914029: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 91402c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 914030: fmul dword ptr [eax + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x94u)));
/* 914036: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 914039: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 91403c: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 91403f: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 914043: fmul dword ptr [ecx + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x98u)));
/* 914049: mov dword ptr [ebp + 8], 0x3f800000 */
  W32((uint32_t)(ebp + 0x8u), 0x3f800000u);
/* 914050: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 914053: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 914056: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 914059: mov ecx, dword ptr [eax + 0xa0] */
  ecx = R32((uint32_t)(eax + 0xa0u));
/* 91405f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 914063: mov ecx, dword ptr [eax + 0xa4] */
  ecx = R32((uint32_t)(eax + 0xa4u));
/* 914069: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 91406d: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 914073: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 914077: test byte ptr [eax + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91407b: je 0x9140ee */
  if (zf) goto L_9140ee;
L_91407d: /* 91407d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 914081: lea ecx, [eax + 0xe0] */
  ecx = (uint32_t)(eax + 0xe0u);
/* 914087: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 91408a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91408b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91408f: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914094: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 914097: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 914099: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91409d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91409f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9140a1: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 9140a5: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9140a9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9140ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9140ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9140ae: call 0x972e60 */
  esp -= 4; W32(esp, 0x9140b3u); SPILL(); f_972e60(); if (g_unwind) return; RELOAD();
/* 9140b3: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9140b7: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 9140ba: fmul dword ptr [eax + 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xe0u)));
/* 9140c0: xor edx, edx */
  edx = 0;
/* 9140c2: fsubr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) - ST0;
/* 9140c6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9140ca: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9140ce: fmul dword ptr [eax + 0xe4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xe4u)));
/* 9140d4: fsubr dword ptr [esp + 0x14] */
  ST0 = (F32((uint32_t)(esp + 0x14u))) - ST0;
/* 9140d8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9140dc: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9140e0: fmul dword ptr [eax + 0xe8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xe8u)));
/* 9140e6: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* 9140ea: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_9140ee: /* 9140ee: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9140f4: mov ecx, 4 */
  ecx = 0x4u;
/* 9140f9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9140fd: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 914103: fchs  */
  ST0 = -ST0;
/* 914105: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 914109: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 91410f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 914111: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 914115: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 91411b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91411d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 914123: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 914127: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 91412d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 914131: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 914137: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 914139: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91413d: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 914143: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 914145: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91414b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91414f: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 914155: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 914159: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 91415f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 914161: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 914165: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 91416b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91416d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 914173: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 914177: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91417b: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 914181: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 914185: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 91418b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91418d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 914191: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 914197: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 914199: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91419f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9141a3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9141a5: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 9141a9: fadd dword ptr [eax + 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xb0u)));
/* 9141af: fstp dword ptr [eax + 0xb0] */
  WF32((uint32_t)(eax + 0xb0u), ST0); FPOP();
/* 9141b5: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 9141b8: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 9141bc: fadd dword ptr [eax + 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xb4u)));
/* 9141c2: fstp dword ptr [eax + 0xb4] */
  WF32((uint32_t)(eax + 0xb4u), ST0); FPOP();
/* 9141c8: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 9141cb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9141cf: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 9141d3: fadd dword ptr [eax + 0xb8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xb8u)));
/* 9141d9: fstp dword ptr [eax + 0xb8] */
  WF32((uint32_t)(eax + 0xb8u), ST0); FPOP();
/* 9141df: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 9141e2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9141e6: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 9141ea: fadd dword ptr [eax + 0xbc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xbcu)));
/* 9141f0: fstp dword ptr [eax + 0xbc] */
  WF32((uint32_t)(eax + 0xbcu), ST0); FPOP();
/* 9141f6: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 9141f9: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9141fe: mov edi, edi */
  edi = edi;
L_914200: /* 914200: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 914202: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914205: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 914206: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 914208: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91420a: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 91420c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91420e: jne 0x914200 */
  if (!zf) goto L_914200;
L_914210: /* 914210: fsqrt  */
  ST0 = sqrt(ST0);
/* 914212: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 914215: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 914218: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 91421b: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 91421e: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 914224: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 914226: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 91422c: fstp dword ptr [eax + 0xb0] */
  WF32((uint32_t)(eax + 0xb0u), ST0); FPOP();
/* 914232: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 914235: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 914237: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 91423d: fstp dword ptr [eax + 0xb4] */
  WF32((uint32_t)(eax + 0xb4u), ST0); FPOP();
/* 914243: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 914246: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 914248: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 91424e: fstp dword ptr [eax + 0xb8] */
  WF32((uint32_t)(eax + 0xb8u), ST0); FPOP();
/* 914254: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 914257: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 91425d: fstp dword ptr [eax + 0xbc] */
  WF32((uint32_t)(eax + 0xbcu), ST0); FPOP();
/* 914263: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 914266: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 91426c: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 914272: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 914278: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 91427e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 914280: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 914282: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 914284: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 914286: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 914288: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 91428a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91428c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91428e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 914290: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 914292: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 914294: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 914297: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 91429a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91429c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91429e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9142a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9142a2: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 9142a8: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 9142ae: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9142b0: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 9142b6: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 9142bc: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9142be: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9142c0: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 9142c3: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 9142c6: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 9142cc: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 9142d2: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 9142d8: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 9142de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9142e0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9142e2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 9142e5: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 9142e8: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 9142ee: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 9142f4: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 9142fa: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 914300: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 914302: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 914304: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 914307: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 91430a: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 914310: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 914316: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 91431c: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 914322: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 914324: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 914326: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 914328: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91432a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91432c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 91432e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 914330: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 914332: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 914334: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 914335: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 914337: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91433a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91433c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91433e: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 914341: mov eax, dword ptr [esi + edi*4 - 4] */
  eax = R32((uint32_t)(esi + edi*4 + 0xfffffffcu));
/* 914345: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 914347: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 914349: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91434b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91434d: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 914353: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 914359: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 91435b: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 914361: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 914367: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 914369: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91436b: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 91436e: mov eax, dword ptr [esi + edi*4 - 4] */
  eax = R32((uint32_t)(esi + edi*4 + 0xfffffffcu));
/* 914372: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 914378: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 91437e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 914380: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 914386: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 91438c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 91438e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 914390: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 914393: mov eax, dword ptr [esi + edi*4 - 4] */
  eax = R32((uint32_t)(esi + edi*4 + 0xfffffffcu));
/* 914397: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 91439d: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 9143a3: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 9143a9: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 9143af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9143b1: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9143b3: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 9143b6: mov eax, dword ptr [esi + edi*4 - 4] */
  eax = R32((uint32_t)(esi + edi*4 + 0xfffffffcu));
/* 9143ba: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 9143c0: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 9143c6: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 9143cc: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 9143d2: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9143d4: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9143d6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9143d8: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9143da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9143dc: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9143de: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9143e0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9143e2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9143e4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9143e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9143e8: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 9143eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9143ed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9143ef: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9143f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9143f3: jne 0x914016 */
  if (!zf) goto L_914016;
L_9143f9: /* 9143f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_9143fa: /* 9143fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9143fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9143fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9143fd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914400: ret 0x58 */
  esp += 92; SPILL(); return;
}

void f_914410(void) {
  LOAD_REGS();
L_914410: /* 914410: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 914414: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914415: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 914418: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914419: mov eax, 0x913a70 */
  eax = 0x913a70u;
/* 91441e: je 0x914425 */
  if (zf) goto L_914425;
L_914420: /* 914420: mov eax, 0x913f40 */
  eax = 0x913f40u;
L_914425: /* 914425: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 914429: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91442c: mov edi, esp */
  edi = esp;
/* 91442e: mov ecx, 0x13 */
  ecx = 0x13u;
/* 914433: lea esi, [esp + 0x64] */
  esi = (uint32_t)(esp + 0x64u);
/* 914437: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 914439: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 91443d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91443e: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 914442: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 914443: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914444: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x914446u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 914446: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 914447: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 914448: ret 0x58 */
  esp += 92; SPILL(); return;
}

void f_914450(void) {
  LOAD_REGS();
L_914450: /* 914450: sub esp, 0x154 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 914456: cmp dword ptr [esp + 0x1dc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1dcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91445e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91445f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 914460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914461: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914462: mov dword ptr [esp + 0x4c], 0xa20eb0 */
  W32((uint32_t)(esp + 0x4cu), 0xa20eb0u);
/* 91446a: mov dword ptr [esp + 0x48], 0xa20e98 */
  W32((uint32_t)(esp + 0x48u), 0xa20e98u);
/* 914472: jne 0x91447e */
  if (!zf) goto L_91447e;
L_914474: /* 914474: lea ebx, [esp + 0x4c] */
  ebx = (uint32_t)(esp + 0x4cu);
/* 914478: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 91447c: jmp 0x914488 */
  goto L_914488;
L_91447e: /* 91447e: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 914482: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 914486: mov ebx, eax */
  ebx = eax;
L_914488: /* 914488: mov ebp, dword ptr [esp + 0x1cc] */
  ebp = R32((uint32_t)(esp + 0x1ccu));
/* 91448f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914491: je 0x914941 */
  if (zf) goto L_914941;
L_914497: /* 914497: mov edx, dword ptr [esp + 0x1c4] */
  edx = R32((uint32_t)(esp + 0x1c4u));
/* 91449e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91449f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9144a0: lea ecx, [esp + 0x1f8] */
  ecx = (uint32_t)(esp + 0x1f8u);
/* 9144a7: mov dword ptr [0xcf2ea4], ecx */
  W32((uint32_t)(0xcf2ea4u), ecx);
/* 9144ad: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9144b0: mov edi, esp */
  edi = esp;
/* 9144b2: mov ecx, 0x13 */
  ecx = 0x13u;
/* 9144b7: lea esi, [esp + 0x224] */
  esi = (uint32_t)(esp + 0x224u);
/* 9144be: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9144c0: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9144c3: mov edi, esp */
  edi = esp;
/* 9144c5: mov ecx, 0x17 */
  ecx = 0x17u;
/* 9144ca: lea esi, [esp + 0x218] */
  esi = (uint32_t)(esp + 0x218u);
/* 9144d1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9144d3: mov ecx, ebx */
  ecx = ebx;
/* 9144d5: call 0x91a110 */
  esp -= 4; W32(esp, 0x9144dau); SPILL(); f_91a110(); if (g_unwind) return; RELOAD();
/* 9144da: mov dword ptr [0xcf2e84], eax */
  W32((uint32_t)(0xcf2e84u), eax);
/* 9144df: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9144e1: mov ecx, ebx */
  ecx = ebx;
/* 9144e3: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x9144e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9144e6: mov ecx, dword ptr [esp + 0x1e8] */
  ecx = R32((uint32_t)(esp + 0x1e8u));
/* 9144ed: mov edx, dword ptr [esp + 0x1e4] */
  edx = R32((uint32_t)(esp + 0x1e4u));
/* 9144f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9144f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9144f6: mov ecx, ebx */
  ecx = ebx;
/* 9144f8: call 0x9149e0 */
  esp -= 4; W32(esp, 0x9144fdu); SPILL(); f_9149e0(); if (g_unwind) return; RELOAD();
/* 9144fd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9144ff: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 914500: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 914503: mov edi, esp */
  edi = esp;
/* 914505: mov ecx, 0x17 */
  ecx = 0x17u;
/* 91450a: lea esi, [esp + 0x1c8] */
  esi = (uint32_t)(esp + 0x1c8u);
/* 914511: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 914513: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 91451a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91451b: mov ecx, ebx */
  ecx = ebx;
/* 91451d: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x914520u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 914520: mov eax, dword ptr [esp + 0x1d0] */
  eax = R32((uint32_t)(esp + 0x1d0u));
/* 914527: mov ecx, dword ptr [esp + 0x1c8] */
  ecx = R32((uint32_t)(esp + 0x1c8u));
/* 91452e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 914530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914531: mov eax, dword ptr [esp + 0x1c8] */
  eax = R32((uint32_t)(esp + 0x1c8u));
/* 914538: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 914539: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91453a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 91453e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91453f: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 914543: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914545: mov ecx, ebx */
  ecx = ebx;
/* 914547: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x91454au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91454a: mov ecx, dword ptr [esp + 0x168] */
  ecx = R32((uint32_t)(esp + 0x168u));
/* 914551: mov edx, dword ptr [esp + 0x18c] */
  edx = R32((uint32_t)(esp + 0x18cu));
/* 914558: mov eax, dword ptr [esp + 0x178] */
  eax = R32((uint32_t)(esp + 0x178u));
/* 91455f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914560: mov ecx, dword ptr [esp + 0x174] */
  ecx = R32((uint32_t)(esp + 0x174u));
/* 914567: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 914568: mov edx, dword ptr [esp + 0x17c] */
  edx = R32((uint32_t)(esp + 0x17cu));
/* 91456f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914570: mov eax, dword ptr [esp + 0x1c4] */
  eax = R32((uint32_t)(esp + 0x1c4u));
/* 914577: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914578: mov ecx, dword ptr [esp + 0x1d0] */
  ecx = R32((uint32_t)(esp + 0x1d0u));
/* 91457f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 914580: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 914584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914585: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 914589: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91458a: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 91458e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91458f: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 914593: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914594: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 914598: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914599: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91459a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91459b: mov ecx, ebx */
  ecx = ebx;
/* 91459d: call 0x91b100 */
  esp -= 4; W32(esp, 0x9145a2u); SPILL(); f_91b100(); if (g_unwind) return; RELOAD();
/* 9145a2: mov ecx, dword ptr [esp + 0x180] */
  ecx = R32((uint32_t)(esp + 0x180u));
/* 9145a9: mov eax, ecx */
  eax = ecx;
/* 9145ab: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 9145b0: jns 0x9145b7 */
  if (!sf) goto L_9145b7;
L_9145b2: /* 9145b2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9145b3: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9145b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_9145b7: /* 9145b7: je 0x9145be */
  if (zf) goto L_9145be;
L_9145b9: /* 9145b9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9145bb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_9145be: /* 9145be: mov eax, dword ptr [esp + 0x1d8] */
  eax = R32((uint32_t)(esp + 0x1d8u));
/* 9145c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9145c6: mov eax, dword ptr [esp + 0x1d4] */
  eax = R32((uint32_t)(esp + 0x1d4u));
/* 9145cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9145ce: mov eax, dword ptr [esp + 0x184] */
  eax = R32((uint32_t)(esp + 0x184u));
/* 9145d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9145d6: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 9145da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9145db: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9145df: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 9145e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9145e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9145e3: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 9145e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9145e8: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 9145ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9145ed: mov ecx, dword ptr [esp + 0x1b8] */
  ecx = R32((uint32_t)(esp + 0x1b8u));
/* 9145f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9145f5: mov eax, dword ptr [esp + 0x1c0] */
  eax = R32((uint32_t)(esp + 0x1c0u));
/* 9145fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9145fd: mov ecx, dword ptr [esp + 0x1dc] */
  ecx = R32((uint32_t)(esp + 0x1dcu));
/* 914604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914605: mov eax, dword ptr [esp + 0x1c0] */
  eax = R32((uint32_t)(esp + 0x1c0u));
/* 91460c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91460d: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 914611: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914612: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 914616: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914618: mov ecx, ebx */
  ecx = ebx;
/* 91461a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x91461cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91461c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 914620: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 914624: mov ecx, 0x17 */
  ecx = 0x17u;
/* 914629: lea esi, [esp + 0x168] */
  esi = (uint32_t)(esp + 0x168u);
/* 914630: lea edi, [esp + 0x54] */
  edi = (uint32_t)(esp + 0x54u);
/* 914634: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 914636: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 91463a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 91463e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 914642: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 914646: mov ecx, dword ptr [esp + 0x168] */
  ecx = R32((uint32_t)(esp + 0x168u));
/* 91464d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 914651: xor eax, eax */
  eax = 0;
/* 914653: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914655: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 914659: mov dword ptr [0xcf2e94], eax */
  W32((uint32_t)(0xcf2e94u), eax);
/* 91465e: je 0x9148ce */
  if (zf) goto L_9148ce;
L_914664: /* 914664: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 914668: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91466c: jle 0x9148bc */
  if ((zf || sf != of)) goto L_9148bc;
L_914672: /* 914672: mov ecx, dword ptr [esp + 0x200] */
  ecx = R32((uint32_t)(esp + 0x200u));
/* 914679: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91467b: je 0x91469f */
  if (zf) goto L_91469f;
L_91467d: /* 91467d: mov ecx, dword ptr [0xcf2ea4] */
  ecx = R32((uint32_t)(0xcf2ea4u));
/* 914683: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 914686: cmp edx, dword ptr [ecx + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 914689: jne 0x91469f */
  if (!zf) goto L_91469f;
L_91468b: /* 91468b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91468c: mov eax, dword ptr [0xcf2e84] */
  eax = R32((uint32_t)(0xcf2e84u));
/* 914691: push 0xaf2908 */
  { uint32_t v = 0xaf2908u; esp -= 4; W32(esp, v); }
/* 914696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914697: call 0x9194a0 */
  esp -= 4; W32(esp, 0x91469cu); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 91469c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_91469f: /* 91469f: call 0x9149a0 */
  esp -= 4; W32(esp, 0x9146a4u); SPILL(); f_9149a0(); if (g_unwind) return; RELOAD();
/* 9146a4: mov ecx, dword ptr [0xcf2e94] */
  ecx = R32((uint32_t)(0xcf2e94u));
/* 9146aa: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 9146ae: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 9146b1: mov eax, ecx */
  eax = ecx;
/* 9146b3: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 9146b8: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 9146bc: jns 0x9146c3 */
  if (!sf) goto L_9146c3;
L_9146be: /* 9146be: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9146bf: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9146c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_9146c3: /* 9146c3: mov ebp, ecx */
  ebp = ecx;
/* 9146c5: je 0x9146cc */
  if (zf) goto L_9146cc;
L_9146c7: /* 9146c7: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 9146c9: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
L_9146cc: /* 9146cc: mov eax, ecx */
  eax = ecx;
/* 9146ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9146cf: mov esi, 0xc */
  esi = 0xcu;
/* 9146d4: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x9146d4);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 9146d6: mov esi, ecx */
  esi = ecx;
/* 9146d8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9146da: je 0x9146e1 */
  if (zf) goto L_9146e1;
L_9146dc: /* 9146dc: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9146de: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_9146e1: /* 9146e1: mov eax, ebp */
  eax = ebp;
/* 9146e3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9146e4: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9146e7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9146e9: mov ebx, eax */
  ebx = eax;
/* 9146eb: mov eax, esi */
  eax = esi;
/* 9146ed: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9146ee: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9146f1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9146f3: mov edi, eax */
  edi = eax;
/* 9146f5: mov eax, dword ptr [esp + 0x1ec] */
  eax = R32((uint32_t)(esp + 0x1ecu));
/* 9146fc: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 9146ff: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 914702: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 914705: mov dword ptr [esp + 0xfc], 0xa20e74 */
  W32((uint32_t)(esp + 0xfcu), 0xa20e74u);
/* 914710: mov dword ptr [esp + 0x130], 0xa20e50 */
  W32((uint32_t)(esp + 0x130u), 0xa20e50u);
/* 91471b: lea esi, [esp + 0xfc] */
  esi = (uint32_t)(esp + 0xfcu);
/* 914722: je 0x91472b */
  if (zf) goto L_91472b;
L_914724: /* 914724: lea esi, [esp + 0x130] */
  esi = (uint32_t)(esp + 0x130u);
L_91472b: /* 91472b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 91472d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91472e: mov ecx, esi */
  ecx = esi;
/* 914730: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x914732u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 914732: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 914736: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914737: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 91473e: call 0x91a460 */
  esp -= 4; W32(esp, 0x914743u); SPILL(); f_91a460(); if (g_unwind) return; RELOAD();
/* 914743: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 914749: fdiv dword ptr [esp + 0x1d0] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1d0u)));
/* 914750: mov eax, dword ptr [esp + 0x1d4] */
  eax = R32((uint32_t)(esp + 0x1d4u));
/* 914757: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 914759: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91475a: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 914761: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 914764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914765: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 914769: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91476a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91476e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91476f: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 914776: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914777: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 91477b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91477c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91477d: mov ecx, esi */
  ecx = esi;
/* 91477f: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x914782u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 914782: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 914784: mov ecx, esi */
  ecx = esi;
/* 914786: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x914789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 914789: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 91478b: mov ecx, esi */
  ecx = esi;
/* 91478d: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x914790u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 914790: mov ecx, dword ptr [esp + 0x1e0] */
  ecx = R32((uint32_t)(esp + 0x1e0u));
/* 914797: mov edx, dword ptr [esp + 0x1ec] */
  edx = R32((uint32_t)(esp + 0x1ecu));
/* 91479e: mov eax, dword ptr [esp + 0x1dc] */
  eax = R32((uint32_t)(esp + 0x1dcu));
/* 9147a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9147a6: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 9147ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9147ae: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 9147b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9147b6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9147ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9147bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9147bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9147bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9147be: lea ecx, [esp + 0xcc] */
  ecx = (uint32_t)(esp + 0xccu);
/* 9147c5: call 0x91a200 */
  esp -= 4; W32(esp, 0x9147cau); SPILL(); f_91a200(); if (g_unwind) return; RELOAD();
/* 9147ca: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9147cc: je 0x9147eb */
  if (zf) goto L_9147eb;
L_9147ce: /* 9147ce: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 9147d5: mov ecx, dword ptr [esp + 0xdc] */
  ecx = R32((uint32_t)(esp + 0xdcu));
/* 9147dc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9147de: mov edx, ebp */
  edx = ebp;
L_9147e0: /* 9147e0: mov esi, dword ptr [ecx + eax] */
  esi = R32((uint32_t)(ecx + eax));
/* 9147e3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 9147e5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9147e8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9147e9: jne 0x9147e0 */
  if (!zf) goto L_9147e0;
L_9147eb: /* 9147eb: mov ecx, dword ptr [0xcf2e94] */
  ecx = R32((uint32_t)(0xcf2e94u));
/* 9147f1: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 9147f5: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 9147f8: mov eax, ecx */
  eax = ecx;
/* 9147fa: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9147fb: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9147fd: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9147ff: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914801: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914802: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914805: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914807: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 91480b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91480e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 914811: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914814: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 914816: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 91481a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 91481e: mov esi, dword ptr [esp + 0x90] */
  esi = R32((uint32_t)(esp + 0x90u));
/* 914825: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 914828: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91482a: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 91482e: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 914832: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 914836: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 914839: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91483d: mov eax, ecx */
  eax = ecx;
/* 91483f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914840: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914843: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914845: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 91484c: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 91484f: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 914851: mov edi, dword ptr [esp + 0x8c] */
  edi = R32((uint32_t)(esp + 0x8cu));
/* 914858: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91485b: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 91485e: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 914861: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 914865: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* 91486c: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91486e: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 914875: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 91487c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91487e: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 914880: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 914882: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914884: mov dword ptr [esp + 0x80], ebx */
  W32((uint32_t)(esp + 0x80u), ebx);
/* 91488b: mov dword ptr [esp + 0x8c], edi */
  W32((uint32_t)(esp + 0x8cu), edi);
/* 914892: mov dword ptr [esp + 0x90], esi */
  W32((uint32_t)(esp + 0x90u), esi);
/* 914899: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 9148a0: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 9148a7: call 0x9149c0 */
  esp -= 4; W32(esp, 0x9148acu); SPILL(); f_9149c0(); if (g_unwind) return; RELOAD();
/* 9148ac: mov eax, dword ptr [0xcf2e94] */
  eax = R32((uint32_t)(0xcf2e94u));
/* 9148b1: mov ebp, dword ptr [esp + 0x1cc] */
  ebp = R32((uint32_t)(esp + 0x1ccu));
/* 9148b8: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_9148bc: /* 9148bc: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 9148c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9148c1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9148c3: mov dword ptr [0xcf2e94], eax */
  W32((uint32_t)(0xcf2e94u), eax);
/* 9148c8: jne 0x914664 */
  if (!zf) goto L_914664;
L_9148ce: /* 9148ce: mov eax, dword ptr [esp + 0x18c] */
  eax = R32((uint32_t)(esp + 0x18cu));
/* 9148d5: mov ecx, dword ptr [esp + 0x17c] */
  ecx = R32((uint32_t)(esp + 0x17cu));
/* 9148dc: mov esi, dword ptr [esp + 0x1c4] */
  esi = R32((uint32_t)(esp + 0x1c4u));
/* 9148e3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9148e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9148e5: mov eax, dword ptr [esp + 0x188] */
  eax = R32((uint32_t)(esp + 0x188u));
/* 9148ec: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 9148ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9148ef: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 9148f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9148f4: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 9148f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9148f9: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 9148fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9148fe: mov eax, dword ptr [esp + 0x1c0] */
  eax = R32((uint32_t)(esp + 0x1c0u));
/* 914905: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914906: mov ecx, dword ptr [esp + 0x1dc] */
  ecx = R32((uint32_t)(esp + 0x1dcu));
/* 91490d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91490e: mov eax, dword ptr [esp + 0x1b4] */
  eax = R32((uint32_t)(esp + 0x1b4u));
/* 914915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914916: mov ecx, dword ptr [esp + 0x1d0] */
  ecx = R32((uint32_t)(esp + 0x1d0u));
/* 91491d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91491e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91491f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914920: mov ecx, ebx */
  ecx = ebx;
/* 914922: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x914925u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 914925: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 914929: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 91492b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91492c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91492d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91492e: mov ecx, ebx */
  ecx = ebx;
/* 914930: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x914933u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 914933: mov ecx, dword ptr [0xcf2e84] */
  ecx = R32((uint32_t)(0xcf2e84u));
/* 914939: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91493a: mov ecx, ebx */
  ecx = ebx;
/* 91493c: call 0x91a100 */
  esp -= 4; W32(esp, 0x914941u); SPILL(); f_91a100(); if (g_unwind) return; RELOAD();
L_914941: /* 914941: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 914942: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 914943: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 914944: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 914945: add esp, 0x154 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91494b: ret 0xb4 */
  esp += 184; SPILL(); return;
}

void f_914950(void) {
  LOAD_REGS();
L_914950: /* 914950: push 0xaf2944 */
  { uint32_t v = 0xaf2944u; esp -= 4; W32(esp, v); }
/* 914955: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 914957: call 0x971de0 */
  esp -= 4; W32(esp, 0x91495cu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 91495c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91495f: call 0x91b2f0 */
  esp -= 4; W32(esp, 0x914964u); SPILL(); f_91b2f0(); if (g_unwind) return; RELOAD();
/* 914964: mov al, byte ptr [0xcf2eac] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf2eacu))) & 0xffu);
/* 914969: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91496b: je 0x914982 */
  if (zf) goto L_914982;
L_91496d: /* 91496d: push 0xaf292c */
  { uint32_t v = 0xaf292cu; esp -= 4; W32(esp, v); }
/* 914972: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 914974: call 0x971de0 */
  esp -= 4; W32(esp, 0x914979u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 914979: mov eax, 2 */
  eax = 0x2u;
/* 91497e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914981: ret  */
  esp += 4; SPILL(); return;
L_914982: /* 914982: push 0xaf2914 */
  { uint32_t v = 0xaf2914u; esp -= 4; W32(esp, v); }
/* 914987: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 914989: call 0x971de0 */
  esp -= 4; W32(esp, 0x91498eu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 91498e: mov eax, 1 */
  eax = 0x1u;
/* 914993: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914996: ret  */
  esp += 4; SPILL(); return;
}

void f_9149a0(void) {
  LOAD_REGS();
L_9149a0: /* 9149a0: mov eax, dword ptr [0xcf2e88] */
  eax = R32((uint32_t)(0xcf2e88u));
/* 9149a5: mov ecx, dword ptr [0xcf2e90] */
  ecx = R32((uint32_t)(0xcf2e90u));
/* 9149ab: mov dword ptr [eax*4 + 0xcf2e98], ecx */
  W32((uint32_t)(eax*4 + 0xcf2e98u), ecx);
/* 9149b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9149b3: mov dword ptr [0xcf2e88], eax */
  W32((uint32_t)(0xcf2e88u), eax);
/* 9149b8: ret  */
  esp += 4; SPILL(); return;
}

void f_9149c0(void) {
  LOAD_REGS();
L_9149c0: /* 9149c0: mov eax, dword ptr [0xcf2e88] */
  eax = R32((uint32_t)(0xcf2e88u));
/* 9149c5: mov ecx, dword ptr [eax*4 + 0xcf2e94] */
  ecx = R32((uint32_t)(eax*4 + 0xcf2e94u));
/* 9149cc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9149cd: mov dword ptr [0xcf2e90], ecx */
  W32((uint32_t)(0xcf2e90u), ecx);
/* 9149d3: mov dword ptr [0xcf2e88], eax */
  W32((uint32_t)(0xcf2e88u), eax);
/* 9149d8: ret  */
  esp += 4; SPILL(); return;
}

void f_9149e0(void) {
  LOAD_REGS();
L_9149e0: /* 9149e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9149e4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9149e8: mov dword ptr [0xcf2e90], eax */
  W32((uint32_t)(0xcf2e90u), eax);
/* 9149ed: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9149ef: mov dword ptr [0xcf2e88], 0 */
  W32((uint32_t)(0xcf2e88u), 0x0u);
/* 9149f9: mov dword ptr [0xcf2e8c], eax */
  W32((uint32_t)(0xcf2e8cu), eax);
/* 9149fe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_914a10(void) {
  LOAD_REGS();
L_914a10: /* 914a10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914a11: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 914a15: mov eax, esi */
  eax = esi;
/* 914a17: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 914a1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914a1d: jns 0x914a24 */
  if (!sf) goto L_914a24;
L_914a1f: /* 914a1f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 914a20: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 914a23: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_914a24: /* 914a24: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 914a28: je 0x914a3b */
  if (zf) goto L_914a3b;
L_914a2a: /* 914a2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914a2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914a2c: push 0xaf29e8 */
  { uint32_t v = 0xaf29e8u; esp -= 4; W32(esp, v); }
/* 914a31: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 914a33: call 0x971e40 */
  esp -= 4; W32(esp, 0x914a38u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 914a38: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_914a3b: /* 914a3b: mov ecx, dword ptr [0xcf2e90] */
  ecx = R32((uint32_t)(0xcf2e90u));
/* 914a41: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* 914a44: mov ecx, dword ptr [0xcf2e8c] */
  ecx = R32((uint32_t)(0xcf2e8cu));
/* 914a4a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 914a4c: jbe 0x914a61 */
  if ((cf | zf)) goto L_914a61;
L_914a4e: /* 914a4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914a4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914a51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914a52: push 0xaf2960 */
  { uint32_t v = 0xaf2960u; esp -= 4; W32(esp, v); }
/* 914a57: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 914a59: call 0x971e40 */
  esp -= 4; W32(esp, 0x914a5eu); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 914a5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_914a61: /* 914a61: mov ecx, dword ptr [0xcf2e90] */
  ecx = R32((uint32_t)(0xcf2e90u));
/* 914a67: mov eax, ecx */
  eax = ecx;
/* 914a69: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914a6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 914a6c: mov dword ptr [0xcf2e90], ecx */
  W32((uint32_t)(0xcf2e90u), ecx);
/* 914a72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 914a73: ret  */
  esp += 4; SPILL(); return;
}

void f_914a80(void) {
  LOAD_REGS();
L_914a80: /* 914a80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914a81: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 914a85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 914a86: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 914a87: xor ebp, ebp */
  ebp = 0;
/* 914a89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914a8a: xor ebx, ebx */
  ebx = 0;
/* 914a8c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914a8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914a8f: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 914a93: je 0x914b04 */
  if (zf) goto L_914b04;
L_914a95: /* 914a95: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 914a99: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 914a9d: mov esi, eax */
  esi = eax;
/* 914a9f: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 914aa1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_914aa5: /* 914aa5: cmp dword ptr [edi + esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 914aa9: jle 0x914af6 */
  if ((zf || sf != of)) goto L_914af6;
L_914aab: /* 914aab: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 914aad: mov eax, ecx */
  eax = ecx;
/* 914aaf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914ab0: mov ebp, 0xc */
  ebp = 0xcu;
/* 914ab5: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x914ab5);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 914ab7: mov eax, ecx */
  eax = ecx;
/* 914ab9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914abb: je 0x914ac1 */
  if (zf) goto L_914ac1;
L_914abd: /* 914abd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914abf: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_914ac1: /* 914ac1: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 914ac5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914ac6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914ac9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914acb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 914ace: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 914ad0: mov eax, ecx */
  eax = ecx;
/* 914ad2: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 914ad7: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 914adb: jns 0x914ae2 */
  if (!sf) goto L_914ae2;
L_914add: /* 914add: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 914ade: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 914ae1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_914ae2: /* 914ae2: je 0x914ae9 */
  if (zf) goto L_914ae9;
L_914ae4: /* 914ae4: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 914ae6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_914ae9: /* 914ae9: mov eax, ecx */
  eax = ecx;
/* 914aeb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914aec: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914aef: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914af1: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 914af4: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_914af6: /* 914af6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 914afa: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 914afd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 914afe: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 914b02: jne 0x914aa5 */
  if (!zf) goto L_914aa5;
L_914b04: /* 914b04: mov edi, dword ptr [esp + 0x78] */
  edi = R32((uint32_t)(esp + 0x78u));
/* 914b08: mov ecx, edi */
  ecx = edi;
/* 914b0a: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 914b0c: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 914b0f: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 914b12: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914b15: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914b18: je 0x914b1f */
  if (zf) goto L_914b1f;
L_914b1a: /* 914b1a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914b1c: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_914b1f: /* 914b1f: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914b22: push 0xaf2a88 */
  { uint32_t v = 0xaf2a88u; esp -= 4; W32(esp, v); }
/* 914b27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914b28: call 0x914a10 */
  esp -= 4; W32(esp, 0x914b2du); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 914b2d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 914b31: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 914b33: mov eax, edi */
  eax = edi;
/* 914b35: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 914b37: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914b3a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914b3d: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 914b40: jne 0x914b47 */
  if (!zf) goto L_914b47;
L_914b42: /* 914b42: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 914b45: jmp 0x914b4f */
  goto L_914b4f;
L_914b47: /* 914b47: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 914b4a: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 914b4d: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_914b4f: /* 914b4f: push 0xaf2a80 */
  { uint32_t v = 0xaf2a80u; esp -= 4; W32(esp, v); }
/* 914b54: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 914b57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914b58: call 0x914a10 */
  esp -= 4; W32(esp, 0x914b5du); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 914b5d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 914b60: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* 914b63: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914b65: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914b66: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914b68: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 914b6a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 914b6d: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914b70: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914b73: push 0xaf2a7c */
  { uint32_t v = 0xaf2a7cu; esp -= 4; W32(esp, v); }
/* 914b78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914b79: call 0x914a10 */
  esp -= 4; W32(esp, 0x914b7eu); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 914b7e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 914b81: mov eax, ebx */
  eax = ebx;
/* 914b83: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914b86: mov ecx, eax */
  ecx = eax;
/* 914b88: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914b8b: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914b8e: je 0x914b98 */
  if (zf) goto L_914b98;
L_914b90: /* 914b90: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 914b93: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914b96: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914b98: /* 914b98: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914b9b: push 0xaf2a78 */
  { uint32_t v = 0xaf2a78u; esp -= 4; W32(esp, v); }
/* 914ba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914ba1: call 0x914a10 */
  esp -= 4; W32(esp, 0x914ba6u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 914ba6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 914ba9: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 914bb0: mov ecx, eax */
  ecx = eax;
/* 914bb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914bb5: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914bb8: je 0x914bc3 */
  if (zf) goto L_914bc3;
L_914bba: /* 914bba: lea eax, [ebp*4 + 0x40] */
  eax = (uint32_t)(ebp*4 + 0x40u);
/* 914bc1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914bc3: /* 914bc3: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914bc6: push 0xaf2a68 */
  { uint32_t v = 0xaf2a68u; esp -= 4; W32(esp, v); }
/* 914bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914bcc: call 0x914a10 */
  esp -= 4; W32(esp, 0x914bd1u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 914bd1: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 914bd4: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 914bdb: mov ecx, eax */
  ecx = eax;
/* 914bdd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914be0: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914be3: je 0x914bee */
  if (zf) goto L_914bee;
L_914be5: /* 914be5: lea eax, [ebx*4 + 0x40] */
  eax = (uint32_t)(ebx*4 + 0x40u);
/* 914bec: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914bee: /* 914bee: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914bf1: push 0xaf2a60 */
  { uint32_t v = 0xaf2a60u; esp -= 4; W32(esp, v); }
/* 914bf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914bf7: call 0x914a10 */
  esp -= 4; W32(esp, 0x914bfcu); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 914bfc: mov edi, ebx */
  edi = ebx;
/* 914bfe: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
/* 914c00: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 914c03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914c06: and edi, 0x3f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 914c09: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 914c0c: jne 0x914c15 */
  if (!zf) goto L_914c15;
L_914c0e: /* 914c0e: mov eax, ebx */
  eax = ebx;
/* 914c10: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914c13: jmp 0x914c1d */
  goto L_914c1d;
L_914c15: /* 914c15: lea eax, [ebx + 2] */
  eax = (uint32_t)(ebx + 0x2u);
/* 914c18: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914c1b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914c1d: /* 914c1d: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914c20: push 0xaf2a54 */
  { uint32_t v = 0xaf2a54u; esp -= 4; W32(esp, v); }
/* 914c25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914c26: call 0x914a10 */
  esp -= 4; W32(esp, 0x914c2bu); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 914c2b: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 914c2e: mov eax, ebp */
  eax = ebp;
/* 914c30: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 914c32: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914c35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914c38: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 914c3b: jne 0x914c44 */
  if (!zf) goto L_914c44;
L_914c3d: /* 914c3d: shl ebp, 5 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 914c40: mov ecx, ebp */
  ecx = ebp;
/* 914c42: jmp 0x914c4c */
  goto L_914c4c;
L_914c44: /* 914c44: lea ecx, [ebp + 2] */
  ecx = (uint32_t)(ebp + 0x2u);
/* 914c47: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 914c4a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_914c4c: /* 914c4c: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914c4f: push 0xaf2a40 */
  { uint32_t v = 0xaf2a40u; esp -= 4; W32(esp, v); }
/* 914c54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914c55: call 0x914a10 */
  esp -= 4; W32(esp, 0x914c5au); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 914c5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914c5d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914c5f: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 914c62: jne 0x914c6b */
  if (!zf) goto L_914c6b;
L_914c64: /* 914c64: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 914c67: mov eax, ebx */
  eax = ebx;
/* 914c69: jmp 0x914c73 */
  goto L_914c73;
L_914c6b: /* 914c6b: lea eax, [ebx + 2] */
  eax = (uint32_t)(ebx + 0x2u);
/* 914c6e: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914c71: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914c73: /* 914c73: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914c76: push 0xaf2a38 */
  { uint32_t v = 0xaf2a38u; esp -= 4; W32(esp, v); }
/* 914c7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914c7c: call 0x914a10 */
  esp -= 4; W32(esp, 0x914c81u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 914c81: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 914c83: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 914c86: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 914c89: and edx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914c8c: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914c8f: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 914c92: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 914c94: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 914c97: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 914c9a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 914c9d: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 914ca0: and edx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914ca3: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914ca6: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 914ca9: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 914cac: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 914caf: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 914cb2: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 914cb5: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 914cb8: and edx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914cbb: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914cbe: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 914cc1: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 914cc4: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 914cc7: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 914cca: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 914ccd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914cd0: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 914cd3: and edx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914cd6: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914cd9: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 914cdc: and eax, 0xffffffc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 914cdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 914ce0: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914ce3: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 914ce6: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 914ce9: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 914cec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 914ced: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 914cee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 914cef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 914cf0: ret  */
  esp += 4; SPILL(); return;
}

void f_914d00(void) {
  LOAD_REGS();
L_914d00: /* 914d00: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 914d04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914d05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914d07: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 914d0a: mov edi, esp */
  edi = esp;
/* 914d0c: mov ecx, 0x17 */
  ecx = 0x17u;
/* 914d11: lea esi, [esp + 0x70] */
  esi = (uint32_t)(esp + 0x70u);
/* 914d15: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 914d17: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 914d1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914d1c: call 0x914a80 */
  esp -= 4; W32(esp, 0x914d21u); SPILL(); f_914a80(); if (g_unwind) return; RELOAD();
/* 914d21: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914d24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 914d25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 914d26: ret 0x64 */
  esp += 104; SPILL(); return;
}

void f_914d30(void) {
  LOAD_REGS();
L_914d30: /* 914d30: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 914d34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914d35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914d36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 914d37: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 914d3a: mov edi, esp */
  edi = esp;
/* 914d3c: mov ecx, 0x17 */
  ecx = 0x17u;
/* 914d41: lea esi, [esp + 0x70] */
  esi = (uint32_t)(esp + 0x70u);
/* 914d45: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 914d47: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 914d4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 914d4c: call 0x914a80 */
  esp -= 4; W32(esp, 0x914d51u); SPILL(); f_914a80(); if (g_unwind) return; RELOAD();
/* 914d51: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 914d54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 914d55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 914d56: ret 0x64 */
  esp += 104; SPILL(); return;
}

void f_914d60(void) {
  LOAD_REGS();
L_914d60: /* 914d60: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 914d64: mov eax, ecx */
  eax = ecx;
/* 914d66: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 914d69: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 914d6e: jns 0x914d75 */
  if (!sf) goto L_914d75;
L_914d70: /* 914d70: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 914d71: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 914d74: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_914d75: /* 914d75: jne 0x914d7d */
  if (!zf) goto L_914d7d;
L_914d77: /* 914d77: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 914d7b: jmp 0x914d88 */
  goto L_914d88;
L_914d7d: /* 914d7d: mov edx, ecx */
  edx = ecx;
/* 914d7f: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 914d81: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 914d84: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
L_914d88: /* 914d88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 914d89: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 914d8a: mov eax, ecx */
  eax = ecx;
/* 914d8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 914d8d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914d8e: mov esi, 0xc */
  esi = 0xcu;
/* 914d93: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x914d93);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 914d95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 914d96: mov eax, ecx */
  eax = ecx;
/* 914d98: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914d9a: je 0x914da0 */
  if (zf) goto L_914da0;
L_914d9c: /* 914d9c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914d9e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_914da0: /* 914da0: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 914da5: jns 0x914dac */
  if (!sf) goto L_914dac;
L_914da7: /* 914da7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 914da8: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 914dab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_914dac: /* 914dac: jne 0x914dc9 */
  if (!zf) goto L_914dc9;
L_914dae: /* 914dae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914db0: jne 0x914dbb */
  if (!zf) goto L_914dbb;
L_914db2: /* 914db2: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 914db9: jmp 0x914df6 */
  goto L_914df6;
L_914dbb: /* 914dbb: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 914dbd: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914dc0: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 914dc7: jmp 0x914df6 */
  goto L_914df6;
L_914dc9: /* 914dc9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914dcb: mov eax, ecx */
  eax = ecx;
/* 914dcd: je 0x914ddd */
  if (zf) goto L_914ddd;
L_914dcf: /* 914dcf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914dd1: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914dd4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914dd6: je 0x914ddd */
  if (zf) goto L_914ddd;
L_914dd8: /* 914dd8: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 914dda: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_914ddd: /* 914ddd: and ecx, 0x8000000f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 914de3: jns 0x914dea */
  if (!sf) goto L_914dea;
L_914de5: /* 914de5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 914de6: or ecx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 914de9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_914dea: /* 914dea: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914dec: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914def: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
L_914df6: /* 914df6: mov ebp, dword ptr [esp + 0x80] */
  ebp = R32((uint32_t)(esp + 0x80u));
/* 914dfd: xor ebx, ebx */
  ebx = 0;
/* 914dff: xor esi, esi */
  esi = 0;
/* 914e01: xor edi, edi */
  edi = 0;
/* 914e03: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914e05: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 914e09: je 0x914e65 */
  if (zf) goto L_914e65;
L_914e0b: /* 914e0b: nop  */
/* 914e0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_914e10: /* 914e10: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 914e14: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 914e17: mov eax, ecx */
  eax = ecx;
/* 914e19: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914e1a: mov ebx, 0xc */
  ebx = 0xcu;
/* 914e1f: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x914e1f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 914e21: mov eax, ecx */
  eax = ecx;
/* 914e23: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914e25: je 0x914e2b */
  if (zf) goto L_914e2b;
L_914e27: /* 914e27: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914e29: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_914e2b: /* 914e2b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 914e2f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914e30: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914e33: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914e35: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 914e38: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 914e3a: mov eax, ecx */
  eax = ecx;
/* 914e3c: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 914e41: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 914e45: jns 0x914e4c */
  if (!sf) goto L_914e4c;
L_914e47: /* 914e47: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 914e48: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 914e4b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_914e4c: /* 914e4c: je 0x914e53 */
  if (zf) goto L_914e53;
L_914e4e: /* 914e4e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 914e50: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_914e53: /* 914e53: mov eax, ecx */
  eax = ecx;
/* 914e55: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914e56: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914e59: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914e5b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 914e5e: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 914e60: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 914e61: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 914e63: jne 0x914e10 */
  if (!zf) goto L_914e10;
L_914e65: /* 914e65: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 914e6c: mov edx, eax */
  edx = eax;
/* 914e6e: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 914e70: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 914e73: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 914e76: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 914e79: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 914e7c: je 0x914e83 */
  if (zf) goto L_914e83;
L_914e7e: /* 914e7e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 914e80: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_914e83: /* 914e83: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914e86: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 914e8a: mov ecx, eax */
  ecx = eax;
/* 914e8c: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 914e8e: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 914e91: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914e94: jne 0x914e9b */
  if (!zf) goto L_914e9b;
L_914e96: /* 914e96: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914e99: jmp 0x914ea3 */
  goto L_914ea3;
L_914e9b: /* 914e9b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914e9e: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914ea1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914ea3: /* 914ea3: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914ea6: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 914eaa: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 914ead: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914eaf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914eb0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914eb2: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 914eb4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 914eb7: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914eba: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914ebd: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 914ec1: mov eax, esi */
  eax = esi;
/* 914ec3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914ec6: mov ecx, eax */
  ecx = eax;
/* 914ec8: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914ecb: je 0x914ed5 */
  if (zf) goto L_914ed5;
L_914ecd: /* 914ecd: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 914ed0: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914ed3: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914ed5: /* 914ed5: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914ed8: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 914edc: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 914ee3: mov ecx, eax */
  ecx = eax;
/* 914ee5: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914ee8: je 0x914ef3 */
  if (zf) goto L_914ef3;
L_914eea: /* 914eea: lea eax, [ebx*4 + 0x40] */
  eax = (uint32_t)(ebx*4 + 0x40u);
/* 914ef1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914ef3: /* 914ef3: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914ef6: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 914efa: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* 914f01: mov ecx, eax */
  ecx = eax;
/* 914f03: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914f06: je 0x914f11 */
  if (zf) goto L_914f11;
L_914f08: /* 914f08: lea eax, [esi*4 + 0x40] */
  eax = (uint32_t)(esi*4 + 0x40u);
/* 914f0f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914f11: /* 914f11: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914f14: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 914f18: mov eax, esi */
  eax = esi;
/* 914f1a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 914f1c: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914f1f: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 914f22: jne 0x914f2b */
  if (!zf) goto L_914f2b;
L_914f24: /* 914f24: mov ecx, esi */
  ecx = esi;
/* 914f26: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 914f29: jmp 0x914f33 */
  goto L_914f33;
L_914f2b: /* 914f2b: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 914f2e: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 914f31: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_914f33: /* 914f33: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 914f36: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 914f3a: mov ecx, ebx */
  ecx = ebx;
/* 914f3c: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 914f3e: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 914f41: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914f44: jne 0x914f4d */
  if (!zf) goto L_914f4d;
L_914f46: /* 914f46: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 914f49: mov edx, ebx */
  edx = ebx;
/* 914f4b: jmp 0x914f55 */
  goto L_914f55;
L_914f4d: /* 914f4d: lea edx, [ebx + 2] */
  edx = (uint32_t)(ebx + 0x2u);
/* 914f50: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 914f53: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_914f55: /* 914f55: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 914f58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914f5a: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 914f5e: jne 0x914f65 */
  if (!zf) goto L_914f65;
L_914f60: /* 914f60: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 914f63: jmp 0x914f6d */
  goto L_914f6d;
L_914f65: /* 914f65: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 914f68: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 914f6b: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_914f6d: /* 914f6d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 914f71: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 914f78: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 914f7b: mov ecx, eax */
  ecx = eax;
/* 914f7d: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 914f80: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 914f84: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 914f88: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 914f8c: je 0x914f97 */
  if (zf) goto L_914f97;
L_914f8e: /* 914f8e: lea eax, [edi*4 + 0x10] */
  eax = (uint32_t)(edi*4 + 0x10u);
/* 914f95: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_914f97: /* 914f97: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914f9a: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 914f9e: mov eax, edi */
  eax = edi;
/* 914fa0: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 914fa3: lea esi, [eax*4 + 0x10] */
  esi = (uint32_t)(eax*4 + 0x10u);
/* 914faa: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914fab: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 914fae: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 914fb0: lea ecx, [edi*4 + 0x10] */
  ecx = (uint32_t)(edi*4 + 0x10u);
/* 914fb7: mov ebp, eax */
  ebp = eax;
/* 914fb9: sar ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 914fbc: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 914fc3: mov ecx, ebp */
  ecx = ebp;
/* 914fc5: and ecx, 0x8000000f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 914fcb: jns 0x914fd2 */
  if (!sf) goto L_914fd2;
L_914fcd: /* 914fcd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 914fce: or ecx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 914fd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  ecx = r;
  }
L_914fd2: /* 914fd2: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 914fd6: mov eax, ebp */
  eax = ebp;
/* 914fd8: je 0x914fdf */
  if (zf) goto L_914fdf;
L_914fda: /* 914fda: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914fdc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_914fdf: /* 914fdf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 914fe1: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 914fe8: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 914fec: mov eax, ebp */
  eax = ebp;
/* 914fee: je 0x914ff5 */
  if (zf) goto L_914ff5;
L_914ff0: /* 914ff0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 914ff2: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_914ff5: /* 914ff5: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 914ff8: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 914ffc: mov eax, edi */
  eax = edi;
/* 914ffe: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 914fff: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 915002: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915004: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 915007: mov edx, eax */
  edx = eax;
/* 915009: and edx, 0x8000000f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 91500f: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 915016: jns 0x91501d */
  if (!sf) goto L_91501d;
L_915018: /* 915018: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 915019: or edx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 91501c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  edx = r;
  }
L_91501d: /* 91501d: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 915021: mov ecx, eax */
  ecx = eax;
/* 915023: je 0x91502a */
  if (zf) goto L_91502a;
L_915025: /* 915025: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 915027: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_91502a: /* 91502a: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 91502d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91502f: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 915033: mov ecx, eax */
  ecx = eax;
/* 915035: je 0x91503c */
  if (zf) goto L_91503c;
L_915037: /* 915037: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 915039: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_91503c: /* 91503c: mov edi, dword ptr [esp + 0x84] */
  edi = R32((uint32_t)(esp + 0x84u));
/* 915043: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 91504a: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 915051: mov ecx, eax */
  ecx = eax;
/* 915053: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 915056: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 91505a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 91505e: jne 0x915064 */
  if (!zf) goto L_915064;
L_915060: /* 915060: mov edx, eax */
  edx = eax;
/* 915062: jmp 0x91506d */
  goto L_91506d;
L_915064: /* 915064: lea edx, [edi*4 + 0x40] */
  edx = (uint32_t)(edi*4 + 0x40u);
/* 91506b: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_91506d: /* 91506d: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915070: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 915072: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 915076: jne 0x91507c */
  if (!zf) goto L_91507c;
L_915078: /* 915078: mov edx, eax */
  edx = eax;
/* 91507a: jmp 0x915085 */
  goto L_915085;
L_91507c: /* 91507c: lea edx, [edi*4 + 0x40] */
  edx = (uint32_t)(edi*4 + 0x40u);
/* 915083: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_915085: /* 915085: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915088: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91508a: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 91508e: jne 0x915094 */
  if (!zf) goto L_915094;
L_915090: /* 915090: mov edx, eax */
  edx = eax;
/* 915092: jmp 0x91509d */
  goto L_91509d;
L_915094: /* 915094: lea edx, [edi*4 + 0x40] */
  edx = (uint32_t)(edi*4 + 0x40u);
/* 91509b: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_91509d: /* 91509d: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9150a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9150a2: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 9150a6: jne 0x9150ac */
  if (!zf) goto L_9150ac;
L_9150a8: /* 9150a8: mov edx, eax */
  edx = eax;
/* 9150aa: jmp 0x9150b5 */
  goto L_9150b5;
L_9150ac: /* 9150ac: lea edx, [edi*4 + 0x40] */
  edx = (uint32_t)(edi*4 + 0x40u);
/* 9150b3: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_9150b5: /* 9150b5: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9150b8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9150ba: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 9150be: jne 0x9150c4 */
  if (!zf) goto L_9150c4;
L_9150c0: /* 9150c0: mov edx, eax */
  edx = eax;
/* 9150c2: jmp 0x9150cd */
  goto L_9150cd;
L_9150c4: /* 9150c4: lea edx, [edi*4 + 0x40] */
  edx = (uint32_t)(edi*4 + 0x40u);
/* 9150cb: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_9150cd: /* 9150cd: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9150d0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9150d2: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 9150d6: jne 0x9150dc */
  if (!zf) goto L_9150dc;
L_9150d8: /* 9150d8: mov edx, eax */
  edx = eax;
/* 9150da: jmp 0x9150e5 */
  goto L_9150e5;
L_9150dc: /* 9150dc: lea edx, [edi*4 + 0x40] */
  edx = (uint32_t)(edi*4 + 0x40u);
/* 9150e3: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_9150e5: /* 9150e5: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9150e8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9150ea: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 9150ee: jne 0x9150f4 */
  if (!zf) goto L_9150f4;
L_9150f0: /* 9150f0: mov edx, eax */
  edx = eax;
/* 9150f2: jmp 0x9150fd */
  goto L_9150fd;
L_9150f4: /* 9150f4: lea edx, [edi*4 + 0x40] */
  edx = (uint32_t)(edi*4 + 0x40u);
/* 9150fb: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_9150fd: /* 9150fd: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 915104: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915107: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 91510b: mov edx, eax */
  edx = eax;
/* 91510d: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 915110: lea ebx, [edx*4] */
  ebx = (uint32_t)(edx*4);
/* 915117: mov edi, ebx */
  edi = ebx;
/* 915119: and edi, 0x3f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 91511c: je 0x915127 */
  if (zf) goto L_915127;
L_91511e: /* 91511e: lea ebx, [edx*4 + 0x40] */
  ebx = (uint32_t)(edx*4 + 0x40u);
/* 915125: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_915127: /* 915127: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91512a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91512c: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 915130: jne 0x915138 */
  if (!zf) goto L_915138;
L_915132: /* 915132: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 915136: jmp 0x915141 */
  goto L_915141;
L_915138: /* 915138: lea edx, [eax*4 + 0x40] */
  edx = (uint32_t)(eax*4 + 0x40u);
/* 91513f: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_915141: /* 915141: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 915145: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915148: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91514a: mov dword ptr [esp + 0x84], edx */
  W32((uint32_t)(esp + 0x84u), edx);
/* 915151: jne 0x915159 */
  if (!zf) goto L_915159;
L_915153: /* 915153: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 915157: jmp 0x915162 */
  goto L_915162;
L_915159: /* 915159: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 915160: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_915162: /* 915162: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 915166: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 915169: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91516b: mov ecx, ebp */
  ecx = ebp;
/* 91516d: je 0x915174 */
  if (zf) goto L_915174;
L_91516f: /* 91516f: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 915171: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_915174: /* 915174: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 915176: lea edi, [ecx*4] */
  edi = (uint32_t)(ecx*4);
/* 91517d: je 0x915184 */
  if (zf) goto L_915184;
L_91517f: /* 91517f: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 915181: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
L_915184: /* 915184: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 915188: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91518a: mov ecx, ebp */
  ecx = ebp;
/* 91518c: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 915193: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 91519a: je 0x9151a1 */
  if (zf) goto L_9151a1;
L_91519c: /* 91519c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91519e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_9151a1: /* 9151a1: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9151a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9151a6: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 9151ad: je 0x9151b6 */
  if (zf) goto L_9151b6;
L_9151af: /* 9151af: sub eax, dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9151b3: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_9151b6: /* 9151b6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 9151b9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151bb: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151bd: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151bf: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151c1: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151c3: mov ebx, dword ptr [esp + 0x84] */
  ebx = R32((uint32_t)(esp + 0x84u));
/* 9151ca: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 9151ce: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9151d2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151d4: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9151d8: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 9151dc: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151de: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 9151e2: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 9151e6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151e8: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9151ec: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151ee: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 9151f2: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151f4: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 9151f8: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9151fa: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 9151fe: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915200: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 915204: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915206: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 91520a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91520c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91520e: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915210: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 915217: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 91521b: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 91521f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915221: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 915225: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915227: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 91522b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91522d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91522f: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 915233: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915235: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 915239: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91523b: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 91523f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915241: mov esi, dword ptr [esp + 0x6c] */
  esi = R32((uint32_t)(esp + 0x6cu));
/* 915245: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915247: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 91524b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91524d: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 915251: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915253: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915255: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915257: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 915258: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91525a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91525b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91525d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91525e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915260: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 915261: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 915264: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_915270(void) {
  LOAD_REGS();
L_915270: /* 915270: ret  */
  esp += 4; SPILL(); return;
}

void f_915280(void) {
  LOAD_REGS();
L_915280: /* 915280: ret  */
  esp += 4; SPILL(); return;
}

void f_915290(void) {
  LOAD_REGS();
L_915290: /* 915290: ret  */
  esp += 4; SPILL(); return;
}

void f_9152a0(void) {
  LOAD_REGS();
L_9152a0: /* 9152a0: ret  */
  esp += 4; SPILL(); return;
}

void f_9152b0(void) {
  LOAD_REGS();
L_9152b0: /* 9152b0: ret  */
  esp += 4; SPILL(); return;
}

void f_9152c0(void) {
  LOAD_REGS();
L_9152c0: /* 9152c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9152c1: mov ebp, esp */
  ebp = esp;
/* 9152c3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9152c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9152c8: je 0x915332 */
  if (zf) goto L_915332;
L_9152ca: /* 9152ca: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9152cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9152ce: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9152d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9152d2: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9152d5: mov edi, eax */
  edi = eax;
L_9152d7: /* 9152d7: mov eax, 0xc0 */
  eax = 0xc0u;
/* 9152dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9152e0: /* 9152e0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9152e2: fld dword ptr [edx + eax - 0xb0] */
  { double v = F32((uint32_t)(edx + eax + 0xffffff50u)); FPUSH(v); }
/* 9152e9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9152ec: cmp eax, 0xcc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9152f1: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 9152f4: fstp dword ptr [edx + eax - 4] */
  WF32((uint32_t)(edx + eax + 0xfffffffcu), ST0); FPOP();
/* 9152f8: jl 0x9152e0 */
  if ((sf != of)) goto L_9152e0;
L_9152fa: /* 9152fa: mov edx, 0xd0 */
  edx = 0xd0u;
/* 9152ff: nop  */
L_915300: /* 915300: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 915302: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 915305: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915308: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91530b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91530e: cmp edx, 0xdc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 915314: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 915317: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* 91531a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91531c: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 91531f: fmul dword ptr [ecx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 915322: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915324: fstp dword ptr [eax + edx - 4] */
  WF32((uint32_t)(eax + edx + 0xfffffffcu), ST0); FPOP();
/* 915328: jl 0x915300 */
  if ((sf != of)) goto L_915300;
L_91532a: /* 91532a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91532d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91532e: jne 0x9152d7 */
  if (!zf) goto L_9152d7;
L_915330: /* 915330: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 915331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_915332: /* 915332: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 915333: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_915340(void) {
  LOAD_REGS();
L_915340: /* 915340: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 915341: mov ebx, esp */
  ebx = esp;
/* 915343: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 915344: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 915347: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91534a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91534b: mov ebp, esp */
  ebp = esp;
/* 91534d: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 915350: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 915353: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 915356: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 915359: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 91535c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91535d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 915360: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915362: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 915365: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 915367: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 915368: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 915369: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 91536c: je 0x9154ea */
  if (zf) goto L_9154ea;
L_915372: /* 915372: mov edi, dword ptr [ebx + 0x24] */
  edi = R32((uint32_t)(ebx + 0x24u));
/* 915375: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* 915378: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 91537b: nop  */
/* 91537c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_915380: /* 915380: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915383: mov dword ptr [ebp - 8], 0 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x0u);
/* 91538a: je 0x9154af */
  if (zf) goto L_9154af;
L_915390: /* 915390: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 915393: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915396: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 915398: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 91539b: nop  */
/* 91539c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9153a0: /* 9153a0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9153a2: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9153a5: je 0x915497 */
  if (zf) goto L_915497;
L_9153ab: /* 9153ab: mov eax, dword ptr [eax + esi] */
  eax = R32((uint32_t)(eax + esi));
/* 9153ae: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 9153b1: movaps xmm1, xmmword ptr [ecx - 0x20] */
  guest_unsupported(0x9153b1); /* movaps xmm1, xmmword ptr [ecx - 0x20] */
/* 9153b5: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9153b8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9153ba: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 9153bd: mov edx, dword ptr [edi + edx*4] */
  edx = R32((uint32_t)(edi + edx*4));
/* 9153c0: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9153c3: movaps xmm0, xmmword ptr [edi] */
  guest_unsupported(0x9153c3); /* movaps xmm0, xmmword ptr [edi] */
/* 9153c6: movaps xmm2, xmm1 */
  guest_unsupported(0x9153c6); /* movaps xmm2, xmm1 */
/* 9153c9: movaps xmm1, xmm0 */
  guest_unsupported(0x9153c9); /* movaps xmm1, xmm0 */
/* 9153cc: mulps xmm1, xmm2 */
  guest_unsupported(0x9153cc); /* mulps xmm1, xmm2 */
/* 9153cf: movaps xmm2, xmmword ptr [ecx - 0x10] */
  guest_unsupported(0x9153cf); /* movaps xmm2, xmmword ptr [ecx - 0x10] */
/* 9153d3: lea edi, [ecx - 0x20] */
  edi = (uint32_t)(ecx + 0xffffffe0u);
/* 9153d6: movaps xmm4, xmm0 */
  guest_unsupported(0x9153d6); /* movaps xmm4, xmm0 */
/* 9153d9: mulps xmm4, xmm2 */
  guest_unsupported(0x9153d9); /* mulps xmm4, xmm2 */
/* 9153dc: movaps xmm2, xmmword ptr [ecx] */
  guest_unsupported(0x9153dc); /* movaps xmm2, xmmword ptr [ecx] */
/* 9153df: movaps xmm5, xmm2 */
  guest_unsupported(0x9153df); /* movaps xmm5, xmm2 */
/* 9153e2: lea edi, [ecx - 0x10] */
  edi = (uint32_t)(ecx + 0xfffffff0u);
/* 9153e5: movaps xmm2, xmm0 */
  guest_unsupported(0x9153e5); /* movaps xmm2, xmm0 */
/* 9153e8: mulps xmm2, xmm5 */
  guest_unsupported(0x9153e8); /* mulps xmm2, xmm5 */
/* 9153eb: movaps xmm5, xmm4 */
  guest_unsupported(0x9153eb); /* movaps xmm5, xmm4 */
/* 9153ee: movhlps xmm5, xmm1 */
  guest_unsupported(0x9153ee); /* movhlps xmm5, xmm1 */
/* 9153f1: movlhps xmm1, xmm4 */
  guest_unsupported(0x9153f1); /* movlhps xmm1, xmm4 */
/* 9153f4: addps xmm1, xmm5 */
  guest_unsupported(0x9153f4); /* addps xmm1, xmm5 */
/* 9153f7: xorps xmm3, xmm3 */
  guest_unsupported(0x9153f7); /* xorps xmm3, xmm3 */
/* 9153fa: movaps xmm4, xmm3 */
  guest_unsupported(0x9153fa); /* movaps xmm4, xmm3 */
/* 9153fd: movhlps xmm4, xmm2 */
  guest_unsupported(0x9153fd); /* movhlps xmm4, xmm2 */
/* 915400: movlhps xmm2, xmm3 */
  guest_unsupported(0x915400); /* movlhps xmm2, xmm3 */
/* 915403: addps xmm2, xmm4 */
  guest_unsupported(0x915403); /* addps xmm2, xmm4 */
/* 915406: movaps xmm4, xmm1 */
  guest_unsupported(0x915406); /* movaps xmm4, xmm1 */
/* 915409: shufps xmm1, xmm2, 0xdd */
  guest_unsupported(0x915409); /* shufps xmm1, xmm2, 0xdd */
/* 91540d: shufps xmm4, xmm2, 0x88 */
  guest_unsupported(0x91540d); /* shufps xmm4, xmm2, 0x88 */
/* 915411: movaps xmm2, xmmword ptr [edx + 0x10] */
  guest_unsupported(0x915411); /* movaps xmm2, xmmword ptr [edx + 0x10] */
/* 915415: addps xmm1, xmm4 */
  guest_unsupported(0x915415); /* addps xmm1, xmm4 */
/* 915418: addps xmm2, xmm1 */
  guest_unsupported(0x915418); /* addps xmm2, xmm1 */
/* 91541b: movaps xmmword ptr [edx + 0x10], xmm2 */
  guest_unsupported(0x91541b); /* movaps xmmword ptr [edx + 0x10], xmm2 */
/* 91541f: movaps xmm2, xmmword ptr [eax] */
  guest_unsupported(0x91541f); /* movaps xmm2, xmmword ptr [eax] */
/* 915422: addps xmm2, xmm1 */
  guest_unsupported(0x915422); /* addps xmm2, xmm1 */
/* 915425: movaps xmmword ptr [eax], xmm2 */
  guest_unsupported(0x915425); /* movaps xmmword ptr [eax], xmm2 */
/* 915428: movaps xmm1, xmmword ptr [ecx + 0x10] */
  guest_unsupported(0x915428); /* movaps xmm1, xmmword ptr [ecx + 0x10] */
/* 91542c: movaps xmm2, xmm1 */
  guest_unsupported(0x91542c); /* movaps xmm2, xmm1 */
/* 91542f: movaps xmm1, xmm0 */
  guest_unsupported(0x91542f); /* movaps xmm1, xmm0 */
/* 915432: mulps xmm1, xmm2 */
  guest_unsupported(0x915432); /* mulps xmm1, xmm2 */
/* 915435: movaps xmm2, xmmword ptr [ecx + 0x20] */
  guest_unsupported(0x915435); /* movaps xmm2, xmmword ptr [ecx + 0x20] */
/* 915439: lea edi, [ecx + 0x10] */
  edi = (uint32_t)(ecx + 0x10u);
/* 91543c: movaps xmm4, xmm2 */
  guest_unsupported(0x91543c); /* movaps xmm4, xmm2 */
/* 91543f: movaps xmm2, xmm0 */
  guest_unsupported(0x91543f); /* movaps xmm2, xmm0 */
/* 915442: mulps xmm2, xmm4 */
  guest_unsupported(0x915442); /* mulps xmm2, xmm4 */
/* 915445: movaps xmm4, xmmword ptr [ecx + 0x30] */
  guest_unsupported(0x915445); /* movaps xmm4, xmmword ptr [ecx + 0x30] */
/* 915449: lea edi, [ecx + 0x20] */
  edi = (uint32_t)(ecx + 0x20u);
/* 91544c: mulps xmm0, xmm4 */
  guest_unsupported(0x91544c); /* mulps xmm0, xmm4 */
/* 91544f: lea edi, [ecx + 0x30] */
  edi = (uint32_t)(ecx + 0x30u);
/* 915452: mov edi, dword ptr [ebx + 0x24] */
  edi = R32((uint32_t)(ebx + 0x24u));
/* 915455: movaps xmm4, xmm2 */
  guest_unsupported(0x915455); /* movaps xmm4, xmm2 */
/* 915458: movhlps xmm4, xmm1 */
  guest_unsupported(0x915458); /* movhlps xmm4, xmm1 */
/* 91545b: movlhps xmm1, xmm2 */
  guest_unsupported(0x91545b); /* movlhps xmm1, xmm2 */
/* 91545e: movaps xmm2, xmm3 */
  guest_unsupported(0x91545e); /* movaps xmm2, xmm3 */
/* 915461: movhlps xmm2, xmm0 */
  guest_unsupported(0x915461); /* movhlps xmm2, xmm0 */
/* 915464: movlhps xmm0, xmm3 */
  guest_unsupported(0x915464); /* movlhps xmm0, xmm3 */
/* 915467: addps xmm0, xmm2 */
  guest_unsupported(0x915467); /* addps xmm0, xmm2 */
/* 91546a: addps xmm1, xmm4 */
  guest_unsupported(0x91546a); /* addps xmm1, xmm4 */
/* 91546d: movaps xmm2, xmm1 */
  guest_unsupported(0x91546d); /* movaps xmm2, xmm1 */
/* 915470: shufps xmm2, xmm0, 0x88 */
  guest_unsupported(0x915470); /* shufps xmm2, xmm0, 0x88 */
/* 915474: shufps xmm1, xmm0, 0xdd */
  guest_unsupported(0x915474); /* shufps xmm1, xmm0, 0xdd */
/* 915478: movaps xmm0, xmmword ptr [edx + 0x20] */
  guest_unsupported(0x915478); /* movaps xmm0, xmmword ptr [edx + 0x20] */
/* 91547c: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91547f: addps xmm1, xmm2 */
  guest_unsupported(0x91547f); /* addps xmm1, xmm2 */
/* 915482: addps xmm0, xmm1 */
  guest_unsupported(0x915482); /* addps xmm0, xmm1 */
/* 915485: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915488: movaps xmmword ptr [edx], xmm0 */
  guest_unsupported(0x915488); /* movaps xmmword ptr [edx], xmm0 */
/* 91548b: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0x91548b); /* movaps xmm0, xmmword ptr [eax] */
/* 91548e: addps xmm0, xmm1 */
  guest_unsupported(0x91548e); /* addps xmm0, xmm1 */
/* 915491: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x915491); /* movaps xmmword ptr [eax], xmm0 */
/* 915494: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_915497: /* 915497: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 91549a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91549d: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9154a0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9154a1: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9154a3: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 9154a6: jne 0x9153a0 */
  if (!zf) goto L_9153a0;
L_9154ac: /* 9154ac: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
L_9154af: /* 9154af: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9154b2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9154b4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9154b7: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9154ba: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 9154bd: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9154c0: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 9154c3: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9154c6: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9154c9: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 9154cc: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9154cf: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9154d1: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9154d4: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9154d7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9154d8: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 9154db: mov dword ptr [ebx + 0x1c], esi */
  W32((uint32_t)(ebx + 0x1cu), esi);
/* 9154de: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
/* 9154e1: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 9154e4: jne 0x915380 */
  if (!zf) goto L_915380;
L_9154ea: /* 9154ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9154eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9154ec: mov esp, ebp */
  esp = ebp;
/* 9154ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9154ef: mov esp, ebx */
  esp = ebx;
/* 9154f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9154f2: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_915500(void) {
  LOAD_REGS();
L_915500: /* 915500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 915501: mov ebp, esp */
  ebp = esp;
/* 915503: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 915506: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 915509: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91550a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91550b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 91550e: xor ebx, ebx */
  ebx = 0;
/* 915510: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915512: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 915513: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 915516: je 0x915796 */
  if (zf) goto L_915796;
L_91551c: /* 91551c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 91551f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 915522: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915525: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 915528: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 91552b: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 91552e: mov edi, edi */
  edi = edi;
L_915530: /* 915530: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 915532: test byte ptr [ecx + 0xc], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0xcu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 915536: je 0x9155fc */
  if (zf) goto L_9155fc;
L_91553c: /* 91553c: lea ebx, [ecx + 0x40] */
  ebx = (uint32_t)(ecx + 0x40u);
/* 91553f: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 915542: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 915545: mov dword ptr [ebp - 8], 3 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x3u);
/* 91554c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_915550: /* 915550: mov eax, ebx */
  eax = ebx;
/* 915552: mov esi, 3 */
  esi = 0x3u;
L_915557: /* 915557: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 91555a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91555d: fmul dword ptr [ecx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 915560: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915563: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 915564: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 915567: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 91556a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91556c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 91556e: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 915571: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915573: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 915576: jne 0x915557 */
  if (!zf) goto L_915557;
L_915578: /* 915578: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 91557b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91557e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91557f: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 915582: jne 0x915550 */
  if (!zf) goto L_915550;
L_915584: /* 915584: xor edx, edx */
  edx = 0;
L_915586: /* 915586: fld dword ptr [ebp + edx - 0x4c] */
  { double v = F32((uint32_t)(ebp + edx + 0xffffffb4u)); FPUSH(v); }
/* 91558a: lea ecx, [ebp + edx - 0x78] */
  ecx = (uint32_t)(ebp + edx + 0xffffff88u);
/* 91558e: fld dword ptr [ebp + edx - 0x50] */
  { double v = F32((uint32_t)(ebp + edx + 0xffffffb0u)); FPUSH(v); }
/* 915592: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 915595: fld dword ptr [ebp + edx - 0x54] */
  { double v = F32((uint32_t)(ebp + edx + 0xffffffacu)); FPUSH(v); }
/* 915599: mov esi, 3 */
  esi = 0x3u;
/* 91559e: mov edi, edi */
  edi = edi;
L_9155a0: /* 9155a0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9155a2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9155a5: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 9155a8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9155ab: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9155ac: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9155ae: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 9155b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9155b3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9155b5: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 9155b8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9155ba: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 9155bd: jne 0x9155a0 */
  if (!zf) goto L_9155a0;
L_9155bf: /* 9155bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9155c1: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9155c4: cmp edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9155c7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9155c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9155cb: jl 0x915586 */
  if ((sf != of)) goto L_915586;
L_9155cd: /* 9155cd: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 9155d0: xor eax, eax */
  eax = 0;
/* 9155d2: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_9155d5: /* 9155d5: mov edx, dword ptr [ebp + eax*4 - 0x78] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xffffff88u));
/* 9155d9: mov dword ptr [ecx - 0x20], edx */
  W32((uint32_t)(ecx + 0xffffffe0u), edx);
/* 9155dc: mov edx, dword ptr [ebp + eax*4 - 0x6c] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xffffff94u));
/* 9155e0: mov dword ptr [ecx - 0x10], edx */
  W32((uint32_t)(ecx + 0xfffffff0u), edx);
/* 9155e3: mov edx, dword ptr [ebp + eax*4 - 0x60] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xffffffa0u));
/* 9155e7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9155e9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9155ea: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9155ed: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9155f0: jl 0x9155d5 */
  if ((sf != of)) goto L_9155d5;
L_9155f2: /* 9155f2: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9155f5: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 9155f8: xor ebx, ebx */
  ebx = 0;
/* 9155fa: jmp 0x915643 */
  goto L_915643;
L_9155fc: /* 9155fc: fld dword ptr [ecx + 0x60] */
  { double v = F32((uint32_t)(ecx + 0x60u)); FPUSH(v); }
/* 9155ff: fcom dword ptr [ecx + 0x74] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x74u)));
/* 915602: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 915604: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 915607: jp 0x91560e */
  if (pf) goto L_91560e;
L_915609: /* 915609: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91560b: fld dword ptr [ecx + 0x74] */
  { double v = F32((uint32_t)(ecx + 0x74u)); FPUSH(v); }
L_91560e: /* 91560e: fcom dword ptr [ecx + 0x88] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x88u)));
/* 915614: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 915616: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 915619: jp 0x915623 */
  if (pf) goto L_915623;
L_91561b: /* 91561b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91561d: fld dword ptr [ecx + 0x88] */
  { double v = F32((uint32_t)(ecx + 0x88u)); FPUSH(v); }
L_915623: /* 915623: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 915629: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 91562c: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 91562f: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 915632: mov dword ptr [edx - 4], ebx */
  W32((uint32_t)(edx + 0xfffffffcu), ebx);
/* 915635: mov dword ptr [edx - 0xc], ebx */
  W32((uint32_t)(edx + 0xfffffff4u), ebx);
/* 915638: mov dword ptr [edx - 0x10], ebx */
  W32((uint32_t)(edx + 0xfffffff0u), ebx);
/* 91563b: fst dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0);
/* 91563e: fst dword ptr [edx] */
  WF32((uint32_t)(edx), ST0);
/* 915640: fstp dword ptr [edx - 0x14] */
  WF32((uint32_t)(edx + 0xffffffecu), ST0); FPOP();
L_915643: /* 915643: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 915645: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 915648: mov dword ptr [edx - 8], ecx */
  W32((uint32_t)(edx + 0xfffffff8u), ecx);
/* 91564b: mov dword ptr [edx + 0x18], ebx */
  W32((uint32_t)(edx + 0x18u), ebx);
/* 91564e: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 915651: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 915653: test byte ptr [eax + 0xc], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 915657: je 0x915777 */
  if (zf) goto L_915777;
L_91565d: /* 91565d: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 915660: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 915663: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 915669: xor edx, edx */
  edx = 0;
/* 91566b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 91566e: lea ecx, [eax + 0x70] */
  ecx = (uint32_t)(eax + 0x70u);
/* 915671: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 915677: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915679: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 91567b: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 915681: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915683: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 915686: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 91568c: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 91568f: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 915695: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915697: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 915699: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 91569f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9156a1: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 9156a4: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 9156aa: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 9156ad: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 9156b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9156b5: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 9156b8: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 9156be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_9156c0: /* 9156c0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9156c2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9156c3: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 9156c6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9156c9: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9156cc: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9156ce: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* 9156d1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9156d3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9156d5: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 9156d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9156da: fstp dword ptr [ebp + edx*4 - 0x28] */
  WF32((uint32_t)(ebp + edx*4 + 0xffffffd8u), ST0); FPOP();
/* 9156de: jl 0x9156c0 */
  if ((sf != of)) goto L_9156c0;
L_9156e0: /* 9156e0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9156e2: xor edx, edx */
  edx = 0;
/* 9156e4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9156e6: mov ecx, esi */
  ecx = esi;
/* 9156e8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9156ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9156f0: /* 9156f0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 9156f3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9156f4: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 9156f7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9156fa: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9156fd: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 915700: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* 915703: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915705: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 915708: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91570b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91570d: fstp dword ptr [ebp + edx*4 - 0x1c] */
  WF32((uint32_t)(ebp + edx*4 + 0xffffffe4u), ST0); FPOP();
/* 915711: jl 0x9156f0 */
  if ((sf != of)) goto L_9156f0;
L_915713: /* 915713: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 915716: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 915719: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 91571f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 915722: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 915725: mov esi, ecx */
  esi = ecx;
/* 915727: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 91572d: xor ebx, ebx */
  ebx = 0;
/* 91572f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 915731: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 915734: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 91573a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 91573d: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 915743: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 915745: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 915748: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 91574e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 915751: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 915757: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 915759: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 91575c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91575e: fadd dword ptr [eax + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x20u)));
/* 915761: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 915764: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 915766: fadd dword ptr [eax + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x24u)));
/* 915769: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 91576c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 91576e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 915771: fadd dword ptr [eax + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x28u)));
/* 915774: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
L_915777: /* 915777: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 91577a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91577d: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915780: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 915783: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 915784: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 915787: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 91578a: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 91578d: jne 0x915530 */
  if (!zf) goto L_915530;
L_915793: /* 915793: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
L_915796: /* 915796: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915798: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 91579e: fdiv dword ptr [ebp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x1cu)));
/* 9157a1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9157a4: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
/* 9157a7: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 9157aa: je 0x91589a */
  if (zf) goto L_91589a;
L_9157b0: /* 9157b0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9157b3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 9157b6: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9157b9: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 9157bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9157c0: /* 9157c0: mov eax, 0x90 */
  eax = 0x90u;
L_9157c5: /* 9157c5: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 9157c7: fld dword ptr [eax + esi - 0x80] */
  { double v = F32((uint32_t)(eax + esi + 0xffffff80u)); FPUSH(v); }
/* 9157cb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9157ce: cmp eax, 0x9c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9157d3: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 9157d6: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 9157d9: fmul dword ptr [eax + esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi + 0xfffffffcu)));
/* 9157dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9157df: fstp dword ptr [edx + eax - 0xa4] */
  WF32((uint32_t)(edx + eax + 0xffffff5cu), ST0); FPOP();
/* 9157e6: jne 0x9157c5 */
  if (!zf) goto L_9157c5;
L_9157e8: /* 9157e8: mov dword ptr [edx - 4], 0 */
  W32((uint32_t)(edx + 0xfffffffcu), 0x0u);
/* 9157ef: mov eax, 0xa0 */
  eax = 0xa0u;
L_9157f4: /* 9157f4: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 9157f6: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 9157f9: fmul dword ptr [eax + esi] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi)));
/* 9157fc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9157ff: cmp eax, 0xac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915804: fstp dword ptr [eax + edx - 0xa4] */
  WF32((uint32_t)(eax + edx + 0xffffff5cu), ST0); FPOP();
/* 91580b: jne 0x9157f4 */
  if (!zf) goto L_9157f4;
L_91580d: /* 91580d: xor eax, eax */
  eax = 0;
/* 91580f: mov esi, edx */
  esi = edx;
L_915811: /* 915811: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 915814: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 915816: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 915819: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91581a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91581d: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915820: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 915823: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 915826: jne 0x915811 */
  if (!zf) goto L_915811;
L_915828: /* 915828: mov esi, edi */
  esi = edi;
/* 91582a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 91582c: mov eax, edx */
  eax = edx;
/* 91582e: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 915831: mov dword ptr [ebp + 8], 3 */
  W32((uint32_t)(ebp + 0x8u), 0x3u);
L_915838: /* 915838: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 91583a: fld dword ptr [esi + eax] */
  { double v = F32((uint32_t)(esi + eax)); FPUSH(v); }
/* 91583d: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 915840: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 915843: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915846: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 915847: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 91584a: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 91584d: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 915850: jne 0x915838 */
  if (!zf) goto L_915838;
L_915852: /* 915852: lea esi, [edi + 0x20] */
  esi = (uint32_t)(edi + 0x20u);
/* 915855: mov eax, edx */
  eax = edx;
/* 915857: mov edi, 3 */
  edi = 0x3u;
/* 91585c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_915860: /* 915860: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 915862: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 915865: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 915868: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 91586b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91586e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91586f: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 915872: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 915875: jne 0x915860 */
  if (!zf) goto L_915860;
L_915877: /* 915877: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 91587a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 91587d: mov dword ptr [edx + 0xc], 0 */
  W32((uint32_t)(edx + 0xcu), 0x0u);
/* 915884: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 915887: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91588a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91588d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91588e: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
/* 915891: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 915894: jne 0x9157c0 */
  if (!zf) goto L_9157c0;
L_91589a: /* 91589a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91589b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91589c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91589d: mov esp, ebp */
  esp = ebp;
/* 91589f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9158a0: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_9158b0(void) {
  LOAD_REGS();
L_9158b0: /* 9158b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9158b1: mov ebx, esp */
  ebx = esp;
/* 9158b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9158b4: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9158b7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9158ba: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9158bb: mov ebp, esp */
  ebp = esp;
/* 9158bd: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9158c0: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 9158c3: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* 9158c6: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 9158c9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9158cc: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 9158cf: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* 9158d2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 9158d5: movss xmm0, dword ptr [eax] */
  guest_unsupported(0x9158d5); /* movss xmm0, dword ptr [eax] */
/* 9158d9: shufps xmm0, xmm0, 0 */
  guest_unsupported(0x9158d9); /* shufps xmm0, xmm0, 0 */
/* 9158dd: rcpps xmm1, xmm0 */
  guest_unsupported(0x9158dd); /* rcpps xmm1, xmm0 */
/* 9158e0: movaps xmm2, xmm1 */
  guest_unsupported(0x9158e0); /* movaps xmm2, xmm1 */
/* 9158e3: mulps xmm2, xmm0 */
  guest_unsupported(0x9158e3); /* mulps xmm2, xmm0 */
/* 9158e6: mulps xmm2, xmm1 */
  guest_unsupported(0x9158e6); /* mulps xmm2, xmm1 */
/* 9158e9: movaps xmm0, xmm1 */
  guest_unsupported(0x9158e9); /* movaps xmm0, xmm1 */
/* 9158ec: addps xmm0, xmm1 */
  guest_unsupported(0x9158ec); /* addps xmm0, xmm1 */
/* 9158ef: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 9158f2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 9158f5: movaps xmm1, xmm0 */
  guest_unsupported(0x9158f5); /* movaps xmm1, xmm0 */
/* 9158f8: movss xmm0, dword ptr [eax] */
  guest_unsupported(0x9158f8); /* movss xmm0, dword ptr [eax] */
/* 9158fc: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 9158ff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 915900: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 915903: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915905: subps xmm1, xmm2 */
  guest_unsupported(0x915905); /* subps xmm1, xmm2 */
/* 915908: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91590b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91590d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91590e: movaps xmm2, xmm0 */
  guest_unsupported(0x91590e); /* movaps xmm2, xmm0 */
/* 915911: shufps xmm2, xmm0, 0 */
  guest_unsupported(0x915911); /* shufps xmm2, xmm0, 0 */
/* 915915: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 915916: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 915919: movaps xmmword ptr [ebp - 0x60], xmm1 */
  guest_unsupported(0x915919); /* movaps xmmword ptr [ebp - 0x60], xmm1 */
/* 91591d: movaps xmmword ptr [ebp - 0x70], xmm2 */
  guest_unsupported(0x91591d); /* movaps xmmword ptr [ebp - 0x70], xmm2 */
/* 915921: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 915924: je 0x915b37 */
  if (zf) goto L_915b37;
L_91592a: /* 91592a: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 91592d: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 915930: mov esi, dword ptr [ebx + 0x14] */
  esi = R32((uint32_t)(ebx + 0x14u));
/* 915933: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 915936: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 915939: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91593b: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 91593e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 915941: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 915943: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 915945: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 915948: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 91594b: xorps xmm0, xmm0 */
  guest_unsupported(0x91594b); /* xorps xmm0, xmm0 */
/* 91594e: movaps xmmword ptr [ebp - 0x50], xmm0 */
  guest_unsupported(0x91594e); /* movaps xmmword ptr [ebp - 0x50], xmm0 */
/* 915952: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 915955: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 915958: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 91595b: nop  */
/* 91595c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_915960: /* 915960: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 915963: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915966: movaps xmm0, xmmword ptr [ebp - 0x50] */
  guest_unsupported(0x915966); /* movaps xmm0, xmmword ptr [ebp - 0x50] */
/* 91596a: movaps xmmword ptr [ebp - 0x40], xmm0 */
  guest_unsupported(0x91596a); /* movaps xmmword ptr [ebp - 0x40], xmm0 */
/* 91596e: mov dword ptr [ebp - 0x10], 0 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x0u);
/* 915975: je 0x915ace */
  if (zf) goto L_915ace;
L_91597b: /* 91597b: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91597e: lea edi, [eax + 0x30] */
  edi = (uint32_t)(eax + 0x30u);
/* 915981: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 915984: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 915987: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91598a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91598c: lea esi, [ecx + 0x20] */
  esi = (uint32_t)(ecx + 0x20u);
/* 91598f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_915992: /* 915992: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 915995: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 915997: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91599a: je 0x915aa3 */
  if (zf) goto L_915aa3;
L_9159a0: /* 9159a0: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 9159a3: movaps xmm0, xmmword ptr [edi - 0x30] */
  guest_unsupported(0x9159a3); /* movaps xmm0, xmmword ptr [edi - 0x30] */
/* 9159a7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 9159aa: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9159ad: movaps xmm1, xmmword ptr [eax + edx] */
  guest_unsupported(0x9159ad); /* movaps xmm1, xmmword ptr [eax + edx] */
/* 9159b1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9159b3: movaps xmm2, xmm1 */
  guest_unsupported(0x9159b3); /* movaps xmm2, xmm1 */
/* 9159b6: shufps xmm2, xmm1, 0xff */
  guest_unsupported(0x9159b6); /* shufps xmm2, xmm1, 0xff */
/* 9159ba: mulps xmm0, xmm2 */
  guest_unsupported(0x9159ba); /* mulps xmm0, xmm2 */
/* 9159bd: movaps xmmword ptr [esi - 0x20], xmm0 */
  guest_unsupported(0x9159bd); /* movaps xmmword ptr [esi - 0x20], xmm0 */
/* 9159c1: movaps xmm0, xmmword ptr [edi - 0x20] */
  guest_unsupported(0x9159c1); /* movaps xmm0, xmmword ptr [edi - 0x20] */
/* 9159c5: mulps xmm0, xmm2 */
  guest_unsupported(0x9159c5); /* mulps xmm0, xmm2 */
/* 9159c8: movaps xmmword ptr [esi - 0x10], xmm0 */
  guest_unsupported(0x9159c8); /* movaps xmmword ptr [esi - 0x10], xmm0 */
/* 9159cc: lea edx, [esi - 0x20] */
  edx = (uint32_t)(esi + 0xffffffe0u);
/* 9159cf: lea edx, [edi - 0x20] */
  edx = (uint32_t)(edi + 0xffffffe0u);
/* 9159d2: lea edx, [esi - 0x10] */
  edx = (uint32_t)(esi + 0xfffffff0u);
/* 9159d5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9159d8: movaps xmm0, xmmword ptr [edx + esi] */
  guest_unsupported(0x9159d8); /* movaps xmm0, xmmword ptr [edx + esi] */
/* 9159dc: mulps xmm0, xmm2 */
  guest_unsupported(0x9159dc); /* mulps xmm0, xmm2 */
/* 9159df: movaps xmmword ptr [esi], xmm0 */
  guest_unsupported(0x9159df); /* movaps xmmword ptr [esi], xmm0 */
/* 9159e2: movaps xmm7, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x9159e2); /* movaps xmm7, xmmword ptr [eax + 0x10] */
/* 9159e6: movaps xmm2, xmmword ptr [edi] */
  guest_unsupported(0x9159e6); /* movaps xmm2, xmmword ptr [edi] */
/* 9159e9: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9159eb: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 9159ee: movaps xmm0, xmm1 */
  guest_unsupported(0x9159ee); /* movaps xmm0, xmm1 */
/* 9159f1: shufps xmm0, xmm1, 0 */
  guest_unsupported(0x9159f1); /* shufps xmm0, xmm1, 0 */
/* 9159f5: movaps xmm5, xmm1 */
  guest_unsupported(0x9159f5); /* movaps xmm5, xmm1 */
/* 9159f8: shufps xmm5, xmm1, 0x55 */
  guest_unsupported(0x9159f8); /* shufps xmm5, xmm1, 0x55 */
/* 9159fc: movaps xmm6, xmm1 */
  guest_unsupported(0x9159fc); /* movaps xmm6, xmm1 */
/* 9159ff: shufps xmm6, xmm1, 0xaa */
  guest_unsupported(0x9159ff); /* shufps xmm6, xmm1, 0xaa */
/* 915a03: movaps xmm1, xmmword ptr [edi + 0x10] */
  guest_unsupported(0x915a03); /* movaps xmm1, xmmword ptr [edi + 0x10] */
/* 915a07: movaps xmm3, xmm2 */
  guest_unsupported(0x915a07); /* movaps xmm3, xmm2 */
/* 915a0a: mulps xmm3, xmm0 */
  guest_unsupported(0x915a0a); /* mulps xmm3, xmm0 */
/* 915a0d: lea edx, [edi + 0x10] */
  edx = (uint32_t)(edi + 0x10u);
/* 915a10: movaps xmm0, xmm1 */
  guest_unsupported(0x915a10); /* movaps xmm0, xmm1 */
/* 915a13: mulps xmm0, xmm5 */
  guest_unsupported(0x915a13); /* mulps xmm0, xmm5 */
/* 915a16: addps xmm3, xmm0 */
  guest_unsupported(0x915a16); /* addps xmm3, xmm0 */
/* 915a19: movaps xmm4, xmm2 */
  guest_unsupported(0x915a19); /* movaps xmm4, xmm2 */
/* 915a1c: mulps xmm4, xmm5 */
  guest_unsupported(0x915a1c); /* mulps xmm4, xmm5 */
/* 915a1f: movaps xmm0, xmm7 */
  guest_unsupported(0x915a1f); /* movaps xmm0, xmm7 */
/* 915a22: shufps xmm0, xmm7, 0x55 */
  guest_unsupported(0x915a22); /* shufps xmm0, xmm7, 0x55 */
/* 915a26: movaps xmm5, xmm1 */
  guest_unsupported(0x915a26); /* movaps xmm5, xmm1 */
/* 915a29: mulps xmm5, xmm0 */
  guest_unsupported(0x915a29); /* mulps xmm5, xmm0 */
/* 915a2c: movaps xmm0, xmmword ptr [eax + 0x20] */
  guest_unsupported(0x915a2c); /* movaps xmm0, xmmword ptr [eax + 0x20] */
/* 915a30: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915a33: addps xmm4, xmm5 */
  guest_unsupported(0x915a33); /* addps xmm4, xmm5 */
/* 915a36: movaps xmm5, xmm7 */
  guest_unsupported(0x915a36); /* movaps xmm5, xmm7 */
/* 915a39: shufps xmm5, xmm7, 0xaa */
  guest_unsupported(0x915a39); /* shufps xmm5, xmm7, 0xaa */
/* 915a3d: movaps xmm7, xmm0 */
  guest_unsupported(0x915a3d); /* movaps xmm7, xmm0 */
/* 915a40: mulps xmm1, xmm5 */
  guest_unsupported(0x915a40); /* mulps xmm1, xmm5 */
/* 915a43: shufps xmm7, xmm0, 0xaa */
  guest_unsupported(0x915a43); /* shufps xmm7, xmm0, 0xaa */
/* 915a47: mulps xmm2, xmm6 */
  guest_unsupported(0x915a47); /* mulps xmm2, xmm6 */
/* 915a4a: addps xmm2, xmm1 */
  guest_unsupported(0x915a4a); /* addps xmm2, xmm1 */
/* 915a4d: movaps xmm1, xmmword ptr [edi + 0x20] */
  guest_unsupported(0x915a4d); /* movaps xmm1, xmmword ptr [edi + 0x20] */
/* 915a51: lea edx, [edi + 0x20] */
  edx = (uint32_t)(edi + 0x20u);
/* 915a54: movaps xmm0, xmm1 */
  guest_unsupported(0x915a54); /* movaps xmm0, xmm1 */
/* 915a57: mulps xmm0, xmm7 */
  guest_unsupported(0x915a57); /* mulps xmm0, xmm7 */
/* 915a5a: addps xmm2, xmm0 */
  guest_unsupported(0x915a5a); /* addps xmm2, xmm0 */
/* 915a5d: movaps xmm0, xmm1 */
  guest_unsupported(0x915a5d); /* movaps xmm0, xmm1 */
/* 915a60: mulps xmm0, xmm6 */
  guest_unsupported(0x915a60); /* mulps xmm0, xmm6 */
/* 915a63: addps xmm3, xmm0 */
  guest_unsupported(0x915a63); /* addps xmm3, xmm0 */
/* 915a66: movaps xmm0, xmmword ptr [ebp - 0x40] */
  guest_unsupported(0x915a66); /* movaps xmm0, xmmword ptr [ebp - 0x40] */
/* 915a6a: movaps xmmword ptr [esi + 0x10], xmm3 */
  guest_unsupported(0x915a6a); /* movaps xmmword ptr [esi + 0x10], xmm3 */
/* 915a6e: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 915a71: mulps xmm1, xmm5 */
  guest_unsupported(0x915a71); /* mulps xmm1, xmm5 */
/* 915a74: lea edx, [esi + 0x20] */
  edx = (uint32_t)(esi + 0x20u);
/* 915a77: addps xmm4, xmm1 */
  guest_unsupported(0x915a77); /* addps xmm4, xmm1 */
/* 915a7a: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 915a7d: movaps xmmword ptr [edx], xmm4 */
  guest_unsupported(0x915a7d); /* movaps xmmword ptr [edx], xmm4 */
/* 915a80: movaps xmmword ptr [eax], xmm2 */
  guest_unsupported(0x915a80); /* movaps xmmword ptr [eax], xmm2 */
/* 915a83: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 915a86: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 915a89: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915a8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 915a8c: lea eax, [edi - 0x30] */
  eax = (uint32_t)(edi + 0xffffffd0u);
/* 915a8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 915a90: call 0x915b50 */
  esp -= 4; W32(esp, 0x915a95u); SPILL(); f_915b50(); if (g_unwind) return; RELOAD();
/* 915a95: movaps xmm1, xmmword ptr [ebp - 0x60] */
  guest_unsupported(0x915a95); /* movaps xmm1, xmmword ptr [ebp - 0x60] */
/* 915a99: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 915a9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 915a9f: movaps xmmword ptr [ebp - 0x40], xmm0 */
  guest_unsupported(0x915a9f); /* movaps xmmword ptr [ebp - 0x40], xmm0 */
L_915aa3: /* 915aa3: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 915aa6: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 915aa9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915aac: add edi, 0x60 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 915aaf: add esi, 0x60 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 915ab2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 915ab3: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 915ab6: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 915ab9: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915abb: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 915abe: jne 0x915992 */
  if (!zf) goto L_915992;
L_915ac4: /* 915ac4: movaps xmm2, xmmword ptr [ebp - 0x70] */
  guest_unsupported(0x915ac4); /* movaps xmm2, xmmword ptr [ebp - 0x70] */
/* 915ac8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 915acb: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_915ace: /* 915ace: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 915ad1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 915ad3: movaps xmm3, xmmword ptr [esi + edx] */
  guest_unsupported(0x915ad3); /* movaps xmm3, xmmword ptr [esi + edx] */
/* 915ad7: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 915ada: movaps xmm4, xmmword ptr [edx] */
  guest_unsupported(0x915ada); /* movaps xmm4, xmmword ptr [edx] */
/* 915add: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 915ae0: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 915ae3: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 915ae5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915ae7: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* 915aea: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 915aed: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915aef: addps xmm3, xmm2 */
  guest_unsupported(0x915aef); /* addps xmm3, xmm2 */
/* 915af2: mulps xmm4, xmm3 */
  guest_unsupported(0x915af2); /* mulps xmm4, xmm3 */
/* 915af5: movaps xmm3, xmmword ptr [eax] */
  guest_unsupported(0x915af5); /* movaps xmm3, xmmword ptr [eax] */
/* 915af8: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 915afb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915afd: mulps xmm4, xmm1 */
  guest_unsupported(0x915afd); /* mulps xmm4, xmm1 */
/* 915b00: subps xmm3, xmm4 */
  guest_unsupported(0x915b00); /* subps xmm3, xmm4 */
/* 915b03: mulps xmm3, xmm1 */
  guest_unsupported(0x915b03); /* mulps xmm3, xmm1 */
/* 915b06: subps xmm3, xmm0 */
  guest_unsupported(0x915b06); /* subps xmm3, xmm0 */
/* 915b09: movaps xmmword ptr [eax], xmm3 */
  guest_unsupported(0x915b09); /* movaps xmmword ptr [eax], xmm3 */
/* 915b0c: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 915b0f: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915b12: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 915b15: mov edi, dword ptr [ebx + 0x28] */
  edi = R32((uint32_t)(ebx + 0x28u));
/* 915b18: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 915b1b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 915b1e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 915b21: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915b24: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 915b25: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 915b28: mov dword ptr [ebx + 0x28], edi */
  W32((uint32_t)(ebx + 0x28u), edi);
/* 915b2b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 915b2e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 915b31: jne 0x915960 */
  if (!zf) goto L_915960;
L_915b37: /* 915b37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 915b38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 915b39: mov esp, ebp */
  esp = ebp;
/* 915b3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 915b3c: mov esp, ebx */
  esp = ebx;
/* 915b3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 915b3f: ret 0x3c */
  esp += 64; SPILL(); return;
}

void f_915b50(void) {
  LOAD_REGS();
L_915b50: /* 915b50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 915b51: mov ebx, esp */
  ebx = esp;
/* 915b53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 915b54: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 915b57: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 915b5a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 915b5b: mov ebp, esp */
  ebp = esp;
/* 915b5d: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 915b60: movaps xmm1, xmmword ptr [eax] */
  guest_unsupported(0x915b60); /* movaps xmm1, xmmword ptr [eax] */
/* 915b63: movaps xmm2, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x915b63); /* movaps xmm2, xmmword ptr [eax + 0x10] */
/* 915b67: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915b6a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 915b6d: movaps xmm4, xmmword ptr [eax + 0x50] */
  guest_unsupported(0x915b6d); /* movaps xmm4, xmmword ptr [eax + 0x50] */
/* 915b71: movaps xmm5, xmmword ptr [eax + 0x40] */
  guest_unsupported(0x915b71); /* movaps xmm5, xmmword ptr [eax + 0x40] */
/* 915b75: movaps xmm6, xmmword ptr [eax + 0x20] */
  guest_unsupported(0x915b75); /* movaps xmm6, xmmword ptr [eax + 0x20] */
/* 915b79: movaps xmm7, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x915b79); /* movaps xmm7, xmmword ptr [eax + 0x10] */
/* 915b7d: movaps xmm3, xmm2 */
  guest_unsupported(0x915b7d); /* movaps xmm3, xmm2 */
/* 915b80: shufps xmm3, xmm2, 0xaa */
  guest_unsupported(0x915b80); /* shufps xmm3, xmm2, 0xaa */
/* 915b84: mulps xmm4, xmm3 */
  guest_unsupported(0x915b84); /* mulps xmm4, xmm3 */
/* 915b87: lea ecx, [eax + 0x50] */
  ecx = (uint32_t)(eax + 0x50u);
/* 915b8a: movaps xmm3, xmm2 */
  guest_unsupported(0x915b8a); /* movaps xmm3, xmm2 */
/* 915b8d: shufps xmm3, xmm2, 0x55 */
  guest_unsupported(0x915b8d); /* shufps xmm3, xmm2, 0x55 */
/* 915b91: mulps xmm5, xmm3 */
  guest_unsupported(0x915b91); /* mulps xmm5, xmm3 */
/* 915b94: lea edx, [eax + 0x40] */
  edx = (uint32_t)(eax + 0x40u);
/* 915b97: movaps xmm3, xmm2 */
  guest_unsupported(0x915b97); /* movaps xmm3, xmm2 */
/* 915b9a: shufps xmm3, xmm2, 0 */
  guest_unsupported(0x915b9a); /* shufps xmm3, xmm2, 0 */
/* 915b9e: movaps xmm2, xmmword ptr [eax + 0x30] */
  guest_unsupported(0x915b9e); /* movaps xmm2, xmmword ptr [eax + 0x30] */
/* 915ba2: mulps xmm2, xmm3 */
  guest_unsupported(0x915ba2); /* mulps xmm2, xmm3 */
/* 915ba5: lea ecx, [eax + 0x30] */
  ecx = (uint32_t)(eax + 0x30u);
/* 915ba8: movaps xmm3, xmm1 */
  guest_unsupported(0x915ba8); /* movaps xmm3, xmm1 */
/* 915bab: shufps xmm3, xmm1, 0xaa */
  guest_unsupported(0x915bab); /* shufps xmm3, xmm1, 0xaa */
/* 915baf: mulps xmm6, xmm3 */
  guest_unsupported(0x915baf); /* mulps xmm6, xmm3 */
/* 915bb2: lea edx, [eax + 0x20] */
  edx = (uint32_t)(eax + 0x20u);
/* 915bb5: movaps xmm3, xmm1 */
  guest_unsupported(0x915bb5); /* movaps xmm3, xmm1 */
/* 915bb8: shufps xmm3, xmm1, 0x55 */
  guest_unsupported(0x915bb8); /* shufps xmm3, xmm1, 0x55 */
/* 915bbc: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 915bbf: mulps xmm7, xmm3 */
  guest_unsupported(0x915bbf); /* mulps xmm7, xmm3 */
/* 915bc2: movaps xmm3, xmm1 */
  guest_unsupported(0x915bc2); /* movaps xmm3, xmm1 */
/* 915bc5: shufps xmm3, xmm1, 0 */
  guest_unsupported(0x915bc5); /* shufps xmm3, xmm1, 0 */
/* 915bc9: movaps xmm1, xmmword ptr [eax] */
  guest_unsupported(0x915bc9); /* movaps xmm1, xmmword ptr [eax] */
/* 915bcc: mulps xmm1, xmm3 */
  guest_unsupported(0x915bcc); /* mulps xmm1, xmm3 */
/* 915bcf: addps xmm0, xmm1 */
  guest_unsupported(0x915bcf); /* addps xmm0, xmm1 */
/* 915bd2: addps xmm0, xmm7 */
  guest_unsupported(0x915bd2); /* addps xmm0, xmm7 */
/* 915bd5: addps xmm0, xmm6 */
  guest_unsupported(0x915bd5); /* addps xmm0, xmm6 */
/* 915bd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 915bd9: addps xmm0, xmm2 */
  guest_unsupported(0x915bd9); /* addps xmm0, xmm2 */
/* 915bdc: mov esp, ebx */
  esp = ebx;
/* 915bde: addps xmm0, xmm5 */
  guest_unsupported(0x915bde); /* addps xmm0, xmm5 */
/* 915be1: addps xmm0, xmm4 */
  guest_unsupported(0x915be1); /* addps xmm0, xmm4 */
/* 915be4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 915be5: ret  */
  esp += 4; SPILL(); return;
}

void f_915bf0(void) {
  LOAD_REGS();
L_915bf0: /* 915bf0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 915bf4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 915bf6: je 0x915c62 */
  if (zf) goto L_915c62;
L_915bf8: /* 915bf8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 915bfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 915bfd: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 915c01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 915c02: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915c05: mov edi, eax */
  edi = eax;
L_915c07: /* 915c07: mov eax, 0xc0 */
  eax = 0xc0u;
/* 915c0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_915c10: /* 915c10: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 915c12: fld dword ptr [edx + eax - 0xb0] */
  { double v = F32((uint32_t)(edx + eax + 0xffffff50u)); FPUSH(v); }
/* 915c19: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915c1c: cmp eax, 0xcc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 915c21: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 915c24: fstp dword ptr [edx + eax - 4] */
  WF32((uint32_t)(edx + eax + 0xfffffffcu), ST0); FPOP();
/* 915c28: jl 0x915c10 */
  if ((sf != of)) goto L_915c10;
L_915c2a: /* 915c2a: mov edx, 0xd0 */
  edx = 0xd0u;
/* 915c2f: nop  */
L_915c30: /* 915c30: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 915c32: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 915c35: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915c38: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 915c3b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915c3e: cmp edx, 0xdc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 915c44: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 915c47: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* 915c4a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915c4c: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 915c4f: fmul dword ptr [ecx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 915c52: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915c54: fstp dword ptr [eax + edx - 4] */
  WF32((uint32_t)(eax + edx + 0xfffffffcu), ST0); FPOP();
/* 915c58: jl 0x915c30 */
  if ((sf != of)) goto L_915c30;
L_915c5a: /* 915c5a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 915c5d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 915c5e: jne 0x915c07 */
  if (!zf) goto L_915c07;
L_915c60: /* 915c60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 915c61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_915c62: /* 915c62: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_915c70(void) {
  LOAD_REGS();
L_915c70: /* 915c70: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 915c73: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 915c77: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 915c78: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 915c7b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915c7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 915c7e: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 915c82: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 915c85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 915c87: mov dword ptr [esp + 4], ebx */
  W32((uint32_t)(esp + 0x4u), ebx);
/* 915c8b: je 0x915dec */
  if (zf) goto L_915dec;
L_915c91: /* 915c91: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 915c95: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 915c96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 915c97: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 915c9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 915c9c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915c9f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 915ca3: mov edx, 0x20 */
  edx = 0x20u;
L_915ca8: /* 915ca8: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915cab: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 915caf: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 915cb3: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 915cbb: je 0x915db0 */
  if (zf) goto L_915db0;
L_915cc1: /* 915cc1: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 915cc5: add ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 915cc8: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 915cca: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 915cce: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_915cd2: /* 915cd2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 915cd4: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915cd7: je 0x915d8a */
  if (zf) goto L_915d8a;
L_915cdd: /* 915cdd: mov edi, dword ptr [edi + eax] */
  edi = R32((uint32_t)(edi + eax));
/* 915ce0: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 915ce4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 915ce8: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 915ceb: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 915cee: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 915cf0: lea edx, [ebx - 0x30] */
  edx = (uint32_t)(ebx + 0xffffffd0u);
/* 915cf3: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915cf6: mov ebx, edi */
  ebx = edi;
/* 915cf8: mov esi, eax */
  esi = eax;
/* 915cfa: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 915cfc: mov ebp, 3 */
  ebp = 0x3u;
L_915d01: /* 915d01: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 915d04: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915d07: fmul dword ptr [edx - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffe8u)));
/* 915d0a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 915d0d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 915d0e: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 915d11: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 915d14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915d16: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 915d19: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 915d1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915d1e: fld dword ptr [edx - 0x10] */
  { double v = F32((uint32_t)(edx + 0xfffffff0u)); FPUSH(v); }
/* 915d21: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 915d23: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915d25: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 915d27: fadd dword ptr [ebx + esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + esi + 0xfffffffcu)));
/* 915d2b: fstp dword ptr [ebx + esi - 4] */
  WF32((uint32_t)(ebx + esi + 0xfffffffcu), ST0); FPOP();
/* 915d2f: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 915d32: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 915d35: jne 0x915d01 */
  if (!zf) goto L_915d01;
L_915d37: /* 915d37: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 915d3b: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915d3e: xor esi, esi */
  esi = 0;
/* 915d40: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 915d43: mov edx, ebx */
  edx = ebx;
L_915d45: /* 915d45: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 915d48: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 915d49: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 915d4c: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915d4f: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 915d52: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 915d55: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 915d58: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 915d5b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915d5d: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 915d60: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 915d63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915d65: fld dword ptr [edx - 0x10] */
  { double v = F32((uint32_t)(edx + 0xfffffff0u)); FPUSH(v); }
/* 915d68: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 915d6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915d6c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 915d6e: fadd dword ptr [edi - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xfffffffcu)));
/* 915d71: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 915d74: fadd dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 915d78: fstp dword ptr [eax + esi*4 - 4] */
  WF32((uint32_t)(eax + esi*4 + 0xfffffffcu), ST0); FPOP();
/* 915d7c: jl 0x915d45 */
  if ((sf != of)) goto L_915d45;
L_915d7e: /* 915d7e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 915d82: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 915d86: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
L_915d8a: /* 915d8a: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 915d8e: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 915d90: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915d93: add ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 915d96: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 915d97: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915d99: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 915d9d: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 915da1: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 915da5: jne 0x915cd2 */
  if (!zf) goto L_915cd2;
L_915dab: /* 915dab: mov edx, 0x20 */
  edx = 0x20u;
L_915db0: /* 915db0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 915db2: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 915db6: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 915dba: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 915dbd: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 915dc0: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 915dc2: add dword ptr [esp + 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x34u), r);
  }
/* 915dc6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 915dca: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 915dcc: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 915dcf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915dd2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 915dd3: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 915dd7: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 915ddb: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 915ddf: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 915de3: jne 0x915ca8 */
  if (!zf) goto L_915ca8;
L_915de9: /* 915de9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 915dea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 915deb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_915dec: /* 915dec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 915ded: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 915df0: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_915e00(void) {
  LOAD_REGS();
L_915e00: /* 915e00: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 915e03: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 915e0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 915e0b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 915e0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 915e0d: mov esi, dword ptr [esp + 0x90] */
  esi = R32((uint32_t)(esp + 0x90u));
/* 915e14: xor ebx, ebx */
  ebx = 0;
/* 915e16: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 915e18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 915e19: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 915e1d: je 0x9160bb */
  if (zf) goto L_9160bb;
L_915e23: /* 915e23: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 915e2a: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 915e31: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915e34: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 915e37: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 915e3b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 915e3f: nop  */
L_915e40: /* 915e40: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 915e42: test byte ptr [ecx + 0xc], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0xcu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 915e46: je 0x915f09 */
  if (zf) goto L_915f09;
L_915e4c: /* 915e4c: lea ebp, [ecx + 0x40] */
  ebp = (uint32_t)(ecx + 0x40u);
/* 915e4f: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 915e53: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 915e56: mov ebx, 3 */
  ebx = 0x3u;
/* 915e5b: nop  */
/* 915e5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_915e60: /* 915e60: mov eax, ebp */
  eax = ebp;
/* 915e62: mov esi, 3 */
  esi = 0x3u;
L_915e67: /* 915e67: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 915e6a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915e6d: fmul dword ptr [ecx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 915e70: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915e73: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 915e74: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 915e77: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 915e7a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915e7c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 915e7e: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 915e81: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915e83: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 915e86: jne 0x915e67 */
  if (!zf) goto L_915e67;
L_915e88: /* 915e88: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915e8b: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 915e8c: jne 0x915e60 */
  if (!zf) goto L_915e60;
L_915e8e: /* 915e8e: xor edx, edx */
  edx = 0;
L_915e90: /* 915e90: fld dword ptr [esp + edx + 0x48] */
  { double v = F32((uint32_t)(esp + edx + 0x48u)); FPUSH(v); }
/* 915e94: lea ecx, [esp + edx + 0x64] */
  ecx = (uint32_t)(esp + edx + 0x64u);
/* 915e98: fld dword ptr [esp + edx + 0x44] */
  { double v = F32((uint32_t)(esp + edx + 0x44u)); FPUSH(v); }
/* 915e9c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 915e9f: fld dword ptr [esp + edx + 0x40] */
  { double v = F32((uint32_t)(esp + edx + 0x40u)); FPUSH(v); }
/* 915ea3: mov esi, 3 */
  esi = 0x3u;
L_915ea8: /* 915ea8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 915eaa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 915ead: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 915eb0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915eb3: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 915eb4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 915eb6: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 915eb9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915ebb: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 915ebd: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 915ec0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915ec2: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 915ec5: jne 0x915ea8 */
  if (!zf) goto L_915ea8;
L_915ec7: /* 915ec7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 915ec9: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 915ecc: cmp edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 915ecf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 915ed1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 915ed3: jl 0x915e90 */
  if ((sf != of)) goto L_915e90;
L_915ed5: /* 915ed5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 915ed9: xor eax, eax */
  eax = 0;
/* 915edb: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915ede: mov edi, edi */
  edi = edi;
L_915ee0: /* 915ee0: mov edx, dword ptr [esp + eax*4 + 0x64] */
  edx = R32((uint32_t)(esp + eax*4 + 0x64u));
/* 915ee4: mov dword ptr [ecx - 0x20], edx */
  W32((uint32_t)(ecx + 0xffffffe0u), edx);
/* 915ee7: mov edx, dword ptr [esp + eax*4 + 0x70] */
  edx = R32((uint32_t)(esp + eax*4 + 0x70u));
/* 915eeb: mov dword ptr [ecx - 0x10], edx */
  W32((uint32_t)(ecx + 0xfffffff0u), edx);
/* 915eee: mov edx, dword ptr [esp + eax*4 + 0x7c] */
  edx = R32((uint32_t)(esp + eax*4 + 0x7cu));
/* 915ef2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 915ef4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 915ef5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915ef8: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 915efb: jl 0x915ee0 */
  if ((sf != of)) goto L_915ee0;
L_915efd: /* 915efd: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 915f01: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 915f05: xor ebx, ebx */
  ebx = 0;
/* 915f07: jmp 0x915f50 */
  goto L_915f50;
L_915f09: /* 915f09: fld dword ptr [ecx + 0x60] */
  { double v = F32((uint32_t)(ecx + 0x60u)); FPUSH(v); }
/* 915f0c: fcom dword ptr [ecx + 0x74] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x74u)));
/* 915f0f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 915f11: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 915f14: jp 0x915f1b */
  if (pf) goto L_915f1b;
L_915f16: /* 915f16: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 915f18: fld dword ptr [ecx + 0x74] */
  { double v = F32((uint32_t)(ecx + 0x74u)); FPUSH(v); }
L_915f1b: /* 915f1b: fcom dword ptr [ecx + 0x88] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x88u)));
/* 915f21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 915f23: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 915f26: jp 0x915f30 */
  if (pf) goto L_915f30;
L_915f28: /* 915f28: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 915f2a: fld dword ptr [ecx + 0x88] */
  { double v = F32((uint32_t)(ecx + 0x88u)); FPUSH(v); }
L_915f30: /* 915f30: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 915f36: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 915f39: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 915f3c: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 915f3f: mov dword ptr [edx - 4], ebx */
  W32((uint32_t)(edx + 0xfffffffcu), ebx);
/* 915f42: mov dword ptr [edx - 0xc], ebx */
  W32((uint32_t)(edx + 0xfffffff4u), ebx);
/* 915f45: mov dword ptr [edx - 0x10], ebx */
  W32((uint32_t)(edx + 0xfffffff0u), ebx);
/* 915f48: fst dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0);
/* 915f4b: fst dword ptr [edx] */
  WF32((uint32_t)(edx), ST0);
/* 915f4d: fstp dword ptr [edx - 0x14] */
  WF32((uint32_t)(edx + 0xffffffecu), ST0); FPOP();
L_915f50: /* 915f50: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 915f52: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 915f55: mov dword ptr [edx - 8], ecx */
  W32((uint32_t)(edx + 0xfffffff8u), ecx);
/* 915f58: mov dword ptr [edx + 0x18], ebx */
  W32((uint32_t)(edx + 0x18u), ebx);
/* 915f5b: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 915f5e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 915f60: test byte ptr [eax + 0xc], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 915f64: je 0x916094 */
  if (zf) goto L_916094;
L_915f6a: /* 915f6a: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 915f6d: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 915f70: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 915f76: xor edx, edx */
  edx = 0;
/* 915f78: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 915f7b: lea ecx, [eax + 0x70] */
  ecx = (uint32_t)(eax + 0x70u);
/* 915f7e: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 915f84: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915f86: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 915f88: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 915f8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915f90: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 915f93: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 915f99: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 915f9c: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 915fa2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915fa4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 915fa6: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 915fac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915fae: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 915fb1: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 915fb7: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 915fba: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 915fc0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915fc2: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 915fc5: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 915fcb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915fcd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_915fd0: /* 915fd0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 915fd2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 915fd3: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 915fd6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 915fd9: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 915fdc: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 915fde: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* 915fe1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915fe3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 915fe5: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 915fe8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 915fea: fstp dword ptr [esp + edx*4 + 0x24] */
  WF32((uint32_t)(esp + edx*4 + 0x24u), ST0); FPOP();
/* 915fee: jl 0x915fd0 */
  if ((sf != of)) goto L_915fd0;
L_915ff0: /* 915ff0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 915ff2: xor edx, edx */
  edx = 0;
/* 915ff4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 915ff6: mov ecx, esi */
  ecx = esi;
/* 915ff8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 915ffa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_916000: /* 916000: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 916004: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 916005: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 916008: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91600b: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91600e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 916012: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* 916015: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 916017: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 91601b: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91601e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 916020: fstp dword ptr [esp + edx*4 + 0x18] */
  WF32((uint32_t)(esp + edx*4 + 0x18u), ST0); FPOP();
/* 916024: jl 0x916000 */
  if ((sf != of)) goto L_916000;
L_916026: /* 916026: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91602a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 91602e: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 916034: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 916038: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91603c: mov esi, ecx */
  esi = ecx;
/* 91603e: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 916044: xor ebx, ebx */
  ebx = 0;
/* 916046: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 916048: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91604c: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 916052: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 916056: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 91605c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91605e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 916062: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 916068: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91606c: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 916072: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 916074: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 916078: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91607a: fadd dword ptr [eax + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x20u)));
/* 91607d: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 916080: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 916082: fadd dword ptr [eax + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x24u)));
/* 916085: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 916088: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 91608a: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 91608e: fadd dword ptr [eax + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x28u)));
/* 916091: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
L_916094: /* 916094: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 916098: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91609b: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91609e: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9160a1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9160a2: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9160a6: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9160aa: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9160ae: jne 0x915e40 */
  if (!zf) goto L_915e40;
L_9160b4: /* 9160b4: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
L_9160bb: /* 9160bb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9160bd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9160c3: fdiv dword ptr [esp + 0xa0] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xa0u)));
/* 9160ca: mov edi, dword ptr [esp + 0x8c] */
  edi = R32((uint32_t)(esp + 0x8cu));
/* 9160d1: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 9160d5: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9160d9: je 0x9161ce */
  if (zf) goto L_9161ce;
L_9160df: /* 9160df: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 9160e6: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 9160ed: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9160f0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_9160f4: /* 9160f4: lea ebx, [edi + 0x20] */
  ebx = (uint32_t)(edi + 0x20u);
/* 9160f7: mov eax, 0x90 */
  eax = 0x90u;
/* 9160fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_916100: /* 916100: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 916102: fld dword ptr [eax + esi - 0x80] */
  { double v = F32((uint32_t)(eax + esi + 0xffffff80u)); FPUSH(v); }
/* 916106: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916109: cmp eax, 0x9c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91610e: fmul dword ptr [ebx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xffffffecu)));
/* 916111: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 916115: fmul dword ptr [eax + esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi + 0xfffffffcu)));
/* 916119: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91611b: fstp dword ptr [edx + eax - 0xa4] */
  WF32((uint32_t)(edx + eax + 0xffffff5cu), ST0); FPOP();
/* 916122: jne 0x916100 */
  if (!zf) goto L_916100;
L_916124: /* 916124: mov dword ptr [edx - 4], 0 */
  W32((uint32_t)(edx + 0xfffffffcu), 0x0u);
/* 91612b: mov eax, 0xa0 */
  eax = 0xa0u;
L_916130: /* 916130: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 916132: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 916136: fmul dword ptr [eax + esi] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi)));
/* 916139: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91613c: cmp eax, 0xac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 916141: fstp dword ptr [eax + edx - 0xa4] */
  WF32((uint32_t)(eax + edx + 0xffffff5cu), ST0); FPOP();
/* 916148: jne 0x916130 */
  if (!zf) goto L_916130;
L_91614a: /* 91614a: xor eax, eax */
  eax = 0;
/* 91614c: mov esi, edx */
  esi = edx;
/* 91614e: mov edi, edi */
  edi = edi;
L_916150: /* 916150: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 916153: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 916155: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 916158: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 916159: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91615c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91615f: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 916162: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 916165: jne 0x916150 */
  if (!zf) goto L_916150;
L_916167: /* 916167: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 916169: mov eax, edx */
  eax = edx;
/* 91616b: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91616e: mov esi, 3 */
  esi = 0x3u;
L_916173: /* 916173: fld dword ptr [edi + eax] */
  { double v = F32((uint32_t)(edi + eax)); FPUSH(v); }
/* 916176: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 916178: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 91617b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91617e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 91617f: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 916182: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 916185: jne 0x916173 */
  if (!zf) goto L_916173;
L_916187: /* 916187: mov eax, edx */
  eax = edx;
/* 916189: mov esi, ebx */
  esi = ebx;
/* 91618b: mov edi, 3 */
  edi = 0x3u;
L_916190: /* 916190: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 916192: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 916195: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 916198: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 91619b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91619e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91619f: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 9161a2: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 9161a5: jne 0x916190 */
  if (!zf) goto L_916190;
L_9161a7: /* 9161a7: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 9161ab: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9161af: mov dword ptr [edx + 0xc], 0 */
  W32((uint32_t)(edx + 0xcu), 0x0u);
/* 9161b6: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9161b9: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9161bc: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9161bf: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9161c0: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 9161c4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9161c8: jne 0x9160f4 */
  if (!zf) goto L_9160f4;
L_9161ce: /* 9161ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9161cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9161d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9161d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9161d2: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9161d5: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_9161e0(void) {
  LOAD_REGS();
L_9161e0: /* 9161e0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9161e3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9161e9: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9161ed: fdiv dword ptr [esp + 0x68] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x68u)));
/* 9161f1: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9161f5: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 9161f9: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 9161fd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9161fe: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 916201: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916203: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 916206: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 916208: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 91620c: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 916210: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 916214: je 0x916586 */
  if (zf) goto L_916586;
L_91621a: /* 91621a: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 91621e: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 916222: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 916226: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 916228: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 916229: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
/* 91622d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91622e: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 916232: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 916233: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 916234: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 916238: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 91623c: mov edi, eax */
  edi = eax;
/* 91623e: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 916240: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 916244: mov edi, ebp */
  edi = ebp;
/* 916246: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 916248: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 91624c: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 91624f: mov ecx, eax */
  ecx = eax;
/* 916251: sub ecx, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 916255: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* 916258: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 91625c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 916260: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 916262: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 916266: mov ecx, eax */
  ecx = eax;
/* 916268: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 91626c: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91626e: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 916272: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 916276: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 91627a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 91627e: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
L_916282: /* 916282: xor eax, eax */
  eax = 0;
/* 916284: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 916286: mov dword ptr [esi - 4], eax */
  W32((uint32_t)(esi + 0xfffffffcu), eax);
/* 916289: mov dword ptr [edi + edx], eax */
  W32((uint32_t)(edi + edx), eax);
/* 91628c: mov dword ptr [esi - 0xc], eax */
  W32((uint32_t)(esi + 0xfffffff4u), eax);
/* 91628f: cmp dword ptr [ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 916291: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 916295: je 0x9164b7 */
  if (zf) goto L_9164b7;
L_91629b: /* 91629b: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 91629f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9162a3: lea ebp, [eax + 0x34] */
  ebp = (uint32_t)(eax + 0x34u);
/* 9162a6: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 9162aa: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 9162ae: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9162b2: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9162b5: sub eax, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9162b9: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* 9162bd: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
L_9162c1: /* 9162c1: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 9162c5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9162c7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9162ca: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 9162ce: je 0x91648f */
  if (zf) goto L_91648f;
L_9162d4: /* 9162d4: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 9162d8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9162db: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9162de: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9162e0: mov ebx, ecx */
  ebx = ecx;
/* 9162e2: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9162e4: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 9162e7: lea ebp, [ebx + 4] */
  ebp = (uint32_t)(ebx + 0x4u);
/* 9162ea: lea edi, [ecx - 0x24] */
  edi = (uint32_t)(ecx + 0xffffffdcu);
/* 9162ed: mov ebx, 3 */
  ebx = 0x3u;
L_9162f2: /* 9162f2: fld dword ptr [edi - 0xc] */
  { double v = F32((uint32_t)(edi + 0xfffffff4u)); FPUSH(v); }
/* 9162f5: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9162f8: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 9162fb: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9162fe: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 9162ff: fstp dword ptr [edx - 0x14] */
  WF32((uint32_t)(edx + 0xffffffecu), ST0); FPOP();
/* 916302: fld dword ptr [edx + ebp - 0x10] */
  { double v = F32((uint32_t)(edx + ebp + 0xfffffff0u)); FPUSH(v); }
/* 916306: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 916309: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 91630c: fld dword ptr [edi - 0x14] */
  { double v = F32((uint32_t)(edi + 0xffffffecu)); FPUSH(v); }
/* 91630f: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 916312: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 916315: fld dword ptr [edi - 0x10] */
  { double v = F32((uint32_t)(edi + 0xfffffff0u)); FPUSH(v); }
/* 916318: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 91631b: fstp dword ptr [edx - 8] */
  WF32((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 91631e: jne 0x9162f2 */
  if (!zf) goto L_9162f2;
L_916320: /* 916320: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 916324: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 916328: lea ebx, [edx + edi] */
  ebx = (uint32_t)(edx + edi);
/* 91632b: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91632e: mov edi, 3 */
  edi = 0x3u;
L_916333: /* 916333: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 916335: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916338: fmul dword ptr [eax - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffdcu)));
/* 91633b: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91633e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91633f: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 916341: fmul dword ptr [eax - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffdcu)));
/* 916344: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 916347: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 91634a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 91634e: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 916351: fmul dword ptr [eax - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffdcu)));
/* 916354: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 916358: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91635b: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 91635e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 916360: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 916364: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 916367: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 91636a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 91636c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 916370: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 916372: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 916374: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 916377: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 91637a: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 91637e: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 916381: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 916384: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 916388: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 91638c: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91638f: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 916392: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 916396: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 916399: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 91639c: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 9163a0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 9163a3: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 9163a6: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 9163a8: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9163ac: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 9163af: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 9163b3: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 9163b6: mov dword ptr [edx - 0xc], ebp */
  W32((uint32_t)(edx + 0xfffffff4u), ebp);
/* 9163b9: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 9163bd: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 9163c1: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 9163c5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9163c7: fstp dword ptr [edx - 0x14] */
  WF32((uint32_t)(edx + 0xffffffecu), ST0); FPOP();
/* 9163ca: mov dword ptr [edx - 8], ebp */
  W32((uint32_t)(edx + 0xfffffff8u), ebp);
/* 9163cd: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 9163d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9163d2: jne 0x916333 */
  if (!zf) goto L_916333;
L_9163d8: /* 9163d8: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 9163dc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9163e2: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 9163e6: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9163ec: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9163f2: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 9163f5: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9163fb: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9163fd: xor eax, eax */
  eax = 0;
/* 9163ff: lea edx, [ecx - 0x28] */
  edx = (uint32_t)(ecx + 0xffffffd8u);
L_916402: /* 916402: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 916405: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 916406: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 91640a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91640d: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916410: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 916412: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 916415: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 916419: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 91641b: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 91641f: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 916422: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 916424: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 916427: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 91642b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 91642d: jl 0x916402 */
  if ((sf != of)) goto L_916402;
L_91642f: /* 91642f: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 916432: mov edx, ebx */
  edx = ebx;
/* 916434: mov edi, 3 */
  edi = 0x3u;
/* 916439: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_916440: /* 916440: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 916443: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916446: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 916449: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91644c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91644d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91644f: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 916452: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 916455: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 916457: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 91645a: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 91645d: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 91645f: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 916462: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 916465: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 916467: jne 0x916440 */
  if (!zf) goto L_916440;
L_916469: /* 916469: fadd dword ptr [esi - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffff4u)));
/* 91646c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 916470: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 916474: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 916478: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 91647c: fstp dword ptr [esi - 0xc] */
  WF32((uint32_t)(esi + 0xfffffff4u), ST0); FPOP();
/* 91647f: fadd dword ptr [edi + edx] */
  ST0 = ST0 + (F32((uint32_t)(edi + edx)));
/* 916482: fstp dword ptr [edi + edx] */
  WF32((uint32_t)(edi + edx), ST0); FPOP();
/* 916485: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 916488: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 91648b: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 91648d: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_91648f: /* 91648f: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 916493: add ebp, 0x60 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 916496: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 916499: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91649a: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 91649e: add dword ptr [esp + 0x78], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 9164a3: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 9164a7: cmp eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9164a9: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* 9164ad: jne 0x9162c1 */
  if (!zf) goto L_9162c1;
L_9164b3: /* 9164b3: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_9164b7: /* 9164b7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9164b9: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9164bd: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 9164c1: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9164c4: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9164c7: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9164c9: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 9164cd: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 9164d1: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9164d3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9164d7: fadd dword ptr [eax + esi - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi + 0xfffffff4u)));
/* 9164db: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9164dd: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 9164e1: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 9164e5: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 9164e8: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9164eb: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9164ee: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 9164f2: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9164f5: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 9164f9: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 9164fd: fsubr dword ptr [esi + ecx - 0x1c] */
  ST0 = (F32((uint32_t)(esi + ecx + 0xffffffe4u))) - ST0;
/* 916501: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 916505: fsub dword ptr [esi - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xffffffe4u)));
/* 916508: fstp dword ptr [esi - 0x1c] */
  WF32((uint32_t)(esi + 0xffffffe4u), ST0); FPOP();
/* 91650b: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 91650f: fadd dword ptr [edx + ebp - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + ebp + 0xfffffff0u)));
/* 916513: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 916517: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 91651a: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 91651e: fsubr dword ptr [edx + ebp - 0x10] */
  ST0 = (F32((uint32_t)(edx + ebp + 0xfffffff0u))) - ST0;
/* 916522: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 916526: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 91652a: fsub dword ptr [edi + edx - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edi + edx + 0xfffffff0u)));
/* 91652e: fstp dword ptr [edi + edx - 0x10] */
  WF32((uint32_t)(edi + edx + 0xfffffff0u), ST0); FPOP();
/* 916532: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 916536: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 916539: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 91653c: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 916540: fsubr dword ptr [esi + ecx - 0x14] */
  ST0 = (F32((uint32_t)(esi + ecx + 0xffffffecu))) - ST0;
/* 916544: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 916548: fsub dword ptr [esi - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xffffffecu)));
/* 91654b: fstp dword ptr [esi - 0x14] */
  WF32((uint32_t)(esi + 0xffffffecu), ST0); FPOP();
/* 91654e: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 916552: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 916554: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 916557: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 91655b: fsubr dword ptr [eax + ebp] */
  ST0 = (F32((uint32_t)(eax + ebp))) - ST0;
/* 91655e: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 916562: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916565: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 916569: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 91656d: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 916571: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 916572: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 916576: fsub dword ptr [esi - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xfffffff0u)));
/* 916579: fstp dword ptr [esi - 0x10] */
  WF32((uint32_t)(esi + 0xfffffff0u), ST0); FPOP();
/* 91657c: jne 0x916282 */
  if (!zf) goto L_916282;
L_916582: /* 916582: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 916583: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 916584: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 916585: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_916586: /* 916586: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 916589: ret 0x3c */
  esp += 64; SPILL(); return;
}

void f_916590(void) {
  LOAD_REGS();
L_916590: /* 916590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 916591: mov ebp, esp */
  ebp = esp;
/* 916593: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 916596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 916597: mov esi, ecx */
  esi = ecx;
/* 916599: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 91659c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91659f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9165a2: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 9165a5: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9165a8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 9165ab: lea eax, [eax*4 + 0x10] */
  eax = (uint32_t)(eax*4 + 0x10u);
/* 9165b2: push 0xaf2ab0 */
  { uint32_t v = 0xaf2ab0u; esp -= 4; W32(esp, v); }
/* 9165b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9165b8: call 0x914a10 */
  esp -= 4; W32(esp, 0x9165bdu); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 9165bd: add eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9165c0: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9165c3: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 9165c6: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9165c9: mov ecx, eax */
  ecx = eax;
/* 9165cb: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 9165ce: lea edx, [ecx*4 + 0x10] */
  edx = (uint32_t)(ecx*4 + 0x10u);
/* 9165d5: push 0xaf2aac */
  { uint32_t v = 0xaf2aacu; esp -= 4; W32(esp, v); }
/* 9165da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9165db: call 0x914a10 */
  esp -= 4; W32(esp, 0x9165e0u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 9165e0: add eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9165e3: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9165e6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 9165e9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9165ec: mov ecx, eax */
  ecx = eax;
/* 9165ee: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 9165f1: lea edx, [ecx*4 + 0x10] */
  edx = (uint32_t)(ecx*4 + 0x10u);
/* 9165f8: push 0xaf2aa4 */
  { uint32_t v = 0xaf2aa4u; esp -= 4; W32(esp, v); }
/* 9165fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9165fe: call 0x914a10 */
  esp -= 4; W32(esp, 0x916603u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 916603: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 916606: add eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916609: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91660c: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 91660f: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 916612: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 916615: mov edx, eax */
  edx = eax;
/* 916617: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 91661a: add edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91661d: and edx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 916620: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 916623: push 0xaf2aa0 */
  { uint32_t v = 0xaf2aa0u; esp -= 4; W32(esp, v); }
/* 916628: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 916629: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 91662c: call 0x914a10 */
  esp -= 4; W32(esp, 0x916631u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 916631: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 916634: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 916637: mov ecx, eax */
  ecx = eax;
/* 916639: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 91663c: add ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91663f: and ecx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 916642: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 916645: push 0xaf2a9c */
  { uint32_t v = 0xaf2a9cu; esp -= 4; W32(esp, v); }
/* 91664a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91664b: call 0x914a10 */
  esp -= 4; W32(esp, 0x916650u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 916650: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 916653: add edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 916656: and edx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 916659: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91665c: push 0xaf2a98 */
  { uint32_t v = 0xaf2a98u; esp -= 4; W32(esp, v); }
/* 916661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 916662: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 916665: call 0x914a10 */
  esp -= 4; W32(esp, 0x91666au); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91666a: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 91666d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 916670: add eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916673: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 916676: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 916679: push 0xaf2a94 */
  { uint32_t v = 0xaf2a94u; esp -= 4; W32(esp, v); }
/* 91667e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91667f: call 0x914a10 */
  esp -= 4; W32(esp, 0x916684u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 916684: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 916687: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 91668a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91668b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91668c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_916690(void) {
  LOAD_REGS();
L_916690: /* 916690: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 916691: mov ebx, esp */
  ebx = esp;
/* 916693: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 916694: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 916697: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91669a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91669b: mov ebp, esp */
  ebp = esp;
/* 91669d: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9166a0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 9166a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9166a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9166a5: mov edi, ecx */
  edi = ecx;
/* 9166a7: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 9166aa: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9166ad: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 9166b0: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 9166b3: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 9166b6: xor ecx, ecx */
  ecx = 0;
/* 9166b8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9166ba: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 9166bd: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 9166c0: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 9166c3: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 9166c6: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 9166c9: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 9166cc: jle 0x916917 */
  if ((zf || sf != of)) goto L_916917;
L_9166d2: /* 9166d2: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 9166d5: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 9166d8: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 9166db: nop  */
/* 9166dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9166e0: /* 9166e0: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 9166e3: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 9166e6: mov esi, dword ptr [ebx + 0x14] */
  esi = R32((uint32_t)(ebx + 0x14u));
/* 9166e9: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 9166ec: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9166ed: xor esi, esi */
  esi = 0;
/* 9166ef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9166f1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 9166f4: mov dword ptr [ebp - 0x10], 0xfffffff */
  W32((uint32_t)(ebp + 0xfffffff0u), 0xfffffffu);
/* 9166fb: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 9166fe: jl 0x9168ce */
  if ((sf != of)) goto L_9168ce;
L_916704: /* 916704: xorps xmm0, xmm0 */
  guest_unsupported(0x916704); /* xorps xmm0, xmm0 */
/* 916707: movaps xmmword ptr [ebp - 0x60], xmm0 */
  guest_unsupported(0x916707); /* movaps xmmword ptr [ebp - 0x60], xmm0 */
/* 91670b: nop  */
/* 91670c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_916710: /* 916710: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 916713: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 916716: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 916719: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 91671c: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 91671f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 916721: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 916724: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 916727: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 916729: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 91672c: movaps xmm2, xmm0 */
  guest_unsupported(0x91672c); /* movaps xmm2, xmm0 */
/* 91672f: movaps xmm3, xmm0 */
  guest_unsupported(0x91672f); /* movaps xmm3, xmm0 */
/* 916732: movaps xmm4, xmm0 */
  guest_unsupported(0x916732); /* movaps xmm4, xmm0 */
/* 916735: movaps xmm5, xmm0 */
  guest_unsupported(0x916735); /* movaps xmm5, xmm0 */
/* 916738: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 91673f: jle 0x916881 */
  if ((zf || sf != of)) goto L_916881;
L_916745: /* 916745: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
L_916748: /* 916748: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 91674b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 91674d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 916750: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 916753: je 0x9167f0 */
  if (zf) goto L_9167f0;
L_916759: /* 916759: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 91675c: xor ecx, ecx */
  ecx = 0;
/* 91675e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 916760: jle 0x9167ed */
  if ((zf || sf != of)) goto L_9167ed;
L_916766: /* 916766: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 916769: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_916770: /* 916770: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 916773: cmp eax, dword ptr [edx + ecx*4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 916776: jne 0x9167db */
  if (!zf) goto L_9167db;
L_916778: /* 916778: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 91677b: mov edx, edi */
  edx = edi;
/* 91677d: mov esi, 6 */
  esi = 0x6u;
L_916782: /* 916782: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0x916782); /* movaps xmm0, xmmword ptr [eax] */
/* 916785: movaps xmm1, xmmword ptr [edx] */
  guest_unsupported(0x916785); /* movaps xmm1, xmmword ptr [edx] */
/* 916788: movaps xmm6, xmm0 */
  guest_unsupported(0x916788); /* movaps xmm6, xmm0 */
/* 91678b: shufps xmm6, xmm0, 0 */
  guest_unsupported(0x91678b); /* shufps xmm6, xmm0, 0 */
/* 91678f: movaps xmm7, xmm1 */
  guest_unsupported(0x91678f); /* movaps xmm7, xmm1 */
/* 916792: mulps xmm7, xmm6 */
  guest_unsupported(0x916792); /* mulps xmm7, xmm6 */
/* 916795: addps xmm2, xmm7 */
  guest_unsupported(0x916795); /* addps xmm2, xmm7 */
/* 916798: movaps xmm6, xmm0 */
  guest_unsupported(0x916798); /* movaps xmm6, xmm0 */
/* 91679b: shufps xmm6, xmm0, 0x55 */
  guest_unsupported(0x91679b); /* shufps xmm6, xmm0, 0x55 */
/* 91679f: movaps xmm7, xmm1 */
  guest_unsupported(0x91679f); /* movaps xmm7, xmm1 */
/* 9167a2: mulps xmm7, xmm6 */
  guest_unsupported(0x9167a2); /* mulps xmm7, xmm6 */
/* 9167a5: addps xmm3, xmm7 */
  guest_unsupported(0x9167a5); /* addps xmm3, xmm7 */
/* 9167a8: movaps xmm6, xmm0 */
  guest_unsupported(0x9167a8); /* movaps xmm6, xmm0 */
/* 9167ab: shufps xmm6, xmm0, 0xaa */
  guest_unsupported(0x9167ab); /* shufps xmm6, xmm0, 0xaa */
/* 9167af: movaps xmm7, xmm1 */
  guest_unsupported(0x9167af); /* movaps xmm7, xmm1 */
/* 9167b2: mulps xmm7, xmm6 */
  guest_unsupported(0x9167b2); /* mulps xmm7, xmm6 */
/* 9167b5: movaps xmm6, xmm0 */
  guest_unsupported(0x9167b5); /* movaps xmm6, xmm0 */
/* 9167b8: shufps xmm6, xmm0, 0xff */
  guest_unsupported(0x9167b8); /* shufps xmm6, xmm0, 0xff */
/* 9167bc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9167bf: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9167c2: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9167c3: mulps xmm1, xmm6 */
  guest_unsupported(0x9167c3); /* mulps xmm1, xmm6 */
/* 9167c6: addps xmm4, xmm7 */
  guest_unsupported(0x9167c6); /* addps xmm4, xmm7 */
/* 9167c9: addps xmm5, xmm1 */
  guest_unsupported(0x9167c9); /* addps xmm5, xmm1 */
/* 9167cc: jne 0x916782 */
  if (!zf) goto L_916782;
L_9167ce: /* 9167ce: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 9167d1: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 9167d4: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_9167db: /* 9167db: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 9167de: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9167df: add edi, 0x60 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9167e2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9167e4: jl 0x916770 */
  if ((sf != of)) goto L_916770;
L_9167e6: /* 9167e6: movaps xmm0, xmmword ptr [ebp - 0x60] */
  guest_unsupported(0x9167e6); /* movaps xmm0, xmmword ptr [ebp - 0x60] */
/* 9167ea: mov edi, dword ptr [ebp - 0x4c] */
  edi = R32((uint32_t)(ebp + 0xffffffb4u));
L_9167ed: /* 9167ed: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
L_9167f0: /* 9167f0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 9167f3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9167f6: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9167f9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 9167fc: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 9167ff: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 916802: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 916803: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 916806: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 916809: jne 0x916748 */
  if (!zf) goto L_916748;
L_91680f: /* 91680f: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 916812: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 916814: je 0x916881 */
  if (zf) goto L_916881;
L_916816: /* 916816: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 916819: movaps xmmword ptr [eax], xmm2 */
  guest_unsupported(0x916819); /* movaps xmmword ptr [eax], xmm2 */
/* 91681c: movaps xmmword ptr [eax + 0x10], xmm3 */
  guest_unsupported(0x91681c); /* movaps xmmword ptr [eax + 0x10], xmm3 */
/* 916820: movaps xmmword ptr [eax + 0x20], xmm4 */
  guest_unsupported(0x916820); /* movaps xmmword ptr [eax + 0x20], xmm4 */
/* 916824: movaps xmmword ptr [eax + 0x30], xmm5 */
  guest_unsupported(0x916824); /* movaps xmmword ptr [eax + 0x30], xmm5 */
/* 916828: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 91682b: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 91682e: lea ecx, [eax + 0x30] */
  ecx = (uint32_t)(eax + 0x30u);
/* 916831: movaps xmmword ptr [edx], xmm2 */
  guest_unsupported(0x916831); /* movaps xmmword ptr [edx], xmm2 */
/* 916834: movaps xmmword ptr [edx + 0x10], xmm3 */
  guest_unsupported(0x916834); /* movaps xmmword ptr [edx + 0x10], xmm3 */
/* 916838: movaps xmmword ptr [edx + 0x20], xmm4 */
  guest_unsupported(0x916838); /* movaps xmmword ptr [edx + 0x20], xmm4 */
/* 91683c: lea ecx, [edx + 0x10] */
  ecx = (uint32_t)(edx + 0x10u);
/* 91683f: lea ecx, [edx + 0x20] */
  ecx = (uint32_t)(edx + 0x20u);
/* 916842: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916845: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 916848: movaps xmmword ptr [edx], xmm5 */
  guest_unsupported(0x916848); /* movaps xmmword ptr [edx], xmm5 */
/* 91684b: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 91684e: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 916851: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 916854: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 916857: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 91685a: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91685d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 916860: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 916863: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 916865: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 916868: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91686b: mov ecx, eax */
  ecx = eax;
/* 91686d: and eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 916870: not ecx */
  ecx = ~ecx;
/* 916872: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 916875: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 916877: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 916879: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 91687c: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 91687f: jmp 0x916898 */
  goto L_916898;
L_916881: /* 916881: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 916884: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916887: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91688e: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 916891: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
L_916898: /* 916898: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 91689b: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 91689e: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 9168a1: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9168a4: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 9168a7: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9168aa: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 9168ad: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9168b0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9168b2: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9168b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9168b6: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 9168b9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9168bc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9168bd: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9168bf: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 9168c2: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 9168c5: jle 0x916710 */
  if ((zf || sf != of)) goto L_916710;
L_9168cb: /* 9168cb: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
L_9168ce: /* 9168ce: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 9168d1: mov esi, dword ptr [ebp - 0x10] */
  esi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9168d4: mov dword ptr [ecx + eax], esi */
  W32((uint32_t)(ecx + eax), esi);
/* 9168d7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 9168da: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9168dc: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 9168df: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9168e2: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9168e5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9168e7: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 9168ea: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 9168ed: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9168f0: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9168f3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 9168f6: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 9168f9: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9168fb: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 9168fe: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 916901: add dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 916905: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 916908: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91690b: cmp esi, dword ptr [edi + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91690e: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 916911: jl 0x9166e0 */
  if ((sf != of)) goto L_9166e0;
L_916917: /* 916917: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 91691a: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 91691d: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* 916920: xor ecx, ecx */
  ecx = 0;
/* 916922: xor esi, esi */
  esi = 0;
/* 916924: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 916926: mov dword ptr [edi + 0x28], edx */
  W32((uint32_t)(edi + 0x28u), edx);
/* 916929: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 91692c: jle 0x916994 */
  if ((zf || sf != of)) goto L_916994;
L_91692e: /* 91692e: mov edi, edi */
  edi = edi;
L_916930: /* 916930: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 916933: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 916934: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 916937: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 91693a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91693d: mov edx, dword ptr [eax + edx] */
  edx = R32((uint32_t)(eax + edx));
/* 916940: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 916943: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* 916946: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 916949: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 91694b: mov dword ptr [ebp - 0x44], 4 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x4u);
L_916952: /* 916952: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 916955: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 916958: fmul dword ptr [ecx + esi*4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + esi*4)));
/* 91695b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91695c: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91695f: fadd dword ptr [eax + edx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx + 0xffffffecu)));
/* 916963: fadd dword ptr [ebx + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x1cu)));
/* 916966: fstp dword ptr [eax + edx - 0x14] */
  WF32((uint32_t)(eax + edx + 0xffffffecu), ST0); FPOP();
/* 91696a: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 91696d: fmul dword ptr [ecx + esi*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + esi*4 + 0xfffffffcu)));
/* 916971: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 916974: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 916975: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 916978: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 91697b: fadd dword ptr [ebx + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x1cu)));
/* 91697e: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 916981: jne 0x916952 */
  if (!zf) goto L_916952;
L_916983: /* 916983: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916986: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 916989: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91698a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91698c: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 91698f: jl 0x916930 */
  if ((sf != of)) goto L_916930;
L_916991: /* 916991: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
L_916994: /* 916994: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 916997: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 916998: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91699b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91699c: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91699f: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 9169a2: jge 0x9169c6 */
  if ((sf == of)) goto L_9169c6;
L_9169a4: /* 9169a4: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9169a7: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 9169aa: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9169ac: mov edx, 4 */
  edx = 0x4u;
/* 9169b1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_9169b3: /* 9169b3: mov dword ptr [ecx + esi], 0x3f800000 */
  W32((uint32_t)(ecx + esi), 0x3f800000u);
/* 9169ba: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 9169c0: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9169c3: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9169c4: jne 0x9169b3 */
  if (!zf) goto L_9169b3;
L_9169c6: /* 9169c6: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9169c9: xor ecx, ecx */
  ecx = 0;
/* 9169cb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9169cd: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 9169d0: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 9169d3: jge 0x916a13 */
  if ((sf == of)) goto L_916a13;
L_9169d5: /* 9169d5: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
/* 9169d8: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 9169db: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 9169de: lea esi, [esi + edx*4] */
  esi = (uint32_t)(esi + edx*4);
L_9169e1: /* 9169e1: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9169e4: je 0x9169ee */
  if (zf) goto L_9169ee;
L_9169e6: /* 9169e6: cmp ecx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9169e9: jle 0x9169ee */
  if ((zf || sf != of)) goto L_9169ee;
L_9169eb: /* 9169eb: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
L_9169ee: /* 9169ee: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 9169f5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9169f6: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9169f8: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9169fa: jl 0x9169e1 */
  if ((sf != of)) goto L_9169e1;
L_9169fc: /* 9169fc: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9169ff: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 916a02: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 916a05: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 916a08: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 916a0b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 916a0c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916a0e: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 916a11: jl 0x9169d5 */
  if ((sf != of)) goto L_9169d5;
L_916a13: /* 916a13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 916a14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 916a15: mov esp, ebp */
  esp = ebp;
/* 916a17: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 916a18: mov esp, ebx */
  esp = ebx;
/* 916a1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 916a1b: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_916a20(void) {
  LOAD_REGS();
L_916a20: /* 916a20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 916a21: mov ebx, esp */
  ebx = esp;
/* 916a23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 916a24: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 916a27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 916a2a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 916a2b: mov ebp, esp */
  ebp = esp;
/* 916a2d: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 916a30: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 916a33: xor edx, edx */
  edx = 0;
/* 916a35: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916a37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 916a38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 916a39: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 916a3c: jle 0x916bd5 */
  if ((zf || sf != of)) goto L_916bd5;
L_916a42: /* 916a42: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 916a45: xorps xmm6, xmm6 */
  guest_unsupported(0x916a45); /* xorps xmm6, xmm6 */
/* 916a48: movaps xmmword ptr [ebp - 0x50], xmm6 */
  guest_unsupported(0x916a48); /* movaps xmmword ptr [ebp - 0x50], xmm6 */
/* 916a4c: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 916a4f: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_916a52: /* 916a52: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916a55: xor esi, esi */
  esi = 0;
/* 916a57: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 916a59: movaps xmm5, xmm6 */
  guest_unsupported(0x916a59); /* movaps xmm5, xmm6 */
/* 916a5c: movaps xmm4, xmm6 */
  guest_unsupported(0x916a5c); /* movaps xmm4, xmm6 */
/* 916a5f: movaps xmmword ptr [ebp - 0x30], xmm5 */
  guest_unsupported(0x916a5f); /* movaps xmmword ptr [ebp - 0x30], xmm5 */
/* 916a63: movaps xmm0, xmm6 */
  guest_unsupported(0x916a63); /* movaps xmm0, xmm6 */
/* 916a66: movaps xmm3, xmm6 */
  guest_unsupported(0x916a66); /* movaps xmm3, xmm6 */
/* 916a69: movaps xmm1, xmm6 */
  guest_unsupported(0x916a69); /* movaps xmm1, xmm6 */
/* 916a6c: movaps xmmword ptr [ebp - 0x40], xmm4 */
  guest_unsupported(0x916a6c); /* movaps xmmword ptr [ebp - 0x40], xmm4 */
/* 916a70: jle 0x916b18 */
  if ((zf || sf != of)) goto L_916b18;
L_916a76: /* 916a76: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 916a79: mov edi, dword ptr [ecx + 0x1c] */
  edi = R32((uint32_t)(ecx + 0x1cu));
/* 916a7c: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 916a7f: mov esi, eax */
  esi = eax;
/* 916a81: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 916a84: lea edi, [edi + esi*4] */
  edi = (uint32_t)(edi + esi*4);
/* 916a87: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916a8a: mov dword ptr [ebp - 0x10], edx */
  W32((uint32_t)(ebp + 0xfffffff0u), edx);
/* 916a8d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_916a90: /* 916a90: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 916a92: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 916a94: je 0x916b01 */
  if (zf) goto L_916b01;
L_916a96: /* 916a96: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 916a99: movaps xmm2, xmmword ptr [ecx] */
  guest_unsupported(0x916a99); /* movaps xmm2, xmmword ptr [ecx] */
/* 916a9c: movaps xmm5, xmmword ptr [esi + 0x30] */
  guest_unsupported(0x916a9c); /* movaps xmm5, xmmword ptr [esi + 0x30] */
/* 916aa0: movaps xmm6, xmmword ptr [esi + 0x20] */
  guest_unsupported(0x916aa0); /* movaps xmm6, xmmword ptr [esi + 0x20] */
/* 916aa4: movaps xmm7, xmmword ptr [esi + 0x10] */
  guest_unsupported(0x916aa4); /* movaps xmm7, xmmword ptr [esi + 0x10] */
/* 916aa8: movaps xmm4, xmm2 */
  guest_unsupported(0x916aa8); /* movaps xmm4, xmm2 */
/* 916aab: shufps xmm4, xmm2, 0xff */
  guest_unsupported(0x916aab); /* shufps xmm4, xmm2, 0xff */
/* 916aaf: mulps xmm5, xmm4 */
  guest_unsupported(0x916aaf); /* mulps xmm5, xmm4 */
/* 916ab2: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 916ab5: movaps xmm4, xmm2 */
  guest_unsupported(0x916ab5); /* movaps xmm4, xmm2 */
/* 916ab8: shufps xmm4, xmm2, 0xaa */
  guest_unsupported(0x916ab8); /* shufps xmm4, xmm2, 0xaa */
/* 916abc: mulps xmm6, xmm4 */
  guest_unsupported(0x916abc); /* mulps xmm6, xmm4 */
/* 916abf: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 916ac2: movaps xmm4, xmm2 */
  guest_unsupported(0x916ac2); /* movaps xmm4, xmm2 */
/* 916ac5: shufps xmm4, xmm2, 0x55 */
  guest_unsupported(0x916ac5); /* shufps xmm4, xmm2, 0x55 */
/* 916ac9: mulps xmm7, xmm4 */
  guest_unsupported(0x916ac9); /* mulps xmm7, xmm4 */
/* 916acc: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 916acf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 916ad2: movaps xmm4, xmm2 */
  guest_unsupported(0x916ad2); /* movaps xmm4, xmm2 */
/* 916ad5: shufps xmm4, xmm2, 0 */
  guest_unsupported(0x916ad5); /* shufps xmm4, xmm2, 0 */
/* 916ad9: movaps xmm2, xmmword ptr [esi] */
  guest_unsupported(0x916ad9); /* movaps xmm2, xmmword ptr [esi] */
/* 916adc: mulps xmm2, xmm4 */
  guest_unsupported(0x916adc); /* mulps xmm2, xmm4 */
/* 916adf: movaps xmm4, xmmword ptr [ebp - 0x30] */
  guest_unsupported(0x916adf); /* movaps xmm4, xmmword ptr [ebp - 0x30] */
/* 916ae3: addps xmm4, xmm2 */
  guest_unsupported(0x916ae3); /* addps xmm4, xmm2 */
/* 916ae6: addps xmm4, xmm7 */
  guest_unsupported(0x916ae6); /* addps xmm4, xmm7 */
/* 916ae9: addps xmm4, xmm6 */
  guest_unsupported(0x916ae9); /* addps xmm4, xmm6 */
/* 916aec: movaps xmm6, xmmword ptr [ebp - 0x50] */
  guest_unsupported(0x916aec); /* movaps xmm6, xmmword ptr [ebp - 0x50] */
/* 916af0: movaps xmm2, xmm4 */
  guest_unsupported(0x916af0); /* movaps xmm2, xmm4 */
/* 916af3: movaps xmm4, xmmword ptr [ebp - 0x40] */
  guest_unsupported(0x916af3); /* movaps xmm4, xmmword ptr [ebp - 0x40] */
/* 916af7: addps xmm2, xmm5 */
  guest_unsupported(0x916af7); /* addps xmm2, xmm5 */
/* 916afa: movaps xmm5, xmm2 */
  guest_unsupported(0x916afa); /* movaps xmm5, xmm2 */
/* 916afd: movaps xmmword ptr [ebp - 0x30], xmm5 */
  guest_unsupported(0x916afd); /* movaps xmmword ptr [ebp - 0x30], xmm5 */
L_916b01: /* 916b01: add dword ptr [ebp - 8], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 916b05: mov esi, dword ptr [ebp - 0x10] */
  esi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 916b08: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 916b0b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 916b0c: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 916b0f: jne 0x916a90 */
  if (!zf) goto L_916a90;
L_916b15: /* 916b15: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_916b18: /* 916b18: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916b1a: jge 0x916b8b */
  if ((sf == of)) goto L_916b8b;
L_916b1c: /* 916b1c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 916b1f: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 916b22: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 916b25: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 916b28: lea esi, [eax*4] */
  esi = (uint32_t)(eax*4);
/* 916b2f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 916b32: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* 916b35: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 916b38: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 916b3a: lea edi, [edi + esi*4] */
  edi = (uint32_t)(edi + esi*4);
/* 916b3d: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
L_916b40: /* 916b40: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 916b42: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 916b44: je 0x916b79 */
  if (zf) goto L_916b79;
L_916b46: /* 916b46: movaps xmm2, xmmword ptr [ecx] */
  guest_unsupported(0x916b46); /* movaps xmm2, xmmword ptr [ecx] */
/* 916b49: movaps xmm7, xmmword ptr [esi] */
  guest_unsupported(0x916b49); /* movaps xmm7, xmmword ptr [esi] */
/* 916b4c: mulps xmm7, xmm2 */
  guest_unsupported(0x916b4c); /* mulps xmm7, xmm2 */
/* 916b4f: addps xmm0, xmm7 */
  guest_unsupported(0x916b4f); /* addps xmm0, xmm7 */
/* 916b52: movaps xmm7, xmmword ptr [esi + 0x10] */
  guest_unsupported(0x916b52); /* movaps xmm7, xmmword ptr [esi + 0x10] */
/* 916b56: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 916b59: mulps xmm7, xmm2 */
  guest_unsupported(0x916b59); /* mulps xmm7, xmm2 */
/* 916b5c: addps xmm3, xmm7 */
  guest_unsupported(0x916b5c); /* addps xmm3, xmm7 */
/* 916b5f: movaps xmm7, xmmword ptr [esi + 0x20] */
  guest_unsupported(0x916b5f); /* movaps xmm7, xmmword ptr [esi + 0x20] */
/* 916b63: lea eax, [esi + 0x20] */
  eax = (uint32_t)(esi + 0x20u);
/* 916b66: mulps xmm7, xmm2 */
  guest_unsupported(0x916b66); /* mulps xmm7, xmm2 */
/* 916b69: addps xmm1, xmm7 */
  guest_unsupported(0x916b69); /* addps xmm1, xmm7 */
/* 916b6c: movaps xmm7, xmmword ptr [esi + 0x30] */
  guest_unsupported(0x916b6c); /* movaps xmm7, xmmword ptr [esi + 0x30] */
/* 916b70: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 916b73: mulps xmm7, xmm2 */
  guest_unsupported(0x916b73); /* mulps xmm7, xmm2 */
/* 916b76: addps xmm4, xmm7 */
  guest_unsupported(0x916b76); /* addps xmm4, xmm7 */
L_916b79: /* 916b79: add edi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 916b7c: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 916b7f: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 916b82: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 916b83: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 916b86: jne 0x916b40 */
  if (!zf) goto L_916b40;
L_916b88: /* 916b88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
L_916b8b: /* 916b8b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 916b8e: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916b91: movaps xmm2, xmm3 */
  guest_unsupported(0x916b91); /* movaps xmm2, xmm3 */
/* 916b94: movhlps xmm2, xmm0 */
  guest_unsupported(0x916b94); /* movhlps xmm2, xmm0 */
/* 916b97: movlhps xmm0, xmm3 */
  guest_unsupported(0x916b97); /* movlhps xmm0, xmm3 */
/* 916b9a: addps xmm0, xmm2 */
  guest_unsupported(0x916b9a); /* addps xmm0, xmm2 */
/* 916b9d: movaps xmm2, xmm4 */
  guest_unsupported(0x916b9d); /* movaps xmm2, xmm4 */
/* 916ba0: movhlps xmm2, xmm1 */
  guest_unsupported(0x916ba0); /* movhlps xmm2, xmm1 */
/* 916ba3: movlhps xmm1, xmm4 */
  guest_unsupported(0x916ba3); /* movlhps xmm1, xmm4 */
/* 916ba6: addps xmm1, xmm2 */
  guest_unsupported(0x916ba6); /* addps xmm1, xmm2 */
/* 916ba9: movaps xmm2, xmm0 */
  guest_unsupported(0x916ba9); /* movaps xmm2, xmm0 */
/* 916bac: shufps xmm2, xmm1, 0x88 */
  guest_unsupported(0x916bac); /* shufps xmm2, xmm1, 0x88 */
/* 916bb0: shufps xmm0, xmm1, 0xdd */
  guest_unsupported(0x916bb0); /* shufps xmm0, xmm1, 0xdd */
/* 916bb4: addps xmm0, xmm2 */
  guest_unsupported(0x916bb4); /* addps xmm0, xmm2 */
/* 916bb7: addps xmm5, xmm0 */
  guest_unsupported(0x916bb7); /* addps xmm5, xmm0 */
/* 916bba: movaps xmmword ptr [eax], xmm5 */
  guest_unsupported(0x916bba); /* movaps xmmword ptr [eax], xmm5 */
/* 916bbd: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916bc0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 916bc3: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 916bc6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 916bc7: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 916bca: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916bcc: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 916bcf: jl 0x916a52 */
  if ((sf != of)) goto L_916a52;
L_916bd5: /* 916bd5: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 916bd8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 916bdb: nop  */
/* 916bdc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_916be0: /* 916be0: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 916be3: mov eax, esi */
  eax = esi;
/* 916be5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 916be6: mov edi, 0xc */
  edi = 0xcu;
/* 916beb: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x916beb);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 916bed: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 916bef: je 0x916bf5 */
  if (zf) goto L_916bf5;
L_916bf1: /* 916bf1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 916bf3: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_916bf5: /* 916bf5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 916bf8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 916bfa: je 0x916c0c */
  if (zf) goto L_916c0c;
L_916bfc: /* 916bfc: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 916bff: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 916c06: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 916c07: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 916c0a: jmp 0x916be0 */
  goto L_916be0;
L_916c0c: /* 916c0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 916c0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 916c0e: mov esp, ebp */
  esp = ebp;
/* 916c10: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 916c11: mov esp, ebx */
  esp = ebx;
/* 916c13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 916c14: ret 8 */
  esp += 12; SPILL(); return;
}

void f_916c20(void) {
  LOAD_REGS();
L_916c20: /* 916c20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 916c21: mov ebp, esp */
  ebp = esp;
/* 916c23: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 916c26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 916c27: mov esi, ecx */
  esi = ecx;
/* 916c29: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 916c2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 916c2d: xor edi, edi */
  edi = 0;
/* 916c2f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916c31: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 916c34: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 916c37: jle 0x916cce */
  if ((zf || sf != of)) goto L_916cce;
L_916c3d: /* 916c3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 916c3e: mov edi, edi */
  edi = edi;
L_916c40: /* 916c40: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 916c43: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 916c46: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 916c49: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 916c4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 916c4d: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916c50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 916c51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 916c52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 916c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 916c54: call 0x916f80 */
  esp -= 4; W32(esp, 0x916c59u); SPILL(); f_916f80(); if (g_unwind) return; RELOAD();
/* 916c59: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 916c5c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916c5f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916c61: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 916c64: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 916c67: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 916c6a: cmp ecx, dword ptr [edx + edi*4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + edi*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916c6d: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 916c70: mov ebx, ecx */
  ebx = ecx;
/* 916c72: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 916c75: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 916c78: jg 0x916cbd */
  if ((!zf && sf == of)) goto L_916cbd;
L_916c7a: /* 916c7a: mov edx, eax */
  edx = eax;
/* 916c7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_916c80: /* 916c80: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 916c83: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 916c86: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916c88: jg 0x916cab */
  if ((!zf && sf == of)) goto L_916cab;
L_916c8a: /* 916c8a: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 916c8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 916c8e: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 916c91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 916c92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 916c93: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 916c96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 916c97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 916c98: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916c9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 916c9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 916c9d: call 0x916ce0 */
  esp -= 4; W32(esp, 0x916ca2u); SPILL(); f_916ce0(); if (g_unwind) return; RELOAD();
/* 916ca2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 916ca5: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 916ca8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_916cab: /* 916cab: add edx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 916cae: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 916cb1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 916cb2: cmp ebx, dword ptr [eax + edi*4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edi*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916cb5: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 916cb8: jle 0x916c80 */
  if ((zf || sf != of)) goto L_916c80;
L_916cba: /* 916cba: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_916cbd: /* 916cbd: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 916cc0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 916cc3: mov edi, ecx */
  edi = ecx;
/* 916cc5: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 916cc7: jl 0x916c40 */
  if ((sf != of)) goto L_916c40;
L_916ccd: /* 916ccd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_916cce: /* 916cce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 916ccf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 916cd0: mov esp, ebp */
  esp = ebp;
/* 916cd2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 916cd3: ret  */
  esp += 4; SPILL(); return;
}

void f_916ce0(void) {
  LOAD_REGS();
L_916ce0: /* 916ce0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 916ce1: mov ebx, esp */
  ebx = esp;
/* 916ce3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 916ce4: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 916ce7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 916cea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 916ceb: mov ebp, esp */
  ebp = esp;
/* 916ced: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 916cf0: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 916cf3: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 916cf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 916cf7: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 916cfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 916cfb: lea edi, [esi + ecx] */
  edi = (uint32_t)(esi + ecx);
/* 916cfe: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 916d01: xorps xmm1, xmm1 */
  guest_unsupported(0x916d01); /* xorps xmm1, xmm1 */
/* 916d04: mov eax, edx */
  eax = edx;
/* 916d06: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 916d08: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 916d0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 916d0c: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 916d0f: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* 916d12: movaps xmmword ptr [ebp - 0x20], xmm1 */
  guest_unsupported(0x916d12); /* movaps xmmword ptr [ebp - 0x20], xmm1 */
/* 916d16: movaps xmm5, xmm1 */
  guest_unsupported(0x916d16); /* movaps xmm5, xmm1 */
/* 916d19: movaps xmm2, xmm1 */
  guest_unsupported(0x916d19); /* movaps xmm2, xmm1 */
/* 916d1c: movaps xmm3, xmm1 */
  guest_unsupported(0x916d1c); /* movaps xmm3, xmm1 */
/* 916d1f: movaps xmm4, xmm1 */
  guest_unsupported(0x916d1f); /* movaps xmm4, xmm1 */
/* 916d22: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 916d25: jle 0x916db7 */
  if ((zf || sf != of)) goto L_916db7;
L_916d2b: /* 916d2b: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 916d2e: mov edi, edi */
  edi = edi;
L_916d30: /* 916d30: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 916d33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 916d35: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916d38: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 916d3b: je 0x916d9f */
  if (zf) goto L_916d9f;
L_916d3d: /* 916d3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 916d3f: je 0x916d9f */
  if (zf) goto L_916d9f;
L_916d41: /* 916d41: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 916d43: mov edx, 4 */
  edx = 0x4u;
L_916d48: /* 916d48: movaps xmm0, xmmword ptr [ecx + eax] */
  guest_unsupported(0x916d48); /* movaps xmm0, xmmword ptr [ecx + eax] */
/* 916d4c: movaps xmm1, xmmword ptr [eax] */
  guest_unsupported(0x916d4c); /* movaps xmm1, xmmword ptr [eax] */
/* 916d4f: lea edi, [ecx + eax] */
  edi = (uint32_t)(ecx + eax);
/* 916d52: movaps xmm6, xmm0 */
  guest_unsupported(0x916d52); /* movaps xmm6, xmm0 */
/* 916d55: shufps xmm6, xmm0, 0 */
  guest_unsupported(0x916d55); /* shufps xmm6, xmm0, 0 */
/* 916d59: movaps xmm7, xmm1 */
  guest_unsupported(0x916d59); /* movaps xmm7, xmm1 */
/* 916d5c: mulps xmm7, xmm6 */
  guest_unsupported(0x916d5c); /* mulps xmm7, xmm6 */
/* 916d5f: addps xmm5, xmm7 */
  guest_unsupported(0x916d5f); /* addps xmm5, xmm7 */
/* 916d62: movaps xmm6, xmm0 */
  guest_unsupported(0x916d62); /* movaps xmm6, xmm0 */
/* 916d65: shufps xmm6, xmm0, 0x55 */
  guest_unsupported(0x916d65); /* shufps xmm6, xmm0, 0x55 */
/* 916d69: movaps xmm7, xmm1 */
  guest_unsupported(0x916d69); /* movaps xmm7, xmm1 */
/* 916d6c: mulps xmm7, xmm6 */
  guest_unsupported(0x916d6c); /* mulps xmm7, xmm6 */
/* 916d6f: addps xmm2, xmm7 */
  guest_unsupported(0x916d6f); /* addps xmm2, xmm7 */
/* 916d72: movaps xmm6, xmm0 */
  guest_unsupported(0x916d72); /* movaps xmm6, xmm0 */
/* 916d75: shufps xmm6, xmm0, 0xaa */
  guest_unsupported(0x916d75); /* shufps xmm6, xmm0, 0xaa */
/* 916d79: movaps xmm7, xmm1 */
  guest_unsupported(0x916d79); /* movaps xmm7, xmm1 */
/* 916d7c: mulps xmm7, xmm6 */
  guest_unsupported(0x916d7c); /* mulps xmm7, xmm6 */
/* 916d7f: movaps xmm6, xmm0 */
  guest_unsupported(0x916d7f); /* movaps xmm6, xmm0 */
/* 916d82: shufps xmm6, xmm0, 0xff */
  guest_unsupported(0x916d82); /* shufps xmm6, xmm0, 0xff */
/* 916d86: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916d89: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 916d8a: mulps xmm1, xmm6 */
  guest_unsupported(0x916d8a); /* mulps xmm1, xmm6 */
/* 916d8d: addps xmm3, xmm7 */
  guest_unsupported(0x916d8d); /* addps xmm3, xmm7 */
/* 916d90: addps xmm4, xmm1 */
  guest_unsupported(0x916d90); /* addps xmm4, xmm1 */
/* 916d93: jne 0x916d48 */
  if (!zf) goto L_916d48;
L_916d95: /* 916d95: movaps xmm1, xmmword ptr [ebp - 0x20] */
  guest_unsupported(0x916d95); /* movaps xmm1, xmmword ptr [ebp - 0x20] */
/* 916d99: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 916d9c: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
L_916d9f: /* 916d9f: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916da2: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 916da5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 916da6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 916da7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 916da8: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 916dab: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 916dae: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 916db1: jne 0x916d30 */
  if (!zf) goto L_916d30;
L_916db7: /* 916db7: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 916dba: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916dbd: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 916dc0: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 916dc3: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 916dc6: movaps xmm0, xmmword ptr [edx + edi] */
  guest_unsupported(0x916dc6); /* movaps xmm0, xmmword ptr [edx + edi] */
/* 916dca: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 916dcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 916dce: je 0x916e9b */
  if (zf) goto L_916e9b;
L_916dd4: /* 916dd4: movaps xmm1, xmm0 */
  guest_unsupported(0x916dd4); /* movaps xmm1, xmm0 */
/* 916dd7: shufps xmm1, xmm0, 0 */
  guest_unsupported(0x916dd7); /* shufps xmm1, xmm0, 0 */
/* 916ddb: movaps xmm6, xmm1 */
  guest_unsupported(0x916ddb); /* movaps xmm6, xmm1 */
/* 916dde: movaps xmm1, xmmword ptr [eax] */
  guest_unsupported(0x916dde); /* movaps xmm1, xmmword ptr [eax] */
/* 916de1: subps xmm1, xmm5 */
  guest_unsupported(0x916de1); /* subps xmm1, xmm5 */
/* 916de4: mulps xmm1, xmm6 */
  guest_unsupported(0x916de4); /* mulps xmm1, xmm6 */
/* 916de7: movaps xmmword ptr [eax], xmm1 */
  guest_unsupported(0x916de7); /* movaps xmmword ptr [eax], xmm1 */
/* 916dea: movaps xmm5, xmmword ptr [ecx] */
  guest_unsupported(0x916dea); /* movaps xmm5, xmmword ptr [ecx] */
/* 916ded: movaps xmm7, xmm1 */
  guest_unsupported(0x916ded); /* movaps xmm7, xmm1 */
/* 916df0: movaps xmm6, xmm5 */
  guest_unsupported(0x916df0); /* movaps xmm6, xmm5 */
/* 916df3: shufps xmm6, xmm5, 0xaa */
  guest_unsupported(0x916df3); /* shufps xmm6, xmm5, 0xaa */
/* 916df7: mulps xmm7, xmm6 */
  guest_unsupported(0x916df7); /* mulps xmm7, xmm6 */
/* 916dfa: addps xmm3, xmm7 */
  guest_unsupported(0x916dfa); /* addps xmm3, xmm7 */
/* 916dfd: movaps xmm7, xmm1 */
  guest_unsupported(0x916dfd); /* movaps xmm7, xmm1 */
/* 916e00: movaps xmm6, xmm5 */
  guest_unsupported(0x916e00); /* movaps xmm6, xmm5 */
/* 916e03: shufps xmm6, xmm5, 0xff */
  guest_unsupported(0x916e03); /* shufps xmm6, xmm5, 0xff */
/* 916e07: mulps xmm7, xmm6 */
  guest_unsupported(0x916e07); /* mulps xmm7, xmm6 */
/* 916e0a: addps xmm4, xmm7 */
  guest_unsupported(0x916e0a); /* addps xmm4, xmm7 */
/* 916e0d: movaps xmm7, xmm5 */
  guest_unsupported(0x916e0d); /* movaps xmm7, xmm5 */
/* 916e10: shufps xmm7, xmm5, 0x55 */
  guest_unsupported(0x916e10); /* shufps xmm7, xmm5, 0x55 */
/* 916e14: mulps xmm1, xmm7 */
  guest_unsupported(0x916e14); /* mulps xmm1, xmm7 */
/* 916e17: addps xmm2, xmm1 */
  guest_unsupported(0x916e17); /* addps xmm2, xmm1 */
/* 916e1a: movaps xmm1, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x916e1a); /* movaps xmm1, xmmword ptr [eax + 0x10] */
/* 916e1e: subps xmm1, xmm2 */
  guest_unsupported(0x916e1e); /* subps xmm1, xmm2 */
/* 916e21: movaps xmm6, xmm0 */
  guest_unsupported(0x916e21); /* movaps xmm6, xmm0 */
/* 916e24: shufps xmm6, xmm0, 0x55 */
  guest_unsupported(0x916e24); /* shufps xmm6, xmm0, 0x55 */
/* 916e28: mulps xmm1, xmm6 */
  guest_unsupported(0x916e28); /* mulps xmm1, xmm6 */
/* 916e2b: movaps xmmword ptr [eax + 0x10], xmm1 */
  guest_unsupported(0x916e2b); /* movaps xmmword ptr [eax + 0x10], xmm1 */
/* 916e2f: movaps xmm2, xmmword ptr [ecx + 0x10] */
  guest_unsupported(0x916e2f); /* movaps xmm2, xmmword ptr [ecx + 0x10] */
/* 916e33: lea edx, [ecx + 0x10] */
  edx = (uint32_t)(ecx + 0x10u);
/* 916e36: movaps xmm6, xmm1 */
  guest_unsupported(0x916e36); /* movaps xmm6, xmm1 */
/* 916e39: movaps xmm5, xmm2 */
  guest_unsupported(0x916e39); /* movaps xmm5, xmm2 */
/* 916e3c: shufps xmm5, xmm2, 0xff */
  guest_unsupported(0x916e3c); /* shufps xmm5, xmm2, 0xff */
/* 916e40: mulps xmm6, xmm5 */
  guest_unsupported(0x916e40); /* mulps xmm6, xmm5 */
/* 916e43: addps xmm4, xmm6 */
  guest_unsupported(0x916e43); /* addps xmm4, xmm6 */
/* 916e46: movaps xmm5, xmm0 */
  guest_unsupported(0x916e46); /* movaps xmm5, xmm0 */
/* 916e49: movaps xmm6, xmm2 */
  guest_unsupported(0x916e49); /* movaps xmm6, xmm2 */
/* 916e4c: shufps xmm5, xmm0, 0xaa */
  guest_unsupported(0x916e4c); /* shufps xmm5, xmm0, 0xaa */
/* 916e50: shufps xmm6, xmm2, 0xaa */
  guest_unsupported(0x916e50); /* shufps xmm6, xmm2, 0xaa */
/* 916e54: mulps xmm1, xmm6 */
  guest_unsupported(0x916e54); /* mulps xmm1, xmm6 */
/* 916e57: addps xmm3, xmm1 */
  guest_unsupported(0x916e57); /* addps xmm3, xmm1 */
/* 916e5a: movaps xmm1, xmmword ptr [eax + 0x20] */
  guest_unsupported(0x916e5a); /* movaps xmm1, xmmword ptr [eax + 0x20] */
/* 916e5e: subps xmm1, xmm3 */
  guest_unsupported(0x916e5e); /* subps xmm1, xmm3 */
/* 916e61: movaps xmm3, xmm0 */
  guest_unsupported(0x916e61); /* movaps xmm3, xmm0 */
/* 916e64: shufps xmm3, xmm0, 0xff */
  guest_unsupported(0x916e64); /* shufps xmm3, xmm0, 0xff */
/* 916e68: mulps xmm1, xmm5 */
  guest_unsupported(0x916e68); /* mulps xmm1, xmm5 */
/* 916e6b: movaps xmmword ptr [eax + 0x20], xmm1 */
  guest_unsupported(0x916e6b); /* movaps xmmword ptr [eax + 0x20], xmm1 */
/* 916e6f: movaps xmm2, xmmword ptr [ecx + 0x20] */
  guest_unsupported(0x916e6f); /* movaps xmm2, xmmword ptr [ecx + 0x20] */
/* 916e73: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 916e76: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916e79: movaps xmm0, xmm2 */
  guest_unsupported(0x916e79); /* movaps xmm0, xmm2 */
/* 916e7c: shufps xmm0, xmm2, 0xff */
  guest_unsupported(0x916e7c); /* shufps xmm0, xmm2, 0xff */
/* 916e80: mulps xmm1, xmm0 */
  guest_unsupported(0x916e80); /* mulps xmm1, xmm0 */
/* 916e83: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0x916e83); /* movaps xmm0, xmmword ptr [eax] */
/* 916e86: addps xmm4, xmm1 */
  guest_unsupported(0x916e86); /* addps xmm4, xmm1 */
/* 916e89: subps xmm0, xmm4 */
  guest_unsupported(0x916e89); /* subps xmm0, xmm4 */
/* 916e8c: mulps xmm0, xmm3 */
  guest_unsupported(0x916e8c); /* mulps xmm0, xmm3 */
/* 916e8f: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x916e8f); /* movaps xmmword ptr [eax], xmm0 */
/* 916e92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 916e93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 916e94: mov esp, ebp */
  esp = ebp;
/* 916e96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 916e97: mov esp, ebx */
  esp = ebx;
/* 916e99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 916e9a: ret  */
  esp += 4; SPILL(); return;
L_916e9b: /* 916e9b: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 916e9e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 916ea0: subps xmm1, xmm5 */
  guest_unsupported(0x916ea0); /* subps xmm1, xmm5 */
/* 916ea3: lea edi, [eax + 0x40] */
  edi = (uint32_t)(eax + 0x40u);
/* 916ea6: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 916ea8: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 916eab: mov dword ptr [esi + edx*4], eax */
  W32((uint32_t)(esi + edx*4), eax);
/* 916eae: movaps xmm6, xmm0 */
  guest_unsupported(0x916eae); /* movaps xmm6, xmm0 */
/* 916eb1: shufps xmm6, xmm0, 0 */
  guest_unsupported(0x916eb1); /* shufps xmm6, xmm0, 0 */
/* 916eb5: mulps xmm1, xmm6 */
  guest_unsupported(0x916eb5); /* mulps xmm1, xmm6 */
/* 916eb8: movaps xmmword ptr [eax], xmm1 */
  guest_unsupported(0x916eb8); /* movaps xmmword ptr [eax], xmm1 */
/* 916ebb: movaps xmm5, xmmword ptr [ecx] */
  guest_unsupported(0x916ebb); /* movaps xmm5, xmmword ptr [ecx] */
/* 916ebe: movaps xmm7, xmm1 */
  guest_unsupported(0x916ebe); /* movaps xmm7, xmm1 */
/* 916ec1: movaps xmm6, xmm5 */
  guest_unsupported(0x916ec1); /* movaps xmm6, xmm5 */
/* 916ec4: shufps xmm6, xmm5, 0xaa */
  guest_unsupported(0x916ec4); /* shufps xmm6, xmm5, 0xaa */
/* 916ec8: mulps xmm7, xmm6 */
  guest_unsupported(0x916ec8); /* mulps xmm7, xmm6 */
/* 916ecb: addps xmm3, xmm7 */
  guest_unsupported(0x916ecb); /* addps xmm3, xmm7 */
/* 916ece: movaps xmm7, xmm1 */
  guest_unsupported(0x916ece); /* movaps xmm7, xmm1 */
/* 916ed1: movaps xmm6, xmm5 */
  guest_unsupported(0x916ed1); /* movaps xmm6, xmm5 */
/* 916ed4: shufps xmm6, xmm5, 0xff */
  guest_unsupported(0x916ed4); /* shufps xmm6, xmm5, 0xff */
/* 916ed8: mulps xmm7, xmm6 */
  guest_unsupported(0x916ed8); /* mulps xmm7, xmm6 */
/* 916edb: addps xmm4, xmm7 */
  guest_unsupported(0x916edb); /* addps xmm4, xmm7 */
/* 916ede: movaps xmm7, xmm5 */
  guest_unsupported(0x916ede); /* movaps xmm7, xmm5 */
/* 916ee1: shufps xmm7, xmm5, 0x55 */
  guest_unsupported(0x916ee1); /* shufps xmm7, xmm5, 0x55 */
/* 916ee5: mulps xmm1, xmm7 */
  guest_unsupported(0x916ee5); /* mulps xmm1, xmm7 */
/* 916ee8: addps xmm2, xmm1 */
  guest_unsupported(0x916ee8); /* addps xmm2, xmm1 */
/* 916eeb: movaps xmm1, xmm2 */
  guest_unsupported(0x916eeb); /* movaps xmm1, xmm2 */
/* 916eee: movaps xmm2, xmmword ptr [ebp - 0x20] */
  guest_unsupported(0x916eee); /* movaps xmm2, xmmword ptr [ebp - 0x20] */
/* 916ef2: movaps xmm5, xmm2 */
  guest_unsupported(0x916ef2); /* movaps xmm5, xmm2 */
/* 916ef5: subps xmm5, xmm1 */
  guest_unsupported(0x916ef5); /* subps xmm5, xmm1 */
/* 916ef8: movaps xmm6, xmm0 */
  guest_unsupported(0x916ef8); /* movaps xmm6, xmm0 */
/* 916efb: shufps xmm6, xmm0, 0x55 */
  guest_unsupported(0x916efb); /* shufps xmm6, xmm0, 0x55 */
/* 916eff: movaps xmm1, xmm5 */
  guest_unsupported(0x916eff); /* movaps xmm1, xmm5 */
/* 916f02: mulps xmm1, xmm6 */
  guest_unsupported(0x916f02); /* mulps xmm1, xmm6 */
/* 916f05: movaps xmmword ptr [eax + 0x10], xmm1 */
  guest_unsupported(0x916f05); /* movaps xmmword ptr [eax + 0x10], xmm1 */
/* 916f09: movaps xmm5, xmmword ptr [ecx + 0x10] */
  guest_unsupported(0x916f09); /* movaps xmm5, xmmword ptr [ecx + 0x10] */
/* 916f0d: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 916f10: lea edx, [ecx + 0x10] */
  edx = (uint32_t)(ecx + 0x10u);
/* 916f13: movaps xmm7, xmm1 */
  guest_unsupported(0x916f13); /* movaps xmm7, xmm1 */
/* 916f16: movaps xmm6, xmm5 */
  guest_unsupported(0x916f16); /* movaps xmm6, xmm5 */
/* 916f19: shufps xmm6, xmm5, 0xff */
  guest_unsupported(0x916f19); /* shufps xmm6, xmm5, 0xff */
/* 916f1d: mulps xmm7, xmm6 */
  guest_unsupported(0x916f1d); /* mulps xmm7, xmm6 */
/* 916f20: addps xmm4, xmm7 */
  guest_unsupported(0x916f20); /* addps xmm4, xmm7 */
/* 916f23: movaps xmm7, xmm5 */
  guest_unsupported(0x916f23); /* movaps xmm7, xmm5 */
/* 916f26: shufps xmm7, xmm5, 0xaa */
  guest_unsupported(0x916f26); /* shufps xmm7, xmm5, 0xaa */
/* 916f2a: mulps xmm1, xmm7 */
  guest_unsupported(0x916f2a); /* mulps xmm1, xmm7 */
/* 916f2d: addps xmm3, xmm1 */
  guest_unsupported(0x916f2d); /* addps xmm3, xmm1 */
/* 916f30: movaps xmm6, xmm0 */
  guest_unsupported(0x916f30); /* movaps xmm6, xmm0 */
/* 916f33: movaps xmm1, xmm2 */
  guest_unsupported(0x916f33); /* movaps xmm1, xmm2 */
/* 916f36: shufps xmm6, xmm0, 0xaa */
  guest_unsupported(0x916f36); /* shufps xmm6, xmm0, 0xaa */
/* 916f3a: subps xmm1, xmm3 */
  guest_unsupported(0x916f3a); /* subps xmm1, xmm3 */
/* 916f3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 916f3e: lea edx, [eax + 0x20] */
  edx = (uint32_t)(eax + 0x20u);
/* 916f41: mulps xmm1, xmm6 */
  guest_unsupported(0x916f41); /* mulps xmm1, xmm6 */
/* 916f44: movaps xmmword ptr [edx], xmm1 */
  guest_unsupported(0x916f44); /* movaps xmmword ptr [edx], xmm1 */
/* 916f47: movaps xmm3, xmmword ptr [ecx + 0x20] */
  guest_unsupported(0x916f47); /* movaps xmm3, xmmword ptr [ecx + 0x20] */
/* 916f4b: movaps xmm5, xmm0 */
  guest_unsupported(0x916f4b); /* movaps xmm5, xmm0 */
/* 916f4e: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 916f51: shufps xmm5, xmm0, 0xff */
  guest_unsupported(0x916f51); /* shufps xmm5, xmm0, 0xff */
/* 916f55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 916f56: movaps xmm0, xmm3 */
  guest_unsupported(0x916f56); /* movaps xmm0, xmm3 */
/* 916f59: shufps xmm0, xmm3, 0xff */
  guest_unsupported(0x916f59); /* shufps xmm0, xmm3, 0xff */
/* 916f5d: mov esp, ebp */
  esp = ebp;
/* 916f5f: mulps xmm1, xmm0 */
  guest_unsupported(0x916f5f); /* mulps xmm1, xmm0 */
/* 916f62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 916f63: addps xmm4, xmm1 */
  guest_unsupported(0x916f63); /* addps xmm4, xmm1 */
/* 916f66: subps xmm2, xmm4 */
  guest_unsupported(0x916f66); /* subps xmm2, xmm4 */
/* 916f69: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916f6c: mov esp, ebx */
  esp = ebx;
/* 916f6e: mulps xmm2, xmm5 */
  guest_unsupported(0x916f6e); /* mulps xmm2, xmm5 */
/* 916f71: movaps xmmword ptr [eax], xmm2 */
  guest_unsupported(0x916f71); /* movaps xmmword ptr [eax], xmm2 */
/* 916f74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 916f75: ret  */
  esp += 4; SPILL(); return;
}

void f_916f80(void) {
  LOAD_REGS();
L_916f80: /* 916f80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 916f81: mov ebx, esp */
  ebx = esp;
/* 916f83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 916f84: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 916f87: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 916f8a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 916f8b: mov ebp, esp */
  ebp = esp;
/* 916f8d: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 916f90: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 916f93: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 916f96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 916f97: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 916f9a: mov eax, ecx */
  eax = ecx;
/* 916f9c: xorps xmm1, xmm1 */
  guest_unsupported(0x916f9c); /* xorps xmm1, xmm1 */
/* 916f9f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 916fa1: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 916fa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 916fa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 916fa6: mov edi, dword ptr [ebx + 0x18] */
  edi = R32((uint32_t)(ebx + 0x18u));
/* 916fa9: movaps xmm3, xmm1 */
  guest_unsupported(0x916fa9); /* movaps xmm3, xmm1 */
/* 916fac: movaps xmm5, xmm1 */
  guest_unsupported(0x916fac); /* movaps xmm5, xmm1 */
/* 916faf: movaps xmm6, xmm1 */
  guest_unsupported(0x916faf); /* movaps xmm6, xmm1 */
/* 916fb2: jle 0x917013 */
  if ((zf || sf != of)) goto L_917013;
L_916fb4: /* 916fb4: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_916fb7: /* 916fb7: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 916fba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 916fbc: je 0x917009 */
  if (zf) goto L_917009;
L_916fbe: /* 916fbe: mov edx, 4 */
  edx = 0x4u;
L_916fc3: /* 916fc3: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0x916fc3); /* movaps xmm0, xmmword ptr [eax] */
/* 916fc6: movaps xmm2, xmm0 */
  guest_unsupported(0x916fc6); /* movaps xmm2, xmm0 */
/* 916fc9: shufps xmm2, xmm0, 0 */
  guest_unsupported(0x916fc9); /* shufps xmm2, xmm0, 0 */
/* 916fcd: movaps xmm4, xmm0 */
  guest_unsupported(0x916fcd); /* movaps xmm4, xmm0 */
/* 916fd0: mulps xmm4, xmm2 */
  guest_unsupported(0x916fd0); /* mulps xmm4, xmm2 */
/* 916fd3: addps xmm1, xmm4 */
  guest_unsupported(0x916fd3); /* addps xmm1, xmm4 */
/* 916fd6: movaps xmm2, xmm0 */
  guest_unsupported(0x916fd6); /* movaps xmm2, xmm0 */
/* 916fd9: shufps xmm2, xmm0, 0x55 */
  guest_unsupported(0x916fd9); /* shufps xmm2, xmm0, 0x55 */
/* 916fdd: movaps xmm4, xmm0 */
  guest_unsupported(0x916fdd); /* movaps xmm4, xmm0 */
/* 916fe0: mulps xmm4, xmm2 */
  guest_unsupported(0x916fe0); /* mulps xmm4, xmm2 */
/* 916fe3: addps xmm3, xmm4 */
  guest_unsupported(0x916fe3); /* addps xmm3, xmm4 */
/* 916fe6: movaps xmm2, xmm0 */
  guest_unsupported(0x916fe6); /* movaps xmm2, xmm0 */
/* 916fe9: shufps xmm2, xmm0, 0xaa */
  guest_unsupported(0x916fe9); /* shufps xmm2, xmm0, 0xaa */
/* 916fed: movaps xmm4, xmm0 */
  guest_unsupported(0x916fed); /* movaps xmm4, xmm0 */
/* 916ff0: mulps xmm4, xmm2 */
  guest_unsupported(0x916ff0); /* mulps xmm4, xmm2 */
/* 916ff3: movaps xmm2, xmm0 */
  guest_unsupported(0x916ff3); /* movaps xmm2, xmm0 */
/* 916ff6: shufps xmm2, xmm0, 0xff */
  guest_unsupported(0x916ff6); /* shufps xmm2, xmm0, 0xff */
/* 916ffa: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 916ffd: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 916ffe: mulps xmm0, xmm2 */
  guest_unsupported(0x916ffe); /* mulps xmm0, xmm2 */
/* 917001: addps xmm5, xmm4 */
  guest_unsupported(0x917001); /* addps xmm5, xmm4 */
/* 917004: addps xmm6, xmm0 */
  guest_unsupported(0x917004); /* addps xmm6, xmm0 */
/* 917007: jne 0x916fc3 */
  if (!zf) goto L_916fc3;
L_917009: /* 917009: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91700c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91700d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91700e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 917011: jne 0x916fb7 */
  if (!zf) goto L_916fb7;
L_917013: /* 917013: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 917016: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0x917016); /* movaps xmm0, xmmword ptr [eax] */
/* 917019: subps xmm0, xmm1 */
  guest_unsupported(0x917019); /* subps xmm0, xmm1 */
/* 91701c: movaps xmm1, xmm0 */
  guest_unsupported(0x91701c); /* movaps xmm1, xmm0 */
/* 91701f: shufps xmm1, xmm0, 0 */
  guest_unsupported(0x91701f); /* shufps xmm1, xmm0, 0 */
/* 917023: rsqrtps xmm2, xmm1 */
  guest_unsupported(0x917023); /* rsqrtps xmm2, xmm1 */
/* 917026: mulps xmm1, xmm2 */
  guest_unsupported(0x917026); /* mulps xmm1, xmm2 */
/* 917029: mulps xmm1, xmm2 */
  guest_unsupported(0x917029); /* mulps xmm1, xmm2 */
/* 91702c: mov edx, 0xa20f10 */
  edx = 0xa20f10u;
/* 917031: movaps xmm4, xmmword ptr [edx] */
  guest_unsupported(0x917031); /* movaps xmm4, xmmword ptr [edx] */
/* 917034: subps xmm4, xmm1 */
  guest_unsupported(0x917034); /* subps xmm4, xmm1 */
/* 917037: mulps xmm2, xmm4 */
  guest_unsupported(0x917037); /* mulps xmm2, xmm4 */
/* 91703a: mov edx, 0xa20f20 */
  edx = 0xa20f20u;
/* 91703f: movaps xmm1, xmmword ptr [edx] */
  guest_unsupported(0x91703f); /* movaps xmm1, xmmword ptr [edx] */
/* 917042: mulps xmm1, xmm2 */
  guest_unsupported(0x917042); /* mulps xmm1, xmm2 */
/* 917045: mulps xmm0, xmm1 */
  guest_unsupported(0x917045); /* mulps xmm0, xmm1 */
/* 917048: movaps xmm2, xmm0 */
  guest_unsupported(0x917048); /* movaps xmm2, xmm0 */
/* 91704b: shufps xmm2, xmm0, 0xaa */
  guest_unsupported(0x91704b); /* shufps xmm2, xmm0, 0xaa */
/* 91704f: movaps xmm7, xmm0 */
  guest_unsupported(0x91704f); /* movaps xmm7, xmm0 */
/* 917052: mulps xmm7, xmm2 */
  guest_unsupported(0x917052); /* mulps xmm7, xmm2 */
/* 917055: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x917055); /* movaps xmmword ptr [eax], xmm0 */
/* 917058: movaps xmm2, xmm0 */
  guest_unsupported(0x917058); /* movaps xmm2, xmm0 */
/* 91705b: shufps xmm2, xmm0, 0xff */
  guest_unsupported(0x91705b); /* shufps xmm2, xmm0, 0xff */
/* 91705f: movaps xmm4, xmm0 */
  guest_unsupported(0x91705f); /* movaps xmm4, xmm0 */
/* 917062: addps xmm5, xmm7 */
  guest_unsupported(0x917062); /* addps xmm5, xmm7 */
/* 917065: movaps xmm7, xmm5 */
  guest_unsupported(0x917065); /* movaps xmm7, xmm5 */
/* 917068: movaps xmm5, xmm0 */
  guest_unsupported(0x917068); /* movaps xmm5, xmm0 */
/* 91706b: mulps xmm5, xmm2 */
  guest_unsupported(0x91706b); /* mulps xmm5, xmm2 */
/* 91706e: movaps xmm2, xmm0 */
  guest_unsupported(0x91706e); /* movaps xmm2, xmm0 */
/* 917071: shufps xmm2, xmm0, 0x55 */
  guest_unsupported(0x917071); /* shufps xmm2, xmm0, 0x55 */
/* 917075: mulps xmm0, xmm2 */
  guest_unsupported(0x917075); /* mulps xmm0, xmm2 */
/* 917078: addps xmm3, xmm0 */
  guest_unsupported(0x917078); /* addps xmm3, xmm0 */
/* 91707b: movaps xmm0, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x91707b); /* movaps xmm0, xmmword ptr [eax + 0x10] */
/* 91707f: subps xmm0, xmm3 */
  guest_unsupported(0x91707f); /* subps xmm0, xmm3 */
/* 917082: movaps xmm2, xmm0 */
  guest_unsupported(0x917082); /* movaps xmm2, xmm0 */
/* 917085: shufps xmm2, xmm0, 0x55 */
  guest_unsupported(0x917085); /* shufps xmm2, xmm0, 0x55 */
/* 917089: rsqrtps xmm3, xmm2 */
  guest_unsupported(0x917089); /* rsqrtps xmm3, xmm2 */
/* 91708c: mulps xmm2, xmm3 */
  guest_unsupported(0x91708c); /* mulps xmm2, xmm3 */
/* 91708f: mulps xmm2, xmm3 */
  guest_unsupported(0x91708f); /* mulps xmm2, xmm3 */
/* 917092: addps xmm6, xmm5 */
  guest_unsupported(0x917092); /* addps xmm6, xmm5 */
/* 917095: mov edx, 0xa20f10 */
  edx = 0xa20f10u;
/* 91709a: movaps xmm5, xmmword ptr [edx] */
  guest_unsupported(0x91709a); /* movaps xmm5, xmmword ptr [edx] */
/* 91709d: subps xmm5, xmm2 */
  guest_unsupported(0x91709d); /* subps xmm5, xmm2 */
/* 9170a0: mulps xmm3, xmm5 */
  guest_unsupported(0x9170a0); /* mulps xmm3, xmm5 */
/* 9170a3: mov edx, 0xa20f20 */
  edx = 0xa20f20u;
/* 9170a8: movaps xmm5, xmmword ptr [edx] */
  guest_unsupported(0x9170a8); /* movaps xmm5, xmmword ptr [edx] */
/* 9170ab: mulps xmm5, xmm3 */
  guest_unsupported(0x9170ab); /* mulps xmm5, xmm3 */
/* 9170ae: mulps xmm0, xmm5 */
  guest_unsupported(0x9170ae); /* mulps xmm0, xmm5 */
/* 9170b1: movaps xmm2, xmm4 */
  guest_unsupported(0x9170b1); /* movaps xmm2, xmm4 */
/* 9170b4: unpcklps xmm2, xmm0 */
  guest_unsupported(0x9170b4); /* unpcklps xmm2, xmm0 */
/* 9170b7: movhlps xmm0, xmm2 */
  guest_unsupported(0x9170b7); /* movhlps xmm0, xmm2 */
/* 9170ba: movaps xmm2, xmm0 */
  guest_unsupported(0x9170ba); /* movaps xmm2, xmm0 */
/* 9170bd: shufps xmm2, xmm0, 0xff */
  guest_unsupported(0x9170bd); /* shufps xmm2, xmm0, 0xff */
/* 9170c1: movaps xmm3, xmm0 */
  guest_unsupported(0x9170c1); /* movaps xmm3, xmm0 */
/* 9170c4: mulps xmm3, xmm2 */
  guest_unsupported(0x9170c4); /* mulps xmm3, xmm2 */
/* 9170c7: movaps xmmword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0x9170c7); /* movaps xmmword ptr [eax + 0x10], xmm0 */
/* 9170cb: movaps xmm2, xmm0 */
  guest_unsupported(0x9170cb); /* movaps xmm2, xmm0 */
/* 9170ce: shufps xmm2, xmm0, 0xaa */
  guest_unsupported(0x9170ce); /* shufps xmm2, xmm0, 0xaa */
/* 9170d2: unpckhps xmm4, xmm0 */
  guest_unsupported(0x9170d2); /* unpckhps xmm4, xmm0 */
/* 9170d5: mulps xmm0, xmm2 */
  guest_unsupported(0x9170d5); /* mulps xmm0, xmm2 */
/* 9170d8: addps xmm7, xmm0 */
  guest_unsupported(0x9170d8); /* addps xmm7, xmm0 */
/* 9170db: movaps xmm0, xmmword ptr [eax + 0x20] */
  guest_unsupported(0x9170db); /* movaps xmm0, xmmword ptr [eax + 0x20] */
/* 9170df: addps xmm6, xmm3 */
  guest_unsupported(0x9170df); /* addps xmm6, xmm3 */
/* 9170e2: subps xmm0, xmm7 */
  guest_unsupported(0x9170e2); /* subps xmm0, xmm7 */
/* 9170e5: movaps xmm2, xmm0 */
  guest_unsupported(0x9170e5); /* movaps xmm2, xmm0 */
/* 9170e8: shufps xmm2, xmm0, 0xaa */
  guest_unsupported(0x9170e8); /* shufps xmm2, xmm0, 0xaa */
/* 9170ec: rsqrtps xmm3, xmm2 */
  guest_unsupported(0x9170ec); /* rsqrtps xmm3, xmm2 */
/* 9170ef: movaps xmmword ptr [ebp - 0x20], xmm6 */
  guest_unsupported(0x9170ef); /* movaps xmmword ptr [ebp - 0x20], xmm6 */
/* 9170f3: mulps xmm2, xmm3 */
  guest_unsupported(0x9170f3); /* mulps xmm2, xmm3 */
/* 9170f6: mov edx, 0xa20f10 */
  edx = 0xa20f10u;
/* 9170fb: movaps xmm6, xmmword ptr [edx] */
  guest_unsupported(0x9170fb); /* movaps xmm6, xmmword ptr [edx] */
/* 9170fe: mulps xmm2, xmm3 */
  guest_unsupported(0x9170fe); /* mulps xmm2, xmm3 */
/* 917101: subps xmm6, xmm2 */
  guest_unsupported(0x917101); /* subps xmm6, xmm2 */
/* 917104: mulps xmm3, xmm6 */
  guest_unsupported(0x917104); /* mulps xmm3, xmm6 */
/* 917107: mov edx, 0xa20f20 */
  edx = 0xa20f20u;
/* 91710c: movaps xmm6, xmmword ptr [edx] */
  guest_unsupported(0x91710c); /* movaps xmm6, xmmword ptr [edx] */
/* 91710f: mulps xmm6, xmm3 */
  guest_unsupported(0x91710f); /* mulps xmm6, xmm3 */
/* 917112: mulps xmm0, xmm6 */
  guest_unsupported(0x917112); /* mulps xmm0, xmm6 */
/* 917115: movaps xmm2, xmm0 */
  guest_unsupported(0x917115); /* movaps xmm2, xmm0 */
/* 917118: movaps xmm0, xmm4 */
  guest_unsupported(0x917118); /* movaps xmm0, xmm4 */
/* 91711b: shufps xmm0, xmm2, 0xe4 */
  guest_unsupported(0x91711b); /* shufps xmm0, xmm2, 0xe4 */
/* 91711f: movaps xmmword ptr [eax + 0x20], xmm0 */
  guest_unsupported(0x91711f); /* movaps xmmword ptr [eax + 0x20], xmm0 */
/* 917123: shufps xmm4, xmm0, 0xee */
  guest_unsupported(0x917123); /* shufps xmm4, xmm0, 0xee */
/* 917127: movaps xmm2, xmm0 */
  guest_unsupported(0x917127); /* movaps xmm2, xmm0 */
/* 91712a: shufps xmm2, xmm0, 0xff */
  guest_unsupported(0x91712a); /* shufps xmm2, xmm0, 0xff */
/* 91712e: mulps xmm0, xmm2 */
  guest_unsupported(0x91712e); /* mulps xmm0, xmm2 */
/* 917131: movaps xmm2, xmm0 */
  guest_unsupported(0x917131); /* movaps xmm2, xmm0 */
/* 917134: movaps xmm0, xmmword ptr [ebp - 0x20] */
  guest_unsupported(0x917134); /* movaps xmm0, xmmword ptr [ebp - 0x20] */
/* 917138: addps xmm0, xmm2 */
  guest_unsupported(0x917138); /* addps xmm0, xmm2 */
/* 91713b: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91713e: movaps xmm2, xmm0 */
  guest_unsupported(0x91713e); /* movaps xmm2, xmm0 */
/* 917141: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0x917141); /* movaps xmm0, xmmword ptr [eax] */
/* 917144: subps xmm0, xmm2 */
  guest_unsupported(0x917144); /* subps xmm0, xmm2 */
/* 917147: movaps xmm2, xmm0 */
  guest_unsupported(0x917147); /* movaps xmm2, xmm0 */
/* 91714a: shufps xmm2, xmm0, 0xff */
  guest_unsupported(0x91714a); /* shufps xmm2, xmm0, 0xff */
/* 91714e: rsqrtps xmm3, xmm2 */
  guest_unsupported(0x91714e); /* rsqrtps xmm3, xmm2 */
/* 917151: mulps xmm2, xmm3 */
  guest_unsupported(0x917151); /* mulps xmm2, xmm3 */
/* 917154: mulps xmm2, xmm3 */
  guest_unsupported(0x917154); /* mulps xmm2, xmm3 */
/* 917157: mov edx, 0xa20f10 */
  edx = 0xa20f10u;
/* 91715c: movaps xmm7, xmmword ptr [edx] */
  guest_unsupported(0x91715c); /* movaps xmm7, xmmword ptr [edx] */
/* 91715f: subps xmm7, xmm2 */
  guest_unsupported(0x91715f); /* subps xmm7, xmm2 */
/* 917162: mulps xmm3, xmm7 */
  guest_unsupported(0x917162); /* mulps xmm3, xmm7 */
/* 917165: mov edx, 0xa20f20 */
  edx = 0xa20f20u;
/* 91716a: movaps xmm2, xmmword ptr [edx] */
  guest_unsupported(0x91716a); /* movaps xmm2, xmmword ptr [edx] */
/* 91716d: mulps xmm2, xmm3 */
  guest_unsupported(0x91716d); /* mulps xmm2, xmm3 */
/* 917170: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 917171: mulps xmm0, xmm2 */
  guest_unsupported(0x917171); /* mulps xmm0, xmm2 */
/* 917174: movaps xmm3, xmm4 */
  guest_unsupported(0x917174); /* movaps xmm3, xmm4 */
/* 917177: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 917178: unpckhps xmm3, xmm0 */
  guest_unsupported(0x917178); /* unpckhps xmm3, xmm0 */
/* 91717b: shufps xmm4, xmm3, 0xe4 */
  guest_unsupported(0x91717b); /* shufps xmm4, xmm3, 0xe4 */
/* 91717f: movaps xmmword ptr [eax], xmm4 */
  guest_unsupported(0x91717f); /* movaps xmmword ptr [eax], xmm4 */
/* 917182: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 917185: mov esp, ebp */
  esp = ebp;
/* 917187: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 91718a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91718b: movhlps xmm2, xmm6 */
  guest_unsupported(0x91718b); /* movhlps xmm2, xmm6 */
/* 91718e: movlhps xmm1, xmm5 */
  guest_unsupported(0x91718e); /* movlhps xmm1, xmm5 */
/* 917191: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 917193: mov esp, ebx */
  esp = ebx;
/* 917195: shufps xmm1, xmm2, 0xcc */
  guest_unsupported(0x917195); /* shufps xmm1, xmm2, 0xcc */
/* 917199: movaps xmmword ptr [ecx], xmm1 */
  guest_unsupported(0x917199); /* movaps xmmword ptr [ecx], xmm1 */
/* 91719c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91719d: ret  */
  esp += 4; SPILL(); return;
}

void f_9171a0(void) {
  LOAD_REGS();
L_9171a0: /* 9171a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9171a1: mov ebx, esp */
  ebx = esp;
/* 9171a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9171a4: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9171a7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9171aa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9171ab: mov ebp, esp */
  ebp = esp;
/* 9171ad: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9171b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9171b1: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 9171b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9171b5: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 9171b8: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9171ba: je 0x9171e3 */
  if (zf) goto L_9171e3;
L_9171bc: /* 9171bc: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9171bf: xor edx, edx */
  edx = 0;
/* 9171c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9171c3: je 0x9171e3 */
  if (zf) goto L_9171e3;
L_9171c5: /* 9171c5: mov eax, edi */
  eax = edi;
/* 9171c7: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9171c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9171d0: /* 9171d0: mov edi, dword ptr [esi + eax] */
  edi = R32((uint32_t)(esi + eax));
/* 9171d3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 9171d5: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 9171d8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9171d9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9171dc: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9171de: jne 0x9171d0 */
  if (!zf) goto L_9171d0;
L_9171e0: /* 9171e0: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
L_9171e3: /* 9171e3: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 9171e6: xor edx, edx */
  edx = 0;
/* 9171e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9171ea: jle 0x917360 */
  if ((zf || sf != of)) goto L_917360;
L_9171f0: /* 9171f0: xor esi, esi */
  esi = 0;
/* 9171f2: xorps xmm0, xmm0 */
  guest_unsupported(0x9171f2); /* xorps xmm0, xmm0 */
/* 9171f5: movaps xmmword ptr [ebp - 0x30], xmm0 */
  guest_unsupported(0x9171f5); /* movaps xmmword ptr [ebp - 0x30], xmm0 */
/* 9171f9: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 9171fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917200: /* 917200: movaps xmm3, xmmword ptr [ebp - 0x30] */
  guest_unsupported(0x917200); /* movaps xmm3, xmmword ptr [ebp - 0x30] */
/* 917204: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 917207: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917209: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 917210: jle 0x9172a6 */
  if ((zf || sf != of)) goto L_9172a6;
L_917216: /* 917216: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 917219: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 91721c: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* 91721f: lea edi, [edi + eax*4] */
  edi = (uint32_t)(edi + eax*4);
/* 917222: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 917225: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 917228: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 91722b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91722d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_917230: /* 917230: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 917233: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 917235: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 917237: je 0x91728b */
  if (zf) goto L_91728b;
L_917239: /* 917239: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 91723c: movaps xmm0, xmmword ptr [edi] */
  guest_unsupported(0x91723c); /* movaps xmm0, xmmword ptr [edi] */
/* 91723f: movaps xmm2, xmmword ptr [esi + 0x30] */
  guest_unsupported(0x91723f); /* movaps xmm2, xmmword ptr [esi + 0x30] */
/* 917243: movaps xmm4, xmmword ptr [esi + 0x20] */
  guest_unsupported(0x917243); /* movaps xmm4, xmmword ptr [esi + 0x20] */
/* 917247: movaps xmm5, xmmword ptr [esi + 0x10] */
  guest_unsupported(0x917247); /* movaps xmm5, xmmword ptr [esi + 0x10] */
/* 91724b: movaps xmm1, xmm0 */
  guest_unsupported(0x91724b); /* movaps xmm1, xmm0 */
/* 91724e: shufps xmm1, xmm0, 0xff */
  guest_unsupported(0x91724e); /* shufps xmm1, xmm0, 0xff */
/* 917252: mulps xmm2, xmm1 */
  guest_unsupported(0x917252); /* mulps xmm2, xmm1 */
/* 917255: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* 917258: movaps xmm1, xmm0 */
  guest_unsupported(0x917258); /* movaps xmm1, xmm0 */
/* 91725b: shufps xmm1, xmm0, 0xaa */
  guest_unsupported(0x91725b); /* shufps xmm1, xmm0, 0xaa */
/* 91725f: lea edi, [esi + 0x20] */
  edi = (uint32_t)(esi + 0x20u);
/* 917262: mulps xmm4, xmm1 */
  guest_unsupported(0x917262); /* mulps xmm4, xmm1 */
/* 917265: movaps xmm1, xmm0 */
  guest_unsupported(0x917265); /* movaps xmm1, xmm0 */
/* 917268: shufps xmm1, xmm0, 0x55 */
  guest_unsupported(0x917268); /* shufps xmm1, xmm0, 0x55 */
/* 91726c: lea edi, [esi + 0x10] */
  edi = (uint32_t)(esi + 0x10u);
/* 91726f: mulps xmm5, xmm1 */
  guest_unsupported(0x91726f); /* mulps xmm5, xmm1 */
/* 917272: movaps xmm1, xmm0 */
  guest_unsupported(0x917272); /* movaps xmm1, xmm0 */
/* 917275: shufps xmm1, xmm0, 0 */
  guest_unsupported(0x917275); /* shufps xmm1, xmm0, 0 */
/* 917279: movaps xmm0, xmmword ptr [esi] */
  guest_unsupported(0x917279); /* movaps xmm0, xmmword ptr [esi] */
/* 91727c: mulps xmm0, xmm1 */
  guest_unsupported(0x91727c); /* mulps xmm0, xmm1 */
/* 91727f: addps xmm3, xmm0 */
  guest_unsupported(0x91727f); /* addps xmm3, xmm0 */
/* 917282: addps xmm3, xmm5 */
  guest_unsupported(0x917282); /* addps xmm3, xmm5 */
/* 917285: addps xmm3, xmm4 */
  guest_unsupported(0x917285); /* addps xmm3, xmm4 */
/* 917288: addps xmm3, xmm2 */
  guest_unsupported(0x917288); /* addps xmm3, xmm2 */
L_91728b: /* 91728b: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 91728e: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 917291: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917294: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 917297: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 91729a: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91729d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 91729e: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 9172a1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 9172a4: jne 0x917230 */
  if (!zf) goto L_917230;
L_9172a6: /* 9172a6: mov esi, dword ptr [ecx + 0x20] */
  esi = R32((uint32_t)(ecx + 0x20u));
/* 9172a9: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 9172ac: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9172af: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 9172b2: movaps xmm5, xmmword ptr [eax] */
  guest_unsupported(0x9172b2); /* movaps xmm5, xmmword ptr [eax] */
/* 9172b5: movaps xmm6, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x9172b5); /* movaps xmm6, xmmword ptr [eax + 0x10] */
/* 9172b9: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9172bc: movaps xmm1, xmmword ptr [edi + esi] */
  guest_unsupported(0x9172bc); /* movaps xmm1, xmmword ptr [edi + esi] */
/* 9172c0: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9172c2: movaps xmm7, xmmword ptr [eax + 0x20] */
  guest_unsupported(0x9172c2); /* movaps xmm7, xmmword ptr [eax + 0x20] */
/* 9172c6: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 9172c9: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* 9172cc: movaps xmm2, xmmword ptr [edi + esi] */
  guest_unsupported(0x9172cc); /* movaps xmm2, xmmword ptr [edi + esi] */
/* 9172d0: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9172d2: movaps xmm0, xmm1 */
  guest_unsupported(0x9172d2); /* movaps xmm0, xmm1 */
/* 9172d5: subps xmm0, xmm3 */
  guest_unsupported(0x9172d5); /* subps xmm0, xmm3 */
/* 9172d8: movaps xmm4, xmm0 */
  guest_unsupported(0x9172d8); /* movaps xmm4, xmm0 */
/* 9172db: movaps xmm0, xmm2 */
  guest_unsupported(0x9172db); /* movaps xmm0, xmm2 */
/* 9172de: mulps xmm0, xmm4 */
  guest_unsupported(0x9172de); /* mulps xmm0, xmm4 */
/* 9172e1: movaps xmm4, xmm0 */
  guest_unsupported(0x9172e1); /* movaps xmm4, xmm0 */
/* 9172e4: shufps xmm4, xmm0, 0 */
  guest_unsupported(0x9172e4); /* shufps xmm4, xmm0, 0 */
/* 9172e8: mulps xmm5, xmm4 */
  guest_unsupported(0x9172e8); /* mulps xmm5, xmm4 */
/* 9172eb: addps xmm3, xmm5 */
  guest_unsupported(0x9172eb); /* addps xmm3, xmm5 */
/* 9172ee: movaps xmm4, xmm3 */
  guest_unsupported(0x9172ee); /* movaps xmm4, xmm3 */
/* 9172f1: movaps xmm3, xmm1 */
  guest_unsupported(0x9172f1); /* movaps xmm3, xmm1 */
/* 9172f4: subps xmm3, xmm4 */
  guest_unsupported(0x9172f4); /* subps xmm3, xmm4 */
/* 9172f7: movaps xmm5, xmm3 */
  guest_unsupported(0x9172f7); /* movaps xmm5, xmm3 */
/* 9172fa: lea esi, [eax + 0x10] */
  esi = (uint32_t)(eax + 0x10u);
/* 9172fd: mov esi, dword ptr [ebp - 0x10] */
  esi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 917300: movaps xmm3, xmm2 */
  guest_unsupported(0x917300); /* movaps xmm3, xmm2 */
/* 917303: mulps xmm3, xmm5 */
  guest_unsupported(0x917303); /* mulps xmm3, xmm5 */
/* 917306: movaps xmm5, xmm3 */
  guest_unsupported(0x917306); /* movaps xmm5, xmm3 */
/* 917309: shufps xmm5, xmm3, 0x55 */
  guest_unsupported(0x917309); /* shufps xmm5, xmm3, 0x55 */
/* 91730d: mulps xmm6, xmm5 */
  guest_unsupported(0x91730d); /* mulps xmm6, xmm5 */
/* 917310: addps xmm4, xmm6 */
  guest_unsupported(0x917310); /* addps xmm4, xmm6 */
/* 917313: movaps xmm5, xmm4 */
  guest_unsupported(0x917313); /* movaps xmm5, xmm4 */
/* 917316: movaps xmm4, xmm1 */
  guest_unsupported(0x917316); /* movaps xmm4, xmm1 */
/* 917319: subps xmm4, xmm5 */
  guest_unsupported(0x917319); /* subps xmm4, xmm5 */
/* 91731c: movaps xmm6, xmm4 */
  guest_unsupported(0x91731c); /* movaps xmm6, xmm4 */
/* 91731f: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917322: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 917325: movaps xmm4, xmm2 */
  guest_unsupported(0x917325); /* movaps xmm4, xmm2 */
/* 917328: mulps xmm4, xmm6 */
  guest_unsupported(0x917328); /* mulps xmm4, xmm6 */
/* 91732b: movaps xmm6, xmm4 */
  guest_unsupported(0x91732b); /* movaps xmm6, xmm4 */
/* 91732e: shufps xmm6, xmm4, 0xaa */
  guest_unsupported(0x91732e); /* shufps xmm6, xmm4, 0xaa */
/* 917332: mulps xmm7, xmm6 */
  guest_unsupported(0x917332); /* mulps xmm7, xmm6 */
/* 917335: addps xmm5, xmm7 */
  guest_unsupported(0x917335); /* addps xmm5, xmm7 */
/* 917338: subps xmm1, xmm5 */
  guest_unsupported(0x917338); /* subps xmm1, xmm5 */
/* 91733b: mulps xmm2, xmm1 */
  guest_unsupported(0x91733b); /* mulps xmm2, xmm1 */
/* 91733e: movhlps xmm2, xmm4 */
  guest_unsupported(0x91733e); /* movhlps xmm2, xmm4 */
/* 917341: movlhps xmm0, xmm3 */
  guest_unsupported(0x917341); /* movlhps xmm0, xmm3 */
/* 917344: shufps xmm0, xmm2, 0xcc */
  guest_unsupported(0x917344); /* shufps xmm0, xmm2, 0xcc */
/* 917348: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x917348); /* movaps xmmword ptr [eax], xmm0 */
/* 91734b: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 91734e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91734f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917352: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917354: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 917357: jl 0x917200 */
  if ((sf != of)) goto L_917200;
L_91735d: /* 91735d: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
L_917360: /* 917360: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 917363: lea esi, [edx - 1] */
  esi = (uint32_t)(edx + 0xffffffffu);
/* 917366: mov eax, esi */
  eax = esi;
/* 917368: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 91736b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91736d: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 917370: jl 0x9174fa */
  if ((sf != of)) goto L_9174fa;
L_917376: /* 917376: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917378: xorps xmm6, xmm6 */
  guest_unsupported(0x917378); /* xorps xmm6, xmm6 */
/* 91737b: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 91737e: mov edi, edi */
  edi = edi;
L_917380: /* 917380: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 917383: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 917386: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 917389: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 91738c: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 91738f: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 917392: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917394: movaps xmm0, xmm6 */
  guest_unsupported(0x917394); /* movaps xmm0, xmm6 */
/* 917397: movaps xmm4, xmm6 */
  guest_unsupported(0x917397); /* movaps xmm4, xmm6 */
/* 91739a: movaps xmm3, xmm6 */
  guest_unsupported(0x91739a); /* movaps xmm3, xmm6 */
/* 91739d: movaps xmm5, xmm6 */
  guest_unsupported(0x91739d); /* movaps xmm5, xmm6 */
/* 9173a0: jle 0x91741b */
  if ((zf || sf != of)) goto L_91741b;
L_9173a2: /* 9173a2: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9173a5: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 9173a8: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 9173ab: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9173ae: mov dword ptr [ebp - 0x10], edx */
  W32((uint32_t)(ebp + 0xfffffff0u), edx);
/* 9173b1: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 9173b4: lea edi, [edx + edi*4] */
  edi = (uint32_t)(edx + edi*4);
/* 9173b7: sub eax, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9173ba: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9173bd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 9173c0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9173c3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_9173c5: /* 9173c5: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9173c8: je 0x917406 */
  if (zf) goto L_917406;
L_9173ca: /* 9173ca: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9173cd: movaps xmm1, xmmword ptr [eax] */
  guest_unsupported(0x9173cd); /* movaps xmm1, xmmword ptr [eax] */
/* 9173d0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9173d2: movaps xmm2, xmmword ptr [eax] */
  guest_unsupported(0x9173d2); /* movaps xmm2, xmmword ptr [eax] */
/* 9173d5: mulps xmm2, xmm1 */
  guest_unsupported(0x9173d5); /* mulps xmm2, xmm1 */
/* 9173d8: addps xmm0, xmm2 */
  guest_unsupported(0x9173d8); /* addps xmm0, xmm2 */
/* 9173db: movaps xmm2, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x9173db); /* movaps xmm2, xmmword ptr [eax + 0x10] */
/* 9173df: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9173e2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9173e4: mulps xmm2, xmm1 */
  guest_unsupported(0x9173e4); /* mulps xmm2, xmm1 */
/* 9173e7: addps xmm4, xmm2 */
  guest_unsupported(0x9173e7); /* addps xmm4, xmm2 */
/* 9173ea: movaps xmm2, xmmword ptr [eax + 0x20] */
  guest_unsupported(0x9173ea); /* movaps xmm2, xmmword ptr [eax + 0x20] */
/* 9173ee: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9173f1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9173f3: mulps xmm2, xmm1 */
  guest_unsupported(0x9173f3); /* mulps xmm2, xmm1 */
/* 9173f6: addps xmm3, xmm2 */
  guest_unsupported(0x9173f6); /* addps xmm3, xmm2 */
/* 9173f9: movaps xmm2, xmmword ptr [eax + 0x30] */
  guest_unsupported(0x9173f9); /* movaps xmm2, xmmword ptr [eax + 0x30] */
/* 9173fd: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917400: mulps xmm2, xmm1 */
  guest_unsupported(0x917400); /* mulps xmm2, xmm1 */
/* 917403: addps xmm5, xmm2 */
  guest_unsupported(0x917403); /* addps xmm5, xmm2 */
L_917406: /* 917406: sub dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 917409: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* 917410: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 917412: sub dword ptr [ebp - 0x10], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 917416: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 917419: jne 0x9173c5 */
  if (!zf) goto L_9173c5;
L_91741b: /* 91741b: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 91741e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 917421: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 917424: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 917427: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* 91742a: movaps xmm7, xmm4 */
  guest_unsupported(0x91742a); /* movaps xmm7, xmm4 */
/* 91742d: movhlps xmm7, xmm0 */
  guest_unsupported(0x91742d); /* movhlps xmm7, xmm0 */
/* 917430: movlhps xmm0, xmm4 */
  guest_unsupported(0x917430); /* movlhps xmm0, xmm4 */
/* 917433: addps xmm0, xmm7 */
  guest_unsupported(0x917433); /* addps xmm0, xmm7 */
/* 917436: movaps xmm7, xmmword ptr [eax + 0x20] */
  guest_unsupported(0x917436); /* movaps xmm7, xmmword ptr [eax + 0x20] */
/* 91743a: movaps xmm4, xmm5 */
  guest_unsupported(0x91743a); /* movaps xmm4, xmm5 */
/* 91743d: movhlps xmm4, xmm3 */
  guest_unsupported(0x91743d); /* movhlps xmm4, xmm3 */
/* 917440: movlhps xmm3, xmm5 */
  guest_unsupported(0x917440); /* movlhps xmm3, xmm5 */
/* 917443: movaps xmm5, xmmword ptr [eax + 0x30] */
  guest_unsupported(0x917443); /* movaps xmm5, xmmword ptr [eax + 0x30] */
/* 917447: addps xmm3, xmm4 */
  guest_unsupported(0x917447); /* addps xmm3, xmm4 */
/* 91744a: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91744d: movaps xmm1, xmmword ptr [esi + edx] */
  guest_unsupported(0x91744d); /* movaps xmm1, xmmword ptr [esi + edx] */
/* 917451: movaps xmm2, xmmword ptr [edi + edx] */
  guest_unsupported(0x917451); /* movaps xmm2, xmmword ptr [edi + edx] */
/* 917455: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917457: movaps xmm4, xmm0 */
  guest_unsupported(0x917457); /* movaps xmm4, xmm0 */
/* 91745a: shufps xmm4, xmm3, 0x88 */
  guest_unsupported(0x91745a); /* shufps xmm4, xmm3, 0x88 */
/* 91745e: shufps xmm0, xmm3, 0xdd */
  guest_unsupported(0x91745e); /* shufps xmm0, xmm3, 0xdd */
/* 917462: movaps xmm3, xmm0 */
  guest_unsupported(0x917462); /* movaps xmm3, xmm0 */
/* 917465: addps xmm3, xmm4 */
  guest_unsupported(0x917465); /* addps xmm3, xmm4 */
/* 917468: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91746a: movaps xmm0, xmm1 */
  guest_unsupported(0x91746a); /* movaps xmm0, xmm1 */
/* 91746d: subps xmm0, xmm3 */
  guest_unsupported(0x91746d); /* subps xmm0, xmm3 */
/* 917470: movaps xmm4, xmm0 */
  guest_unsupported(0x917470); /* movaps xmm4, xmm0 */
/* 917473: movaps xmm0, xmm2 */
  guest_unsupported(0x917473); /* movaps xmm0, xmm2 */
/* 917476: mulps xmm0, xmm4 */
  guest_unsupported(0x917476); /* mulps xmm0, xmm4 */
/* 917479: lea edx, [eax + 0x30] */
  edx = (uint32_t)(eax + 0x30u);
/* 91747c: movaps xmm4, xmm0 */
  guest_unsupported(0x91747c); /* movaps xmm4, xmm0 */
/* 91747f: shufps xmm4, xmm0, 0xff */
  guest_unsupported(0x91747f); /* shufps xmm4, xmm0, 0xff */
/* 917483: mulps xmm5, xmm4 */
  guest_unsupported(0x917483); /* mulps xmm5, xmm4 */
/* 917486: addps xmm3, xmm5 */
  guest_unsupported(0x917486); /* addps xmm3, xmm5 */
/* 917489: movaps xmm4, xmm1 */
  guest_unsupported(0x917489); /* movaps xmm4, xmm1 */
/* 91748c: subps xmm4, xmm3 */
  guest_unsupported(0x91748c); /* subps xmm4, xmm3 */
/* 91748f: movaps xmm5, xmm4 */
  guest_unsupported(0x91748f); /* movaps xmm5, xmm4 */
/* 917492: movaps xmm4, xmm2 */
  guest_unsupported(0x917492); /* movaps xmm4, xmm2 */
/* 917495: mulps xmm4, xmm5 */
  guest_unsupported(0x917495); /* mulps xmm4, xmm5 */
/* 917498: lea edx, [eax + 0x20] */
  edx = (uint32_t)(eax + 0x20u);
/* 91749b: movaps xmm5, xmm4 */
  guest_unsupported(0x91749b); /* movaps xmm5, xmm4 */
/* 91749e: shufps xmm5, xmm4, 0xaa */
  guest_unsupported(0x91749e); /* shufps xmm5, xmm4, 0xaa */
/* 9174a2: mulps xmm7, xmm5 */
  guest_unsupported(0x9174a2); /* mulps xmm7, xmm5 */
/* 9174a5: addps xmm3, xmm7 */
  guest_unsupported(0x9174a5); /* addps xmm3, xmm7 */
/* 9174a8: movaps xmm5, xmm3 */
  guest_unsupported(0x9174a8); /* movaps xmm5, xmm3 */
/* 9174ab: movaps xmm3, xmm1 */
  guest_unsupported(0x9174ab); /* movaps xmm3, xmm1 */
/* 9174ae: subps xmm3, xmm5 */
  guest_unsupported(0x9174ae); /* subps xmm3, xmm5 */
/* 9174b1: movaps xmm7, xmm3 */
  guest_unsupported(0x9174b1); /* movaps xmm7, xmm3 */
/* 9174b4: movaps xmm3, xmm2 */
  guest_unsupported(0x9174b4); /* movaps xmm3, xmm2 */
/* 9174b7: mulps xmm3, xmm7 */
  guest_unsupported(0x9174b7); /* mulps xmm3, xmm7 */
/* 9174ba: movaps xmm7, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x9174ba); /* movaps xmm7, xmmword ptr [eax + 0x10] */
/* 9174be: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9174c1: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9174c4: movhlps xmm0, xmm4 */
  guest_unsupported(0x9174c4); /* movhlps xmm0, xmm4 */
/* 9174c7: movaps xmm4, xmm3 */
  guest_unsupported(0x9174c7); /* movaps xmm4, xmm3 */
/* 9174ca: shufps xmm4, xmm3, 0x55 */
  guest_unsupported(0x9174ca); /* shufps xmm4, xmm3, 0x55 */
/* 9174ce: mulps xmm7, xmm4 */
  guest_unsupported(0x9174ce); /* mulps xmm7, xmm4 */
/* 9174d1: addps xmm5, xmm7 */
  guest_unsupported(0x9174d1); /* addps xmm5, xmm7 */
/* 9174d4: subps xmm1, xmm5 */
  guest_unsupported(0x9174d4); /* subps xmm1, xmm5 */
/* 9174d7: mulps xmm2, xmm1 */
  guest_unsupported(0x9174d7); /* mulps xmm2, xmm1 */
/* 9174da: movlhps xmm2, xmm3 */
  guest_unsupported(0x9174da); /* movlhps xmm2, xmm3 */
/* 9174dd: shufps xmm2, xmm0, 0xcc */
  guest_unsupported(0x9174dd); /* shufps xmm2, xmm0, 0xcc */
/* 9174e1: movaps xmmword ptr [esi], xmm2 */
  guest_unsupported(0x9174e1); /* movaps xmmword ptr [esi], xmm2 */
/* 9174e4: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9174e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9174e8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9174e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9174eb: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 9174ee: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 9174f1: jge 0x917380 */
  if ((sf == of)) goto L_917380;
L_9174f7: /* 9174f7: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
L_9174fa: /* 9174fa: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 9174fd: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 917500: je 0x917511 */
  if (zf) goto L_917511;
L_917502: /* 917502: mov dword ptr [edi + eax*4], 0 */
  W32((uint32_t)(edi + eax*4), 0x0u);
/* 917509: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 91750c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91750d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91750f: jne 0x917502 */
  if (!zf) goto L_917502;
L_917511: /* 917511: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 917512: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 917513: mov esp, ebp */
  esp = ebp;
/* 917515: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 917516: mov esp, ebx */
  esp = ebx;
/* 917518: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 917519: ret 8 */
  esp += 12; SPILL(); return;
}

void f_917520(void) {
  LOAD_REGS();
L_917520: /* 917520: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 917521: mov ebx, esp */
  ebx = esp;
/* 917523: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 917524: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 917527: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91752a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91752b: mov ebp, esp */
  ebp = esp;
/* 91752d: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 917530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 917531: mov esi, dword ptr [ebx + 0x14] */
  esi = R32((uint32_t)(ebx + 0x14u));
/* 917534: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* 91753b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91753c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91753f: mov edi, ecx */
  edi = ecx;
/* 917541: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 917544: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 917547: call 0x99cc00 */
  esp -= 4; W32(esp, 0x91754cu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 91754c: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 91754f: xor ecx, ecx */
  ecx = 0;
/* 917551: xor eax, eax */
  eax = 0;
/* 917553: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917555: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 917558: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 91755b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 91755e: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 917561: jle 0x9175c8 */
  if ((zf || sf != of)) goto L_9175c8;
L_917563: /* 917563: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 917566: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 917569: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 91756c: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 917570: jne 0x9175b8 */
  if (!zf) goto L_9175b8;
L_917572: /* 917572: mov ecx, eax */
  ecx = eax;
/* 917574: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 917577: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917579: xorps xmm0, xmm0 */
  guest_unsupported(0x917579); /* xorps xmm0, xmm0 */
/* 91757c: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 91757f: jle 0x917591 */
  if ((zf || sf != of)) goto L_917591;
L_917581: /* 917581: lea edi, [edx - 1] */
  edi = (uint32_t)(edx + 0xffffffffu);
/* 917584: shr edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 917587: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_917588: /* 917588: movaps xmmword ptr [ecx], xmm0 */
  guest_unsupported(0x917588); /* movaps xmmword ptr [ecx], xmm0 */
/* 91758b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91758e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91758f: jne 0x917588 */
  if (!zf) goto L_917588;
L_917591: /* 917591: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 917594: lea ecx, [edx + 1] */
  ecx = (uint32_t)(edx + 0x1u);
/* 917597: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 91759a: mov dword ptr [esi + ecx*4], 0x3f800000 */
  W32((uint32_t)(esi + ecx*4), 0x3f800000u);
/* 9175a1: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 9175a4: mov dword ptr [ecx + eax*4], 1 */
  W32((uint32_t)(ecx + eax*4), 0x1u);
/* 9175ab: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9175ae: mov dword ptr [edi + ecx*4], eax */
  W32((uint32_t)(edi + ecx*4), eax);
/* 9175b1: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 9175b4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9175b5: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_9175b8: /* 9175b8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9175bb: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 9175be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9175bf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9175c1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 9175c4: jl 0x917563 */
  if ((sf != of)) goto L_917563;
L_9175c6: /* 9175c6: xor ecx, ecx */
  ecx = 0;
L_9175c8: /* 9175c8: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9175cb: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 9175ce: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9175d1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9175d3: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 9175d6: jle 0x9177ce */
  if ((zf || sf != of)) goto L_9177ce;
L_9175dc: /* 9175dc: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 9175df: jmp 0x9175e3 */
  goto L_9175e3;
L_9175e1: /* 9175e1: xor ecx, ecx */
  ecx = 0;
L_9175e3: /* 9175e3: imul eax, dword ptr [ebp - 0xc] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  eax = (uint32_t)r;
  }
/* 9175e7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 9175ea: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 9175ed: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9175f0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9175f2: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 9175f5: jle 0x9176de */
  if ((zf || sf != of)) goto L_9176de;
L_9175fb: /* 9175fb: nop  */
/* 9175fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917600: /* 917600: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 917603: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 917606: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 917608: je 0x9176bb */
  if (zf) goto L_9176bb;
L_91760e: /* 91760e: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 917611: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917613: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 91761a: jle 0x9176bb */
  if ((zf || sf != of)) goto L_9176bb;
L_917620: /* 917620: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 917623: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 917626: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 917629: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 91762c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 91762f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 917632: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917634: jg 0x9176a6 */
  if ((!zf && sf == of)) goto L_9176a6;
L_917636: /* 917636: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 917639: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 91763c: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 91763f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 917642: movaps xmm2, xmmword ptr [ecx + 0x30] */
  guest_unsupported(0x917642); /* movaps xmm2, xmmword ptr [ecx + 0x30] */
/* 917646: movaps xmm3, xmmword ptr [ecx + 0x20] */
  guest_unsupported(0x917646); /* movaps xmm3, xmmword ptr [ecx + 0x20] */
/* 91764a: movaps xmm4, xmmword ptr [ecx + 0x10] */
  guest_unsupported(0x91764a); /* movaps xmm4, xmmword ptr [ecx + 0x10] */
/* 91764e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917650: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917652: movaps xmm0, xmmword ptr [esi + eax*4] */
  guest_unsupported(0x917652); /* movaps xmm0, xmmword ptr [esi + eax*4] */
/* 917656: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 917659: movaps xmm1, xmm0 */
  guest_unsupported(0x917659); /* movaps xmm1, xmm0 */
/* 91765c: shufps xmm1, xmm0, 0xff */
  guest_unsupported(0x91765c); /* shufps xmm1, xmm0, 0xff */
/* 917660: mulps xmm2, xmm1 */
  guest_unsupported(0x917660); /* mulps xmm2, xmm1 */
/* 917663: lea eax, [ecx + 0x30] */
  eax = (uint32_t)(ecx + 0x30u);
/* 917666: movaps xmm1, xmm0 */
  guest_unsupported(0x917666); /* movaps xmm1, xmm0 */
/* 917669: shufps xmm1, xmm0, 0xaa */
  guest_unsupported(0x917669); /* shufps xmm1, xmm0, 0xaa */
/* 91766d: mulps xmm3, xmm1 */
  guest_unsupported(0x91766d); /* mulps xmm3, xmm1 */
/* 917670: lea eax, [ecx + 0x20] */
  eax = (uint32_t)(ecx + 0x20u);
/* 917673: movaps xmm1, xmm0 */
  guest_unsupported(0x917673); /* movaps xmm1, xmm0 */
/* 917676: shufps xmm1, xmm0, 0x55 */
  guest_unsupported(0x917676); /* shufps xmm1, xmm0, 0x55 */
/* 91767a: mulps xmm4, xmm1 */
  guest_unsupported(0x91767a); /* mulps xmm4, xmm1 */
/* 91767d: lea eax, [ecx + 0x10] */
  eax = (uint32_t)(ecx + 0x10u);
/* 917680: movaps xmm1, xmm0 */
  guest_unsupported(0x917680); /* movaps xmm1, xmm0 */
/* 917683: shufps xmm1, xmm0, 0 */
  guest_unsupported(0x917683); /* shufps xmm1, xmm0, 0 */
/* 917687: movaps xmm0, xmmword ptr [ecx] */
  guest_unsupported(0x917687); /* movaps xmm0, xmmword ptr [ecx] */
/* 91768a: mulps xmm0, xmm1 */
  guest_unsupported(0x91768a); /* mulps xmm0, xmm1 */
/* 91768d: movaps xmm1, xmmword ptr [esi + edx*4] */
  guest_unsupported(0x91768d); /* movaps xmm1, xmmword ptr [esi + edx*4] */
/* 917691: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 917694: subps xmm1, xmm0 */
  guest_unsupported(0x917694); /* subps xmm1, xmm0 */
/* 917697: subps xmm1, xmm4 */
  guest_unsupported(0x917697); /* subps xmm1, xmm4 */
/* 91769a: subps xmm1, xmm3 */
  guest_unsupported(0x91769a); /* subps xmm1, xmm3 */
/* 91769d: subps xmm1, xmm2 */
  guest_unsupported(0x91769d); /* subps xmm1, xmm2 */
/* 9176a0: movaps xmmword ptr [edx], xmm1 */
  guest_unsupported(0x9176a0); /* movaps xmmword ptr [edx], xmm1 */
/* 9176a3: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
L_9176a6: /* 9176a6: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9176a9: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9176ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9176ad: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9176af: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9176b2: jl 0x917620 */
  if ((sf != of)) goto L_917620;
L_9176b8: /* 9176b8: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_9176bb: /* 9176bb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 9176be: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 9176c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9176c2: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9176c5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 9176c8: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9176cb: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 9176ce: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 9176d1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9176d2: cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9176d5: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 9176d8: jl 0x917600 */
  if ((sf != of)) goto L_917600;
L_9176de: /* 9176de: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 9176e1: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 9176e4: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9176e7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 9176ea: xor eax, eax */
  eax = 0;
/* 9176ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9176ee: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9176f1: jle 0x9177b3 */
  if ((zf || sf != of)) goto L_9177b3;
L_9176f7: /* 9176f7: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9176fa: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 9176fd: mov ecx, eax */
  ecx = eax;
/* 9176ff: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 917702: cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917705: jg 0x9177a1 */
  if ((!zf && sf == of)) goto L_9177a1;
L_91770b: /* 91770b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 91770e: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 917711: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917713: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 917716: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 917719: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 91771c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 91771f: movaps xmm1, xmmword ptr [ecx + eax*4] */
  guest_unsupported(0x91771f); /* movaps xmm1, xmmword ptr [ecx + eax*4] */
/* 917723: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 917726: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 917729: movaps xmm2, xmmword ptr [eax] */
  guest_unsupported(0x917729); /* movaps xmm2, xmmword ptr [eax] */
/* 91772c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 91772f: movaps xmm6, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x91772f); /* movaps xmm6, xmmword ptr [eax + 0x10] */
/* 917733: movaps xmm7, xmmword ptr [eax + 0x20] */
  guest_unsupported(0x917733); /* movaps xmm7, xmmword ptr [eax + 0x20] */
/* 917737: movaps xmm0, xmm1 */
  guest_unsupported(0x917737); /* movaps xmm0, xmm1 */
/* 91773a: mulps xmm0, xmm2 */
  guest_unsupported(0x91773a); /* mulps xmm0, xmm2 */
/* 91773d: movaps xmm3, xmm0 */
  guest_unsupported(0x91773d); /* movaps xmm3, xmm0 */
/* 917740: shufps xmm3, xmm0, 0 */
  guest_unsupported(0x917740); /* shufps xmm3, xmm0, 0 */
/* 917744: movaps xmm4, xmm3 */
  guest_unsupported(0x917744); /* movaps xmm4, xmm3 */
/* 917747: movaps xmm3, xmmword ptr [eax] */
  guest_unsupported(0x917747); /* movaps xmm3, xmmword ptr [eax] */
/* 91774a: mulps xmm3, xmm4 */
  guest_unsupported(0x91774a); /* mulps xmm3, xmm4 */
/* 91774d: movaps xmm4, xmm2 */
  guest_unsupported(0x91774d); /* movaps xmm4, xmm2 */
/* 917750: subps xmm4, xmm3 */
  guest_unsupported(0x917750); /* subps xmm4, xmm3 */
/* 917753: movaps xmm5, xmm4 */
  guest_unsupported(0x917753); /* movaps xmm5, xmm4 */
/* 917756: movaps xmm4, xmm1 */
  guest_unsupported(0x917756); /* movaps xmm4, xmm1 */
/* 917759: mulps xmm4, xmm5 */
  guest_unsupported(0x917759); /* mulps xmm4, xmm5 */
/* 91775c: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 91775f: movaps xmm5, xmm4 */
  guest_unsupported(0x91775f); /* movaps xmm5, xmm4 */
/* 917762: shufps xmm5, xmm4, 0x55 */
  guest_unsupported(0x917762); /* shufps xmm5, xmm4, 0x55 */
/* 917766: mulps xmm6, xmm5 */
  guest_unsupported(0x917766); /* mulps xmm6, xmm5 */
/* 917769: addps xmm3, xmm6 */
  guest_unsupported(0x917769); /* addps xmm3, xmm6 */
/* 91776c: movaps xmm5, xmm2 */
  guest_unsupported(0x91776c); /* movaps xmm5, xmm2 */
/* 91776f: subps xmm5, xmm3 */
  guest_unsupported(0x91776f); /* subps xmm5, xmm3 */
/* 917772: movaps xmm6, xmm5 */
  guest_unsupported(0x917772); /* movaps xmm6, xmm5 */
/* 917775: movaps xmm5, xmm1 */
  guest_unsupported(0x917775); /* movaps xmm5, xmm1 */
/* 917778: mulps xmm5, xmm6 */
  guest_unsupported(0x917778); /* mulps xmm5, xmm6 */
/* 91777b: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91777e: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 917781: movaps xmm6, xmm5 */
  guest_unsupported(0x917781); /* movaps xmm6, xmm5 */
/* 917784: shufps xmm6, xmm5, 0xaa */
  guest_unsupported(0x917784); /* shufps xmm6, xmm5, 0xaa */
/* 917788: mulps xmm7, xmm6 */
  guest_unsupported(0x917788); /* mulps xmm7, xmm6 */
/* 91778b: addps xmm3, xmm7 */
  guest_unsupported(0x91778b); /* addps xmm3, xmm7 */
/* 91778e: subps xmm2, xmm3 */
  guest_unsupported(0x91778e); /* subps xmm2, xmm3 */
/* 917791: mulps xmm1, xmm2 */
  guest_unsupported(0x917791); /* mulps xmm1, xmm2 */
/* 917794: movhlps xmm1, xmm5 */
  guest_unsupported(0x917794); /* movhlps xmm1, xmm5 */
/* 917797: movlhps xmm0, xmm4 */
  guest_unsupported(0x917797); /* movlhps xmm0, xmm4 */
/* 91779a: shufps xmm0, xmm1, 0xcc */
  guest_unsupported(0x91779a); /* shufps xmm0, xmm1, 0xcc */
/* 91779e: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x91779e); /* movaps xmmword ptr [eax], xmm0 */
L_9177a1: /* 9177a1: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9177a4: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9177a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9177a8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9177aa: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9177ad: jl 0x9176f7 */
  if ((sf != of)) goto L_9176f7;
L_9177b3: /* 9177b3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9177b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9177b9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9177bc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9177bd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 9177c0: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9177c3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9177c5: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 9177c8: jl 0x9175e1 */
  if ((sf != of)) goto L_9175e1;
L_9177ce: /* 9177ce: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9177d1: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 9177d4: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 9177d7: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 9177da: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9177dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9177df: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 9177e2: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 9177e5: jl 0x9179fa */
  if ((sf != of)) goto L_9179fa;
L_9177eb: /* 9177eb: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 9177f2: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_9177f5: /* 9177f5: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 9177f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9177f9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 9177fc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 9177ff: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 917802: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 917805: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 917807: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 91780a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 91780d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91780f: jle 0x9178f0 */
  if ((zf || sf != of)) goto L_9178f0;
L_917815: /* 917815: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 917817: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 91781a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_917820: /* 917820: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 917823: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 917826: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 917829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91782b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 91782e: je 0x9178d3 */
  if (zf) goto L_9178d3;
L_917834: /* 917834: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 917837: xor ecx, ecx */
  ecx = 0;
/* 917839: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91783b: jle 0x9178d3 */
  if ((zf || sf != of)) goto L_9178d3;
L_917841: /* 917841: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 917844: movaps xmm6, xmmword ptr [eax + 0x10] */
  guest_unsupported(0x917844); /* movaps xmm6, xmmword ptr [eax + 0x10] */
/* 917848: movaps xmm5, xmmword ptr [eax] */
  guest_unsupported(0x917848); /* movaps xmm5, xmmword ptr [eax] */
/* 91784b: movaps xmm0, xmmword ptr [eax + 0x30] */
  guest_unsupported(0x91784b); /* movaps xmm0, xmmword ptr [eax + 0x30] */
/* 91784f: movaps xmm7, xmmword ptr [eax + 0x20] */
  guest_unsupported(0x91784f); /* movaps xmm7, xmmword ptr [eax + 0x20] */
/* 917853: lea edi, [eax + 0x10] */
  edi = (uint32_t)(eax + 0x10u);
/* 917856: lea edi, [eax + 0x20] */
  edi = (uint32_t)(eax + 0x20u);
/* 917859: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91785c: movaps xmmword ptr [ebp - 0x40], xmm0 */
  guest_unsupported(0x91785c); /* movaps xmmword ptr [ebp - 0x40], xmm0 */
L_917860: /* 917860: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 917863: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 917866: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 917869: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 91786c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 91786f: movaps xmm4, xmmword ptr [ebp - 0x40] */
  guest_unsupported(0x91786f); /* movaps xmm4, xmmword ptr [ebp - 0x40] */
/* 917873: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917875: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917877: movaps xmm2, xmmword ptr [esi + eax*4] */
  guest_unsupported(0x917877); /* movaps xmm2, xmmword ptr [esi + eax*4] */
/* 91787b: mulps xmm4, xmm2 */
  guest_unsupported(0x91787b); /* mulps xmm4, xmm2 */
/* 91787e: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 917881: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 917884: movaps xmm0, xmm5 */
  guest_unsupported(0x917884); /* movaps xmm0, xmm5 */
/* 917887: mulps xmm0, xmm2 */
  guest_unsupported(0x917887); /* mulps xmm0, xmm2 */
/* 91788a: movaps xmm3, xmm6 */
  guest_unsupported(0x91788a); /* movaps xmm3, xmm6 */
/* 91788d: mulps xmm3, xmm2 */
  guest_unsupported(0x91788d); /* mulps xmm3, xmm2 */
/* 917890: movaps xmm1, xmm7 */
  guest_unsupported(0x917890); /* movaps xmm1, xmm7 */
/* 917893: mulps xmm1, xmm2 */
  guest_unsupported(0x917893); /* mulps xmm1, xmm2 */
/* 917896: movaps xmm2, xmm3 */
  guest_unsupported(0x917896); /* movaps xmm2, xmm3 */
/* 917899: movhlps xmm2, xmm0 */
  guest_unsupported(0x917899); /* movhlps xmm2, xmm0 */
/* 91789c: movlhps xmm0, xmm3 */
  guest_unsupported(0x91789c); /* movlhps xmm0, xmm3 */
/* 91789f: addps xmm0, xmm2 */
  guest_unsupported(0x91789f); /* addps xmm0, xmm2 */
/* 9178a2: movaps xmm2, xmm4 */
  guest_unsupported(0x9178a2); /* movaps xmm2, xmm4 */
/* 9178a5: movhlps xmm2, xmm1 */
  guest_unsupported(0x9178a5); /* movhlps xmm2, xmm1 */
/* 9178a8: movlhps xmm1, xmm4 */
  guest_unsupported(0x9178a8); /* movlhps xmm1, xmm4 */
/* 9178ab: addps xmm1, xmm2 */
  guest_unsupported(0x9178ab); /* addps xmm1, xmm2 */
/* 9178ae: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 9178b1: movaps xmm2, xmm0 */
  guest_unsupported(0x9178b1); /* movaps xmm2, xmm0 */
/* 9178b4: shufps xmm2, xmm1, 0x88 */
  guest_unsupported(0x9178b4); /* shufps xmm2, xmm1, 0x88 */
/* 9178b8: shufps xmm0, xmm1, 0xdd */
  guest_unsupported(0x9178b8); /* shufps xmm0, xmm1, 0xdd */
/* 9178bc: movaps xmm1, xmmword ptr [edx] */
  guest_unsupported(0x9178bc); /* movaps xmm1, xmmword ptr [edx] */
/* 9178bf: addps xmm0, xmm2 */
  guest_unsupported(0x9178bf); /* addps xmm0, xmm2 */
/* 9178c2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9178c3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9178c5: subps xmm1, xmm0 */
  guest_unsupported(0x9178c5); /* subps xmm1, xmm0 */
/* 9178c8: movaps xmmword ptr [edx], xmm1 */
  guest_unsupported(0x9178c8); /* movaps xmmword ptr [edx], xmm1 */
/* 9178cb: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 9178ce: jl 0x917860 */
  if ((sf != of)) goto L_917860;
L_9178d0: /* 9178d0: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_9178d3: /* 9178d3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9178d6: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9178d9: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9178dc: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 9178df: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 9178e2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9178e4: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 9178e7: dec dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 9178ea: jne 0x917820 */
  if (!zf) goto L_917820;
L_9178f0: /* 9178f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9178f3: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 9178f6: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 9178f9: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9178fc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 9178ff: xor eax, eax */
  eax = 0;
/* 917901: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917903: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 917906: jle 0x9179e2 */
  if ((zf || sf != of)) goto L_9179e2;
L_91790c: /* 91790c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 91790f: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 917912: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 917915: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 917918: movaps xmm6, xmmword ptr [ecx + 0x30] */
  guest_unsupported(0x917918); /* movaps xmm6, xmmword ptr [ecx + 0x30] */
/* 91791c: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91791f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 917922: movaps xmm0, xmmword ptr [ecx + 0x20] */
  guest_unsupported(0x917922); /* movaps xmm0, xmmword ptr [ecx + 0x20] */
/* 917926: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 917929: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 91792c: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91792f: movaps xmmword ptr [ebp - 0x40], xmm0 */
  guest_unsupported(0x91792f); /* movaps xmmword ptr [ebp - 0x40], xmm0 */
/* 917933: movaps xmm0, xmmword ptr [ecx] */
  guest_unsupported(0x917933); /* movaps xmm0, xmmword ptr [ecx] */
/* 917936: movaps xmmword ptr [ebp - 0x50], xmm0 */
  guest_unsupported(0x917936); /* movaps xmmword ptr [ebp - 0x50], xmm0 */
/* 91793a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_917940: /* 917940: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 917943: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 917946: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 917949: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 91794c: movaps xmm7, xmmword ptr [ebp - 0x40] */
  guest_unsupported(0x91794c); /* movaps xmm7, xmmword ptr [ebp - 0x40] */
/* 917950: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917952: movaps xmm1, xmmword ptr [esi + eax*4] */
  guest_unsupported(0x917952); /* movaps xmm1, xmmword ptr [esi + eax*4] */
/* 917956: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 917959: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 91795c: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 91795f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 917962: movaps xmm2, xmmword ptr [ecx + eax] */
  guest_unsupported(0x917962); /* movaps xmm2, xmmword ptr [ecx + eax] */
/* 917966: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 917968: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91796b: movaps xmm0, xmm2 */
  guest_unsupported(0x91796b); /* movaps xmm0, xmm2 */
/* 91796e: mulps xmm0, xmm1 */
  guest_unsupported(0x91796e); /* mulps xmm0, xmm1 */
/* 917971: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 917974: movaps xmm3, xmm0 */
  guest_unsupported(0x917974); /* movaps xmm3, xmm0 */
/* 917977: shufps xmm3, xmm0, 0xff */
  guest_unsupported(0x917977); /* shufps xmm3, xmm0, 0xff */
/* 91797b: movaps xmm4, xmm3 */
  guest_unsupported(0x91797b); /* movaps xmm4, xmm3 */
/* 91797e: movaps xmm3, xmm6 */
  guest_unsupported(0x91797e); /* movaps xmm3, xmm6 */
/* 917981: mulps xmm3, xmm4 */
  guest_unsupported(0x917981); /* mulps xmm3, xmm4 */
/* 917984: movaps xmm4, xmm1 */
  guest_unsupported(0x917984); /* movaps xmm4, xmm1 */
/* 917987: subps xmm4, xmm3 */
  guest_unsupported(0x917987); /* subps xmm4, xmm3 */
/* 91798a: movaps xmm5, xmm4 */
  guest_unsupported(0x91798a); /* movaps xmm5, xmm4 */
/* 91798d: movaps xmm4, xmm2 */
  guest_unsupported(0x91798d); /* movaps xmm4, xmm2 */
/* 917990: mulps xmm4, xmm5 */
  guest_unsupported(0x917990); /* mulps xmm4, xmm5 */
/* 917993: movaps xmm5, xmm4 */
  guest_unsupported(0x917993); /* movaps xmm5, xmm4 */
/* 917996: shufps xmm5, xmm4, 0xaa */
  guest_unsupported(0x917996); /* shufps xmm5, xmm4, 0xaa */
/* 91799a: mulps xmm7, xmm5 */
  guest_unsupported(0x91799a); /* mulps xmm7, xmm5 */
/* 91799d: addps xmm3, xmm7 */
  guest_unsupported(0x91799d); /* addps xmm3, xmm7 */
/* 9179a0: movaps xmm5, xmm1 */
  guest_unsupported(0x9179a0); /* movaps xmm5, xmm1 */
/* 9179a3: subps xmm5, xmm3 */
  guest_unsupported(0x9179a3); /* subps xmm5, xmm3 */
/* 9179a6: movaps xmm7, xmm5 */
  guest_unsupported(0x9179a6); /* movaps xmm7, xmm5 */
/* 9179a9: movaps xmm5, xmm2 */
  guest_unsupported(0x9179a9); /* movaps xmm5, xmm2 */
/* 9179ac: mulps xmm5, xmm7 */
  guest_unsupported(0x9179ac); /* mulps xmm5, xmm7 */
/* 9179af: movaps xmm7, xmmword ptr [ebp - 0x50] */
  guest_unsupported(0x9179af); /* movaps xmm7, xmmword ptr [ebp - 0x50] */
/* 9179b3: movhlps xmm0, xmm4 */
  guest_unsupported(0x9179b3); /* movhlps xmm0, xmm4 */
/* 9179b6: movaps xmm4, xmm5 */
  guest_unsupported(0x9179b6); /* movaps xmm4, xmm5 */
/* 9179b9: shufps xmm4, xmm5, 0x55 */
  guest_unsupported(0x9179b9); /* shufps xmm4, xmm5, 0x55 */
/* 9179bd: mulps xmm7, xmm4 */
  guest_unsupported(0x9179bd); /* mulps xmm7, xmm4 */
/* 9179c0: addps xmm3, xmm7 */
  guest_unsupported(0x9179c0); /* addps xmm3, xmm7 */
/* 9179c3: subps xmm1, xmm3 */
  guest_unsupported(0x9179c3); /* subps xmm1, xmm3 */
/* 9179c6: mulps xmm2, xmm1 */
  guest_unsupported(0x9179c6); /* mulps xmm2, xmm1 */
/* 9179c9: movlhps xmm2, xmm5 */
  guest_unsupported(0x9179c9); /* movlhps xmm2, xmm5 */
/* 9179cc: shufps xmm2, xmm0, 0xcc */
  guest_unsupported(0x9179cc); /* shufps xmm2, xmm0, 0xcc */
/* 9179d0: movaps xmmword ptr [eax], xmm2 */
  guest_unsupported(0x9179d0); /* movaps xmmword ptr [eax], xmm2 */
/* 9179d3: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9179d6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9179d7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9179d9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9179dc: jl 0x917940 */
  if ((sf != of)) goto L_917940;
L_9179e2: /* 9179e2: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9179e5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9179e8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9179e9: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9179ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9179ee: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 9179f1: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 9179f4: jge 0x9177f5 */
  if ((sf == of)) goto L_9177f5;
L_9179fa: /* 9179fa: lea esp, [ebp - 0x60] */
  esp = (uint32_t)(ebp + 0xffffffa0u);
/* 9179fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9179fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9179ff: mov esp, ebp */
  esp = ebp;
/* 917a01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 917a02: mov esp, ebx */
  esp = ebx;
/* 917a04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 917a05: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_917a10(void) {
  LOAD_REGS();
L_917a10: /* 917a10: ret  */
  esp += 4; SPILL(); return;
}

void f_917a20(void) {
  LOAD_REGS();
L_917a20: /* 917a20: ret  */
  esp += 4; SPILL(); return;
}

void f_917a30(void) {
  LOAD_REGS();
L_917a30: /* 917a30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 917a34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 917a35: mov esi, ecx */
  esi = ecx;
/* 917a37: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 917a3a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917a3d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 917a40: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 917a43: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 917a46: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 917a49: lea eax, [eax*4 + 0x10] */
  eax = (uint32_t)(eax*4 + 0x10u);
/* 917a50: push 0xaf2ab0 */
  { uint32_t v = 0xaf2ab0u; esp -= 4; W32(esp, v); }
/* 917a55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 917a56: call 0x914a10 */
  esp -= 4; W32(esp, 0x917a5bu); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 917a5b: add eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917a5e: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 917a61: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 917a64: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 917a67: mov ecx, eax */
  ecx = eax;
/* 917a69: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 917a6c: lea edx, [ecx*4 + 0x10] */
  edx = (uint32_t)(ecx*4 + 0x10u);
/* 917a73: push 0xaf2aac */
  { uint32_t v = 0xaf2aacu; esp -= 4; W32(esp, v); }
/* 917a78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 917a79: call 0x914a10 */
  esp -= 4; W32(esp, 0x917a7eu); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 917a7e: add eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917a81: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 917a84: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 917a87: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 917a8a: mov ecx, eax */
  ecx = eax;
/* 917a8c: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 917a8f: lea edx, [ecx*4 + 0x10] */
  edx = (uint32_t)(ecx*4 + 0x10u);
/* 917a96: push 0xaf2aa4 */
  { uint32_t v = 0xaf2aa4u; esp -= 4; W32(esp, v); }
/* 917a9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 917a9c: call 0x914a10 */
  esp -= 4; W32(esp, 0x917aa1u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 917aa1: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 917aa4: add eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917aa7: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 917aaa: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 917aad: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 917ab0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 917ab3: mov edx, eax */
  edx = eax;
/* 917ab5: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 917ab8: add edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917abb: and edx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 917abe: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 917ac1: push 0xaf2aa0 */
  { uint32_t v = 0xaf2aa0u; esp -= 4; W32(esp, v); }
/* 917ac6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 917ac7: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 917aca: call 0x914a10 */
  esp -= 4; W32(esp, 0x917acfu); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 917acf: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 917ad2: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 917ad5: mov ecx, eax */
  ecx = eax;
/* 917ad7: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 917ada: add ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 917add: and ecx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 917ae0: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 917ae3: push 0xaf2a9c */
  { uint32_t v = 0xaf2a9cu; esp -= 4; W32(esp, v); }
/* 917ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 917ae9: call 0x914a10 */
  esp -= 4; W32(esp, 0x917aeeu); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 917aee: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 917af1: add edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917af4: and edx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 917af7: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 917afa: push 0xaf2a98 */
  { uint32_t v = 0xaf2a98u; esp -= 4; W32(esp, v); }
/* 917aff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 917b00: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 917b03: call 0x914a10 */
  esp -= 4; W32(esp, 0x917b08u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 917b08: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 917b0b: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 917b0e: add eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917b11: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 917b14: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 917b17: push 0xaf2a94 */
  { uint32_t v = 0xaf2a94u; esp -= 4; W32(esp, v); }
/* 917b1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 917b1d: call 0x914a10 */
  esp -= 4; W32(esp, 0x917b22u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 917b22: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 917b25: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 917b28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 917b29: ret 4 */
  esp += 8; SPILL(); return;
}

void f_917b30(void) {
  LOAD_REGS();
L_917b30: /* 917b30: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 917b33: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 917b37: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 917b3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 917b3c: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 917b3f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 917b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 917b41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 917b42: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 917b45: xor esi, esi */
  esi = 0;
/* 917b47: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 917b4b: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 917b4e: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 917b52: xor edx, edx */
  edx = 0;
/* 917b54: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917b56: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 917b5a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 917b5e: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 917b62: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 917b66: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 917b6a: jle 0x917e71 */
  if ((zf || sf != of)) goto L_917e71;
L_917b70: /* 917b70: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 917b74: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 917b78: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 917b7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917b80: /* 917b80: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 917b84: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 917b88: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 917b8c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 917b8d: xor ebp, ebp */
  ebp = 0;
/* 917b8f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917b91: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 917b95: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 917b99: mov dword ptr [esp + 0x30], 0xfffffff */
  W32((uint32_t)(esp + 0x30u), 0xfffffffu);
/* 917ba1: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 917ba5: jl 0x917e1a */
  if ((sf != of)) goto L_917e1a;
L_917bab: /* 917bab: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917bae: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
L_917bb2: /* 917bb2: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 917bb6: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 917bba: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* 917bbd: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 917bc1: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 917bc5: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 917bc9: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 917bcb: xor edx, edx */
  edx = 0;
/* 917bcd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917bcf: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 917bd3: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 917bd7: jle 0x917dba */
  if ((zf || sf != of)) goto L_917dba;
L_917bdd: /* 917bdd: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
L_917be1: /* 917be1: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 917be5: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 917be7: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 917bea: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 917bee: je 0x917d2c */
  if (zf) goto L_917d2c;
L_917bf4: /* 917bf4: xor eax, eax */
  eax = 0;
/* 917bf6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917bf8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 917bfc: jle 0x917d2c */
  if ((zf || sf != of)) goto L_917d2c;
L_917c02: /* 917c02: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 917c06: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 917c09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917c10: /* 917c10: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 917c14: cmp edi, dword ptr [ebp + eax*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + eax*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 917c18: jne 0x917d14 */
  if (!zf) goto L_917d14;
L_917c1e: /* 917c1e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 917c20: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 917c24: mov ebp, 4 */
  ebp = 0x4u;
/* 917c29: je 0x917ca0 */
  if (zf) goto L_917ca0;
L_917c2b: /* 917c2b: nop  */
/* 917c2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917c30: /* 917c30: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917c36: mov edx, ecx */
  edx = ecx;
/* 917c38: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917c3e: mov eax, ebx */
  eax = ebx;
/* 917c40: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917c46: mov edi, 6 */
  edi = 0x6u;
/* 917c4b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_917c51: /* 917c51: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 917c54: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917c57: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917c5a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917c5d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 917c5e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 917c60: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 917c63: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917c66: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 917c68: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 917c6b: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 917c6e: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 917c70: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 917c73: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917c76: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 917c78: jne 0x917c51 */
  if (!zf) goto L_917c51;
L_917c7a: /* 917c7a: fadd dword ptr [esi - 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffff8u)));
/* 917c7d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917c80: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917c83: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 917c84: fstp dword ptr [esi - 0x18] */
  WF32((uint32_t)(esi + 0xffffffe8u), ST0); FPOP();
/* 917c87: fadd dword ptr [esi - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xffffffecu)));
/* 917c8a: fstp dword ptr [esi - 0x14] */
  WF32((uint32_t)(esi + 0xffffffecu), ST0); FPOP();
/* 917c8d: fadd dword ptr [esi - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffff0u)));
/* 917c90: fstp dword ptr [esi - 0x10] */
  WF32((uint32_t)(esi + 0xfffffff0u), ST0); FPOP();
/* 917c93: fadd dword ptr [esi - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffff4u)));
/* 917c96: fstp dword ptr [esi - 0xc] */
  WF32((uint32_t)(esi + 0xfffffff4u), ST0); FPOP();
/* 917c99: jne 0x917c30 */
  if (!zf) goto L_917c30;
L_917c9b: /* 917c9b: jmp 0x917cff */
  goto L_917cff;
L_917ca0: /* 917ca0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917ca6: mov edx, ecx */
  edx = ecx;
/* 917ca8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917cae: mov eax, ebx */
  eax = ebx;
/* 917cb0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917cb6: mov edi, 6 */
  edi = 0x6u;
/* 917cbb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_917cc1: /* 917cc1: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 917cc4: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917cc7: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917cca: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917ccd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 917cce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 917cd0: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 917cd3: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917cd6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 917cd8: fld dword ptr [edx - 0x10] */
  { double v = F32((uint32_t)(edx + 0xfffffff0u)); FPUSH(v); }
/* 917cdb: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917cde: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 917ce0: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 917ce3: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917ce6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 917ce8: jne 0x917cc1 */
  if (!zf) goto L_917cc1;
L_917cea: /* 917cea: fstp dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0); FPOP();
/* 917ced: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917cf0: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917cf3: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 917cf4: fstp dword ptr [esi - 0x14] */
  WF32((uint32_t)(esi + 0xffffffecu), ST0); FPOP();
/* 917cf7: fstp dword ptr [esi - 0x10] */
  WF32((uint32_t)(esi + 0xfffffff0u), ST0); FPOP();
/* 917cfa: fstp dword ptr [esi - 0xc] */
  WF32((uint32_t)(esi + 0xfffffff4u), ST0); FPOP();
/* 917cfd: jne 0x917ca0 */
  if (!zf) goto L_917ca0;
L_917cff: /* 917cff: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 917d03: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 917d07: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 917d0b: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 917d0f: mov edx, 1 */
  edx = 0x1u;
L_917d14: /* 917d14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 917d15: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 917d18: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917d1a: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 917d1e: jl 0x917c10 */
  if ((sf != of)) goto L_917c10;
L_917d24: /* 917d24: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_917d2c: /* 917d2c: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 917d30: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 917d34: add ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917d37: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 917d3a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 917d3b: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 917d3f: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 917d43: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 917d47: jne 0x917be1 */
  if (!zf) goto L_917be1;
L_917d4d: /* 917d4d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 917d4f: je 0x917dba */
  if (zf) goto L_917dba;
L_917d51: /* 917d51: mov esi, dword ptr [ecx + 0x1c] */
  esi = R32((uint32_t)(ecx + 0x1cu));
/* 917d54: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 917d58: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 917d5c: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 917d60: mov dword ptr [esi + edx*4], eax */
  W32((uint32_t)(esi + edx*4), eax);
/* 917d63: mov esi, dword ptr [ecx + 0x20] */
  esi = R32((uint32_t)(ecx + 0x20u));
/* 917d66: mov dword ptr [esi + edx*4], ebx */
  W32((uint32_t)(esi + edx*4), ebx);
/* 917d69: mov edx, ebx */
  edx = ebx;
/* 917d6b: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 917d6d: mov edi, 4 */
  edi = 0x4u;
L_917d72: /* 917d72: mov esi, 4 */
  esi = 0x4u;
L_917d77: /* 917d77: mov ebp, dword ptr [edx + eax] */
  ebp = R32((uint32_t)(edx + eax));
/* 917d7a: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 917d7c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917d7f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 917d80: jne 0x917d77 */
  if (!zf) goto L_917d77;
L_917d82: /* 917d82: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 917d83: jne 0x917d72 */
  if (!zf) goto L_917d72;
L_917d85: /* 917d85: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 917d89: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 917d8d: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 917d91: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 917d95: mov eax, edx */
  eax = edx;
/* 917d97: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 917d99: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 917d9c: mov esi, eax */
  esi = eax;
/* 917d9e: not esi */
  esi = ~esi;
/* 917da0: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917da3: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 917da6: and esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 917da8: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 917daa: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917dac: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 917db0: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 917db4: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 917db8: jmp 0x917dd2 */
  goto L_917dd2;
L_917dba: /* 917dba: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 917dbd: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 917dc1: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 917dc8: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 917dcb: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
L_917dd2: /* 917dd2: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 917dd6: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 917dda: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917ddd: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 917de1: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 917de5: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* 917de8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 917deb: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 917dee: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 917df0: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 917df4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 917df5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 917df6: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 917dfa: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 917dfe: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917e00: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 917e04: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 917e08: jle 0x917bb2 */
  if ((zf || sf != of)) goto L_917bb2;
L_917e0e: /* 917e0e: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 917e12: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 917e16: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_917e1a: /* 917e1a: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 917e1d: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 917e21: mov dword ptr [esi + eax], ebp */
  W32((uint32_t)(esi + eax), ebp);
/* 917e24: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 917e28: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 917e2a: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 917e2e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 917e31: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 917e34: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 917e36: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 917e3a: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 917e3e: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 917e42: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 917e45: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917e47: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 917e4b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 917e4f: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 917e53: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917e56: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 917e57: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917e5a: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 917e5d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917e5f: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 917e63: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 917e67: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 917e6b: jl 0x917b80 */
  if ((sf != of)) goto L_917b80;
L_917e71: /* 917e71: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917e74: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 917e78: xor ebp, ebp */
  ebp = 0;
/* 917e7a: xor esi, esi */
  esi = 0;
/* 917e7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917e7e: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 917e81: mov dword ptr [ecx + 0x28], ebx */
  W32((uint32_t)(ecx + 0x28u), ebx);
/* 917e84: jle 0x917eeb */
  if ((zf || sf != of)) goto L_917eeb;
L_917e86: /* 917e86: mov ebx, dword ptr [esp + 0x74] */
  ebx = R32((uint32_t)(esp + 0x74u));
/* 917e8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_917e90: /* 917e90: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 917e93: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* 917e96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 917e97: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 917e9a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 917e9d: mov edx, dword ptr [eax + edx] */
  edx = R32((uint32_t)(eax + edx));
/* 917ea0: mov eax, dword ptr [eax + edi] */
  eax = R32((uint32_t)(eax + edi));
/* 917ea3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 917ea7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 917eab: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 917ead: mov edi, 4 */
  edi = 0x4u;
L_917eb2: /* 917eb2: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 917eb6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 917eb7: fmul dword ptr [ebx + esi*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + esi*4 + 0xfffffffcu)));
/* 917ebb: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917ebe: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 917ebf: fadd dword ptr [edx + eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax + 0xffffffecu)));
/* 917ec3: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 917ec7: fstp dword ptr [edx + eax - 0x14] */
  WF32((uint32_t)(edx + eax + 0xffffffecu), ST0); FPOP();
/* 917ecb: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 917ecf: fmul dword ptr [ebx + esi*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + esi*4 + 0xfffffffcu)));
/* 917ed3: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 917ed6: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 917eda: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 917edd: jne 0x917eb2 */
  if (!zf) goto L_917eb2;
L_917edf: /* 917edf: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917ee2: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 917ee3: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917ee5: jl 0x917e90 */
  if ((sf != of)) goto L_917e90;
L_917ee7: /* 917ee7: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_917eeb: /* 917eeb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 917eee: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 917eef: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 917ef2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 917ef3: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917ef6: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 917ef9: jge 0x917f23 */
  if ((sf == of)) goto L_917f23;
L_917efb: /* 917efb: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 917eff: mov esi, 4 */
  esi = 0x4u;
/* 917f04: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 917f06: lea edx, [ebx + edx*4] */
  edx = (uint32_t)(ebx + edx*4);
/* 917f09: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 917f0b: nop  */
/* 917f0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917f10: /* 917f10: mov dword ptr [edx + edi], 0x3f800000 */
  W32((uint32_t)(edx + edi), 0x3f800000u);
/* 917f17: mov dword ptr [edx], 0x3f800000 */
  W32((uint32_t)(edx), 0x3f800000u);
/* 917f1d: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917f20: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 917f21: jne 0x917f10 */
  if (!zf) goto L_917f10;
L_917f23: /* 917f23: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917f26: xor esi, esi */
  esi = 0;
/* 917f28: xor ebp, ebp */
  ebp = 0;
/* 917f2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917f2c: jle 0x917f74 */
  if ((zf || sf != of)) goto L_917f74;
L_917f2e: /* 917f2e: mov edi, edi */
  edi = edi;
L_917f30: /* 917f30: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917f32: mov edx, esi */
  edx = esi;
/* 917f34: jge 0x917f66 */
  if ((sf == of)) goto L_917f66;
L_917f36: /* 917f36: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 917f39: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 917f3c: imul edi, esi */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(esi);
  edi = (uint32_t)r;
  }
/* 917f3f: lea ebx, [eax*4] */
  ebx = (uint32_t)(eax*4);
/* 917f46: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
/* 917f49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917f50: /* 917f50: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 917f53: je 0x917f5b */
  if (zf) goto L_917f5b;
L_917f55: /* 917f55: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917f57: jle 0x917f5b */
  if ((zf || sf != of)) goto L_917f5b;
L_917f59: /* 917f59: mov ebp, edx */
  ebp = edx;
L_917f5b: /* 917f5b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 917f5c: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 917f5e: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917f60: jl 0x917f50 */
  if ((sf != of)) goto L_917f50;
L_917f62: /* 917f62: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
L_917f66: /* 917f66: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 917f69: mov dword ptr [edx + esi*4], ebp */
  W32((uint32_t)(edx + esi*4), ebp);
/* 917f6c: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917f6f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 917f70: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917f72: jl 0x917f30 */
  if ((sf != of)) goto L_917f30;
L_917f74: /* 917f74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 917f75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 917f76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 917f77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 917f78: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 917f7b: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_917c9d(void) {
  LOAD_REGS();
  goto L_917c9d;
L_917b80: /* 917b80: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 917b84: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 917b88: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 917b8c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 917b8d: xor ebp, ebp */
  ebp = 0;
/* 917b8f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917b91: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 917b95: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 917b99: mov dword ptr [esp + 0x30], 0xfffffff */
  W32((uint32_t)(esp + 0x30u), 0xfffffffu);
/* 917ba1: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 917ba5: jl 0x917e1a */
  if ((sf != of)) goto L_917e1a;
L_917bab: /* 917bab: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917bae: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
L_917bb2: /* 917bb2: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 917bb6: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 917bba: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* 917bbd: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 917bc1: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 917bc5: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 917bc9: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 917bcb: xor edx, edx */
  edx = 0;
/* 917bcd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917bcf: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 917bd3: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 917bd7: jle 0x917dba */
  if ((zf || sf != of)) goto L_917dba;
L_917bdd: /* 917bdd: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
L_917be1: /* 917be1: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 917be5: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 917be7: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 917bea: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 917bee: je 0x917d2c */
  if (zf) goto L_917d2c;
L_917bf4: /* 917bf4: xor eax, eax */
  eax = 0;
/* 917bf6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917bf8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 917bfc: jle 0x917d2c */
  if ((zf || sf != of)) goto L_917d2c;
L_917c02: /* 917c02: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 917c06: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 917c09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917c10: /* 917c10: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 917c14: cmp edi, dword ptr [ebp + eax*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + eax*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 917c18: jne 0x917d14 */
  if (!zf) goto L_917d14;
L_917c1e: /* 917c1e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 917c20: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 917c24: mov ebp, 4 */
  ebp = 0x4u;
/* 917c29: je 0x917ca0 */
  if (zf) goto L_917ca0;
L_917c2b: /* 917c2b: nop  */
/* 917c2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917c30: /* 917c30: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917c36: mov edx, ecx */
  edx = ecx;
/* 917c38: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917c3e: mov eax, ebx */
  eax = ebx;
/* 917c40: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917c46: mov edi, 6 */
  edi = 0x6u;
/* 917c4b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_917c51: /* 917c51: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 917c54: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917c57: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917c5a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917c5d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 917c5e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 917c60: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 917c63: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917c66: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 917c68: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 917c6b: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 917c6e: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 917c70: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 917c73: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917c76: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 917c78: jne 0x917c51 */
  if (!zf) goto L_917c51;
L_917c7a: /* 917c7a: fadd dword ptr [esi - 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffff8u)));
/* 917c7d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917c80: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917c83: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 917c84: fstp dword ptr [esi - 0x18] */
  WF32((uint32_t)(esi + 0xffffffe8u), ST0); FPOP();
/* 917c87: fadd dword ptr [esi - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xffffffecu)));
/* 917c8a: fstp dword ptr [esi - 0x14] */
  WF32((uint32_t)(esi + 0xffffffecu), ST0); FPOP();
/* 917c8d: fadd dword ptr [esi - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffff0u)));
/* 917c90: fstp dword ptr [esi - 0x10] */
  WF32((uint32_t)(esi + 0xfffffff0u), ST0); FPOP();
/* 917c93: fadd dword ptr [esi - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffff4u)));
/* 917c96: fstp dword ptr [esi - 0xc] */
  WF32((uint32_t)(esi + 0xfffffff4u), ST0); FPOP();
/* 917c99: jne 0x917c30 */
  if (!zf) goto L_917c30;
L_917c9b: /* 917c9b: jmp 0x917cff */
  goto L_917cff;
L_917c9d: /* 917c9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_917ca0: /* 917ca0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917ca6: mov edx, ecx */
  edx = ecx;
/* 917ca8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917cae: mov eax, ebx */
  eax = ebx;
/* 917cb0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917cb6: mov edi, 6 */
  edi = 0x6u;
/* 917cbb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_917cc1: /* 917cc1: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 917cc4: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917cc7: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917cca: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917ccd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 917cce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 917cd0: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 917cd3: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917cd6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 917cd8: fld dword ptr [edx - 0x10] */
  { double v = F32((uint32_t)(edx + 0xfffffff0u)); FPUSH(v); }
/* 917cdb: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917cde: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 917ce0: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 917ce3: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 917ce6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 917ce8: jne 0x917cc1 */
  if (!zf) goto L_917cc1;
L_917cea: /* 917cea: fstp dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0); FPOP();
/* 917ced: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917cf0: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917cf3: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 917cf4: fstp dword ptr [esi - 0x14] */
  WF32((uint32_t)(esi + 0xffffffecu), ST0); FPOP();
/* 917cf7: fstp dword ptr [esi - 0x10] */
  WF32((uint32_t)(esi + 0xfffffff0u), ST0); FPOP();
/* 917cfa: fstp dword ptr [esi - 0xc] */
  WF32((uint32_t)(esi + 0xfffffff4u), ST0); FPOP();
/* 917cfd: jne 0x917ca0 */
  if (!zf) goto L_917ca0;
L_917cff: /* 917cff: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 917d03: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 917d07: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 917d0b: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 917d0f: mov edx, 1 */
  edx = 0x1u;
L_917d14: /* 917d14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 917d15: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 917d18: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917d1a: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 917d1e: jl 0x917c10 */
  if ((sf != of)) goto L_917c10;
L_917d24: /* 917d24: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_917d2c: /* 917d2c: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 917d30: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 917d34: add ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917d37: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 917d3a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 917d3b: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 917d3f: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 917d43: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 917d47: jne 0x917be1 */
  if (!zf) goto L_917be1;
L_917d4d: /* 917d4d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 917d4f: je 0x917dba */
  if (zf) goto L_917dba;
L_917d51: /* 917d51: mov esi, dword ptr [ecx + 0x1c] */
  esi = R32((uint32_t)(ecx + 0x1cu));
/* 917d54: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 917d58: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 917d5c: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 917d60: mov dword ptr [esi + edx*4], eax */
  W32((uint32_t)(esi + edx*4), eax);
/* 917d63: mov esi, dword ptr [ecx + 0x20] */
  esi = R32((uint32_t)(ecx + 0x20u));
/* 917d66: mov dword ptr [esi + edx*4], ebx */
  W32((uint32_t)(esi + edx*4), ebx);
/* 917d69: mov edx, ebx */
  edx = ebx;
/* 917d6b: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 917d6d: mov edi, 4 */
  edi = 0x4u;
L_917d72: /* 917d72: mov esi, 4 */
  esi = 0x4u;
L_917d77: /* 917d77: mov ebp, dword ptr [edx + eax] */
  ebp = R32((uint32_t)(edx + eax));
/* 917d7a: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 917d7c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917d7f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 917d80: jne 0x917d77 */
  if (!zf) goto L_917d77;
L_917d82: /* 917d82: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 917d83: jne 0x917d72 */
  if (!zf) goto L_917d72;
L_917d85: /* 917d85: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 917d89: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 917d8d: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 917d91: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 917d95: mov eax, edx */
  eax = edx;
/* 917d97: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 917d99: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 917d9c: mov esi, eax */
  esi = eax;
/* 917d9e: not esi */
  esi = ~esi;
/* 917da0: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 917da3: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 917da6: and esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 917da8: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 917daa: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917dac: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 917db0: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 917db4: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 917db8: jmp 0x917dd2 */
  goto L_917dd2;
L_917dba: /* 917dba: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 917dbd: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 917dc1: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 917dc8: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 917dcb: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
L_917dd2: /* 917dd2: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 917dd6: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 917dda: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917ddd: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 917de1: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 917de5: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* 917de8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 917deb: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 917dee: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 917df0: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 917df4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 917df5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 917df6: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 917dfa: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 917dfe: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917e00: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 917e04: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 917e08: jle 0x917bb2 */
  if ((zf || sf != of)) goto L_917bb2;
L_917e0e: /* 917e0e: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 917e12: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 917e16: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_917e1a: /* 917e1a: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 917e1d: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 917e21: mov dword ptr [esi + eax], ebp */
  W32((uint32_t)(esi + eax), ebp);
/* 917e24: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 917e28: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 917e2a: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 917e2e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 917e31: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 917e34: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 917e36: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 917e3a: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 917e3e: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 917e42: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 917e45: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917e47: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 917e4b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 917e4f: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 917e53: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917e56: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 917e57: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 917e5a: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 917e5d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917e5f: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 917e63: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 917e67: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 917e6b: jl 0x917b80 */
  if ((sf != of)) goto L_917b80;
L_917e71: /* 917e71: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917e74: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 917e78: xor ebp, ebp */
  ebp = 0;
/* 917e7a: xor esi, esi */
  esi = 0;
/* 917e7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917e7e: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 917e81: mov dword ptr [ecx + 0x28], ebx */
  W32((uint32_t)(ecx + 0x28u), ebx);
/* 917e84: jle 0x917eeb */
  if ((zf || sf != of)) goto L_917eeb;
L_917e86: /* 917e86: mov ebx, dword ptr [esp + 0x74] */
  ebx = R32((uint32_t)(esp + 0x74u));
/* 917e8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_917e90: /* 917e90: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 917e93: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* 917e96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 917e97: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 917e9a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 917e9d: mov edx, dword ptr [eax + edx] */
  edx = R32((uint32_t)(eax + edx));
/* 917ea0: mov eax, dword ptr [eax + edi] */
  eax = R32((uint32_t)(eax + edi));
/* 917ea3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 917ea7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 917eab: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 917ead: mov edi, 4 */
  edi = 0x4u;
L_917eb2: /* 917eb2: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 917eb6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 917eb7: fmul dword ptr [ebx + esi*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + esi*4 + 0xfffffffcu)));
/* 917ebb: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917ebe: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 917ebf: fadd dword ptr [edx + eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax + 0xffffffecu)));
/* 917ec3: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 917ec7: fstp dword ptr [edx + eax - 0x14] */
  WF32((uint32_t)(edx + eax + 0xffffffecu), ST0); FPOP();
/* 917ecb: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 917ecf: fmul dword ptr [ebx + esi*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + esi*4 + 0xfffffffcu)));
/* 917ed3: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 917ed6: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 917eda: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 917edd: jne 0x917eb2 */
  if (!zf) goto L_917eb2;
L_917edf: /* 917edf: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917ee2: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 917ee3: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917ee5: jl 0x917e90 */
  if ((sf != of)) goto L_917e90;
L_917ee7: /* 917ee7: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_917eeb: /* 917eeb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 917eee: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 917eef: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 917ef2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 917ef3: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917ef6: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 917ef9: jge 0x917f23 */
  if ((sf == of)) goto L_917f23;
L_917efb: /* 917efb: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 917eff: mov esi, 4 */
  esi = 0x4u;
/* 917f04: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 917f06: lea edx, [ebx + edx*4] */
  edx = (uint32_t)(ebx + edx*4);
/* 917f09: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 917f0b: nop  */
/* 917f0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917f10: /* 917f10: mov dword ptr [edx + edi], 0x3f800000 */
  W32((uint32_t)(edx + edi), 0x3f800000u);
/* 917f17: mov dword ptr [edx], 0x3f800000 */
  W32((uint32_t)(edx), 0x3f800000u);
/* 917f1d: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 917f20: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 917f21: jne 0x917f10 */
  if (!zf) goto L_917f10;
L_917f23: /* 917f23: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917f26: xor esi, esi */
  esi = 0;
/* 917f28: xor ebp, ebp */
  ebp = 0;
/* 917f2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917f2c: jle 0x917f74 */
  if ((zf || sf != of)) goto L_917f74;
L_917f2e: /* 917f2e: mov edi, edi */
  edi = edi;
L_917f30: /* 917f30: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917f32: mov edx, esi */
  edx = esi;
/* 917f34: jge 0x917f66 */
  if ((sf == of)) goto L_917f66;
L_917f36: /* 917f36: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 917f39: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 917f3c: imul edi, esi */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(esi);
  edi = (uint32_t)r;
  }
/* 917f3f: lea ebx, [eax*4] */
  ebx = (uint32_t)(eax*4);
/* 917f46: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
/* 917f49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917f50: /* 917f50: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 917f53: je 0x917f5b */
  if (zf) goto L_917f5b;
L_917f55: /* 917f55: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917f57: jle 0x917f5b */
  if ((zf || sf != of)) goto L_917f5b;
L_917f59: /* 917f59: mov ebp, edx */
  ebp = edx;
L_917f5b: /* 917f5b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 917f5c: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 917f5e: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917f60: jl 0x917f50 */
  if ((sf != of)) goto L_917f50;
L_917f62: /* 917f62: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
L_917f66: /* 917f66: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 917f69: mov dword ptr [edx + esi*4], ebp */
  W32((uint32_t)(edx + esi*4), ebp);
/* 917f6c: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 917f6f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 917f70: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 917f72: jl 0x917f30 */
  if ((sf != of)) goto L_917f30;
L_917f74: /* 917f74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 917f75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 917f76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 917f77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 917f78: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 917f7b: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_917f80(void) {
  LOAD_REGS();
L_917f80: /* 917f80: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 917f83: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 917f84: mov ebp, ecx */
  ebp = ecx;
/* 917f86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 917f87: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 917f8a: xor ecx, ecx */
  ecx = 0;
/* 917f8c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917f8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 917f8f: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 917f93: jle 0x918116 */
  if ((zf || sf != of)) goto L_918116;
L_917f99: /* 917f99: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 917f9d: xor edi, edi */
  edi = 0;
/* 917f9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 917fa2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 917fa3: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 917fa7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 917fab: nop  */
/* 917fac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_917fb0: /* 917fb0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 917fb6: xor edx, edx */
  edx = 0;
/* 917fb8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 917fba: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 917fbe: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 917fc6: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 917fce: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 917fd6: jle 0x91806b */
  if ((zf || sf != of)) goto L_91806b;
L_917fdc: /* 917fdc: mov ebp, dword ptr [ebp + 0x1c] */
  ebp = R32((uint32_t)(ebp + 0x1cu));
/* 917fdf: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 917fe3: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 917fe7: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 917feb: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 917fef: mov edx, esi */
  edx = esi;
/* 917ff1: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 917ff4: lea ebp, [ebp + edx*4] */
  ebp = (uint32_t)(ebp + edx*4);
/* 917ff8: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 917ffc: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_918000: /* 918000: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 918003: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 918005: je 0x91803e */
  if (zf) goto L_91803e;
L_918007: /* 918007: mov eax, ebx */
  eax = ebx;
/* 918009: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91800c: mov edi, 4 */
  edi = 0x4u;
L_918011: /* 918011: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 918014: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918017: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 91801a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91801d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91801e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 918020: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 918023: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 918026: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 918028: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91802b: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 91802e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 918030: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 918033: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 918036: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 918038: jne 0x918011 */
  if (!zf) goto L_918011;
L_91803a: /* 91803a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_91803e: /* 91803e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 918042: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 918045: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 918048: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 918049: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 91804d: jne 0x918000 */
  if (!zf) goto L_918000;
L_91804f: /* 91804f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 918053: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 918057: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 91805b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 91805d: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 918061: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 918063: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 918067: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_91806b: /* 91806b: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91806d: jge 0x9180e0 */
  if ((sf == of)) goto L_9180e0;
L_91806f: /* 91806f: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 918072: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* 918079: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 91807d: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 918081: lea edx, [eax + edx*4 + 8] */
  edx = (uint32_t)(eax + edx*4 + 0x8u);
/* 918085: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 918088: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 91808b: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 91808d: lea edi, [edi + eax*4] */
  edi = (uint32_t)(edi + eax*4);
/* 918090: mov ebx, esi */
  ebx = esi;
L_918092: /* 918092: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 918094: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 918096: je 0x9180d2 */
  if (zf) goto L_9180d2;
L_918098: /* 918098: xor esi, esi */
  esi = 0;
/* 91809a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91809c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91809f: nop  */
L_9180a0: /* 9180a0: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 9180a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9180a4: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 9180a7: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9180aa: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9180ad: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 9180b0: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 9180b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9180b5: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* 9180b8: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 9180bb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9180bd: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9180bf: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 9180c2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9180c4: fadd dword ptr [esp + esi*4 + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + esi*4 + 0x20u)));
/* 9180c8: fstp dword ptr [esp + esi*4 + 0x20] */
  WF32((uint32_t)(esp + esi*4 + 0x20u), ST0); FPOP();
/* 9180cc: jl 0x9180a0 */
  if ((sf != of)) goto L_9180a0;
L_9180ce: /* 9180ce: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
L_9180d2: /* 9180d2: add edi, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9180d6: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9180d9: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 9180da: jne 0x918092 */
  if (!zf) goto L_918092;
L_9180dc: /* 9180dc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_9180e0: /* 9180e0: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9180e4: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 9180e7: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9180eb: mov dword ptr [eax - 4], edx */
  W32((uint32_t)(eax + 0xfffffffcu), edx);
/* 9180ee: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9180f2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9180f4: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 9180f8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9180fb: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 9180fe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9180ff: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918102: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918105: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918107: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 91810b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91810f: jl 0x917fb0 */
  if ((sf != of)) goto L_917fb0;
L_918115: /* 918115: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_918116: /* 918116: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 918119: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_918120: /* 918120: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 918123: mov eax, esi */
  eax = esi;
/* 918125: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 918126: mov ecx, 0xc */
  ecx = 0xcu;
/* 91812b: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x91812b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 91812d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91812f: je 0x918135 */
  if (zf) goto L_918135;
L_918131: /* 918131: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 918133: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_918135: /* 918135: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 918137: je 0x918147 */
  if (zf) goto L_918147;
L_918139: /* 918139: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 91813d: mov dword ptr [edx + edi*4], 0 */
  W32((uint32_t)(edx + edi*4), 0x0u);
/* 918144: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 918145: jmp 0x918120 */
  goto L_918120;
L_918147: /* 918147: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 918148: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 918149: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91814a: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91814d: ret 8 */
  esp += 12; SPILL(); return;
}
