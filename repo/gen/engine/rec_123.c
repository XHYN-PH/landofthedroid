#include "recomp.h"
#include "rec_mod.h"

void f_91cb40(void) {
  LOAD_REGS();
L_91cb40: /* 91cb40: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 91cb44: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 91cb48: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 91cb4b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 91cb4e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 91cb52: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 91cb55: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91cb58: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91cb5a: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 91cb5c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 91cb5f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91cb61: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 91cb63: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 91cb66: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91cb68: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 91cb6b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 91cb6d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91cb70: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 91cb72: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 91cb75: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91cb77: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 91cb7a: ret  */
  esp += 4; SPILL(); return;
}

void f_91cb80(void) {
  LOAD_REGS();
L_91cb80: /* 91cb80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91cb81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91cb82: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 91cb86: mov eax, dword ptr [edi + 0x160] */
  eax = R32((uint32_t)(edi + 0x160u));
/* 91cb8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91cb8e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91cb92: jne 0x91cb9a */
  if (!zf) goto L_91cb9a;
L_91cb94: /* 91cb94: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91cb98: jmp 0x91cba8 */
  goto L_91cba8;
L_91cb9a: /* 91cb9a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91cb9e: fdivr dword ptr [edi + 0x170] */
  ST0 = (F32((uint32_t)(edi + 0x170u))) / ST0;
/* 91cba4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_91cba8: /* 91cba8: mov esi, dword ptr [edi + 0x164] */
  esi = R32((uint32_t)(edi + 0x164u));
/* 91cbae: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91cbb0: je 0x91cc3f */
  if (zf) goto L_91cc3f;
L_91cbb6: /* 91cbb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91cbb7: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 91cbbb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91cbbc: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
L_91cbc0: /* 91cbc0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 91cbc3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 91cbc6: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 91cbcc: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* 91cbd2: mov edx, dword ptr [edi + 0xb8] */
  edx = R32((uint32_t)(edi + 0xb8u));
/* 91cbd8: mov dword ptr [esi + 0xb8], edx */
  W32((uint32_t)(esi + 0xb8u), edx);
/* 91cbde: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 91cbe1: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 91cbe4: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 91cbe7: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 91cbea: mov ecx, dword ptr [esi + 0x198] */
  ecx = R32((uint32_t)(esi + 0x198u));
/* 91cbf0: mov eax, 1 */
  eax = 0x1u;
/* 91cbf5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91cbf7: jne 0x91cc09 */
  if (!zf) goto L_91cc09;
L_91cbf9: /* 91cbf9: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91cbfd: fmul dword ptr [esi + 0x1b8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1b8u)));
/* 91cc03: fstp dword ptr [esi + 0x1b4] */
  WF32((uint32_t)(esi + 0x1b4u), ST0); FPOP();
L_91cc09: /* 91cc09: cmp dword ptr [esi + 0x19c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x19cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91cc0f: jne 0x91cc21 */
  if (!zf) goto L_91cc21;
L_91cc11: /* 91cc11: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91cc15: fmul dword ptr [esi + 0x1c4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1c4u)));
/* 91cc1b: fstp dword ptr [esi + 0x1c0] */
  WF32((uint32_t)(esi + 0x1c0u), ST0); FPOP();
L_91cc21: /* 91cc21: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 91cc25: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91cc29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91cc2a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91cc2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91cc2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91cc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91cc2e: call 0x91bef0 */
  esp -= 4; W32(esp, 0x91cc33u); SPILL(); f_91bef0(); if (g_unwind) return; RELOAD();
/* 91cc33: mov esi, dword ptr [esi + 0x1dc] */
  esi = R32((uint32_t)(esi + 0x1dcu));
/* 91cc39: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91cc3b: jne 0x91cbc0 */
  if (!zf) goto L_91cbc0;
L_91cc3d: /* 91cc3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91cc3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_91cc3f: /* 91cc3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91cc40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91cc41: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_91cc50(void) {
  LOAD_REGS();
L_91cc50: /* 91cc50: sub esp, 0x140 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91cc56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91cc57: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91cc58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91cc59: mov esi, dword ptr [esp + 0x150] */
  esi = R32((uint32_t)(esp + 0x150u));
/* 91cc60: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 91cc63: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 91cc66: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91cc69: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 91cc6c: mov ebp, dword ptr [esi + 0x48] */
  ebp = R32((uint32_t)(esi + 0x48u));
/* 91cc6f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91cc72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91cc73: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* 91cc76: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91cc78: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 91cc7c: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 91cc7f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91cc81: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91cc83: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91cc85: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91cc87: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91cc89: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91cc8d: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 91cc91: mov dword ptr [esp + 0xdc], edi */
  W32((uint32_t)(esp + 0xdcu), edi);
/* 91cc98: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 91cc9c: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 91cca0: mov dword ptr [esp + 0xcc], ebx */
  W32((uint32_t)(esp + 0xccu), ebx);
/* 91cca7: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 91ccae: mov dword ptr [esp + 0xd0], edx */
  W32((uint32_t)(esp + 0xd0u), edx);
/* 91ccb5: mov dword ptr [esp + 0xd4], eax */
  W32((uint32_t)(esp + 0xd4u), eax);
/* 91ccbc: mov dword ptr [esp + 0xd8], ebp */
  W32((uint32_t)(esp + 0xd8u), ebp);
/* 91ccc3: xor edi, edi */
  edi = 0;
L_91ccc5: /* 91ccc5: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91ccc8: mov eax, ecx */
  eax = ecx;
/* 91ccca: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91cccb: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ccce: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ccd0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ccd3: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ccd9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ccdc: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ccdf: jns 0x91cce6 */
  if (!sf) goto L_91cce6;
L_91cce1: /* 91cce1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cce2: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cce5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cce6: /* 91cce6: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91cce9: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91ccec: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91ccf3: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91ccf6: mov eax, ecx */
  eax = ecx;
/* 91ccf8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ccf9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ccfc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ccfe: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91cd01: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91cd07: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91cd0a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91cd0d: jns 0x91cd14 */
  if (!sf) goto L_91cd14;
L_91cd0f: /* 91cd0f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cd10: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cd13: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cd14: /* 91cd14: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91cd18: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91cd1b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91cd1c: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91cd1f: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91cd26: jne 0x91ccc5 */
  if (!zf) goto L_91ccc5;
L_91cd28: /* 91cd28: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91cd2c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91cd30: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 91cd36: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 91cd3d: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 91cd43: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 91cd49: xor edi, edi */
  edi = 0;
/* 91cd4b: nop  */
/* 91cd4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91cd50: /* 91cd50: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91cd53: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91cd56: mov eax, ecx */
  eax = ecx;
/* 91cd58: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91cd59: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91cd5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91cd5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91cd61: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91cd67: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91cd6a: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91cd6d: jns 0x91cd74 */
  if (!sf) goto L_91cd74;
L_91cd6f: /* 91cd6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cd70: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cd73: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cd74: /* 91cd74: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91cd77: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91cd7a: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91cd81: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91cd84: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91cd87: mov eax, ecx */
  eax = ecx;
/* 91cd89: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91cd8a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91cd8d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91cd8f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91cd92: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91cd98: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91cd9b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91cd9e: jns 0x91cda5 */
  if (!sf) goto L_91cda5;
L_91cda0: /* 91cda0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cda1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cda4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cda5: /* 91cda5: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91cda9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91cdac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91cdad: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91cdb0: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91cdb7: jne 0x91cd50 */
  if (!zf) goto L_91cd50;
L_91cdb9: /* 91cdb9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91cdbd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91cdc1: xor edi, edi */
  edi = 0;
/* 91cdc3: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 91cdc6: mov dword ptr [ebp + 4], edi */
  W32((uint32_t)(ebp + 0x4u), edi);
/* 91cdc9: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* 91cdcc: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 91cdcf: nop  */
L_91cdd0: /* 91cdd0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91cdd3: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91cdd6: mov eax, ecx */
  eax = ecx;
/* 91cdd8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91cdd9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91cddc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91cdde: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91cde1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91cde7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91cdea: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91cded: jns 0x91cdf4 */
  if (!sf) goto L_91cdf4;
L_91cdef: /* 91cdef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cdf0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cdf3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cdf4: /* 91cdf4: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91cdf7: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91cdfa: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91ce01: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ce04: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91ce07: mov eax, ecx */
  eax = ecx;
/* 91ce09: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ce0a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ce0d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ce0f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ce12: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ce18: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91ce1b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91ce1e: jns 0x91ce25 */
  if (!sf) goto L_91ce25;
L_91ce20: /* 91ce20: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ce21: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ce24: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ce25: /* 91ce25: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91ce29: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91ce2c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91ce2d: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91ce30: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91ce37: jne 0x91cdd0 */
  if (!zf) goto L_91cdd0;
L_91ce39: /* 91ce39: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91ce3d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91ce41: xor edi, edi */
  edi = 0;
/* 91ce43: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 91ce46: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 91ce49: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* 91ce4c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 91ce4f: nop  */
L_91ce50: /* 91ce50: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ce53: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91ce56: mov eax, ecx */
  eax = ecx;
/* 91ce58: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ce59: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ce5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ce5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ce61: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ce67: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ce6a: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ce6d: jns 0x91ce74 */
  if (!sf) goto L_91ce74;
L_91ce6f: /* 91ce6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ce70: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ce73: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ce74: /* 91ce74: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91ce77: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91ce7a: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91ce81: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ce84: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91ce87: mov eax, ecx */
  eax = ecx;
/* 91ce89: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ce8a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ce8d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ce8f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ce92: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ce98: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91ce9b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91ce9e: jns 0x91cea5 */
  if (!sf) goto L_91cea5;
L_91cea0: /* 91cea0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cea1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cea4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cea5: /* 91cea5: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91cea9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91ceac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91cead: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91ceb0: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91ceb7: jne 0x91ce50 */
  if (!zf) goto L_91ce50;
L_91ceb9: /* 91ceb9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91cebd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91cec1: xor edi, edi */
  edi = 0;
/* 91cec3: mov dword ptr [edx + 0xc], edi */
  W32((uint32_t)(edx + 0xcu), edi);
/* 91cec6: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 91cec9: mov dword ptr [ebx + 0xc], edi */
  W32((uint32_t)(ebx + 0xcu), edi);
/* 91cecc: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 91cecf: nop  */
L_91ced0: /* 91ced0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ced3: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91ced6: mov eax, ecx */
  eax = ecx;
/* 91ced8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ced9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91cedc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91cede: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91cee1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91cee7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ceea: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ceed: jns 0x91cef4 */
  if (!sf) goto L_91cef4;
L_91ceef: /* 91ceef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cef0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cef3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cef4: /* 91cef4: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91cef7: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91cefa: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91cf01: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91cf04: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91cf07: mov eax, ecx */
  eax = ecx;
/* 91cf09: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91cf0a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91cf0d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91cf0f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91cf12: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91cf18: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91cf1b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91cf1e: jns 0x91cf25 */
  if (!sf) goto L_91cf25;
L_91cf20: /* 91cf20: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cf21: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cf24: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cf25: /* 91cf25: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91cf29: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91cf2c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91cf2d: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91cf30: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91cf37: jne 0x91ced0 */
  if (!zf) goto L_91ced0;
L_91cf39: /* 91cf39: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91cf3d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91cf41: xor edi, edi */
  edi = 0;
/* 91cf43: mov dword ptr [edx + 0x10], edi */
  W32((uint32_t)(edx + 0x10u), edi);
/* 91cf46: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 91cf49: mov dword ptr [ebx + 0x10], edi */
  W32((uint32_t)(ebx + 0x10u), edi);
/* 91cf4c: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 91cf4f: nop  */
L_91cf50: /* 91cf50: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91cf53: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* 91cf56: mov eax, ecx */
  eax = ecx;
/* 91cf58: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91cf59: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91cf5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91cf5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91cf61: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91cf67: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91cf6a: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91cf6d: jns 0x91cf74 */
  if (!sf) goto L_91cf74;
L_91cf6f: /* 91cf6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cf70: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cf73: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cf74: /* 91cf74: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91cf77: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91cf7a: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91cf81: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91cf84: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* 91cf87: mov eax, ecx */
  eax = ecx;
/* 91cf89: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91cf8a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91cf8d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91cf8f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91cf92: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91cf98: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91cf9b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91cf9e: jns 0x91cfa5 */
  if (!sf) goto L_91cfa5;
L_91cfa0: /* 91cfa0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91cfa1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91cfa4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91cfa5: /* 91cfa5: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91cfa9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91cfac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91cfad: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91cfb0: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91cfb7: jne 0x91cf50 */
  if (!zf) goto L_91cf50;
L_91cfb9: /* 91cfb9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91cfbd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 91cfc1: xor eax, eax */
  eax = 0;
/* 91cfc3: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 91cfc6: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 91cfc9: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 91cfcc: mov ebx, dword ptr [esp + 0x158] */
  ebx = R32((uint32_t)(esp + 0x158u));
/* 91cfd3: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 91cfd6: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 91cfdc: mov ecx, dword ptr [esp + 0x15c] */
  ecx = R32((uint32_t)(esp + 0x15cu));
/* 91cfe3: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 91cfe7: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91cfea: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91cfec: lea edx, [esp + 0xe0] */
  edx = (uint32_t)(esp + 0xe0u);
/* 91cff3: lea ebp, [eax + 0x20] */
  ebp = (uint32_t)(eax + 0x20u);
/* 91cff6: lea ecx, [ebx + 0xc4] */
  ecx = (uint32_t)(ebx + 0xc4u);
/* 91cffc: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
L_91d004: /* 91d004: mov eax, ebp */
  eax = ebp;
/* 91d006: mov edi, 4 */
  edi = 0x4u;
/* 91d00b: nop  */
/* 91d00c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91d010: /* 91d010: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 91d013: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91d016: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91d019: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d01c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91d01d: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91d020: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91d023: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d025: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 91d028: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91d02b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d02d: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91d030: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91d032: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d034: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91d037: jne 0x91d010 */
  if (!zf) goto L_91d010;
L_91d039: /* 91d039: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91d03d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91d040: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91d041: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91d045: jne 0x91d004 */
  if (!zf) goto L_91d004;
L_91d047: /* 91d047: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 91d04d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91d050: je 0x91d0bc */
  if (zf) goto L_91d0bc;
L_91d052: /* 91d052: mov ecx, dword ptr [esp + 0x15c] */
  ecx = R32((uint32_t)(esp + 0x15cu));
/* 91d059: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91d05c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d05e: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 91d062: lea ebp, [eax + 0x20] */
  ebp = (uint32_t)(eax + 0x20u);
/* 91d065: lea ecx, [ebx + 0x104] */
  ecx = (uint32_t)(ebx + 0x104u);
/* 91d06b: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
L_91d073: /* 91d073: mov eax, ebp */
  eax = ebp;
/* 91d075: mov edi, 4 */
  edi = 0x4u;
/* 91d07a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_91d080: /* 91d080: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 91d083: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91d086: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91d089: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d08c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91d08d: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91d090: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91d093: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d095: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 91d098: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91d09b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d09d: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91d0a0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91d0a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d0a4: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91d0a7: jne 0x91d080 */
  if (!zf) goto L_91d080;
L_91d0a9: /* 91d0a9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91d0ad: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91d0b0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91d0b1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91d0b5: jne 0x91d073 */
  if (!zf) goto L_91d073;
L_91d0b7: /* 91d0b7: jmp 0x91d177 */
  goto L_91d177;
L_91d0bc: /* 91d0bc: mov edx, dword ptr [ebx + 0xfc] */
  edx = R32((uint32_t)(ebx + 0xfcu));
/* 91d0c2: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 91d0c8: mov ecx, dword ptr [ebx + 0x104] */
  ecx = R32((uint32_t)(ebx + 0x104u));
/* 91d0ce: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 91d0d2: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 91d0d8: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 91d0dc: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
/* 91d0e2: mov dword ptr [esp + 0x6c], ecx */
  W32((uint32_t)(esp + 0x6cu), ecx);
/* 91d0e6: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 91d0ec: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 91d0f0: mov edx, dword ptr [ebx + 0x114] */
  edx = R32((uint32_t)(ebx + 0x114u));
/* 91d0f6: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 91d0fa: mov eax, dword ptr [ebx + 0x118] */
  eax = R32((uint32_t)(ebx + 0x118u));
/* 91d100: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 91d104: mov ecx, dword ptr [ebx + 0x11c] */
  ecx = R32((uint32_t)(ebx + 0x11cu));
/* 91d10a: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 91d10e: mov edx, dword ptr [ebx + 0x120] */
  edx = R32((uint32_t)(ebx + 0x120u));
/* 91d114: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 91d11b: mov eax, dword ptr [ebx + 0x124] */
  eax = R32((uint32_t)(ebx + 0x124u));
/* 91d121: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 91d128: mov ecx, dword ptr [ebx + 0x128] */
  ecx = R32((uint32_t)(ebx + 0x128u));
/* 91d12e: mov dword ptr [esp + 0x88], edx */
  W32((uint32_t)(esp + 0x88u), edx);
/* 91d135: mov edx, dword ptr [ebx + 0x12c] */
  edx = R32((uint32_t)(ebx + 0x12cu));
/* 91d13b: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 91d142: mov eax, dword ptr [ebx + 0x130] */
  eax = R32((uint32_t)(ebx + 0x130u));
/* 91d148: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 91d14f: mov ecx, dword ptr [ebx + 0x134] */
  ecx = R32((uint32_t)(ebx + 0x134u));
/* 91d155: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 91d15c: mov edx, dword ptr [ebx + 0x138] */
  edx = R32((uint32_t)(ebx + 0x138u));
/* 91d162: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 91d169: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 91d170: mov dword ptr [esp + 0xa0], edx */
  W32((uint32_t)(esp + 0xa0u), edx);
L_91d177: /* 91d177: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 91d17a: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 91d17d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 91d181: mov ebp, dword ptr [esp + 0x160] */
  ebp = R32((uint32_t)(esp + 0x160u));
/* 91d188: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 91d18b: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 91d18e: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 91d191: mov edx, dword ptr [ebx + 0xb8] */
  edx = R32((uint32_t)(ebx + 0xb8u));
/* 91d197: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 91d19b: mov eax, dword ptr [ebx + 0x164] */
  eax = R32((uint32_t)(ebx + 0x164u));
/* 91d1a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91d1a3: je 0x91d29d */
  if (zf) goto L_91d29d;
L_91d1a9: /* 91d1a9: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 91d1af: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91d1b2: je 0x91d1e3 */
  if (zf) goto L_91d1e3;
L_91d1b4: /* 91d1b4: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 91d1ba: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* 91d1be: mov ecx, dword ptr [ebp + ecx*4] */
  ecx = R32((uint32_t)(ebp + ecx*4));
/* 91d1c2: fld dword ptr [ecx + 0xa0] */
  { double v = F32((uint32_t)(ecx + 0xa0u)); FPUSH(v); }
/* 91d1c8: add eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d1cd: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 91d1cf: add ecx, 0xa0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91d1d5: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 91d1d8: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 91d1db: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 91d1de: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 91d1e1: jmp 0x91d1fe */
  goto L_91d1fe;
L_91d1e3: /* 91d1e3: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 91d1e9: mov eax, dword ptr [ebp + edx*4] */
  eax = R32((uint32_t)(ebp + edx*4));
/* 91d1ed: fld dword ptr [eax + 0xa0] */
  { double v = F32((uint32_t)(eax + 0xa0u)); FPUSH(v); }
/* 91d1f3: add eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d1f8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 91d1fb: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
L_91d1fe: /* 91d1fe: fld dword ptr [esp + 0x108] */
  { double v = F32((uint32_t)(esp + 0x108u)); FPUSH(v); }
/* 91d205: mov eax, dword ptr [esp + 0x164] */
  eax = R32((uint32_t)(esp + 0x164u));
/* 91d20c: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 91d210: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 91d212: fld dword ptr [esp + 0x108] */
  { double v = F32((uint32_t)(esp + 0x108u)); FPUSH(v); }
/* 91d219: lea edx, [ebx + 0x160] */
  edx = (uint32_t)(ebx + 0x160u);
/* 91d21f: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 91d223: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d225: fld dword ptr [esp + 0x104] */
  { double v = F32((uint32_t)(esp + 0x104u)); FPUSH(v); }
/* 91d22c: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 91d230: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d232: fld dword ptr [esp + 0xfc] */
  { double v = F32((uint32_t)(esp + 0xfcu)); FPUSH(v); }
/* 91d239: fmul dword ptr [esp + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x80u)));
/* 91d240: fld dword ptr [esp + 0xf8] */
  { double v = F32((uint32_t)(esp + 0xf8u)); FPUSH(v); }
/* 91d247: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 91d24b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d24d: fld dword ptr [esp + 0xf4] */
  { double v = F32((uint32_t)(esp + 0xf4u)); FPUSH(v); }
/* 91d254: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 91d258: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d25a: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
/* 91d25c: fchs  */
  ST0 = -ST0;
/* 91d25e: fstp dword ptr [ebx + 0x174] */
  WF32((uint32_t)(ebx + 0x174u), ST0); FPOP();
/* 91d264: fld dword ptr [esp + 0xe4] */
  { double v = F32((uint32_t)(esp + 0xe4u)); FPUSH(v); }
/* 91d26b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91d26d: fld dword ptr [esp + 0xec] */
  { double v = F32((uint32_t)(esp + 0xecu)); FPUSH(v); }
/* 91d274: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 91d276: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d278: fld dword ptr [esp + 0xe8] */
  { double v = F32((uint32_t)(esp + 0xe8u)); FPUSH(v); }
/* 91d27f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91d281: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91d283: fstp dword ptr [ebx + 0x188] */
  WF32((uint32_t)(ebx + 0x188u), ST0); FPOP();
/* 91d289: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 91d28b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d28c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91d28e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d28f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91d291: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91d293: call 0x91db90 */
  esp -= 4; W32(esp, 0x91d298u); SPILL(); f_91db90(); if (g_unwind) return; RELOAD();
/* 91d298: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91d29b: jmp 0x91d2a7 */
  goto L_91d2a7;
L_91d29d: /* 91d29d: mov dword ptr [ebx + 0x170], 0 */
  W32((uint32_t)(ebx + 0x170u), 0x0u);
L_91d2a7: /* 91d2a7: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 91d2ad: lea ecx, [ebx + 0x148] */
  ecx = (uint32_t)(ebx + 0x148u);
/* 91d2b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d2b4: xor ecx, ecx */
  ecx = 0;
/* 91d2b6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91d2b9: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 91d2bc: lea edx, [ebx + 0x13c] */
  edx = (uint32_t)(ebx + 0x13cu);
/* 91d2c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d2c3: lea edx, [esp + 0x9c] */
  edx = (uint32_t)(esp + 0x9cu);
/* 91d2ca: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91d2cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d2ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d2cf: lea ecx, [esp + 0x120] */
  ecx = (uint32_t)(esp + 0x120u);
/* 91d2d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d2d7: mov ecx, dword ptr [esp + 0x170] */
  ecx = R32((uint32_t)(esp + 0x170u));
/* 91d2de: lea edx, [eax + ecx + 0x30] */
  edx = (uint32_t)(eax + ecx + 0x30u);
/* 91d2e2: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 91d2e8: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91d2eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d2ec: lea ecx, [eax + ecx + 0x30] */
  ecx = (uint32_t)(eax + ecx + 0x30u);
/* 91d2f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d2f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d2f2: call 0x91b810 */
  esp -= 4; W32(esp, 0x91d2f7u); SPILL(); f_91b810(); if (g_unwind) return; RELOAD();
/* 91d2f7: lea edx, [esp + 0xe0] */
  edx = (uint32_t)(esp + 0xe0u);
/* 91d2fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d2ff: lea eax, [esp + 0x124] */
  eax = (uint32_t)(esp + 0x124u);
/* 91d306: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91d307: call 0x972d20 */
  esp -= 4; W32(esp, 0x91d30cu); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 91d30c: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 91d310: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d311: lea edx, [esp + 0x134] */
  edx = (uint32_t)(esp + 0x134u);
/* 91d318: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d319: call 0x972d20 */
  esp -= 4; W32(esp, 0x91d31eu); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 91d31e: xor edx, edx */
  edx = 0;
/* 91d320: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
L_91d324: /* 91d324: fld dword ptr [esp + edx*4 + 0x120] */
  { double v = F32((uint32_t)(esp + edx*4 + 0x120u)); FPUSH(v); }
/* 91d32b: xor eax, eax */
  eax = 0;
/* 91d32d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91d330: /* 91d330: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91d332: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91d333: fmul dword ptr [esp + eax*4 + 0x12c] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax*4 + 0x12cu)));
/* 91d33a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91d33d: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 91d340: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 91d343: jb 0x91d330 */
  if (cf) goto L_91d330;
L_91d345: /* 91d345: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91d346: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91d348: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 91d34b: jb 0x91d324 */
  if (cf) goto L_91d324;
L_91d34d: /* 91d34d: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91d351: xor ecx, ecx */
  ecx = 0;
/* 91d353: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 91d357: fsubr dword ptr [esp + 0x40] */
  ST0 = (F32((uint32_t)(esp + 0x40u))) - ST0;
/* 91d35b: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 91d35f: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91d363: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 91d367: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 91d36b: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 91d36d: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 91d371: fstp dword ptr [esp + 0x14c] */
  WF32((uint32_t)(esp + 0x14cu), ST0); FPOP();
/* 91d378: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 91d37c: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 91d380: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91d386: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 91d38d: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 91d391: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 91d395: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 91d399: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 91d39d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91d3a3: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 91d3aa: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91d3ae: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 91d3b2: fadd dword ptr [esp + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x5cu)));
/* 91d3b6: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 91d3ba: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91d3c0: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 91d3c7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91d3cb: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 91d3cf: fadd dword ptr [esp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x58u)));
/* 91d3d3: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 91d3d7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91d3dd: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 91d3e4: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 91d3e8: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 91d3ec: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 91d3f0: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 91d3f4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91d3fa: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 91d401: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91d405: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 91d409: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 91d40d: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 91d411: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 91d417: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 91d41e: mov edi, edi */
  edi = edi;
L_91d420: /* 91d420: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91d423: lea edi, [eax + 3] */
  edi = (uint32_t)(eax + 0x3u);
/* 91d426: mov eax, edi */
  eax = edi;
/* 91d428: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91d429: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91d42c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d42e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91d431: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91d437: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91d43a: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 91d43d: jns 0x91d444 */
  if (!sf) goto L_91d444;
L_91d43f: /* 91d43f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91d440: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91d443: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91d444: /* 91d444: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91d447: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91d44a: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 91d451: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91d454: lea edi, [eax + 3] */
  edi = (uint32_t)(eax + 0x3u);
/* 91d457: mov eax, edi */
  eax = edi;
/* 91d459: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91d45a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91d45d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d45f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91d462: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91d468: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91d46b: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 91d46e: jns 0x91d475 */
  if (!sf) goto L_91d475;
L_91d470: /* 91d470: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91d471: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91d474: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91d475: /* 91d475: lea eax, [edi + edx*4 + 0xc] */
  eax = (uint32_t)(edi + edx*4 + 0xcu);
/* 91d479: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91d47c: mov edi, dword ptr [esp + ecx*4 + 0xb0] */
  edi = R32((uint32_t)(esp + ecx*4 + 0xb0u));
/* 91d483: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 91d486: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91d489: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 91d48c: mov eax, edi */
  eax = edi;
/* 91d48e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91d48f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91d492: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d494: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91d497: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91d49d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91d4a0: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 91d4a3: jns 0x91d4aa */
  if (!sf) goto L_91d4aa;
L_91d4a5: /* 91d4a5: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91d4a6: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91d4a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91d4aa: /* 91d4aa: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91d4ad: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91d4b0: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 91d4b7: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91d4ba: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 91d4bd: mov eax, edi */
  eax = edi;
/* 91d4bf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91d4c0: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91d4c3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d4c5: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91d4c8: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91d4ce: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91d4d1: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 91d4d4: jns 0x91d4db */
  if (!sf) goto L_91d4db;
L_91d4d6: /* 91d4d6: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91d4d7: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91d4da: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91d4db: /* 91d4db: lea eax, [edi + edx*4 + 0xc] */
  eax = (uint32_t)(edi + edx*4 + 0xcu);
/* 91d4df: mov edi, dword ptr [esp + ecx*4 + 0xa4] */
  edi = R32((uint32_t)(esp + ecx*4 + 0xa4u));
/* 91d4e6: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91d4e9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91d4ea: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 91d4ed: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 91d4f0: jb 0x91d420 */
  if (cf) goto L_91d420;
L_91d4f6: /* 91d4f6: cmp dword ptr [ebx + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91d4fd: je 0x91d5e1 */
  if (zf) goto L_91d5e1;
L_91d503: /* 91d503: xor ecx, ecx */
  ecx = 0;
L_91d505: /* 91d505: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91d508: lea edi, [eax + 3] */
  edi = (uint32_t)(eax + 0x3u);
/* 91d50b: mov eax, edi */
  eax = edi;
/* 91d50d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91d50e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91d511: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d513: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91d516: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91d51c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91d51f: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 91d522: jns 0x91d529 */
  if (!sf) goto L_91d529;
L_91d524: /* 91d524: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91d525: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91d528: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91d529: /* 91d529: fld dword ptr [esp + ecx*4 + 0xb0] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0xb0u)); FPUSH(v); }
/* 91d530: lea eax, [edi + edx*4 + 0x18] */
  eax = (uint32_t)(edi + edx*4 + 0x18u);
/* 91d534: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91d537: fchs  */
  ST0 = -ST0;
/* 91d539: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 91d540: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91d543: lea edi, [eax + 3] */
  edi = (uint32_t)(eax + 0x3u);
/* 91d546: mov eax, edi */
  eax = edi;
/* 91d548: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91d549: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91d54c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d54e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91d551: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91d557: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91d55a: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 91d55d: jns 0x91d564 */
  if (!sf) goto L_91d564;
L_91d55f: /* 91d55f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91d560: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91d563: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91d564: /* 91d564: lea eax, [edi + edx*4 + 0x24] */
  eax = (uint32_t)(edi + edx*4 + 0x24u);
/* 91d568: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91d56b: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
/* 91d56e: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91d571: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 91d574: mov eax, edi */
  eax = edi;
/* 91d576: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91d577: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91d57a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d57c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91d57f: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91d585: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91d588: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 91d58b: jns 0x91d592 */
  if (!sf) goto L_91d592;
L_91d58d: /* 91d58d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91d58e: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91d591: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91d592: /* 91d592: fld dword ptr [esp + ecx*4 + 0xa4] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0xa4u)); FPUSH(v); }
/* 91d599: lea eax, [edi + edx*4 + 0x18] */
  eax = (uint32_t)(edi + edx*4 + 0x18u);
/* 91d59d: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91d5a0: fchs  */
  ST0 = -ST0;
/* 91d5a2: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 91d5a9: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91d5ac: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 91d5af: mov eax, edi */
  eax = edi;
/* 91d5b1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91d5b2: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91d5b5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d5b7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91d5ba: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91d5c0: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91d5c3: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 91d5c6: jns 0x91d5cd */
  if (!sf) goto L_91d5cd;
L_91d5c8: /* 91d5c8: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91d5c9: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91d5cc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91d5cd: /* 91d5cd: lea eax, [edi + edx*4 + 0x24] */
  eax = (uint32_t)(edi + edx*4 + 0x24u);
/* 91d5d1: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91d5d4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91d5d5: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
/* 91d5d8: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 91d5db: jb 0x91d505 */
  if (cf) goto L_91d505;
L_91d5e1: /* 91d5e1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91d5e5: fchs  */
  ST0 = -ST0;
/* 91d5e7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 91d5eb: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 91d5ee: fld dword ptr [esp + 0x14c] */
  { double v = F32((uint32_t)(esp + 0x14cu)); FPUSH(v); }
/* 91d5f5: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91d5f9: fchs  */
  ST0 = -ST0;
/* 91d5fb: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91d5fd: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91d600: lea eax, [edx + 0xc] */
  eax = (uint32_t)(edx + 0xcu);
/* 91d603: mov edx, 2 */
  edx = 0x2u;
L_91d608: /* 91d608: mov dword ptr [ecx + eax], 0xff7fffff */
  W32((uint32_t)(ecx + eax), 0xff7fffffu);
/* 91d60f: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
/* 91d615: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91d618: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 91d619: jne 0x91d608 */
  if (!zf) goto L_91d608;
L_91d61b: /* 91d61b: mov ecx, dword ptr [esp + 0x164] */
  ecx = R32((uint32_t)(esp + 0x164u));
/* 91d622: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d623: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d624: xor eax, eax */
  eax = 0;
/* 91d626: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 91d628: mov dword ptr [esp + 0xc8], eax */
  W32((uint32_t)(esp + 0xc8u), eax);
/* 91d62f: mov dword ptr [esp + 0xcc], eax */
  W32((uint32_t)(esp + 0xccu), eax);
/* 91d636: lea edx, [esp + 0xd4] */
  edx = (uint32_t)(esp + 0xd4u);
/* 91d63d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d63e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91d63f: mov dword ptr [esp + 0xd8], eax */
  W32((uint32_t)(esp + 0xd8u), eax);
/* 91d646: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 91d64a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91d64b: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 91d64f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d650: lea edx, [esp + 0xd8] */
  edx = (uint32_t)(esp + 0xd8u);
/* 91d657: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d658: lea eax, [ebx + 0xb4] */
  eax = (uint32_t)(ebx + 0xb4u);
/* 91d65e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91d65f: add ebx, 0x160 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x160u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91d665: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91d666: call 0x91d6a0 */
  esp -= 4; W32(esp, 0x91d66bu); SPILL(); f_91d6a0(); if (g_unwind) return; RELOAD();
/* 91d66b: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91d66e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91d670: je 0x91d687 */
  if (zf) goto L_91d687;
L_91d672: /* 91d672: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 91d674: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d675: call 0x91b610 */
  esp -= 4; W32(esp, 0x91d67au); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 91d67a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d67b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d67c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91d67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91d67e: add esp, 0x140 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91d684: ret 0x14 */
  esp += 24; SPILL(); return;
L_91d687: /* 91d687: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 91d689: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d68a: call 0x91b610 */
  esp -= 4; W32(esp, 0x91d68fu); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 91d68f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d690: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d691: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91d692: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91d693: add esp, 0x140 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91d699: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_91d6a0(void) {
  LOAD_REGS();
L_91d6a0: /* 91d6a0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91d6a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91d6a5: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 91d6a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d6aa: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 91d6ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91d6af: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 91d6b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91d6b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d6b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91d6b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91d6b7: call 0x91d700 */
  esp -= 4; W32(esp, 0x91d6bcu); SPILL(); f_91d700(); if (g_unwind) return; RELOAD();
/* 91d6bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91d6bf: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91d6c1: je 0x91d6f6 */
  if (zf) goto L_91d6f6;
L_91d6c3: /* 91d6c3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 91d6c7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 91d6cb: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 91d6cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d6d0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 91d6d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d6d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91d6d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d6d7: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 91d6db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91d6dc: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91d6e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d6e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d6e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91d6e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91d6e4: call 0x91d900 */
  esp -= 4; W32(esp, 0x91d6e9u); SPILL(); f_91d900(); if (g_unwind) return; RELOAD();
/* 91d6e9: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91d6ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91d6ee: je 0x91d6f6 */
  if (zf) goto L_91d6f6;
L_91d6f0: /* 91d6f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d6f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d6f2: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91d6f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91d6f5: ret  */
  esp += 4; SPILL(); return;
L_91d6f6: /* 91d6f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d6f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d6f8: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 91d6fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91d6fb: ret  */
  esp += 4; SPILL(); return;
}

void f_91d700(void) {
  LOAD_REGS();
L_91d700: /* 91d700: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 91d704: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 91d707: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d708: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91d70e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91d70f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d711: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91d714: jp 0x91d766 */
  if (pf) goto L_91d766;
L_91d716: /* 91d716: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 91d719: lea edx, [ecx + 0x30] */
  edx = (uint32_t)(ecx + 0x30u);
/* 91d71c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91d722: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d724: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91d727: jne 0x91d7bd */
  if (!zf) goto L_91d7bd;
L_91d72d: /* 91d72d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91d731: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 91d735: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 91d739: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91d73a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d73b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d73c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d73d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91d73e: call 0x91d7d0 */
  esp -= 4; W32(esp, 0x91d743u); SPILL(); f_91d7d0(); if (g_unwind) return; RELOAD();
/* 91d743: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91d746: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91d748: jne 0x91d74d */
  if (!zf) goto L_91d74d;
L_91d74a: /* 91d74a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d74b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d74c: ret  */
  esp += 4; SPILL(); return;
L_91d74d: /* 91d74d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 91d750: mov dword ptr [ecx + esi*4], 0 */
  W32((uint32_t)(ecx + esi*4), 0x0u);
/* 91d757: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 91d75a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d75b: mov dword ptr [edx + esi*4], 0x7f7fffff */
  W32((uint32_t)(edx + esi*4), 0x7f7fffffu);
/* 91d762: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91d764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d765: ret  */
  esp += 4; SPILL(); return;
L_91d766: /* 91d766: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 91d769: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91d76f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d771: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91d774: jne 0x91d7bd */
  if (!zf) goto L_91d7bd;
L_91d776: /* 91d776: fld dword ptr [ecx + 0x44] */
  { double v = F32((uint32_t)(ecx + 0x44u)); FPUSH(v); }
/* 91d779: lea edx, [ecx + 0x40] */
  edx = (uint32_t)(ecx + 0x40u);
/* 91d77c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91d782: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d784: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91d787: jne 0x91d7bd */
  if (!zf) goto L_91d7bd;
L_91d789: /* 91d789: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91d78d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 91d791: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 91d795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91d796: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91d797: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91d798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d799: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91d79a: call 0x91d7d0 */
  esp -= 4; W32(esp, 0x91d79fu); SPILL(); f_91d7d0(); if (g_unwind) return; RELOAD();
/* 91d79f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91d7a2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91d7a4: jne 0x91d7a9 */
  if (!zf) goto L_91d7a9;
L_91d7a6: /* 91d7a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d7a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d7a8: ret  */
  esp += 4; SPILL(); return;
L_91d7a9: /* 91d7a9: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 91d7ac: mov dword ptr [ecx + esi*4], 0xff7fffff */
  W32((uint32_t)(ecx + esi*4), 0xff7fffffu);
/* 91d7b3: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 91d7b6: mov dword ptr [edx + esi*4], 0 */
  W32((uint32_t)(edx + esi*4), 0x0u);
L_91d7bd: /* 91d7bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d7be: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91d7c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d7c1: ret  */
  esp += 4; SPILL(); return;
}

void f_91d7d0(void) {
  LOAD_REGS();
L_91d7d0: /* 91d7d0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 91d7d4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 91d7d7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 91d7db: fcomp dword ptr [edx + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x2cu)));
  FPOP();
/* 91d7de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d7df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d7e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91d7e4: jp 0x91d87c */
  if (pf) goto L_91d87c;
L_91d7ea: /* 91d7ea: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 91d7ee: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 91d7f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91d7f1: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91d7f4: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 91d7f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91d7f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91d7fa: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 91d7fd: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 91d801: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 91d804: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 91d80a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91d80c: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 91d80f: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* 91d812: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 91d815: fld dword ptr [eax + ebx*4] */
  { double v = F32((uint32_t)(eax + ebx*4)); FPUSH(v); }
/* 91d818: lea ebp, [eax + ebx*4] */
  ebp = (uint32_t)(eax + ebx*4);
/* 91d81b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91d821: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d823: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91d826: jp 0x91d82f */
  if (pf) goto L_91d82f;
L_91d828: /* 91d828: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
L_91d82f: /* 91d82f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 91d832: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91d838: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d83a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91d83d: jp 0x91d85f */
  if (pf) goto L_91d85f;
L_91d83f: /* 91d83f: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 91d842: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91d844: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 91d84a: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91d84c: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 91d84f: fstp dword ptr [ecx + ebx*4] */
  WF32((uint32_t)(ecx + ebx*4), ST0); FPOP();
/* 91d852: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 91d854: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 91d857: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d858: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91d859: mov dword ptr [ecx + ebx*4], edx */
  W32((uint32_t)(ecx + ebx*4), edx);
/* 91d85c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91d85d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d85e: ret  */
  esp += 4; SPILL(); return;
L_91d85f: /* 91d85f: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 91d861: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 91d864: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91d867: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 91d86a: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* 91d86d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 91d86f: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 91d872: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91d873: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91d874: mov dword ptr [ecx + ebx*4], edx */
  W32((uint32_t)(ecx + ebx*4), edx);
/* 91d877: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91d878: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91d87a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d87b: ret  */
  esp += 4; SPILL(); return;
L_91d87c: /* 91d87c: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 91d87f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91d883: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 91d886: fchs  */
  ST0 = -ST0;
/* 91d888: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91d88a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 91d88c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 91d88f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 91d892: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 91d894: fabs  */
  ST0 = fabs(ST0);
/* 91d896: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 91d89c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d89e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91d8a1: jp 0x91d8aa */
  if (pf) goto L_91d8aa;
L_91d8a3: /* 91d8a3: mov ecx, 1 */
  ecx = 0x1u;
/* 91d8a8: jmp 0x91d8ac */
  goto L_91d8ac;
L_91d8aa: /* 91d8aa: xor ecx, ecx */
  ecx = 0;
L_91d8ac: /* 91d8ac: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 91d8af: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 91d8b3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 91d8b6: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 91d8b9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91d8bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d8c1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91d8c4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 91d8c8: jne 0x91d8ed */
  if (!zf) goto L_91d8ed;
L_91d8ca: /* 91d8ca: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91d8cd: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
L_91d8d0: /* 91d8d0: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 91d8d3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91d8d5: je 0x91d8e9 */
  if (zf) goto L_91d8e9;
L_91d8d7: /* 91d8d7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91d8da: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91d8e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 91d8e3: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 91d8e6: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_91d8e9: /* 91d8e9: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91d8eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d8ec: ret  */
  esp += 4; SPILL(); return;
L_91d8ed: /* 91d8ed: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91d8ef: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91d8f1: jne 0x91d8d0 */
  if (!zf) goto L_91d8d0;
L_91d8f3: /* 91d8f3: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 91d8f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91d8f6: ret  */
  esp += 4; SPILL(); return;
}

void f_91d900(void) {
  LOAD_REGS();
L_91d900: /* 91d900: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 91d904: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 91d907: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91d90d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91d90f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91d912: jp 0x91d925 */
  if (pf) goto L_91d925;
L_91d914: /* 91d914: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 91d917: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91d919: jne 0x91d925 */
  if (!zf) goto L_91d925;
L_91d91b: /* 91d91b: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 91d91e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91d920: jne 0x91d925 */
  if (!zf) goto L_91d925;
L_91d922: /* 91d922: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 91d924: ret  */
  esp += 4; SPILL(); return;
L_91d925: /* 91d925: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 91d929: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91d92a: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 91d92e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91d92f: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 91d933: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91d934: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 91d938: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91d939: xor edi, edi */
  edi = 0;
/* 91d93b: sub ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 91d93d: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 91d941: jmp 0x91d947 */
  goto L_91d947;
L_91d943: /* 91d943: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
L_91d947: /* 91d947: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 91d94a: mov ebp, dword ptr [ebx + ebp] */
  ebp = R32((uint32_t)(ebx + ebp));
/* 91d94d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91d94f: mov edx, ecx */
  edx = ecx;
/* 91d951: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 91d954: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 91d957: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 91d95a: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91d95d: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 91d960: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 91d963: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 91d966: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 91d969: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 91d96b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91d96d: mov edx, ecx */
  edx = ecx;
/* 91d96f: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 91d972: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 91d975: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 91d978: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91d97b: lea ecx, [ecx + edx*4 + 0xc] */
  ecx = (uint32_t)(ecx + edx*4 + 0xcu);
/* 91d97f: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 91d982: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91d983: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91d986: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 91d989: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 91d98c: jb 0x91d943 */
  if (cf) goto L_91d943;
L_91d98e: /* 91d98e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 91d992: cmp dword ptr [ecx + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91d996: je 0x91d9f1 */
  if (zf) goto L_91d9f1;
L_91d998: /* 91d998: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 91d99c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 91d9a0: xor edi, edi */
  edi = 0;
/* 91d9a2: sub ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
L_91d9a4: /* 91d9a4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91d9a7: fld dword ptr [ebx + ebp] */
  { double v = F32((uint32_t)(ebx + ebp)); FPUSH(v); }
/* 91d9aa: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* 91d9ad: fchs  */
  ST0 = -ST0;
/* 91d9af: mov edx, ecx */
  edx = ecx;
/* 91d9b1: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 91d9b4: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 91d9b7: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 91d9ba: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91d9bd: lea ecx, [ecx + edx*4 + 0x18] */
  ecx = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91d9c1: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 91d9c4: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91d9c7: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 91d9ca: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 91d9cc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91d9ce: mov edx, ecx */
  edx = ecx;
/* 91d9d0: fchs  */
  ST0 = -ST0;
/* 91d9d2: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 91d9d5: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 91d9d8: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 91d9db: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91d9de: lea ecx, [ecx + edx*4 + 0x24] */
  ecx = (uint32_t)(ecx + edx*4 + 0x24u);
/* 91d9e2: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 91d9e5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91d9e6: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91d9e9: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91d9ec: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 91d9ef: jb 0x91d9a4 */
  if (cf) goto L_91d9a4;
L_91d9f1: /* 91d9f1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 91d9f5: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 91d9f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91d9fa: jne 0x91da03 */
  if (!zf) goto L_91da03;
L_91d9fc: /* 91d9fc: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 91d9ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91da01: je 0x91da76 */
  if (zf) goto L_91da76;
L_91da03: /* 91da03: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 91da06: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91da0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91da0e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91da11: jnp 0x91da3c */
  if (!pf) goto L_91da3c;
L_91da13: /* 91da13: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 91da17: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 91da1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91da1c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 91da20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91da21: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 91da25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91da26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91da27: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 91da2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91da2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91da2d: call 0x91da80 */
  esp -= 4; W32(esp, 0x91da32u); SPILL(); f_91da80(); if (g_unwind) return; RELOAD();
/* 91da32: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91da35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91da36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91da37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91da38: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91da3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91da3b: ret  */
  esp += 4; SPILL(); return;
L_91da3c: /* 91da3c: fld dword ptr [ecx + 0x58] */
  { double v = F32((uint32_t)(ecx + 0x58u)); FPUSH(v); }
/* 91da3f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 91da43: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 91da46: fchs  */
  ST0 = -ST0;
/* 91da48: fstp dword ptr [edx + esi*4] */
  WF32((uint32_t)(edx + esi*4), ST0); FPOP();
/* 91da4b: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 91da4e: mov edi, dword ptr [ecx + 0x58] */
  edi = R32((uint32_t)(ecx + 0x58u));
/* 91da51: mov dword ptr [edx + esi*4], edi */
  W32((uint32_t)(edx + esi*4), edi);
/* 91da54: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* 91da57: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91da59: je 0x91da6b */
  if (zf) goto L_91da6b;
L_91da5b: /* 91da5b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 91da5e: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 91da61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91da62: mov dword ptr [eax + esi*4], ecx */
  W32((uint32_t)(eax + esi*4), ecx);
/* 91da65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91da66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91da67: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91da69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91da6a: ret  */
  esp += 4; SPILL(); return;
L_91da6b: /* 91da6b: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 91da6e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 91da70: fsub dword ptr [ecx + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x18u)));
/* 91da73: fstp dword ptr [edx + esi*4] */
  WF32((uint32_t)(edx + esi*4), ST0); FPOP();
L_91da76: /* 91da76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91da77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91da78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91da79: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91da7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91da7c: ret  */
  esp += 4; SPILL(); return;
}

void f_91da80(void) {
  LOAD_REGS();
L_91da80: /* 91da80: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 91da84: fld dword ptr [ecx + 0x54] */
  { double v = F32((uint32_t)(ecx + 0x54u)); FPUSH(v); }
/* 91da87: fcomp dword ptr [ecx + 0x28] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x28u)));
  FPOP();
/* 91da8a: fld dword ptr [ecx + 0x58] */
  { double v = F32((uint32_t)(ecx + 0x58u)); FPUSH(v); }
/* 91da8d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91da8f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91da92: je 0x91da96 */
  if (zf) goto L_91da96;
L_91da94: /* 91da94: fchs  */
  ST0 = -ST0;
L_91da96: /* 91da96: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 91da9a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91da9c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 91da9e: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 91daa2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91daa3: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 91daa6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91daaa: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 91daac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91daad: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 91dab1: fadd dword ptr [esi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x10u)));
/* 91dab4: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 91dab7: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 91dab9: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 91dabc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91dabe: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 91dac1: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 91dac4: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 91dac7: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 91dac9: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 91dacc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91dace: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 91dad1: fadd dword ptr [esi + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x18u)));
/* 91dad4: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 91dad7: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 91dad9: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 91dadc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91dade: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91dae0: fadd dword ptr [esi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x20u)));
/* 91dae3: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 91dae6: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 91dae8: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 91daeb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91daed: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91daf0: fadd dword ptr [esi + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x24u)));
/* 91daf3: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* 91daf6: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 91daf8: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 91dafb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91dafd: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91db00: fadd dword ptr [esi + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x28u)));
/* 91db03: fstp dword ptr [esi + 0x28] */
  WF32((uint32_t)(esi + 0x28u), ST0); FPOP();
/* 91db06: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 91db09: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91db0c: je 0x91db80 */
  if (zf) goto L_91db80;
L_91db0e: /* 91db0e: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 91db11: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91db13: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 91db15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91db16: fchs  */
  ST0 = -ST0;
/* 91db18: fadd dword ptr [esi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x10u)));
/* 91db1b: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 91db1e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 91db21: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 91db24: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91db26: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 91db29: fchs  */
  ST0 = -ST0;
/* 91db2b: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 91db2e: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 91db31: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 91db34: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 91db37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91db39: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 91db3c: fchs  */
  ST0 = -ST0;
/* 91db3e: fadd dword ptr [esi + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x18u)));
/* 91db41: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 91db44: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 91db48: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 91db4b: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 91db4e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91db50: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 91db52: fchs  */
  ST0 = -ST0;
/* 91db54: fadd dword ptr [edx + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x20u)));
/* 91db57: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 91db5a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 91db5d: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 91db60: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91db62: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 91db65: fchs  */
  ST0 = -ST0;
/* 91db67: fadd dword ptr [edx + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x24u)));
/* 91db6a: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
/* 91db6d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 91db70: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 91db73: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 91db76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91db77: fchs  */
  ST0 = -ST0;
/* 91db79: fadd dword ptr [ecx + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x28u)));
/* 91db7c: fstp dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0); FPOP();
/* 91db7f: ret  */
  esp += 4; SPILL(); return;
L_91db80: /* 91db80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91db81: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91db83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91db84: ret  */
  esp += 4; SPILL(); return;
}

void f_91db90(void) {
  LOAD_REGS();
L_91db90: /* 91db90: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 91db94: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 91db97: xor edx, edx */
  edx = 0;
/* 91db99: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91db9b: jne 0x91dbb3 */
  if (!zf) goto L_91dbb3;
L_91db9d: /* 91db9d: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 91dba0: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 91dba3: fsub dword ptr [ecx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x14u)));
/* 91dba6: mov dword ptr [ecx + 8], 1 */
  W32((uint32_t)(ecx + 0x8u), 0x1u);
/* 91dbad: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 91dbb0: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
L_91dbb3: /* 91dbb3: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 91dbb6: fabs  */
  ST0 = fabs(ST0);
/* 91dbb8: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 91dbbe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91dbc0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91dbc3: jp 0x91dbd0 */
  if (pf) goto L_91dbd0;
L_91dbc5: /* 91dbc5: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 91dbc8: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 91dbcb: jmp 0x91dc54 */
  goto L_91dc54;
L_91dbd0: /* 91dbd0: cmp dword ptr [esp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91dbd4: je 0x91dc54 */
  if (zf) goto L_91dc54;
L_91dbda: /* 91dbda: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 91dbdd: fadd dword ptr [0xa20f50] */
  ST0 = ST0 + (F32((uint32_t)(0xa20f50u)));
/* 91dbe3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 91dbe7: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 91dbea: fcom dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
/* 91dbee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91dbf0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91dbf3: jne 0x91dc0b */
  if (!zf) goto L_91dc0b;
L_91dbf5: /* 91dbf5: fsub dword ptr [0xa20f4c] */
  ST0 = ST0 - (F32((uint32_t)(0xa20f4cu)));
/* 91dbfb: fcom dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
/* 91dbff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91dc01: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91dc04: je 0x91dbf5 */
  if (zf) goto L_91dbf5;
L_91dc06: /* 91dc06: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 91dc09: jmp 0x91dc0d */
  goto L_91dc0d;
L_91dc0b: /* 91dc0b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_91dc0d: /* 91dc0d: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 91dc10: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 91dc13: fld dword ptr [0xa20f50] */
  { double v = F32((uint32_t)(0xa20f50u)); FPUSH(v); }
/* 91dc19: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 91dc1d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 91dc1f: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 91dc23: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91dc25: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91dc28: jp 0x91dc52 */
  if (pf) goto L_91dc52;
L_91dc2a: /* 91dc2a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 91dc2e: mov edi, edi */
  edi = edi;
L_91dc30: /* 91dc30: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91dc32: fadd dword ptr [0xa20f4c] */
  ST0 = ST0 + (F32((uint32_t)(0xa20f4cu)));
/* 91dc38: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91dc3a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 91dc3c: fadd dword ptr [0xa20f50] */
  ST0 = ST0 + (F32((uint32_t)(0xa20f50u)));
/* 91dc42: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 91dc44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91dc46: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91dc49: jnp 0x91dc30 */
  if (!pf) goto L_91dc30;
L_91dc4b: /* 91dc4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91dc4d: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 91dc50: jmp 0x91dc54 */
  goto L_91dc54;
L_91dc52: /* 91dc52: fstp st(0) */
  STI(0) = ST0; FPOP();
L_91dc54: /* 91dc54: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 91dc57: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 91dc5a: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91dc5c: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 91dc5f: je 0x91dc8e */
  if (zf) goto L_91dc8e;
L_91dc61: /* 91dc61: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 91dc64: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 91dc67: fcom dword ptr [ecx + 0x30] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x30u)));
/* 91dc6a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91dc6c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91dc6f: jp 0x91dc78 */
  if (pf) goto L_91dc78;
L_91dc71: /* 91dc71: fsub dword ptr [ecx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x30u)));
/* 91dc74: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 91dc77: ret  */
  esp += 4; SPILL(); return;
L_91dc78: /* 91dc78: fcom dword ptr [ecx + 0x40] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x40u)));
/* 91dc7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91dc7d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91dc80: jne 0x91dc89 */
  if (!zf) goto L_91dc89;
L_91dc82: /* 91dc82: fsub dword ptr [ecx + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x40u)));
/* 91dc85: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 91dc88: ret  */
  esp += 4; SPILL(); return;
L_91dc89: /* 91dc89: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91dc8b: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
L_91dc8e: /* 91dc8e: ret  */
  esp += 4; SPILL(); return;
}

void f_91dc90(void) {
  LOAD_REGS();
L_91dc90: /* 91dc90: sub esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91dc96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91dc97: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91dc98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91dc99: mov esi, dword ptr [esp + 0xf4] */
  esi = R32((uint32_t)(esp + 0xf4u));
/* 91dca0: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 91dca3: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 91dca6: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91dca9: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 91dcac: mov ebp, dword ptr [esi + 0x48] */
  ebp = R32((uint32_t)(esi + 0x48u));
/* 91dcaf: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91dcb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91dcb3: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* 91dcb6: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91dcb8: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 91dcbc: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 91dcbf: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91dcc1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91dcc3: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91dcc5: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91dcc7: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91dcc9: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 91dccd: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 91dcd1: mov dword ptr [esp + 0xf0], edi */
  W32((uint32_t)(esp + 0xf0u), edi);
/* 91dcd8: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 91dcdc: mov dword ptr [esp + 0xd8], edx */
  W32((uint32_t)(esp + 0xd8u), edx);
/* 91dce3: mov dword ptr [esp + 0xe0], ebx */
  W32((uint32_t)(esp + 0xe0u), ebx);
/* 91dcea: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 91dcf1: mov dword ptr [esp + 0xe4], edx */
  W32((uint32_t)(esp + 0xe4u), edx);
/* 91dcf8: mov dword ptr [esp + 0xe8], eax */
  W32((uint32_t)(esp + 0xe8u), eax);
/* 91dcff: mov dword ptr [esp + 0xec], ebp */
  W32((uint32_t)(esp + 0xecu), ebp);
/* 91dd06: xor edi, edi */
  edi = 0;
L_91dd08: /* 91dd08: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91dd0b: mov eax, ecx */
  eax = ecx;
/* 91dd0d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91dd0e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91dd11: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91dd13: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91dd16: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91dd1c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91dd1f: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91dd22: jns 0x91dd29 */
  if (!sf) goto L_91dd29;
L_91dd24: /* 91dd24: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91dd25: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91dd28: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91dd29: /* 91dd29: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91dd2c: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91dd2f: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91dd36: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91dd39: mov eax, ecx */
  eax = ecx;
/* 91dd3b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91dd3c: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91dd3f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91dd41: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91dd44: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91dd4a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91dd4d: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91dd50: jns 0x91dd57 */
  if (!sf) goto L_91dd57;
L_91dd52: /* 91dd52: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91dd53: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91dd56: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91dd57: /* 91dd57: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91dd5b: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91dd5e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91dd5f: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91dd62: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91dd69: jne 0x91dd08 */
  if (!zf) goto L_91dd08;
L_91dd6b: /* 91dd6b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91dd6f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 91dd73: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 91dd79: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 91dd80: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 91dd86: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 91dd8c: xor edi, edi */
  edi = 0;
/* 91dd8e: mov edi, edi */
  edi = edi;
L_91dd90: /* 91dd90: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91dd93: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91dd96: mov eax, ecx */
  eax = ecx;
/* 91dd98: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91dd99: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91dd9c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91dd9e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91dda1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91dda7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ddaa: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ddad: jns 0x91ddb4 */
  if (!sf) goto L_91ddb4;
L_91ddaf: /* 91ddaf: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ddb0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ddb3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ddb4: /* 91ddb4: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91ddb7: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91ddba: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91ddc1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ddc4: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91ddc7: mov eax, ecx */
  eax = ecx;
/* 91ddc9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ddca: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ddcd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ddcf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ddd2: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ddd8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91dddb: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91ddde: jns 0x91dde5 */
  if (!sf) goto L_91dde5;
L_91dde0: /* 91dde0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91dde1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91dde4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91dde5: /* 91dde5: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91dde9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91ddec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91dded: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91ddf0: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91ddf7: jne 0x91dd90 */
  if (!zf) goto L_91dd90;
L_91ddf9: /* 91ddf9: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91ddfd: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 91de01: xor edi, edi */
  edi = 0;
/* 91de03: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 91de06: mov dword ptr [ebp + 4], edi */
  W32((uint32_t)(ebp + 0x4u), edi);
/* 91de09: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* 91de0c: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 91de0f: nop  */
L_91de10: /* 91de10: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91de13: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91de16: mov eax, ecx */
  eax = ecx;
/* 91de18: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91de19: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91de1c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91de1e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91de21: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91de27: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91de2a: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91de2d: jns 0x91de34 */
  if (!sf) goto L_91de34;
L_91de2f: /* 91de2f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91de30: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91de33: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91de34: /* 91de34: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91de37: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91de3a: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91de41: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91de44: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91de47: mov eax, ecx */
  eax = ecx;
/* 91de49: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91de4a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91de4d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91de4f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91de52: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91de58: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91de5b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91de5e: jns 0x91de65 */
  if (!sf) goto L_91de65;
L_91de60: /* 91de60: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91de61: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91de64: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91de65: /* 91de65: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91de69: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91de6c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91de6d: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91de70: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91de77: jne 0x91de10 */
  if (!zf) goto L_91de10;
L_91de79: /* 91de79: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91de7d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 91de81: xor edi, edi */
  edi = 0;
/* 91de83: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 91de86: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 91de89: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* 91de8c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 91de8f: nop  */
L_91de90: /* 91de90: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91de93: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91de96: mov eax, ecx */
  eax = ecx;
/* 91de98: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91de99: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91de9c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91de9e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91dea1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91dea7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91deaa: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91dead: jns 0x91deb4 */
  if (!sf) goto L_91deb4;
L_91deaf: /* 91deaf: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91deb0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91deb3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91deb4: /* 91deb4: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91deb7: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91deba: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91dec1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91dec4: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91dec7: mov eax, ecx */
  eax = ecx;
/* 91dec9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91deca: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91decd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91decf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ded2: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ded8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91dedb: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91dede: jns 0x91dee5 */
  if (!sf) goto L_91dee5;
L_91dee0: /* 91dee0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91dee1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91dee4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91dee5: /* 91dee5: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91dee9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91deec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91deed: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91def0: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91def7: jne 0x91de90 */
  if (!zf) goto L_91de90;
L_91def9: /* 91def9: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91defd: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 91df01: xor edi, edi */
  edi = 0;
/* 91df03: mov dword ptr [edx + 0xc], edi */
  W32((uint32_t)(edx + 0xcu), edi);
/* 91df06: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 91df09: mov dword ptr [ebx + 0xc], edi */
  W32((uint32_t)(ebx + 0xcu), edi);
/* 91df0c: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 91df0f: nop  */
L_91df10: /* 91df10: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91df13: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91df16: mov eax, ecx */
  eax = ecx;
/* 91df18: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91df19: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91df1c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91df1e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91df21: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91df27: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91df2a: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91df2d: jns 0x91df34 */
  if (!sf) goto L_91df34;
L_91df2f: /* 91df2f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91df30: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91df33: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91df34: /* 91df34: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91df37: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91df3a: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91df41: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91df44: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91df47: mov eax, ecx */
  eax = ecx;
/* 91df49: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91df4a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91df4d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91df4f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91df52: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91df58: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91df5b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91df5e: jns 0x91df65 */
  if (!sf) goto L_91df65;
L_91df60: /* 91df60: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91df61: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91df64: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91df65: /* 91df65: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91df69: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91df6c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91df6d: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91df70: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91df77: jne 0x91df10 */
  if (!zf) goto L_91df10;
L_91df79: /* 91df79: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91df7d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 91df81: xor edi, edi */
  edi = 0;
/* 91df83: mov dword ptr [edx + 0x10], edi */
  W32((uint32_t)(edx + 0x10u), edi);
/* 91df86: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 91df89: mov dword ptr [ebx + 0x10], edi */
  W32((uint32_t)(ebx + 0x10u), edi);
/* 91df8c: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 91df8f: nop  */
L_91df90: /* 91df90: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91df93: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* 91df96: mov eax, ecx */
  eax = ecx;
/* 91df98: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91df99: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91df9c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91df9e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91dfa1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91dfa7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91dfaa: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91dfad: jns 0x91dfb4 */
  if (!sf) goto L_91dfb4;
L_91dfaf: /* 91dfaf: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91dfb0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91dfb3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91dfb4: /* 91dfb4: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91dfb7: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91dfba: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91dfc1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91dfc4: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* 91dfc7: mov eax, ecx */
  eax = ecx;
/* 91dfc9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91dfca: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91dfcd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91dfcf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91dfd2: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91dfd8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91dfdb: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91dfde: jns 0x91dfe5 */
  if (!sf) goto L_91dfe5;
L_91dfe0: /* 91dfe0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91dfe1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91dfe4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91dfe5: /* 91dfe5: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91dfe9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91dfec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91dfed: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91dff0: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91dff7: jne 0x91df90 */
  if (!zf) goto L_91df90;
L_91dff9: /* 91dff9: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91dffd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91e001: xor eax, eax */
  eax = 0;
/* 91e003: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 91e006: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 91e009: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 91e00c: mov ebx, dword ptr [esp + 0x100] */
  ebx = R32((uint32_t)(esp + 0x100u));
/* 91e013: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 91e016: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 91e01d: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 91e023: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91e026: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e028: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 91e02c: lea ebp, [eax + 0x20] */
  ebp = (uint32_t)(eax + 0x20u);
/* 91e02f: add ecx, 0xc4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91e035: mov dword ptr [esp + 0x1c], 4 */
  W32((uint32_t)(esp + 0x1cu), 0x4u);
/* 91e03d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91e040: /* 91e040: mov eax, ebp */
  eax = ebp;
/* 91e042: mov edi, 4 */
  edi = 0x4u;
L_91e047: /* 91e047: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 91e04a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91e04d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91e050: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e053: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91e054: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 91e057: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91e05a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e05c: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91e05f: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91e062: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e064: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91e067: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91e069: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e06b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91e06e: jne 0x91e047 */
  if (!zf) goto L_91e047;
L_91e070: /* 91e070: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 91e074: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91e077: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91e078: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 91e07c: jne 0x91e040 */
  if (!zf) goto L_91e040;
L_91e07e: /* 91e07e: mov ebp, dword ptr [esp + 0xfc] */
  ebp = R32((uint32_t)(esp + 0xfcu));
/* 91e085: mov eax, dword ptr [ebp + 0xb8] */
  eax = R32((uint32_t)(ebp + 0xb8u));
/* 91e08b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91e08e: je 0x91e0ac */
  if (zf) goto L_91e0ac;
L_91e090: /* 91e090: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91e093: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91e096: lea edx, [ebp + 0xfc] */
  edx = (uint32_t)(ebp + 0xfcu);
/* 91e09c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91e09d: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 91e0a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91e0a5: call 0x91ea30 */
  esp -= 4; W32(esp, 0x91e0aau); SPILL(); f_91ea30(); if (g_unwind) return; RELOAD();
/* 91e0aa: jmp 0x91e0c0 */
  goto L_91e0c0;
L_91e0ac: /* 91e0ac: lea ecx, [ebp + 0xfc] */
  ecx = (uint32_t)(ebp + 0xfcu);
/* 91e0b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91e0b3: lea edx, [esp + 0x84] */
  edx = (uint32_t)(esp + 0x84u);
/* 91e0ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91e0bb: call 0x91e9c0 */
  esp -= 4; W32(esp, 0x91e0c0u); SPILL(); f_91e9c0(); if (g_unwind) return; RELOAD();
L_91e0c0: /* 91e0c0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 91e0c3: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 91e0c6: mov edx, dword ptr [ebp + 0xb4] */
  edx = R32((uint32_t)(ebp + 0xb4u));
/* 91e0cc: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 91e0cf: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 91e0d2: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 91e0d5: mov edx, dword ptr [ebp + 0xb8] */
  edx = R32((uint32_t)(ebp + 0xb8u));
/* 91e0db: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 91e0df: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 91e0e6: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 91e0ea: mov edx, dword ptr [ebp + 0xb4] */
  edx = R32((uint32_t)(ebp + 0xb4u));
/* 91e0f0: mov eax, edx */
  eax = edx;
/* 91e0f2: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91e0f5: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 91e0f9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e0fb: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 91e102: mov ecx, dword ptr [ebp + 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xb8u));
/* 91e108: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91e10b: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 91e10f: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 91e113: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 91e11a: fsub dword ptr [esp + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x68u)));
/* 91e11e: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 91e122: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 91e129: fsub dword ptr [eax + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x30u)));
/* 91e12c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91e130: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 91e137: fsub dword ptr [eax + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x34u)));
/* 91e13a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91e13e: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 91e145: fsub dword ptr [eax + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x38u)));
/* 91e148: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 91e14c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e150: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91e154: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e158: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91e15c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e15e: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 91e165: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91e169: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91e16d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e171: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91e175: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e177: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 91e17e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e182: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91e186: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91e18a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91e18e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e190: fstp dword ptr [esp + 0xc8] */
  WF32((uint32_t)(esp + 0xc8u), ST0); FPOP();
/* 91e197: jne 0x91e1bc */
  if (!zf) goto L_91e1bc;
L_91e199: /* 91e199: mov eax, dword ptr [esp + 0xb0] */
  eax = R32((uint32_t)(esp + 0xb0u));
/* 91e1a0: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 91e1a4: mov eax, dword ptr [esp + 0xb4] */
  eax = R32((uint32_t)(esp + 0xb4u));
/* 91e1ab: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 91e1af: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 91e1b6: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 91e1ba: jmp 0x91e239 */
  goto L_91e239;
L_91e1bc: /* 91e1bc: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 91e1c3: mov eax, ecx */
  eax = ecx;
/* 91e1c5: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91e1c8: fsub dword ptr [eax + ebx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(eax + ebx + 0x30u)));
/* 91e1cc: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e1ce: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 91e1d2: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 91e1d9: fsub dword ptr [eax + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x34u)));
/* 91e1dc: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 91e1e0: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 91e1e7: fsub dword ptr [eax + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x38u)));
/* 91e1ea: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 91e1ee: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e1f2: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 91e1f6: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e1fa: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 91e1fe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e200: fstp dword ptr [esp + 0xcc] */
  WF32((uint32_t)(esp + 0xccu), ST0); FPOP();
/* 91e207: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91e20b: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 91e20f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e213: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91e217: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e219: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 91e220: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e224: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91e228: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91e22c: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 91e230: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e232: fstp dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0); FPOP();
L_91e239: /* 91e239: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91e23c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e240: mov edi, dword ptr [esp + 0x104] */
  edi = R32((uint32_t)(esp + 0x104u));
/* 91e247: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* 91e24a: fmul dword ptr [eax + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x94u)));
/* 91e250: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e254: fmul dword ptr [eax + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x98u)));
/* 91e25a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e25c: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91e260: fmul dword ptr [eax + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x90u)));
/* 91e266: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e268: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 91e26f: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 91e275: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e277: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 91e27e: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 91e284: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e286: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 91e28d: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 91e293: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e295: je 0x91e2eb */
  if (zf) goto L_91e2eb;
L_91e297: /* 91e297: mov ecx, dword ptr [edi + ecx*4] */
  ecx = R32((uint32_t)(edi + ecx*4));
/* 91e29a: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e29e: fmul dword ptr [ecx + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x94u)));
/* 91e2a4: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e2a8: fmul dword ptr [ecx + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x98u)));
/* 91e2ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e2b0: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91e2b4: fmul dword ptr [ecx + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x90u)));
/* 91e2ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e2bc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e2be: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 91e2c5: fmul dword ptr [ecx + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xa8u)));
/* 91e2cb: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 91e2d2: fmul dword ptr [ecx + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xa4u)));
/* 91e2d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e2da: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 91e2e1: fmul dword ptr [ecx + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xa0u)));
/* 91e2e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e2e9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
L_91e2eb: /* 91e2eb: mov eax, dword ptr [ebp + 0x164] */
  eax = R32((uint32_t)(ebp + 0x164u));
/* 91e2f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91e2f3: je 0x91e33c */
  if (zf) goto L_91e33c;
L_91e2f5: /* 91e2f5: fstp dword ptr [ebp + 0x188] */
  WF32((uint32_t)(ebp + 0x188u), ST0); FPOP();
/* 91e2fb: mov ecx, dword ptr [esp + 0x108] */
  ecx = R32((uint32_t)(esp + 0x108u));
/* 91e302: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e306: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 91e308: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 91e30c: lea eax, [ebp + 0x160] */
  eax = (uint32_t)(ebp + 0x160u);
/* 91e312: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e316: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 91e31a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e31c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e320: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 91e324: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e326: fchs  */
  ST0 = -ST0;
/* 91e328: fstp dword ptr [ebp + 0x174] */
  WF32((uint32_t)(ebp + 0x174u), ST0); FPOP();
/* 91e32e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 91e330: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91e331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91e332: call 0x91db90 */
  esp -= 4; W32(esp, 0x91e337u); SPILL(); f_91db90(); if (g_unwind) return; RELOAD();
/* 91e337: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91e33a: jmp 0x91e348 */
  goto L_91e348;
L_91e33c: /* 91e33c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91e33e: mov dword ptr [ebp + 0x170], 0 */
  W32((uint32_t)(ebp + 0x170u), 0x0u);
L_91e348: /* 91e348: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91e34c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 91e350: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 91e354: xor edi, edi */
  edi = 0;
/* 91e356: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91e35a: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 91e35e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e360: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91e364: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 91e368: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e36a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91e36c: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91e370: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 91e374: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 91e378: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 91e37c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e37e: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 91e382: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 91e386: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e388: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 91e38b: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91e38f: fmul dword ptr [esp + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa0u)));
/* 91e396: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91e39a: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 91e3a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e3a3: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91e3a7: fmul dword ptr [esp + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa8u)));
/* 91e3ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e3b0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 91e3b3: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91e3b7: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 91e3be: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 91e3c2: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 91e3c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e3cb: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 91e3cf: fmul dword ptr [esp + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x80u)));
/* 91e3d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e3d8: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 91e3db: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e3df: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* 91e3e6: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e3ea: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 91e3f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e3f3: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91e3f7: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 91e3fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91e400: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
L_91e403: /* 91e403: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91e406: fld dword ptr [esp + edi*4 + 0x40] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x40u)); FPUSH(v); }
/* 91e40a: mov eax, ecx */
  eax = ecx;
/* 91e40c: fchs  */
  ST0 = -ST0;
/* 91e40e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e40f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e412: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e414: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e417: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e41d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e420: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91e423: jns 0x91e42a */
  if (!sf) goto L_91e42a;
L_91e425: /* 91e425: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e426: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e429: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e42a: /* 91e42a: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91e42d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e42e: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e431: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91e434: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91e437: jl 0x91e403 */
  if ((sf != of)) goto L_91e403;
L_91e439: /* 91e439: xor edi, edi */
  edi = 0;
/* 91e43b: nop  */
/* 91e43c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91e440: /* 91e440: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91e443: fld dword ptr [esp + edi*4 + 0x50] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x50u)); FPUSH(v); }
/* 91e447: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91e44a: fchs  */
  ST0 = -ST0;
/* 91e44c: mov eax, ecx */
  eax = ecx;
/* 91e44e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e44f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e452: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e454: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e457: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e45d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91e460: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91e463: jns 0x91e46a */
  if (!sf) goto L_91e46a;
L_91e465: /* 91e465: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e466: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e469: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e46a: /* 91e46a: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91e46d: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91e470: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e471: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 91e474: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e477: jl 0x91e440 */
  if ((sf != of)) goto L_91e440;
L_91e479: /* 91e479: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91e47c: mov eax, ecx */
  eax = ecx;
/* 91e47e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e47f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e482: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e484: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e487: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e48a: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91e48d: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e493: jns 0x91e49a */
  if (!sf) goto L_91e49a;
L_91e495: /* 91e495: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e496: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e499: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e49a: /* 91e49a: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91e49e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91e4a1: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91e4a5: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91e4a7: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91e4ab: lea eax, [eax + edx*4 + 0x30] */
  eax = (uint32_t)(eax + edx*4 + 0x30u);
/* 91e4af: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91e4b3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e4b5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91e4b7: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91e4bb: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91e4bf: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91e4c3: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91e4c7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e4c9: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91e4cc: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91e4d0: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91e4d4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91e4d8: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91e4dc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e4de: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 91e4e1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91e4e4: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91e4e7: mov eax, ecx */
  eax = ecx;
/* 91e4e9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e4ea: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e4ed: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e4ef: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e4f2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e4f5: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91e4f8: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e4fe: jns 0x91e505 */
  if (!sf) goto L_91e505;
L_91e500: /* 91e500: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e501: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e504: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e505: /* 91e505: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 91e509: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91e50c: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91e510: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91e512: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91e516: lea eax, [eax + edx*4 + 0x30] */
  eax = (uint32_t)(eax + edx*4 + 0x30u);
/* 91e51a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91e51e: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 91e521: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e523: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91e525: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91e529: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91e52d: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 91e531: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91e535: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e537: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91e53a: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 91e53e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91e542: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 91e546: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91e54a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e54c: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 91e54f: mov eax, dword ptr [ebp + 0xb8] */
  eax = R32((uint32_t)(ebp + 0xb8u));
/* 91e555: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91e557: je 0x91e6a6 */
  if (zf) goto L_91e6a6;
L_91e55d: /* 91e55d: xor edi, edi */
  edi = 0;
/* 91e55f: nop  */
L_91e560: /* 91e560: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91e563: mov eax, ecx */
  eax = ecx;
/* 91e565: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e566: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e569: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e56b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e56e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e574: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e577: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91e57a: jns 0x91e581 */
  if (!sf) goto L_91e581;
L_91e57c: /* 91e57c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e57d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e580: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e581: /* 91e581: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91e584: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91e588: mov eax, dword ptr [esp + edi*4 + 0x40] */
  eax = R32((uint32_t)(esp + edi*4 + 0x40u));
/* 91e58c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e58d: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e590: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 91e593: jl 0x91e560 */
  if ((sf != of)) goto L_91e560;
L_91e595: /* 91e595: xor edi, edi */
  edi = 0;
L_91e597: /* 91e597: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91e59a: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91e59d: mov eax, ecx */
  eax = ecx;
/* 91e59f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e5a0: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e5a3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e5a5: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e5a8: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e5ae: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e5b1: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91e5b4: jns 0x91e5bb */
  if (!sf) goto L_91e5bb;
L_91e5b6: /* 91e5b6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e5b7: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e5ba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e5bb: /* 91e5bb: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91e5be: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91e5c2: mov eax, dword ptr [esp + edi*4 + 0x50] */
  eax = R32((uint32_t)(esp + edi*4 + 0x50u));
/* 91e5c6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e5c7: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e5ca: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 91e5cd: jl 0x91e597 */
  if ((sf != of)) goto L_91e597;
L_91e5cf: /* 91e5cf: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91e5d2: mov eax, ecx */
  eax = ecx;
/* 91e5d4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e5d5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e5d8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e5da: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e5dd: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e5e0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91e5e3: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e5e9: jns 0x91e5f0 */
  if (!sf) goto L_91e5f0;
L_91e5eb: /* 91e5eb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e5ec: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e5ef: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e5f0: /* 91e5f0: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91e5f4: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91e5f7: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 91e5fb: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91e5fd: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91e601: lea eax, [eax + edx*4 + 0x90] */
  eax = (uint32_t)(eax + edx*4 + 0x90u);
/* 91e608: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 91e60c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e60e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91e610: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91e614: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 91e618: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91e61c: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91e620: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e622: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91e625: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91e629: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91e62d: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91e631: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 91e635: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e637: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 91e63a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91e63d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91e63e: mov eax, ecx */
  eax = ecx;
/* 91e640: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e641: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e644: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e646: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e649: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e64c: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91e64f: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e655: jns 0x91e65c */
  if (!sf) goto L_91e65c;
L_91e657: /* 91e657: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e658: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e65b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e65c: /* 91e65c: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91e660: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91e663: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 91e667: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91e669: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 91e66d: lea eax, [eax + edx*4 + 0x90] */
  eax = (uint32_t)(eax + edx*4 + 0x90u);
/* 91e674: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 91e678: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e67a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91e67c: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 91e680: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 91e684: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91e688: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91e68c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e68e: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91e691: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 91e695: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91e699: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 91e69d: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 91e6a1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e6a3: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
L_91e6a6: /* 91e6a6: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91e6aa: xor edi, edi */
  edi = 0;
/* 91e6ac: fmul dword ptr [esp + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa8u)));
/* 91e6b3: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91e6b7: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 91e6be: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e6c0: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91e6c4: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91e6c8: fmul dword ptr [esp + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa0u)));
/* 91e6cf: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91e6d3: fmul dword ptr [esp + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa8u)));
/* 91e6da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e6dc: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91e6e0: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91e6e4: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 91e6eb: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91e6ef: fmul dword ptr [esp + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa0u)));
/* 91e6f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e6f8: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 91e6fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91e700: /* 91e700: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91e703: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91e706: mov eax, ecx */
  eax = ecx;
/* 91e708: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e709: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e70c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e70e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e711: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e717: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e71a: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91e71d: jns 0x91e724 */
  if (!sf) goto L_91e724;
L_91e71f: /* 91e71f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e720: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e723: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e724: /* 91e724: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91e727: lea ecx, [ecx + eax*4 + 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xcu);
/* 91e72b: mov eax, dword ptr [esp + edi*4 + 0x10] */
  eax = R32((uint32_t)(esp + edi*4 + 0x10u));
/* 91e72f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e730: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e733: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 91e736: jl 0x91e700 */
  if ((sf != of)) goto L_91e700;
L_91e738: /* 91e738: cmp dword ptr [ebp + 0xb8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xb8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91e73e: je 0x91e77c */
  if (zf) goto L_91e77c;
L_91e740: /* 91e740: xor edi, edi */
  edi = 0;
L_91e742: /* 91e742: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91e745: fld dword ptr [esp + edi*4 + 0x10] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x10u)); FPUSH(v); }
/* 91e749: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91e74c: fchs  */
  ST0 = -ST0;
/* 91e74e: mov eax, ecx */
  eax = ecx;
/* 91e750: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e751: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e754: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e756: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e759: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e75f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e762: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91e765: jns 0x91e76c */
  if (!sf) goto L_91e76c;
L_91e767: /* 91e767: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e768: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e76b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e76c: /* 91e76c: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91e76f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e770: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e773: lea ecx, [ecx + eax*4 + 0x24] */
  ecx = (uint32_t)(ecx + eax*4 + 0x24u);
/* 91e777: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91e77a: jl 0x91e742 */
  if ((sf != of)) goto L_91e742;
L_91e77c: /* 91e77c: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 91e780: xor edi, edi */
  edi = 0;
/* 91e782: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 91e789: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91e78d: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 91e794: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e796: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91e79a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91e79e: fmul dword ptr [esp + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x80u)));
/* 91e7a5: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 91e7a9: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 91e7b0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e7b2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91e7b6: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 91e7ba: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 91e7c1: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 91e7c5: fmul dword ptr [esp + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x80u)));
/* 91e7cc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e7ce: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_91e7d2: /* 91e7d2: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91e7d5: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91e7d8: mov eax, ecx */
  eax = ecx;
/* 91e7da: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e7db: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e7de: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e7e0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e7e3: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e7e9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91e7ec: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91e7ef: jns 0x91e7f6 */
  if (!sf) goto L_91e7f6;
L_91e7f1: /* 91e7f1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e7f2: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e7f5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e7f6: /* 91e7f6: lea eax, [ecx + edx*4 + 0xc] */
  eax = (uint32_t)(ecx + edx*4 + 0xcu);
/* 91e7fa: mov edx, dword ptr [esp + edi*4 + 0x10] */
  edx = R32((uint32_t)(esp + edi*4 + 0x10u));
/* 91e7fe: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91e801: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e802: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e805: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 91e808: jl 0x91e7d2 */
  if ((sf != of)) goto L_91e7d2;
L_91e80a: /* 91e80a: cmp dword ptr [ebp + 0xb8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xb8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91e810: je 0x91e84e */
  if (zf) goto L_91e84e;
L_91e812: /* 91e812: xor edi, edi */
  edi = 0;
L_91e814: /* 91e814: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91e817: fld dword ptr [esp + edi*4 + 0x10] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x10u)); FPUSH(v); }
/* 91e81b: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91e81e: fchs  */
  ST0 = -ST0;
/* 91e820: mov eax, ecx */
  eax = ecx;
/* 91e822: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e823: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e826: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e828: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e82b: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e831: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91e834: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91e837: jns 0x91e83e */
  if (!sf) goto L_91e83e;
L_91e839: /* 91e839: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e83a: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e83d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e83e: /* 91e83e: lea eax, [ecx + edx*4 + 0x24] */
  eax = (uint32_t)(ecx + edx*4 + 0x24u);
/* 91e842: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91e845: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e846: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 91e849: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e84c: jl 0x91e814 */
  if ((sf != of)) goto L_91e814;
L_91e84e: /* 91e84e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e852: xor edi, edi */
  edi = 0;
/* 91e854: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* 91e85b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e85f: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 91e866: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e868: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91e86c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91e870: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 91e877: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91e87b: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* 91e882: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e884: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91e888: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91e88c: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 91e893: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91e897: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 91e89e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91e8a0: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_91e8a4: /* 91e8a4: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91e8a7: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91e8aa: mov eax, ecx */
  eax = ecx;
/* 91e8ac: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e8ad: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e8b0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e8b2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e8b5: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e8bb: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e8be: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91e8c1: jns 0x91e8c8 */
  if (!sf) goto L_91e8c8;
L_91e8c3: /* 91e8c3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e8c4: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e8c7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e8c8: /* 91e8c8: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91e8cb: lea ecx, [ecx + eax*4 + 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xcu);
/* 91e8cf: mov eax, dword ptr [esp + edi*4 + 0x10] */
  eax = R32((uint32_t)(esp + edi*4 + 0x10u));
/* 91e8d3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e8d4: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e8d7: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 91e8da: jl 0x91e8a4 */
  if ((sf != of)) goto L_91e8a4;
L_91e8dc: /* 91e8dc: cmp dword ptr [ebp + 0xb8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xb8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91e8e2: je 0x91e920 */
  if (zf) goto L_91e920;
L_91e8e4: /* 91e8e4: xor edi, edi */
  edi = 0;
L_91e8e6: /* 91e8e6: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91e8e9: fld dword ptr [esp + edi*4 + 0x10] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x10u)); FPUSH(v); }
/* 91e8ed: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91e8f0: fchs  */
  ST0 = -ST0;
/* 91e8f2: mov eax, ecx */
  eax = ecx;
/* 91e8f4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91e8f5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91e8f8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e8fa: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91e8fd: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91e903: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91e906: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91e909: jns 0x91e910 */
  if (!sf) goto L_91e910;
L_91e90b: /* 91e90b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91e90c: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91e90f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91e910: /* 91e910: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91e913: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91e914: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91e917: lea ecx, [ecx + eax*4 + 0x24] */
  ecx = (uint32_t)(ecx + eax*4 + 0x24u);
/* 91e91b: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91e91e: jl 0x91e8e6 */
  if ((sf != of)) goto L_91e8e6;
L_91e920: /* 91e920: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 91e924: mov ecx, dword ptr [esp + 0xd8] */
  ecx = R32((uint32_t)(esp + 0xd8u));
/* 91e92b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91e92d: mov edx, 5 */
  edx = 0x5u;
L_91e932: /* 91e932: mov dword ptr [ecx + eax], 0xff7fffff */
  W32((uint32_t)(ecx + eax), 0xff7fffffu);
/* 91e939: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
/* 91e93f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91e942: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 91e943: jne 0x91e932 */
  if (!zf) goto L_91e932;
L_91e945: /* 91e945: mov eax, dword ptr [esp + 0x108] */
  eax = R32((uint32_t)(esp + 0x108u));
/* 91e94c: mov edx, dword ptr [esp + 0x104] */
  edx = R32((uint32_t)(esp + 0x104u));
/* 91e953: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91e954: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91e955: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 91e957: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 91e95e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91e95f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91e960: lea eax, [esp + 0xe0] */
  eax = (uint32_t)(esp + 0xe0u);
/* 91e967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91e968: lea ecx, [esp + 0xd8] */
  ecx = (uint32_t)(esp + 0xd8u);
/* 91e96f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91e970: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 91e974: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91e975: lea eax, [ebp + 0xb4] */
  eax = (uint32_t)(ebp + 0xb4u);
/* 91e97b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91e97c: add ebp, 0x160 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x160u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91e982: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91e983: call 0x91d6a0 */
  esp -= 4; W32(esp, 0x91e988u); SPILL(); f_91d6a0(); if (g_unwind) return; RELOAD();
/* 91e988: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91e98b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91e98d: je 0x91e9a4 */
  if (zf) goto L_91e9a4;
L_91e98f: /* 91e98f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 91e991: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91e992: call 0x91b610 */
  esp -= 4; W32(esp, 0x91e997u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 91e997: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91e998: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91e999: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91e99a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91e99b: add esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91e9a1: ret 0x14 */
  esp += 24; SPILL(); return;
L_91e9a4: /* 91e9a4: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 91e9a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91e9a7: call 0x91b610 */
  esp -= 4; W32(esp, 0x91e9acu); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 91e9ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91e9ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91e9ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91e9af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91e9b0: add esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91e9b6: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_91e9c0(void) {
  LOAD_REGS();
L_91e9c0: /* 91e9c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 91e9c4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 91e9c6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 91e9ca: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 91e9cc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 91e9cf: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 91e9d2: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 91e9d5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 91e9d8: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 91e9db: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 91e9de: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 91e9e1: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 91e9e4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91e9e7: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 91e9ea: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 91e9ed: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 91e9f0: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 91e9f3: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 91e9f6: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 91e9f9: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 91e9fc: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 91e9ff: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 91ea02: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 91ea05: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 91ea08: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 91ea0b: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 91ea0e: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 91ea11: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 91ea14: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 91ea17: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 91ea1a: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 91ea1d: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 91ea20: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 91ea23: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 91ea26: ret 8 */
  esp += 12; SPILL(); return;
}

void f_91ea30(void) {
  LOAD_REGS();
L_91ea30: /* 91ea30: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 91ea34: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 91ea38: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 91ea3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91ea3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91ea3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91ea3f: lea edi, [eax + 0x20] */
  edi = (uint32_t)(eax + 0x20u);
/* 91ea42: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91ea45: mov ebx, 4 */
  ebx = 0x4u;
/* 91ea4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_91ea50: /* 91ea50: mov eax, edi */
  eax = edi;
/* 91ea52: mov esi, 4 */
  esi = 0x4u;
L_91ea57: /* 91ea57: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 91ea5a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91ea5d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91ea60: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ea63: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 91ea64: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 91ea67: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91ea6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ea6c: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91ea6f: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91ea72: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ea74: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91ea77: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91ea79: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ea7b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91ea7e: jne 0x91ea57 */
  if (!zf) goto L_91ea57;
L_91ea80: /* 91ea80: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91ea83: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 91ea84: jne 0x91ea50 */
  if (!zf) goto L_91ea50;
L_91ea86: /* 91ea86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91ea87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91ea88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91ea89: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_91ea90(void) {
  LOAD_REGS();
L_91ea90: /* 91ea90: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91ea96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91ea97: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91ea98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91ea99: mov esi, dword ptr [esp + 0xdc] */
  esi = R32((uint32_t)(esp + 0xdcu));
/* 91eaa0: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 91eaa3: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91eaa6: mov ebp, dword ptr [esi + 0x34] */
  ebp = R32((uint32_t)(esi + 0x34u));
/* 91eaa9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91eaac: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91eaae: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 91eab2: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 91eab5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91eab7: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 91eabb: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 91eabe: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91eac0: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 91eac4: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 91eac7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91eac9: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 91eacd: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 91ead0: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91ead2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91ead4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91ead5: xor ebx, ebx */
  ebx = 0;
/* 91ead7: mov dword ptr [esp + 0x58], ebp */
  W32((uint32_t)(esp + 0x58u), ebp);
/* 91eadb: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 91eadf: xor edi, edi */
  edi = 0;
L_91eae1: /* 91eae1: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91eae4: mov eax, ecx */
  eax = ecx;
/* 91eae6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91eae7: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91eaea: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91eaec: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91eaef: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91eaf5: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91eaf8: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91eafb: jns 0x91eb02 */
  if (!sf) goto L_91eb02;
L_91eafd: /* 91eafd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91eafe: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91eb01: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91eb02: /* 91eb02: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91eb05: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91eb08: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 91eb0b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91eb0e: mov eax, ecx */
  eax = ecx;
/* 91eb10: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91eb11: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91eb14: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91eb16: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91eb19: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91eb1f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91eb22: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91eb25: jns 0x91eb2c */
  if (!sf) goto L_91eb2c;
L_91eb27: /* 91eb27: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91eb28: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91eb2b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91eb2c: /* 91eb2c: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91eb2f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91eb30: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91eb33: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91eb37: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 91eb3a: jne 0x91eae1 */
  if (!zf) goto L_91eae1;
L_91eb3c: /* 91eb3c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91eb40: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91eb44: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91eb48: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 91eb4a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 91eb4c: mov dword ptr [ebp], ebx */
  W32((uint32_t)(ebp), ebx);
/* 91eb4f: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 91eb51: xor edi, edi */
  edi = 0;
L_91eb53: /* 91eb53: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91eb56: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91eb59: mov eax, ecx */
  eax = ecx;
/* 91eb5b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91eb5c: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91eb5f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91eb61: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91eb64: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91eb6a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91eb6d: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91eb70: jns 0x91eb77 */
  if (!sf) goto L_91eb77;
L_91eb72: /* 91eb72: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91eb73: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91eb76: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91eb77: /* 91eb77: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91eb7a: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91eb7d: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 91eb80: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91eb83: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91eb86: mov eax, ecx */
  eax = ecx;
/* 91eb88: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91eb89: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91eb8c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91eb8e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91eb91: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91eb97: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91eb9a: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91eb9d: jns 0x91eba4 */
  if (!sf) goto L_91eba4;
L_91eb9f: /* 91eb9f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91eba0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91eba3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91eba4: /* 91eba4: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91eba7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91eba8: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91ebab: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91ebaf: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 91ebb2: jne 0x91eb53 */
  if (!zf) goto L_91eb53;
L_91ebb4: /* 91ebb4: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91ebb8: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91ebbc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91ebc0: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 91ebc3: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 91ebc6: mov dword ptr [ebp + 4], ebx */
  W32((uint32_t)(ebp + 0x4u), ebx);
/* 91ebc9: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 91ebcc: xor edi, edi */
  edi = 0;
/* 91ebce: mov edi, edi */
  edi = edi;
L_91ebd0: /* 91ebd0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ebd3: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91ebd6: mov eax, ecx */
  eax = ecx;
/* 91ebd8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ebd9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ebdc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ebde: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ebe1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ebe7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91ebea: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91ebed: jns 0x91ebf4 */
  if (!sf) goto L_91ebf4;
L_91ebef: /* 91ebef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ebf0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ebf3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ebf4: /* 91ebf4: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91ebf7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91ebfa: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 91ebfd: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ec00: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91ec03: mov eax, ecx */
  eax = ecx;
/* 91ec05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ec06: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ec09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ec0b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ec0e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ec14: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ec17: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ec1a: jns 0x91ec21 */
  if (!sf) goto L_91ec21;
L_91ec1c: /* 91ec1c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ec1d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ec20: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ec21: /* 91ec21: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91ec24: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91ec25: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91ec28: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91ec2c: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 91ec2f: jne 0x91ebd0 */
  if (!zf) goto L_91ebd0;
L_91ec31: /* 91ec31: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91ec35: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91ec39: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91ec3d: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 91ec40: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 91ec43: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 91ec46: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 91ec49: xor edi, edi */
  edi = 0;
/* 91ec4b: nop  */
/* 91ec4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91ec50: /* 91ec50: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ec53: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91ec56: mov eax, ecx */
  eax = ecx;
/* 91ec58: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ec59: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ec5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ec5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ec61: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ec67: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91ec6a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91ec6d: jns 0x91ec74 */
  if (!sf) goto L_91ec74;
L_91ec6f: /* 91ec6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ec70: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ec73: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ec74: /* 91ec74: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91ec77: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91ec7a: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 91ec7d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ec80: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91ec83: mov eax, ecx */
  eax = ecx;
/* 91ec85: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ec86: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ec89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ec8b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ec8e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ec94: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ec97: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ec9a: jns 0x91eca1 */
  if (!sf) goto L_91eca1;
L_91ec9c: /* 91ec9c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ec9d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91eca0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91eca1: /* 91eca1: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91eca4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91eca5: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91eca8: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91ecac: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 91ecaf: jne 0x91ec50 */
  if (!zf) goto L_91ec50;
L_91ecb1: /* 91ecb1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91ecb5: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91ecb9: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91ecbd: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 91ecc0: mov dword ptr [ecx + 0xc], ebx */
  W32((uint32_t)(ecx + 0xcu), ebx);
/* 91ecc3: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 91ecc6: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 91ecc9: xor edi, edi */
  edi = 0;
/* 91eccb: nop  */
/* 91eccc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91ecd0: /* 91ecd0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ecd3: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91ecd6: mov eax, ecx */
  eax = ecx;
/* 91ecd8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ecd9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ecdc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ecde: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ece1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ece7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91ecea: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91eced: jns 0x91ecf4 */
  if (!sf) goto L_91ecf4;
L_91ecef: /* 91ecef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ecf0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ecf3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ecf4: /* 91ecf4: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91ecf7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91ecfa: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 91ecfd: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ed00: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91ed03: mov eax, ecx */
  eax = ecx;
/* 91ed05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ed06: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ed09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ed0b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ed0e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ed14: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ed17: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ed1a: jns 0x91ed21 */
  if (!sf) goto L_91ed21;
L_91ed1c: /* 91ed1c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ed1d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ed20: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ed21: /* 91ed21: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91ed24: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91ed25: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91ed28: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91ed2c: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 91ed2f: jne 0x91ecd0 */
  if (!zf) goto L_91ecd0;
L_91ed31: /* 91ed31: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91ed35: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91ed39: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91ed3d: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 91ed40: mov dword ptr [ecx + 0x10], ebx */
  W32((uint32_t)(ecx + 0x10u), ebx);
/* 91ed43: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 91ed46: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 91ed49: xor edi, edi */
  edi = 0;
/* 91ed4b: nop  */
/* 91ed4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91ed50: /* 91ed50: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ed53: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* 91ed56: mov eax, ecx */
  eax = ecx;
/* 91ed58: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ed59: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ed5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ed5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ed61: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ed67: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91ed6a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91ed6d: jns 0x91ed74 */
  if (!sf) goto L_91ed74;
L_91ed6f: /* 91ed6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ed70: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ed73: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ed74: /* 91ed74: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91ed77: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91ed7a: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 91ed7d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ed80: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* 91ed83: mov eax, ecx */
  eax = ecx;
/* 91ed85: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ed86: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ed89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ed8b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ed8e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ed94: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ed97: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ed9a: jns 0x91eda1 */
  if (!sf) goto L_91eda1;
L_91ed9c: /* 91ed9c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ed9d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91eda0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91eda1: /* 91eda1: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91eda4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91eda5: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91eda8: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91edac: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 91edaf: jne 0x91ed50 */
  if (!zf) goto L_91ed50;
L_91edb1: /* 91edb1: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 91edb5: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 91edb9: mov ebx, dword ptr [esp + 0xe4] */
  ebx = R32((uint32_t)(esp + 0xe4u));
/* 91edc0: xor eax, eax */
  eax = 0;
/* 91edc2: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 91edc5: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 91edc9: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 91edcc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91edd0: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 91edd3: mov ecx, dword ptr [esp + 0xe8] */
  ecx = R32((uint32_t)(esp + 0xe8u));
/* 91edda: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 91eddd: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 91ede3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91ede6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ede8: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 91edec: lea ebp, [eax + 0x20] */
  ebp = (uint32_t)(eax + 0x20u);
/* 91edef: lea ecx, [ebx + 0xc4] */
  ecx = (uint32_t)(ebx + 0xc4u);
/* 91edf5: mov dword ptr [esp + 0x40], 4 */
  W32((uint32_t)(esp + 0x40u), 0x4u);
/* 91edfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91ee00: /* 91ee00: mov eax, ebp */
  eax = ebp;
/* 91ee02: mov edi, 4 */
  edi = 0x4u;
L_91ee07: /* 91ee07: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 91ee0a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91ee0d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91ee10: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ee13: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91ee14: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 91ee17: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91ee1a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ee1c: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91ee1f: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91ee22: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ee24: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91ee27: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91ee29: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ee2b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91ee2e: jne 0x91ee07 */
  if (!zf) goto L_91ee07;
L_91ee30: /* 91ee30: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 91ee34: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91ee37: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91ee38: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 91ee3c: jne 0x91ee00 */
  if (!zf) goto L_91ee00;
L_91ee3e: /* 91ee3e: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 91ee44: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91ee47: je 0x91eeb0 */
  if (zf) goto L_91eeb0;
L_91ee49: /* 91ee49: mov ecx, dword ptr [esp + 0xe8] */
  ecx = R32((uint32_t)(esp + 0xe8u));
/* 91ee50: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91ee53: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ee55: lea edx, [esp + 0x9c] */
  edx = (uint32_t)(esp + 0x9cu);
/* 91ee5c: lea ebp, [eax + 0x20] */
  ebp = (uint32_t)(eax + 0x20u);
/* 91ee5f: lea ecx, [ebx + 0x104] */
  ecx = (uint32_t)(ebx + 0x104u);
/* 91ee65: mov dword ptr [esp + 0x40], 4 */
  W32((uint32_t)(esp + 0x40u), 0x4u);
/* 91ee6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91ee70: /* 91ee70: mov eax, ebp */
  eax = ebp;
/* 91ee72: mov edi, 4 */
  edi = 0x4u;
L_91ee77: /* 91ee77: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 91ee7a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91ee7d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91ee80: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ee83: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91ee84: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 91ee87: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91ee8a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ee8c: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91ee8f: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91ee92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ee94: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91ee97: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91ee99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ee9b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91ee9e: jne 0x91ee77 */
  if (!zf) goto L_91ee77;
L_91eea0: /* 91eea0: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 91eea4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91eea7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91eea8: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 91eeac: jne 0x91ee70 */
  if (!zf) goto L_91ee70;
L_91eeae: /* 91eeae: jmp 0x91eec4 */
  goto L_91eec4;
L_91eeb0: /* 91eeb0: lea eax, [ebx + 0xfc] */
  eax = (uint32_t)(ebx + 0xfcu);
/* 91eeb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91eeb7: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 91eebe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91eebf: call 0x91e9c0 */
  esp -= 4; W32(esp, 0x91eec4u); SPILL(); f_91e9c0(); if (g_unwind) return; RELOAD();
L_91eec4: /* 91eec4: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 91eec7: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 91eece: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 91eed1: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 91eed7: mov dword ptr [ecx + edx*8], eax */
  W32((uint32_t)(ecx + edx*8), eax);
/* 91eeda: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 91eedd: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 91eee0: mov ecx, dword ptr [ebx + 0xb8] */
  ecx = R32((uint32_t)(ebx + 0xb8u));
/* 91eee6: mov dword ptr [eax + edx*8 + 4], ecx */
  W32((uint32_t)(eax + edx*8 + 0x4u), ecx);
/* 91eeea: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 91eef0: mov eax, dword ptr [esp + 0xe8] */
  eax = R32((uint32_t)(esp + 0xe8u));
/* 91eef7: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91eefa: fsub dword ptr [edx + eax + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax + 0x30u)));
/* 91eefe: lea eax, [edx + eax + 0x30] */
  eax = (uint32_t)(edx + eax + 0x30u);
/* 91ef02: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 91ef09: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 91ef0c: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 91ef10: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 91ef17: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 91ef1a: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 91ef1e: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 91ef22: fabs  */
  ST0 = fabs(ST0);
/* 91ef24: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91ef28: fabs  */
  ST0 = fabs(ST0);
/* 91ef2a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91ef2c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91ef2e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 91ef30: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 91ef34: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 91ef38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91ef3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91ef3d: jp 0x91ef9f */
  if (pf) goto L_91ef9f;
L_91ef3f: /* 91ef3f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 91ef43: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 91ef4b: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 91ef4f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91ef51: fsqrt  */
  ST0 = sqrt(ST0);
/* 91ef53: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 91ef59: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 91ef5d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91ef5f: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 91ef63: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 91ef67: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91ef69: fchs  */
  ST0 = -ST0;
/* 91ef6b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 91ef6f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91ef71: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91ef75: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 91ef79: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 91ef7d: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 91ef81: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91ef85: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91ef89: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 91ef8d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91ef8f: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 91ef93: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91ef97: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91ef9b: fchs  */
  ST0 = -ST0;
/* 91ef9d: jmp 0x91effd */
  goto L_91effd;
L_91ef9f: /* 91ef9f: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91efa3: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 91efab: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 91efaf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91efb1: fsqrt  */
  ST0 = sqrt(ST0);
/* 91efb3: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 91efb9: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 91efbd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91efbf: fchs  */
  ST0 = -ST0;
/* 91efc1: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 91efc5: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91efc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91efcb: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 91efcf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91efd1: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91efd5: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 91efd9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91efdd: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 91efe1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91efe3: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 91efe7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91efeb: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 91efef: fchs  */
  ST0 = -ST0;
/* 91eff1: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 91eff5: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91eff9: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
L_91effd: /* 91effd: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 91f001: xor edi, edi */
  edi = 0;
/* 91f003: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 91f007: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 91f00b: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91f00f: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 91f013: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f015: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91f019: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 91f01d: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 91f021: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 91f025: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 91f027: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f029: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91f02d: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91f031: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91f033: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91f037: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 91f03b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f03d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_91f041: /* 91f041: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91f044: mov eax, ecx */
  eax = ecx;
/* 91f046: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f047: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f04a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f04c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f04f: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f055: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f058: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f05b: jns 0x91f062 */
  if (!sf) goto L_91f062;
L_91f05d: /* 91f05d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f05e: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f061: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f062: /* 91f062: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f065: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91f068: mov eax, dword ptr [esp + edi*4 + 0x5c] */
  eax = R32((uint32_t)(esp + edi*4 + 0x5cu));
/* 91f06c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f06d: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f070: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 91f073: jl 0x91f041 */
  if ((sf != of)) goto L_91f041;
L_91f075: /* 91f075: xor edi, edi */
  edi = 0;
L_91f077: /* 91f077: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91f07a: fld dword ptr [esp + edi*4 + 0x5c] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x5cu)); FPUSH(v); }
/* 91f07e: mov eax, ecx */
  eax = ecx;
/* 91f080: fchs  */
  ST0 = -ST0;
/* 91f082: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f083: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f086: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f088: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f08b: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f091: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f094: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f097: jns 0x91f09e */
  if (!sf) goto L_91f09e;
L_91f099: /* 91f099: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f09a: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f09d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f09e: /* 91f09e: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f0a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f0a2: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f0a5: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91f0a9: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91f0ac: jl 0x91f077 */
  if ((sf != of)) goto L_91f077;
L_91f0ae: /* 91f0ae: xor edi, edi */
  edi = 0;
L_91f0b0: /* 91f0b0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91f0b3: mov eax, ecx */
  eax = ecx;
/* 91f0b5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f0b6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f0b9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f0bb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f0be: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f0c4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91f0c7: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91f0ca: jns 0x91f0d1 */
  if (!sf) goto L_91f0d1;
L_91f0cc: /* 91f0cc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f0cd: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f0d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f0d1: /* 91f0d1: lea eax, [ecx + edx*4 + 0xc] */
  eax = (uint32_t)(ecx + edx*4 + 0xcu);
/* 91f0d5: mov edx, dword ptr [esp + edi*4 + 0x10] */
  edx = R32((uint32_t)(esp + edi*4 + 0x10u));
/* 91f0d9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91f0dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f0dd: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f0e0: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 91f0e3: jl 0x91f0b0 */
  if ((sf != of)) goto L_91f0b0;
L_91f0e5: /* 91f0e5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91f0e9: xor edi, edi */
  edi = 0;
/* 91f0eb: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 91f0ef: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91f0f3: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 91f0f7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f0f9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91f0fd: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 91f101: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91f105: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91f109: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 91f10b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f10d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91f111: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91f115: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91f117: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91f11b: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 91f11f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f121: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_91f125: /* 91f125: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f128: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91f12b: mov eax, ecx */
  eax = ecx;
/* 91f12d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f12e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f131: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f133: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f136: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f13c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91f13f: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91f142: jns 0x91f149 */
  if (!sf) goto L_91f149;
L_91f144: /* 91f144: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f145: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f148: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f149: /* 91f149: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91f14c: mov edx, dword ptr [esp + edi*4 + 0x20] */
  edx = R32((uint32_t)(esp + edi*4 + 0x20u));
/* 91f150: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91f153: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f154: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f157: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 91f15a: jl 0x91f125 */
  if ((sf != of)) goto L_91f125;
L_91f15c: /* 91f15c: xor edi, edi */
  edi = 0;
/* 91f15e: mov edi, edi */
  edi = edi;
L_91f160: /* 91f160: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f163: fld dword ptr [esp + edi*4 + 0x20] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x20u)); FPUSH(v); }
/* 91f167: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91f16a: fchs  */
  ST0 = -ST0;
/* 91f16c: mov eax, ecx */
  eax = ecx;
/* 91f16e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f16f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f172: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f174: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f177: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f17d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91f180: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91f183: jns 0x91f18a */
  if (!sf) goto L_91f18a;
L_91f185: /* 91f185: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f186: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f189: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f18a: /* 91f18a: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91f18e: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91f191: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f192: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 91f195: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f198: jl 0x91f160 */
  if ((sf != of)) goto L_91f160;
L_91f19a: /* 91f19a: xor edi, edi */
  edi = 0;
/* 91f19c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91f1a0: /* 91f1a0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f1a3: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91f1a6: mov eax, ecx */
  eax = ecx;
/* 91f1a8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f1a9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f1ac: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f1ae: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f1b1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f1b7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f1ba: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f1bd: jns 0x91f1c4 */
  if (!sf) goto L_91f1c4;
L_91f1bf: /* 91f1bf: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f1c0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f1c3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f1c4: /* 91f1c4: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f1c7: lea ecx, [ecx + eax*4 + 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xcu);
/* 91f1cb: mov eax, dword ptr [esp + edi*4 + 0x10] */
  eax = R32((uint32_t)(esp + edi*4 + 0x10u));
/* 91f1cf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f1d0: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f1d3: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 91f1d6: jl 0x91f1a0 */
  if ((sf != of)) goto L_91f1a0;
L_91f1d8: /* 91f1d8: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 91f1dc: xor edi, edi */
  edi = 0;
/* 91f1de: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 91f1e2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91f1e6: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 91f1ea: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f1ec: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91f1f0: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 91f1f4: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 91f1f8: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 91f1fc: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 91f1fe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f200: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91f204: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91f208: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91f20a: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91f20e: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 91f212: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f214: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_91f218: /* 91f218: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f21b: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91f21e: mov eax, ecx */
  eax = ecx;
/* 91f220: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f221: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f224: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f226: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f229: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f22f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f232: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f235: jns 0x91f23c */
  if (!sf) goto L_91f23c;
L_91f237: /* 91f237: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f238: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f23b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f23c: /* 91f23c: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f23f: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91f242: mov eax, dword ptr [esp + edi*4 + 0x34] */
  eax = R32((uint32_t)(esp + edi*4 + 0x34u));
/* 91f246: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f247: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f24a: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 91f24d: jl 0x91f218 */
  if ((sf != of)) goto L_91f218;
L_91f24f: /* 91f24f: xor edi, edi */
  edi = 0;
L_91f251: /* 91f251: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f254: fld dword ptr [esp + edi*4 + 0x34] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x34u)); FPUSH(v); }
/* 91f258: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91f25b: fchs  */
  ST0 = -ST0;
/* 91f25d: mov eax, ecx */
  eax = ecx;
/* 91f25f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f260: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f263: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f265: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f268: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f26e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f271: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f274: jns 0x91f27b */
  if (!sf) goto L_91f27b;
L_91f276: /* 91f276: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f277: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f27a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f27b: /* 91f27b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f27e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f27f: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f282: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91f286: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91f289: jl 0x91f251 */
  if ((sf != of)) goto L_91f251;
L_91f28b: /* 91f28b: xor edi, edi */
  edi = 0;
/* 91f28d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91f290: /* 91f290: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f293: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91f296: mov eax, ecx */
  eax = ecx;
/* 91f298: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f299: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f29c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f29e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f2a1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f2a7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91f2aa: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91f2ad: jns 0x91f2b4 */
  if (!sf) goto L_91f2b4;
L_91f2af: /* 91f2af: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f2b0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f2b3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f2b4: /* 91f2b4: lea eax, [ecx + edx*4 + 0xc] */
  eax = (uint32_t)(ecx + edx*4 + 0xcu);
/* 91f2b8: mov edx, dword ptr [esp + edi*4 + 0x10] */
  edx = R32((uint32_t)(esp + edi*4 + 0x10u));
/* 91f2bc: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91f2bf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f2c0: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f2c3: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 91f2c6: jl 0x91f290 */
  if ((sf != of)) goto L_91f290;
L_91f2c8: /* 91f2c8: xor eax, eax */
  eax = 0;
/* 91f2ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_91f2d0: /* 91f2d0: fld dword ptr [esp + eax + 0x8c] */
  { double v = F32((uint32_t)(esp + eax + 0x8cu)); FPUSH(v); }
/* 91f2d7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f2da: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f2dd: fsub dword ptr [esp + eax + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esp + eax + 0xc8u)));
/* 91f2e4: fstp dword ptr [esp + eax + 0xc] */
  WF32((uint32_t)(esp + eax + 0xcu), ST0); FPOP();
/* 91f2e8: jl 0x91f2d0 */
  if ((sf != of)) goto L_91f2d0;
L_91f2ea: /* 91f2ea: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 91f2ee: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 91f2f2: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91f2f6: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 91f2fa: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91f2fe: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 91f302: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91f306: mov eax, edi */
  eax = edi;
/* 91f308: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91f30a: mov edx, 3 */
  edx = 0x3u;
/* 91f30f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f311: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 91f315: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91f319: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f31b: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 91f31e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91f322: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91f326: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91f32a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91f32e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f330: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91f334: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91f338: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f33a: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 91f33d: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 91f341: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91f345: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91f349: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91f34d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f34f: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91f353: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91f357: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f359: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 91f35c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91f360: /* 91f360: mov dword ptr [ecx + eax], 0xff7fffff */
  W32((uint32_t)(ecx + eax), 0xff7fffffu);
/* 91f367: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
/* 91f36d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f370: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 91f371: jne 0x91f360 */
  if (!zf) goto L_91f360;
L_91f373: /* 91f373: fld dword ptr [ebx + 0x180] */
  { double v = F32((uint32_t)(ebx + 0x180u)); FPUSH(v); }
/* 91f379: fchs  */
  ST0 = -ST0;
/* 91f37b: fcomp dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
  FPOP();
/* 91f37e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91f380: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91f383: jp 0x91f3cf */
  if (pf) goto L_91f3cf;
L_91f385: /* 91f385: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 91f388: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f38b: fadd dword ptr [ebx + 0x180] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x180u)));
/* 91f391: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 91f394: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_91f39a: /* 91f39a: fld dword ptr [ebx + 0x188] */
  { double v = F32((uint32_t)(ebx + 0x188u)); FPUSH(v); }
/* 91f3a0: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 91f3a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91f3a6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 91f3a8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91f3ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91f3b0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91f3b3: jp 0x91f3bb */
  if (pf) goto L_91f3bb;
L_91f3b5: /* 91f3b5: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_91f3bb: /* 91f3bb: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91f3be: jne 0x91f455 */
  if (!zf) goto L_91f455;
L_91f3c4: /* 91f3c4: fld dword ptr [ebx + 0x17c] */
  { double v = F32((uint32_t)(ebx + 0x17cu)); FPUSH(v); }
/* 91f3ca: jmp 0x91f45b */
  goto L_91f45b;
L_91f3cf: /* 91f3cf: fld dword ptr [ebx + 0x17c] */
  { double v = F32((uint32_t)(ebx + 0x17cu)); FPUSH(v); }
/* 91f3d5: fchs  */
  ST0 = -ST0;
/* 91f3d7: fcomp dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
  FPOP();
/* 91f3da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91f3dc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91f3df: jne 0x91f3fe */
  if (!zf) goto L_91f3fe;
L_91f3e1: /* 91f3e1: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 91f3e4: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 91f3e8: fadd dword ptr [ebx + 0x17c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x17cu)));
/* 91f3ee: mov ecx, 1 */
  ecx = 0x1u;
/* 91f3f3: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 91f3f6: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 91f3fc: jmp 0x91f39a */
  goto L_91f39a;
L_91f3fe: /* 91f3fe: mov ecx, dword ptr [esp + 0xf0] */
  ecx = R32((uint32_t)(esp + 0xf0u));
/* 91f405: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91f407: fld dword ptr [ebx + 0x184] */
  { double v = F32((uint32_t)(ebx + 0x184u)); FPUSH(v); }
/* 91f40d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 91f411: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 91f414: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 91f417: fld dword ptr [ebx + 0x160] */
  { double v = F32((uint32_t)(ebx + 0x160u)); FPUSH(v); }
/* 91f41d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91f41f: fadd dword ptr [ebx + 0x164] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x164u)));
/* 91f425: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 91f42b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91f42d: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 91f42f: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 91f435: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91f437: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91f43a: jp 0x91f442 */
  if (pf) goto L_91f442;
L_91f43c: /* 91f43c: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_91f442: /* 91f442: fmul dword ptr [ebx + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x160u)));
/* 91f448: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91f44a: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 91f44e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 91f450: jmp 0x91f569 */
  goto L_91f569;
L_91f455: /* 91f455: fld dword ptr [ebx + 0x180] */
  { double v = F32((uint32_t)(ebx + 0x180u)); FPUSH(v); }
L_91f45b: /* 91f45b: fsub dword ptr [ebx + 0x184] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x184u)));
/* 91f461: xor eax, eax */
  eax = 0;
/* 91f463: fmul dword ptr [ebx + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x160u)));
/* 91f469: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91f470: /* 91f470: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91f472: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f475: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f478: fmul dword ptr [esp + eax + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax + 0x58u)));
/* 91f47c: fstp dword ptr [esp + eax + 0xc] */
  WF32((uint32_t)(esp + eax + 0xcu), ST0); FPOP();
/* 91f480: jl 0x91f470 */
  if ((sf != of)) goto L_91f470;
L_91f482: /* 91f482: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 91f488: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91f48a: mov eax, dword ptr [esp + 0xec] */
  eax = R32((uint32_t)(esp + 0xecu));
/* 91f491: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91f495: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 91f498: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 91f49b: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 91f49e: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 91f4a4: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 91f4a7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91f4ab: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 91f4ae: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 91f4b1: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 91f4b7: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 91f4ba: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91f4be: fadd dword ptr [ecx + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x18u)));
/* 91f4c1: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 91f4c4: mov ecx, dword ptr [ebx + 0xb8] */
  ecx = R32((uint32_t)(ebx + 0xb8u));
/* 91f4ca: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91f4cd: je 0x91f502 */
  if (zf) goto L_91f502;
L_91f4cf: /* 91f4cf: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 91f4d2: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 91f4d5: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 91f4d9: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 91f4dc: mov ecx, dword ptr [ebx + 0xb8] */
  ecx = R32((uint32_t)(ebx + 0xb8u));
/* 91f4e2: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 91f4e5: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 91f4e8: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 91f4ec: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 91f4ef: mov edx, dword ptr [ebx + 0xb8] */
  edx = R32((uint32_t)(ebx + 0xb8u));
/* 91f4f5: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 91f4f8: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 91f4fb: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 91f4ff: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
L_91f502: /* 91f502: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91f506: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 91f50c: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91f510: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 91f513: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 91f517: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91f51b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f51d: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 91f521: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91f525: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 91f527: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 91f52b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f52d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 91f52f: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 91f533: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91f537: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91f53b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f53d: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 91f541: fadd dword ptr [ecx + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x20u)));
/* 91f544: fstp dword ptr [ecx + 0x20] */
  WF32((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 91f547: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 91f54d: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 91f550: fadd dword ptr [ecx + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x24u)));
/* 91f553: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
/* 91f556: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 91f55c: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 91f55f: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 91f563: fadd dword ptr [eax + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x28u)));
/* 91f566: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
L_91f569: /* 91f569: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 91f570: xor edi, edi */
  edi = 0;
/* 91f572: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 91f576: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 91f57d: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 91f581: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f583: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91f587: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 91f58e: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 91f592: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 91f599: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 91f59d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f59f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91f5a3: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 91f5aa: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 91f5ae: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 91f5b5: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 91f5b9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f5bb: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 91f5bf: nop  */
L_91f5c0: /* 91f5c0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f5c3: fld dword ptr [esp + edi*4 + 0x10] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x10u)); FPUSH(v); }
/* 91f5c7: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91f5ca: fchs  */
  ST0 = -ST0;
/* 91f5cc: mov eax, ecx */
  eax = ecx;
/* 91f5ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f5cf: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f5d2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f5d4: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f5d7: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f5dd: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f5e0: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f5e3: jns 0x91f5ea */
  if (!sf) goto L_91f5ea;
L_91f5e5: /* 91f5e5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f5e6: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f5e9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f5ea: /* 91f5ea: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f5ed: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f5ee: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f5f1: lea ecx, [ecx + eax*4 + 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xcu);
/* 91f5f5: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91f5f8: jl 0x91f5c0 */
  if ((sf != of)) goto L_91f5c0;
L_91f5fa: /* 91f5fa: xor edi, edi */
  edi = 0;
/* 91f5fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91f600: /* 91f600: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f603: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91f606: mov eax, ecx */
  eax = ecx;
/* 91f608: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f609: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f60c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f60e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f611: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f617: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91f61a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91f61d: jns 0x91f624 */
  if (!sf) goto L_91f624;
L_91f61f: /* 91f61f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f620: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f623: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f624: /* 91f624: lea eax, [ecx + edx*4 + 0x24] */
  eax = (uint32_t)(ecx + edx*4 + 0x24u);
/* 91f628: mov edx, dword ptr [esp + edi*4 + 0x10] */
  edx = R32((uint32_t)(esp + edi*4 + 0x10u));
/* 91f62c: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91f62f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f630: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f633: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 91f636: jl 0x91f600 */
  if ((sf != of)) goto L_91f600;
L_91f638: /* 91f638: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 91f63f: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 91f643: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 91f647: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 91f64b: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 91f652: xor edi, edi */
  edi = 0;
/* 91f654: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 91f658: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f65a: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 91f661: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 91f665: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f667: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 91f66a: mov dword ptr [eax + 0xc], 0xff7fffff */
  W32((uint32_t)(eax + 0xcu), 0xff7fffffu);
/* 91f671: mov dword ptr [ecx + 0xc], 0x7f7fffff */
  W32((uint32_t)(ecx + 0xcu), 0x7f7fffffu);
L_91f678: /* 91f678: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f67b: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91f67e: mov eax, ecx */
  eax = ecx;
/* 91f680: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f681: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f684: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f686: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f689: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f68f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f692: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f695: jns 0x91f69c */
  if (!sf) goto L_91f69c;
L_91f697: /* 91f697: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f698: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f69b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f69c: /* 91f69c: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f69f: lea ecx, [ecx + eax*4 + 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xcu);
/* 91f6a3: mov eax, dword ptr [esp + edi*4 + 0x5c] */
  eax = R32((uint32_t)(esp + edi*4 + 0x5cu));
/* 91f6a7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f6a8: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f6ab: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 91f6ae: jl 0x91f678 */
  if ((sf != of)) goto L_91f678;
L_91f6b0: /* 91f6b0: xor edi, edi */
  edi = 0;
L_91f6b2: /* 91f6b2: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f6b5: fld dword ptr [esp + edi*4 + 0x5c] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x5cu)); FPUSH(v); }
/* 91f6b9: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 91f6bc: fchs  */
  ST0 = -ST0;
/* 91f6be: mov eax, ecx */
  eax = ecx;
/* 91f6c0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f6c1: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f6c4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f6c6: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f6c9: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f6cf: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f6d2: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f6d5: jns 0x91f6dc */
  if (!sf) goto L_91f6dc;
L_91f6d7: /* 91f6d7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f6d8: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f6db: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f6dc: /* 91f6dc: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f6df: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f6e0: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f6e3: lea ecx, [ecx + eax*4 + 0x24] */
  ecx = (uint32_t)(ecx + eax*4 + 0x24u);
/* 91f6e7: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91f6ea: jl 0x91f6b2 */
  if ((sf != of)) goto L_91f6b2;
L_91f6ec: /* 91f6ec: fld dword ptr [ebx + 0x168] */
  { double v = F32((uint32_t)(ebx + 0x168u)); FPUSH(v); }
/* 91f6f2: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 91f6f6: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 91f6fa: fchs  */
  ST0 = -ST0;
/* 91f6fc: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91f6ff: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 91f703: fld dword ptr [ebx + 0x16c] */
  { double v = F32((uint32_t)(ebx + 0x16cu)); FPUSH(v); }
/* 91f709: fchs  */
  ST0 = -ST0;
/* 91f70b: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 91f70e: mov edx, dword ptr [ebx + 0x16c] */
  edx = R32((uint32_t)(ebx + 0x16cu));
/* 91f714: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 91f717: mov eax, dword ptr [ebx + 0x178] */
  eax = R32((uint32_t)(ebx + 0x178u));
/* 91f71d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91f71f: je 0x91f788 */
  if (zf) goto L_91f788;
L_91f721: /* 91f721: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 91f725: fmul dword ptr [esp + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb0u)));
/* 91f72c: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 91f730: fmul dword ptr [esp + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb4u)));
/* 91f737: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f739: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 91f73d: fmul dword ptr [esp + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb4u)));
/* 91f744: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 91f748: fmul dword ptr [esp + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xacu)));
/* 91f74f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f751: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 91f755: fmul dword ptr [esp + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xacu)));
/* 91f75c: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 91f760: fmul dword ptr [esp + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb0u)));
/* 91f767: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91f769: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 91f76d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91f76f: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91f773: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91f775: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f777: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 91f77b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91f77d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91f77f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 91f782: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91f784: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91f786: fstp st(0) */
  STI(0) = ST0; FPOP();
L_91f788: /* 91f788: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 91f78e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 91f794: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91f796: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91f799: jp 0x91f7b0 */
  if (pf) goto L_91f7b0;
L_91f79b: /* 91f79b: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 91f79d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91f79e: call 0x91b610 */
  esp -= 4; W32(esp, 0x91f7a3u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 91f7a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91f7a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91f7a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91f7a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91f7a7: add esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91f7ad: ret 0x14 */
  esp += 24; SPILL(); return;
L_91f7b0: /* 91f7b0: xor edi, edi */
  edi = 0;
L_91f7b2: /* 91f7b2: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f7b5: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* 91f7b8: mov eax, ecx */
  eax = ecx;
/* 91f7ba: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f7bb: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f7be: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f7c0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f7c3: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f7c9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f7cc: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f7cf: jns 0x91f7d6 */
  if (!sf) goto L_91f7d6;
L_91f7d1: /* 91f7d1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f7d2: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f7d5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f7d6: /* 91f7d6: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f7d9: lea ecx, [ecx + eax*4 + 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xcu);
/* 91f7dd: mov eax, dword ptr [esp + edi*4 + 0xac] */
  eax = R32((uint32_t)(esp + edi*4 + 0xacu));
/* 91f7e4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f7e5: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f7e8: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 91f7eb: jl 0x91f7b2 */
  if ((sf != of)) goto L_91f7b2;
L_91f7ed: /* 91f7ed: xor edi, edi */
  edi = 0;
/* 91f7ef: nop  */
L_91f7f0: /* 91f7f0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f7f3: fld dword ptr [esp + edi*4 + 0xac] */
  { double v = F32((uint32_t)(esp + edi*4 + 0xacu)); FPUSH(v); }
/* 91f7fa: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* 91f7fd: fchs  */
  ST0 = -ST0;
/* 91f7ff: mov eax, ecx */
  eax = ecx;
/* 91f801: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f802: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f805: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f807: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f80a: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f810: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f813: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f816: jns 0x91f81d */
  if (!sf) goto L_91f81d;
L_91f818: /* 91f818: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f819: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f81c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f81d: /* 91f81d: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f820: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f821: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91f824: lea ecx, [ecx + eax*4 + 0x24] */
  ecx = (uint32_t)(ecx + eax*4 + 0x24u);
/* 91f828: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91f82b: jl 0x91f7f0 */
  if ((sf != of)) goto L_91f7f0;
L_91f82d: /* 91f82d: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 91f833: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 91f837: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 91f83b: fchs  */
  ST0 = -ST0;
/* 91f83d: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 91f840: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 91f844: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 91f84a: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 91f84c: fchs  */
  ST0 = -ST0;
/* 91f84e: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 91f851: mov edx, dword ptr [ebx + 0x174] */
  edx = R32((uint32_t)(ebx + 0x174u));
/* 91f857: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91f858: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 91f85b: call 0x91b610 */
  esp -= 4; W32(esp, 0x91f860u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 91f860: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91f861: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91f862: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91f863: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91f864: add esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91f86a: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_91f870(void) {
  LOAD_REGS();
L_91f870: /* 91f870: sub esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91f876: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91f877: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91f878: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91f879: mov esi, dword ptr [esp + 0xc0] */
  esi = R32((uint32_t)(esp + 0xc0u));
/* 91f880: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 91f883: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 91f886: mov ebp, dword ptr [esi + 0x30] */
  ebp = R32((uint32_t)(esi + 0x30u));
/* 91f889: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91f88c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91f88e: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 91f892: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 91f895: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91f897: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 91f89b: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 91f89e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91f8a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91f8a1: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91f8a3: xor ebx, ebx */
  ebx = 0;
/* 91f8a5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 91f8a9: xor edi, edi */
  edi = 0;
/* 91f8ab: nop  */
/* 91f8ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91f8b0: /* 91f8b0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91f8b3: mov eax, ecx */
  eax = ecx;
/* 91f8b5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f8b6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f8b9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f8bb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f8be: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f8c4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91f8c7: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91f8ca: jns 0x91f8d1 */
  if (!sf) goto L_91f8d1;
L_91f8cc: /* 91f8cc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f8cd: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f8d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f8d1: /* 91f8d1: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91f8d4: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91f8d7: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 91f8da: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91f8dd: mov eax, ecx */
  eax = ecx;
/* 91f8df: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f8e0: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f8e3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f8e5: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f8e8: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f8ee: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f8f1: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f8f4: jns 0x91f8fb */
  if (!sf) goto L_91f8fb;
L_91f8f6: /* 91f8f6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f8f7: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f8fa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f8fb: /* 91f8fb: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f8fe: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f8ff: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91f902: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91f906: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 91f909: jne 0x91f8b0 */
  if (!zf) goto L_91f8b0;
L_91f90b: /* 91f90b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91f90f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 91f913: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91f917: mov dword ptr [ebp], ebx */
  W32((uint32_t)(ebp), ebx);
/* 91f91a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 91f91c: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 91f91e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 91f920: xor edi, edi */
  edi = 0;
L_91f922: /* 91f922: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f925: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91f928: mov eax, ecx */
  eax = ecx;
/* 91f92a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f92b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f92e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f930: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f933: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f939: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91f93c: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91f93f: jns 0x91f946 */
  if (!sf) goto L_91f946;
L_91f941: /* 91f941: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f942: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f945: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f946: /* 91f946: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91f949: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91f94c: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 91f94f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f952: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91f955: mov eax, ecx */
  eax = ecx;
/* 91f957: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f958: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f95b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f95d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f960: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f966: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f969: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f96c: jns 0x91f973 */
  if (!sf) goto L_91f973;
L_91f96e: /* 91f96e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f96f: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f972: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f973: /* 91f973: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f976: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f977: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91f97a: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91f97e: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 91f981: jne 0x91f922 */
  if (!zf) goto L_91f922;
L_91f983: /* 91f983: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91f987: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 91f98b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91f98f: mov dword ptr [ebp + 4], ebx */
  W32((uint32_t)(ebp + 0x4u), ebx);
/* 91f992: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 91f995: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 91f998: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 91f99b: xor edi, edi */
  edi = 0;
/* 91f99d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91f9a0: /* 91f9a0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f9a3: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91f9a6: mov eax, ecx */
  eax = ecx;
/* 91f9a8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f9a9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f9ac: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f9ae: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f9b1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f9b7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91f9ba: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91f9bd: jns 0x91f9c4 */
  if (!sf) goto L_91f9c4;
L_91f9bf: /* 91f9bf: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f9c0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f9c3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f9c4: /* 91f9c4: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91f9c7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91f9ca: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 91f9cd: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91f9d0: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91f9d3: mov eax, ecx */
  eax = ecx;
/* 91f9d5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91f9d6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91f9d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91f9db: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91f9de: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91f9e4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91f9e7: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91f9ea: jns 0x91f9f1 */
  if (!sf) goto L_91f9f1;
L_91f9ec: /* 91f9ec: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91f9ed: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91f9f0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91f9f1: /* 91f9f1: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91f9f4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91f9f5: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91f9f8: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91f9fc: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 91f9ff: jne 0x91f9a0 */
  if (!zf) goto L_91f9a0;
L_91fa01: /* 91fa01: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91fa05: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 91fa09: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91fa0d: mov edi, dword ptr [esp + 0xc8] */
  edi = R32((uint32_t)(esp + 0xc8u));
/* 91fa14: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 91fa17: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 91fa1a: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 91fa1d: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 91fa20: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 91fa23: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 91fa26: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 91fa2c: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 91fa2f: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 91fa32: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 91fa35: mov edx, dword ptr [edi + 0xb8] */
  edx = R32((uint32_t)(edi + 0xb8u));
/* 91fa3b: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 91fa3f: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 91fa45: mov ecx, dword ptr [esp + 0xcc] */
  ecx = R32((uint32_t)(esp + 0xccu));
/* 91fa4c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91fa4f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fa51: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 91fa55: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 91fa5c: lea ebp, [eax + 0x20] */
  ebp = (uint32_t)(eax + 0x20u);
/* 91fa5f: lea ecx, [edi + 0xc4] */
  ecx = (uint32_t)(edi + 0xc4u);
/* 91fa65: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 91fa6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91fa70: /* 91fa70: mov eax, ebp */
  eax = ebp;
/* 91fa72: mov ebx, 4 */
  ebx = 0x4u;
L_91fa77: /* 91fa77: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 91fa7a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91fa7d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91fa80: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fa83: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 91fa84: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 91fa87: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91fa8a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fa8c: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91fa8f: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91fa92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fa94: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91fa97: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91fa99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fa9b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91fa9e: jne 0x91fa77 */
  if (!zf) goto L_91fa77;
L_91faa0: /* 91faa0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91faa4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91faa7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91faa8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91faac: jne 0x91fa70 */
  if (!zf) goto L_91fa70;
L_91faae: /* 91faae: mov ebp, dword ptr [edi + 0xb8] */
  ebp = R32((uint32_t)(edi + 0xb8u));
/* 91fab4: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91fab7: je 0x91fb29 */
  if (zf) goto L_91fb29;
L_91fab9: /* 91fab9: mov ecx, dword ptr [esp + 0xcc] */
  ecx = R32((uint32_t)(esp + 0xccu));
/* 91fac0: mov eax, ebp */
  eax = ebp;
/* 91fac2: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91fac5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fac7: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91faca: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 91face: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 91fad2: lea ecx, [edi + 0x104] */
  ecx = (uint32_t)(edi + 0x104u);
/* 91fad8: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
L_91fae0: /* 91fae0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91fae4: mov ebx, 4 */
  ebx = 0x4u;
/* 91fae9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91faf0: /* 91faf0: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 91faf3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91faf6: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91faf9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fafc: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 91fafd: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91fb00: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91fb03: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fb05: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 91fb08: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91fb0b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fb0d: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91fb10: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91fb12: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fb14: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91fb17: jne 0x91faf0 */
  if (!zf) goto L_91faf0;
L_91fb19: /* 91fb19: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91fb1d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91fb20: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91fb21: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91fb25: jne 0x91fae0 */
  if (!zf) goto L_91fae0;
L_91fb27: /* 91fb27: jmp 0x91fb3a */
  goto L_91fb3a;
L_91fb29: /* 91fb29: lea edx, [edi + 0xfc] */
  edx = (uint32_t)(edi + 0xfcu);
/* 91fb2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91fb30: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 91fb34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91fb35: call 0x91e9c0 */
  esp -= 4; W32(esp, 0x91fb3au); SPILL(); f_91e9c0(); if (g_unwind) return; RELOAD();
L_91fb3a: /* 91fb3a: xor eax, eax */
  eax = 0;
/* 91fb3c: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91fb3f: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 91fb42: lea ecx, [edi + 0x148] */
  ecx = (uint32_t)(edi + 0x148u);
/* 91fb48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91fb49: lea edx, [edi + 0x13c] */
  edx = (uint32_t)(edi + 0x13cu);
/* 91fb4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91fb50: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 91fb54: lea edx, [esp + 0xb8] */
  edx = (uint32_t)(esp + 0xb8u);
/* 91fb5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91fb5c: mov eax, dword ptr [esp + 0xd8] */
  eax = R32((uint32_t)(esp + 0xd8u));
/* 91fb63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91fb64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91fb65: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 91fb69: shl ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 91fb6c: lea ecx, [eax + ebp + 0x30] */
  ecx = (uint32_t)(eax + ebp + 0x30u);
/* 91fb70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91fb71: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91fb74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91fb75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91fb76: call 0x91b810 */
  esp -= 4; W32(esp, 0x91fb7bu); SPILL(); f_91b810(); if (g_unwind) return; RELOAD();
/* 91fb7b: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 91fb81: fld dword ptr [edi + 0x17c] */
  { double v = F32((uint32_t)(edi + 0x17cu)); FPUSH(v); }
/* 91fb87: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 91fb8d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91fb90: fld dword ptr [edi + 0x180] */
  { double v = F32((uint32_t)(edi + 0x180u)); FPUSH(v); }
/* 91fb96: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 91fb9d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91fb9f: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 91fba6: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91fba8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fbaa: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 91fbb1: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91fbb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fbb5: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 91fbbc: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 91fbc2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fbc4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 91fbc8: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 91fbcf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91fbd1: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 91fbd8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91fbda: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fbdc: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 91fbe3: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91fbe5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fbe7: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 91fbee: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 91fbf4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fbf6: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 91fbfa: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 91fc01: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91fc03: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 91fc0a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91fc0c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fc0e: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 91fc15: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91fc17: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fc19: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 91fc20: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 91fc26: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fc28: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 91fc2c: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 91fc33: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91fc35: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 91fc3c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91fc3e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fc40: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 91fc47: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91fc49: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fc4b: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 91fc52: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 91fc58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fc5a: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 91fc5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91fc60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91fc62: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91fc64: jne 0x91fc88 */
  if (!zf) goto L_91fc88;
L_91fc66: /* 91fc66: xor eax, eax */
  eax = 0;
/* 91fc68: lea ecx, [edi + 0x184] */
  ecx = (uint32_t)(edi + 0x184u);
/* 91fc6e: mov edi, edi */
  edi = edi;
L_91fc70: /* 91fc70: fld dword ptr [esp + eax*4 + 0x1c] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x1cu)); FPUSH(v); }
/* 91fc74: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91fc75: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 91fc77: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91fc7a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 91fc7d: fstp dword ptr [esp + eax*4 + 0x18] */
  WF32((uint32_t)(esp + eax*4 + 0x18u), ST0); FPOP();
/* 91fc81: jb 0x91fc70 */
  if (cf) goto L_91fc70;
L_91fc83: /* 91fc83: jmp 0x91fd54 */
  goto L_91fd54;
L_91fc88: /* 91fc88: fld dword ptr [edi + 0x184] */
  { double v = F32((uint32_t)(edi + 0x184u)); FPUSH(v); }
/* 91fc8e: xor eax, eax */
  eax = 0;
/* 91fc90: fld dword ptr [edi + 0x188] */
  { double v = F32((uint32_t)(edi + 0x188u)); FPUSH(v); }
/* 91fc96: fld dword ptr [edi + 0x18c] */
  { double v = F32((uint32_t)(edi + 0x18cu)); FPUSH(v); }
/* 91fc9c: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 91fca0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91fca2: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 91fca6: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91fca8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fcaa: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 91fcae: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91fcb0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fcb2: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 91fcb6: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 91fcbc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fcbe: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 91fcc2: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 91fcc6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91fcc8: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 91fccc: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91fcce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fcd0: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91fcd4: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91fcd6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fcd8: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 91fcdc: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 91fce2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fce4: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 91fce8: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 91fcec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91fcee: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 91fcf2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91fcf4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fcf6: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91fcfa: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91fcfc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fcfe: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 91fd02: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 91fd08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fd0a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 91fd0e: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 91fd12: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91fd14: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 91fd18: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 91fd1a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fd1c: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 91fd20: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 91fd22: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fd24: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 91fd28: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 91fd2e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91fd30: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 91fd34: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91fd36: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91fd38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91fd3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_91fd40: /* 91fd40: fld dword ptr [esp + eax + 0x1c] */
  { double v = F32((uint32_t)(esp + eax + 0x1cu)); FPUSH(v); }
/* 91fd44: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fd47: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 91fd4a: fsub dword ptr [esp + eax + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + eax + 0x2cu)));
/* 91fd4e: fstp dword ptr [esp + eax + 0x18] */
  WF32((uint32_t)(esp + eax + 0x18u), ST0); FPOP();
/* 91fd52: jb 0x91fd40 */
  if (cf) goto L_91fd40;
L_91fd54: /* 91fd54: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91fd58: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 91fd5c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91fd5e: mov edx, 3 */
  edx = 0x3u;
L_91fd63: /* 91fd63: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* 91fd66: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fd69: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 91fd6a: fchs  */
  ST0 = -ST0;
/* 91fd6c: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 91fd6f: jne 0x91fd63 */
  if (!zf) goto L_91fd63;
L_91fd71: /* 91fd71: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 91fd73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91fd74: call 0x91b610 */
  esp -= 4; W32(esp, 0x91fd79u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 91fd79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91fd7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91fd7b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91fd7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91fd7d: add esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91fd83: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_91fd90(void) {
  LOAD_REGS();
L_91fd90: /* 91fd90: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91fd96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91fd97: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91fd98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91fd99: mov esi, dword ptr [esp + 0xb4] */
  esi = R32((uint32_t)(esp + 0xb4u));
/* 91fda0: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 91fda3: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91fda6: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 91fda9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91fdac: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91fdae: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 91fdb2: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 91fdb5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91fdb7: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 91fdbb: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 91fdbe: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91fdc0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 91fdc4: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 91fdc7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91fdc9: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 91fdcd: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 91fdd0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91fdd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91fdd3: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91fdd5: xor ebp, ebp */
  ebp = 0;
/* 91fdd7: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 91fddb: xor edi, edi */
  edi = 0;
/* 91fddd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91fde0: /* 91fde0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91fde3: mov eax, ecx */
  eax = ecx;
/* 91fde5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91fde6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91fde9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fdeb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91fdee: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91fdf4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91fdf7: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91fdfa: jns 0x91fe01 */
  if (!sf) goto L_91fe01;
L_91fdfc: /* 91fdfc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91fdfd: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91fe00: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91fe01: /* 91fe01: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91fe04: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91fe07: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 91fe0a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91fe0d: mov eax, ecx */
  eax = ecx;
/* 91fe0f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91fe10: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91fe13: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fe15: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91fe18: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91fe1e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91fe21: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91fe24: jns 0x91fe2b */
  if (!sf) goto L_91fe2b;
L_91fe26: /* 91fe26: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91fe27: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91fe2a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91fe2b: /* 91fe2b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91fe2e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91fe2f: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91fe32: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91fe36: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 91fe39: jne 0x91fde0 */
  if (!zf) goto L_91fde0;
L_91fe3b: /* 91fe3b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91fe3f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 91fe43: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91fe47: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 91fe49: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 91fe4b: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 91fe4d: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 91fe4f: xor edi, edi */
  edi = 0;
L_91fe51: /* 91fe51: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91fe54: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91fe57: mov eax, ecx */
  eax = ecx;
/* 91fe59: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91fe5a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91fe5d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fe5f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91fe62: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91fe68: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91fe6b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91fe6e: jns 0x91fe75 */
  if (!sf) goto L_91fe75;
L_91fe70: /* 91fe70: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91fe71: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91fe74: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91fe75: /* 91fe75: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91fe78: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91fe7b: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 91fe7e: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91fe81: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91fe84: mov eax, ecx */
  eax = ecx;
/* 91fe86: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91fe87: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91fe8a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fe8c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91fe8f: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91fe95: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91fe98: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91fe9b: jns 0x91fea2 */
  if (!sf) goto L_91fea2;
L_91fe9d: /* 91fe9d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91fe9e: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91fea1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91fea2: /* 91fea2: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91fea5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91fea6: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91fea9: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91fead: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 91feb0: jne 0x91fe51 */
  if (!zf) goto L_91fe51;
L_91feb2: /* 91feb2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91feb6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 91feba: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91febe: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 91fec1: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 91fec4: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 91fec7: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 91feca: xor edi, edi */
  edi = 0;
/* 91fecc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91fed0: /* 91fed0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91fed3: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91fed6: mov eax, ecx */
  eax = ecx;
/* 91fed8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91fed9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91fedc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91fede: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91fee1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91fee7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91feea: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91feed: jns 0x91fef4 */
  if (!sf) goto L_91fef4;
L_91feef: /* 91feef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91fef0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91fef3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91fef4: /* 91fef4: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91fef7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91fefa: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 91fefd: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ff00: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91ff03: mov eax, ecx */
  eax = ecx;
/* 91ff05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ff06: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ff09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ff0b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ff0e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ff14: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ff17: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ff1a: jns 0x91ff21 */
  if (!sf) goto L_91ff21;
L_91ff1c: /* 91ff1c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ff1d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ff20: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ff21: /* 91ff21: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91ff24: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91ff25: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91ff28: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91ff2c: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 91ff2f: jne 0x91fed0 */
  if (!zf) goto L_91fed0;
L_91ff31: /* 91ff31: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91ff35: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 91ff39: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91ff3d: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 91ff40: mov dword ptr [ecx + 8], ebp */
  W32((uint32_t)(ecx + 0x8u), ebp);
/* 91ff43: mov dword ptr [ebx + 8], ebp */
  W32((uint32_t)(ebx + 0x8u), ebp);
/* 91ff46: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
/* 91ff49: xor edi, edi */
  edi = 0;
/* 91ff4b: nop  */
/* 91ff4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91ff50: /* 91ff50: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ff53: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91ff56: mov eax, ecx */
  eax = ecx;
/* 91ff58: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ff59: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ff5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ff5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ff61: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ff67: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91ff6a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91ff6d: jns 0x91ff74 */
  if (!sf) goto L_91ff74;
L_91ff6f: /* 91ff6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ff70: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ff73: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ff74: /* 91ff74: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91ff77: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91ff7a: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 91ff7d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ff80: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 91ff83: mov eax, ecx */
  eax = ecx;
/* 91ff85: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ff86: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ff89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ff8b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ff8e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ff94: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ff97: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91ff9a: jns 0x91ffa1 */
  if (!sf) goto L_91ffa1;
L_91ff9c: /* 91ff9c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ff9d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ffa0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ffa1: /* 91ffa1: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91ffa4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91ffa5: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91ffa8: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91ffac: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 91ffaf: jne 0x91ff50 */
  if (!zf) goto L_91ff50;
L_91ffb1: /* 91ffb1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91ffb5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 91ffb9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91ffbd: mov edi, dword ptr [esp + 0xbc] */
  edi = R32((uint32_t)(esp + 0xbcu));
/* 91ffc4: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* 91ffc7: mov dword ptr [ecx + 0xc], ebp */
  W32((uint32_t)(ecx + 0xcu), ebp);
/* 91ffca: mov dword ptr [ebx + 0xc], ebp */
  W32((uint32_t)(ebx + 0xcu), ebp);
/* 91ffcd: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* 91ffd0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 91ffd3: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 91ffd6: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 91ffdc: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 91ffdf: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 91ffe2: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 91ffe5: mov edx, dword ptr [edi + 0xb8] */
  edx = R32((uint32_t)(edi + 0xb8u));
/* 91ffeb: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 91ffef: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 91fff5: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* 91fffc: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91ffff: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920001: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 920005: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* 920009: lea ecx, [edi + 0xc4] */
  ecx = (uint32_t)(edi + 0xc4u);
/* 92000f: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
L_920017: /* 920017: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92001b: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92001e: mov ebx, 4 */
  ebx = 0x4u;
L_920023: /* 920023: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 920026: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 920029: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 92002c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92002f: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 920030: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 920033: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 920036: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920038: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 92003b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 92003e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920040: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 920043: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 920045: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920047: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 92004a: jne 0x920023 */
  if (!zf) goto L_920023;
L_92004c: /* 92004c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 920050: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 920053: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 920054: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 920058: jne 0x920017 */
  if (!zf) goto L_920017;
L_92005a: /* 92005a: mov ebx, dword ptr [edi + 0xb8] */
  ebx = R32((uint32_t)(edi + 0xb8u));
/* 920060: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920063: je 0x9200de */
  if (zf) goto L_9200de;
L_920065: /* 920065: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* 92006c: mov eax, ebx */
  eax = ebx;
/* 92006e: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 920071: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920073: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920076: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 92007a: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 92007e: lea ecx, [edi + 0x104] */
  ecx = (uint32_t)(edi + 0x104u);
/* 920084: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 92008c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_920090: /* 920090: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 920094: mov ebp, 4 */
  ebp = 0x4u;
/* 920099: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9200a0: /* 9200a0: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 9200a3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9200a6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9200a9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9200ac: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 9200ad: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 9200b0: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 9200b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9200b5: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 9200b8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 9200bb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9200bd: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 9200c0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9200c2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9200c4: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 9200c7: jne 0x9200a0 */
  if (!zf) goto L_9200a0;
L_9200c9: /* 9200c9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9200cd: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9200d0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9200d1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9200d5: jne 0x920090 */
  if (!zf) goto L_920090;
L_9200d7: /* 9200d7: xor ebp, ebp */
  ebp = 0;
/* 9200d9: jmp 0x92017e */
  goto L_92017e;
L_9200de: /* 9200de: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 9200e4: mov edx, dword ptr [edi + 0x100] */
  edx = R32((uint32_t)(edi + 0x100u));
/* 9200ea: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 9200f0: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 9200f4: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* 9200fa: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 9200fe: mov edx, dword ptr [edi + 0x10c] */
  edx = R32((uint32_t)(edi + 0x10cu));
/* 920104: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 920108: mov eax, dword ptr [edi + 0x110] */
  eax = R32((uint32_t)(edi + 0x110u));
/* 92010e: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 920112: mov ecx, dword ptr [edi + 0x114] */
  ecx = R32((uint32_t)(edi + 0x114u));
/* 920118: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 92011c: mov edx, dword ptr [edi + 0x118] */
  edx = R32((uint32_t)(edi + 0x118u));
/* 920122: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 920126: mov eax, dword ptr [edi + 0x11c] */
  eax = R32((uint32_t)(edi + 0x11cu));
/* 92012c: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 920130: mov ecx, dword ptr [edi + 0x120] */
  ecx = R32((uint32_t)(edi + 0x120u));
/* 920136: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 92013a: mov edx, dword ptr [edi + 0x124] */
  edx = R32((uint32_t)(edi + 0x124u));
/* 920140: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 920144: mov eax, dword ptr [edi + 0x128] */
  eax = R32((uint32_t)(edi + 0x128u));
/* 92014a: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 92014e: mov ecx, dword ptr [edi + 0x12c] */
  ecx = R32((uint32_t)(edi + 0x12cu));
/* 920154: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 920158: mov edx, dword ptr [edi + 0x130] */
  edx = R32((uint32_t)(edi + 0x130u));
/* 92015e: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 920162: mov eax, dword ptr [edi + 0x134] */
  eax = R32((uint32_t)(edi + 0x134u));
/* 920168: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 92016c: mov ecx, dword ptr [edi + 0x138] */
  ecx = R32((uint32_t)(edi + 0x138u));
/* 920172: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 920176: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 92017a: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
L_92017e: /* 92017e: xor ecx, ecx */
  ecx = 0;
/* 920180: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920183: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 920186: lea edx, [edi + 0x148] */
  edx = (uint32_t)(edi + 0x148u);
/* 92018c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92018d: lea eax, [edi + 0x13c] */
  eax = (uint32_t)(edi + 0x13cu);
/* 920193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 920194: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 920198: lea eax, [esp + 0xac] */
  eax = (uint32_t)(esp + 0xacu);
/* 92019f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9201a0: mov ecx, dword ptr [esp + 0xcc] */
  ecx = R32((uint32_t)(esp + 0xccu));
/* 9201a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9201a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9201a9: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9201ad: shl ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 9201b0: lea edx, [ebx + ecx + 0x30] */
  edx = (uint32_t)(ebx + ecx + 0x30u);
/* 9201b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9201b5: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9201b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9201b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9201ba: call 0x91b810 */
  esp -= 4; W32(esp, 0x9201bfu); SPILL(); f_91b810(); if (g_unwind) return; RELOAD();
/* 9201bf: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9201c3: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9201c7: xor ebx, ebx */
  ebx = 0;
/* 9201c9: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9201cd: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 9201d1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9201d3: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 9201d7: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9201db: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 9201df: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9201e3: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 9201e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9201e9: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 9201ed: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9201f1: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 9201f5: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9201f9: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 9201fd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9201ff: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
L_920203: /* 920203: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 920206: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 920209: mov eax, ecx */
  eax = ecx;
/* 92020b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92020c: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92020f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920211: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920214: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92021a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92021d: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 920220: jns 0x920227 */
  if (!sf) goto L_920227;
L_920222: /* 920222: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 920223: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 920226: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_920227: /* 920227: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 92022a: lea ecx, [ecx + eax*4 + 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xcu);
/* 92022e: mov eax, dword ptr [esp + ebx*4 + 0x68] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x68u));
/* 920232: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 920233: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 920236: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 920239: jb 0x920203 */
  if (cf) goto L_920203;
L_92023b: /* 92023b: cmp dword ptr [edi + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920242: je 0x920280 */
  if (zf) goto L_920280;
L_920244: /* 920244: xor edi, edi */
  edi = 0;
L_920246: /* 920246: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 920249: fld dword ptr [esp + edi*4 + 0x68] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x68u)); FPUSH(v); }
/* 92024d: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 920250: fchs  */
  ST0 = -ST0;
/* 920252: mov eax, ecx */
  eax = ecx;
/* 920254: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920255: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920258: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92025a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92025d: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 920263: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 920266: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 920269: jns 0x920270 */
  if (!sf) goto L_920270;
L_92026b: /* 92026b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92026c: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92026f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_920270: /* 920270: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 920273: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 920274: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 920277: lea ecx, [ecx + eax*4 + 0x24] */
  ecx = (uint32_t)(ecx + eax*4 + 0x24u);
/* 92027b: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 92027e: jb 0x920246 */
  if (cf) goto L_920246;
L_920280: /* 920280: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 920284: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 920288: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 92028c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 920290: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 920294: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 920298: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 92029c: mov dword ptr [eax + 0xc], 0xff7fffff */
  W32((uint32_t)(eax + 0xcu), 0xff7fffffu);
/* 9202a3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9202a5: mov dword ptr [ecx + 0xc], 0x7f7fffff */
  W32((uint32_t)(ecx + 0xcu), 0x7f7fffffu);
/* 9202ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9202ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9202af: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9202b3: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 9202b7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9202b9: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 9202bc: call 0x91b610 */
  esp -= 4; W32(esp, 0x9202c1u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 9202c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9202c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9202c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9202c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9202c5: add esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9202cb: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_9202d0(void) {
  LOAD_REGS();
L_9202d0: /* 9202d0: sub esp, 0x184 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x184u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9202d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9202d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9202d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9202d9: mov esi, dword ptr [esp + 0x194] */
  esi = R32((uint32_t)(esp + 0x194u));
/* 9202e0: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 9202e3: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 9202e6: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 9202e9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9202ec: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9202ee: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 9202f2: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 9202f5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9202f7: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 9202fe: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 920301: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 920303: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 92030a: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 92030d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92030f: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 920313: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 920316: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 920318: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92031a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92031b: xor ebp, ebp */
  ebp = 0;
/* 92031d: mov dword ptr [esp + 0x90], ebx */
  W32((uint32_t)(esp + 0x90u), ebx);
/* 920324: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 920328: xor edi, edi */
  edi = 0;
/* 92032a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_920330: /* 920330: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 920333: mov eax, ecx */
  eax = ecx;
/* 920335: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920336: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920339: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92033b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92033e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 920344: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 920347: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 92034a: jns 0x920351 */
  if (!sf) goto L_920351;
L_92034c: /* 92034c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92034d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 920350: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_920351: /* 920351: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 920354: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 920357: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 92035a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 92035d: mov eax, ecx */
  eax = ecx;
/* 92035f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920360: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920363: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920365: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920368: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92036e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 920371: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 920374: jns 0x92037b */
  if (!sf) goto L_92037b;
L_920376: /* 920376: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 920377: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92037a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92037b: /* 92037b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 92037e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92037f: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920382: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 920386: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 920389: jne 0x920330 */
  if (!zf) goto L_920330;
L_92038b: /* 92038b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 92038f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 920393: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 920397: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 920399: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 92039b: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 92039d: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 92039f: xor edi, edi */
  edi = 0;
L_9203a1: /* 9203a1: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9203a4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9203a5: mov eax, ecx */
  eax = ecx;
/* 9203a7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9203a8: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9203ab: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9203ad: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9203b0: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9203b6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9203b9: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 9203bc: jns 0x9203c3 */
  if (!sf) goto L_9203c3;
L_9203be: /* 9203be: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9203bf: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9203c2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9203c3: /* 9203c3: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 9203c6: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 9203c9: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 9203cc: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9203cf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9203d0: mov eax, ecx */
  eax = ecx;
/* 9203d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9203d3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9203d6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9203d8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9203db: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9203e1: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9203e4: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 9203e7: jns 0x9203ee */
  if (!sf) goto L_9203ee;
L_9203e9: /* 9203e9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9203ea: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9203ed: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9203ee: /* 9203ee: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 9203f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9203f2: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9203f5: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 9203f9: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 9203fc: jne 0x9203a1 */
  if (!zf) goto L_9203a1;
L_9203fe: /* 9203fe: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 920402: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 920406: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 92040a: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 92040d: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 920410: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 920413: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 920416: xor edi, edi */
  edi = 0;
L_920418: /* 920418: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 92041b: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92041e: mov eax, ecx */
  eax = ecx;
/* 920420: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920421: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920424: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920426: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920429: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92042f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 920432: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 920435: jns 0x92043c */
  if (!sf) goto L_92043c;
L_920437: /* 920437: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 920438: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92043b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92043c: /* 92043c: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 92043f: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 920442: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 920445: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 920448: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92044b: mov eax, ecx */
  eax = ecx;
/* 92044d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92044e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920451: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920453: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920456: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92045c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92045f: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 920462: jns 0x920469 */
  if (!sf) goto L_920469;
L_920464: /* 920464: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 920465: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 920468: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_920469: /* 920469: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 92046c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92046d: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920470: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 920474: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 920477: jne 0x920418 */
  if (!zf) goto L_920418;
L_920479: /* 920479: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 92047d: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 920481: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 920485: mov edi, dword ptr [esp + 0x19c] */
  edi = R32((uint32_t)(esp + 0x19cu));
/* 92048c: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 92048f: mov dword ptr [ecx + 8], ebp */
  W32((uint32_t)(ecx + 0x8u), ebp);
/* 920492: mov dword ptr [ebx + 8], ebp */
  W32((uint32_t)(ebx + 0x8u), ebp);
/* 920495: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
/* 920498: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 92049b: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 92049e: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 9204a4: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 9204a7: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 9204aa: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 9204ad: mov edx, dword ptr [edi + 0xb8] */
  edx = R32((uint32_t)(edi + 0xb8u));
/* 9204b3: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 9204b7: lea eax, [edi + 0xbc] */
  eax = (uint32_t)(edi + 0xbcu);
/* 9204bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9204be: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 9204c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9204c3: mov ebx, 3 */
  ebx = 0x3u;
/* 9204c8: call 0x972d20 */
  esp -= 4; W32(esp, 0x9204cdu); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 9204cd: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9204d1: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 9204d4: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 9204da: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9204df: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9204e3: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9204e6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9204e8: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 9204ef: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9204f2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9204f4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9204fb: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 9204fe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920500: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 920504: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 920508: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92050a: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 920511: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 920514: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920516: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 92051a: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92051d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92051f: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 920526: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 920529: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92052b: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 92052f: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 920536: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 920538: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 92053c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92053f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920541: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 920545: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 920548: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92054a: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 920551: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 920554: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920556: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 92055a: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 920561: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 920564: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 92056b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92056d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92056f: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 920573: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 920576: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920578: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 92057c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92057f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920581: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 920585: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 920589: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 92058d: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 920591: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 920595: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 920599: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 92059d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9205a1: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 9205a5: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 9205a9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9205ad: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 9205b3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9205b7: mov ecx, dword ptr [esp + 0x1a0] */
  ecx = R32((uint32_t)(esp + 0x1a0u));
/* 9205be: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9205c0: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9205c3: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 9205c7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9205c9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9205cb: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 9205cf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9205d1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9205d5: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 9205d9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9205db: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9205df: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 9205e3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9205e5: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 9205e9: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 9205ed: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9205ef: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9205f3: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 9205f7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9205f9: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9205fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9205ff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 920601: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 920605: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 920609: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92060b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 92060f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 920611: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 920613: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 920617: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 92061b: fstp dword ptr [esp + 0x130] */
  WF32((uint32_t)(esp + 0x130u), ST0); FPOP();
/* 920622: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 920626: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 92062a: fstp dword ptr [esp + 0x140] */
  WF32((uint32_t)(esp + 0x140u), ST0); FPOP();
/* 920631: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 920635: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 920639: fstp dword ptr [esp + 0x150] */
  WF32((uint32_t)(esp + 0x150u), ST0); FPOP();
/* 920640: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 920644: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 920648: fstp dword ptr [esp + 0x134] */
  WF32((uint32_t)(esp + 0x134u), ST0); FPOP();
/* 92064f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920651: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 920655: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 920657: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 92065b: fstp dword ptr [esp + 0x144] */
  WF32((uint32_t)(esp + 0x144u), ST0); FPOP();
/* 920662: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 920666: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 92066a: fstp dword ptr [esp + 0x154] */
  WF32((uint32_t)(esp + 0x154u), ST0); FPOP();
/* 920671: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 920675: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 920679: fstp dword ptr [esp + 0x138] */
  WF32((uint32_t)(esp + 0x138u), ST0); FPOP();
/* 920680: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 920684: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 920688: fstp dword ptr [esp + 0x148] */
  WF32((uint32_t)(esp + 0x148u), ST0); FPOP();
/* 92068f: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 920693: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 920697: fstp dword ptr [esp + 0x158] */
  WF32((uint32_t)(esp + 0x158u), ST0); FPOP();
/* 92069e: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 9206a1: fmul dword ptr [edi + 0xf0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xf0u)));
/* 9206a7: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 9206aa: fmul dword ptr [edi + 0xf4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xf4u)));
/* 9206b0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9206b2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9206b4: fmul dword ptr [edi + 0xec] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xecu)));
/* 9206ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9206bc: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 9206bf: fstp dword ptr [esp + 0x160] */
  WF32((uint32_t)(esp + 0x160u), ST0); FPOP();
/* 9206c6: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 9206c9: fmul dword ptr [edi + 0xf0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xf0u)));
/* 9206cf: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 9206d2: fmul dword ptr [edi + 0xf4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xf4u)));
/* 9206d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9206da: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9206dd: fmul dword ptr [edi + 0xec] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xecu)));
/* 9206e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9206e5: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 9206e8: fstp dword ptr [esp + 0x164] */
  WF32((uint32_t)(esp + 0x164u), ST0); FPOP();
/* 9206ef: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 9206f2: fmul dword ptr [edi + 0xf0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xf0u)));
/* 9206f8: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 9206fb: fmul dword ptr [edi + 0xf4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xf4u)));
/* 920701: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920703: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 920706: fmul dword ptr [edi + 0xec] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xecu)));
/* 92070c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92070e: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 920711: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 920717: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92071a: fstp dword ptr [esp + 0x168] */
  WF32((uint32_t)(esp + 0x168u), ST0); FPOP();
/* 920721: je 0x920970 */
  if (zf) goto L_920970;
L_920727: /* 920727: lea edx, [edi + 0xfc] */
  edx = (uint32_t)(edi + 0xfcu);
/* 92072d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92072e: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 920732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 920733: call 0x972d20 */
  esp -= 4; W32(esp, 0x920738u); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 920738: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 92073c: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 92073f: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 920745: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92074a: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 92074e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 920751: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920753: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 920757: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92075a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92075c: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 920760: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 920763: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920765: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 920769: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 92076d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92076f: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 920773: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 920776: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920778: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 92077c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92077f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920781: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 920785: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 920788: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92078a: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 92078e: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 920792: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 920794: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 920798: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 92079b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92079d: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9207a1: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9207a4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9207a6: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 9207aa: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9207ad: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9207af: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 9207b3: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 9207b7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9207b9: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 9207bd: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9207c0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9207c2: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9207c6: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 9207c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9207cb: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 9207cf: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9207d2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9207d4: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 9207d8: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9207dc: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 9207e0: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9207e4: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 9207e8: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9207ec: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 9207f0: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9207f4: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 9207f8: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 9207fc: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 920800: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 920804: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 920806: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 92080a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92080c: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 920810: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 920812: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 920816: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 92081a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92081c: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 920820: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 920824: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 920826: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 92082a: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 92082e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 920830: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 920834: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 920838: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 92083e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 920840: mov ecx, dword ptr [esp + 0x1a0] */
  ecx = R32((uint32_t)(esp + 0x1a0u));
/* 920847: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 92084a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92084c: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 920850: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 920852: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 920854: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 920858: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 92085c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92085e: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 920862: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 920864: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 920866: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 92086a: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 92086e: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 920875: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 920879: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 92087d: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 920884: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 920888: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 92088c: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 920893: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 920897: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 92089b: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 9208a2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9208a4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9208a8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9208aa: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 9208ae: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 9208b5: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9208b9: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 9208bd: fstp dword ptr [esp + 0xc8] */
  WF32((uint32_t)(esp + 0xc8u), ST0); FPOP();
/* 9208c4: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9208c8: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 9208cc: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 9208d3: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9208d7: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 9208db: fstp dword ptr [esp + 0xbc] */
  WF32((uint32_t)(esp + 0xbcu), ST0); FPOP();
/* 9208e2: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 9208e6: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 9208ea: fstp dword ptr [esp + 0xcc] */
  WF32((uint32_t)(esp + 0xccu), ST0); FPOP();
/* 9208f1: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 9208f4: fmul dword ptr [edi + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x130u)));
/* 9208fa: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 9208fd: fmul dword ptr [edi + 0x134] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x134u)));
/* 920903: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920905: fld dword ptr [edi + 0x12c] */
  { double v = F32((uint32_t)(edi + 0x12cu)); FPUSH(v); }
/* 92090b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92090d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92090f: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 920912: fstp dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0); FPOP();
/* 920919: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92091c: fmul dword ptr [edi + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x130u)));
/* 920922: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 920925: fmul dword ptr [edi + 0x12c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x12cu)));
/* 92092b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92092d: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 920930: fmul dword ptr [edi + 0x134] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x134u)));
/* 920936: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920938: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92093b: fstp dword ptr [esp + 0xd8] */
  WF32((uint32_t)(esp + 0xd8u), ST0); FPOP();
/* 920942: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 920945: fmul dword ptr [edi + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x130u)));
/* 92094b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92094e: fmul dword ptr [edi + 0x12c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x12cu)));
/* 920954: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920956: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 920959: fmul dword ptr [edi + 0x134] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x134u)));
/* 92095f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920961: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 920964: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 92096b: jmp 0x920a52 */
  goto L_920a52;
L_920970: /* 920970: mov edx, dword ptr [edi + 0x100] */
  edx = R32((uint32_t)(edi + 0x100u));
/* 920976: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 92097c: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 920982: mov dword ptr [esp + 0xa8], edx */
  W32((uint32_t)(esp + 0xa8u), edx);
/* 920989: mov edx, dword ptr [edi + 0x10c] */
  edx = R32((uint32_t)(edi + 0x10cu));
/* 92098f: mov dword ptr [esp + 0xac], eax */
  W32((uint32_t)(esp + 0xacu), eax);
/* 920996: mov eax, dword ptr [edi + 0x110] */
  eax = R32((uint32_t)(edi + 0x110u));
/* 92099c: mov dword ptr [esp + 0xa4], ecx */
  W32((uint32_t)(esp + 0xa4u), ecx);
/* 9209a3: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* 9209a9: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 9209b0: mov edx, dword ptr [edi + 0x118] */
  edx = R32((uint32_t)(edi + 0x118u));
/* 9209b6: mov dword ptr [esp + 0xb8], eax */
  W32((uint32_t)(esp + 0xb8u), eax);
/* 9209bd: mov eax, dword ptr [edi + 0x11c] */
  eax = R32((uint32_t)(edi + 0x11cu));
/* 9209c3: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 9209ca: mov ecx, dword ptr [edi + 0x114] */
  ecx = R32((uint32_t)(edi + 0x114u));
/* 9209d0: mov dword ptr [esp + 0xc0], edx */
  W32((uint32_t)(esp + 0xc0u), edx);
/* 9209d7: mov edx, dword ptr [edi + 0x124] */
  edx = R32((uint32_t)(edi + 0x124u));
/* 9209dd: mov dword ptr [esp + 0xc4], eax */
  W32((uint32_t)(esp + 0xc4u), eax);
/* 9209e4: mov eax, dword ptr [edi + 0x128] */
  eax = R32((uint32_t)(edi + 0x128u));
/* 9209ea: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* 9209f1: mov ecx, dword ptr [edi + 0x120] */
  ecx = R32((uint32_t)(edi + 0x120u));
/* 9209f7: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 9209fe: mov edx, dword ptr [edi + 0x130] */
  edx = R32((uint32_t)(edi + 0x130u));
/* 920a04: mov dword ptr [esp + 0xd0], eax */
  W32((uint32_t)(esp + 0xd0u), eax);
/* 920a0b: mov eax, dword ptr [edi + 0x134] */
  eax = R32((uint32_t)(edi + 0x134u));
/* 920a11: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 920a18: mov ecx, dword ptr [edi + 0x12c] */
  ecx = R32((uint32_t)(edi + 0x12cu));
/* 920a1e: mov dword ptr [esp + 0xd8], edx */
  W32((uint32_t)(esp + 0xd8u), edx);
/* 920a25: lea edx, [esp + 0xa4] */
  edx = (uint32_t)(esp + 0xa4u);
/* 920a2c: mov dword ptr [esp + 0xdc], eax */
  W32((uint32_t)(esp + 0xdcu), eax);
/* 920a33: mov dword ptr [esp + 0xd4], ecx */
  W32((uint32_t)(esp + 0xd4u), ecx);
/* 920a3a: mov ecx, dword ptr [edi + 0x138] */
  ecx = R32((uint32_t)(edi + 0x138u));
/* 920a40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 920a41: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 920a45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 920a46: mov dword ptr [esp + 0xe8], ecx */
  W32((uint32_t)(esp + 0xe8u), ecx);
/* 920a4d: call 0x972d20 */
  esp -= 4; W32(esp, 0x920a52u); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
L_920a52: /* 920a52: xor edx, edx */
  edx = 0;
/* 920a54: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 920a5b: nop  */
/* 920a5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_920a60: /* 920a60: fld dword ptr [esp + edx*4 + 0x44] */
  { double v = F32((uint32_t)(esp + edx*4 + 0x44u)); FPUSH(v); }
/* 920a64: xor eax, eax */
  eax = 0;
L_920a66: /* 920a66: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 920a68: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 920a69: fmul dword ptr [esp + eax*4 + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax*4 + 0x54u)));
/* 920a6d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 920a70: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 920a73: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 920a76: jb 0x920a66 */
  if (cf) goto L_920a66;
L_920a78: /* 920a78: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 920a79: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 920a7b: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 920a7e: jb 0x920a60 */
  if (cf) goto L_920a60;
L_920a80: /* 920a80: fld dword ptr [esp + 0x120] */
  { double v = F32((uint32_t)(esp + 0x120u)); FPUSH(v); }
/* 920a87: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 920a8d: fadd dword ptr [esp + 0x10c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10cu)));
/* 920a94: lea ecx, [edi + 0x148] */
  ecx = (uint32_t)(edi + 0x148u);
/* 920a9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 920a9b: xor ecx, ecx */
  ecx = 0;
/* 920a9d: fadd dword ptr [esp + 0xfc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xfcu)));
/* 920aa4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920aa7: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 920aaa: lea edx, [edi + 0x13c] */
  edx = (uint32_t)(edi + 0x13cu);
/* 920ab0: fadd dword ptr [esp + 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xe8u)));
/* 920ab7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 920ab8: lea edx, [esp + 0xdc] */
  edx = (uint32_t)(esp + 0xdcu);
/* 920abf: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 920ac2: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 920ac9: fld dword ptr [esp + 0x124] */
  { double v = F32((uint32_t)(esp + 0x124u)); FPUSH(v); }
/* 920ad0: fsub dword ptr [esp + 0xfc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xfcu)));
/* 920ad7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 920ad8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 920ad9: lea ecx, [esp + 0x170] */
  ecx = (uint32_t)(esp + 0x170u);
/* 920ae0: fadd dword ptr [esp + 0xf8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xf8u)));
/* 920ae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 920ae8: mov ecx, dword ptr [esp + 0x1b4] */
  ecx = R32((uint32_t)(esp + 0x1b4u));
/* 920aef: lea edx, [eax + ecx + 0x30] */
  edx = (uint32_t)(eax + ecx + 0x30u);
/* 920af3: fsub dword ptr [esp + 0x124] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x124u)));
/* 920afa: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 920b00: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 920b03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 920b04: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 920b0b: lea ecx, [eax + ecx + 0x30] */
  ecx = (uint32_t)(eax + ecx + 0x30u);
/* 920b0f: fld dword ptr [esp + 0x130] */
  { double v = F32((uint32_t)(esp + 0x130u)); FPUSH(v); }
/* 920b16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 920b17: fadd dword ptr [esp + 0x120] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x120u)));
/* 920b1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 920b1f: fsubr dword ptr [esp + 0x120] */
  ST0 = (F32((uint32_t)(esp + 0x120u))) - ST0;
/* 920b26: fadd dword ptr [esp + 0x10c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10cu)));
/* 920b2d: fld dword ptr [esp + 0x128] */
  { double v = F32((uint32_t)(esp + 0x128u)); FPUSH(v); }
/* 920b34: fsub dword ptr [esp + 0x134] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x134u)));
/* 920b3b: fsub dword ptr [esp + 0x11c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x11cu)));
/* 920b42: fadd dword ptr [esp + 0x110] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x110u)));
/* 920b49: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 920b50: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 920b52: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 920b59: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 920b5b: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 920b62: fmul dword ptr [esp + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb8u)));
/* 920b69: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 920b70: fmul dword ptr [esp + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb4u)));
/* 920b77: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920b79: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 920b7b: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 920b7d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920b7f: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 920b81: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 920b83: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920b85: fstp dword ptr [esp + 0x190] */
  WF32((uint32_t)(esp + 0x190u), ST0); FPOP();
/* 920b8c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 920b8e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 920b90: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 920b92: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 920b94: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920b96: fstp dword ptr [esp + 0x19c] */
  WF32((uint32_t)(esp + 0x19cu), ST0); FPOP();
/* 920b9d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 920b9f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 920ba1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 920ba3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 920ba5: fstp dword ptr [esp + 0x1a8] */
  WF32((uint32_t)(esp + 0x1a8u), ST0); FPOP();
/* 920bac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 920bae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 920bb0: call 0x91b810 */
  esp -= 4; W32(esp, 0x920bb5u); SPILL(); f_91b810(); if (g_unwind) return; RELOAD();
/* 920bb5: mov eax, dword ptr [edi + 0x168] */
  eax = R32((uint32_t)(edi + 0x168u));
/* 920bbb: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920bbd: je 0x921050 */
  if (zf) goto L_921050;
L_920bc3: /* 920bc3: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920bc6: fld dword ptr [esp + 0xf8] */
  { double v = F32((uint32_t)(esp + 0xf8u)); FPUSH(v); }
/* 920bcd: fadd dword ptr [esp + 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xe4u)));
/* 920bd4: fsub dword ptr [esp + 0x120] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x120u)));
/* 920bdb: fsub dword ptr [esp + 0x10c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10cu)));
/* 920be2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 920be8: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 920bec: fld dword ptr [esp + 0xf0] */
  { double v = F32((uint32_t)(esp + 0xf0u)); FPUSH(v); }
/* 920bf3: fadd dword ptr [esp + 0xfc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xfcu)));
/* 920bfa: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 920bfe: fld dword ptr [esp + 0x108] */
  { double v = F32((uint32_t)(esp + 0x108u)); FPUSH(v); }
/* 920c05: fadd dword ptr [esp + 0x114] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x114u)));
/* 920c0c: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 920c10: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 920c16: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 920c1a: fld dword ptr [esp + 0x100] */
  { double v = F32((uint32_t)(esp + 0x100u)); FPUSH(v); }
/* 920c21: fsub dword ptr [esp + 0xec] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xecu)));
/* 920c28: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 920c2c: fld dword ptr [esp + 0x118] */
  { double v = F32((uint32_t)(esp + 0x118u)); FPUSH(v); }
/* 920c33: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 920c37: fsub dword ptr [esp + 0x104] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x104u)));
/* 920c3e: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 920c44: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 920c48: jne 0x920de0 */
  if (!zf) goto L_920de0;
L_920c4e: /* 920c4e: xor ebx, ebx */
  ebx = 0;
L_920c50: /* 920c50: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 920c53: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 920c56: mov eax, ecx */
  eax = ecx;
/* 920c58: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920c59: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920c5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920c5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920c61: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 920c67: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 920c6a: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 920c6d: jns 0x920c74 */
  if (!sf) goto L_920c74;
L_920c6f: /* 920c6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 920c70: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 920c73: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_920c74: /* 920c74: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 920c77: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 920c7a: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 920c7d: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 920c80: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 920c83: mov eax, ecx */
  eax = ecx;
/* 920c85: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920c86: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920c89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920c8b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920c8e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 920c94: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 920c97: lea edx, [ebx + eax*4] */
  edx = (uint32_t)(ebx + eax*4);
/* 920c9a: jns 0x920ca1 */
  if (!sf) goto L_920ca1;
L_920c9c: /* 920c9c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 920c9d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 920ca0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_920ca1: /* 920ca1: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 920ca5: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 920ca8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 920ca9: cmp ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920cac: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 920caf: jne 0x920c50 */
  if (!zf) goto L_920c50;
L_920cb1: /* 920cb1: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 920cb5: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 920cb9: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 920cc0: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* 920cc3: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 920cc7: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* 920cca: mov dword ptr [ecx + 0xc], ebp */
  W32((uint32_t)(ecx + 0xcu), ebp);
/* 920ccd: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* 920cd0: xor ecx, ecx */
  ecx = 0;
L_920cd2: /* 920cd2: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 920cd5: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 920cd8: mov eax, ebx */
  eax = ebx;
/* 920cda: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920cdb: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920cde: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920ce0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920ce3: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 920ce9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 920cec: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 920cef: jns 0x920cf6 */
  if (!sf) goto L_920cf6;
L_920cf1: /* 920cf1: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 920cf2: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 920cf5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_920cf6: /* 920cf6: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 920cf9: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 920cfc: mov dword ptr [edx + eax*4], ebp */
  W32((uint32_t)(edx + eax*4), ebp);
/* 920cff: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 920d02: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 920d05: mov eax, ebx */
  eax = ebx;
/* 920d07: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920d08: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920d0b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920d0d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920d10: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 920d16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 920d19: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 920d1c: jns 0x920d23 */
  if (!sf) goto L_920d23;
L_920d1e: /* 920d1e: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 920d1f: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 920d22: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_920d23: /* 920d23: lea eax, [ebx + edx*4 + 0xc] */
  eax = (uint32_t)(ebx + edx*4 + 0xcu);
/* 920d27: mov ebx, dword ptr [esp + ecx*4 + 0x34] */
  ebx = R32((uint32_t)(esp + ecx*4 + 0x34u));
/* 920d2b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 920d2e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 920d2f: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 920d32: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 920d35: jb 0x920cd2 */
  if (cf) goto L_920cd2;
L_920d37: /* 920d37: cmp dword ptr [edi + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920d3e: je 0x920daa */
  if (zf) goto L_920daa;
L_920d40: /* 920d40: xor ecx, ecx */
  ecx = 0;
L_920d42: /* 920d42: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 920d45: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 920d48: mov eax, ebx */
  eax = ebx;
/* 920d4a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920d4b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920d4e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920d50: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920d53: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 920d59: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 920d5c: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 920d5f: jns 0x920d66 */
  if (!sf) goto L_920d66;
L_920d61: /* 920d61: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 920d62: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 920d65: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_920d66: /* 920d66: fld dword ptr [esp + ecx*4 + 0x34] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x34u)); FPUSH(v); }
/* 920d6a: lea eax, [ebx + edx*4 + 0x18] */
  eax = (uint32_t)(ebx + edx*4 + 0x18u);
/* 920d6e: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 920d71: fchs  */
  ST0 = -ST0;
/* 920d73: mov dword ptr [edx + eax*4], ebp */
  W32((uint32_t)(edx + eax*4), ebp);
/* 920d76: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 920d79: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 920d7c: mov eax, ebx */
  eax = ebx;
/* 920d7e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920d7f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920d82: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920d84: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920d87: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 920d8d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 920d90: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 920d93: jns 0x920d9a */
  if (!sf) goto L_920d9a;
L_920d95: /* 920d95: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 920d96: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 920d99: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_920d9a: /* 920d9a: lea eax, [ebx + edx*4 + 0x24] */
  eax = (uint32_t)(ebx + edx*4 + 0x24u);
/* 920d9e: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 920da1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 920da2: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
/* 920da5: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 920da8: jb 0x920d42 */
  if (cf) goto L_920d42;
L_920daa: /* 920daa: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 920db1: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 920db8: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 920dbf: fchs  */
  ST0 = -ST0;
/* 920dc1: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 920dc5: mov dword ptr [eax + 0xc], 0xff7fffff */
  W32((uint32_t)(eax + 0xcu), 0xff7fffffu);
/* 920dcc: mov dword ptr [ecx + 0xc], 0x7f7fffff */
  W32((uint32_t)(ecx + 0xcu), 0x7f7fffffu);
/* 920dd3: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 920dd6: mov ebx, 4 */
  ebx = 0x4u;
/* 920ddb: jmp 0x921050 */
  goto L_921050;
L_920de0: /* 920de0: fld dword ptr [edi + 0x16c] */
  { double v = F32((uint32_t)(edi + 0x16cu)); FPUSH(v); }
/* 920de6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 920de8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 920dea: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 920dee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 920df0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 920df6: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 920dfa: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 920dfe: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 920e02: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* 920e09: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* 920e10: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 920e14: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 920e1b: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 920e22: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920e24: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 920e2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 920e2c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 920e2f: jne 0x92104e */
  if (!zf) goto L_92104e;
L_920e35: /* 920e35: xor ebx, ebx */
  ebx = 0;
L_920e37: /* 920e37: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 920e3a: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 920e3d: mov eax, ecx */
  eax = ecx;
/* 920e3f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920e40: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920e43: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920e45: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920e48: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 920e4e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 920e51: lea edx, [ebx + eax*4] */
  edx = (uint32_t)(ebx + eax*4);
/* 920e54: jns 0x920e5b */
  if (!sf) goto L_920e5b;
L_920e56: /* 920e56: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 920e57: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 920e5a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_920e5b: /* 920e5b: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 920e5e: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 920e61: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 920e64: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 920e67: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 920e6a: mov eax, ecx */
  eax = ecx;
/* 920e6c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920e6d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920e70: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920e72: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920e75: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 920e7b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 920e7e: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 920e81: jns 0x920e88 */
  if (!sf) goto L_920e88;
L_920e83: /* 920e83: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 920e84: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 920e87: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_920e88: /* 920e88: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 920e8b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 920e8c: cmp ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920e8f: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 920e93: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 920e96: jne 0x920e37 */
  if (!zf) goto L_920e37;
L_920e98: /* 920e98: fld dword ptr [esp + 0xf4] */
  { double v = F32((uint32_t)(esp + 0xf4u)); FPUSH(v); }
/* 920e9f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 920ea3: fsub dword ptr [esp + 0xe8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xe8u)));
/* 920eaa: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 920eae: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 920eb5: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* 920eb8: fsub dword ptr [esp + 0x110] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x110u)));
/* 920ebf: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 920ec3: mov dword ptr [ecx + 0xc], ebp */
  W32((uint32_t)(ecx + 0xcu), ebp);
/* 920ec6: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* 920ec9: fadd dword ptr [esp + 0x11c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x11cu)));
/* 920ed0: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* 920ed3: xor ecx, ecx */
  ecx = 0;
/* 920ed5: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 920edb: fstp dword ptr [esp + 0x124] */
  WF32((uint32_t)(esp + 0x124u), ST0); FPOP();
/* 920ee2: fld dword ptr [esp + 0x104] */
  { double v = F32((uint32_t)(esp + 0x104u)); FPUSH(v); }
/* 920ee9: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 920eed: fsub dword ptr [esp + 0x118] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x118u)));
/* 920ef4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 920efa: fstp dword ptr [esp + 0x128] */
  WF32((uint32_t)(esp + 0x128u), ST0); FPOP();
/* 920f01: fld dword ptr [esp + 0x108] */
  { double v = F32((uint32_t)(esp + 0x108u)); FPUSH(v); }
/* 920f08: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 920f0c: fadd dword ptr [esp + 0x114] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x114u)));
/* 920f13: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 920f19: fstp dword ptr [esp + 0x12c] */
  WF32((uint32_t)(esp + 0x12cu), ST0); FPOP();
L_920f20: /* 920f20: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 920f23: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 920f26: mov eax, ebx */
  eax = ebx;
/* 920f28: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920f29: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920f2c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920f2e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920f31: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 920f37: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 920f3a: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 920f3d: jns 0x920f44 */
  if (!sf) goto L_920f44;
L_920f3f: /* 920f3f: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 920f40: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 920f43: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_920f44: /* 920f44: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 920f48: lea edx, [ebx + eax*4] */
  edx = (uint32_t)(ebx + eax*4);
/* 920f4b: fmul dword ptr [esp + ecx*4 + 0x124] */
  ST0 = ST0 * (F32((uint32_t)(esp + ecx*4 + 0x124u)));
/* 920f52: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 920f55: mov dword ptr [eax + edx*4], ebp */
  W32((uint32_t)(eax + edx*4), ebp);
/* 920f58: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 920f5b: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 920f62: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 920f65: mov eax, ebx */
  eax = ebx;
/* 920f67: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920f68: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 920f6a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920f6d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 920f71: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920f73: fmul dword ptr [esp + ecx*4 + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + ecx*4 + 0x34u)));
/* 920f77: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920f7a: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 920f80: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 920f83: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* 920f8a: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 920f8d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 920f8f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 920f91: fst dword ptr [esp + ecx*4 + 0x44] */
  WF32((uint32_t)(esp + ecx*4 + 0x44u), ST0);
/* 920f95: jns 0x920f9c */
  if (!sf) goto L_920f9c;
L_920f97: /* 920f97: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 920f98: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 920f9b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_920f9c: /* 920f9c: lea edx, [ebx + eax*4 + 0xc] */
  edx = (uint32_t)(ebx + eax*4 + 0xcu);
/* 920fa0: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 920fa3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 920fa4: fstp dword ptr [eax + edx*4] */
  WF32((uint32_t)(eax + edx*4), ST0); FPOP();
/* 920fa7: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 920faa: jb 0x920f20 */
  if (cf) goto L_920f20;
L_920fb0: /* 920fb0: cmp dword ptr [edi + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 920fb7: je 0x921028 */
  if (zf) goto L_921028;
L_920fb9: /* 920fb9: xor ecx, ecx */
  ecx = 0;
/* 920fbb: nop  */
/* 920fbc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_920fc0: /* 920fc0: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 920fc3: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 920fc6: mov eax, ebx */
  eax = ebx;
/* 920fc8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920fc9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 920fcc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 920fce: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 920fd1: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 920fd7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 920fda: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 920fdd: jns 0x920fe4 */
  if (!sf) goto L_920fe4;
L_920fdf: /* 920fdf: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 920fe0: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 920fe3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_920fe4: /* 920fe4: fld dword ptr [esp + ecx*4 + 0x44] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x44u)); FPUSH(v); }
/* 920fe8: lea edx, [ebx + eax*4 + 0x18] */
  edx = (uint32_t)(ebx + eax*4 + 0x18u);
/* 920fec: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 920fef: fchs  */
  ST0 = -ST0;
/* 920ff1: mov dword ptr [eax + edx*4], ebp */
  W32((uint32_t)(eax + edx*4), ebp);
/* 920ff4: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 920ff7: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 920ffa: mov eax, ebx */
  eax = ebx;
/* 920ffc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 920ffd: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921000: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921002: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921005: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 92100b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92100e: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 921011: jns 0x921018 */
  if (!sf) goto L_921018;
L_921013: /* 921013: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 921014: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 921017: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_921018: /* 921018: lea edx, [ebx + eax*4 + 0x24] */
  edx = (uint32_t)(ebx + eax*4 + 0x24u);
/* 92101c: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92101f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 921020: fstp dword ptr [eax + edx*4] */
  WF32((uint32_t)(eax + edx*4), ST0); FPOP();
/* 921023: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 921026: jb 0x920fc0 */
  if (cf) goto L_920fc0;
L_921028: /* 921028: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 92102f: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 921036: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 92103a: mov dword ptr [ecx + 0xc], 0xff7fffff */
  W32((uint32_t)(ecx + 0xcu), 0xff7fffffu);
/* 921041: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* 921044: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 921047: mov ebx, 4 */
  ebx = 0x4u;
/* 92104c: jmp 0x921050 */
  goto L_921050;
L_92104e: /* 92104e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_921050: /* 921050: mov eax, dword ptr [edi + 0x164] */
  eax = R32((uint32_t)(edi + 0x164u));
/* 921056: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 921058: je 0x921459 */
  if (zf) goto L_921459;
L_92105e: /* 92105e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 921061: je 0x921459 */
  if (zf) goto L_921459;
L_921067: /* 921067: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92106a: jne 0x921459 */
  if (!zf) goto L_921459;
L_921070: /* 921070: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 921076: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 92107c: fmul dword ptr [esp + 0x17c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x17cu)));
/* 921083: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 921089: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 92108f: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 921091: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 921095: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 92109b: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 9210a1: fmul dword ptr [esp + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x188u)));
/* 9210a8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9210ae: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 9210b4: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 9210b6: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9210bc: fsub dword ptr [esp + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x170u)));
/* 9210c3: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9210c9: fsqrt  */
  ST0 = sqrt(ST0);
/* 9210cb: fld dword ptr [esp + 0x170] */
  { double v = F32((uint32_t)(esp + 0x170u)); FPUSH(v); }
/* 9210d2: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 9210d8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9210de: fsqrt  */
  ST0 = sqrt(ST0);
/* 9210e0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9210e6: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9210e8: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9210ee: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9210f2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9210f4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9210f6: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9210fa: fld dword ptr [esp + 0x188] */
  { double v = F32((uint32_t)(esp + 0x188u)); FPUSH(v); }
/* 921101: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 921103: fld dword ptr [esp + 0x17c] */
  { double v = F32((uint32_t)(esp + 0x17cu)); FPUSH(v); }
/* 92110a: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 92110e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 921110: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 921116: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 92111a: fsqrt  */
  ST0 = sqrt(ST0);
/* 92111c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 921120: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 921124: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 921128: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 92112c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92112e: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 921132: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 921138: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92113a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92113d: jne 0x921457 */
  if (!zf) goto L_921457;
L_921143: /* 921143: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 921147: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 92114b: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 92114f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 921153: fmul dword ptr [esp + 0x170] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x170u)));
/* 92115a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92115e: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 921164: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921166: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 92116a: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 921171: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 921173: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 92117a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92117c: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 921180: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 921187: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 921189: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 92118d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92118f: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 921193: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 921197: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 92119e: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9211a2: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9211a4: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 9211a6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9211a8: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 9211af: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9211b3: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 9211b7: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9211bb: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 9211c2: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9211c6: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 9211ca: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 9211ce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9211d0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9211d2: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9211d6: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 9211dd: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9211e1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9211e3: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 9211e5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9211e7: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 9211ee: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9211f2: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 9211f6: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 9211fd: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 921201: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 921205: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 921207: fmul dword ptr [esp + 0x138] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x138u)));
/* 92120e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 921210: fmul dword ptr [esp + 0x134] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x134u)));
/* 921217: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921219: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 92121d: fmul dword ptr [esp + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x130u)));
/* 921224: fld dword ptr [esp + 0x138] */
  { double v = F32((uint32_t)(esp + 0x138u)); FPUSH(v); }
/* 92122b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 92122d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92122f: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 921233: fld dword ptr [esp + 0x134] */
  { double v = F32((uint32_t)(esp + 0x134u)); FPUSH(v); }
/* 92123a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92123c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92123e: fmul dword ptr [esp + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x130u)));
/* 921245: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921247: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 92124b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92124d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_921250: /* 921250: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 921253: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 921255: mov eax, ecx */
  eax = ecx;
/* 921257: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921258: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92125b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92125d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921260: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 921266: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 921269: lea eax, [ebp + edx*4] */
  eax = (uint32_t)(ebp + edx*4);
/* 92126d: jns 0x921274 */
  if (!sf) goto L_921274;
L_92126f: /* 92126f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 921270: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 921273: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_921274: /* 921274: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 921277: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 92127a: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 921281: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 921284: lea ecx, [eax + ebx] */
  ecx = (uint32_t)(eax + ebx);
/* 921287: mov eax, ecx */
  eax = ecx;
/* 921289: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92128a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92128d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92128f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921292: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 921298: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92129b: lea eax, [ebp + edx*4] */
  eax = (uint32_t)(ebp + edx*4);
/* 92129f: jns 0x9212a6 */
  if (!sf) goto L_9212a6;
L_9212a1: /* 9212a1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9212a2: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9212a5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9212a6: /* 9212a6: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 9212a9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9212aa: cmp ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9212ad: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 9212b1: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 9212b8: jne 0x921250 */
  if (!zf) goto L_921250;
L_9212ba: /* 9212ba: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9212be: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9212c2: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 9212c9: mov dword ptr [eax + ebx*4], 0 */
  W32((uint32_t)(eax + ebx*4), 0x0u);
/* 9212d0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9212d4: mov dword ptr [ecx + ebx*4], 0 */
  W32((uint32_t)(ecx + ebx*4), 0x0u);
/* 9212db: mov dword ptr [edx + ebx*4], 0 */
  W32((uint32_t)(edx + ebx*4), 0x0u);
/* 9212e2: mov dword ptr [eax + ebx*4], 0 */
  W32((uint32_t)(eax + ebx*4), 0x0u);
/* 9212e9: xor ecx, ecx */
  ecx = 0;
/* 9212eb: nop  */
/* 9212ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9212f0: /* 9212f0: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 9212f3: lea ebp, [edx + ebx] */
  ebp = (uint32_t)(edx + ebx);
/* 9212f6: mov eax, ebp */
  eax = ebp;
/* 9212f8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9212f9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9212fc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9212fe: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921301: and ebp, 0x80000003 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebp = r;
  }
/* 921307: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 92130a: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 92130d: jns 0x921314 */
  if (!sf) goto L_921314;
L_92130f: /* 92130f: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 921310: or ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 921313: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_921314: /* 921314: lea eax, [ebp + edx*4] */
  eax = (uint32_t)(ebp + edx*4);
/* 921318: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 92131b: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 921322: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 921325: lea ebp, [eax + ebx] */
  ebp = (uint32_t)(eax + ebx);
/* 921328: mov eax, ebp */
  eax = ebp;
/* 92132a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92132b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92132e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921330: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921333: and ebp, 0x80000003 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebp = r;
  }
/* 921339: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92133c: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 92133f: jns 0x921346 */
  if (!sf) goto L_921346;
L_921341: /* 921341: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 921342: or ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 921345: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_921346: /* 921346: lea edx, [ebp + eax*4 + 0xc] */
  edx = (uint32_t)(ebp + eax*4 + 0xcu);
/* 92134a: mov ebp, dword ptr [esp + ecx*4 + 0x34] */
  ebp = R32((uint32_t)(esp + ecx*4 + 0x34u));
/* 92134e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 921351: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 921352: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 921355: mov dword ptr [eax + edx*4], ebp */
  W32((uint32_t)(eax + edx*4), ebp);
/* 921358: jb 0x9212f0 */
  if (cf) goto L_9212f0;
L_92135a: /* 92135a: cmp dword ptr [edi + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 921361: je 0x9213d1 */
  if (zf) goto L_9213d1;
L_921363: /* 921363: xor ecx, ecx */
  ecx = 0;
L_921365: /* 921365: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 921368: lea ebp, [edx + ebx] */
  ebp = (uint32_t)(edx + ebx);
/* 92136b: mov eax, ebp */
  eax = ebp;
/* 92136d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92136e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921371: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921373: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921376: and ebp, 0x80000003 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebp = r;
  }
/* 92137c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 92137f: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 921382: jns 0x921389 */
  if (!sf) goto L_921389;
L_921384: /* 921384: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 921385: or ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 921388: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_921389: /* 921389: fld dword ptr [esp + ecx*4 + 0x34] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x34u)); FPUSH(v); }
/* 92138d: lea eax, [ebp + edx*4 + 0x18] */
  eax = (uint32_t)(ebp + edx*4 + 0x18u);
/* 921391: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 921394: fchs  */
  ST0 = -ST0;
/* 921396: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 92139d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 9213a0: lea ebp, [eax + ebx] */
  ebp = (uint32_t)(eax + ebx);
/* 9213a3: mov eax, ebp */
  eax = ebp;
/* 9213a5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9213a6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9213a9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9213ab: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9213ae: and ebp, 0x80000003 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebp = r;
  }
/* 9213b4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9213b7: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 9213ba: jns 0x9213c1 */
  if (!sf) goto L_9213c1;
L_9213bc: /* 9213bc: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 9213bd: or ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 9213c0: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_9213c1: /* 9213c1: lea edx, [ebp + eax*4 + 0x24] */
  edx = (uint32_t)(ebp + eax*4 + 0x24u);
/* 9213c5: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9213c8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9213c9: fstp dword ptr [eax + edx*4] */
  WF32((uint32_t)(eax + edx*4), ST0); FPOP();
/* 9213cc: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9213cf: jb 0x921365 */
  if (cf) goto L_921365;
L_9213d1: /* 9213d1: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9213d5: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9213d9: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 9213e0: fchs  */
  ST0 = -ST0;
/* 9213e2: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 9213e9: fstp dword ptr [ecx + ebx*4] */
  WF32((uint32_t)(ecx + ebx*4), ST0); FPOP();
/* 9213ec: mov ecx, dword ptr [esp + 0x1a8] */
  ecx = R32((uint32_t)(esp + 0x1a8u));
/* 9213f3: mov dword ptr [edx + ebx*4], 0 */
  W32((uint32_t)(edx + ebx*4), 0x0u);
/* 9213fa: mov dword ptr [eax + ebx*4], 0x7f7fffff */
  W32((uint32_t)(eax + ebx*4), 0x7f7fffffu);
/* 921401: fld dword ptr [edi + 0x180] */
  { double v = F32((uint32_t)(edi + 0x180u)); FPUSH(v); }
/* 921407: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 921409: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 92140d: fadd dword ptr [edi + 0x184] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x184u)));
/* 921413: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 921419: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92141b: fstp dword ptr [edx + ebx*4] */
  WF32((uint32_t)(edx + ebx*4), ST0); FPOP();
/* 92141e: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 921424: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 921426: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 921429: jp 0x921432 */
  if (pf) goto L_921432;
L_92142b: /* 92142b: mov dword ptr [edx + ebx*4], 0 */
  W32((uint32_t)(edx + ebx*4), 0x0u);
L_921432: /* 921432: fmul dword ptr [edi + 0x180] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x180u)));
/* 921438: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 921439: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92143a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92143b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92143d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 921441: fstp dword ptr [ecx + ebx*4 - 4] */
  WF32((uint32_t)(ecx + ebx*4 + 0xfffffffcu), ST0); FPOP();
/* 921445: call 0x91b610 */
  esp -= 4; W32(esp, 0x92144au); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 92144a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92144b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92144c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92144d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92144e: add esp, 0x184 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x184u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 921454: ret 0x14 */
  esp += 24; SPILL(); return;
L_921457: /* 921457: fstp st(0) */
  STI(0) = ST0; FPOP();
L_921459: /* 921459: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92145a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92145b: call 0x91b610 */
  esp -= 4; W32(esp, 0x921460u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 921460: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 921461: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 921462: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 921463: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 921464: add esp, 0x184 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x184u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92146a: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_921470(void) {
  LOAD_REGS();
L_921470: /* 921470: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 921473: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 921477: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 92147a: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 92147d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 921480: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921482: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 921486: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 921489: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92148b: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 92148f: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 921492: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 921493: mov ebx, dword ptr [ecx + 0x34] */
  ebx = R32((uint32_t)(ecx + 0x34u));
/* 921496: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921498: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 921499: mov ebp, dword ptr [ecx + 0x48] */
  ebp = R32((uint32_t)(ecx + 0x48u));
/* 92149c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9214a0: mov edx, dword ptr [ecx + 0x4c] */
  edx = R32((uint32_t)(ecx + 0x4cu));
/* 9214a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9214a4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9214a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9214a7: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9214a9: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9214ab: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 9214af: xor edi, edi */
  edi = 0;
L_9214b1: /* 9214b1: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 9214b4: mov eax, esi */
  eax = esi;
/* 9214b6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9214b7: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9214ba: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9214bc: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9214bf: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 9214c5: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9214c8: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 9214cb: jns 0x9214d2 */
  if (!sf) goto L_9214d2;
L_9214cd: /* 9214cd: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9214ce: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 9214d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_9214d2: /* 9214d2: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 9214d5: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 9214d8: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 9214df: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 9214e2: mov eax, esi */
  eax = esi;
/* 9214e4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9214e5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9214e8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9214ea: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9214ed: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 9214f3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9214f6: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 9214f9: jns 0x921500 */
  if (!sf) goto L_921500;
L_9214fb: /* 9214fb: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9214fc: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 9214ff: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_921500: /* 921500: lea eax, [esi + edx*4 + 0x18] */
  eax = (uint32_t)(esi + edx*4 + 0x18u);
/* 921504: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 921507: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 921508: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92150b: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 921512: jne 0x9214b1 */
  if (!zf) goto L_9214b1;
L_921514: /* 921514: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 921518: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 92151c: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 921522: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 921529: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 92152f: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 921533: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 921539: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 92153c: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* 92153f: mov esi, dword ptr [ebx + 0xb4] */
  esi = R32((uint32_t)(ebx + 0xb4u));
/* 921545: mov dword ptr [edx + eax*8], esi */
  W32((uint32_t)(edx + eax*8), esi);
/* 921548: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 92154b: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* 92154e: mov esi, dword ptr [ebx + 0xb8] */
  esi = R32((uint32_t)(ebx + 0xb8u));
/* 921554: mov dword ptr [edx + eax*8 + 4], esi */
  W32((uint32_t)(edx + eax*8 + 0x4u), esi);
/* 921558: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 92155e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 921561: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 921565: je 0x9215e6 */
  if (zf) goto L_9215e6;
L_921567: /* 921567: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 92156a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92156c: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 921570: lea ebp, [esp + 0x34] */
  ebp = (uint32_t)(esp + 0x34u);
/* 921574: mov edi, eax */
  edi = eax;
/* 921576: mov dword ptr [esp + 0x48], 4 */
  W32((uint32_t)(esp + 0x48u), 0x4u);
/* 92157e: mov edi, edi */
  edi = edi;
L_921580: /* 921580: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 921586: lea edx, [ebx + 0x16c] */
  edx = (uint32_t)(ebx + 0x16cu);
/* 92158c: mov eax, edi */
  eax = edi;
/* 92158e: mov esi, 3 */
  esi = 0x3u;
L_921593: /* 921593: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 921595: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921598: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 92159a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92159d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 92159e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9215a0: jne 0x921593 */
  if (!zf) goto L_921593;
L_9215a2: /* 9215a2: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 9215a6: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 9215a9: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9215ac: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9215af: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9215b0: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 9215b4: jne 0x921580 */
  if (!zf) goto L_921580;
L_9215b6: /* 9215b6: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 9215ba: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 9215be: lea esi, [edx + 0x30] */
  esi = (uint32_t)(edx + 0x30u);
/* 9215c1: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 9215c7: xor eax, eax */
  eax = 0;
/* 9215c9: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9215cc: lea edx, [edx + edi + 0x30] */
  edx = (uint32_t)(edx + edi + 0x30u);
L_9215d0: /* 9215d0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9215d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9215d3: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 9215d5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9215d8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9215db: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9215de: fstp dword ptr [esp + eax*4 + 0x18] */
  WF32((uint32_t)(esp + eax*4 + 0x18u), ST0); FPOP();
/* 9215e2: jb 0x9215d0 */
  if (cf) goto L_9215d0;
L_9215e4: /* 9215e4: jmp 0x921625 */
  goto L_921625;
L_9215e6: /* 9215e6: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 9215ec: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9215ef: lea eax, [eax + edx + 0x30] */
  eax = (uint32_t)(eax + edx + 0x30u);
/* 9215f3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9215f5: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9215f9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9215fc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9215ff: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 921603: mov edx, dword ptr [ebx + 0x16c] */
  edx = R32((uint32_t)(ebx + 0x16cu));
/* 921609: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 92160d: mov eax, dword ptr [ebx + 0x170] */
  eax = R32((uint32_t)(ebx + 0x170u));
/* 921613: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 921617: mov edx, dword ptr [ebx + 0x174] */
  edx = R32((uint32_t)(ebx + 0x174u));
/* 92161d: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 921621: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
L_921625: /* 921625: xor edi, edi */
  edi = 0;
L_921627: /* 921627: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 92162a: mov eax, esi */
  eax = esi;
/* 92162c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92162d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921630: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921632: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921635: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 92163b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 92163e: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 921641: jns 0x921648 */
  if (!sf) goto L_921648;
L_921643: /* 921643: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 921644: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 921647: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_921648: /* 921648: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 92164b: mov esi, dword ptr [esp + edi*4 + 0x34] */
  esi = R32((uint32_t)(esp + edi*4 + 0x34u));
/* 92164f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 921652: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 921653: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 921656: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 921659: jb 0x921627 */
  if (cf) goto L_921627;
L_92165b: /* 92165b: cmp dword ptr [ebx + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 921662: je 0x921716 */
  if (zf) goto L_921716;
L_921668: /* 921668: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92166c: xor esi, esi */
  esi = 0;
/* 92166e: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 921672: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 921676: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 92167a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92167c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 921680: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 921684: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 921688: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92168c: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 921690: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921692: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 921696: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92169a: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 92169e: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9216a2: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9216a6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9216a8: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9216ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9216b0: /* 9216b0: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 9216b3: fld dword ptr [esp + esi*4 + 0x34] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x34u)); FPUSH(v); }
/* 9216b7: mov eax, edi */
  eax = edi;
/* 9216b9: fchs  */
  ST0 = -ST0;
/* 9216bb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9216bc: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9216bf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9216c1: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9216c4: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 9216ca: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9216cd: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
/* 9216d0: jns 0x9216d7 */
  if (!sf) goto L_9216d7;
L_9216d2: /* 9216d2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9216d3: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 9216d6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_9216d7: /* 9216d7: lea eax, [edi + edx*4 + 0x18] */
  eax = (uint32_t)(edi + edx*4 + 0x18u);
/* 9216db: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 9216de: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
/* 9216e1: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 9216e4: mov eax, edi */
  eax = edi;
/* 9216e6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9216e7: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9216ea: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9216ec: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9216ef: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 9216f5: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9216f8: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
/* 9216fb: jns 0x921702 */
  if (!sf) goto L_921702;
L_9216fd: /* 9216fd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9216fe: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 921701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_921702: /* 921702: lea eax, [edi + edx*4 + 0x24] */
  eax = (uint32_t)(edi + edx*4 + 0x24u);
/* 921706: mov edi, dword ptr [esp + esi*4 + 0x28] */
  edi = R32((uint32_t)(esp + esi*4 + 0x28u));
/* 92170a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 92170d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 92170e: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 921711: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 921714: jb 0x9216b0 */
  if (cf) goto L_9216b0;
L_921716: /* 921716: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92171a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92171e: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 921722: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 921726: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92172a: mov dword ptr [eax], 0xff7fffff */
  W32((uint32_t)(eax), 0xff7fffffu);
/* 921730: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 921734: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 921738: mov dword ptr [edx], 0x7f7fffff */
  W32((uint32_t)(edx), 0x7f7fffffu);
/* 92173e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 921740: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 921742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 921743: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 921747: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 92174b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92174d: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 921753: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 921755: call 0x91b610 */
  esp -= 4; W32(esp, 0x92175au); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 92175a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92175b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92175c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92175d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92175e: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 921761: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_921770(void) {
  LOAD_REGS();
L_921770: /* 921770: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 921773: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 921777: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 92177a: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 92177d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 921780: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921782: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 921786: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 921789: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92178b: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 92178f: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 921792: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 921793: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921795: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 921796: mov ebp, dword ptr [ecx + 0x48] */
  ebp = R32((uint32_t)(ecx + 0x48u));
/* 921799: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92179a: mov esi, dword ptr [ecx + 0x34] */
  esi = R32((uint32_t)(ecx + 0x34u));
/* 92179d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9217a1: mov edx, dword ptr [ecx + 0x4c] */
  edx = R32((uint32_t)(ecx + 0x4cu));
/* 9217a4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9217a6: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9217a8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9217aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9217ab: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9217af: xor ebx, ebx */
  ebx = 0;
L_9217b1: /* 9217b1: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 9217b4: mov eax, edi */
  eax = edi;
/* 9217b6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9217b7: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9217ba: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9217bc: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9217bf: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 9217c5: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9217c8: lea edx, [ebx + eax*4] */
  edx = (uint32_t)(ebx + eax*4);
/* 9217cb: jns 0x9217d2 */
  if (!sf) goto L_9217d2;
L_9217cd: /* 9217cd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9217ce: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 9217d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_9217d2: /* 9217d2: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 9217d5: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 9217d8: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 9217df: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 9217e2: mov eax, edi */
  eax = edi;
/* 9217e4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9217e5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9217e8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9217ea: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9217ed: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 9217f3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9217f6: lea edx, [ebx + eax*4] */
  edx = (uint32_t)(ebx + eax*4);
/* 9217f9: jns 0x921800 */
  if (!sf) goto L_921800;
L_9217fb: /* 9217fb: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9217fc: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 9217ff: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_921800: /* 921800: lea eax, [edi + edx*4 + 0x18] */
  eax = (uint32_t)(edi + edx*4 + 0x18u);
/* 921804: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 921807: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 921808: cmp ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92180b: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 921812: jne 0x9217b1 */
  if (!zf) goto L_9217b1;
L_921814: /* 921814: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 921818: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92181c: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 921822: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 921829: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 92182f: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 921835: xor ebx, ebx */
  ebx = 0;
L_921837: /* 921837: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 92183a: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 92183d: mov eax, edi */
  eax = edi;
/* 92183f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921840: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921843: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921845: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921848: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 92184e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 921851: lea edx, [ebx + eax*4] */
  edx = (uint32_t)(ebx + eax*4);
/* 921854: jns 0x92185b */
  if (!sf) goto L_92185b;
L_921856: /* 921856: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 921857: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 92185a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_92185b: /* 92185b: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 92185e: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 921861: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 921868: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 92186b: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 92186e: mov eax, edi */
  eax = edi;
/* 921870: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921871: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921874: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921876: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921879: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 92187f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 921882: lea edx, [ebx + eax*4] */
  edx = (uint32_t)(ebx + eax*4);
/* 921885: jns 0x92188c */
  if (!sf) goto L_92188c;
L_921887: /* 921887: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 921888: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 92188b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_92188c: /* 92188c: lea eax, [edi + edx*4 + 0x18] */
  eax = (uint32_t)(edi + edx*4 + 0x18u);
/* 921890: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 921893: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 921894: cmp ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 921897: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 92189e: jne 0x921837 */
  if (!zf) goto L_921837;
L_9218a0: /* 9218a0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9218a4: xor eax, eax */
  eax = 0;
/* 9218a6: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 9218a9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9218ad: mov dword ptr [ebp + 4], eax */
  W32((uint32_t)(ebp + 0x4u), eax);
/* 9218b0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9218b3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 9218b6: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 9218bd: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 9218c0: mov esi, dword ptr [ecx + 0x58] */
  esi = R32((uint32_t)(ecx + 0x58u));
/* 9218c3: mov edi, dword ptr [edx + 0xb4] */
  edi = R32((uint32_t)(edx + 0xb4u));
/* 9218c9: mov dword ptr [esi + eax*8], edi */
  W32((uint32_t)(esi + eax*8), edi);
/* 9218cc: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 9218cf: mov esi, dword ptr [ecx + 0x58] */
  esi = R32((uint32_t)(ecx + 0x58u));
/* 9218d2: mov edi, dword ptr [edx + 0xb8] */
  edi = R32((uint32_t)(edx + 0xb8u));
/* 9218d8: mov dword ptr [esi + eax*8 + 4], edi */
  W32((uint32_t)(esi + eax*8 + 0x4u), edi);
/* 9218dc: mov eax, dword ptr [edx + 0xb8] */
  eax = R32((uint32_t)(edx + 0xb8u));
/* 9218e2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9218e5: jne 0x921946 */
  if (!zf) goto L_921946;
L_9218e7: /* 9218e7: mov eax, dword ptr [edx + 0x16c] */
  eax = R32((uint32_t)(edx + 0x16cu));
/* 9218ed: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9218f1: mov eax, dword ptr [edx + 0x170] */
  eax = R32((uint32_t)(edx + 0x170u));
/* 9218f7: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 9218fb: mov eax, dword ptr [edx + 0x174] */
  eax = R32((uint32_t)(edx + 0x174u));
/* 921901: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 921905: mov eax, dword ptr [edx + 0x190] */
  eax = R32((uint32_t)(edx + 0x190u));
/* 92190b: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 92190f: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* 921915: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 921919: mov eax, dword ptr [edx + 0x198] */
  eax = R32((uint32_t)(edx + 0x198u));
/* 92191f: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 921923: mov eax, dword ptr [edx + 0x184] */
  eax = R32((uint32_t)(edx + 0x184u));
/* 921929: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 92192d: mov eax, dword ptr [edx + 0x188] */
  eax = R32((uint32_t)(edx + 0x188u));
/* 921933: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 921937: mov eax, dword ptr [edx + 0x18c] */
  eax = R32((uint32_t)(edx + 0x18cu));
/* 92193d: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 921941: jmp 0x921a6a */
  goto L_921a6a;
L_921946: /* 921946: mov esi, dword ptr [esp + 0x94] */
  esi = R32((uint32_t)(esp + 0x94u));
/* 92194d: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 921950: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921952: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 921956: lea ebx, [esp + 0x58] */
  ebx = (uint32_t)(esp + 0x58u);
/* 92195a: lea ebp, [edx + 0x184] */
  ebp = (uint32_t)(edx + 0x184u);
/* 921960: mov esi, eax */
  esi = eax;
/* 921962: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
/* 92196a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_921970: /* 921970: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 921976: mov edx, ebp */
  edx = ebp;
/* 921978: mov eax, esi */
  eax = esi;
/* 92197a: mov edi, 3 */
  edi = 0x3u;
/* 92197f: nop  */
L_921980: /* 921980: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 921982: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921985: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 921987: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92198a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 92198b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92198d: jne 0x921980 */
  if (!zf) goto L_921980;
L_92198f: /* 92198f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 921993: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 921995: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 921998: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92199b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 92199c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9219a0: jne 0x921970 */
  if (!zf) goto L_921970;
L_9219a2: /* 9219a2: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 9219a9: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9219ad: lea ebx, [esp + 0x68] */
  ebx = (uint32_t)(esp + 0x68u);
/* 9219b1: lea ebp, [edx + 0x190] */
  ebp = (uint32_t)(edx + 0x190u);
/* 9219b7: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
/* 9219bf: nop  */
L_9219c0: /* 9219c0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9219c6: mov edx, ebp */
  edx = ebp;
/* 9219c8: mov eax, esi */
  eax = esi;
/* 9219ca: mov edi, 3 */
  edi = 0x3u;
/* 9219cf: nop  */
L_9219d0: /* 9219d0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9219d2: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9219d5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9219d7: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9219da: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 9219db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9219dd: jne 0x9219d0 */
  if (!zf) goto L_9219d0;
L_9219df: /* 9219df: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9219e3: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9219e5: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9219e8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9219eb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9219ec: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9219f0: jne 0x9219c0 */
  if (!zf) goto L_9219c0;
L_9219f2: /* 9219f2: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 9219f9: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9219fd: lea ebx, [esp + 0x3c] */
  ebx = (uint32_t)(esp + 0x3cu);
/* 921a01: lea ebp, [eax + 0x16c] */
  ebp = (uint32_t)(eax + 0x16cu);
/* 921a07: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
/* 921a0f: nop  */
L_921a10: /* 921a10: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 921a16: mov edx, ebp */
  edx = ebp;
/* 921a18: mov eax, esi */
  eax = esi;
/* 921a1a: mov edi, 3 */
  edi = 0x3u;
/* 921a1f: nop  */
L_921a20: /* 921a20: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 921a22: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921a25: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 921a27: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921a2a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 921a2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 921a2d: jne 0x921a20 */
  if (!zf) goto L_921a20;
L_921a2f: /* 921a2f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 921a33: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 921a35: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 921a38: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 921a3b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 921a3c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 921a40: jne 0x921a10 */
  if (!zf) goto L_921a10;
L_921a42: /* 921a42: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 921a46: xor eax, eax */
  eax = 0;
/* 921a48: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921a4b: nop  */
/* 921a4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_921a50: /* 921a50: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 921a52: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 921a53: fadd dword ptr [esp + eax*4 + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x38u)));
/* 921a57: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921a5a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 921a5d: fstp dword ptr [esp + eax*4 + 0x38] */
  WF32((uint32_t)(esp + eax*4 + 0x38u), ST0); FPOP();
/* 921a61: jb 0x921a50 */
  if (cf) goto L_921a50;
L_921a63: /* 921a63: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
L_921a6a: /* 921a6a: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 921a70: mov esi, dword ptr [esp + 0x94] */
  esi = R32((uint32_t)(esp + 0x94u));
/* 921a77: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 921a7a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 921a7c: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 921a80: lea ebx, [esp + 0x78] */
  ebx = (uint32_t)(esp + 0x78u);
/* 921a84: lea ebp, [edx + 0x160] */
  ebp = (uint32_t)(edx + 0x160u);
/* 921a8a: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
L_921a92: /* 921a92: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 921a98: mov edx, ebp */
  edx = ebp;
/* 921a9a: mov eax, esi */
  eax = esi;
/* 921a9c: mov edi, 3 */
  edi = 0x3u;
L_921aa1: /* 921aa1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 921aa3: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921aa6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 921aa8: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921aab: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 921aac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 921aae: jne 0x921aa1 */
  if (!zf) goto L_921aa1;
L_921ab0: /* 921ab0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 921ab4: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 921ab6: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 921ab9: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 921abc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 921abd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 921ac1: jne 0x921a92 */
  if (!zf) goto L_921a92;
L_921ac3: /* 921ac3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 921ac7: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921aca: xor eax, eax */
  eax = 0;
/* 921acc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_921ad0: /* 921ad0: fld dword ptr [esp + eax + 0x78] */
  { double v = F32((uint32_t)(esp + eax + 0x78u)); FPUSH(v); }
/* 921ad4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921ad7: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 921ad9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921adc: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 921adf: fst dword ptr [esp + eax + 0x20] */
  WF32((uint32_t)(esp + eax + 0x20u), ST0);
/* 921ae3: fsub dword ptr [esp + eax + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + eax + 0x38u)));
/* 921ae7: fstp dword ptr [esp + eax + 0x48] */
  WF32((uint32_t)(esp + eax + 0x48u), ST0); FPOP();
/* 921aeb: jb 0x921ad0 */
  if (cf) goto L_921ad0;
L_921aed: /* 921aed: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 921af1: xor edi, edi */
  edi = 0;
/* 921af3: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 921af7: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 921afb: fmul dword ptr [esp + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x80u)));
/* 921b02: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921b04: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 921b08: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 921b0f: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 921b13: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 921b17: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 921b1b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921b1d: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 921b21: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 921b25: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 921b29: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 921b2d: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 921b31: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921b33: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 921b37: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 921b3b: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 921b3f: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 921b43: fmul dword ptr [esp + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x80u)));
/* 921b4a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921b4c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 921b50: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 921b57: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 921b5b: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 921b5f: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 921b63: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921b65: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 921b69: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 921b6d: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 921b71: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 921b75: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 921b79: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921b7b: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 921b7f: nop  */
L_921b80: /* 921b80: mov ebx, dword ptr [ecx + 0x14] */
  ebx = R32((uint32_t)(ecx + 0x14u));
/* 921b83: mov eax, ebx */
  eax = ebx;
/* 921b85: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921b86: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921b89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921b8b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921b8e: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 921b94: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 921b97: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 921b9a: jns 0x921ba1 */
  if (!sf) goto L_921ba1;
L_921b9c: /* 921b9c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 921b9d: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 921ba0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_921ba1: /* 921ba1: mov esi, dword ptr [esp + edi*4 + 0x58] */
  esi = R32((uint32_t)(esp + edi*4 + 0x58u));
/* 921ba5: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 921ba8: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 921bab: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 921bae: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 921bb1: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 921bb4: mov eax, ebx */
  eax = ebx;
/* 921bb6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921bb7: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921bba: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921bbc: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921bbf: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 921bc5: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 921bc8: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 921bcb: jns 0x921bd2 */
  if (!sf) goto L_921bd2;
L_921bcd: /* 921bcd: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 921bce: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 921bd1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_921bd2: /* 921bd2: mov esi, dword ptr [esp + edi*4 + 0x68] */
  esi = R32((uint32_t)(esp + edi*4 + 0x68u));
/* 921bd6: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 921bd9: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 921bdc: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 921bdf: mov ebx, dword ptr [ecx + 0x14] */
  ebx = R32((uint32_t)(ecx + 0x14u));
/* 921be2: mov eax, ebx */
  eax = ebx;
/* 921be4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921be5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921be8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921bea: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921bed: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 921bf3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 921bf6: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 921bf9: jns 0x921c00 */
  if (!sf) goto L_921c00;
L_921bfb: /* 921bfb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 921bfc: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 921bff: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_921c00: /* 921c00: mov esi, dword ptr [esp + edi*4 + 0x30] */
  esi = R32((uint32_t)(esp + edi*4 + 0x30u));
/* 921c04: lea eax, [ebx + edx*4 + 0xc] */
  eax = (uint32_t)(ebx + edx*4 + 0xcu);
/* 921c08: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 921c0b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 921c0e: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 921c11: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 921c14: mov eax, ebx */
  eax = ebx;
/* 921c16: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921c17: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921c1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921c1c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921c1f: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 921c25: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 921c28: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 921c2b: jns 0x921c32 */
  if (!sf) goto L_921c32;
L_921c2d: /* 921c2d: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 921c2e: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 921c31: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_921c32: /* 921c32: mov esi, dword ptr [esp + edi*4 + 0x3c] */
  esi = R32((uint32_t)(esp + edi*4 + 0x3cu));
/* 921c36: lea eax, [ebx + edx*4 + 0xc] */
  eax = (uint32_t)(ebx + edx*4 + 0xcu);
/* 921c3a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 921c3d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 921c3e: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 921c41: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 921c44: jb 0x921b80 */
  if (cf) goto L_921b80;
L_921c4a: /* 921c4a: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 921c51: mov edx, dword ptr [eax + 0xb8] */
  edx = R32((uint32_t)(eax + 0xb8u));
/* 921c57: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 921c5a: je 0x921de0 */
  if (zf) goto L_921de0;
L_921c60: /* 921c60: mov esi, dword ptr [esp + 0x94] */
  esi = R32((uint32_t)(esp + 0x94u));
/* 921c67: xor eax, eax */
  eax = 0;
/* 921c69: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 921c6c: lea edx, [edx + esi + 0x30] */
  edx = (uint32_t)(edx + esi + 0x30u);
L_921c70: /* 921c70: fld dword ptr [esp + eax*4 + 0x24] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x24u)); FPUSH(v); }
/* 921c74: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 921c75: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 921c77: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 921c7a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 921c7d: fstp dword ptr [esp + eax*4 + 0x20] */
  WF32((uint32_t)(esp + eax*4 + 0x20u), ST0); FPOP();
/* 921c81: jb 0x921c70 */
  if (cf) goto L_921c70;
L_921c83: /* 921c83: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 921c87: xor esi, esi */
  esi = 0;
/* 921c89: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 921c8d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 921c91: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 921c95: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921c97: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 921c9b: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 921c9f: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 921ca3: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 921ca7: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 921cab: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921cad: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 921cb1: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 921cb5: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 921cb9: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 921cbd: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 921cc1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921cc3: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 921cc7: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 921ccb: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 921ccf: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 921cd3: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 921cd7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921cd9: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 921cdd: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 921ce1: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 921ce5: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 921ce9: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 921ced: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921cef: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 921cf3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 921cf7: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 921cfb: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 921cff: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 921d03: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 921d05: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 921d09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_921d10: /* 921d10: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 921d13: fld dword ptr [esp + esi*4 + 0x58] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x58u)); FPUSH(v); }
/* 921d17: mov eax, edi */
  eax = edi;
/* 921d19: fchs  */
  ST0 = -ST0;
/* 921d1b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921d1c: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921d1f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921d21: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921d24: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 921d2a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 921d2d: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 921d30: jns 0x921d37 */
  if (!sf) goto L_921d37;
L_921d32: /* 921d32: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 921d33: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 921d36: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_921d37: /* 921d37: lea edx, [edi + eax*4 + 0x18] */
  edx = (uint32_t)(edi + eax*4 + 0x18u);
/* 921d3b: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 921d3e: fstp dword ptr [eax + edx*4] */
  WF32((uint32_t)(eax + edx*4), ST0); FPOP();
/* 921d41: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 921d44: fld dword ptr [esp + esi*4 + 0x68] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x68u)); FPUSH(v); }
/* 921d48: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 921d4b: mov eax, edi */
  eax = edi;
/* 921d4d: fchs  */
  ST0 = -ST0;
/* 921d4f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921d50: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921d53: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921d55: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921d58: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 921d5e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 921d61: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 921d64: jns 0x921d6b */
  if (!sf) goto L_921d6b;
L_921d66: /* 921d66: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 921d67: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 921d6a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_921d6b: /* 921d6b: lea edx, [edi + eax*4 + 0x18] */
  edx = (uint32_t)(edi + eax*4 + 0x18u);
/* 921d6f: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 921d72: fstp dword ptr [eax + edx*4] */
  WF32((uint32_t)(eax + edx*4), ST0); FPOP();
/* 921d75: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 921d78: mov eax, edi */
  eax = edi;
/* 921d7a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921d7b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921d7e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921d80: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921d83: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 921d89: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 921d8c: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 921d8f: jns 0x921d96 */
  if (!sf) goto L_921d96;
L_921d91: /* 921d91: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 921d92: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 921d95: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_921d96: /* 921d96: lea edx, [edi + eax*4 + 0x24] */
  edx = (uint32_t)(edi + eax*4 + 0x24u);
/* 921d9a: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 921d9d: mov edi, dword ptr [esp + esi*4 + 0x30] */
  edi = R32((uint32_t)(esp + esi*4 + 0x30u));
/* 921da1: mov dword ptr [eax + edx*4], edi */
  W32((uint32_t)(eax + edx*4), edi);
/* 921da4: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 921da7: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 921daa: mov eax, edi */
  eax = edi;
/* 921dac: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921dad: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921db0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921db2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921db5: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 921dbb: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 921dbe: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 921dc1: jns 0x921dc8 */
  if (!sf) goto L_921dc8;
L_921dc3: /* 921dc3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 921dc4: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 921dc7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_921dc8: /* 921dc8: lea edx, [edi + eax*4 + 0x24] */
  edx = (uint32_t)(edi + eax*4 + 0x24u);
/* 921dcc: mov edi, dword ptr [esp + esi*4 + 0x3c] */
  edi = R32((uint32_t)(esp + esi*4 + 0x3cu));
/* 921dd0: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 921dd3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 921dd4: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 921dd7: mov dword ptr [eax + edx*4], edi */
  W32((uint32_t)(eax + edx*4), edi);
/* 921dda: jb 0x921d10 */
  if (cf) goto L_921d10;
L_921de0: /* 921de0: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 921de4: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 921de8: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 921dec: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 921df0: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 921df4: mov dword ptr [eax], 0xff7fffff */
  W32((uint32_t)(eax), 0xff7fffffu);
/* 921dfa: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 921dfe: mov dword ptr [edx], 0x7f7fffff */
  W32((uint32_t)(edx), 0x7f7fffffu);
/* 921e04: mov dword ptr [eax + 4], 0xff7fffff */
  W32((uint32_t)(eax + 0x4u), 0xff7fffffu);
/* 921e0b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 921e0f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 921e11: mov dword ptr [edx + 4], 0x7f7fffff */
  W32((uint32_t)(edx + 0x4u), 0x7f7fffffu);
/* 921e18: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 921e1c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 921e1e: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 921e22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 921e23: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 921e25: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 921e27: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 921e2b: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 921e2f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 921e33: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 921e37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 921e39: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 921e3d: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 921e41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 921e43: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 921e46: call 0x91b610 */
  esp -= 4; W32(esp, 0x921e4bu); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 921e4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 921e4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 921e4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 921e4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 921e4f: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 921e52: ret 0x14 */
  esp += 24; SPILL(); return;
}
